/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11156
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

class ShuffleSort {
public:
    double shuffle(vector<int> cards);
};

double ShuffleSort::shuffle(vector<int> cards) {
    double ret;
    return ret;
}


int test0() {
    vector<int> cards = {1};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> cards = {1, 2};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cards = {2, 3, 1};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cards = {1, 1, 2, 2, 3, 3};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cards = {1, 2, 2, 2, 2, 3};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 8.083333333333334;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cards = {15, 16, 4, 8, 42, 23};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 16.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> cards = {1, 1, 1, 1, 1, 1, 1, 1};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cards = {18, 35, 1, 20, 25, 29, 9, 13, 15, 6, 46, 32, 28, 12, 42, 46, 43, 28, 37, 42, 5, 3, 4, 43, 33, 22, 17, 19, 46, 48, 27, 22, 39, 20, 13, 18, 50, 36, 45, 4, 12};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 706.6666666666666;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> cards = {34, 24, 15, 42, 12, 4, 19, 48, 45, 13, 8, 38, 10, 24, 42, 30, 29, 17, 36, 41, 43, 39};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 222.5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cards = {41, 43, 15, 49, 47, 6};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 16.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cards = {30, 21, 1, 7, 2, 44, 49, 30, 24, 35, 5, 7, 41, 17, 27, 32, 9, 45, 40, 27, 24, 38, 39, 19, 33, 30, 42, 34, 16, 40, 9, 5, 31, 28, 7, 24, 37, 22, 46, 25};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 637.5000000000001;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cards = {21, 30, 28, 24, 48, 13, 37, 41, 12, 37, 6, 18, 6, 25, 32, 3, 1, 1, 42, 25, 17, 31};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 203.5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cards = {42, 8, 38, 8, 38, 4, 34};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 17.5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cards = {10, 10, 9, 22, 39, 23, 47, 7, 31, 14, 19, 1, 42, 13, 6, 11, 10, 25, 38, 49, 34, 46, 42, 3, 1, 42, 37, 25, 21, 47, 22, 49, 50, 19, 35, 32, 35, 4, 50, 19, 39, 1, 39, 28, 18};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 797.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cards = {44, 49, 34, 8, 22, 11, 18, 14, 15, 10, 17, 36, 2, 1, 50, 20, 7, 49, 4, 25, 9, 45, 10, 40, 3, 46, 36, 44};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 358.5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cards = {24, 38, 15, 4, 49, 1, 9, 19, 31, 47, 49, 32, 40, 49, 10, 8, 23, 23, 39, 43, 39, 30, 41, 8, 9, 42, 16, 39, 7, 12, 3, 35, 23, 6, 29, 47, 13, 37, 26, 34, 20, 43, 45};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 810.6666666666666;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cards = {32, 49, 23, 2, 22, 50, 8, 27, 43, 40, 26, 13, 1, 11, 4, 20};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 121.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cards = {39, 2, 40, 6, 24, 3, 36, 33, 36, 39, 27};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 52.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cards = {8, 33, 33, 20, 5, 22, 40, 27, 30, 19, 43, 26, 6, 35, 50, 42, 13};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 133.5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cards = {11, 19, 4, 40, 24, 30, 47, 38, 30, 50, 38, 17, 50, 44, 46, 48, 17, 37, 6, 39, 33, 6, 35, 15, 2, 17, 22, 37, 14, 14, 6, 36, 4, 13, 9, 33, 46, 14, 7, 22, 9, 47, 33, 32, 45};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 759.4999999999999;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cards = {23, 30, 12, 36, 1, 24, 17, 45, 10, 43, 40, 4, 25, 5, 11, 46, 50, 37, 14, 25, 23, 19, 19, 38, 6, 9, 42, 3, 26, 28, 15, 15, 25, 35, 25, 23, 10, 34, 21, 38, 48, 19, 28, 24, 21, 14};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 838.9166666666666;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cards = {43, 36, 3, 31, 14, 28, 3, 50, 28, 26, 44, 25, 24, 23, 12, 32, 4, 33};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 140.5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cards = {44, 26, 32, 43, 43};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cards = {37, 15, 1, 38, 11, 14, 25, 21, 21, 36, 34, 12, 11, 47, 18, 36, 1, 41, 45, 46, 25, 20};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 195.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cards = {27, 45, 9, 3, 22, 17, 29, 44, 2, 35, 19, 15, 20, 3, 1, 38, 11, 27, 11, 8, 21, 16, 27, 28, 44};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 267.33333333333337;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cards = {15, 10, 33, 37, 16, 38, 38, 25};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 28.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cards = {28, 30, 29, 24, 21, 3, 13, 24, 47, 38, 12, 46, 26, 15, 11, 3, 17, 31, 27, 12, 22, 12, 48, 4, 21};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 251.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cards = {25, 39, 14, 41, 2, 13, 30, 1, 14, 9, 29, 16, 8, 28, 1, 9, 40, 4, 11, 8, 25, 28, 9, 14, 38, 2, 1, 11, 29, 44, 35, 6, 41, 12, 5, 36, 7, 23, 1, 24};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 583.3333333333333;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cards = {7, 17, 27, 8, 27, 8, 38, 22, 20, 12, 47, 23, 18, 13, 18, 47, 36, 42, 24, 30, 30, 16, 10, 33, 47, 6, 4, 13, 35, 35, 5, 23, 8, 20, 33};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 492.83333333333337;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cards = {8, 34, 12, 36, 18, 49, 26, 39, 24, 43, 5, 12, 42};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 73.5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cards = {10, 26, 22, 21, 27, 35, 6, 34, 1, 49, 30, 2, 44, 35, 38, 35, 7, 44, 27, 6, 13, 49, 32, 1, 14};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 259.1666666666667;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cards = {6, 6, 43, 13, 12, 28, 25, 29, 3, 44, 47, 24, 41, 14, 26, 23, 19, 11, 18, 33, 13, 46, 20, 32, 41, 39, 36, 41, 48, 40, 41, 46, 4, 15, 2, 41, 45, 9, 36, 10, 43};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 739.7666666666667;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cards = {15, 32, 4, 30, 26};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cards = {43, 48, 50, 7, 12, 28, 18, 42};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 29.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cards = {41, 14, 25, 2, 28, 16, 34, 14, 43, 25, 2, 43, 10, 21, 29, 28, 35, 26, 37, 49, 21, 38, 48, 5, 4, 22, 14, 7, 14};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 325.58333333333337;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cards = {22, 40, 41, 15, 43, 20, 14, 42, 5, 19};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 46.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> cards = {1, 6, 26, 40, 4, 23, 49, 48, 35, 49, 22, 15, 14, 26, 46, 13, 47, 29, 20, 13, 20, 36, 40, 45, 16, 41, 46, 9, 19, 21, 2, 24};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 456.5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cards = {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 7, 7, 7, 7};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 296.65476190476187;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cards = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1226.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cards = {8, 50, 48, 1, 38, 23, 29, 33, 45, 39, 40, 26, 40, 47, 21, 33, 32, 25, 9, 7, 36, 16, 11, 42, 28, 30, 43, 26, 18, 48, 28, 49, 3, 36, 22, 15, 22, 11, 39, 20, 24, 14, 16, 14, 39, 22, 27, 31, 13, 32};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1048.6666666666667;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cards = {1};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cards = {15, 16, 4, 8, 42, 23};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 16.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cards = {1, 1, 1, 2, 3, 4, 5};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 14.333333333333336;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> cards = {2, 1, 1, 1, 1, 1, 1, 1};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5928571428571416;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> cards = {11, 24, 49, 50, 33, 17, 12, 9, 1, 2, 19, 23, 45, 23, 11, 7, 8, 37, 47, 7, 48, 46, 45, 44, 43, 34, 33, 32, 31, 27, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 25, 24, 48, 49, 30, 31, 32, 20, 50, 39};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1006.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cards = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 21.666748983944416;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cards = {2, 3, 1, 3, 15, 16, 17, 2, 3, 42, 19, 45, 22};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 61.83333333333334;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> cards = {15, 16, 8, 8, 42, 23};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 15, 25, 26, 26, 26, 7, 37, 45, 32, 22, 22, 13, 13, 42, 5, 11, 23, 21, 23, 4, 3, 4};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 408.66666666666663;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> cards = {15, 16, 4, 8, 42, 15, 16, 4, 8, 42, 15, 16, 4, 8, 42, 15, 16, 4, 8, 42, 15, 16, 4, 8, 42, 15, 16, 4, 8, 42, 15, 16, 4, 8, 42, 15, 16, 4, 8, 42, 1, 2, 3, 4, 5, 6, 7};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 464.4710317460318;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cards = {32, 38, 33, 8, 42, 34, 26, 26, 4, 46, 38, 20, 32, 18, 35, 11, 7, 5, 7, 50, 2, 2, 12, 35, 45, 50, 24, 36, 43, 27, 8, 19, 17, 38, 3, 33, 37, 34, 4, 21, 2, 5, 1, 27, 28, 13, 11, 17, 48, 16};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 980.6666666666665;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cards = {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 5, 6, 7, 7, 7, 2, 2, 3};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 110.66666666666669;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cards = {3, 2, 1, 1, 1, 4, 4, 4};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 17.166666666666664;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cards = {1, 1, 1, 1, 1, 1, 1, 1, 34};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7178571428571416;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> cards = {1, 1, 1, 1, 1, 1, 1, 1, 22, 33, 22};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 10.653571428571428;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cards = {1, 1, 2};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> cards = {1, 2, 1};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cards = {1, 1, 1, 2};
    ShuffleSort* pObj = new ShuffleSort();
    clock_t start = clock();
    double result = pObj->shuffle(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.833333333333333;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23104903&rd=15488&pm=11156
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
 
class ShuffleSort {
public:
  double shuffle(vector <int>);
};
 
int a[55] ;
 
 
double gao(int pos, int n)
{
  int i, sum = 0 ;
  if (n == 1) return 0 ;
  for (i = pos ; a[i] == a[pos] ; i++)
    sum++ ;
  double p1 = 1.0 * sum / n ;
  double p2 = 1-p1 ;
  return gao(pos+1, n-1)+ p2/p1 ;
}
 
 
double ShuffleSort::shuffle(vector <int> cards) {
  int i, n = cards.size() ;
  sort(cards.begin(), cards.end()) ;
  for (i = 0 ; i < n ; i++) a[i] = cards[i] ;
  return gao(0, cards.size()) + 1 ;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/