/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9934
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

class CardsCheating {
public:
    int numberOfShuffles(vector<int> cards, vector<int> shuffle);
};

int CardsCheating::numberOfShuffles(vector<int> cards, vector<int> shuffle) {
    int ret;
    return ret;
}


int test0() {
    vector<int> cards = {0, 1, 2, 0, 1, 2};
    vector<int> shuffle = {1, 4, 0, 3, 2, 5};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
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
    vector<int> cards = {2, 0, 1};
    vector<int> shuffle = {1, 2, 0};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cards = {1, 1, 2, 0, 2, 0, 1, 0, 2, 2, 1, 0};
    vector<int> shuffle = {5, 0, 9, 7, 1, 8, 3, 10, 4, 11, 6, 2};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cards = {1, 0, 2};
    vector<int> shuffle = {0, 2, 1};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cards = {1, 2, 0};
    vector<int> shuffle = {2, 0, 1};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cards = {0, 1, 2};
    vector<int> shuffle = {0, 1, 2};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
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
    vector<int> cards = {1, 2, 0};
    vector<int> shuffle = {2, 0, 1};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cards = {0, 1, 0};
    vector<int> shuffle = {1, 0, 2};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
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
    vector<int> cards = {2, 0, 1, 0, 2, 1};
    vector<int> shuffle = {1, 5, 4, 3, 2, 0};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cards = {0, 1, 1, 2, 2, 0};
    vector<int> shuffle = {5, 2, 4, 0, 1, 3};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
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
    vector<int> cards = {0, 1, 2, 0, 1, 2};
    vector<int> shuffle = {0, 1, 2, 3, 4, 5};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cards = {2, 0, 1, 2, 0, 0};
    vector<int> shuffle = {1, 2, 3, 4, 5, 0};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cards = {1, 1, 0, 2, 0, 2};
    vector<int> shuffle = {4, 0, 5, 2, 1, 3};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
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
    vector<int> cards = {0, 1, 2, 0, 2, 1, 0, 2, 1};
    vector<int> shuffle = {7, 4, 6, 5, 8, 0, 2, 3, 1};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cards = {1, 2, 0, 1, 2, 1, 2, 0, 0};
    vector<int> shuffle = {5, 0, 4, 8, 7, 3, 2, 1, 6};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cards = {0, 1, 2, 1, 1, 0, 2, 0, 2};
    vector<int> shuffle = {4, 0, 8, 2, 5, 1, 6, 7, 3};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cards = {2, 0, 1, 0, 2, 1, 0, 2, 1};
    vector<int> shuffle = {6, 8, 7, 1, 5, 0, 3, 2, 4};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cards = {2, 0, 2, 1, 1, 0, 2, 0, 1};
    vector<int> shuffle = {7, 4, 2, 1, 8, 0, 5, 3, 6};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cards = {2, 2, 0, 1, 0, 1, 2, 0, 2, 0, 1, 1};
    vector<int> shuffle = {2, 5, 0, 6, 7, 1, 4, 11, 10, 8, 9, 3};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cards = {1, 2, 1, 1, 2, 2, 0, 2, 1, 0, 0, 0};
    vector<int> shuffle = {1, 11, 10, 7, 8, 4, 9, 2, 5, 0, 3, 6};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cards = {0, 2, 0, 2, 1, 1, 2, 1, 0, 2, 0, 1};
    vector<int> shuffle = {7, 11, 8, 6, 3, 9, 1, 0, 4, 10, 5, 2};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cards = {0, 1, 1, 2, 2, 0, 1, 0, 0, 2, 2, 1};
    vector<int> shuffle = {0, 7, 4, 9, 11, 3, 10, 6, 5, 8, 2, 1};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cards = {2, 1, 2, 1, 2, 0, 1, 0, 0, 0, 2, 1};
    vector<int> shuffle = {11, 7, 8, 1, 5, 6, 4, 3, 10, 2, 0, 9};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cards = {1, 2, 0, 1, 0, 2, 2, 1, 0, 1, 0, 0, 1, 2, 2};
    vector<int> shuffle = {1, 5, 0, 10, 9, 2, 13, 3, 12, 4, 7, 8, 6, 11, 14};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cards = {0, 1, 2, 0, 1, 0, 0, 1, 2, 0, 1, 2, 1, 2, 2};
    vector<int> shuffle = {14, 4, 9, 1, 2, 13, 6, 3, 0, 11, 12, 7, 5, 10, 8};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cards = {2, 2, 1, 0, 2, 2, 1, 0, 1, 0, 0, 2, 1, 0, 1};
    vector<int> shuffle = {7, 14, 0, 6, 11, 9, 13, 5, 4, 2, 12, 8, 10, 3, 1};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cards = {0, 1, 2, 0, 1, 2, 0, 2, 2, 1, 2, 0, 0, 1, 1};
    vector<int> shuffle = {6, 2, 13, 0, 10, 4, 3, 9, 7, 11, 14, 8, 12, 5, 1};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cards = {2, 0, 2, 0, 2, 2, 0, 1, 2, 0, 0, 1, 1, 1, 1};
    vector<int> shuffle = {4, 11, 1, 12, 2, 14, 3, 7, 13, 8, 6, 5, 10, 9, 0};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cards = {1, 1, 2, 2, 2, 0, 1, 0, 0, 2, 2, 1, 0, 1, 0, 1, 2, 0};
    vector<int> shuffle = {7, 1, 13, 9, 0, 12, 8, 6, 4, 5, 17, 3, 10, 2, 16, 14, 15, 11};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 194;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cards = {0, 2, 1, 2, 1, 0, 1, 1, 1, 2, 1, 0, 2, 0, 0, 2, 2, 0};
    vector<int> shuffle = {11, 14, 5, 16, 4, 9, 12, 13, 7, 3, 10, 2, 1, 15, 17, 8, 0, 6};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cards = {1, 2, 0, 2, 0, 2, 0, 1, 0, 2, 1, 1, 0, 1, 2, 0, 1, 2};
    vector<int> shuffle = {15, 3, 17, 11, 0, 1, 5, 6, 9, 4, 14, 2, 10, 16, 12, 8, 13, 7};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cards = {1, 2, 2, 0, 0, 2, 1, 1, 0, 2, 2, 1, 0, 1, 0, 0, 1, 2};
    vector<int> shuffle = {15, 2, 17, 14, 16, 1, 10, 7, 6, 4, 8, 5, 13, 12, 9, 3, 0, 11};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 202;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cards = {2, 0, 1, 0, 2, 2, 1, 0, 0, 2, 1, 1, 2, 0, 2, 0, 1, 1};
    vector<int> shuffle = {2, 9, 13, 15, 6, 14, 7, 11, 12, 5, 10, 4, 17, 3, 8, 0, 16, 1};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cards = {1, 0, 2, 0, 0, 1, 1, 2, 2, 1, 1, 1, 0, 0, 2, 0, 1, 2, 2, 2, 0};
    vector<int> shuffle = {1, 10, 6, 3, 8, 14, 18, 2, 5, 15, 16, 17, 20, 0, 7, 13, 9, 19, 12, 11, 4};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 188;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cards = {1, 0, 2, 2, 0, 2, 1, 1, 0, 0, 2, 2, 2, 0, 0, 1, 1, 1, 1, 2, 0};
    vector<int> shuffle = {1, 19, 5, 17, 12, 2, 14, 15, 0, 7, 6, 11, 18, 20, 10, 8, 3, 4, 13, 9, 16};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cards = {2, 1, 2, 0, 1, 2, 0, 0, 2, 0, 2, 0, 0, 2, 0, 1, 1, 2, 1, 1, 1};
    vector<int> shuffle = {11, 19, 8, 6, 10, 5, 15, 3, 20, 12, 2, 0, 9, 17, 18, 1, 13, 14, 7, 16, 4};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
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
    vector<int> cards = {1, 0, 2, 0, 2, 1, 1, 2, 0, 0, 2, 2, 0, 2, 1, 1, 2, 1, 0, 1, 0};
    vector<int> shuffle = {9, 4, 19, 18, 15, 16, 7, 14, 11, 3, 5, 10, 12, 20, 13, 17, 0, 1, 8, 2, 6};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cards = {2, 1, 1, 2, 2, 1, 0, 2, 0, 0, 1, 0, 0, 2, 0, 2, 1, 1, 0, 1, 2};
    vector<int> shuffle = {2, 0, 14, 11, 7, 15, 3, 17, 13, 8, 18, 6, 10, 5, 4, 9, 20, 1, 19, 12, 16};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cards = {0, 1, 0, 2, 2, 1, 2, 0, 2, 0, 0, 1, 1, 0, 0, 1, 2, 0, 2, 2, 1, 1, 2, 1};
    vector<int> shuffle = {6, 22, 1, 20, 14, 8, 23, 2, 16, 9, 0, 15, 19, 5, 3, 18, 21, 12, 7, 17, 10, 13, 11, 4};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 649;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cards = {0, 0, 2, 1, 1, 0, 2, 1, 0, 2, 1, 2, 0, 0, 2, 2, 0, 0, 1, 1, 2, 1, 2, 1};
    vector<int> shuffle = {11, 4, 12, 22, 8, 21, 20, 14, 2, 7, 5, 19, 13, 15, 17, 23, 3, 10, 6, 0, 1, 16, 9, 18};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 213;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cards = {2, 2, 0, 2, 0, 0, 2, 0, 2, 1, 1, 2, 1, 0, 1, 1, 1, 1, 2, 2, 1, 0, 0, 0};
    vector<int> shuffle = {22, 16, 6, 5, 10, 7, 23, 13, 9, 12, 15, 0, 3, 8, 18, 1, 20, 2, 19, 21, 4, 11, 17, 14};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cards = {0, 0, 0, 2, 0, 0, 1, 1, 2, 0, 1, 2, 0, 1, 1, 2, 1, 1, 0, 2, 2, 2, 1, 2};
    vector<int> shuffle = {18, 14, 1, 10, 6, 12, 4, 19, 9, 22, 21, 16, 3, 13, 5, 2, 0, 7, 8, 23, 17, 15, 11, 20};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cards = {0, 1, 0, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 2, 1, 2, 0, 1, 2, 0, 1, 2};
    vector<int> shuffle = {20, 11, 15, 9, 1, 21, 5, 3, 10, 7, 0, 8, 19, 22, 14, 6, 23, 18, 12, 13, 4, 2, 16, 17};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 672;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cards = {1, 1, 0, 1, 1, 2, 2, 2, 0, 0, 0, 1, 0, 1, 2, 0, 1, 2, 0, 2, 0, 0, 2, 1, 1, 2, 2};
    vector<int> shuffle = {20, 11, 21, 8, 1, 14, 3, 9, 10, 24, 12, 26, 6, 2, 5, 13, 4, 22, 0, 18, 15, 7, 16, 17, 19, 23, 25};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> cards = {0, 2, 2, 1, 0, 0, 2, 2, 1, 0, 0, 2, 2, 2, 1, 0, 2, 1, 1, 1, 1, 2, 0, 1, 0, 0, 1};
    vector<int> shuffle = {20, 3, 11, 16, 12, 10, 18, 24, 25, 9, 6, 17, 2, 14, 22, 15, 26, 4, 21, 19, 7, 8, 23, 1, 13, 5, 0};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 381;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> cards = {2, 1, 0, 1, 0, 2, 2, 1, 0, 1, 1, 2, 0, 1, 0, 0, 2, 0, 1, 1, 1, 0, 2, 2, 2, 2, 0};
    vector<int> shuffle = {26, 23, 22, 16, 14, 11, 25, 5, 24, 20, 1, 7, 10, 4, 2, 0, 8, 3, 15, 9, 6, 21, 18, 12, 17, 13, 19};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 396;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cards = {0, 1, 2, 2, 1, 0, 1, 0, 1, 2, 0, 2, 2, 1, 1, 2, 2, 1, 1, 0, 2, 0, 2, 0, 0, 1, 0};
    vector<int> shuffle = {11, 16, 24, 10, 22, 19, 3, 14, 25, 13, 5, 0, 26, 23, 12, 7, 17, 18, 6, 1, 2, 21, 8, 4, 20, 9, 15};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 474;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cards = {2, 0, 2, 0, 0, 0, 2, 1, 2, 1, 1, 1, 0, 0, 1, 2, 1, 2, 0, 0, 2, 1, 2, 1, 0, 1, 2};
    vector<int> shuffle = {5, 15, 17, 3, 9, 13, 7, 0, 22, 24, 23, 16, 4, 14, 18, 26, 1, 20, 12, 25, 2, 19, 21, 8, 6, 10, 11};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> cards = {1, 0, 0, 1, 0, 1, 2, 1, 1, 1, 1, 0, 1, 2, 2, 1, 2, 0, 2, 0, 0, 1, 2, 2, 2, 0, 2, 0, 0, 2};
    vector<int> shuffle = {29, 2, 9, 15, 23, 28, 22, 1, 7, 8, 5, 20, 24, 14, 18, 4, 3, 19, 17, 25, 21, 12, 16, 6, 13, 11, 10, 0, 26, 27};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
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
    vector<int> cards = {1, 1, 2, 0, 2, 0, 0, 2, 0, 2, 0, 1, 0, 2, 0, 0, 1, 1, 0, 1, 2, 2, 1, 2, 2, 1, 0, 1, 1, 2};
    vector<int> shuffle = {2, 8, 12, 6, 24, 0, 14, 18, 20, 5, 25, 19, 9, 16, 7, 28, 1, 26, 21, 22, 29, 27, 13, 15, 10, 4, 11, 3, 23, 17};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
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
    vector<int> cards = {2, 1, 2, 2, 1, 2, 2, 1, 0, 2, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1, 2, 2, 1, 1, 0, 0, 2, 2, 0, 0};
    vector<int> shuffle = {29, 26, 14, 9, 17, 1, 15, 4, 25, 6, 16, 8, 11, 23, 12, 20, 7, 27, 19, 24, 2, 13, 5, 0, 18, 3, 22, 28, 10, 21};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 1434;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cards = {1, 2, 2, 2, 0, 0, 1, 2, 0, 0, 0, 1, 2, 1, 1, 0, 0, 2, 2, 1, 1, 0, 2, 2, 1, 0, 1, 2, 0, 1};
    vector<int> shuffle = {19, 9, 2, 29, 1, 6, 14, 11, 12, 17, 18, 13, 26, 28, 4, 27, 15, 0, 5, 10, 16, 3, 23, 8, 7, 24, 22, 20, 21, 25};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 1261;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cards = {1, 0, 1, 2, 1, 0, 1, 2, 2, 0, 0, 1, 0, 2, 0, 0, 1, 1, 2, 2, 0, 2, 0, 1, 1, 2, 1, 0, 2, 2};
    vector<int> shuffle = {11, 6, 23, 28, 24, 17, 20, 10, 3, 16, 14, 7, 22, 2, 27, 9, 15, 8, 12, 13, 29, 0, 4, 19, 1, 26, 18, 21, 5, 25};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 2298;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cards = {1, 0, 2, 0, 1, 2, 2, 2, 2, 0, 0, 0, 2, 2, 1, 1, 2, 1, 1, 1, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 2, 1, 2};
    vector<int> shuffle = {29, 6, 8, 20, 7, 0, 14, 26, 2, 9, 18, 13, 31, 10, 21, 30, 23, 4, 16, 3, 12, 32, 5, 19, 27, 15, 17, 28, 24, 25, 22, 11, 1};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 2053;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cards = {2, 2, 0, 0, 2, 1, 1, 2, 2, 0, 2, 0, 2, 1, 0, 0, 2, 1, 0, 2, 2, 0, 1, 1, 1, 1, 0, 0, 0, 2, 1, 1, 0};
    vector<int> shuffle = {23, 12, 30, 24, 5, 7, 18, 26, 14, 21, 8, 32, 11, 4, 27, 10, 2, 22, 1, 17, 20, 15, 29, 28, 16, 13, 3, 9, 19, 31, 25, 0, 6};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
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
    vector<int> cards = {2, 1, 1, 2, 1, 1, 0, 0, 2, 0, 2, 2, 2, 1, 2, 1, 1, 2, 2, 0, 2, 0, 1, 0, 1, 0, 2, 0, 0, 1, 0, 1, 0};
    vector<int> shuffle = {29, 1, 30, 5, 11, 19, 17, 15, 16, 4, 18, 27, 32, 22, 10, 28, 20, 21, 23, 12, 8, 13, 6, 26, 25, 3, 2, 9, 24, 31, 14, 7, 0};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 4980;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cards = {0, 1, 2, 0, 0, 0, 1, 1, 0, 1, 2, 0, 1, 1, 0, 1, 0, 0, 2, 0, 2, 2, 2, 2, 1, 2, 2, 0, 2, 1, 1, 2, 1};
    vector<int> shuffle = {3, 16, 11, 27, 24, 31, 32, 6, 7, 4, 2, 17, 26, 13, 18, 5, 20, 21, 28, 9, 30, 12, 14, 8, 19, 15, 10, 0, 1, 25, 23, 29, 22};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> cards = {1, 1, 1, 2, 1, 2, 2, 0, 1, 1, 0, 0, 0, 0, 0, 2, 2, 0, 0, 1, 2, 2, 2, 0, 2, 1, 2, 0, 1, 1, 0, 2, 1};
    vector<int> shuffle = {4, 32, 9, 14, 22, 21, 17, 5, 20, 31, 2, 0, 26, 24, 6, 23, 10, 3, 25, 12, 7, 8, 19, 27, 11, 1, 18, 15, 29, 16, 30, 28, 13};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 2347;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cards = {1, 1, 1, 0, 2, 1, 0, 2, 2, 1, 2, 2, 2, 0, 0, 2, 1, 1, 0, 2, 1, 1, 1, 0, 0, 1, 2, 2, 1, 0, 2, 0, 2, 0, 0, 0};
    vector<int> shuffle = {3, 1, 32, 6, 9, 25, 23, 28, 16, 0, 4, 15, 17, 20, 26, 27, 8, 14, 33, 30, 2, 35, 5, 31, 18, 12, 10, 34, 22, 19, 21, 7, 11, 24, 13, 29};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 678;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> cards = {0, 1, 1, 2, 0, 1, 0, 2, 1, 2, 0, 2, 0, 1, 1, 2, 0, 2, 0, 1, 0, 1, 1, 1, 0, 0, 2, 2, 2, 2, 1, 2, 0, 0, 2, 1};
    vector<int> shuffle = {18, 28, 4, 26, 34, 20, 3, 8, 31, 2, 33, 7, 5, 35, 16, 10, 9, 32, 0, 12, 27, 25, 23, 1, 24, 13, 17, 15, 30, 11, 19, 21, 6, 14, 22, 29};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 701;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> cards = {0, 0, 1, 0, 2, 0, 2, 1, 1, 0, 2, 0, 2, 1, 2, 1, 0, 2, 1, 2, 1, 2, 0, 2, 0, 2, 0, 1, 1, 1, 2, 0, 0, 1, 1, 2};
    vector<int> shuffle = {20, 16, 10, 28, 22, 35, 3, 14, 21, 26, 6, 25, 7, 9, 24, 15, 32, 30, 13, 19, 34, 29, 23, 8, 12, 27, 18, 5, 1, 33, 0, 2, 31, 4, 17, 11};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> cards = {1, 2, 2, 1, 1, 2, 2, 1, 2, 1, 1, 0, 1, 2, 0, 0, 0, 0, 0, 2, 2, 0, 1, 2, 1, 2, 2, 0, 0, 1, 1, 0, 2, 0, 1, 0};
    vector<int> shuffle = {32, 6, 0, 30, 7, 23, 10, 22, 5, 19, 11, 24, 18, 2, 25, 14, 3, 1, 15, 16, 17, 28, 12, 8, 20, 4, 26, 34, 27, 9, 21, 29, 35, 33, 31, 13};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 383;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> cards = {0, 1, 2, 0, 1, 2, 0, 1, 1, 2, 0, 2, 0, 0, 2, 0, 2, 2, 0, 1, 1, 0, 2, 2, 2, 1, 2, 0, 1, 2, 0, 1, 0, 1, 1, 1};
    vector<int> shuffle = {2, 11, 14, 16, 29, 6, 21, 30, 22, 8, 33, 18, 1, 9, 4, 3, 20, 24, 7, 10, 5, 32, 35, 23, 15, 17, 12, 31, 27, 0, 26, 28, 25, 13, 34, 19};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 6825;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> cards = {2, 2, 0, 1, 1, 2, 0, 1, 1, 0, 1, 1, 2, 1, 2, 0, 1, 0, 0, 0, 2, 1, 0, 1, 1, 0, 2, 2, 0, 0, 1, 1, 2, 2, 2, 0, 0, 2, 2};
    vector<int> shuffle = {28, 7, 29, 31, 1, 33, 30, 34, 24, 26, 6, 21, 38, 13, 14, 12, 11, 20, 2, 8, 9, 4, 3, 16, 37, 23, 27, 17, 36, 5, 18, 19, 32, 0, 25, 15, 10, 22, 35};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 11317;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> cards = {1, 1, 0, 2, 0, 2, 1, 2, 2, 0, 2, 1, 1, 1, 2, 2, 0, 0, 2, 0, 0, 2, 1, 1, 2, 1, 0, 0, 0, 2, 1, 2, 1, 2, 1, 0, 0, 1, 0};
    vector<int> shuffle = {21, 22, 24, 9, 26, 7, 1, 36, 4, 8, 31, 3, 33, 10, 38, 16, 35, 34, 11, 29, 30, 19, 25, 17, 37, 13, 18, 32, 14, 27, 5, 23, 15, 2, 6, 0, 28, 20, 12};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 8012;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> cards = {1, 1, 2, 2, 1, 0, 0, 0, 0, 0, 1, 2, 0, 1, 2, 0, 2, 2, 2, 2, 1, 0, 1, 0, 1, 2, 1, 2, 2, 2, 2, 0, 0, 1, 1, 0, 1, 0, 1};
    vector<int> shuffle = {7, 19, 17, 23, 9, 24, 14, 10, 20, 11, 21, 34, 2, 30, 26, 4, 8, 15, 25, 38, 0, 13, 22, 28, 35, 27, 32, 5, 6, 29, 16, 33, 18, 1, 12, 3, 31, 36, 37};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 1856;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> cards = {2, 2, 1, 1, 1, 1, 2, 2, 2, 0, 0, 1, 2, 2, 0, 0, 2, 2, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 2, 1, 2, 1, 0, 1, 2, 1, 2};
    vector<int> shuffle = {35, 15, 13, 1, 14, 37, 11, 16, 2, 25, 22, 17, 18, 4, 24, 3, 19, 5, 32, 10, 34, 0, 38, 23, 31, 27, 7, 12, 8, 21, 36, 6, 30, 20, 33, 29, 9, 28, 26};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> cards = {2, 0, 1, 0, 2, 1, 0, 1, 0, 2, 1, 0, 2, 1, 1, 1, 2, 1, 2, 0, 2, 1, 2, 0, 0, 2, 0, 1, 1, 0, 1, 1, 0, 2, 0, 2, 0, 2, 2};
    vector<int> shuffle = {4, 24, 26, 3, 22, 15, 34, 28, 7, 32, 19, 38, 29, 23, 5, 2, 25, 9, 36, 6, 31, 14, 27, 1, 11, 21, 37, 20, 10, 18, 30, 17, 0, 13, 8, 12, 35, 33, 16};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> cards = {1, 1, 0, 2, 2, 1, 0, 1, 1, 1, 2, 2, 0, 0, 1, 0, 2, 2, 2, 2, 0, 2, 2, 1, 1, 1, 2, 0, 0, 1, 0, 2, 0, 1, 0, 0, 1, 2, 1, 2, 0, 0};
    vector<int> shuffle = {28, 41, 25, 31, 18, 21, 3, 16, 6, 34, 27, 9, 14, 30, 7, 20, 32, 0, 37, 11, 19, 40, 39, 12, 10, 13, 33, 17, 22, 26, 38, 8, 24, 35, 36, 5, 1, 23, 2, 4, 29, 15};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> cards = {0, 1, 1, 1, 2, 2, 1, 1, 1, 2, 0, 0, 2, 0, 2, 0, 0, 2, 1, 0, 1, 2, 2, 0, 1, 0, 1, 2, 2, 1, 2, 2, 1, 0, 1, 2, 0, 0, 0, 2, 0, 1};
    vector<int> shuffle = {2, 9, 34, 6, 23, 1, 26, 16, 27, 41, 19, 12, 40, 20, 31, 11, 0, 33, 7, 28, 14, 18, 24, 36, 3, 21, 38, 13, 22, 35, 15, 29, 17, 39, 25, 30, 32, 5, 10, 4, 8, 37};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 24413;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> cards = {0, 1, 2, 2, 1, 2, 0, 1, 1, 0, 1, 2, 0, 2, 2, 0, 0, 2, 1, 1, 0, 2, 2, 2, 0, 1, 1, 0, 1, 0, 1, 1, 2, 2, 1, 2, 0, 0, 2, 0, 0, 1};
    vector<int> shuffle = {6, 41, 17, 27, 30, 2, 39, 28, 19, 35, 26, 32, 31, 1, 9, 37, 40, 3, 36, 25, 0, 20, 13, 4, 14, 22, 5, 15, 10, 16, 33, 11, 12, 18, 34, 24, 29, 7, 38, 21, 23, 8};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 9096;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> cards = {0, 1, 1, 0, 1, 2, 2, 0, 1, 2, 1, 0, 0, 2, 2, 2, 0, 1, 1, 0, 0, 2, 1, 0, 1, 0, 2, 0, 2, 2, 1, 1, 1, 0, 2, 0, 2, 1, 2, 1, 2, 0};
    vector<int> shuffle = {4, 19, 31, 35, 0, 37, 2, 36, 10, 18, 22, 30, 7, 8, 14, 38, 21, 25, 27, 6, 41, 39, 1, 34, 12, 16, 5, 3, 11, 40, 28, 13, 29, 26, 9, 23, 15, 33, 32, 17, 20, 24};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 13312;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> cards = {2, 1, 0, 0, 0, 1, 2, 2, 2, 1, 1, 2, 1, 1, 0, 2, 2, 0, 0, 0, 2, 1, 0, 1, 2, 2, 1, 0, 1, 1, 0, 1, 2, 1, 0, 2, 2, 1, 0, 2, 0, 0};
    vector<int> shuffle = {18, 30, 36, 28, 23, 10, 31, 16, 32, 11, 7, 17, 37, 4, 39, 27, 26, 25, 14, 33, 3, 40, 13, 24, 2, 34, 5, 38, 20, 9, 1, 12, 35, 21, 22, 0, 6, 29, 8, 41, 19, 15};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 11142;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> cards = {1, 0, 2, 0, 0, 0, 0, 2, 2, 0, 1, 0, 0, 2, 1, 2, 0, 1, 2, 2, 0, 2, 2, 1, 1, 2, 0, 1, 1, 1, 0, 1, 0, 2, 1, 2, 1, 2, 0, 2, 1, 1};
    vector<int> shuffle = {5, 32, 41, 28, 36, 24, 4, 14, 23, 29, 20, 1, 6, 2, 13, 18, 31, 38, 11, 10, 35, 19, 30, 39, 22, 3, 0, 12, 26, 40, 25, 27, 8, 37, 9, 17, 16, 21, 34, 15, 33, 7};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 29021;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> cards = {1, 2, 0, 2, 0, 1, 2, 2, 2, 0, 2, 0, 0, 1, 1, 1, 0, 2, 1, 0, 2, 0, 2, 1, 1, 2, 1, 1, 1, 0, 0, 1, 1, 2, 0, 1, 0, 0, 2, 2, 2, 0};
    vector<int> shuffle = {16, 18, 25, 12, 7, 31, 8, 23, 5, 11, 21, 22, 41, 37, 19, 38, 9, 0, 29, 17, 35, 32, 36, 27, 28, 39, 13, 10, 40, 3, 14, 34, 4, 15, 24, 2, 33, 6, 30, 20, 26, 1};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 29657;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> cards = {1, 1, 2, 1, 2, 1, 2, 1, 0, 0, 2, 0, 2, 0, 2, 2, 0, 1, 2, 1, 0, 0, 0, 2, 0, 1, 0, 2, 1, 1, 0, 0, 0, 0, 1, 2, 1, 2, 1, 2, 1, 2};
    vector<int> shuffle = {7, 28, 15, 36, 38, 37, 29, 25, 35, 22, 11, 3, 8, 0, 12, 20, 6, 2, 21, 5, 18, 32, 10, 39, 24, 34, 23, 33, 1, 13, 14, 17, 27, 26, 4, 30, 41, 19, 40, 31, 16, 9};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 14312;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> cards = {2, 1, 1, 2, 1, 2, 2, 2, 2, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 2, 0, 0, 1, 2, 0, 0, 0, 1, 0, 2, 1, 2, 1, 2, 0, 2, 1, 1, 2, 0, 2};
    vector<int> shuffle = {29, 37, 4, 8, 14, 35, 12, 5, 13, 10, 27, 19, 2, 40, 3, 0, 24, 6, 28, 22, 1, 23, 18, 38, 36, 21, 15, 41, 7, 39, 11, 25, 17, 32, 33, 30, 31, 9, 16, 26, 34, 20};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 17101;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> cards = {2, 1, 1, 0, 1, 0, 1, 1, 2, 2, 1, 0, 2, 1, 2, 0, 1, 2, 0, 0, 1, 2, 1, 0, 0, 2, 0, 2, 1, 2, 0, 1, 2, 0, 1, 2, 0, 2, 0, 1, 2, 0};
    vector<int> shuffle = {21, 19, 9, 17, 29, 8, 3, 0, 25, 12, 1, 38, 40, 33, 4, 37, 14, 23, 10, 11, 2, 36, 22, 15, 13, 31, 6, 24, 20, 32, 16, 34, 35, 26, 39, 30, 18, 27, 41, 5, 7, 28};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 7763;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> cards = {0, 0, 0, 1, 1, 2, 2, 1, 2, 2, 2, 2, 0, 1, 2, 0, 0, 1, 0, 2, 2, 2, 1, 0, 0, 2, 0, 1, 2, 2, 1, 0, 0, 0, 1, 1, 2, 1, 2, 0, 1, 1, 1, 0, 1};
    vector<int> shuffle = {11, 20, 19, 31, 9, 41, 7, 44, 14, 36, 4, 43, 33, 25, 15, 42, 1, 29, 30, 37, 0, 34, 2, 8, 23, 6, 24, 13, 27, 32, 39, 18, 17, 21, 12, 38, 16, 28, 10, 3, 35, 5, 26, 40, 22};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> cards = {0, 2, 2, 1, 0, 0, 1, 0, 1, 2, 1, 0, 1, 1, 2, 0, 2, 0, 2, 0, 2, 2, 0, 0, 0, 1, 0, 2, 2, 2, 2, 0, 1, 2, 1, 2, 2, 1, 1, 0, 1, 0, 1, 1, 1};
    vector<int> shuffle = {23, 17, 29, 43, 37, 30, 4, 32, 42, 26, 40, 18, 15, 35, 24, 31, 38, 41, 0, 10, 33, 5, 3, 2, 28, 16, 8, 7, 1, 21, 11, 22, 20, 19, 6, 25, 14, 44, 13, 12, 34, 9, 36, 39, 27};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 36503;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> cards = {0, 2, 0, 1, 0, 0, 2, 2, 2, 1, 2, 0, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 2, 1, 0, 2, 2, 1, 0, 0, 0, 0, 0, 2, 0, 1, 2, 0, 2, 1, 1, 1, 2};
    vector<int> shuffle = {13, 4, 11, 9, 3, 34, 18, 42, 17, 2, 29, 12, 1, 15, 28, 23, 10, 22, 14, 19, 39, 5, 41, 25, 38, 0, 44, 26, 32, 37, 7, 30, 20, 35, 6, 21, 36, 16, 43, 40, 33, 31, 24, 8, 27};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 48557;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> cards = {0, 1, 2, 1, 1, 0, 2, 1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 2, 0, 1, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 0, 0, 0, 0, 1, 2, 2, 1, 2, 0, 2, 2, 2, 1, 0};
    vector<int> shuffle = {32, 9, 1, 21, 5, 2, 8, 36, 44, 20, 14, 35, 22, 41, 7, 37, 29, 15, 24, 39, 28, 0, 43, 34, 6, 13, 26, 40, 19, 42, 38, 3, 11, 17, 4, 27, 16, 33, 12, 23, 31, 30, 10, 25, 18};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 27232;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> cards = {1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 2, 1, 0, 0, 2, 1, 0, 2, 0, 0, 2, 1, 2, 1, 0, 2, 1, 1, 0, 2, 1, 0, 2, 2, 0, 0, 2, 2, 2, 2, 2, 2, 1, 0, 1};
    vector<int> shuffle = {41, 23, 40, 34, 20, 3, 32, 21, 1, 5, 7, 16, 11, 28, 42, 44, 14, 18, 37, 25, 29, 15, 10, 36, 6, 8, 43, 33, 38, 17, 27, 24, 12, 19, 0, 30, 35, 26, 22, 9, 13, 39, 31, 4, 2};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> cards = {1, 1, 2, 1, 0, 2, 0, 1, 2, 2, 1, 2, 0, 2, 0, 0, 1, 1, 2, 2, 2, 2, 0, 2, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 2, 2, 1, 2, 0, 0, 2, 1, 1, 1};
    vector<int> shuffle = {40, 38, 8, 43, 24, 14, 17, 20, 1, 23, 34, 32, 7, 26, 15, 42, 16, 36, 5, 44, 33, 11, 3, 29, 19, 35, 4, 12, 13, 18, 30, 41, 39, 31, 0, 6, 25, 10, 27, 21, 9, 2, 37, 22, 28};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 19657;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> cards = {2, 1, 1, 0, 0, 0, 1, 2, 2, 1, 2, 0, 2, 0, 2, 1, 0, 0, 0, 0, 2, 0, 1, 1, 2, 2, 1, 2, 0, 2, 2, 2, 2, 1, 0, 0, 1, 1, 0, 1, 1, 2, 1, 0, 2};
    vector<int> shuffle = {17, 43, 32, 20, 34, 6, 33, 38, 2, 13, 26, 30, 22, 28, 7, 0, 36, 12, 40, 9, 16, 39, 35, 14, 23, 8, 37, 15, 18, 41, 44, 24, 29, 1, 3, 4, 27, 10, 5, 42, 21, 25, 19, 31, 11};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> cards = {2, 1, 2, 0, 1, 0, 0, 2, 2, 2, 1, 1, 1, 0, 0, 1, 0, 1, 2, 1, 0, 0, 0, 1, 1, 2, 2, 0, 2, 1, 0, 0, 2, 1, 1, 0, 2, 1, 2, 2, 2, 2, 1, 0, 0};
    vector<int> shuffle = {13, 30, 18, 5, 10, 22, 7, 40, 41, 24, 33, 2, 16, 15, 27, 31, 36, 43, 44, 6, 21, 12, 9, 35, 3, 37, 19, 39, 1, 34, 29, 11, 8, 17, 42, 26, 14, 4, 20, 38, 28, 32, 23, 25, 0};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 26983;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> cards = {0, 2, 1, 1, 0, 2, 0, 2, 0, 0, 2, 0, 0, 1, 1, 2, 2, 0, 2, 2, 2, 1, 0, 0, 1, 2, 1, 2, 1, 2, 2, 1, 0, 0, 0, 1, 0, 2, 2, 1, 1, 1, 1, 0, 1};
    vector<int> shuffle = {36, 41, 23, 10, 24, 43, 9, 0, 19, 35, 40, 16, 29, 1, 13, 11, 27, 32, 25, 33, 8, 38, 28, 14, 4, 18, 2, 5, 21, 20, 37, 12, 26, 15, 39, 6, 30, 7, 3, 17, 44, 34, 22, 31, 42};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> cards = {2, 1, 1, 1, 0, 2, 1, 2, 2, 2, 1, 0, 0, 1, 0, 2, 0, 2, 0, 1, 0, 1, 1, 2, 0, 1, 0, 1, 2, 2, 2, 1, 1, 0, 1, 0, 0, 2, 0, 2, 1, 0, 0, 2, 2};
    vector<int> shuffle = {26, 31, 19, 41, 15, 33, 30, 6, 38, 11, 34, 28, 13, 36, 37, 17, 9, 44, 32, 1, 7, 25, 27, 3, 35, 4, 21, 24, 23, 12, 16, 43, 20, 10, 29, 39, 5, 22, 42, 14, 2, 18, 0, 40, 8};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 23288;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> cards = {0, 2, 0, 0, 2, 1, 1, 2, 1, 0, 2, 1, 0, 2, 2, 2, 0, 1, 0, 0, 0, 1, 1, 1, 2, 2, 1, 0, 2, 1, 2, 0, 0, 0, 1, 0, 1, 0, 2, 2, 2, 1, 1, 1, 2, 0, 1, 2};
    vector<int> shuffle = {37, 2, 41, 32, 11, 34, 33, 29, 38, 35, 36, 28, 42, 6, 12, 16, 19, 4, 45, 5, 30, 15, 26, 20, 23, 7, 39, 18, 47, 46, 1, 22, 10, 3, 44, 13, 31, 40, 0, 9, 14, 25, 8, 43, 21, 27, 24, 17};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 34956;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> cards = {0, 1, 1, 1, 2, 2, 0, 0, 2, 2, 2, 2, 2, 2, 2, 0, 1, 2, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 2, 1, 2, 2, 0, 1, 1, 0, 1, 1, 1, 2, 2, 1, 0, 0, 2, 1};
    vector<int> shuffle = {44, 21, 26, 31, 7, 32, 33, 28, 18, 20, 42, 38, 29, 11, 8, 37, 2, 46, 5, 19, 1, 14, 9, 43, 45, 41, 24, 6, 4, 0, 25, 22, 35, 34, 47, 3, 23, 10, 17, 40, 16, 12, 39, 27, 30, 15, 13, 36};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> cards = {1, 1, 2, 0, 2, 2, 1, 1, 1, 0, 1, 2, 0, 1, 2, 0, 1, 0, 0, 2, 2, 1, 1, 0, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 2, 2, 0, 1, 1, 0, 0, 2, 2, 0, 2, 1, 2, 0};
    vector<int> shuffle = {43, 2, 8, 37, 15, 44, 35, 39, 19, 20, 25, 45, 5, 3, 22, 46, 13, 34, 29, 14, 31, 38, 26, 21, 6, 12, 1, 16, 4, 42, 18, 32, 9, 7, 24, 11, 41, 33, 0, 27, 47, 36, 40, 28, 10, 30, 23, 17};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 14880;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> cards = {0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 1, 1, 2, 1, 0, 2, 2, 2, 2, 2, 0, 1, 1, 1, 1, 0, 0, 2, 0, 1, 1, 0, 2, 0, 1, 1, 0, 0, 1, 0, 2, 0, 0, 1, 2, 2, 2};
    vector<int> shuffle = {20, 2, 15, 10, 4, 26, 16, 18, 27, 33, 37, 3, 42, 25, 31, 46, 32, 1, 38, 28, 5, 13, 0, 9, 17, 40, 19, 43, 41, 23, 7, 21, 12, 8, 45, 34, 14, 39, 22, 11, 36, 44, 24, 47, 30, 35, 6, 29};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 99733;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> cards = {0, 2, 2, 1, 1, 2, 1, 2, 2, 1, 0, 1, 0, 0, 2, 2, 1, 0, 2, 1, 1, 0, 2, 0, 2, 0, 2, 0, 0, 0, 1, 2, 1, 1, 0, 1, 0, 0, 1, 1, 2, 2, 0, 1, 1, 2, 2, 0};
    vector<int> shuffle = {12, 44, 13, 28, 43, 35, 0, 47, 8, 46, 6, 25, 37, 14, 21, 20, 22, 26, 23, 32, 18, 41, 29, 2, 17, 3, 40, 9, 27, 36, 34, 4, 31, 16, 30, 7, 33, 19, 1, 10, 38, 15, 45, 39, 24, 11, 5, 42};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 65911;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> cards = {1, 0, 1, 2, 2, 0, 0, 0, 0, 1, 1, 2, 0, 0, 1, 0, 2, 0, 0, 2, 0, 2, 0, 2, 0, 2, 1, 0, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2, 1, 0, 1, 0, 1};
    vector<int> shuffle = {33, 9, 13, 30, 23, 40, 24, 22, 42, 5, 38, 6, 46, 39, 32, 2, 20, 4, 27, 25, 41, 1, 0, 35, 11, 26, 29, 8, 7, 43, 12, 10, 16, 19, 14, 3, 34, 31, 37, 47, 45, 36, 44, 28, 21, 18, 15, 17};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 33252;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> cards = {2, 2, 0, 2, 0, 1, 1, 0, 2, 1, 1, 1, 0, 0, 2, 2, 1, 2, 0, 2, 2, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 2, 0, 2, 0, 0, 0, 2, 2, 1, 1, 1, 2, 2, 2, 0, 1, 0};
    vector<int> shuffle = {18, 10, 8, 2, 35, 12, 36, 16, 29, 45, 25, 24, 44, 15, 40, 11, 27, 13, 32, 6, 4, 17, 23, 33, 14, 26, 1, 7, 34, 28, 20, 30, 19, 22, 5, 9, 47, 41, 37, 46, 21, 0, 43, 39, 42, 31, 3, 38};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 8339;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> cards = {0, 1, 2, 1, 1, 0, 2, 2, 2, 1, 2, 1, 2, 2, 2, 0, 2, 1, 1, 0, 0, 1, 2, 2, 1, 2, 0, 1, 0, 0, 2, 1, 0, 2, 0, 1, 0, 0, 1, 0, 1, 0, 1, 1, 2, 0, 2, 0};
    vector<int> shuffle = {33, 10, 39, 41, 37, 44, 40, 6, 2, 43, 20, 0, 35, 17, 25, 21, 18, 1, 14, 38, 36, 28, 47, 22, 31, 3, 7, 30, 12, 26, 45, 13, 16, 23, 24, 4, 9, 15, 27, 8, 19, 46, 5, 34, 11, 29, 42, 32};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 16248;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> cards = {0, 2, 2, 2, 0, 2, 1, 1, 2, 0, 2, 1, 2, 0, 0, 0, 2, 0, 0, 2, 1, 0, 2, 1, 2, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 2, 2, 1, 0, 0, 2, 1, 0, 2, 2};
    vector<int> shuffle = {13, 6, 10, 34, 18, 39, 45, 40, 43, 24, 7, 12, 15, 32, 4, 0, 44, 27, 1, 28, 41, 33, 46, 47, 14, 23, 16, 9, 30, 5, 26, 29, 8, 17, 22, 37, 21, 20, 19, 25, 31, 3, 35, 11, 38, 36, 42, 2};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 70223;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> cards = {2, 1, 2, 1, 1, 0, 2, 1, 1, 1, 0, 0, 1, 2, 1, 0, 0, 0, 1, 2, 1, 0, 2, 2, 1, 1, 0, 2, 1, 0, 2, 2, 0, 0, 0, 2, 0, 2, 0, 0, 2, 1, 1, 1, 2, 0, 2, 2};
    vector<int> shuffle = {26, 46, 25, 9, 34, 0, 13, 21, 29, 12, 42, 47, 5, 19, 15, 45, 44, 17, 1, 4, 6, 40, 11, 43, 16, 30, 32, 22, 7, 41, 33, 23, 36, 27, 28, 14, 37, 35, 20, 31, 38, 10, 8, 18, 24, 3, 39, 2};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> cards = {0, 0, 1, 1, 1, 2, 2, 2, 0, 0, 1, 1, 1, 2, 1, 1, 2, 0, 2, 0, 1, 1, 0, 2, 1, 1, 2, 0, 1, 1, 0, 0, 0, 1, 2, 2, 2, 0, 2, 2, 2, 2, 0, 0, 0, 1, 0, 2};
    vector<int> shuffle = {31, 10, 40, 8, 11, 7, 27, 33, 13, 19, 21, 6, 42, 29, 35, 30, 20, 5, 9, 28, 41, 37, 4, 36, 44, 14, 39, 22, 25, 16, 43, 12, 34, 0, 3, 18, 1, 45, 23, 32, 24, 26, 17, 15, 38, 46, 2, 47};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 120119;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> cards = {1, 1, 2, 0, 2, 0, 1, 0, 2, 2, 1, 0};
    vector<int> shuffle = {5, 0, 9, 7, 1, 8, 3, 10, 4, 11, 6, 2};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> cards = {1, 1, 2, 0, 2, 0, 1, 0, 2, 2, 1, 2};
    vector<int> shuffle = {5, 0, 9, 7, 1, 8, 3, 10, 4, 11, 6, 2};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> cards = {2, 0, 1};
    vector<int> shuffle = {1, 2, 0};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> cards = {1, 2, 0, 2, 1, 0};
    vector<int> shuffle = {3, 2, 1, 0, 5, 4};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> cards = {1, 2, 0, 1, 2, 0, 1, 0, 1, 2, 1, 0, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 1, 2, 2};
    vector<int> shuffle = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> cards = {0, 1, 2, 2, 0, 1, 2, 1, 0, 2, 2, 1, 1, 0, 0};
    vector<int> shuffle = {12, 2, 5, 10, 0, 1, 7, 14, 13, 6, 8, 9, 3, 4, 11};
    CardsCheating* pObj = new CardsCheating();
    clock_t start = clock();
    int result = pObj->numberOfShuffles(cards, shuffle);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22736467&rd=13506&pm=9934
********************************************************************************
#include<vector>
#include<list>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<sstream>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;
#define inf 1e8
#define f(i,a,b)for(int i=a;i<b;i++)
#define rep(i,n)f(i,0,n)
typedef vector<int> vi;
 
class CardsCheating {
 public:
  int numberOfShuffles(vector <int>, vector <int>);
};
 
map<vi,bool> viz;
 
int CardsCheating::numberOfShuffles(vector <int> deck, vector <int> shuffle){
 
  int N=deck.size();
 
  vi temp=vi(N);
  vi done=temp;
 
  rep(i,N){
    done[i]=i%3;
  }
  int res=0;
 
  while(1){
 
    if(viz[deck]) return -1;
    if(deck==done) return res;
 
    viz[deck]=1;
 
    rep(i,N) temp[shuffle[i]]=deck[i];
    deck=temp;
    res++;
  }
 
  return res;
 
}
    
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/