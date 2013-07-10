/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5874
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

class SwapSorter {
public:
    int maximizeSwaps(vector<int> arrayData);
};

int SwapSorter::maximizeSwaps(vector<int> arrayData) {
    int ret;
    return ret;
}


int test0() {
    vector<int> arrayData = {2, 1, 1, 3};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> arrayData = {7, 5, 3, 4};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> arrayData = {2, 1, 4, 3};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> arrayData = {1, 7, 8, 12, 17, 19, 21, 23, 24, 25, 26, 27, 35};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> arrayData = {2, 3, 3, 1, 1, 2};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
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
    vector<int> arrayData = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> arrayData = {1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> arrayData = {1, 2};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
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
    vector<int> arrayData = {2, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> arrayData = {1, 3, 2};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> arrayData = {3, 2, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> arrayData = {3, 1, 2};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> arrayData = {2, 3, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
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
    vector<int> arrayData = {50, 40, 14, 16, 48, 26, 9, 36, 35, 26, 20, 26, 10, 42, 25, 29, 6, 36, 40, 16, 45, 30, 8, 4, 1, 10, 41, 39, 33, 15, 31, 34, 28, 37, 13, 5, 23, 42};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> arrayData = {3, 38, 35, 17, 31, 36, 32, 24, 6, 18, 18, 18, 50, 15, 37, 12, 20, 32, 3, 20, 10, 25, 35, 36, 34, 13, 7, 3, 34, 30, 45, 5, 37, 5, 25, 33, 12};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> arrayData = {1, 37, 5, 32, 31, 18, 7, 34, 14, 21, 34, 13, 37, 16, 32, 19, 13, 11};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> arrayData = {26, 4, 43, 15, 8, 19, 30, 28, 45, 32, 37, 29, 24, 49, 46, 46, 45, 38, 36, 34, 39, 30};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> arrayData = {30, 18, 33, 28, 34, 31, 28, 40, 13, 45, 25, 9};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> arrayData = {1, 28, 17, 45, 28, 6, 1, 23, 47, 7, 1, 46, 38, 4};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> arrayData = {1, 20, 6, 42, 30};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> arrayData = {10, 7, 47, 27, 2, 39, 6, 18, 5, 31, 22, 6, 5, 26, 44, 35, 23, 17, 18, 35, 43, 46, 21, 7, 6};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> arrayData = {50, 13, 11, 7, 38, 8, 48, 1, 3, 3, 22, 17, 19, 25, 30, 7, 28, 32, 14, 22, 46, 22, 43, 31, 42, 23, 18, 7, 12, 10, 16, 19, 16, 39, 26, 6, 18, 11, 29, 37, 26, 25, 12, 14, 31, 1, 18, 44};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> arrayData = {19, 40, 5, 21, 30, 24, 9, 35, 32, 41, 50, 14, 24, 41, 3};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> arrayData = {13, 10, 19, 11, 12, 15, 12, 14, 14, 17, 15, 17, 11, 12, 19, 15, 15, 10, 17, 18, 12, 10, 19};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> arrayData = {20, 14, 19, 13, 16, 14, 18, 14, 17, 11, 15, 16, 19, 14, 12, 20, 14, 17, 19, 12, 16, 18, 18, 16, 10, 15, 19, 13, 17, 11, 15, 20, 19, 20, 18, 12, 15, 18, 15, 19, 14, 17, 18, 18, 19};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> arrayData = {15, 14, 18, 19, 12, 18, 10, 15, 14, 18, 19, 16, 18, 18, 20, 14, 13, 10, 16, 14, 17, 12, 17, 11, 17, 20, 19, 12, 14, 15, 15, 20};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> arrayData = {14, 13, 15, 16, 18, 18, 16, 20, 13, 14, 18, 20, 10, 20, 17, 16, 14, 15, 14, 12, 12, 15, 13, 12, 12, 14, 18, 17, 14, 12, 14, 14, 12, 18, 18, 12, 15, 13, 19, 14, 15};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> arrayData = {14, 19, 20, 13, 19, 14, 11, 13, 19, 17, 15, 20, 10, 15, 14};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> arrayData = {19, 12, 10, 12, 19, 12, 20, 18, 19, 14, 15, 12, 10, 10, 20, 17, 15, 10, 13, 14, 19, 18, 14, 14, 11, 19, 18, 18, 11, 19, 14, 17, 10, 15, 20, 10, 12, 12, 20, 12, 18, 18, 19, 20, 14, 15};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> arrayData = {14, 15, 12, 14, 10, 14, 14, 11, 11, 16, 17, 14, 10, 16, 19, 15, 20, 14, 14, 17, 14, 17, 19};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> arrayData = {12, 18, 14, 18, 12, 10, 16, 11, 20, 11};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
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
    vector<int> arrayData = {13, 15, 19, 10, 10, 17, 18, 10, 18, 18};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
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
    vector<int> arrayData = {16, 18, 18, 19, 15, 13, 15, 20, 11, 11, 10, 10, 14, 17, 18, 14, 18, 13, 12, 20};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> arrayData = {51, 35, 43, 4, 5, 5, 6, 7, 7, 7, 9, 13, 14, 18, 19, 19, 22, 24, 25, 29, 32, 33, 33, 33, 34, 37, 39, 41, 43, 43, 44, 44, 46, 48, 49, 50, 50};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> arrayData = {49, 32, 4, 5, 5, 5, 6, 7, 8, 8, 9, 9, 10, 10, 10, 11, 13, 13, 16, 16, 21, 22, 24, 26, 27, 27, 29, 30, 30, 31, 32, 32, 33, 34, 37, 38, 38, 39, 39, 40, 41, 41, 43, 44, 45, 46, 47, 48};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> arrayData = {50, 3, 53, 5, 6, 7, 12, 12, 15, 16, 16, 17, 18, 18, 20, 23, 27, 33, 34, 35, 36, 37, 40, 40, 42, 43, 44, 44, 46, 46, 49, 49};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> arrayData = {49, 5, 6, 95, 10, 13, 14, 14, 16, 17, 18, 18, 19, 23, 24, 27, 31, 36, 36, 36, 36, 37, 40, 43, 48};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> arrayData = {50, 3, 4, 5, 5, 6, 8, 8, 9, 9, 151, 411, 12, 15, 17, 17, 17, 17, 19, 19, 21, 22, 23, 23, 24, 25, 26, 28, 28, 31, 32, 32, 32, 32, 34, 34, 34, 34, 35, 36, 36, 37, 38, 38, 39, 44, 44, 45, 48, 49};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> arrayData = {1, 21, 2, 3, 11, 22, 5, 39, 42, 27, 11, 35, 12, 23, 15, 34, 15, 33, 17, 19, 28, 38, 35, 14, 46, 26, 26, 27, 38, 32, 31, 31, 31, 21, 5, 15, 1, 16, 26, 5, 7, 43, 42, 9, 45, 9, 49};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> arrayData = {5, 36, 30, 34, 45, 41, 15, 17, 42, 24, 47, 48, 29, 29, 8, 33, 12, 36, 38, 47, 15, 38, 39, 47, 50, 27, 20, 44, 5, 14, 50, 46, 40, 46, 38, 46, 39, 43, 27, 45};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> arrayData = {23, 2, 36, 18, 16, 5, 41, 7, 8, 12, 6, 14, 47, 2, 14, 18, 2, 19, 21, 23, 31, 41, 44, 24, 24, 26, 2, 28, 14, 43, 23, 34, 7, 28, 24, 17, 30, 41, 46, 47, 47, 48, 29};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> arrayData = {39, 5, 41, 2, 26, 50, 2, 34, 19, 9, 43, 39, 12, 2, 14, 15, 1, 16, 17, 17, 19, 37, 37, 25, 4, 42, 46, 33, 33, 7, 35, 35, 7, 43, 11, 16, 41, 19, 42, 28, 10, 43, 8, 31, 46, 48, 49, 13};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> arrayData = {3, 4, 18, 5, 35, 40, 6, 28, 43, 47, 12, 13, 13, 9, 36, 19, 31, 20, 23, 28, 25, 41, 15, 35, 27, 28, 28, 25, 6, 29, 31, 19, 40, 26, 36, 37, 44, 36, 6, 6, 25, 42, 43, 26, 4, 10, 47};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> arrayData = {1, 15, 46, 3, 7, 8, 46, 10, 11, 16, 49, 13, 30, 12, 8, 16, 20, 20, 23, 28, 21, 35, 25, 21, 29, 1, 30, 38, 50, 25, 45, 33, 36, 37, 34, 43, 11, 43, 32, 43, 29, 47, 47, 47, 1, 14};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> arrayData = {33, 35, 4, 9, 9, 25, 9, 29, 12, 15, 22, 35, 25, 18, 28, 21, 22, 17, 15, 23, 23, 23, 50, 9, 22, 27, 46, 36, 20, 29, 4, 33, 8, 42, 11, 40, 15, 45, 45, 24, 41, 46, 29};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> arrayData = {1, 43, 3, 14, 7, 7, 7, 7, 8, 9, 9, 26, 10, 21, 12, 13, 1, 15, 17, 34, 42, 21, 24, 30, 48, 30, 34, 9, 27, 20, 25, 21, 31, 25, 18, 5, 40, 11, 42, 38, 46, 27, 50};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> arrayData = {45, 1, 2, 2, 3, 33, 42, 31, 25, 37, 8, 44, 7, 10, 11, 13, 24, 7, 34, 7, 26, 27, 47, 22, 32, 1, 9, 8, 39, 48, 43, 29, 45, 47, 6, 9, 14, 48, 49, 49};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> arrayData = {1, 1, 25, 5, 12, 15, 29, 14, 14, 41, 17, 18, 18, 19, 35, 30, 49, 21, 33, 29, 27, 27, 49, 38, 26, 24, 46, 32, 41, 36, 36, 21, 29, 22, 6, 11, 42, 30, 47, 49, 6, 38, 50};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> arrayData = {999, 6, 32, 62, 84, 97, 119, 147, 175, 223, 305, 321, 333, 349, 365, 395, 399, 402, 434, 437, 515, 532, 539, 552, 581, 590, 606, 649, 653, 696, 708, 726, 798, 802, 802, 825, 833, 858, 864, 905, 946, 959, 971, 983, 986, 987, 998};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> arrayData = {988, 122, 135, 156, 202, 205, 255, 263, 273, 360, 361, 374, 415, 423, 428, 441, 468, 485, 515, 567, 624, 639, 639, 646, 646, 647, 705, 709, 712, 732, 733, 735, 741, 751, 773, 776, 837, 897, 907, 907, 932, 970, 987};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> arrayData = {995, 32, 58, 64, 97, 112, 125, 127, 149, 159, 199, 227, 243, 274, 292, 339, 347, 428, 446, 499, 530, 574, 596, 603, 616, 616, 657, 682, 709, 794, 806, 825, 837, 842, 889, 913, 926, 942, 955, 970, 994};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> arrayData = {921, 56, 56, 68, 101, 104, 110, 120, 139, 150, 152, 161, 186, 188, 214, 236, 292, 324, 345, 398, 401, 426, 430, 436, 443, 477, 482, 511, 512, 624, 651, 660, 668, 687, 693, 761, 763, 782, 808, 813, 896, 916, 919, 920};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> arrayData = {990, 86, 112, 142, 169, 197, 235, 264, 317, 318, 338, 346, 354, 397, 415, 426, 451, 464, 466, 495, 510, 516, 558, 613, 635, 655, 688, 698, 712, 740, 747, 759, 781, 801, 813, 815, 832, 845, 892, 912, 952, 968, 989};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> arrayData = {276, 773, 638, 167, 23, 96, 105, 497, 137, 153, 149, 145, 165, 772, 33, 273, 357, 286, 320, 381, 619, 326, 379, 797, 805, 50, 635, 588, 340, 628, 398, 638, 10, 665, 719, 717, 670, 961, 837, 993, 413, 114, 827, 913, 947, 747, 897, 48, 967, 210};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> arrayData = {861, 285, 540, 811, 63, 68, 357, 47, 683, 201, 374, 245, 248, 10, 829, 566, 185, 699, 389, 69, 398, 390, 680, 791, 150, 833, 517, 526, 20, 321, 622, 887, 505, 329, 625, 715, 765, 441, 808, 203, 856, 2, 518, 822, 302, 347, 953};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> arrayData = {7, 408, 484, 426, 439, 405, 291, 262, 567, 998, 337, 71, 205, 837, 838, 114, 794, 895, 466, 875, 17, 768, 827, 733, 576, 605, 612, 633, 641, 680, 683, 686, 829, 697, 718, 921, 813, 784, 329, 491, 494, 86, 687, 449, 854, 476, 258, 466, 997, 410};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> arrayData = {602, 265, 34, 731, 632, 106, 26, 847, 344, 201, 908, 277, 134, 812, 318, 371, 396, 404, 404, 425, 734, 17, 131, 847, 561, 565, 94, 625, 466, 67, 674, 713, 743, 559, 975, 966, 672, 925, 768, 332, 861, 870, 886, 497, 915, 130, 723, 450};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> arrayData = {331, 567, 76, 89, 496, 169, 500, 183, 266, 950, 420, 276, 947, 567, 783, 924, 248, 427, 183, 274, 390, 54, 67, 582, 947, 807, 909, 802, 718, 730, 730, 419, 553, 522, 353, 872, 885, 961, 601, 803, 153, 609, 583, 958, 903};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> arrayData = {912, 65, 50, 981, 71, 78, 843, 922, 100, 320, 223, 687, 902, 289, 188, 521, 395, 339, 342, 680, 379, 291, 410, 413, 452, 942, 546, 81, 789, 354, 588, 94, 813, 815, 145, 174, 570, 39, 296, 4};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> arrayData = {4, 395, 36, 665, 30, 205, 194, 104, 963, 853, 959, 450, 424, 496, 395, 130, 378, 779, 683, 702, 503, 545, 760, 545, 587, 397, 243, 588, 754, 77, 585, 378, 724, 997, 326, 525, 652, 968, 229, 747, 291, 966, 837, 530};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> arrayData = {471, 538, 31, 673, 677, 201, 323, 354, 797, 748, 930, 739, 604, 93, 274, 330, 732, 178, 564, 117, 3, 477, 520, 28, 54, 970, 729, 260, 999, 544, 601, 810, 162, 174, 757, 449, 274, 49, 428, 973, 66};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> arrayData = {592, 842, 786, 93, 115, 771, 18, 330, 612, 500, 253, 976, 842, 488, 181, 391, 752, 844, 340, 484, 702, 661, 360, 504, 628, 150, 164, 480, 642, 570, 73, 689, 90, 642, 484, 709, 693, 466, 776, 296, 825, 834, 839, 154, 119, 410, 944, 946, 699, 986};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> arrayData = {38, 146, 992, 419, 248, 168, 390, 507, 773, 752, 227, 327, 72, 255, 302, 706, 755, 666, 331, 381, 735, 675, 141, 534, 651, 473, 526, 230, 880, 501, 428, 544, 462, 225, 781, 93, 202, 683, 226, 322, 188, 318, 614, 597, 827, 507, 914, 335};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> arrayData = {38, 47, 5, 19, 21, 44, 14, 40, 7, 8, 67, 19, 20, 36, 92, 41, 28, 31, 34, 59, 87, 92, 41, 13, 1, 46, 17, 47, 48, 93, 54, 61, 29, 75, 5, 20, 77, 88, 28, 30, 83};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> arrayData = {92, 100, 21, 92, 8, 27, 10, 76, 31, 19, 52, 64, 3, 21, 5, 6, 25, 30, 85, 34, 39, 39, 78, 50, 47, 18, 57, 90, 24, 15, 18, 65, 68, 76, 68, 78, 39, 9, 18, 86, 88, 64, 90, 82, 58, 89, 3};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> arrayData = {15, 41, 76, 87, 68, 77, 6, 73, 16, 97, 100, 32, 27, 30, 26, 11, 62, 9, 53, 54, 50, 95, 10, 59, 69, 61, 69, 70, 87, 76, 21, 24, 50, 78, 1, 16, 89, 83, 66, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> arrayData = {4, 38, 7, 70, 52, 72, 95, 76, 97, 76, 80, 30, 8, 73, 36, 93, 41, 56, 46, 49, 5, 79, 43, 68, 63, 36, 7, 56, 71, 69, 32, 78, 84, 8, 56, 86, 29, 84, 29, 89, 91, 92, 15, 93, 95, 10, 23};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> arrayData = {8, 13, 17, 18, 43, 63, 41, 38, 73, 89, 77, 71, 81, 39, 76, 49, 50, 52, 55, 54, 58, 59, 74, 23, 24, 55, 63, 52, 64, 67, 40, 72, 43, 79, 100, 55, 66, 28, 97, 78, 48, 100, 43};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> arrayData = {50, 7, 83, 8, 44, 13, 46, 10, 32, 20, 44, 35, 16, 43, 36, 97, 41, 79, 58, 95, 82, 23, 65, 14, 66, 6, 24, 72, 73, 90, 75, 21, 72, 99, 89, 88, 88, 73, 97, 81, 8, 39, 48};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> arrayData = {73, 25, 9, 97, 25, 80, 19, 8, 55, 96, 32, 59, 89, 61, 62, 92, 45, 45, 51, 17, 98, 71, 29, 39, 65, 69, 92, 19, 4, 63, 82, 30, 33, 90, 74, 32, 19, 70, 41, 99};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> arrayData = {26, 41, 5, 12, 64, 61, 7, 55, 28, 94, 79, 20, 25, 95, 35, 25, 29, 30, 31, 21, 12, 82, 4, 48, 80, 62, 41, 49, 26, 80, 56, 15, 90, 44, 46, 61, 40, 36, 17, 24, 52, 87, 59, 91, 85, 4};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> arrayData = {60, 100, 74, 58, 8, 10, 1, 21, 31, 81, 50, 88, 28, 21, 18, 36, 99, 83, 48, 5, 81, 52, 52, 53, 56, 57, 50, 24, 61, 64, 65, 6, 41, 5, 76, 93, 22, 68, 47, 23, 88, 90, 97, 79, 29, 85, 99, 70};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> arrayData = {71, 39, 12, 77, 74, 56, 37, 76, 26, 31, 36, 89, 37, 61, 8, 92, 11, 37, 78, 55, 19, 50, 58, 59, 87, 86, 15, 70, 70, 70, 71, 57, 82, 23, 13, 79, 47, 81, 51, 60, 66, 99, 20, 91, 85, 49};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> arrayData = {2, 3, 4, 1, 7, 7, 5, 5, 8, 7, 10, 10, 10, 9, 9, 9};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> arrayData = {3, 5, 10, 4, 56, 234, 23, 4, 5, 23, 5, 456, 243, 23, 234, 234, 234, 565, 32, 3, 5, 743, 34, 2, 23, 456, 3, 23, 5, 7, 23, 3, 4, 786, 34, 5, 6, 347, 223, 542, 534, 346, 823, 325, 874, 238, 12, 77, 33};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> arrayData = {7, 15, 5, 14, 6, 26, 17, 20, 21, 24, 8, 29, 13, 29, 21, 16, 11, 29, 25, 29, 9, 22, 5, 21, 9, 27, 16, 6, 11, 29, 20, 16, 2, 19, 22, 20, 19, 8, 2, 11, 15, 30, 3, 3, 24, 3, 10, 6, 2, 19};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> arrayData = {15, 13, 14, 10, 11, 15, 15, 13, 14, 7, 15, 4, 6, 11, 3, 8, 13, 2, 14, 7, 3, 3, 12, 9, 10, 14, 2, 4, 12, 5, 10, 2, 9, 6, 11, 6, 12, 7, 13, 5, 2, 5, 10, 8, 11, 4, 13, 13, 15, 5};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> arrayData = {2, 3, 4, 1, 7, 7, 5, 5, 8, 7, 10, 10, 10, 9, 9, 9};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> arrayData = {5, 7, 1, 3, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> arrayData = {147, 141, 165, 150, 162, 138, 129, 141, 165, 144, 159, 165, 159, 138, 132, 156, 129, 156, 150, 153, 144, 123, 153, 123, 126, 138, 141, 150, 132, 132, 126, 147, 159, 135, 156, 144, 138, 150, 153, 123, 141, 147, 150, 144, 150, 153, 153, 135, 129, 165};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> arrayData = {2, 3, 3, 1, 1, 2};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> arrayData = {3, 1, 5, 6, 7, 3, 5, 4, 4, 4, 5, 5, 7, 6, 8, 6, 1, 1, 7, 1, 3, 6, 2, 6, 5, 3, 3, 2, 2, 6, 4, 5, 7, 2, 4, 2, 7, 1, 4, 1, 3, 7, 6, 3, 2, 1, 5, 7, 4, 2};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> arrayData = {2, 3, 4, 1, 2};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> arrayData = {1, 3, 1, 2, 3, 1, 3, 1, 1, 1, 1, 1, 3, 3, 3, 2, 1, 2, 3, 2, 3, 3, 2, 2, 2, 3, 1, 2, 2, 2, 1, 1, 1, 2, 3, 3, 1, 1, 1, 2, 1, 1, 3, 1, 2, 1, 3, 2, 3, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> arrayData = {10, 3, 4, 5, 2, 1, 1, 1, 2, 3, 4, 5, 6, 6, 2, 4, 5, 6, 7, 3, 2, 1, 1, 2, 15, 14, 13, 13, 13, 14, 15, 15, 16, 16, 16, 3, 4, 4, 5, 6, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> arrayData = {337, 338, 336, 333, 335, 333, 335, 333, 334, 336, 334, 338, 335, 335, 333, 336, 337, 337, 334, 338, 335, 338, 335, 335, 337, 338, 335, 336, 333, 336, 338, 337, 338, 338, 336, 333, 337, 334, 338, 333, 335, 336, 335, 338, 337, 333, 334, 337, 336, 337};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> arrayData = {9, 9, 8, 10, 11, 1, 2, 4, 7, 2, 4, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> arrayData = {2, 5, 3, 6, 4, 7, 5, 8, 1, 9, 1, 2, 3, 4, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 100, 200, 300, 400, 500, 600, 700, 800, 900, 100, 200, 300, 400, 500, 600, 700, 800, 100, 200, 300, 400, 500};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> arrayData = {4, 8, 7, 5, 4, 8, 6, 1, 4, 3};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> arrayData = {1, 4, 67, 3, 2, 4, 6, 7, 3, 2, 2, 56, 7, 5, 3, 23, 2, 5, 7, 76, 4, 3, 2, 2, 4, 45, 2, 234, 22, 232, 2, 2, 322, 2};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> arrayData = {15, 1, 15, 14, 14, 12, 12, 12, 11, 11, 13, 13, 10, 10, 9, 10, 30, 1, 9, 9, 8, 8, 8, 7, 7, 13, 6, 6, 6, 5, 5, 5, 4, 4, 11, 144, 3, 3, 2, 2, 2, 1, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> arrayData = {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> arrayData = {2, 3, 4, 1, 7, 7, 5, 5, 8, 7, 10, 10, 10, 9, 9, 9, 2, 3, 4, 3, 5, 6, 7, 5, 4, 6, 7, 8, 3, 2, 4, 5, 6, 7, 8, 6, 5, 4, 5, 7, 7, 7, 6, 5};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> arrayData = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> arrayData = {3, 3, 1, 3, 2, 2, 2};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> arrayData = {2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 1, 1, 1, 7, 7, 7, 7, 6, 6, 6, 6, 8, 8, 8, 8, 8, 12, 12, 12, 12, 10, 11, 11, 10, 10, 5, 5, 5, 5, 3, 3, 3, 3, 1, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> arrayData = {799, 263, 828, 48, 438, 721, 140, 998, 759, 641, 186, 538, 880, 552, 656, 816, 382, 921, 164, 172, 855, 896, 594, 549, 325, 855, 765, 10, 791, 47, 946, 288, 393, 103, 773, 901, 44, 660, 253, 932, 361, 774, 346, 661, 614, 578, 359, 592, 323, 73};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> arrayData = {2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> arrayData = {1, 3, 2, 5, 6, 4, 8, 9, 10, 7, 11, 12};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> arrayData = {988, 988, 999, 990, 991, 996, 992, 990, 992, 993, 989, 994, 988, 998, 988, 991, 999, 992, 998, 992, 997, 998, 997, 991, 990, 992, 994, 991, 998, 991, 994, 989, 999, 991, 998, 1000, 994, 999, 998, 988, 989, 989, 994, 988, 995, 988, 998, 996, 998, 997};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> arrayData = {13, 61, 26, 828, 152, 162, 844, 156, 378, 224, 749, 134, 167, 246, 143, 127, 735, 147, 955, 125, 698, 123, 245, 245, 245, 245, 565, 214, 367, 942, 578, 247, 137, 842, 953, 373, 1, 1, 68, 424, 578, 6, 843, 415, 789, 24, 363, 245, 245, 245};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> arrayData = {3, 3, 1, 2, 2};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> arrayData = {59, 38, 22, 42, 42, 33, 42, 56, 69, 38, 77, 8, 7, 1, 2, 7, 8, 4, 5, 7, 8};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> arrayData = {4, 4, 5, 6, 1, 2, 9, 10, 11, 12, 7, 7};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> arrayData = {2, 3, 1, 2, 3, 4, 5, 8, 2, 5, 2, 3, 3, 4, 8, 7, 6, 5, 5, 5, 5, 47, 2, 321, 23, 2, 213, 231, 12, 22, 186, 123, 122, 231, 16, 1, 2, 3, 18, 19, 12, 2, 2, 5, 3, 4};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> arrayData = {2, 3, 4, 1, 7, 7, 5, 5, 8, 7, 10, 10, 10, 9, 9, 9, 982, 783, 91, 71, 902, 672, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 901, 782, 931, 630, 72, 93, 72, 24, 48, 329, 29, 50, 19, 38, 27, 48, 328, 27};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> arrayData = {2, 3, 3, 1, 1, 2, 7, 4, 6, 9, 8, 3, 5, 2, 6, 2, 6, 3, 5, 2, 6, 5, 7, 8, 2, 3, 5, 5, 3, 2, 5, 3, 5, 6, 2, 5, 3, 4, 3, 4, 8, 10, 10, 3, 2, 3, 5, 2, 1, 2};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> arrayData = {2, 3, 4, 1, 7, 7, 5, 5, 8, 7, 10, 10, 10, 9, 9, 9, 34, 17, 234, 61, 333, 21, 11, 1, 23, 334, 23, 511, 23, 13};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> arrayData = {2, 8, 5, 1, 10, 5, 9, 9, 3, 5, 6, 6, 2, 8, 2, 2, 6, 3, 8, 7, 2, 5, 3, 4, 3, 3, 2, 7, 9, 6, 8, 7, 2, 9, 10, 3, 8, 10, 6, 5, 4, 2, 3, 4, 4, 5, 2, 2, 4, 9};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> arrayData = {581, 987, 162, 306, 871, 174, 355, 595, 300, 787, 961, 295, 583, 55, 249, 532, 149, 115, 149, 161, 342, 494, 858, 267, 947, 636, 24, 946, 179, 727, 471, 304, 761, 845, 272, 713, 720, 386, 601, 273, 274, 704, 190, 627, 988, 228, 172, 350, 263, 691};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> arrayData = {2, 3, 4, 1, 7, 7, 5, 5, 8, 7, 10, 10, 10, 9, 9, 9, 2, 3, 4, 1, 7, 7, 5, 5, 8, 7, 10, 10, 10, 9, 9, 9};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> arrayData = {3, 3, 3, 2, 2, 2, 1, 4, 5, 3, 3, 3, 3, 3, 3};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> arrayData = {2, 3, 4, 1, 7, 7, 5, 5, 8, 7, 10, 10, 10, 9, 9, 9, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 22, 22, 37, 1, 2, 2, 1, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 3};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> arrayData = {6, 6, 5, 5, 6, 5, 1, 1, 5, 3, 6, 6, 2, 4, 2, 6, 2, 3, 4, 1, 4, 1, 3, 4, 5, 5, 4, 3, 3, 6, 6, 1, 6, 1, 4, 5, 6, 2, 2, 1, 6, 4, 3, 4, 4, 3, 4, 2, 6, 5};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> arrayData = {2, 2, 4, 1, 1, 3, 2, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> arrayData = {2, 2, 1, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> arrayData = {2, 6, 4, 3, 7, 1, 1, 1, 1, 1};
    SwapSorter* pObj = new SwapSorter();
    clock_t start = clock();
    int result = pObj->maximizeSwaps(arrayData);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=8076&pm=5874
********************************************************************************
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cmath>
#include <vector>
#include <complex>
#include <valarray>
#include <algorithm>
#include <set>
#include <map>
 
using namespace std;
 
class SwapSorter
{
public:
    int n,A[51],list[51],finish[51];
    void solve()
    {
        for (int i=1;i<=n;i++)
        {
            int u=rand()%n+1;
            int v=rand()%n+1;
            swap(list[u],list[v]);
        }    
    }    
    int maximizeSwaps(vector <int> Data)
    {
        srand(1028);
        n=Data.size();
        for (int i=1;i<=n;i++)
            finish[i]=Data[i-1];
        for (int i=1;i<=n;i++)
            for (int j=i+1;j<=n;j++)
                if (finish[j]<finish[i])
                    swap(finish[i],finish[j]);
        int result=0;
        for (int i=1;i<=n;i++)
            list[i]=i;
        for (int Time=0;Time<20;Time++)
        {
            for (int i=1;i<=n;i++)
                A[i]=Data[i-1];
            int total=0;
            while(1)
            {
                solve();
                bool find=false;
                for (int i=1;i<=n;i++)
                    for (int j=i+1;j<=n;j++)
                        if (A[list[i]]!=finish[list[i]] && A[list[j]]!=finish[list[j]])
                        {
                            int t=int(A[list[i]]==finish[list[j]])+int(A[list[j]]==finish[list[i]]);
                            if (t==1)
                            {
                                swap(A[list[i]],A[list[j]]);
                                total++;
                                find=true;
                            }
                        }    
                if (!find)
                    break;
            }    
            int left=0;
            for (int i=1;i<=n;i++)
                if (A[i]!=finish[i])
                    left++;
            total+=left/2;
            if (total>result)
                result=total;
        }    
        return result;
    }    
};

********************************************************************************
*******************************************************************************/