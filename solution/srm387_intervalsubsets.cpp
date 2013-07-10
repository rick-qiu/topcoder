/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8084
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

class IntervalSubsets {
public:
    int numberOfSubsets(vector<int> start, vector<int> finish);
};

int IntervalSubsets::numberOfSubsets(vector<int> start, vector<int> finish) {
    int ret;
    return ret;
}


int test0() {
    vector<int> start = {3};
    vector<int> finish = {4};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
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
    vector<int> start = {68, 25};
    vector<int> finish = {75, 64};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
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
    vector<int> start = {4, 2, 3};
    vector<int> finish = {4, 5, 3};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
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
    vector<int> start = {36, 74, 8, 33};
    vector<int> finish = {63, 91, 57, 51};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
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
    vector<int> start = {3, 4, 3, 2, 1};
    vector<int> finish = {4, 5, 4, 5, 5};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
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
    vector<int> start = {23, 34, 69, 25, 61, 48};
    vector<int> finish = {25, 70, 95, 39, 74, 60};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> start = {1, 4, 2, 5, 3, 4, 3};
    vector<int> finish = {2, 5, 2, 5, 4, 5, 4};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> start = {26, 22, 2, 36, 16, 84, 50, 30};
    vector<int> finish = {87, 42, 76, 85, 53, 100, 76, 57};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> start = {2, 3, 4, 4, 4, 4, 2, 2, 1};
    vector<int> finish = {3, 5, 4, 5, 4, 5, 3, 2, 4};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> start = {24, 80, 7, 68, 29, 26, 77, 30, 17, 5};
    vector<int> finish = {72, 92, 46, 80, 45, 92, 82, 49, 73, 65};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
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
    vector<int> start = {4, 1, 1, 3, 1, 1, 3, 2, 2, 1, 1};
    vector<int> finish = {4, 2, 4, 4, 4, 2, 5, 4, 3, 5, 3};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> start = {15, 2, 55, 38, 20, 43, 5, 63, 85, 53, 13, 24};
    vector<int> finish = {84, 81, 61, 68, 51, 59, 34, 67, 97, 89, 55, 88};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> start = {3, 1, 3, 2, 2, 4, 4, 4, 4, 3, 4, 2, 2};
    vector<int> finish = {4, 5, 4, 4, 3, 5, 5, 5, 4, 4, 4, 3, 3};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
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
    vector<int> start = {18, 80, 30, 72, 58, 66, 45, 17, 15, 58, 31, 47, 22, 44};
    vector<int> finish = {74, 88, 71, 79, 63, 98, 53, 41, 90, 62, 69, 93, 72, 58};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> start = {1, 1, 3, 1, 3, 2, 3, 1, 1, 3, 3, 1, 2, 3, 3};
    vector<int> finish = {2, 5, 5, 3, 4, 3, 3, 5, 3, 4, 5, 2, 5, 5, 4};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> start = {27, 24, 26, 8, 15, 8, 7, 36, 14, 51, 66, 4, 35, 26, 66, 13};
    vector<int> finish = {44, 30, 32, 75, 94, 65, 17, 56, 75, 70, 88, 95, 97, 93, 83, 64};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> start = {2, 4, 2, 4, 2, 1, 4, 1, 3, 3, 2, 3, 1, 2, 3, 2, 4};
    vector<int> finish = {5, 5, 5, 5, 3, 1, 4, 3, 5, 4, 5, 3, 3, 3, 5, 2, 5};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> start = {6, 40, 48, 3, 37, 23, 35, 28, 2, 16, 47, 60, 9, 14, 42, 40, 28, 29};
    vector<int> finish = {34, 100, 73, 81, 44, 55, 64, 65, 7, 53, 66, 74, 47, 67, 61, 58, 91, 42};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> start = {4, 1, 2, 2, 2, 1, 2, 1, 5, 3, 2, 1, 2, 4, 2, 1, 1, 2, 5};
    vector<int> finish = {5, 3, 4, 5, 3, 3, 4, 2, 5, 4, 3, 5, 3, 4, 3, 3, 5, 2, 5};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> start = {49, 30, 21, 35, 33, 40, 31, 1, 45, 58, 48, 63, 59, 49, 71, 43, 22, 11, 75, 8};
    vector<int> finish = {49, 87, 40, 81, 55, 50, 49, 44, 85, 99, 93, 93, 87, 99, 89, 91, 98, 53, 98, 92};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
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
    vector<int> start = {4, 4, 1, 2, 1, 2, 3, 3, 2, 2, 3, 2, 2, 1, 1, 4, 1, 2, 1, 1, 1};
    vector<int> finish = {5, 5, 2, 4, 5, 2, 5, 3, 2, 3, 5, 2, 2, 2, 4, 5, 5, 4, 4, 2, 2};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> start = {14, 30, 4, 62, 33, 59, 36, 29, 53, 25, 32, 14, 16, 11, 28, 11, 54, 6, 43, 32, 63, 39};
    vector<int> finish = {77, 44, 60, 95, 48, 77, 60, 84, 93, 38, 66, 77, 76, 92, 82, 56, 90, 24, 71, 87, 88, 74};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> start = {1, 3, 4, 2, 4, 3, 1, 2, 2, 2, 3, 3, 1, 1, 5, 2, 4, 2, 1, 3, 1, 2, 4};
    vector<int> finish = {4, 5, 5, 3, 4, 5, 3, 4, 5, 5, 4, 3, 4, 5, 5, 2, 5, 4, 2, 3, 2, 3, 5};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> start = {46, 15, 69, 44, 49, 27, 16, 29, 28, 13, 5, 63, 38, 6, 7, 83, 32, 22, 16, 9, 56, 29, 35, 3};
    vector<int> finish = {68, 83, 74, 88, 89, 70, 79, 58, 64, 17, 46, 70, 40, 76, 72, 99, 97, 94, 98, 19, 94, 74, 50, 74};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> start = {3, 1, 2, 5, 3, 2, 1, 1, 1, 3, 1, 3, 1, 2, 2, 3, 1, 1, 4, 2, 3, 2, 3, 3, 2};
    vector<int> finish = {5, 3, 3, 5, 4, 3, 3, 2, 2, 4, 5, 5, 5, 4, 3, 5, 1, 2, 4, 2, 3, 3, 4, 5, 5};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> start = {36, 34, 5, 31, 12, 21, 50, 7, 26, 6, 13, 47, 14, 84, 29, 26, 37, 13, 17, 21, 9, 52, 72, 16, 13, 7};
    vector<int> finish = {68, 81, 28, 36, 26, 97, 66, 89, 94, 97, 89, 100, 47, 87, 98, 57, 67, 31, 64, 22, 41, 98, 97, 57, 94, 49};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> start = {2, 4, 3, 3, 1, 1, 1, 1, 1, 4, 1, 1, 5, 2, 2, 3, 1, 2, 2, 1, 3, 3, 1, 2, 5, 4, 2};
    vector<int> finish = {4, 5, 4, 4, 5, 5, 1, 1, 1, 5, 5, 2, 5, 3, 4, 5, 4, 5, 5, 4, 4, 4, 4, 5, 5, 5, 4};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> start = {1, 32, 60, 70, 43, 47, 32, 6, 25, 49, 4, 70, 54, 6, 32, 19, 7, 28, 43, 13, 27, 26, 9, 49, 48, 3, 15, 67};
    vector<int> finish = {79, 96, 74, 81, 62, 65, 98, 37, 50, 53, 88, 73, 63, 97, 43, 35, 71, 56, 66, 43, 35, 51, 83, 88, 86, 72, 63, 72};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> start = {1, 3, 2, 1, 2, 1, 2, 3, 3, 1, 1, 1, 1, 2, 1, 2, 3, 1, 2, 4, 1, 1, 4, 1, 1, 1, 1, 1, 1};
    vector<int> finish = {5, 5, 2, 2, 5, 4, 2, 3, 3, 3, 5, 5, 4, 4, 4, 5, 5, 1, 3, 5, 3, 1, 5, 4, 2, 2, 3, 3, 4};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> start = {37, 7, 49, 30, 70, 2, 11, 29, 7, 4, 10, 2, 21, 84, 18, 50, 25, 21, 18, 51, 12, 43, 63, 15, 87, 68, 57, 41, 4, 41};
    vector<int> finish = {43, 16, 64, 81, 99, 54, 64, 51, 95, 33, 88, 57, 47, 86, 43, 98, 88, 52, 71, 90, 24, 86, 85, 91, 96, 79, 89, 79, 50, 56};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> start = {2, 3, 2, 2, 2, 1, 1, 1, 3, 4, 2, 2, 1, 3, 4, 4, 1, 2, 2, 2, 3, 4, 2, 1, 4, 2, 2, 1, 1, 1, 1};
    vector<int> finish = {3, 4, 3, 4, 5, 2, 3, 3, 4, 5, 3, 4, 2, 5, 4, 5, 4, 3, 5, 2, 4, 4, 4, 4, 5, 4, 3, 5, 1, 5, 3};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> start = {6, 18, 9, 34, 22, 73, 34, 23, 19, 8, 26, 43, 25, 26, 23, 31, 58, 69, 92, 29, 2, 47, 50, 36, 12, 20, 47, 49, 22, 12, 8, 18};
    vector<int> finish = {23, 36, 93, 40, 28, 80, 76, 26, 37, 27, 55, 76, 53, 100, 45, 65, 78, 96, 92, 65, 54, 47, 69, 99, 33, 24, 52, 66, 70, 38, 32, 82};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 141;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> start = {1, 3, 1, 1, 1, 2, 2, 2, 3, 1, 3, 2, 1, 3, 3, 4, 2, 4, 4, 2, 1, 4, 1, 2, 1, 4, 3, 1, 3, 2, 1, 1, 1};
    vector<int> finish = {5, 4, 3, 5, 5, 5, 4, 4, 4, 5, 3, 3, 5, 5, 5, 5, 4, 5, 5, 4, 3, 5, 1, 4, 5, 5, 3, 1, 4, 3, 2, 3, 3};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> start = {17, 9, 9, 6, 26, 35, 23, 49, 57, 86, 29, 28, 58, 9, 47, 26, 67, 30, 22, 29, 15, 56, 32, 9, 36, 21, 2, 21, 44, 52, 46, 72, 3, 4};
    vector<int> finish = {67, 83, 24, 97, 70, 67, 58, 54, 73, 90, 89, 75, 99, 49, 85, 83, 77, 78, 90, 57, 65, 91, 43, 26, 94, 65, 87, 70, 76, 66, 47, 90, 30, 17};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> start = {3, 1, 2, 2, 2, 1, 2, 1, 3, 3, 2, 2, 2, 1, 2, 3, 3, 1, 2, 3, 2, 3, 1, 1, 2, 2, 2, 1, 3, 4, 1, 4, 3, 4, 3};
    vector<int> finish = {3, 2, 3, 2, 5, 5, 4, 4, 3, 5, 3, 2, 4, 3, 3, 5, 4, 4, 3, 5, 4, 4, 3, 3, 2, 2, 3, 4, 4, 4, 2, 5, 3, 5, 5};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> start = {22, 64, 13, 36, 3, 11, 15, 90, 11, 91, 77, 34, 38, 81, 36, 24, 1, 10, 82, 54, 4, 37, 54, 51, 53, 40, 2, 47, 54, 13, 13, 76, 72, 17, 4, 35};
    vector<int> finish = {94, 77, 94, 79, 27, 24, 41, 91, 19, 93, 90, 86, 81, 96, 40, 76, 88, 48, 97, 73, 95, 73, 70, 61, 64, 94, 82, 70, 99, 91, 15, 98, 100, 99, 77, 49};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 362;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> start = {1, 1, 1, 1, 1, 3, 2, 1, 4, 1, 3, 3, 2, 2, 1, 1, 5, 1, 3, 2, 1, 3, 2, 2, 3, 1, 2, 1, 1, 2, 2, 1, 1, 1, 2, 1, 1};
    vector<int> finish = {5, 2, 4, 5, 1, 5, 3, 3, 5, 4, 4, 4, 4, 3, 3, 3, 5, 5, 4, 5, 5, 5, 5, 4, 4, 1, 2, 3, 1, 4, 4, 3, 3, 4, 5, 1, 4};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> start = {89, 72, 55, 35, 43, 13, 20, 45, 1, 33, 44, 34, 33, 28, 15, 16, 36, 7, 78, 73, 18, 18, 22, 14, 36, 27, 20, 36, 38, 1, 14, 51, 15, 91, 3, 65, 59, 13};
    vector<int> finish = {99, 87, 60, 82, 85, 29, 27, 96, 58, 92, 49, 99, 48, 75, 35, 51, 59, 77, 81, 77, 81, 43, 61, 45, 88, 35, 90, 43, 57, 85, 100, 68, 67, 96, 34, 93, 70, 86};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> start = {2, 3, 2, 1, 3, 1, 1, 1, 2, 2, 3, 2, 2, 2, 1, 3, 1, 3, 3, 1, 1, 3, 3, 4, 4, 1, 3, 1, 4, 2, 5, 2, 2, 3, 1, 3, 2, 3, 2};
    vector<int> finish = {5, 4, 3, 5, 5, 4, 2, 4, 3, 4, 4, 3, 3, 3, 4, 5, 2, 5, 5, 2, 2, 3, 5, 5, 5, 4, 3, 2, 5, 2, 5, 2, 5, 5, 5, 5, 3, 4, 3};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 163;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> start = {22, 48, 1, 3, 17, 20, 68, 21, 2, 92, 15, 50, 23, 53, 28, 1, 46, 59, 6, 3, 19, 50, 2, 45, 56, 5, 24, 59, 6, 59, 63, 20, 11, 8, 65, 75, 32, 10, 8, 16};
    vector<int> finish = {54, 70, 34, 15, 60, 59, 76, 70, 66, 96, 97, 55, 67, 61, 31, 46, 52, 82, 44, 33, 21, 90, 43, 72, 61, 22, 82, 59, 80, 89, 89, 60, 25, 64, 97, 91, 70, 94, 99, 58};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> start = {1, 1, 1, 5, 1, 1, 4, 4, 1, 4, 5, 2, 2, 2, 2, 2, 2, 1, 2, 3, 5, 2, 4, 1, 3, 2, 3, 3, 1, 3, 3, 2, 3, 2, 1, 1, 2, 3, 1, 1, 4};
    vector<int> finish = {5, 5, 2, 5, 3, 3, 4, 5, 4, 5, 5, 5, 5, 5, 5, 4, 5, 3, 5, 4, 5, 3, 5, 2, 3, 4, 3, 3, 5, 5, 5, 4, 3, 4, 5, 5, 3, 5, 2, 2, 5};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 197;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> start = {87, 18, 28, 39, 23, 6, 52, 7, 35, 58, 30, 10, 30, 21, 40, 53, 32, 53, 9, 15, 50, 65, 41, 26, 9, 40, 10, 34, 9, 6, 19, 25, 60, 65, 53, 50, 43, 27, 59, 49, 42, 19};
    vector<int> finish = {100, 49, 60, 72, 95, 35, 98, 39, 64, 75, 68, 97, 63, 65, 75, 81, 44, 98, 20, 45, 58, 94, 55, 68, 66, 67, 71, 95, 41, 38, 52, 84, 71, 67, 86, 51, 78, 93, 69, 72, 80, 79};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 163;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> start = {1, 1, 3, 2, 2, 2, 4, 3, 2, 5, 3, 3, 1, 3, 4, 1, 2, 2, 5, 1, 3, 2, 2, 1, 4, 1, 1, 1, 3, 4, 2, 1, 1, 1, 1, 5, 3, 1, 2, 3, 1, 2, 3};
    vector<int> finish = {1, 3, 3, 4, 5, 4, 5, 5, 4, 5, 3, 3, 2, 4, 5, 1, 4, 2, 5, 1, 5, 3, 5, 2, 4, 4, 3, 5, 5, 4, 4, 4, 3, 5, 2, 5, 4, 3, 2, 4, 3, 2, 5};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 567;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> start = {35, 29, 16, 1, 12, 13, 12, 84, 48, 39, 40, 68, 29, 7, 41, 3, 37, 70, 92, 10, 28, 29, 27, 70, 78, 69, 16, 9, 65, 45, 34, 99, 39, 10, 25, 50, 5, 15, 14, 14, 25, 63, 25, 11};
    vector<int> finish = {65, 82, 47, 45, 44, 74, 56, 92, 99, 60, 45, 74, 65, 68, 51, 5, 88, 93, 94, 73, 66, 64, 66, 83, 83, 78, 79, 33, 97, 84, 73, 99, 77, 70, 47, 61, 96, 61, 82, 26, 51, 88, 67, 13};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 206;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> start = {1, 3, 1, 1, 3, 2, 2, 1, 3, 5, 4, 3, 4, 4, 2, 1, 1, 1, 1, 1, 2, 4, 3, 1, 1, 1, 1, 4, 1, 4, 1, 1, 3, 3, 4, 3, 2, 1, 2, 1, 2, 1, 2, 4, 1};
    vector<int> finish = {3, 5, 3, 1, 4, 4, 3, 4, 3, 5, 5, 4, 5, 5, 2, 2, 2, 2, 3, 4, 4, 4, 3, 1, 2, 3, 3, 5, 5, 4, 4, 3, 3, 3, 4, 5, 4, 5, 5, 2, 3, 4, 2, 5, 5};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 419;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> start = {59, 18, 10, 29, 79, 24, 86, 29, 51, 42, 50, 1, 57, 78, 32, 32, 8, 1, 73, 64, 65, 43, 20, 33, 21, 24, 1, 9, 69, 10, 49, 13, 7, 67, 15, 4, 77, 14, 45, 19, 20, 61, 11, 30, 81, 32};
    vector<int> finish = {93, 93, 84, 98, 96, 77, 100, 74, 69, 72, 56, 50, 77, 86, 40, 33, 75, 63, 82, 79, 94, 50, 50, 93, 34, 90, 86, 93, 99, 40, 88, 95, 80, 80, 56, 77, 98, 98, 66, 54, 64, 88, 27, 32, 89, 51};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 343;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> start = {2, 1, 2, 3, 4, 3, 4, 2, 3, 4, 1, 3, 4, 1, 4, 3, 3, 2, 2, 3, 2, 2, 3, 1, 3, 2, 1, 1, 1, 3, 4, 2, 2, 4, 4, 4, 2, 4, 1, 2, 1, 2, 1, 1, 1, 5, 4};
    vector<int> finish = {3, 2, 4, 5, 4, 5, 5, 5, 3, 5, 2, 5, 4, 3, 5, 4, 4, 3, 4, 5, 4, 4, 5, 4, 3, 3, 4, 5, 4, 4, 5, 3, 4, 4, 4, 4, 5, 5, 4, 5, 2, 3, 1, 3, 1, 5, 5};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 303;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> start = {30, 51, 11, 47, 14, 32, 44, 48, 26, 25, 26, 38, 4, 17, 33, 47, 88, 13, 37, 16, 3, 56, 54, 2, 77, 51, 61, 38, 32, 71, 45, 4, 10, 57, 10, 39, 57, 67, 34, 51, 39, 3, 3, 79, 77, 65, 25, 45};
    vector<int> finish = {85, 67, 55, 50, 91, 92, 70, 48, 30, 55, 39, 78, 89, 18, 80, 51, 95, 86, 49, 55, 59, 77, 87, 13, 84, 100, 85, 46, 58, 99, 97, 51, 45, 59, 80, 76, 90, 81, 82, 79, 75, 44, 83, 100, 93, 67, 35, 76};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 344;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> start = {4, 3, 1, 3, 5, 3, 1, 2, 2, 1, 2, 1, 3, 3, 4, 2, 2, 5, 3, 1, 3, 2, 1, 1, 2, 1, 2, 1, 2, 1, 4, 4, 2, 3, 5, 3, 1, 3, 2, 3, 1, 3, 4, 2, 2, 2, 3, 2, 1};
    vector<int> finish = {4, 5, 4, 5, 5, 3, 1, 5, 5, 5, 5, 2, 4, 3, 5, 3, 3, 5, 4, 4, 4, 3, 4, 5, 3, 1, 3, 3, 4, 1, 5, 4, 5, 5, 5, 4, 2, 5, 5, 4, 2, 4, 5, 4, 2, 4, 3, 3, 2};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 567;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> start = {1, 7, 82, 12, 47, 26, 21, 10, 77, 53, 77, 11, 40, 51, 95, 17, 49, 62, 65, 28, 36, 24, 11, 59, 13, 77, 3, 6, 3, 1, 28, 54, 19, 2, 9, 53, 20, 10, 39, 3, 43, 37, 58, 90, 30, 22, 6, 23, 6, 52};
    vector<int> finish = {33, 14, 99, 78, 79, 44, 61, 84, 88, 90, 96, 36, 98, 65, 98, 37, 62, 100, 95, 61, 74, 93, 70, 90, 86, 80, 32, 7, 58, 33, 30, 61, 43, 73, 65, 58, 72, 68, 45, 40, 97, 42, 75, 91, 80, 43, 69, 24, 81, 54};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 780;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> start = {1, 1, 2, 1, 2, 2, 1, 4, 2, 1, 2, 4, 4, 3, 4, 1, 1, 2, 1, 1, 1, 1, 1, 3, 2, 3, 3, 3, 2, 1, 2, 2, 1, 2, 3, 1, 3, 5, 4, 2, 1, 1, 3, 1, 1, 1, 1, 2, 4, 1};
    vector<int> finish = {4, 2, 5, 3, 5, 4, 3, 4, 5, 4, 5, 4, 4, 5, 4, 5, 3, 3, 2, 3, 1, 3, 4, 3, 2, 5, 3, 4, 4, 5, 2, 5, 1, 5, 4, 2, 5, 5, 5, 3, 2, 3, 5, 1, 4, 2, 3, 5, 4, 3};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 315;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> start = {16, 30, 57, 55, 54, 75, 51, 42, 1, 64, 13, 41, 3, 64, 70, 62, 5, 17, 8, 36, 31, 18, 82, 44, 21, 13, 62, 7, 20, 45, 51, 36, 74, 3, 2, 1, 4, 2, 53, 74, 4, 32, 84, 55, 31, 16, 46, 1, 5, 57};
    vector<int> finish = {71, 75, 76, 93, 84, 85, 77, 45, 96, 93, 22, 91, 62, 74, 73, 80, 85, 81, 32, 68, 33, 49, 84, 63, 34, 48, 77, 32, 100, 48, 97, 94, 86, 8, 95, 66, 15, 36, 70, 88, 39, 45, 100, 85, 41, 93, 76, 98, 74, 61};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 851;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> start = {2, 2, 1, 2, 3, 1, 4, 1, 2, 5, 4, 1, 1, 5, 4, 2, 1, 1, 3, 1, 1, 1, 4, 3, 5, 2, 1, 2, 1, 2, 3, 2, 1, 1, 2, 1, 2, 1, 4, 1, 5, 2, 2, 2, 1, 2, 2, 1, 4, 1};
    vector<int> finish = {2, 2, 1, 5, 3, 2, 4, 3, 4, 5, 4, 2, 5, 5, 5, 3, 1, 4, 4, 2, 4, 2, 5, 3, 5, 2, 1, 4, 2, 4, 5, 5, 5, 5, 5, 2, 5, 5, 5, 5, 5, 5, 4, 5, 4, 5, 3, 4, 5, 2};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 638;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> start = {2, 12, 9, 18, 77, 50, 32, 17, 8, 61, 23, 35, 19, 20, 67, 46, 45, 65, 26, 34, 58, 54, 65, 12, 15, 45, 55, 18, 6, 4, 5, 55, 20, 20, 17, 7, 42, 26, 61, 54, 55, 77, 56, 14, 42, 3, 55, 72, 75, 97};
    vector<int> finish = {98, 25, 47, 43, 78, 92, 50, 94, 80, 68, 63, 61, 24, 53, 94, 97, 50, 84, 38, 71, 86, 89, 71, 54, 78, 97, 96, 70, 61, 56, 57, 96, 66, 69, 36, 50, 74, 71, 71, 66, 78, 86, 91, 78, 88, 29, 100, 90, 79, 99};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 425;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> start = {1, 1, 1, 2, 4, 1, 3, 1, 3, 3, 3, 1, 1, 1, 3, 1, 3, 2, 3, 2, 2, 5, 2, 1, 2, 1, 2, 2, 1, 1, 2, 4, 2, 1, 5, 1, 1, 1, 2, 1, 1, 4, 2, 1, 3, 1, 1, 1, 1, 5};
    vector<int> finish = {3, 5, 2, 5, 5, 4, 3, 2, 3, 5, 3, 4, 2, 4, 4, 2, 5, 2, 4, 3, 5, 5, 3, 2, 4, 4, 4, 2, 3, 3, 3, 5, 4, 5, 5, 3, 3, 5, 3, 3, 3, 5, 2, 2, 5, 2, 2, 3, 2, 5};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 422;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> start = {31, 43, 51, 1, 35, 1, 3, 18, 23, 32, 39, 53, 33, 36, 19, 45, 28, 6, 63, 20, 39, 62, 55, 11, 26, 68, 66, 10, 62, 10, 30, 16, 27, 40, 43, 31, 4, 50, 68, 1, 7, 14, 9, 50, 8, 20, 35, 10, 96, 70};
    vector<int> finish = {58, 59, 92, 12, 99, 83, 49, 71, 47, 76, 87, 96, 42, 74, 32, 89, 97, 27, 90, 89, 83, 88, 68, 100, 76, 97, 72, 53, 75, 42, 96, 27, 73, 56, 60, 76, 89, 70, 72, 78, 28, 68, 77, 94, 52, 59, 79, 65, 97, 93};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> start = {4, 1, 3, 2, 3, 1, 1, 1, 1, 1, 2, 3, 2, 3, 1, 1, 2, 1, 1, 4, 5, 3, 1, 3, 1, 2, 2, 1, 1, 5, 3, 1, 3, 5, 2, 1, 1, 4, 1, 4, 1, 4, 4, 2, 2, 3, 2, 2, 1, 3};
    vector<int> finish = {4, 2, 4, 5, 5, 1, 5, 4, 5, 4, 2, 3, 3, 3, 4, 3, 5, 3, 5, 5, 5, 5, 5, 5, 2, 3, 4, 3, 4, 5, 3, 2, 4, 5, 5, 2, 4, 5, 4, 5, 5, 5, 5, 3, 2, 5, 2, 4, 2, 5};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> start = {3, 6, 14, 6, 37, 52, 28, 11, 17, 3, 51, 63, 8, 19, 86, 6, 31, 46, 10, 87, 8, 34, 53, 7, 4, 13, 21, 50, 33, 68, 22, 41, 46, 3, 75, 28, 6, 45, 53, 4, 31, 8, 19, 39, 30, 21, 69, 38, 8, 24};
    vector<int> finish = {23, 77, 24, 84, 72, 75, 79, 95, 100, 85, 65, 96, 87, 95, 100, 65, 88, 72, 43, 93, 8, 39, 98, 95, 67, 74, 94, 55, 79, 74, 29, 58, 95, 22, 85, 70, 91, 78, 97, 67, 83, 19, 63, 68, 62, 54, 96, 49, 68, 26};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 390;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> start = {1, 2, 4, 3, 4, 2, 3, 3, 1, 2, 2, 1, 1, 1, 1, 5, 3, 3, 5, 1, 2, 1, 3, 2, 3, 4, 1, 4, 2, 1, 3, 5, 1, 3, 2, 4, 3, 3, 3, 2, 5, 1, 4, 3, 1, 3, 1, 2, 2, 2};
    vector<int> finish = {3, 4, 5, 4, 5, 4, 4, 3, 5, 3, 2, 4, 1, 4, 3, 5, 3, 5, 5, 3, 4, 4, 5, 2, 3, 4, 1, 4, 3, 5, 5, 5, 4, 5, 5, 5, 4, 5, 3, 4, 5, 2, 4, 4, 2, 4, 4, 5, 5, 4};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 683;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> start = {7, 1, 48, 34, 1, 68, 46, 52, 32, 68, 70, 20, 70, 16, 65, 24, 43, 8, 40, 29, 39, 15, 22, 61, 39, 8, 36, 87, 67, 12, 43, 22, 60, 20, 56, 10, 3, 24, 9, 5, 38, 6, 2, 45, 4, 47, 55, 31, 68, 3};
    vector<int> finish = {89, 25, 99, 66, 39, 88, 66, 87, 46, 71, 99, 77, 80, 61, 85, 29, 55, 84, 86, 39, 50, 97, 69, 90, 89, 60, 54, 99, 69, 81, 65, 62, 94, 100, 65, 49, 24, 54, 93, 57, 56, 76, 25, 90, 35, 73, 67, 83, 100, 74};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 487;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> start = {80, 10, 11, 34, 20, 33, 28, 10, 33, 34, 6, 73, 20, 10, 72, 29, 29, 26, 7, 20, 25, 60, 7, 15, 21, 20, 4, 11, 57, 79, 66, 11, 16, 24, 24, 70, 4, 12, 43, 36, 62, 68, 6, 40, 37, 59, 18, 2, 20, 75};
    vector<int> finish = {90, 72, 64, 36, 33, 99, 84, 44, 88, 91, 74, 84, 67, 64, 94, 72, 91, 92, 42, 85, 75, 78, 13, 59, 86, 78, 13, 35, 79, 79, 66, 91, 83, 81, 74, 72, 8, 53, 98, 93, 98, 97, 37, 58, 67, 64, 40, 36, 29, 88};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 286;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> start = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> finish = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 7402;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> start = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> finish = {30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> start = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> finish = {16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 1220;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> start = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 1, 3};
    vector<int> finish = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 4, 6};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 747;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> start = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 14, 15, 15, 15, 16, 16, 16, 1, 8};
    vector<int> finish = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 14, 15, 15, 15, 16, 16, 16, 10, 16};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 43049637;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> start = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 14, 15, 15, 15, 16, 16, 16, 17, 17};
    vector<int> finish = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 14, 15, 15, 15, 16, 16, 16, 17, 17};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 86093442;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> start = {1, 1, 3, 3};
    vector<int> finish = {2, 2, 4, 4};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> start = {95, 90, 95, 97, 91, 93, 90, 97, 96, 94, 99, 97, 96, 90, 95, 90, 90, 93, 96, 91, 90, 99, 99, 90, 94, 91, 97, 92, 97, 93, 99, 93, 97, 91, 95, 99, 92, 95, 91, 94, 97, 93, 92, 90, 99, 98, 93, 93, 93, 98};
    vector<int> finish = {95, 91, 95, 97, 95, 99, 98, 100, 97, 99, 100, 98, 97, 90, 97, 93, 94, 96, 97, 91, 94, 100, 100, 92, 99, 97, 98, 95, 99, 99, 99, 93, 98, 98, 100, 99, 100, 100, 95, 96, 100, 95, 94, 100, 99, 100, 96, 100, 96, 100};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 1716;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> start = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> finish = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 1221537;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> start = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25};
    vector<int> finish = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 33554432;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> start = {1, 2, 3, 3, 4, 5, 6, 7, 8, 9, 11, 12, 12, 12, 13, 11, 15, 15, 16, 17, 18, 19, 19, 21, 22, 22, 23, 24, 27, 28, 29, 29, 31, 31, 12};
    vector<int> finish = {12, 6, 5, 5, 8, 5, 9, 10, 11, 9, 13, 12, 18, 25, 14, 14, 17, 19, 19, 21, 20, 19, 19, 23, 24, 25, 25, 26, 30, 30, 32, 31, 31, 33, 18};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 7536;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> start = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> finish = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 33554432;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> start = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5, 5, 5, 5, 50, 50, 51, 51, 51, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 73, 10, 20, 30, 40, 50, 60, 70, 80, 90, 90, 20, 27, 34, 41, 48, 55, 62, 69, 76, 83};
    vector<int> finish = {10, 2, 30, 14, 50, 7, 17, 8, 90, 10, 55, 15, 15, 7, 50, 51, 51, 52, 99, 77, 77, 77, 97, 75, 96, 95, 80, 79, 90, 77, 99, 69, 39, 70, 58, 65, 75, 85, 95, 99, 22, 34, 41, 48, 55, 62, 68, 75, 82, 83};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 19895;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> start = {1, 1, 1, 4, 4, 4, 7, 7, 7, 10, 10, 10, 13, 13, 13, 16, 16, 16, 19, 19, 19, 22, 22, 22, 25, 25, 25, 28, 28, 28, 31, 31, 31, 34, 34, 34, 37, 37, 37, 40, 40, 40, 43, 43, 43, 46, 46, 46, 49, 49};
    vector<int> finish = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 86093442;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> start = {60, 8, 25, 40, 60, 32, 13, 62, 55, 51, 90, 32, 31, 19, 54, 22, 56, 2, 51, 12, 2, 47, 54, 88, 43, 10, 4, 1, 9, 29, 10, 51, 12, 33, 4, 79, 26, 6, 1, 42, 92, 29, 52, 2, 43, 60, 64, 34, 29, 49};
    vector<int> finish = {79, 80, 63, 79, 82, 78, 73, 84, 57, 73, 97, 33, 40, 65, 76, 81, 65, 6, 70, 83, 68, 91, 90, 91, 55, 50, 39, 52, 33, 82, 27, 91, 38, 69, 70, 90, 33, 76, 17, 52, 99, 30, 72, 64, 50, 69, 75, 39, 78, 53};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 866;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> start = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10};
    vector<int> finish = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> start = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    vector<int> finish = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> start = {1, 2, 3};
    vector<int> finish = {1, 2, 3};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
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
    vector<int> start = {1, 1, 3};
    vector<int> finish = {4, 2, 4};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> start = {2, 3, 4, 4, 4, 4, 2, 2, 1};
    vector<int> finish = {3, 5, 4, 5, 4, 5, 3, 2, 4};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> start = {1, 3, 5};
    vector<int> finish = {2, 4, 6};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> start = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> finish = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> start = {4, 3, 4, 2, 1};
    vector<int> finish = {4, 3, 5, 2, 3};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
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
    vector<int> start = {90, 88, 86, 84, 82, 80, 78, 76, 74, 72, 70, 68, 66, 64, 62, 60, 58, 56, 54, 52, 50, 48, 46, 44, 42, 40, 38, 36, 34, 32, 30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10, 8, 6, 4, 2};
    vector<int> finish = {99, 97, 95, 93, 91, 89, 87, 85, 83, 81, 79, 77, 75, 73, 71, 69, 67, 65, 63, 61, 59, 57, 55, 53, 51, 49, 47, 45, 43, 41, 39, 37, 35, 33, 31, 29, 27, 25, 23, 21, 19, 17, 15, 13, 11};
    IntervalSubsets* pObj = new IntervalSubsets();
    clock_t start = clock();
    int result = pObj->numberOfSubsets(start, finish);
    clock_t end = clock();
    delete pObj;
    int expected = 58106;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8433628&rd=11121&pm=8084
