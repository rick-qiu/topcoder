/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5937
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

class GroupingNumbers {
public:
    double minRange(vector<int> numbers, int n);
};

double GroupingNumbers::minRange(vector<int> numbers, int n) {
    double ret;
    return ret;
}


int test0() {
    vector<int> numbers = {1, 2, 99, 100};
    int n = 2;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> numbers = {3, 3, 3, 3, 3, 3, 3, 3, 3};
    int n = 4;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> numbers = {2, 3, 5, 7, 11, 13};
    int n = 3;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33333333333333304;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> numbers = {2, 3, 5, 7, 11, 13, 17, 19, 23};
    int n = 6;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> numbers = {2, 3, 7, 7, 11, 13};
    int n = 3;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> numbers = {1, 2, 2, 998, 667};
    int n = 2;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
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
    vector<int> numbers = {2, 3, 5, 7, 11, 13, 17, 19, 23};
    int n = 5;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.333333333333334;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> numbers = {65, 43, 455};
    int n = 3;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 412.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> numbers = {769, 197, 410, 883, 93};
    int n = 5;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 790.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> numbers = {367, 33};
    int n = 1;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> numbers = {786, 706, 500, 781, 76};
    int n = 2;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 55.33333333333337;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> numbers = {710, 241, 327, 802, 288, 528, 533};
    int n = 7;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 561.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> numbers = {110, 438, 333, 276, 989, 14};
    int n = 4;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 162.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> numbers = {933, 240, 513, 830};
    int n = 2;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 85.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> numbers = {812, 224, 264, 702, 724, 51};
    int n = 3;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 51.5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> numbers = {625, 374, 648, 552, 313, 854, 686, 899};
    int n = 6;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 134.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> numbers = {242, 26, 303, 443, 310, 670, 981, 246, 710};
    int n = 3;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.399999999999977;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> numbers = {242, 26, 303, 443, 310, 670, 981, 246, 710};
    int n = 9;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 955.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> numbers = {242, 26, 303, 443, 310, 670, 981, 246, 710};
    int n = 1;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
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
    vector<int> numbers = {21, 461, 239, 952, 149, 933, 370};
    int n = 4;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 107.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> numbers = {746, 716, 516, 508, 776, 184, 434, 511};
    int n = 4;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 51.66666666666663;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> numbers = {31, 724, 688, 968, 145, 323, 964, 395};
    int n = 6;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 401.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> numbers = {143, 478, 777, 973, 265};
    int n = 3;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 80.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> numbers = {308, 154, 934, 746};
    int n = 3;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 438.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> numbers = {825};
    int n = 1;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> numbers = {493, 584, 880, 585, 564, 540, 559, 596, 464};
    int n = 1;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> numbers = {509, 489, 390, 875, 369, 245, 42};
    int n = 7;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 833.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> numbers = {548, 151, 443, 85};
    int n = 2;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 19.5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> numbers = {59, 679, 306, 607, 41, 461, 311};
    int n = 6;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 548.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> numbers = {698, 75, 492, 156, 57, 953, 668, 414};
    int n = 5;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 118.5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> numbers = {2, 3, 5, 7, 11, 13};
    int n = 3;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33333333333333304;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> numbers = {1000, 1, 3, 4, 5, 6, 8, 12, 12};
    int n = 4;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 161.83333333333334;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> numbers = {1, 4, 6, 7, 3, 2, 99, 108, 106};
    int n = 3;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> numbers = {9, 9, 8, 8, 7, 7, 6, 345, 54};
    int n = 8;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 168.5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 7;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 8;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
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
    vector<int> numbers = {45, 34, 67, 89, 65, 41, 21, 101, 48};
    int n = 7;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 26.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 4;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> numbers = {1, 10, 100, 1000, 500, 50, 5, 30, 300};
    int n = 9;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 999.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> numbers = {1};
    int n = 1;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> numbers = {1, 2, 2, 998, 343, 1, 34, 2, 4};
    int n = 3;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 138.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> numbers = {1, 1, 1, 1, 1, 9, 99};
    int n = 3;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 19.6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> numbers = {1, 2, 99, 23, 29, 101, 103, 87, 187};
    int n = 8;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 101.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> numbers = {101, 102, 103, 1, 2, 2};
    int n = 6;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 102.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> numbers = {100, 101, 311, 718, 165, 173, 177, 871, 653};
    int n = 9;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 771.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> numbers = {13, 425, 123, 664, 745, 342, 999, 756, 34};
    int n = 5;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 111.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> numbers = {11, 345, 322, 355, 355, 332, 666, 333, 222};
    int n = 6;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 34.333333333333314;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> numbers = {3, 3, 3, 2};
    int n = 2;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333335;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> numbers = {1, 513, 235, 123, 21, 323, 12, 33, 22};
    int n = 3;
    GroupingNumbers* pObj = new GroupingNumbers();
    clock_t start = clock();
    double result = pObj->minRange(numbers, n);
    clock_t end = clock();
    delete pObj;
    double expected = 15.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20348374&rd=8077&pm=5937
********************************************************************************
#include <set>
#include <map>
#include <math.h>
#include <string>
#include <vector>
#include <stdio.h>
#include <sstream>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <iostream>
#include <algorithm>
#include <queue>
 
using namespace std;
 
#define vc vector
#define pb push_back
#define fr1(i,s,n) for (i=s;i<n;i++)
#define fr(i,s,n) for (i=s;i<=n;i++)
#define rt return
#define iss istringstream
#define oss ostringstream
#define isdigit(x) (x>='0' && x<='9')
#define isup(x) (x>='A' && x<='Z')
#define islow(x) (x>='a' && x<='z')
#define iscase(x) (isup(x) || islow(x))
#define toup(x) x-'a'+'A'
#define tolow(x) x-'A'+'a'
#define abs(x) x>0?x:-x
#define PQ priority_queue
 
inline int bin(int x)
{
    return 1<<(x-1);
}
 
class  GroupingNumbers{
    public:
        int n,m,a[15],id[15],s[15],num[15],tothave;
        double avr[15],best;
        void dfs(int dep)
        {
            int i;
            if (dep==n+1)
            {
                double max=-1e20,min=1e20;
                for (i=1;i<=m;i++)
                if (num[i]==0) return;
                else
                {
                    if ((double)s[i]/num[i]<min) min=(double)s[i]/num[i];
                    if ((double)s[i]/num[i]>max) max=(double)s[i]/num[i];
                }
                if (max-min<best) best=max-min;
            }else
            {
                if (m-tothave>n-dep+1) return;
                for (i=1;i<=m;i++)
                {
                    num[i]++;
                    if (num[i]==1) tothave++;
                    s[i]+=a[dep];
                    dfs(dep+1);
                    s[i]-=a[dep];
                    num[i]--;
                    if (num[i]==0) tothave--;
                }
            }
        }
        double minRange(vector <int> ss, int N)
        {
            int i;
            best=1e20;
            tothave=0;
            m=N;
            n=ss.size();
            for (i=1;i<=n;i++) a[i]=ss[i-1];
            memset(num,0,sizeof(num));
            memset(s,0,sizeof(s));
            dfs(1);
            return best;
        }
};

********************************************************************************
*******************************************************************************/