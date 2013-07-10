/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11985
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

class KingdomAndDucks {
public:
    int minDucks(vector<int> duckTypes);
};

int KingdomAndDucks::minDucks(vector<int> duckTypes) {
    int ret;
    return ret;
}


int test0() {
    vector<int> duckTypes = {5, 8};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> duckTypes = {4, 7, 4, 7, 4};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> duckTypes = {17, 17, 19, 23, 23, 19, 19, 17, 17};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> duckTypes = {50};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> duckTypes = {10, 10, 10, 10, 10};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> duckTypes = {1};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> duckTypes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
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
    vector<int> duckTypes = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> duckTypes = {7, 26, 31, 35, 22, 20, 19, 49, 29, 47, 12, 1, 32, 45, 30, 23, 11, 27, 3, 2, 4, 9, 17, 24, 46, 5, 34, 14, 21, 28, 37, 39, 43, 41, 48, 38, 16, 25, 6, 8, 40, 42, 36, 18, 33, 50, 10, 44, 15, 13};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> duckTypes = {9, 3, 6, 5, 2, 1, 13, 13, 14, 1, 11, 11, 2, 12, 14, 7, 7, 8, 4, 8, 10, 12, 9, 10, 3, 5, 6, 4, 15};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> duckTypes = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 7, 4, 4, 4, 4, 4, 4};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> duckTypes = {45, 34, 4, 34, 45, 12, 4, 34, 12, 34, 7, 25, 45, 12, 6, 7, 7, 12, 4, 45, 4, 7, 4, 7, 34, 7, 45, 6, 12, 4, 6, 45, 25, 34, 25, 25, 25, 4, 25, 25, 7, 45, 6, 34, 12, 6, 6, 6, 12};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> duckTypes = {2, 39, 14, 6, 14, 2, 6, 2, 6, 14, 2, 39, 14, 6, 39, 14, 6, 26, 39, 6, 2, 39, 14, 26, 14, 39, 14, 26, 26, 26, 6, 39, 26, 26, 2, 26, 6, 14, 26, 26, 14, 2, 39, 2, 39, 39, 6, 6, 2, 2};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> duckTypes = {24, 27, 27, 3, 24, 22, 27, 40, 21, 3, 24, 40, 40, 22, 29, 22, 21, 3, 22, 27, 22, 22, 29, 21, 22, 40, 22, 24, 22, 21, 3, 29, 40, 22, 21, 29, 22, 29, 27, 24, 22, 40, 27, 40, 29, 21, 24, 3, 3};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> duckTypes = {27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> duckTypes = {35, 8, 40, 18, 13, 8, 35, 13, 35, 13, 18, 13, 49, 35, 18, 13, 18, 35, 13, 40, 18, 35, 49, 8, 49, 40, 49, 35, 40, 40, 8, 18, 13, 35, 18, 35, 8, 49, 8, 49, 40, 18, 49, 49, 49, 40, 8};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> duckTypes = {9, 17, 17, 47, 19, 22, 41, 41, 4, 41, 4, 19, 5, 9, 17, 47, 19, 4, 5, 9, 9, 22, 9, 19, 41, 41, 17, 41, 47, 47, 22, 5, 22, 4, 5, 17, 41};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> duckTypes = {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> duckTypes = {19, 17, 2, 2, 2, 17, 19, 2, 19, 19, 22, 23, 19, 17, 2, 2, 17, 22, 2, 23, 23, 17, 23, 2, 19, 2, 17, 23, 22};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> duckTypes = {15, 30, 13, 15, 13, 13, 21, 48, 21, 21, 48, 30, 30, 30, 48, 15, 21, 48, 48, 33, 21, 30, 15, 13, 15, 13, 30, 33, 15, 15, 33, 33, 21, 13, 48, 13, 33};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> duckTypes = {16, 44, 49, 44, 49, 44, 49, 44, 44, 44, 49, 16, 49, 44, 16, 16, 49, 44, 49};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> duckTypes = {1, 46, 46, 46, 1, 46, 1, 1, 46, 46, 46, 1, 1, 1, 46, 46, 1, 1, 46, 1, 1};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
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
    vector<int> duckTypes = {7, 32, 7, 20, 7, 20, 32, 32, 20, 7, 7, 7, 7, 7, 32, 20, 32, 7, 20, 32, 20};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> duckTypes = {29, 5, 29, 29, 29, 6, 34, 6, 34, 5, 5, 5, 29, 6, 34, 29, 6, 6, 34, 34, 29, 34, 6, 5, 5, 6, 5, 5, 34, 29, 5, 6, 6};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> duckTypes = {48, 48, 36, 36, 48, 36, 48, 32, 48, 21, 48, 48, 21, 48, 32, 48, 24, 24, 48, 36, 21, 21, 48, 32, 48, 32, 32, 21, 24, 48, 36, 24, 21, 48, 24, 36, 32, 24, 32, 24};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> duckTypes = {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> duckTypes = {28, 8, 36, 42, 28, 42, 28, 42, 26, 42, 26, 42, 26, 36, 26, 8, 36, 26, 8, 36, 36, 42, 36, 8, 36, 8, 28, 42, 8, 8, 28};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> duckTypes = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> duckTypes = {30, 36, 7, 38, 21, 38, 19, 47, 47, 47, 32, 49, 29, 9, 41, 9, 9, 45, 21, 32, 28, 7, 12, 36, 31, 16, 38, 19, 39};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> duckTypes = {37, 1, 37, 46, 46, 46, 46, 46, 37, 46, 1, 46, 1, 46, 37, 37, 1, 37, 37, 1, 1, 46, 1, 37, 37, 1, 46, 1, 37, 46, 1};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> duckTypes = {50, 8, 8, 50, 50, 8, 8, 50, 50, 50, 50, 50, 8, 8, 8, 50, 50, 8, 8, 50, 8, 8, 50};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> duckTypes = {32, 3, 5, 26, 4, 29, 1, 5, 27, 33};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
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
    vector<int> duckTypes = {41, 29};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> duckTypes = {32, 39, 48, 30, 9, 50, 7, 35, 22, 6, 13, 13, 14, 34, 37, 32, 18, 31, 45, 20, 22, 7, 32, 16, 45, 43, 25, 29, 13, 46, 24, 14, 31, 17, 4, 36, 35, 37, 9, 9, 24, 8, 15, 1, 15, 14, 32};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> duckTypes = {40, 44, 18, 45, 46, 10, 50, 14, 46, 6, 48, 14, 29, 33, 2, 20, 47, 41, 27, 15, 50, 50, 26, 48, 30, 44, 19, 21, 13, 28, 44, 19, 16, 12, 3, 17, 35};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> duckTypes = {3, 34, 15, 42, 10, 30, 21, 44, 48, 43, 21, 23, 3, 22, 22, 15, 38, 28, 20, 32, 7, 20, 36, 37, 45, 18, 48, 27, 35, 18, 25, 4, 10, 15, 30, 47, 19};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> duckTypes = {23, 24, 40, 26, 25, 13, 1, 27, 17, 18, 26, 42, 12, 24, 34, 26, 4, 38, 30, 44, 37, 30, 17, 30, 9, 6, 28, 44, 48, 34, 2, 46, 30, 10, 47, 28, 5, 9, 26, 20, 2, 26, 31};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> duckTypes = {6, 13, 17, 27, 6, 29, 49, 4, 2, 5, 10};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> duckTypes = {49, 33, 22, 50, 27, 37, 18, 5, 46, 40, 9, 5, 46, 35, 50, 5, 24, 49, 50, 4, 22, 30, 45, 44, 22, 31, 39, 18, 45, 43, 13, 44, 35, 8, 48, 44, 16, 43};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> duckTypes = {40, 47, 35, 7, 19, 24, 3, 31, 34, 9, 25, 13, 41, 49, 4, 9, 12, 29, 20, 27, 19, 4, 21, 43, 9, 26, 30, 4, 9, 22, 33, 12, 41, 14, 42, 38, 1, 5, 1, 45};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> duckTypes = {29, 6, 7, 6, 11, 18, 47, 50, 7, 26, 18, 36, 37, 6, 32, 13, 4, 11, 20};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> duckTypes = {28, 14, 5, 32, 41, 38, 11, 40, 26, 24};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> duckTypes = {27, 38, 33, 29, 24, 17, 43, 36, 46, 17, 6, 8, 39, 27, 27, 26, 32, 21, 15, 23, 43, 28, 21, 42};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> duckTypes = {14, 32, 10, 7, 35, 44, 40, 31, 22, 48, 33, 20, 7, 38, 34, 23, 7, 21, 42, 24, 50, 9, 22, 6, 9, 50, 9, 45, 41, 7};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> duckTypes = {42, 29, 26, 28, 45, 2, 46, 12, 29, 4, 12, 14, 44, 13, 25, 5, 31, 15, 8, 21, 32, 12, 5, 5, 30, 5, 24, 16, 34, 37, 50, 28, 34, 40, 45, 16};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> duckTypes = {26, 43, 1, 19, 45, 41, 19, 46, 21, 3, 28, 33, 26, 37, 36, 33, 1, 8, 6, 4};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> duckTypes = {26, 6, 33, 46, 12, 47, 20, 2};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> duckTypes = {49, 48, 31, 10, 48, 41, 25, 6, 15, 39, 5, 34, 8, 50, 10, 16, 13, 13, 40, 43, 46, 30, 34, 47, 43, 37, 5, 18, 16, 47, 10, 28};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> duckTypes = {46, 43, 36, 23, 2, 16, 43, 47, 2, 21, 7, 12, 14, 39, 18, 39, 15, 7, 16, 21, 46, 13, 8, 23, 6, 30, 34, 21, 11, 44, 8, 30, 21, 4, 25, 5, 28, 32, 13, 10, 28, 43, 30, 1, 1, 8, 29, 5};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> duckTypes = {12, 14, 17, 19, 48, 4, 15, 18, 7, 30, 14, 6, 3, 28};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> duckTypes = {42};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
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
    vector<int> duckTypes = {38, 47, 5, 50, 14, 30, 6, 11, 43, 11, 12, 4, 17, 39, 2, 49, 34, 42, 17, 39, 21, 25, 34, 30, 30, 46, 8, 1, 9, 43, 50, 20, 48, 42, 49, 13, 9, 20, 33, 39, 19, 37, 45, 48, 8, 4, 21, 40, 13};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> duckTypes = {7, 10, 18, 30, 3, 43, 45, 48, 15, 48, 3, 49, 27, 49, 30, 18, 8, 22, 50, 33, 41, 28, 12, 39, 38, 20, 50, 36, 41, 6, 35};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> duckTypes = {19, 50, 13, 48, 30, 33, 8, 42, 36, 22, 35, 13, 7, 7, 13, 50, 10, 32, 40, 13, 4, 18, 33, 32, 48, 25, 35, 12, 17, 34, 44, 10, 27, 14, 11, 24, 34, 16, 11, 43, 45, 32, 13, 46, 30, 37, 24, 49};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> duckTypes = {34, 23, 35, 19};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> duckTypes = {23, 8, 19, 37, 6, 20, 33, 6, 17, 9, 47, 18, 29, 46, 46, 3, 37, 43, 40, 5, 2, 8, 3, 25, 12, 14, 42, 31, 13, 20};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> duckTypes = {1, 37};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> duckTypes = {47, 34, 18, 34, 25, 36, 39, 48, 38, 8, 43, 16};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> duckTypes = {48, 10, 6, 41, 21, 21, 18, 9, 12};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> duckTypes = {45, 1, 4, 40, 20, 10, 15, 27, 50, 20, 45, 33, 3, 34, 17, 36, 16, 6, 44, 26, 17, 19, 36, 30, 43, 46, 33, 17, 48, 34, 45, 33, 9, 23, 15, 6};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> duckTypes = {8, 24, 42, 31, 17, 34, 28, 8, 47, 20, 14, 21, 48, 46, 16, 40, 41, 42, 13, 39, 11, 15, 25, 34, 14, 44, 50, 18, 49, 4, 45, 11, 48, 6, 43, 37, 37, 29, 16, 27, 37, 27, 28, 13, 6, 41, 38, 45, 12, 27};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> duckTypes = {47, 9, 7, 44, 42, 43, 33, 35, 50, 4, 40, 41, 36, 20, 18, 48, 6, 2, 41, 7, 35, 4, 40, 33, 5, 41, 50, 10, 27, 39, 9, 37, 9, 26, 13, 10, 8, 38, 29, 49, 34};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> duckTypes = {32, 16, 45, 9, 50, 38, 11, 11, 29, 34, 30, 30, 36, 26, 35, 4, 18, 18, 14, 34, 47, 13, 20, 37, 26, 26, 6, 50, 6, 35, 18, 11, 12, 24, 39, 21, 9, 9, 48, 6, 8};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> duckTypes = {31, 46, 2, 41, 48, 7, 13, 5, 12, 16, 9, 29, 40, 13, 4, 2, 4, 34, 50, 35, 43, 12, 36, 44, 10, 30, 34, 35, 6, 24, 17, 33, 8, 37, 12, 15, 7};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> duckTypes = {21, 4, 33, 4, 32, 12, 34, 15, 43, 37, 12, 43, 42, 20, 21, 39, 43, 39, 49, 42, 25, 14, 50, 43, 9, 42, 9, 19, 15, 44, 13, 43, 30, 33};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> duckTypes = {42, 29, 37, 46, 28, 24, 50, 22, 22, 37, 39, 39, 15, 48, 31, 28, 44, 43, 13, 37, 36, 35, 45, 48, 36, 36, 43, 24, 33, 10, 47, 2, 43, 21, 25, 10, 2, 13, 32, 22, 29, 8, 7, 5};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> duckTypes = {23, 37, 33, 6, 33, 3, 23, 19, 7, 38, 30, 12, 9, 15, 8, 1, 39, 37, 20, 13, 28, 28, 23, 24, 14, 4, 12, 44, 20, 50, 16, 28, 10, 33, 13};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> duckTypes = {47, 21, 26, 3, 40, 21, 35, 26, 17, 23, 38, 7, 31, 35, 30, 46, 28, 22, 14, 2, 19, 23, 47, 14, 44, 48, 10, 6, 26, 6, 20, 38};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> duckTypes = {43, 24, 34, 37, 3, 15, 4, 19, 27, 28, 27, 24, 41, 26, 16, 16, 26};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> duckTypes = {12, 31, 13, 38, 36, 45, 3, 46, 12, 8, 37, 38};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> duckTypes = {8, 13, 2, 23, 13, 49, 12, 4, 8, 46, 43, 1, 15, 2, 13};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> duckTypes = {6, 41, 39, 37, 7, 6, 22, 5, 41, 46, 44, 19, 2, 41, 18, 42, 34, 17, 6, 1, 35, 8, 37, 13, 50, 5, 28, 24, 30, 20, 46, 42, 49, 50, 34, 13};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> duckTypes = {21, 18, 43, 45, 30, 22, 16, 23, 24, 25, 44, 7, 42, 41, 33, 2, 7, 1, 28, 13, 37, 19, 37, 3, 47, 37, 7, 38, 37, 27, 7, 18, 12, 3, 22, 33, 36, 12, 4, 2};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> duckTypes = {11, 1, 42, 16, 36, 9, 3, 32, 11, 50, 6, 36, 6, 5, 3};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> duckTypes = {47, 44, 25, 36, 28, 14, 27, 17, 36, 10, 38, 1, 40, 34, 27, 40};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> duckTypes = {18, 33, 32, 17, 9, 41, 5, 39};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> duckTypes = {7, 1, 1, 3, 21, 18, 35, 7, 50, 26, 26, 29, 24, 50, 50, 23, 18, 13, 17, 32, 9, 18, 7, 7, 11, 13, 26, 39};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> duckTypes = {43, 7};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> duckTypes = {38, 27, 38, 44, 40, 45, 1, 42, 38, 35, 5, 45, 45, 39, 11, 47, 6, 39, 44, 1, 25, 35, 49, 19, 13, 12, 25, 44, 50, 28, 46, 37, 18, 25, 29, 50, 38, 42, 26, 37, 28, 39, 2};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> duckTypes = {23, 9, 46, 6, 47, 24, 33, 41, 43, 38, 16, 39, 31, 13, 46, 6, 26, 48, 36, 12, 14, 42, 40, 14, 36, 31, 15, 7, 14, 10, 33, 18};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> duckTypes = {6, 50, 4, 49, 42, 25, 11, 10, 26, 23, 6, 38, 45, 40, 33, 12, 7, 11, 39, 21, 1, 31, 14, 32, 42, 29, 49, 39, 2, 8, 8, 1, 42, 21, 8, 48, 1};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> duckTypes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 650;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> duckTypes = {49, 50, 1, 50, 2, 3, 4, 49, 50};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> duckTypes = {17, 17, 19, 23, 23, 19, 50, 17, 17, 50, 37, 50};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> duckTypes = {50};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> duckTypes = {1, 2, 2};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> duckTypes = {3, 4, 4, 4, 4};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> duckTypes = {1, 1, 3, 1, 3, 3, 3, 3};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> duckTypes = {1, 1, 1, 1, 1, 1};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> duckTypes = {50, 50};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> duckTypes = {4, 7, 4, 7, 4};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> duckTypes = {1, 2, 3, 2, 1};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> duckTypes = {5, 8, 50, 50, 50};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> duckTypes = {4, 7, 4, 7, 8};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> duckTypes = {1, 3};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> duckTypes = {3, 3, 4, 4};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> duckTypes = {50, 50, 2, 50};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> duckTypes = {5, 8, 8, 9};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> duckTypes = {1, 1, 1, 2, 2, 3, 3, 17};
    KingdomAndDucks* pObj = new KingdomAndDucks();
    clock_t start = clock();
    int result = pObj->minDucks(duckTypes);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23080674&rd=15170&pm=11985
********************************************************************************
using namespace std; 
 
#include <algorithm> 
#include <bitset> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <iostream> 
#include <list> 
#include <map> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <vector> 
 
#define rep(i,n) for(__typeof(n) i=0; i<(n); i++) 
#define foreach(i,n) for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++) 
#define inf (1<<30) 
#define eps 1e-9 
#define pb push_back 
#define ins insert 
#define mp make_pair 
#define clr clear() 
#define all(x) x.begin(),x.end() 
#define xx first 
#define yy second 
#define sz(x) ((int)x.size()) 
#define chk(a,k) ((bool)(a&(1<<(k)))) 
#define off(a,k) (a&(~(1<<(k)))) 
#define on(a,k) (a|(1<<(k))) 
#define sqr(x) ((x)*(x)) 
#define mem(x,val) memset((x),(val),sizeof(x)); 
#define read(x) freopen(x,"r",stdin); 
#define rite(x) freopen(x,"w",stdout); 
 
typedef long long i64; 
typedef unsigned long long ui64; 
typedef string st; 
typedef vector<int> vi; 
typedef vector<st> vs; 
typedef map<int,int> mii; 
typedef map<st,int> msi; 
typedef map<int,st> mis; 
typedef set<int> si; 
typedef set<st> ss; 
typedef pair<int,int> pii; 
typedef vector<pii> vpii; 
 
#define mx 0 
 
struct KingdomAndDucks{ 
int minDucks(vector <int> d){ 
    mii a; 
    rep(i,sz(d)) a[d[i]]++; 
    int ii=0; 
    foreach(it,a) ii=max(ii,it->yy); 
    return ii*sz(a); 
    int __plugin_bug; return __plugin_bug; 
} 
}; 
 
 
// Powered by FileEdit
// Powered by TesterDream 1.2.3 by fushar (Dec 27 2011)
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/