/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8467
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

class OlympicCandles {
public:
    int numberOfNights(vector<int> candles);
};

int OlympicCandles::numberOfNights(vector<int> candles) {
    int ret;
    return ret;
}


int test0() {
    vector<int> candles = {2, 2, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> candles = {2, 2, 2, 4};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> candles = {5, 2, 2, 1};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> candles = {1, 2, 3, 4, 5, 6};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> candles = {4, 5, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> candles = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> candles = {1, 3, 4, 2, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> candles = {1, 3, 4, 2, 5, 6, 7, 8, 9, 7, 11, 12, 13, 14, 15, 16, 14, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 45, 47, 48, 49, 50};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> candles = {100, 99, 1, 1, 1, 1};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> candles = {23, 34, 58, 10, 1, 21, 12, 2, 1, 4, 3, 12, 100, 3, 45, 1, 2, 4, 29, 40, 2, 1};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> candles = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 50};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> candles = {4, 1, 1, 3, 1, 2, 4, 4, 3, 1, 1, 2, 3, 1, 4, 3, 3, 1, 4, 3, 4, 2, 1, 4, 1, 1, 2, 4, 2, 3, 4, 43, 3, 43, 1, 2, 30, 51, 2, 1, 4, 3, 1, 1, 1, 4, 4, 3, 3, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> candles = {4, 3, 3, 3, 3, 2, 1, 30, 2, 1, 3, 1, 4, 3, 1, 51, 1, 3, 4, 2, 4, 4, 2, 3, 1, 3, 3, 1, 92, 4, 60, 2, 4, 2, 3, 1, 1, 2, 4, 1, 3, 4, 3, 89, 4, 2, 4, 2, 18, 3};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> candles = {1, 4, 50, 1, 4, 1, 2, 3, 2, 4, 4, 4, 1, 3, 97, 2, 3, 2, 3, 1, 4, 58, 4, 1, 4, 3, 4, 3, 3, 2, 3, 1, 3, 4, 4, 1, 2, 1, 11, 2, 1, 2, 4, 2, 2, 3, 2, 1, 3, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> candles = {2, 1, 4, 2, 1, 1, 2, 4, 1, 2, 2, 2, 4, 1, 2, 3, 3, 2, 4, 4, 4, 2, 1, 2, 1, 3, 3, 1, 3, 2, 3, 3, 4, 4, 1, 3, 2, 2, 3, 3, 2, 4, 2, 3, 1, 3, 4, 3, 2, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> candles = {3, 1, 2, 1, 4, 4, 2, 1, 1, 2, 1, 2, 4, 3, 3, 1, 1, 3, 71, 2, 1, 4, 3, 95, 1, 2, 3, 3, 3, 2, 1, 1, 1, 88, 27, 58, 16, 4, 3, 2, 3, 4, 3, 4, 1, 1, 3, 1, 2, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> candles = {3, 3, 4, 4, 2, 91, 1, 1, 3, 1, 3, 2, 2, 59, 4};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
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
    vector<int> candles = {1, 1, 4, 3, 29, 1, 1, 1, 1, 3, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> candles = {3, 3, 2, 2, 1, 2, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> candles = {2, 2, 2, 1, 4, 3, 3, 1, 2, 4, 4, 4, 1, 3, 3, 4, 4, 2, 3, 3, 4, 99, 2, 3, 3, 2, 2, 1, 1, 2, 4, 3, 2, 3, 4, 2, 14, 1, 3, 1, 4, 4, 89, 3, 2, 46, 3};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> candles = {45, 4};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> candles = {2, 2, 2, 1, 2, 1, 4, 2, 1, 3};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> candles = {4, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> candles = {2, 4, 29, 1, 3, 3, 4, 4, 4, 4, 72, 1, 3, 2, 1, 1, 6, 4, 3, 4, 1, 1, 4, 1, 3, 3, 2, 1, 1, 1, 3, 4, 1, 4, 64, 4, 4, 70, 2, 4, 1, 2, 4};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> candles = {1, 1, 22, 3, 3, 50, 3, 49, 1, 4, 2, 2, 1, 4, 2, 1, 3, 4, 4, 2, 1, 1, 4, 3, 1, 3, 2, 1, 3, 4, 2, 1, 3, 1, 1, 3, 4, 3, 2, 2, 3, 63, 2, 1, 1, 2, 4, 4, 1, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> candles = {1, 81, 3, 56, 1, 1, 2, 2, 1, 2, 1, 4, 2, 4};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> candles = {4, 2, 1, 2, 3, 3, 2, 62, 1};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> candles = {2, 2, 2, 1, 1, 4, 4, 40, 1, 3, 3, 3};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
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
    vector<int> candles = {4, 4, 3, 2, 2, 1, 2, 2, 24, 1, 3, 72, 3, 2, 2, 1, 1, 3, 2, 3, 17, 4, 4, 2, 3, 1, 3, 2, 1, 2, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> candles = {4, 2, 2, 3, 4, 1, 3, 4, 1, 3, 2, 1, 94, 1, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> candles = {4, 4, 4, 3, 4, 2, 3, 3, 4};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
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
    vector<int> candles = {1, 2, 3, 1, 2, 3, 4, 3, 1, 4, 1, 1, 4, 4, 2, 2, 4, 3, 2, 2, 41, 48, 4, 1, 3, 3, 3, 2, 4, 4, 4, 1, 3, 1, 3, 1, 2, 24, 34, 3, 1, 3, 1, 1, 2, 2, 1, 4, 3};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> candles = {2, 1, 1, 1, 1, 2, 75, 4, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
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
    vector<int> candles = {2, 2, 3, 2, 3, 3, 1, 2, 2, 1, 4, 3, 23, 4, 53, 4, 1, 1, 4, 75, 2, 4, 2, 4, 3, 3, 1, 4, 1, 4, 4, 4, 3, 3, 3, 3, 1, 1, 1, 3};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> candles = {4, 4, 4, 4, 3, 1, 3, 3, 1, 2, 4, 2, 1, 1, 1, 3, 2, 4, 1, 1, 3, 4, 2, 29, 3, 1, 2, 2, 2, 3, 1, 2, 2, 3, 1, 3, 2, 4, 2, 3, 83, 3, 3, 4, 2, 84, 3, 73};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> candles = {2, 4, 2, 2, 3, 3, 2, 1, 3, 4, 4, 3, 1, 49, 1, 1, 4, 100, 1, 1, 2, 3, 1, 1, 1, 2, 2, 2, 1};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> candles = {4, 3, 4, 55, 98, 1, 4, 1, 4, 4, 1, 1, 1};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> candles = {98, 2, 6, 1, 50, 4, 2, 2, 98, 1, 83, 4, 2, 2, 1, 9, 1, 4, 8, 3, 4, 2, 3, 4, 1, 2, 2, 1, 16, 4, 1, 1, 1, 18, 3};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> candles = {2, 3, 2, 1, 3, 4, 2, 8, 2, 3, 2, 1, 2, 1, 2, 1, 4, 3, 4, 1, 2, 2, 3, 2, 3, 4, 2, 1, 1, 4, 3, 4, 1, 2, 2, 3, 3, 12, 2, 76, 3, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> candles = {3, 1, 4, 3, 42, 4, 4, 3, 4, 3, 4, 3, 3, 1, 1, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> candles = {2, 3, 2, 1, 1, 2, 4, 3, 1, 4, 3, 3, 4, 2, 4, 27, 3, 2, 4, 1, 2, 2, 3, 2, 4, 44, 1, 2, 1, 4, 72, 1, 2, 66, 3, 3, 1, 4, 1, 1, 2, 2, 2, 2, 3, 1, 1, 3, 100};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> candles = {4, 11, 2, 2, 1, 4, 1, 4, 28, 4, 4, 2, 2, 1, 3, 3, 1, 2, 1, 2, 2, 1, 2, 2, 3, 2, 1, 4, 2, 2, 3, 4, 1, 69, 2, 4};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> candles = {1, 32, 4, 4, 1, 2, 1, 1, 4, 4, 4, 3, 2, 76, 2, 1, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> candles = {1, 77, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> candles = {3, 2, 36, 1, 4, 2, 2, 4, 2, 1, 4, 4, 2, 1, 3, 2, 3, 36, 2, 4, 80, 2, 2, 1, 2, 4, 2, 1, 3, 4, 1, 2, 6, 3, 3, 4, 80, 89, 72, 2, 84};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> candles = {3, 3, 4, 1, 1, 4, 3, 2, 2, 4, 3, 2, 2, 3, 1, 4, 1, 4, 5, 4, 1, 4, 4, 2, 2, 96, 3, 4, 4, 3, 3, 3, 4, 3, 3, 3, 4, 3, 2, 34};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> candles = {3, 4, 2, 3, 3, 4, 2, 25, 2, 1, 2, 3, 1, 1, 3, 2, 1, 4, 4, 2, 2, 4, 2, 1};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> candles = {2, 1, 1, 4, 3, 3, 2, 2, 75, 4, 4, 40, 2, 2, 2, 4, 4, 3, 4, 2, 3, 3, 2, 3, 4, 3, 2, 4, 2, 3, 2, 1, 3, 4, 3, 3, 90, 3, 3, 3, 39, 4, 4, 4, 3, 4};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> candles = {4, 3, 1};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> candles = {4, 2, 3, 5, 7, 10, 12, 12, 15, 11, 4, 2, 14, 5, 7, 13, 22, 12, 15, 11, 4, 2, 11, 5, 14, 10, 22, 16, 14, 17, 4, 10, 3, 21, 7, 10, 11, 12, 14, 21, 21, 8, 2, 14, 11, 16, 24, 12, 16, 10};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> candles = {57, 100, 64};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> candles = {5, 2, 2, 1};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> candles = {100, 100, 100};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
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
    vector<int> candles = {100};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> candles = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> candles = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> candles = {10, 10, 10};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
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
    vector<int> candles = {1, 5, 6, 7, 88};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> candles = {1, 1};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> candles = {3};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
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
    vector<int> candles = {10};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> candles = {10, 10};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> candles = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> candles = {100, 100};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> candles = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 1};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> candles = {10, 9, 2, 4};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> candles = {5, 5, 5};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> candles = {30};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> candles = {5};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> candles = {8, 8, 8, 8};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> candles = {20, 21, 22};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> candles = {100, 100, 100, 100, 100};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> candles = {100, 100, 95};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> candles = {1, 1, 1, 1, 100};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> candles = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 1};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> candles = {10, 5};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> candles = {100, 20, 30, 70, 60, 50, 10, 1, 99};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> candles = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> candles = {6};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> candles = {7, 7, 7};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> candles = {2, 7, 9, 3, 1, 2, 2, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> candles = {99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 77, 66, 55, 88, 98, 99, 88, 99, 77, 88, 87, 89, 98, 76, 67, 89, 87, 78, 98, 87, 76, 67, 87, 65, 56, 78, 76, 56, 76, 87, 87, 65, 78, 76, 67};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> candles = {1, 2, 3, 2, 23, 4, 32, 32, 43, 66, 2, 3, 4, 34, 43, 54, 54, 76, 87, 56, 23, 34, 34, 34, 45, 45, 45, 56, 94, 94, 49, 34, 32, 4, 3, 24, 34, 23, 4, 3, 3, 3, 34};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> candles = {1, 2, 3, 2, 10};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> candles = {5, 5};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> candles = {1, 2};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> candles = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> candles = {6, 6, 6};
    OlympicCandles* pObj = new OlympicCandles();
    clock_t start = clock();
    int result = pObj->numberOfNights(candles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22707682&rd=12180&pm=8467
********************************************************************************
#include <algorithm>
#include <vector>
using namespace std;
#define all(v) v.begin(),v.end()
#define sz size()
 
class OlympicCandles {
public:
  int numberOfNights(vector <int>);
};
 
int OlympicCandles::numberOfNights(vector <int> c) {
    for(int i=1;;i++)
    {
        sort(all(c));
        reverse(all(c));
        if(c.sz<i)return i-1;
        for(int j=0;j<i;j++)if(c[j]--==0)return i-1;
    }
}

********************************************************************************
*******************************************************************************/