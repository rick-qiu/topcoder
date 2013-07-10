/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10196
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

class ShufflingMachine {
public:
    double stackDeck(vector<int> shuffle, int maxShuffles, vector<int> cardsReceived, int K);
};

double ShufflingMachine::stackDeck(vector<int> shuffle, int maxShuffles, vector<int> cardsReceived, int K) {
    double ret;
    return ret;
}


int test0() {
    vector<int> shuffle = {1, 0};
    int maxShuffles = 3;
    vector<int> cardsReceived = {0};
    int K = 1;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> shuffle = {1, 2, 0};
    int maxShuffles = 5;
    vector<int> cardsReceived = {0};
    int K = 2;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> shuffle = {1, 2, 0, 4, 3};
    int maxShuffles = 7;
    vector<int> cardsReceived = {0, 3};
    int K = 2;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> shuffle = {0, 4, 3, 5, 2, 6, 1};
    int maxShuffles = 19;
    vector<int> cardsReceived = {1, 3, 5};
    int K = 2;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0526315789473684;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> shuffle = {6, 5, 7, 2, 0, 9, 8, 1, 4, 3};
    int maxShuffles = 90;
    vector<int> cardsReceived = {8, 2, 7};
    int K = 4;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> shuffle = {3, 4, 7, 2, 8, 5, 6, 1, 0, 9};
    int maxShuffles = 47;
    vector<int> cardsReceived = {6, 3, 5, 2, 8, 7, 4};
    int K = 8;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 6.297872340425532;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> shuffle = {1, 0, 6, 4, 5, 2, 8, 7, 3, 9};
    int maxShuffles = 80;
    vector<int> cardsReceived = {1, 9, 5, 6, 7, 0, 3, 8, 2, 4};
    int K = 7;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> shuffle = {7, 2, 9, 3, 1, 8, 6, 5, 4, 0};
    int maxShuffles = 96;
    vector<int> cardsReceived = {6, 9};
    int K = 7;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.75;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> shuffle = {6, 1, 5, 7, 2, 3, 4, 8, 9, 0};
    int maxShuffles = 12;
    vector<int> cardsReceived = {9, 8, 2, 3};
    int K = 1;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> shuffle = {2, 5, 6, 7, 0, 3, 9, 8, 1, 4};
    int maxShuffles = 7;
    vector<int> cardsReceived = {2, 3, 7, 5};
    int K = 5;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> shuffle = {6, 9, 7, 3, 1, 8, 2, 5, 4, 0};
    int maxShuffles = 20;
    vector<int> cardsReceived = {0, 2, 8, 4};
    int K = 8;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> shuffle = {6, 8, 5, 2, 7, 9, 3, 4, 0, 1};
    int maxShuffles = 3;
    vector<int> cardsReceived = {2, 8, 6, 7, 9};
    int K = 8;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4.333333333333333;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> shuffle = {1, 5, 2, 3, 7, 4, 8, 0, 6, 9};
    int maxShuffles = 73;
    vector<int> cardsReceived = {8, 3, 4, 2, 0, 9, 1};
    int K = 5;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4.205479452054795;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> shuffle = {1, 4, 3, 0, 8, 5, 2, 7, 6, 9};
    int maxShuffles = 60;
    vector<int> cardsReceived = {2, 8, 1, 4, 0, 3, 9, 5};
    int K = 8;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.15;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> shuffle = {17, 35, 4, 8, 47, 9, 33, 13, 5, 0, 31, 7, 28, 15, 10, 2, 18, 34, 32, 48, 21, 19, 26, 24, 23, 6, 37, 46, 20, 3, 38, 39, 11, 44, 14, 27, 25, 22, 45, 12, 43, 1, 30, 41, 29, 42, 40, 16, 49, 36};
    int maxShuffles = 99;
    vector<int> cardsReceived = {37, 43, 40, 9, 16, 17, 15, 6, 34, 0, 1, 19, 38, 33, 28, 36, 7};
    int K = 46;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 16.505050505050505;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> shuffle = {2, 30, 33, 37, 41, 24, 34, 15, 10, 5, 9, 43, 0, 8, 28, 13, 47, 7, 46, 42, 40, 29, 16, 1, 3, 14, 39, 31, 45, 36, 32, 49, 6, 35, 44, 25, 27, 48, 17, 22, 12, 18, 20, 38, 21, 19, 4, 26, 23, 11};
    int maxShuffles = 54;
    vector<int> cardsReceived = {18, 37, 5, 1, 46};
    int K = 9;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5555555555555554;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> shuffle = {43, 49, 12, 44, 11, 5, 30, 34, 1, 36, 13, 31, 23, 10, 25, 47, 28, 29, 21, 27, 16, 19, 2, 20, 41, 18, 7, 35, 45, 48, 40, 6, 42, 4, 24, 0, 17, 9, 14, 22, 26, 46, 38, 3, 15, 37, 32, 33, 8, 39};
    int maxShuffles = 15;
    vector<int> cardsReceived = {29, 11, 27, 40, 2, 20, 9, 6, 14, 22, 39, 10, 0, 24, 41, 36, 42, 31, 26, 43, 21, 3, 19, 48, 34, 13, 46, 37};
    int K = 6;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4.733333333333333;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> shuffle = {10, 47, 22, 29, 1, 30, 28, 11, 39, 14, 41, 32, 9, 33, 40, 35, 21, 5, 27, 3, 18, 48, 49, 24, 19, 36, 25, 0, 12, 42, 13, 8, 31, 17, 26, 34, 43, 2, 20, 46, 37, 15, 45, 7, 44, 23, 4, 16, 6, 38};
    int maxShuffles = 100;
    vector<int> cardsReceived = {19, 41, 36, 6, 1, 2, 17, 45, 31, 30, 46, 8, 13, 16, 23, 29, 38, 24, 44, 37, 12, 43, 42, 47, 7, 5, 10, 26, 25, 33, 20, 32};
    int K = 33;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 23.04;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> shuffle = {38, 42, 6, 19, 14, 22, 23, 27, 47, 10, 45, 30, 41, 20, 16, 33, 34, 25, 0, 48, 4, 13, 49, 37, 35, 15, 21, 5, 2, 17, 18, 28, 24, 1, 39, 44, 8, 40, 46, 32, 12, 9, 11, 36, 43, 31, 7, 26, 29, 3};
    int maxShuffles = 49;
    vector<int> cardsReceived = {17, 44, 7, 37, 19, 43};
    int K = 16;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3877551020408165;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> shuffle = {22, 41, 27, 35, 28, 49, 32, 33, 15, 31, 19, 18, 12, 23, 2, 42, 0, 14, 46, 29, 43, 45, 44, 10, 36, 30, 8, 16, 6, 47, 4, 9, 39, 48, 1, 40, 37, 7, 24, 25, 5, 13, 26, 21, 34, 20, 38, 3, 11, 17};
    int maxShuffles = 7;
    vector<int> cardsReceived = {46, 17, 0, 25, 13, 5, 38, 23, 11, 15, 3, 26, 44, 45, 1, 32, 35, 18, 14, 49, 12, 47, 28, 8, 4, 36, 2, 39, 29, 7, 21, 24, 30, 33, 22, 41, 42, 6, 20, 48, 16};
    int K = 43;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 37.714285714285715;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> shuffle = {37, 2, 34, 23, 44, 10, 21, 8, 48, 4, 6, 45, 11, 25, 19, 46, 36, 27, 39, 26, 33, 22, 35, 42, 13, 43, 31, 0, 12, 14, 49, 17, 24, 28, 9, 20, 41, 16, 1, 32, 7, 47, 30, 18, 15, 3, 5, 40, 38, 29};
    int maxShuffles = 1;
    vector<int> cardsReceived = {14, 45, 15, 43, 29, 3, 9, 25, 46, 47, 44, 2, 48, 33, 30, 8, 21, 39, 6, 17, 28, 11, 37, 1, 49, 12, 32, 19, 34, 38, 23, 16, 18, 5, 41, 42, 22, 26};
    int K = 31;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 31.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> shuffle = {29, 7, 25, 0, 47, 17, 41, 13, 14, 10, 39, 16, 43, 49, 8, 11, 9, 35, 38, 5, 18, 45, 30, 22, 28, 15, 2, 19, 37, 36, 34, 27, 4, 40, 46, 6, 3, 48, 23, 31, 20, 42, 12, 33, 26, 1, 24, 21, 44, 32};
    int maxShuffles = 98;
    vector<int> cardsReceived = {10, 16, 0, 24};
    int K = 38;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9285714285714284;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> shuffle = {32, 1, 10, 28, 14, 6, 39, 47, 38, 22, 11, 46, 43, 2, 12, 26, 13, 30, 16, 4, 31, 8, 24, 9, 48, 42, 35, 7, 49, 33, 5, 18, 23, 27, 29, 44, 37, 40, 20, 19, 0, 45, 15, 3, 34, 21, 41, 17, 25, 36};
    int maxShuffles = 65;
    vector<int> cardsReceived = {11, 41, 7, 9, 0, 5, 27, 17, 49, 10, 13, 32, 1, 45, 14, 19, 23, 44, 24, 38, 15, 2, 36, 37, 4, 42, 33, 8, 40, 28, 48};
    int K = 48;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 29.892307692307693;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> shuffle = {39, 12, 21, 34, 35, 20, 31, 19, 16, 27, 8, 7, 26, 40, 23, 18, 36, 14, 13, 25, 6, 41, 49, 33, 15, 24, 30, 29, 11, 37, 42, 47, 32, 5, 22, 45, 3, 38, 28, 44, 10, 2, 48, 1, 17, 0, 4, 9, 46, 43};
    int maxShuffles = 83;
    vector<int> cardsReceived = {4, 43, 36};
    int K = 39;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2.63855421686747;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> shuffle = {37, 11, 16, 9, 14, 6, 24, 28, 31, 26, 17, 46, 20, 38, 0, 12, 21, 35, 13, 29, 22, 41, 23, 5, 1, 4, 8, 45, 18, 15, 49, 32, 30, 3, 44, 10, 33, 48, 27, 7, 36, 40, 25, 39, 2, 43, 19, 47, 34, 42};
    int maxShuffles = 47;
    vector<int> cardsReceived = {38, 14, 28, 42, 49, 5, 23, 17, 32, 13, 35, 1, 18};
    int K = 47;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 12.702127659574469;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> shuffle = {14, 38, 30, 25, 20, 33, 26, 22, 13, 47, 39, 41, 1, 24, 15, 23, 36, 7, 6, 35, 9, 8, 43, 3, 28, 17, 32, 5, 29, 0, 27, 16, 18, 2, 44, 45, 42, 48, 4, 49, 34, 31, 46, 37, 12, 21, 19, 11, 10, 40};
    int maxShuffles = 85;
    vector<int> cardsReceived = {25, 34, 15, 35, 19, 28, 13, 40, 26, 33, 45, 10, 16, 18, 47};
    int K = 39;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 12.305882352941177;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> shuffle = {21, 29, 0, 44, 38, 23, 5, 19, 22, 47, 37, 25, 12, 27, 9, 43, 41, 28, 17, 26, 32, 8, 4, 36, 15, 49, 3, 14, 45, 7, 24, 40, 18, 48, 33, 10, 13, 6, 16, 31, 34, 46, 1, 20, 39, 2, 42, 30, 35, 11};
    int maxShuffles = 66;
    vector<int> cardsReceived = {47, 15, 16, 28, 19, 40, 33, 2, 14, 7, 45, 22, 13, 39, 37, 29, 12, 23, 25, 27, 42, 20, 43, 6, 48, 0, 3, 36, 10, 9, 1, 44, 35, 11, 49, 46, 8, 31, 21, 4, 30, 18, 17, 24, 38, 26, 41, 34, 32};
    int K = 46;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 45.121212121212125;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> shuffle = {8, 36, 21, 5, 32, 40, 29, 9, 17, 33, 35, 3, 27, 37, 24, 22, 46, 38, 19, 16, 23, 4, 49, 11, 13, 7, 42, 48, 15, 30, 10, 6, 47, 25, 43, 20, 31, 0, 14, 41, 39, 28, 1, 34, 2, 18, 26, 44, 12, 45};
    int maxShuffles = 18;
    vector<int> cardsReceived = {6, 36, 1, 25, 12, 43, 38};
    int K = 32;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> shuffle = {38, 10, 47, 21, 24, 44, 20, 36, 30, 23, 16, 45, 43, 40, 46, 3, 41, 48, 1, 27, 34, 25, 28, 33, 8, 18, 12, 49, 7, 31, 32, 35, 19, 17, 22, 37, 15, 0, 2, 39, 13, 6, 14, 42, 11, 26, 9, 4, 5, 29};
    int maxShuffles = 56;
    vector<int> cardsReceived = {20, 35, 49, 5, 42, 33, 23, 44, 30, 21};
    int K = 24;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 6.767857142857143;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> shuffle = {42, 17, 28, 19, 35, 40, 48, 30, 4, 7, 41, 3, 22, 25, 31, 20, 16, 23, 46, 10, 39, 32, 8, 18, 15, 47, 12, 38, 9, 49, 6, 5, 2, 34, 37, 26, 14, 33, 24, 1, 36, 43, 29, 27, 45, 21, 44, 0, 11, 13};
    int maxShuffles = 76;
    vector<int> cardsReceived = {47, 29, 6, 30, 38, 1, 35, 14, 28, 32};
    int K = 37;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 8.43421052631579;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> shuffle = {14, 11, 23, 45, 13, 25, 29, 19, 27, 5, 37, 38, 26, 33, 39, 12, 40, 22, 2, 47, 9, 7, 36, 8, 46, 30, 31, 6, 4, 24, 35, 10, 42, 28, 18, 0, 1, 16, 34, 44, 3, 32, 20, 21, 43, 15, 17, 49, 41, 48};
    int maxShuffles = 41;
    vector<int> cardsReceived = {40, 4, 26, 24, 43, 38, 14, 31, 12, 5, 11, 48, 9, 37, 25, 47, 7, 19, 34, 32, 33, 39, 46, 2, 27, 29, 17, 10, 22, 41, 44, 42, 28, 21, 8, 0, 13, 35, 23, 18, 3, 15, 49, 16, 30, 45, 1};
    int K = 16;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 15.902439024390244;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> shuffle = {38, 22, 10, 15, 41, 24, 1, 23, 45, 19, 43, 21, 12, 17, 27, 25, 32, 42, 49, 29, 44, 39, 31, 11, 37, 14, 0, 40, 46, 5, 34, 48, 4, 28, 6, 18, 13, 16, 9, 35, 7, 33, 8, 30, 47, 26, 2, 3, 36, 20};
    int maxShuffles = 31;
    vector<int> cardsReceived = {27, 33, 34, 46, 23, 18, 37, 21, 30, 6, 47, 48, 7, 19, 24, 36, 13, 20, 10, 25, 8, 12, 5, 16, 42, 32, 40, 41, 49, 31, 11, 45, 39, 28, 0, 26, 35, 1, 4, 3, 29, 38, 43, 15, 17};
    int K = 20;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 18.258064516129032;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> shuffle = {42, 11, 32, 20, 16, 10, 45, 13, 21, 44, 8, 1, 23, 31, 43, 22, 47, 9, 38, 41, 19, 33, 18, 37, 30, 5, 35, 14, 46, 4, 2, 49, 26, 34, 40, 0, 24, 27, 17, 48, 25, 7, 28, 29, 6, 36, 3, 39, 15, 12};
    int maxShuffles = 3;
    vector<int> cardsReceived = {22, 9, 41, 3, 47, 49, 8, 4, 7, 20};
    int K = 33;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> shuffle = {25, 13, 24, 31, 43, 16, 0, 33, 38, 11, 7, 40, 48, 3, 14, 18, 44, 41, 15, 22, 47, 49, 30, 29, 39, 2, 42, 20, 5, 10, 46, 27, 19, 4, 1, 32, 12, 17, 9, 8, 26, 21, 6, 45, 36, 23, 35, 37, 28, 34};
    int maxShuffles = 20;
    vector<int> cardsReceived = {6, 41, 46, 18, 38};
    int K = 32;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> shuffle = {20, 16, 34, 12, 8, 48, 29, 28, 44, 6, 30, 17, 15, 22, 24, 2, 40, 38, 32, 45, 35, 42, 33, 9, 1, 19, 23, 26, 4, 43, 27, 37, 11, 41, 25, 0, 14, 10, 7, 3, 46, 21, 13, 49, 5, 39, 36, 31, 18, 47};
    int maxShuffles = 96;
    vector<int> cardsReceived = {49, 14, 21, 45, 7, 48, 42, 22, 1, 41, 3, 16, 20, 10, 8, 34, 39, 25, 27, 31, 12, 43, 38, 23, 35, 44, 46, 11, 40, 30, 26, 28, 5, 13, 0, 4};
    int K = 33;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 25.354166666666668;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> shuffle = {45, 3, 20, 6, 32, 47, 19, 11, 28, 38, 27, 5, 4, 49, 23, 44, 15, 29, 24, 34, 39, 13, 25, 30, 41, 33, 46, 35, 1, 31, 9, 10, 40, 43, 7, 16, 12, 42, 8, 2, 0, 37, 14, 36, 48, 17, 18, 26, 21, 22};
    int maxShuffles = 84;
    vector<int> cardsReceived = {32, 48, 40, 22, 13, 25};
    int K = 39;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> shuffle = {16, 23, 41, 46, 27, 36, 42, 12, 38, 20, 1, 14, 21, 35, 0, 3, 15, 31, 39, 8, 2, 19, 33, 43, 26, 34, 30, 40, 17, 28, 5, 11, 6, 13, 32, 49, 10, 22, 44, 29, 37, 47, 48, 7, 25, 45, 9, 24, 18, 4};
    int maxShuffles = 25;
    vector<int> cardsReceived = {26, 7, 22, 27, 39, 33, 25, 49, 21, 34, 9, 14, 16, 48, 29, 10, 0, 19, 32, 13, 5, 30, 3, 47, 35, 43, 36, 42, 2, 44, 23, 37, 28, 6, 40, 18, 24, 12, 31};
    int K = 50;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 39.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> shuffle = {3, 38, 1, 32, 35, 19, 45, 21, 48, 33, 29, 17, 5, 20, 43, 13, 49, 6, 23, 30, 7, 46, 9, 26, 27, 18, 12, 0, 44, 25, 28, 39, 47, 14, 36, 11, 24, 8, 16, 15, 42, 10, 4, 40, 41, 31, 37, 2, 22, 34};
    int maxShuffles = 19;
    vector<int> cardsReceived = {27, 3, 28, 15, 48, 12, 37, 33, 7, 13, 11, 34, 24, 26, 25, 14, 4, 0, 20, 47, 17, 49, 16, 36, 40, 2, 21, 10, 35, 9, 31, 8, 42, 6, 46, 1};
    int K = 29;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 24.68421052631579;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> shuffle = {17, 35, 49, 38, 43, 1, 42, 0, 48, 3, 25, 36, 9, 18, 32, 2, 39, 23, 37, 14, 24, 13, 16, 47, 6, 22, 12, 44, 34, 15, 11, 5, 21, 41, 27, 4, 7, 26, 8, 33, 45, 10, 28, 19, 46, 31, 30, 20, 29, 40};
    int maxShuffles = 40;
    vector<int> cardsReceived = {6, 14, 36, 32, 42, 18, 40, 38, 2, 5, 41, 7, 10, 34, 3, 33, 48, 11, 20, 17, 31, 26, 37};
    int K = 15;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.275;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> shuffle = {28, 45, 7, 23, 44, 10, 3, 30, 47, 19, 46, 41, 21, 40, 36, 38, 17, 32, 35, 27, 48, 20, 16, 39, 29, 24, 37, 33, 12, 6, 11, 25, 1, 0, 22, 26, 18, 34, 5, 4, 42, 15, 9, 31, 43, 2, 13, 14, 8, 49};
    int maxShuffles = 12;
    vector<int> cardsReceived = {35, 32, 42, 5, 49, 27, 39, 17, 29, 3, 41, 14, 20, 21, 44};
    int K = 13;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5.333333333333333;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> shuffle = {11, 47, 16, 29, 26, 40, 9, 33, 35, 46, 14, 38, 39, 21, 48, 23, 37, 43, 15, 31, 2, 8, 44, 6, 18, 49, 0, 30, 13, 22, 42, 34, 7, 45, 19, 41, 1, 28, 3, 24, 17, 5, 32, 27, 20, 25, 12, 4, 36, 10};
    int maxShuffles = 84;
    vector<int> cardsReceived = {41, 8, 39, 42, 14, 19, 44, 20, 4, 46, 24, 17, 10, 2, 3, 15, 13, 49, 23, 31, 36, 38, 16, 1, 34, 32, 48, 6, 11};
    int K = 16;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 11.202380952380953;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> shuffle = {1, 25, 17, 8, 39, 26, 6, 28, 46, 31, 19, 20, 15, 16, 9, 21, 34, 24, 47, 4, 3, 29, 40, 7, 38, 41, 48, 45, 42, 37, 14, 32, 36, 22, 13, 11, 44, 10, 27, 23, 0, 43, 49, 33, 12, 18, 2, 35, 5, 30};
    int maxShuffles = 90;
    vector<int> cardsReceived = {15, 45, 39, 44, 4, 30, 40, 27, 25, 17, 49, 23, 20, 8, 48, 10, 11, 34, 22, 3, 38, 41, 0, 36, 29, 28, 33, 21, 26, 46, 19, 2, 6, 42, 13, 14, 18, 47, 43, 31, 12, 16, 37, 7};
    int K = 33;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> shuffle = {46, 37, 26, 16, 6, 15, 31, 47, 3, 9, 42, 43, 10, 35, 11, 32, 2, 38, 48, 44, 41, 4, 28, 49, 18, 33, 25, 8, 23, 39, 7, 21, 13, 27, 5, 22, 30, 19, 14, 29, 34, 45, 12, 20, 0, 24, 40, 17, 36, 1};
    int maxShuffles = 5;
    vector<int> cardsReceived = {6, 33, 2, 23, 18, 11, 41, 0, 43, 20, 10, 44, 4, 12, 25};
    int K = 14;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 8.6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> shuffle = {5, 2, 44, 22, 29, 24, 34, 18, 26, 45, 20, 14, 10, 19, 36, 47, 11, 27, 0, 13, 23, 8, 7, 1, 25, 42, 37, 39, 16, 6, 21, 41, 28, 17, 40, 15, 30, 31, 38, 32, 12, 48, 43, 4, 3, 35, 33, 9, 49, 46};
    int maxShuffles = 20;
    vector<int> cardsReceived = {3, 32, 35, 37};
    int K = 22;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> shuffle = {43, 14, 25, 0, 9, 1, 36, 40, 31, 5, 28, 35, 3, 20, 44, 11, 8, 46, 10, 2, 49, 4, 29, 39, 18, 24, 45, 7, 17, 30, 37, 34, 16, 19, 48, 27, 38, 12, 47, 23, 33, 41, 22, 13, 21, 15, 6, 26, 32, 42};
    int maxShuffles = 87;
    vector<int> cardsReceived = {6, 44, 8, 29, 3, 31, 14, 20, 18, 28, 35, 17, 11, 30, 9, 22, 49, 7, 10, 39, 41};
    int K = 11;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0344827586206895;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> shuffle = {49, 27, 22, 20, 44, 13, 42, 2, 16, 36, 47, 5, 12, 3, 39, 32, 11, 48, 45, 21, 4, 8, 25, 1, 41, 30, 24, 23, 26, 6, 17, 43, 28, 7, 19, 33, 9, 46, 38, 10, 37, 31, 15, 14, 34, 0, 18, 40, 29, 35};
    int maxShuffles = 79;
    vector<int> cardsReceived = {31, 5, 22, 35, 2, 30, 14, 1, 24, 44, 13, 33, 25, 32, 23, 46, 8, 0, 7, 38, 43, 34, 39, 37, 45, 49, 19, 20, 9, 41, 48};
    int K = 4;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0126582278481013;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> shuffle = {34, 41, 20, 0, 31, 10, 26, 7, 28, 1, 39, 40, 33, 38, 42, 30, 32, 48, 5, 43, 47, 16, 44, 15, 27, 23, 19, 45, 4, 9, 37, 13, 22, 17, 2, 49, 24, 29, 8, 36, 6, 11, 12, 35, 21, 25, 46, 18, 14, 3};
    int maxShuffles = 15;
    vector<int> cardsReceived = {23, 7, 8, 5, 28, 15, 25, 45, 19, 48, 31, 0, 36, 9, 40, 27, 24, 33, 39, 2, 6, 46, 13, 11, 47, 20};
    int K = 9;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> shuffle = {40, 46, 5, 45, 12, 26, 29, 9, 17, 20, 10, 32, 36, 31, 0, 35, 11, 38, 24, 37, 1, 34, 15, 4, 47, 41, 22, 27, 3, 21, 28, 49, 30, 18, 16, 44, 8, 6, 7, 39, 33, 23, 2, 25, 42, 43, 48, 14, 19, 13};
    int maxShuffles = 22;
    vector<int> cardsReceived = {41, 13, 0, 25, 7, 36, 11, 15, 38, 22, 46};
    int K = 28;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.636363636363637;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> shuffle = {38, 43, 13, 31, 47, 9, 2, 20, 8, 11, 29, 3, 27, 37, 30, 49, 7, 14, 35, 28, 15, 34, 23, 32, 18, 19, 45, 24, 26, 6, 12, 25, 42, 0, 44, 16, 39, 17, 22, 21, 46, 4, 41, 33, 5, 1, 10, 40, 48, 36};
    int maxShuffles = 67;
    vector<int> cardsReceived = {15, 48, 8, 44, 0, 33, 10, 36, 22, 35, 17, 26, 11, 28, 32, 6, 31, 13, 2, 18, 29, 41, 23, 7, 14, 24, 4, 3};
    int K = 26;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 15.447761194029852;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> shuffle = {44, 12, 26, 47, 30, 5, 43, 48, 4, 35, 34, 17, 45, 23, 37, 16, 1, 0, 28, 3, 46, 15, 10, 24, 29, 31, 7, 13, 14, 9, 42, 40, 27, 8, 18, 41, 22, 39, 21, 6, 38, 32, 36, 20, 49, 33, 25, 2, 19, 11};
    int maxShuffles = 36;
    vector<int> cardsReceived = {8, 3, 25, 38, 36, 46, 41, 18, 17, 2, 47, 26, 10, 45, 11, 34, 4, 32, 0, 30, 35, 24, 28, 13, 39, 27, 37, 20, 16, 31, 5};
    int K = 38;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 24.194444444444443;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> shuffle = {17, 12, 31, 44, 0, 37, 29, 42, 47, 2, 11, 34, 3, 22, 35, 15, 6, 39, 38, 36, 21, 14, 10, 45, 23, 18, 13, 7, 41, 27, 43, 40, 4, 32, 5, 48, 24, 25, 46, 30, 16, 8, 49, 20, 28, 9, 19, 1, 33, 26};
    int maxShuffles = 36;
    vector<int> cardsReceived = {24, 36, 22, 28, 16, 7, 35, 11, 15, 23, 21, 25, 9, 41, 29, 5, 2, 13, 4, 34, 20, 0, 38, 30, 33, 14, 40, 32, 6, 39, 47, 12, 27, 44};
    int K = 42;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 29.11111111111111;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> shuffle = {24, 25, 28, 4, 18, 29, 48, 5, 3, 13, 33, 22, 2, 49, 11, 34, 46, 7, 16, 1, 45, 47, 19, 40, 12, 32, 14, 43, 10, 6, 35, 17, 9, 20, 38, 0, 31, 26, 41, 44, 30, 37, 21, 8, 27, 15, 23, 36, 39, 42};
    int maxShuffles = 49;
    vector<int> cardsReceived = {37, 40, 44, 3, 35, 38, 30, 23, 43, 21, 13, 27, 33, 16, 41, 17, 24, 28, 49};
    int K = 33;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 12.755102040816327;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> shuffle = {1, 10, 36, 30, 48, 3, 31, 47, 15, 12, 6, 49, 23, 38, 16, 14, 35, 42, 44, 18, 4, 11, 9, 7, 33, 17, 8, 0, 22, 19, 2, 28, 41, 45, 43, 5, 25, 32, 37, 26, 20, 39, 29, 27, 21, 13, 24, 40, 46, 34};
    int maxShuffles = 13;
    vector<int> cardsReceived = {18, 36, 37, 24, 1, 35, 29, 0, 3, 15, 40, 25, 45, 17, 11, 5, 39, 21, 22, 41, 13, 28, 4, 10, 27, 9, 42, 49, 12, 31, 20, 47, 8, 33, 2, 19, 30, 32, 48, 7, 34, 38, 14, 43, 44};
    int K = 15;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 14.615384615384615;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> shuffle = {16, 7, 4, 9, 1, 26, 11, 20, 6, 44, 8, 39, 48, 45, 36, 14, 32, 43, 34, 25, 24, 30, 41, 29, 38, 40, 49, 22, 5, 18, 23, 19, 37, 35, 31, 42, 21, 12, 17, 3, 33, 0, 15, 2, 27, 28, 13, 46, 10, 47};
    int maxShuffles = 82;
    vector<int> cardsReceived = {23, 49, 47, 18, 2, 39, 20, 44, 13, 37, 27, 48, 36, 38, 11, 9, 3, 35, 8, 46, 32, 43, 29, 41, 21, 33, 7, 15, 25, 6, 45};
    int K = 49;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 30.451219512195124;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> shuffle = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0};
    int maxShuffles = 100;
    vector<int> cardsReceived = {1, 2, 3};
    int K = 5;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> shuffle = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0};
    int maxShuffles = 77;
    vector<int> cardsReceived = {1, 3, 8, 2, 44};
    int K = 3;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.38961038961038963;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> shuffle = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0};
    int maxShuffles = 7;
    vector<int> cardsReceived = {1, 5, 3, 45, 46, 33, 35, 36, 37, 49, 8};
    int K = 2;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1428571428571428;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> shuffle = {0, 4, 3, 5, 2, 6, 1};
    int maxShuffles = 19;
    vector<int> cardsReceived = {1, 3, 5};
    int K = 2;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0526315789473684;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> shuffle = {12, 1, 9, 49, 0, 27, 36, 31, 29, 45, 18, 46, 32, 40, 23, 33, 26, 41, 48, 17, 8, 47, 22, 34, 30, 7, 6, 11, 5, 4, 2, 21, 42, 35, 10, 39, 25, 3, 43, 16, 38, 37, 14, 13, 24, 15, 28, 19, 20, 44};
    int maxShuffles = 100;
    vector<int> cardsReceived = {0, 1, 2, 4, 10, 13, 14, 18, 19, 23, 28, 29, 33, 35, 38, 41, 45, 48};
    int K = 15;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> shuffle = {0, 3, 5, 2, 4, 8, 7, 1, 9, 6};
    int maxShuffles = 10;
    vector<int> cardsReceived = {1, 3, 5, 7};
    int K = 4;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> shuffle = {7, 3, 1, 9, 5, 2, 6, 0, 8, 4};
    int maxShuffles = 97;
    vector<int> cardsReceived = {7, 5, 2, 6, 4};
    int K = 6;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3.515463917525773;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> shuffle = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maxShuffles = 100;
    vector<int> cardsReceived = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int K = 8;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> shuffle = {0, 2, 4, 3, 1};
    int maxShuffles = 100;
    vector<int> cardsReceived = {0, 2, 3};
    int K = 3;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2.34;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> shuffle = {3, 4, 7, 2, 8, 5, 6, 1, 0, 9};
    int maxShuffles = 47;
    vector<int> cardsReceived = {6, 3, 5, 2, 8, 7, 4};
    int K = 8;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 6.297872340425532;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> shuffle = {31, 47, 27, 8, 2, 35, 41, 16, 10, 7, 33, 43, 45, 19, 1, 49, 24, 13, 3, 37, 48, 18, 20, 0, 40, 11, 32, 36, 26, 14, 5, 28, 22, 9, 21, 6, 34, 42, 39, 17, 46, 25, 30, 12, 38, 4, 44, 23, 29, 15};
    int maxShuffles = 100;
    vector<int> cardsReceived = {47, 31, 27, 8, 2, 35, 41, 16, 10, 7, 33, 43, 45, 19, 1, 49, 24, 13, 3, 37, 48, 18, 20, 0, 40, 11, 32, 36, 26, 14, 5, 28, 22, 9, 21, 6, 34, 42, 39, 17, 46, 25, 30, 12, 38, 4, 44, 23, 29, 15};
    int K = 50;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> shuffle = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0, 1};
    int maxShuffles = 100;
    vector<int> cardsReceived = {3, 7, 8, 0, 1, 4, 6};
    int K = 30;
    ShufflingMachine* pObj = new ShufflingMachine();
    clock_t start = clock();
    double result = pObj->stackDeck(shuffle, maxShuffles, cardsReceived, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4.6;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=13517&pm=10196
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <fstream> 
#include <iostream> 
#include <iterator> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <utility> 
#include <valarray> 
#include <vector> 
 
using namespace std; 
 
//Macroses 
#define all(v) (v).begin(), (v).end() 
 
//Types 
typedef long long ll; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <bool> vb; 
typedef vector <pii> vp; 
typedef vector <double> vd; 
typedef queue <pii> qp; 
 
//Constants 
const int INF = 1000000000; 
const double EPS = 1e-10; 
const double PI = 3.1415926535897932384626433832795; 
 
//Global 
int n; 
 
//Functions 
 
//Main class 
class ShufflingMachine { 
public: 
  double stackDeck(vector <int> s, int m, vector <int> c, int k) { 
    double res; 
    int n = s.size(); 
    vi q(n); 
    vi a(n); 
    for (int i = 0; i < n; ++i) { 
      a[i] = i; 
    } 
    for (int i = 0; i < m; ++i) { 
      vi b(n); 
      for (int j = 0; j < n; ++j) { 
        b[s[j]] = a[j]; 
      } 
      a.swap(b); 
      for (int j = 0; j < c.size(); ++j) { 
        ++q[b[c[j]]]; 
      } 
    } 
    res = 0; 
    sort(all(q), greater <int>()); 
    for (int i = 0; i < k; ++i) { 
      res += q[i]; 
    } 
    res /= m; 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/