********************************************************************************
#include <algorithm> 
#include <string> 
#include <set> 
#include <map> 
#include <vector> 
#include <queue> 
#include <iostream> 
#include <iterator> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <sstream> 
 
using namespace std; 
 
#define FOR(i,a,b) for (int _n(b), i(a); i < _n; i++) 
#define REP(i,n) FOR(i,0,n) 
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;--i) 
#define ALL(c) (c).begin(), (c).end() 
#define SORT(c) sort(ALL(c)) 
#define INF 1000000000 
#define X first 
#define Y second 
#define pb push_back 
 
 
class IntervalSubsets { 
public: 
  int numberOfSubsets(vector <int> x, vector <int> y) { 
    int res [128]; 
 
    memset (res, 0, sizeof (res)); 
    res[0] = 1; 
 
    int n = x.size (); 
    REP (i, 128) 
        { 
            REP (j, n) 
                if (x[j]>=i) 
                { 
                    bool ok = true; 
 
                    REP (k, n) 
                    { 
                        if (x[k]>=i && y[k]<x[j]) 
                            ok=false; 
                    } 
                    if (ok) 
                        res[y[j]+1]+=res[i]; 
                } 
        } 
        int rr =0; 
        REP (i, n) 
            rr >?=x[i]; 
        int r = 0; 
        FOR (i, rr+1, 128) 
            r+=res[i]; 
        return r; 
  } 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/