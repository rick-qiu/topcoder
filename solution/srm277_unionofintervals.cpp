/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4823
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

class UnionOfIntervals {
public:
    int nthElement(vector<int> lowerBound, vector<int> upperBound, int n);
};

int UnionOfIntervals::nthElement(vector<int> lowerBound, vector<int> upperBound, int n) {
    int ret;
    return ret;
}


int test0() {
    vector<int> lowerBound = {1, 5};
    vector<int> upperBound = {3, 7};
    int n = 4;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> lowerBound = {1, 3};
    vector<int> upperBound = {4, 5};
    int n = 3;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
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
    vector<int> lowerBound = {-1500000000};
    vector<int> upperBound = {1500000000};
    int n = 1500000091;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> lowerBound = {1999999998};
    vector<int> upperBound = {2000000000};
    int n = 1;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999999;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> lowerBound = {-456, -82481, 484, 399};
    vector<int> upperBound = {19342, 200, 8484, 1000};
    int n = 44444;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -38037;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> lowerBound = {-2000000000};
    vector<int> upperBound = {2000000000};
    int n = 16;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1999999984;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> lowerBound = {-2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000};
    vector<int> upperBound = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    int n = 0;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -2000000000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> lowerBound = {-2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000};
    vector<int> upperBound = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    int n = 49;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -2000000000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> lowerBound = {-2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000};
    vector<int> upperBound = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    int n = 50;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1999999999;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> lowerBound = {-2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000};
    vector<int> upperBound = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    int n = 1999999999;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1960000001;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> lowerBound = {-2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000};
    vector<int> upperBound = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    int n = 2000000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1960000000;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> lowerBound = {1999999999};
    vector<int> upperBound = {2000000000};
    int n = 0;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999999;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> lowerBound = {1999999999};
    vector<int> upperBound = {2000000000};
    int n = 1;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> lowerBound = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> upperBound = {99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50};
    int n = 1224;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> lowerBound = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> upperBound = {99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50};
    int n = 1225;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> lowerBound = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> upperBound = {99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50};
    int n = 1226;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> lowerBound = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> upperBound = {99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50};
    int n = 1227;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> lowerBound = {1, 2};
    vector<int> upperBound = {2, 2};
    int n = 0;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> lowerBound = {1, 2};
    vector<int> upperBound = {2, 2};
    int n = 1;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> lowerBound = {1, 2};
    vector<int> upperBound = {2, 2};
    int n = 2;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
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
    vector<int> lowerBound = {-2000000000, -2000000000, -1999999999};
    vector<int> upperBound = {-1999999999, -1999999998, -1999999997};
    int n = 0;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -2000000000;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> lowerBound = {-2000000000, -2000000000, -1999999999};
    vector<int> upperBound = {-1999999999, -1999999998, -1999999997};
    int n = 1;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -2000000000;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> lowerBound = {-2000000000, -2000000000, -1999999999};
    vector<int> upperBound = {-1999999999, -1999999998, -1999999997};
    int n = 2;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1999999999;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> lowerBound = {-2000000000, -2000000000, -1999999999};
    vector<int> upperBound = {-1999999999, -1999999998, -1999999997};
    int n = 3;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1999999999;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> lowerBound = {-2000000000, -2000000000, -1999999999};
    vector<int> upperBound = {-1999999999, -1999999998, -1999999997};
    int n = 4;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1999999999;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> lowerBound = {-2000000000, -2000000000, -1999999999};
    vector<int> upperBound = {-1999999999, -1999999998, -1999999997};
    int n = 5;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1999999998;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> lowerBound = {12, -64, -55, -59, -60, -18, 43, 1, -76};
    vector<int> upperBound = {29, 19, 42, -12, 19, -7, 82, 77, 7};
    int n = 52;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -53;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> lowerBound = {18, -21, -79, -13, 45};
    vector<int> upperBound = {35, 77, -20, -8, 79};
    int n = 92;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> lowerBound = {-75, -4, 93, 25, -76, 46, -25, 86};
    vector<int> upperBound = {-75, 0, 95, 32, -70, 53, -20, 88};
    int n = 24;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> lowerBound = {-1, 0, 0, 1, 0, 1, 0, -1, 0, 1, -1, 0, -1, -1, 1, -1, 1, 1, 0, -1, 0, 1, 0, 0, 1, 0, 1, -1, -1, 1, 0, 0, 0, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, 1, 0, 0, 0};
    vector<int> upperBound = {-1, 0, 0, 1, 0, 1, 1, -1, 1, 1, 0, 1, -1, -1, 1, 0, 1, 1, 1, -1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, -1, 1, -1, 0, -1, 1, 0, -1, 1, 1, 1, 0};
    int n = 28;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> lowerBound = {-1, -2, -1, -1, -1, -1, -2, 0, -1, -2, -2, -2, 0, -1, -2, -2, 0, -2, 1, -2, 0, -1, 0, -2, 1, -2, -1, -2, -1, -2, -1, 1, -2, -1, 1, -1, -2, -1, -2, -2, -1, -1};
    vector<int> upperBound = {0, -1, 1, 1, 0, 0, 0, 1, -1, 0, -1, -2, 0, 0, 0, -2, 1, -2, 1, 0, 0, 0, 1, -1, 1, -2, 1, -1, 0, -1, 0, 1, 0, 1, 1, 0, 0, -1, 0, 0, -1, 1};
    int n = 2;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> lowerBound = {-1, 0, 0, 1, 1, -1, -1, 2, -1, 1, 0, -1, -1, 2, -1, 1, 1, 0, 0, -1, -1, 2, 0, 0, -1, 0, 0, 0, -1, 0, 0, 2, 1, 0, -1, 0, 1, 0, 2, 1, 1};
    vector<int> upperBound = {0, 2, 0, 1, 1, 1, 1, 2, -1, 1, 2, 1, 0, 2, 0, 2, 2, 2, 0, -1, 1, 2, 0, 0, 1, 2, 1, 1, 0, 0, 2, 2, 2, 2, 1, 0, 2, 2, 2, 2, 1};
    int n = 74;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> lowerBound = {-28290, -95666, 56009, 46845, 957, -92924, -81921, 87726, -96436, -31200, -36490, -29356, 97994, -35475, 88148, 76565, 80071, 14060};
    vector<int> upperBound = {-28209, -95568, 56049, 46909, 1051, -92924, -81865, 87742, -96366, -31184, -36458, -29274, 98071, -35393, 88221, 76601, 80151, 14141};
    int n = 947;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 88151;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> lowerBound = {-27348, -82552, -46215, -98832, -99044, -59101, -67436, -17851, -85668, -81722, -79351, -98273, -58655, -94621, -41736, -57267, -97310, -86741, -94596, -96175};
    vector<int> upperBound = {-245, -49673, -40983, -3391, 241, -22294, -24856, -11970, -16572, -29735, -77095, -6058, -36398, -84270, -31325, -36574, -4683, -15967, -45733, -39021};
    int n = 576461;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -42334;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> lowerBound = {10115, 2482};
    vector<int> upperBound = {63704, 88432};
    int n = 131598;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 80490;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> lowerBound = {799931, -713959, -121878, -315628, -830060, -126414, 92510, -653291, 108308, 235090, 297266, 760384, 861282, 756613, 657943, 410692, -127565, 921817, -482296, 791904, -610276, -788771, -359311, -358283, -512283, 848574, 225397, 362343, 925043, -302423, 926655, -569776, 244016, -197493, 797725, 860044, 537585, -311837, -187534, -328402, -969255};
    vector<int> upperBound = {851688, -673765, -25669, -302359, -787815, -52520, 161138, -639719, 158019, 303273, 374716, 794061, 930067, 832108, 686470, 493349, -70179, 948079, -475094, 831781, -574005, -741138, -340479, -357224, -437112, 940166, 253675, 368186, 959900, -215915, 942204, -480739, 256960, -128668, 831576, 883211, 595245, -265357, -150745, -293746, -939365};
    int n = 1370941;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 662379;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> lowerBound = {-2934918, -2934921, -2934920, -2934918, -2934922, -2934922, -2934921, -2934917, -2934921, -2934919, -2934919, -2934921, -2934918, -2934921, -2934920, -2934920, -2934923, -2934920, -2934916, -2934922, -2934920, -2934919, -2934921, -2934918, -2934923, -2934921, -2934917, -2934920, -2934916, -2934919, -2934915, -2934921, -2934922, -2934920, -2934918, -2934921, -2934923, -2934921, -2934920, -2934921, -2934923, -2934921, -2934917, -2934922, -2934923, -2934923, -2934920, -2934923, -2934923, -2934922};
    vector<int> upperBound = {-2934917, -2934917, -2934916, -2934915, -2934917, -2934922, -2934919, -2934915, -2934916, -2934918, -2934918, -2934918, -2934915, -2934917, -2934915, -2934918, -2934918, -2934917, -2934915, -2934921, -2934917, -2934917, -2934917, -2934916, -2934918, -2934917, -2934917, -2934916, -2934916, -2934916, -2934915, -2934916, -2934921, -2934915, -2934916, -2934919, -2934920, -2934916, -2934915, -2934921, -2934920, -2934917, -2934915, -2934918, -2934919, -2934919, -2934920, -2934918, -2934920, -2934920};
    int n = 93;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -2934919;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> lowerBound = {1844392, 1844398, 1844398, 1844398, 1844394, 1844402, 1844394, 1844398, 1844397, 1844395, 1844395, 1844400, 1844392, 1844397, 1844400, 1844398, 1844398, 1844400, 1844394, 1844398, 1844399, 1844392, 1844394, 1844397, 1844395, 1844393, 1844396, 1844394, 1844393, 1844396, 1844398, 1844396, 1844392, 1844396, 1844402, 1844392, 1844398, 1844395, 1844392, 1844400, 1844395, 1844397, 1844394, 1844393, 1844397, 1844400, 1844401, 1844397, 1844395, 1844400};
    vector<int> upperBound = {1844392, 1844402, 1844399, 1844398, 1844397, 1844402, 1844395, 1844398, 1844397, 1844397, 1844395, 1844402, 1844396, 1844401, 1844400, 1844399, 1844398, 1844401, 1844396, 1844402, 1844402, 1844392, 1844396, 1844398, 1844398, 1844396, 1844399, 1844397, 1844397, 1844399, 1844399, 1844400, 1844396, 1844398, 1844402, 1844395, 1844400, 1844398, 1844392, 1844402, 1844398, 1844397, 1844394, 1844393, 1844401, 1844402, 1844401, 1844400, 1844398, 1844400};
    int n = 63;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1844397;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> lowerBound = {-7, -1, -6, 9, 0, -6, -3, -8, 8, -5, -9, 7, -3, -7, 0, 1, -7, 4, 5};
    vector<int> upperBound = {1, 5, 3, 10, 5, -6, -1, 1, 8, 3, -1, 8, 3, -1, 4, 4, -4, 5, 7};
    int n = 89;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> lowerBound = {-40, -63, -57, -41, -98, -91, -76, -44, -97, 35, 73, -63, -96, 42, -65, -22, -75, 31, -21, -85, -41, 6, -6, 67, 5, -21, 19, -14, 20, 3, -55, -65, 39, -3, -76, -41, 74, -76, 21, -29, -50, 0, -9, 43, 22, 15};
    vector<int> upperBound = {26, -34, -13, 4, -89, -34, 11, -13, -21, 72, 98, -30, -91, 64, -4, 34, -44, 83, 35, -43, -7, 38, 26, 93, 30, -20, 94, 17, 37, 6, -29, 3, 80, 72, 15, 3, 84, -8, 84, 23, -8, 0, 21, 80, 92, 95};
    int n = 601;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -31;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> lowerBound = {446, -597, -809, 915, 849, -185, 313, 665, 313, 709, -396, 571, 810, -849, 301, 81, -550, 517, -529, 59, 48, 32, -956, 858, 146, -311, -393, -746, -733, -827, -64};
    vector<int> upperBound = {449, -588, -809, 917, 852, -178, 321, 673, 319, 711, -390, 574, 810, -842, 310, 82, -545, 518, -529, 62, 55, 32, -955, 866, 151, -311, -387, -742, -732, -818, -57};
    int n = 64;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -181;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> lowerBound = {-9223, 2423, 2869, 6255, -9974, -2746, -8326, -1407, 857, -916, 1985, -7169, -9105, 1786, -4086, -2330, 1972};
    vector<int> upperBound = {-9217, 2426, 2870, 6260, -9965, -2744, -8324, -1400, 860, -911, 1990, -7168, -9100, 1793, -4077, -2321, 1974};
    int n = 86;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2423;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> lowerBound = {-37105, -93410, -98751, 59016, 23791, -55524, 54804};
    vector<int> upperBound = {-31626, -88080, -95681, 64281, 31731, -48346, 56894};
    int n = 23064;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 25794;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> lowerBound = {-201772, -840721, 121913, -890407, -140819, -507346, 416353, 534525, -809, -410292, -990500, -655411, -330417, -42563, -270478, -331838, 631340, 850831, -897429, 298704, 669066, -588219, -640500, -738197, -210630, 324961, -782599, -123214, 335184, 790505, -342622, -715400, 749707, 474067, -506315, 894653, -646689, -190668, 881568, 22949, -554975, -904271, 832139, -169493, 630381, 683141};
    vector<int> upperBound = {-201765, -840718, 121921, -890398, -140818, -507345, 416355, 534532, -803, -410283, -990500, -655409, -330415, -42563, -270475, -331832, 631345, 850838, -897428, 298707, 669075, -588216, -640495, -738191, -210621, 324962, -782596, -123205, 335192, 790508, -342613, -715399, 749712, 474067, -506309, 894655, -646689, -190668, 881577, 22953, -554966, -904265, 832140, -169490, 630385, 683150};
    int n = 47;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -588219;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> lowerBound = {-4836113, 5835889, 3210092, 962188, 6357097, 971135, 2218399, 3251535, 7386788, 9750414, 3839756, 2036160, 4515868, 7221768, 1908596, -7231791, 7973312, -5429348, -8009784, -9503889, 8642364, -1283629, -787997, -1677783, -2181055, -8012317, 5727778, -2461681, 6062400, -2299103, 9162275, -6688297, -678677, -2103133, -733150, 3350920, -5839348, 3297352, 2274783, 7800256, 3079513, 5615873};
    vector<int> upperBound = {-4766561, 5857329, 3217086, 1022281, 6401638, 1012660, 2295879, 3297382, 7447267, 9762739, 3875110, 2050940, 4529202, 7312546, 1993639, -7182569, 8043738, -5392708, -7973945, -9463588, 8728058, -1226583, -728282, -1613455, -2149927, -7989966, 5814306, -2425412, 6099036, -2269185, 9261176, -6602835, -580331, -2059333, -701539, 3397608, -5788582, 3365210, 2324487, 7887922, 3101660, 5620734};
    int n = 376380;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -4780321;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> lowerBound = {-49234222, 11169825, 12038501, 60082927, -15215982, 78597670, -77881014, 43585086, -15671583, -61866134, 63972266, 39911754, 44953769};
    vector<int> upperBound = {-49233321, 11170101, 12038822, 60083232, -15215268, 78598481, -77880579, 43585404, -15671204, -61865256, 63972861, 39912169, 44954031};
    int n = 3614;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 12038526;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> lowerBound = {538321916, -689731366, 454771707, 2055025, 543131390, 161203629, 159060512, 781433620, 912669145, -292617154, -77729378, -768759638, 886050888, -635963786, 58392177, -988465479, -256451905, 156516078, 27417155, -606117739, 208192002, 691405454, -724295971, -201246669, 610818573, -335812782, 536191246, -965872438, 735273818, -556948536, -660019560, 310033090};
    vector<int> upperBound = {538328488, -689723110, 454776568, 2063464, 543138989, 161208818, 159068943, 781439391, 912676662, -292612312, -77726297, -768758613, 886057703, -635961654, 58401576, -988462241, -256451093, 156525708, 27421164, -606110925, 208199719, 691414553, -724289760, -201237667, 610826865, -335808590, 536194626, -965871261, 735274035, -556943767, -660018038, 310039700};
    int n = 57247;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2055185;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> lowerBound = {-909178048, -660889327, -1196849142, 1155293058, 542452752, 1560390648, -422586009, -794133012, -735440043, 232178708, -1029833910, -1477040819, 82704669, 1901204263, -405220410, -148547439, -351545686, -472040482, 578641950, -111531759, 293176057, -1617751148, -962145925, 804804001, -105999462, 463884154, -782641055, -1897342659, -1102255284, -312673986, -1948540973, -1567872146, 81892427, -1432247460, -427337879, -187807550, -507744895, 773149004, 935319207, 850149545, 540682159};
    vector<int> upperBound = {-761147059, 601593256, 688734416, 1590600986, 1247134734, 1605786106, 82265992, 618282297, 281341438, 771578060, 849748309, -1229953810, 1417531625, 1991504901, 308098702, 682268499, 860712832, 752407016, 1483196887, 50218060, 427352074, -306133378, 102661642, 1254430184, 1890974178, 585054231, -522199785, -1209923650, 179638677, 523521187, -1774392226, 64170285, 1860240258, -1084096719, 809607378, 1173866211, 266055415, 1229830817, 1320716582, 1989935983, 783352617};
    int n = 889718319;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1461109301;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> lowerBound = {163915444, 756037284, -1294541118, 185286048, -449930293, -1288770528, -904938119, -1220977849, -1326332078, 341858123, 150604025, 452187481, -79832203, -1712129215, -207297885, -861863173, -653372853, -360973696, 838189780, -722014819, -1748052607, -1787598628, -1939076671, -645836021, -1753994168, -1553459459, 31842896, 17721220, 196841670, 1718948072, -51499025, 1011419194, 913693244, 1020335131, -1499573803, 1098312430, -644159205, -1802911611, -1885525988};
    vector<int> upperBound = {1414026705, 1084916730, -612551585, 1571784234, 557022199, -183261909, 352601054, 453695143, -199552055, 1198754344, 1221406876, 1532078438, 1523648431, -1296467698, 891116787, 217758608, 565577473, 906190618, 1063077639, 296815438, -503967695, -1423385576, -906779797, 1040205509, -626777003, -519218426, 1121029633, 1372591233, 1385390666, 1900087531, 1582133396, 1158576770, 1118785920, 1303957462, -19094257, 1475509802, -634750820, -1500449884, 112580815};
    int n = 448031488;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1744854698;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> lowerBound = {-906223108, -199346937, 1091565707, -1032193712, -993742853, 1044045060, 519719979, -1117688378, -1100478815, 396337472, 454313795};
    vector<int> upperBound = {-809432260, 951409267, 1925253916, -697987685, 366272546, 1144862322, 1869974944, -380205687, -323155176, 1568254767, 1299991395};
    int n = 58990784;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1079588205;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> lowerBound = {-156815210, -838930843, 539042779, 625135587, -634797978, -1562924851, -1368108669};
    vector<int> upperBound = {526658091, 156523276, 1539551044, 896902268, 955408445, -263089377, 585273231};
    int n = 1748788808;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -673725185;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> lowerBound = {-1453768337, -254891564, -354611180, -498397140, -115837366, -185251455, 1423106204, 818045562, -447758435, -1627443864, -1303629928, 101297104, -102261205, -1548881575, -765134205, -755386624, -569944554, 1040862692, -1060776952, -1692586940};
    vector<int> upperBound = {-922015139, 792620694, 276617281, 961960312, 31408852, 1464404629, 1684692982, 1981898456, 1279286563, -1014014241, 522261660, 1813706615, 1112996296, 138698102, 1031671354, 726881239, 1247880475, 1608773283, -689225126, -357771713};
    int n = 1620020831;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1201257963;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> lowerBound = {6, 3, 8, 9, 5, 0, 3, 7, 2, 9, 6, -1, 0, 6, 0, 5, 4, 5, 2, 2, 1, 6};
    vector<int> upperBound = {6, 3, 8, 9, 5, 0, 3, 7, 2, 9, 6, -1, 0, 6, 0, 5, 4, 5, 2, 2, 1, 6};
    int n = 3;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> lowerBound = {35, 9, -10, 1, 8, -3, 61, 20, 13, 32, 56, -7, 47, 18};
    vector<int> upperBound = {94, 45, -6, 55, 100, 55, 62, 29, 22, 78, 99, 63, 87, 77};
    int n = 584;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> lowerBound = {172, -3, 4, 622, 851, 17, 68, -3, 313, 583, 140, 342, 569, 141, 63, -3, 118, 36, 652, 168, 135, 213, -8, 68, 86, 472, 49, 53, 68, 469, 344, 689, 401, 148};
    vector<int> upperBound = {984, 790, 982, 777, 875, 992, 722, 941, 619, 963, 903, 907, 961, 360, 847, 933, 940, 153, 751, 754, 854, 928, 591, 899, 961, 817, 65, 601, 1000, 618, 405, 931, 439, 997};
    int n = 5774;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> lowerBound = {4617, 4506, 3032, 6296, 8186, 1427, 5869, 4729, 5924, 3516, 3827, 4970, 8759, 9034, 1540, 2363, 4498, 2914, 3107, 7232, 1431, 2691, 5345, 3536, 1162, 6470, 717, 7534, 6876, 8012, 7568, -79, 2904, 8363, 7119, 8456, 4505, 6181, 5789};
    vector<int> upperBound = {5545, 5171, 3508, 6482, 8936, 1619, 6816, 4823, 6885, 3992, 4099, 5834, 9307, 9702, 2527, 2371, 5441, 3873, 3227, 8224, 2117, 3231, 6232, 3823, 1298, 6514, 1210, 8085, 7089, 8825, 8499, 281, 3464, 8528, 7870, 9243, 4907, 6457, 6311};
    int n = 5339;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3578;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> lowerBound = {32052, 72683, 3926, 62372, 56944, 63074, 32099, 8201, 62474, 21323, 36284, 32282, 70945, 52411, 50250, 17435, 91621, 82798, 86309, 17756, 10645, 13413, 18221, 79742, 81101, 41081, 31792, 48370, 44277, 49719, 15257, 72666, 9135, 48548, 25409, 1639, 28250, 31405, 41171, 20536, 85665, 53599, 50799};
    vector<int> upperBound = {32684, 73019, 3989, 62615, 57588, 63741, 32162, 9118, 63170, 22210, 36587, 32992, 71324, 53375, 50653, 17862, 92199, 82909, 86477, 18102, 11333, 14376, 18904, 80237, 81109, 41559, 32267, 49114, 44763, 50202, 16241, 73261, 9310, 48713, 26255, 1641, 28643, 32185, 41538, 21312, 86401, 53884, 51772};
    int n = 15623;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 52794;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> lowerBound = {638864, 516297, 915175, 948228, 9492, 586538, 693502, 521049, 195085, 312225, 110692, 905664};
    vector<int> upperBound = {645214, 520591, 922689, 957448, 13523, 588737, 701070, 524407, 195511, 320435, 115529, 909926};
    int n = 31387;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 642889;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> lowerBound = {5240171, 6672255, 5624981};
    vector<int> upperBound = {5246672, 6682225, 5625409};
    int n = 15484;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6680808;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> lowerBound = {27376211, 46923877, 27353853, 31460980, 8442437, 5918796, 65845456, 4487693, 56763282, 20463427, 39833859, 31243940, 1542503, 23806346, 10303393, 32023300, 11986114, 9452, 5707373, 23132078, 5550939, 5792451, 15724266, 67189805, 32345025, 6000474, 9661891, 13939353, 4713990, 12469656, 20920500, 32625379, 5404923, 1345440, 22609000, 39499381, 35858319, 21944531, 2499059, 7128506, 17661211, 7646647, 35231962, 33037604, 51631443, 6098891, 76771079, 44765443, 13350948, 21551261};
    vector<int> upperBound = {91062511, 84957758, 66962172, 93881271, 70344617, 92915371, 93230349, 99736910, 83535820, 36476125, 96621915, 79634174, 88590040, 43237998, 70402563, 48528487, 94325620, 97179151, 74557917, 62145314, 18511037, 97425361, 66443959, 96522197, 64547223, 93250075, 13366487, 88347594, 92634899, 93725190, 92445896, 69571696, 88126585, 68931592, 79939258, 44544209, 54240158, 91936570, 80919946, 60902106, 83548671, 96359688, 72698987, 91912813, 96359136, 40736526, 88053888, 83058076, 54154669, 69614447};
    int n = 497447201;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 27681073;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> lowerBound = {859558895, 85614046, 725716557, 92793907};
    vector<int> upperBound = {860173933, 85704336, 725836418, 93382737};
    int n = 1271767;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 860031678;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> lowerBound = {-1500000000};
    vector<int> upperBound = {1500000000};
    int n = 1500000091;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> lowerBound = {1, 3};
    vector<int> upperBound = {4, 5};
    int n = 3;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> lowerBound = {-2000000000, 0, -2000000000, -1234567, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000};
    vector<int> upperBound = {2000000000, 0, 2000000000, 2000000000, 2000000000, 2000000000, 57483902, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    int n = 1999938475;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1958334616;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> lowerBound = {-2000000000, -2000000000, -1999999999, -2000000000};
    vector<int> upperBound = {2000000000, 2000000000, 2000000000, 1999999999};
    int n = 2000000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1500000000;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> lowerBound = {1, 2, 3, 1, 3, 1};
    vector<int> upperBound = {4, 5, 3, 6, 3, 1000};
    int n = 700;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 685;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> lowerBound = {-2000000000};
    vector<int> upperBound = {2000000000};
    int n = 2333323;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1997666677;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> lowerBound = {-2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000};
    vector<int> upperBound = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    int n = 2000000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1666666667;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> lowerBound = {-2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000};
    vector<int> upperBound = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    int n = 2000000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1750000000;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> lowerBound = {1, 5};
    vector<int> upperBound = {3, 7};
    int n = 4;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> lowerBound = {1999999999, 1999999997, 15, 1999999998, -10000, -1999999999, 1000, -1000, 34, 1999999999, 1999999997, 15, 1999999998, -10000, -1999999999, 1000, -1000, 34, 1999999999, 1999999997, 15, 1999999998, -10000, -1999999999, 1000, -1000, 34};
    vector<int> upperBound = {1999999999, 1999999999, 51, 1999999999, 200000, -1999999997, 1000000000, 1999999, 34543, 1999999999, 1999999999, 51, 1999999999, 200000, -1999999997, 1000000000, 1999999, 34543, 1999999999, 1999999999, 51, 1999999999, 200000, -1999999997, 1000000000, 1999999, 34543};
    int n = 193969;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 13662;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> lowerBound = {1, 1};
    vector<int> upperBound = {1000000, 1000000};
    int n = 50000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 25001;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> lowerBound = {100, 1000, -1000};
    vector<int> upperBound = {10000000, 10000000, -1};
    int n = 2000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1050;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> lowerBound = {-1500000000, -2000000000};
    vector<int> upperBound = {1500000000, 2000000000};
    int n = 1999999999;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -750000001;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> lowerBound = {-2000000000, -2000000000};
    vector<int> upperBound = {2000000000, 2000000000};
    int n = 1000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1999500000;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> lowerBound = {-2000000000};
    vector<int> upperBound = {2000000000};
    int n = 2000000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> lowerBound = {-999888777, -99898, -99, 8};
    vector<int> upperBound = {1000000000, 12457, -27, 100};
    int n = 1000100100;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 98801;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> lowerBound = {-15000000, -20};
    vector<int> upperBound = {20, 1500000};
    int n = 15000030;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> lowerBound = {-2000000000, -2000000000, -2000000000, -2000000000};
    vector<int> upperBound = {2000000000, 2000000000, 2000000000, 2000000000};
    int n = 2000000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1500000000;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> lowerBound = {-1000000000, -100000000, -1000000, -100000};
    vector<int> upperBound = {100000000, 1000000000, 1000000, 100000000};
    int n = 100000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -900000000;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> lowerBound = {1, 3, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> upperBound = {4, 5, 2000000000, 1999999999, 1999999998, 1999999997, 1999999996, 1000000000, 500000000, 32947235, 1247869823, 54878453};
    int n = 2000000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 239021794;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> lowerBound = {-1000000, 0};
    vector<int> upperBound = {2000000, 0};
    int n = 2001101;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1001100;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> lowerBound = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -2000000000};
    vector<int> upperBound = {2, 34, 4, 4, 5342, 32, 32, 5, 34, 5324, 5, 435, 321, 4312, 5, 1466, 434334, 6543, 434343, 36, 1, 65, 14435435, 324, 4343, 4323243, 32424243, 2342342, 34, 2, 253, 43, 25, 43, 5642, 5, 34, 434343, 34, 3, 4, 434343, 4, 4, 4, 4, 4, 34444444, 444444, 2000000000};
    int n = 2000000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> lowerBound = {-2000000000, -2000000000, -2000000000, -2000000000, -2000000000};
    vector<int> upperBound = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    int n = 2000000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1600000000;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> lowerBound = {1, 3};
    vector<int> upperBound = {10, 7};
    int n = 9;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> lowerBound = {-2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000};
    vector<int> upperBound = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    int n = 2000000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1875000000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> lowerBound = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    vector<int> upperBound = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int n = 1999999999;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -600000001;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> lowerBound = {-2000000, -2000000, -2000000, -2000000, -2000000, -2000000, -2000000, -2000000, -2000000, -2000000};
    vector<int> upperBound = {2000000, 2000000, 2000000, 2000000, 2000000, 2000000, 2000000, 2000000, 2000000, 2000000};
    int n = 19999999;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> lowerBound = {100, 200, 300, 400, 500, 600, -1000000000};
    vector<int> upperBound = {100, 200, 300, 400, 500, 600, 1000000000};
    int n = 2000000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 999999994;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> lowerBound = {1, 1, 1, 1, 1};
    vector<int> upperBound = {3, 1, 1, 1, 1};
    int n = 5;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
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
    vector<int> lowerBound = {-1999999999, -1999999999, -1999999999, -1999999999, -1999999999, -1999999999, -1999999999, -1999999999, -1999999999, -1999999999, -1999999999, -1999999999, -1999999999, -1999999999, -1999999999};
    vector<int> upperBound = {1999999999, 1999999999, 1999999999, 1999999999, 1999999999, 1999999999, 1999999999, 1999999999, 1999999999, 1999999999, 1999999999, 1999999999, 1999999999, 1999999999, 1999999999};
    int n = 1999999998;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1866666666;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> lowerBound = {1, 1};
    vector<int> upperBound = {3, 3};
    int n = 2;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> lowerBound = {1, 3};
    vector<int> upperBound = {5, 7};
    int n = 9;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> lowerBound = {-2000000000, -1000000000, -100000000};
    vector<int> upperBound = {2000000000, -100, 2000000000};
    int n = 90000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1910000000;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> lowerBound = {-2000000000, -1999999999, -1999999998, -1999999997};
    vector<int> upperBound = {2000000000, 1999999999, 1999999998, 1999999997};
    int n = 2000000000;
    UnionOfIntervals* pObj = new UnionOfIntervals();
    clock_t start = clock();
    int result = pObj->nthElement(lowerBound, upperBound, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1499999999;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15533368&rd=8074&pm=4823
********************************************************************************
#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <map>
 
using namespace std;
 
class UnionOfIntervals {
public:
  int nthElement(vector <int> lowerBound, vector <int> upperBound, int n)
  {
    int l=lowerBound.size();
    int i;
    long long min=2000000000,max=-2000000000,mid;
    for (i=0;i<l;i++) {
      if (lowerBound[i]<min) min=lowerBound[i];
      if (upperBound[i]>max) max=upperBound[i];
    }
    while (min<=max) {
      mid=(min+max)/2;
      long long t=0;
      for (i=0;i<l;i++)
        if (mid>=lowerBound[i])
        if (mid<=upperBound[i])  t+=mid-lowerBound[i]+1;
          else t+=upperBound[i]-lowerBound[i]+1;
      if (t>n) max=mid-1;
      else min=mid+1;
    }
    return min;
  }
};

********************************************************************************
*******************************************************************************/