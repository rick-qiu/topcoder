/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6114
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

class Shuffling {
public:
    int position(int cards, vector<int> shuffles);
};

int Shuffling::position(int cards, vector<int> shuffles) {
    int ret;
    return ret;
}


int test0() {
    int cards = 10;
    vector<int> shuffles = {1};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
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
    int cards = 10;
    vector<int> shuffles = {-2};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
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
    int cards = 52;
    vector<int> shuffles = {1, 17, 12, 26, 9};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int cards = 10;
    vector<int> shuffles = {-1, -1, -1, -1, -1, -1, -1, -1, -1};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int cards = 100;
    vector<int> shuffles = {-50};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int cards = 100;
    vector<int> shuffles = {-48, -49, -2, 10};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int cards = 12;
    vector<int> shuffles = {3, 1, 4, -2, 6, -6, -5, -2, 1};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int cards = 12;
    vector<int> shuffles = {-6, -5};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int cards = 76;
    vector<int> shuffles = {32, -27, -24, -9, -6, -13, 29, -16, -13, 27, 24, -2, 23, -37, 32, 36, 36, -37, -37, 3, -2, -20, -14, 2, 28, -10, 25, 13, -3, 8, -36, -16, 5, -8, -16, -33, -6, -15, -2, -25, -21, -4, -16};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int cards = 42;
    vector<int> shuffles = {9, 16, -11, -20, -2, 15, -6, -21, -20, -4, 4, -12};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int cards = 38;
    vector<int> shuffles = {19, 14, -14, 11, -8, 17, 13, -11, 2, -6, 2, -18, 7, 19, 2, -18, 19, -9, -18, -11};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int cards = 94;
    vector<int> shuffles = {-45, -34, -45, 9};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int cards = 86;
    vector<int> shuffles = {-38, 9, 24, 37, -8, 27, 24, 43, -6, 24, -21, 19, 29};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int cards = 54;
    vector<int> shuffles = {-12, -14, -20, -12, 10, 1, -5, -17, 17, -2, -11, 15, -13, -3, -1, -11, -4, -18, 18, -11, -10, -26, 13, 8, 21, 10, 8, 4, 3, 26, -9, -7, -3, 11, -6, 4, -7, 21, 19, 8, 17, 9, -1, 14, -4};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int cards = 68;
    vector<int> shuffles = {24, 10, -17, 20, 28, 1, -4, 20, -4, 14, -17, -1, -22, 16, -17, -32, -14, -14, 25, 27, -8, 11, -14, -16, 31, -5, 2, 17, -16, -4, -8, 25, -5, 14, -16, 23, 5, 9};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int cards = 54;
    vector<int> shuffles = {-21, 15, 6, 10, -17, -19, 11, -16, -7, 3, -1, -16, -13, 1, -7, -8, 2, 24, -18, 1, 15, 24, -1, 6, -26, 19, -21, 15, 26, -13, -24, -18, -11, 18, -8};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int cards = 16;
    vector<int> shuffles = {-7, -2, 5, 1, 5, -4, -5, 6, -4, -6, 2, -2, 2, -8, -5, 1, 1, -7, -6};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int cards = 62;
    vector<int> shuffles = {7, -1, 26, -15, -9, 4, -19, -29, 31, -7, 2, -4, -23, 13, -8, -18};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int cards = 88;
    vector<int> shuffles = {36, 17, 14, -37, -31, 2};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int cards = 38;
    vector<int> shuffles = {-12, 2, 10, 19, 12, 7, -14, -14, 17, 18, -14, -11, -9, -3, 12, 3, 15, -11, -14, -14, -4, -6, -1, -10, 12, -14};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int cards = 62;
    vector<int> shuffles = {3, 24, -9};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int cards = 66;
    vector<int> shuffles = {-22, -2, 5, 32, 20, -30, 10, 5, 27, 16, -28, -2, 24, -33, 32, -21, -25, -14, -15, -3, 13, 7, -4, -33, 21, 3, 9, -25};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int cards = 70;
    vector<int> shuffles = {-9, -23, -10, 30};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int cards = 66;
    vector<int> shuffles = {-26, -15, -12, 31, -5, -18, 14, -24, 2, 23, 1, -14, 29, -1, 28, 33, -1, 20, 11, 8, -3, -14, 21, -9, -24, -15, -28, -15, -24};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int cards = 12;
    vector<int> shuffles = {4, -4, 2, -5, 4, -3};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int cards = 68;
    vector<int> shuffles = {-4, -17, -30, 7, -34, -2, -22, -20, 26, 19, 19, -21, 29, -32, 6, 12, -11, 26, 14, 9, 31, 8, -15, -3, -29, 17, 11, 20, 26, 2, 14, -27, -6, -15, 20, -25, 15, -18, -11, -10, 7, 2, 20, -5, 24, -31};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int cards = 28;
    vector<int> shuffles = {8, 7, -2, -12, 14, -8, -11, 5, -13, -5, -7, 8, -3, 12, -4, 12, 5, 10, -8, 1, 6, 6, -5, -10, -7, 12, 2, -8, 11, 14, -4, -13, -4, -13, 13, -5, -7, -2};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int cards = 16;
    vector<int> shuffles = {-3, 2, 2, -5, -4, -7, 6, -7, -5, 3, -7, 5, -3, -2, 6, 7, -6, 1, -8, 6, 3, 2, 4, 6, -4, 3, -3, -3, 1, -4, 8, 6, -3, 1, 7, 5, 7, 7, 1, 5, 4, 2, 6, -3, 6, 5};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int cards = 94;
    vector<int> shuffles = {21, 24, -44, 8, -29, 37, -13, 18, 20, -7, -18, -37, 16, 16, -18, -5, 1, -12, -20, 46, 47, -21, -20, -40, -1, -20, -10, 43, 37, -39, 15, 30};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int cards = 74;
    vector<int> shuffles = {-8, 2, -33, -27, -36, 25, 3, -15, -33, -14, -26, -9, -15, -13, 20, -15, -14, -35, -22, 7, -36, 6, -37, -2, -18, 3, 30, 6, -6, -26, -31, -33, -6, 5, 9, 28, 28, -7, -37, 22, 23, -36, 35, -19, -33, -6};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int cards = 10;
    vector<int> shuffles = {1, -4, -5, -4, -4, -1, 4, -4, 1, -3, -5, 4, 2, 5, 1, -3, -1, -4, 2, 4, 4};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int cards = 12;
    vector<int> shuffles = {-2, -2, 3, 1, 1, -2, -1, -1, 4, 6, 2, 4, -6, -4, 3, 1, 3, 4, -5, 1, -4, 3, 1, -5, 5, -6, 3, -2, 3, 2, 2, -3, 5, 4, 6, 6, -6, -4, -1, -6, -6, -5, -6, 1, 1, 5};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int cards = 16;
    vector<int> shuffles = {-6, -8, 7, 5, -2, -8, 5, -4, -2, 6, -2, 2, 5, 2, -7, -6, 2, -4, 7, 1, -7, -5, 1, -5, 5, -3, 2, 1, -4, -6};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int cards = 24;
    vector<int> shuffles = {12, -6, 9, 5, -6, 8, 9, 1, -8, -10, 6, 2, 11, 6, 5, 5, 5, 11};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int cards = 100;
    vector<int> shuffles = {-30, 19, -45, -13, 42, 39, -19, -30, -37, -7, 49, -10, -13, -39, 12, 17, -44, -39, 19, -26, 40, 28, 46, -31, -41, 46, 31, -15, -5, 34, -14, 33, 29, 31, -9, -18};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int cards = 40;
    vector<int> shuffles = {-3, -7, 7, -3};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int cards = 36;
    vector<int> shuffles = {-9, -15, 18, 14, -4, -9, -18, 14, 16, -13, 17, 14, -18, -1, -15, -17, 13, -6, 10, 16, -13, -14, 2, 2, 4};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
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
    int cards = 92;
    vector<int> shuffles = {39, -1, -15, -31, -18, 19, 10, -46, -30, 45, 12, -29, 22, 17, 27, -4, -32, -42, -33, 29, -45, 39, -39, -18, -25, -41, -22, -6, -17, 8, 35, 1, -13};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int cards = 100;
    vector<int> shuffles = {-48, -49, -2, 10};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int cards = 100;
    vector<int> shuffles = {-48, -49, -2, 10, 1, -2, -2, -2, 11, 24, 35, 50, 50, -50, 1, -1, 2, 2, -2, -4};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int cards = 100;
    vector<int> shuffles = {-6, -45, 34, 23, -5, 34, -6, -45, 34, 23, -5, 34, -6, -45, 34, 23, -5, 34, -6, -45, 34, 23, -5, 34, -6, -45, 34, 23, -5, 34, -6, -45, 34, 23, -5, 34, -6, -45, 34, 23, -5, 34};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int cards = 10;
    vector<int> shuffles = {-1, -1, -1, -1, -1, -1, -1, -1, -1};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int cards = 10;
    vector<int> shuffles = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int cards = 100;
    vector<int> shuffles = {15, -1, 13, 12, 11, 10, 8, 6, 4, 3};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int cards = 10;
    vector<int> shuffles = {2, -5, -2};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int cards = 100;
    vector<int> shuffles = {-30, 25};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int cards = 100;
    vector<int> shuffles = {25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25, 25, -25};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int cards = 10;
    vector<int> shuffles = {-2};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int cards = 4;
    vector<int> shuffles = {-2, 1};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
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
    int cards = 6;
    vector<int> shuffles = {-1, -2, 1};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int cards = 100;
    vector<int> shuffles = {};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int cards = 10;
    vector<int> shuffles = {-2, 1};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int cards = 8;
    vector<int> shuffles = {-2, 2};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int cards = 6;
    vector<int> shuffles = {-3, 2};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int cards = 8;
    vector<int> shuffles = {-3, 1};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int cards = 10;
    vector<int> shuffles = {-3, 1, -2};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
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
    int cards = 6;
    vector<int> shuffles = {-3};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int cards = 10;
    vector<int> shuffles = {1, 2, 5, -3, -3, 1, 4, -2, -3, -1, -4, 1};
    Shuffling* pObj = new Shuffling();
    clock_t start = clock();
    int result = pObj->position(cards, shuffles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=302053&rd=9815&pm=6114
********************************************************************************
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <bitset>
#include <valarray>
#include <algorithm>
#include <functional>
#include <numeric>
#include <complex>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;
class Shuffling{
public:
  int position(int n,vector<int> s){
    vector<int> a(n);
    int i,j;
    for (i = 0; i < n; ++ i) a[i] = i;    
    for (i = 0; i < s.size(); ++i) {
      vector<int> b(n);
      if (s[i] < 0) {
        for (j = 0; j < n/2; ++j) b[j] = a[n/2+j], b[n/2+j] = a[j];
        s[i] = -s[i];
        a = b;
      }
      int k = 0;      
      for (j = 0; j <s[i]; ++j) b[k++] = a[j];
      for (j = 0; j <n/2-s[i]; ++j) {
        b[k++] = a[n/2+j];
        b[k++] = a[s[i]+j];
      }
      for (j = n-s[i]; j <n; ++j) b[k++] = a[j];      
      a = b;      
    }
    for (i = 0; i < n; ++i) if (a[i]==n-1) return n-1-i;
    return 0;
  }
};

********************************************************************************
*******************************************************************************/