/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12315
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

class RandomOption {
public:
    double getProbability(int keyCount, vector<int> badLane1, vector<int> badLane2);
};

double RandomOption::getProbability(int keyCount, vector<int> badLane1, vector<int> badLane2) {
    double ret;
    return ret;
}


int test0() {
    int keyCount = 5;
    vector<int> badLane1 = {0};
    vector<int> badLane2 = {3};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int keyCount = 5;
    vector<int> badLane1 = {0, 1, 2};
    vector<int> badLane2 = {1, 2, 0};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int keyCount = 5;
    vector<int> badLane1 = {2, 2, 2, 2};
    vector<int> badLane2 = {0, 1, 3, 4};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int keyCount = 7;
    vector<int> badLane1 = {0, 1, 2};
    vector<int> badLane2 = {6, 5, 4};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3904761904761904;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int keyCount = 7;
    vector<int> badLane1 = {3, 5, 1, 0, 2, 6, 4};
    vector<int> badLane2 = {0, 2, 4, 6, 1, 5, 3};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09166666666666667;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int keyCount = 7;
    vector<int> badLane1 = {0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3};
    vector<int> badLane2 = {4, 5, 6, 4, 5, 6, 4, 5, 6, 4, 5, 6};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int keyCount = 6;
    vector<int> badLane1 = {5};
    vector<int> badLane2 = {3};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int keyCount = 8;
    vector<int> badLane1 = {0};
    vector<int> badLane2 = {7};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.75;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int keyCount = 9;
    vector<int> badLane1 = {2};
    vector<int> badLane2 = {4};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7777777777777778;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int keyCount = 10;
    vector<int> badLane1 = {5, 8};
    vector<int> badLane2 = {3, 6};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6444444444444445;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int keyCount = 11;
    vector<int> badLane1 = {5, 8, 10};
    vector<int> badLane2 = {8, 7, 8};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.509090909090909;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int keyCount = 12;
    vector<int> badLane1 = {1, 9, 11};
    vector<int> badLane2 = {6, 8, 6};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5727272727272726;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int keyCount = 13;
    vector<int> badLane1 = {8, 10, 9};
    vector<int> badLane2 = {6, 6, 12};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6002331002331003;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int keyCount = 5;
    vector<int> badLane1 = {1, 0, 1, 1, 3, 4, 1, 4, 3};
    vector<int> badLane2 = {0, 2, 2, 3, 2, 0, 4, 2, 4};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int keyCount = 6;
    vector<int> badLane1 = {0, 3, 1, 2, 4, 2, 3, 0, 1, 5, 3, 4};
    vector<int> badLane2 = {2, 0, 3, 3, 1, 4, 4, 5, 5, 2, 5, 5};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int keyCount = 7;
    vector<int> badLane1 = {1, 0, 0, 1, 2, 4, 4, 4, 4, 5, 1, 5, 3, 4, 6, 6, 5};
    vector<int> badLane2 = {0, 2, 3, 3, 3, 0, 1, 2, 3, 0, 5, 2, 5, 5, 0, 3, 6};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int keyCount = 8;
    vector<int> badLane1 = {1, 2, 2, 0, 3, 3, 4, 4, 3, 1, 2, 5, 5, 0, 6, 2, 4, 5, 0, 1, 7, 7, 7, 7};
    vector<int> badLane2 = {0, 0, 1, 3, 1, 2, 1, 2, 4, 5, 5, 3, 4, 6, 1, 6, 6, 6, 7, 7, 2, 3, 5, 6};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int keyCount = 9;
    vector<int> badLane1 = {1, 0, 1, 0, 1, 4, 4, 3, 0, 5, 5, 4, 0, 1, 2, 6, 4, 6, 0, 1, 2, 3, 4, 5, 6, 8, 2, 8, 8, 8, 8, 7};
    vector<int> badLane2 = {0, 2, 2, 3, 3, 0, 2, 4, 5, 1, 2, 5, 6, 6, 6, 3, 6, 5, 7, 7, 7, 7, 7, 7, 7, 1, 8, 3, 4, 5, 6, 8};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int keyCount = 10;
    vector<int> badLane1 = {1, 0, 1, 0, 2, 0, 4, 4, 5, 2, 3, 5, 0, 6, 6, 6, 0, 7, 2, 7, 4, 7, 7, 0, 1, 2, 3, 4, 6, 8, 0, 9, 9, 9, 9, 9, 7, 8};
    vector<int> badLane2 = {0, 2, 2, 3, 3, 4, 2, 3, 0, 5, 5, 4, 6, 1, 2, 3, 7, 1, 7, 3, 7, 5, 6, 8, 8, 8, 8, 8, 8, 7, 9, 1, 2, 4, 5, 6, 9, 9};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int keyCount = 11;
    vector<int> badLane1 = {1, 2, 2, 3, 1, 2, 0, 4, 4, 3, 5, 5, 5, 0, 6, 2, 3, 6, 6, 0, 7, 2, 7, 7, 7, 1, 3, 8, 8, 7, 9, 2, 9, 9, 8, 10, 1, 10, 4, 5, 10, 10, 9};
    vector<int> badLane2 = {0, 0, 1, 0, 3, 3, 4, 1, 2, 4, 1, 2, 3, 6, 1, 6, 6, 4, 5, 7, 1, 7, 3, 4, 6, 8, 8, 5, 6, 8, 1, 9, 3, 7, 9, 0, 10, 3, 10, 10, 6, 8, 10};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int keyCount = 12;
    vector<int> badLane1 = {1, 2, 1, 0, 4, 5, 5, 2, 3, 4, 5, 7, 7, 4, 5, 6, 0, 1, 8, 8, 8, 0, 1, 9, 9, 4, 9, 6, 9, 8, 0, 10, 3, 5, 6, 7, 8, 9, 11, 3, 11, 5, 7, 11, 10};
    vector<int> badLane2 = {0, 1, 3, 4, 2, 0, 3, 6, 6, 6, 6, 1, 3, 7, 7, 7, 8, 8, 5, 6, 7, 9, 9, 2, 3, 9, 5, 9, 7, 9, 10, 2, 10, 10, 10, 10, 10, 10, 1, 11, 4, 11, 11, 8, 11};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5928865373309814E-8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int keyCount = 13;
    vector<int> badLane1 = {3, 1, 2, 2, 0, 5, 5, 5, 6, 6, 3, 6, 0, 2, 7, 7, 8, 2, 3, 4, 5, 6, 9, 9, 9, 9, 10, 3, 10, 10, 11, 11, 3, 11, 5, 11, 11, 0, 1, 2, 3, 4, 12, 12, 12, 12};
    vector<int> badLane2 = {0, 3, 3, 4, 5, 1, 3, 4, 1, 2, 6, 5, 7, 7, 3, 4, 0, 8, 8, 8, 8, 8, 1, 2, 6, 7, 2, 10, 4, 6, 0, 1, 11, 4, 11, 8, 9, 12, 12, 12, 12, 12, 5, 8, 9, 11};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.171661157772269E-6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int keyCount = 14;
    vector<int> badLane1 = {1, 3, 2, 0, 4, 5, 1, 5, 4, 6, 3, 6, 5, 7, 2, 7, 1, 8, 8, 8, 8, 9, 9, 10, 10, 10, 10, 10, 1, 6, 9, 11, 12, 1, 7, 12, 13, 1, 2, 3, 4, 13, 13, 7, 13, 10, 13};
    vector<int> badLane2 = {0, 0, 3, 4, 3, 0, 5, 2, 5, 2, 6, 4, 6, 1, 7, 3, 8, 4, 5, 6, 7, 3, 4, 1, 4, 6, 8, 9, 11, 11, 11, 10, 0, 12, 12, 9, 0, 13, 13, 13, 13, 5, 6, 13, 8, 13, 12};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3503797605980147E-5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int keyCount = 8;
    vector<int> badLane1 = {0, 3, 3, 4, 1, 4, 0, 5, 2, 5, 5, 6, 6, 6, 6, 7, 7, 4};
    vector<int> badLane2 = {1, 1, 2, 0, 4, 2, 5, 1, 5, 3, 4, 1, 2, 4, 5, 0, 1, 7};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int keyCount = 9;
    vector<int> badLane1 = {2, 0, 1, 4, 2, 5, 4, 6, 5, 7, 3, 7, 0, 2, 8, 8};
    vector<int> badLane2 = {1, 3, 3, 3, 5, 3, 5, 1, 6, 0, 7, 5, 8, 8, 6, 7};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00642636684303351;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int keyCount = 10;
    vector<int> badLane1 = {1, 3, 0, 0, 5, 5, 1, 0, 7, 7, 8, 8, 8, 8, 5};
    vector<int> badLane2 = {0, 2, 4, 5, 3, 4, 6, 7, 4, 6, 1, 2, 4, 6, 9};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.020188492063492065;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int keyCount = 11;
    vector<int> badLane1 = {0, 2, 1, 5, 6, 6, 4, 7, 7, 7, 8, 1, 5, 6, 0, 10};
    vector<int> badLane2 = {1, 0, 2, 2, 1, 2, 6, 2, 3, 5, 0, 9, 9, 9, 10, 7};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.020668590668590666;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int keyCount = 12;
    vector<int> badLane1 = {0, 0, 5, 5, 6, 0, 8, 8, 8, 9, 10, 9, 11, 11, 11, 10};
    vector<int> badLane2 = {2, 5, 2, 4, 4, 8, 2, 3, 4, 5, 2, 10, 2, 3, 6, 11};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03171173540965208;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int keyCount = 14;
    vector<int> badLane1 = {3, 4, 4, 9, 9, 10, 0, 8, 7, 12};
    vector<int> badLane2 = {2, 1, 6, 4, 8, 2, 11, 11, 13, 13};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2097807175188128;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int keyCount = 14;
    vector<int> badLane1 = {1, 6, 5, 8, 4, 6, 8, 5, 7, 2, 12, 4};
    vector<int> badLane2 = {0, 4, 6, 0, 9, 9, 9, 10, 10, 12, 9, 13};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13830171812314668;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int keyCount = 14;
    vector<int> badLane1 = {3, 4, 6, 7, 9, 7, 10, 2, 3, 5, 11, 6, 13, 13, 13};
    vector<int> badLane2 = {1, 5, 4, 2, 2, 9, 5, 11, 11, 11, 8, 12, 4, 9, 12};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08506623405804954;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int keyCount = 14;
    vector<int> badLane1 = {3, 0, 5, 3, 6, 7, 8, 6, 0, 6, 10, 10, 8, 11, 4, 13, 7};
    vector<int> badLane2 = {4, 5, 2, 6, 5, 1, 0, 8, 9, 9, 3, 7, 10, 3, 11, 3, 13};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.056225506746340075;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int keyCount = 14;
    vector<int> badLane1 = {1, 3, 2, 6, 5, 0, 8, 6, 9, 9, 8, 1, 11, 8, 12, 11, 0, 13, 13, 9};
    vector<int> badLane2 = {3, 2, 6, 4, 7, 8, 4, 8, 3, 4, 9, 10, 7, 11, 6, 12, 13, 6, 8, 13};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.028468120834192263;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int keyCount = 8;
    vector<int> badLane1 = {1, 6};
    vector<int> badLane2 = {2, 5};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5714285714285714;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int keyCount = 9;
    vector<int> badLane1 = {1, 4, 5, 8};
    vector<int> badLane2 = {2, 3, 1, 0};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3716931216931217;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int keyCount = 10;
    vector<int> badLane1 = {1, 2, 7, 6};
    vector<int> badLane2 = {3, 5, 5, 8};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.41269841269841273;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int keyCount = 11;
    vector<int> badLane1 = {4, 3, 7, 10, 10};
    vector<int> badLane2 = {2, 7, 6, 7, 9};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3434343434343434;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int keyCount = 12;
    vector<int> badLane1 = {3, 4, 4, 6, 5, 3};
    vector<int> badLane2 = {1, 0, 5, 2, 8, 11};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33195646945646945;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int keyCount = 14;
    vector<int> badLane1 = {3, 1, 2, 4, 4, 2, 5, 1, 2, 6, 6, 6, 7, 7, 7, 8, 8, 2, 9, 1, 9, 10, 1, 10, 11, 1, 11, 0, 1, 2, 13, 2};
    vector<int> badLane2 = {0, 3, 3, 0, 1, 4, 0, 5, 5, 0, 1, 2, 0, 1, 2, 0, 1, 8, 0, 9, 2, 0, 10, 2, 0, 11, 2, 12, 12, 12, 0, 13};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.665001665001665E-4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int keyCount = 14;
    vector<int> badLane1 = {4, 1, 4, 3, 0, 1, 5, 5, 6, 6, 2, 6, 0, 7, 2, 7, 8, 1, 2, 3, 9, 1, 9, 10, 10, 2, 3, 11, 11, 11, 11, 0, 12, 12, 3, 13, 1, 2, 13};
    vector<int> badLane2 = {0, 4, 2, 4, 5, 5, 2, 3, 0, 1, 6, 3, 7, 1, 7, 3, 0, 8, 8, 8, 0, 9, 3, 0, 1, 10, 10, 0, 1, 2, 3, 12, 1, 2, 12, 0, 13, 13, 3};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 4.995004995004995E-5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int keyCount = 14;
    vector<int> badLane1 = {0, 5, 5, 3, 4, 0, 6, 2, 3, 4, 7, 7, 7, 3, 4, 8, 8, 8, 3, 8, 9, 9, 2, 9, 10, 10, 10, 3, 10, 11, 11, 2, 11, 11, 12, 12, 12, 12, 12, 0, 13, 13, 13, 13};
    vector<int> badLane2 = {5, 1, 2, 5, 5, 6, 1, 6, 6, 6, 0, 1, 2, 7, 7, 0, 1, 2, 8, 4, 0, 1, 9, 3, 0, 1, 2, 10, 4, 0, 1, 11, 3, 4, 0, 1, 2, 3, 4, 13, 1, 2, 3, 4};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.22000222000222E-5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int keyCount = 14;
    vector<int> badLane1 = {0, 6, 2, 6, 4, 5, 7, 1, 7, 7, 4, 7, 8, 8, 3, 4, 5, 9, 1, 9, 3, 4, 5, 0, 1, 2, 3, 10, 10, 0, 1, 11, 11, 11, 11, 0, 1, 12, 12, 4, 12, 13, 1, 13, 3, 13, 5};
    vector<int> badLane2 = {6, 1, 6, 3, 6, 6, 0, 7, 2, 3, 7, 5, 0, 1, 8, 8, 8, 0, 9, 2, 9, 9, 9, 10, 10, 10, 10, 4, 5, 11, 11, 2, 3, 4, 5, 12, 12, 2, 3, 12, 5, 0, 13, 2, 13, 4, 13};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3875013875013877E-5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int keyCount = 14;
    vector<int> badLane1 = {7, 1, 2, 3, 4, 7, 7, 0, 8, 2, 3, 4, 5, 8, 9, 1, 2, 3, 4, 5, 9, 10, 10, 10, 3, 10, 10, 10, 0, 11, 2, 11, 4, 5, 6, 0, 1, 12, 12, 12, 12, 13, 13, 13, 13, 4, 5, 6};
    vector<int> badLane2 = {0, 7, 7, 7, 7, 5, 6, 8, 1, 8, 8, 8, 8, 6, 0, 9, 9, 9, 9, 9, 6, 0, 1, 2, 10, 4, 5, 6, 11, 1, 11, 3, 11, 11, 11, 12, 12, 3, 4, 5, 6, 0, 1, 2, 3, 13, 13, 13};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1892869035726179E-5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int keyCount = 14;
    vector<int> badLane1 = {0};
    vector<int> badLane2 = {1};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8571428571428571;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int keyCount = 5;
    vector<int> badLane1 = {0};
    vector<int> badLane2 = {3};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int keyCount = 7;
    vector<int> badLane1 = {0, 0, 0, 0, 0, 0, 1};
    vector<int> badLane2 = {1, 2, 3, 4, 5, 6, 2};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int keyCount = 14;
    vector<int> badLane1 = {0, 6, 9, 4};
    vector<int> badLane2 = {5, 7, 8, 3};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5464535464535464;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int keyCount = 14;
    vector<int> badLane1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> badLane2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    RandomOption* pObj = new RandomOption();
    clock_t start = clock();
    double result = pObj->getProbability(keyCount, badLane1, badLane2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2039461915950011;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23110714&rd=15184&pm=12315
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
#include <cstring>
#include <ctime>
 
using namespace std;
 
class RandomOption {
public:
  double getProbability(int, vector <int>, vector <int>);
};
long long dp[1<<14][14];
int c[14][14];
double RandomOption::getProbability(int keyCount, vector <int> badLane1, vector <int> badLane2) {
  int i, j, k, n = badLane1.size();
  memset(c, 0, sizeof(c));
  memset(dp, 0, sizeof(dp));
  for (i = 0; i < n; i++){
      c[badLane1[i]][badLane2[i]] = 1;
      c[badLane2[i]][badLane1[i]] = 1;
  }
  for (i = 0; i < keyCount; i++){
      dp[1<<i][i] = 1;
  }
  for (k = 1; k < (1<<keyCount); k++){
      for (i = 0; i < keyCount; i++){
          if (dp[k][i] == 0) continue;
          for (j = 0; j < keyCount; j++){
              if (k & (1<<j)) continue;
              if (c[i][j]) continue;
              dp[k | (1<<j)][j] += dp[k][i];
          }
      }
  }
  double ans = 0;
  for (i = 0; i < keyCount; i++){
      ans += dp[(1<<keyCount) - 1][i];
  }
  for (i = 0; i < keyCount; i++) ans /= i + 1;
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/