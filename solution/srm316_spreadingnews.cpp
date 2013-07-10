/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6538
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

class SpreadingNews {
public:
    int minTime(vector<int> supervisors);
};

int SpreadingNews::minTime(vector<int> supervisors) {
    int ret;
    return ret;
}


int test0() {
    vector<int> supervisors = {-1};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
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
    vector<int> supervisors = {-1, 0, 0};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
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
    vector<int> supervisors = {-1, 0, 0, 2, 2};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
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
    vector<int> supervisors = {-1, 0, 0, 1, 1, 2, 2, 3, 4};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> supervisors = {-1, 0, 1, 2, 3};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> supervisors = {-1, 0, 1, 2, 3, 3, 3};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> supervisors = {-1, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7, 8, 12, 13, 14, 16, 16, 16};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> supervisors = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> supervisors = {-1, 0, 1, 0, 3, 2, 3, 2, 1, 4, 8, 6, 5, 10, 6, 14, 11, 10, 13, 14, 15, 12, 5, 9, 21, 24, 18, 24, 27, 9, 16, 15, 11, 20, 18, 25, 13, 19, 19, 12, 22, 36, 40, 29, 37, 39, 20, 31, 34, 7};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
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
    vector<int> supervisors = {-1, 0, 0, 1, 2, 2, 5, 1, 3, 5, 7, 6, 10, 12, 6, 4, 13, 13, 4, 3, 14, 7, 16, 15, 16, 18, 10, 20, 19, 12, 24, 30, 28, 9, 15, 27, 33, 36, 20, 34, 34, 31, 35, 19, 35, 33, 29, 43, 8, 29};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> supervisors = {-1, 0, 0, 2, 2, 1, 0, 6, 1, 8, 3};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> supervisors = {-1, 0, 1, 0, 2, 0, 3, 4, 7, 3, 5, 4, 3, 12, 12, 4, 5, 5, 10, 16, 1, 13, 7, 21, 2, 23, 8, 1, 16, 28, 9, 11, 24, 16, 23, 13, 28, 24, 2, 24, 31, 40, 8, 39, 25, 7, 25, 20, 41, 23};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> supervisors = {-1, 0, 1, 1, 2, 0, 0, 6, 3, 7, 9, 10, 9, 7, 6, 6, 12, 16, 10, 17, 1, 14, 20, 5, 21, 12, 5, 16, 21, 28, 22, 20};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> supervisors = {-1, 0, 1, 1, 3, 1, 0, 4, 6, 4, 7, 8, 9, 11, 10, 5, 2, 0, 16, 15, 10, 20, 10, 11, 22, 20};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> supervisors = {-1, 0, 1, 2, 3, 4, 5, 6, 2, 4, 5, 7, 9, 4, 10, 8, 14, 3, 1, 8, 6, 7, 4, 22, 14, 22, 2, 5, 17, 10, 27, 8, 10, 18, 18, 5, 24, 22, 20, 12};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> supervisors = {-1, 0, 0, 0, 3, 0, 2, 5, 0, 1, 8, 9, 4, 6, 6, 5, 1, 10, 10, 1, 7, 4, 5, 21, 17, 4, 18, 7, 6, 5, 8, 8, 30, 9, 13, 15, 1, 31, 35, 14, 34, 24, 23, 4, 21, 27, 39, 21, 21, 25};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> supervisors = {-1, 0, 1, 2, 2, 2, 4, 4, 6, 0, 6, 2, 0, 1, 13, 10, 9, 9, 14, 16, 3, 20, 4, 9, 16, 6, 13, 26, 5, 0, 4, 18, 18, 16, 24, 19, 24, 18, 9, 7, 11, 14, 3, 34, 21, 25, 41, 1, 10, 47};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> supervisors = {-1, 0, 1, 0, 1, 0, 3, 4, 5, 3, 2, 5, 10, 5, 4, 1, 14, 1, 12, 1, 10, 11, 2, 22, 15, 14, 16, 14, 6, 9, 20, 9, 28, 25, 10, 32, 13, 21, 31, 9, 34, 37, 5, 23, 17, 22, 34, 33, 36, 32};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> supervisors = {-1, 0, 1, 0, 3, 4, 4, 3, 6, 8, 8, 5, 10, 2, 10, 12, 12, 10, 2, 4, 14, 3, 5, 21, 14, 6, 10, 17, 12};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> supervisors = {-1, 0, 0, 1, 0, 1, 4, 0, 2, 6, 4, 7, 9, 5, 9, 4, 13, 7, 0, 8, 16, 13, 20, 22, 2, 21, 11, 8, 27, 7, 8, 27, 4, 24, 12};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> supervisors = {-1, 0, 1, 1, 2, 3, 5, 4, 5, 5, 4, 7, 9, 9, 9, 13, 1, 2, 2, 15, 10, 16, 18, 2, 5, 20, 0, 0, 9};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> supervisors = {-1, 0, 1, 1, 3, 0, 3, 3, 2, 8, 2, 3, 6, 10, 4, 8, 3, 14, 13, 18, 3, 13, 14, 8, 8, 3, 0, 9, 26, 23, 17, 3};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> supervisors = {-1, 0, 1, 1, 2, 3, 0, 1, 7, 5, 7, 5, 1, 0, 9, 5, 2, 9, 3, 0, 10, 8, 18, 6, 1, 15, 6, 7, 14, 28, 17, 6, 14, 2, 10, 29, 32, 1, 34, 9, 7, 7, 1, 27, 8, 32, 13, 13, 31, 38};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> supervisors = {-1, 0, 0, 0, 3, 1, 0, 3, 3, 2, 4};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> supervisors = {-1, 0, 0, 1, 0, 0, 5, 3, 5, 5, 8, 1, 1, 3, 7, 0, 10, 4, 15, 11, 9, 19, 17, 18, 0, 10, 3, 5, 15, 28, 7, 11, 1, 3, 9, 1, 28, 32, 8, 6, 39, 0, 29, 30, 17, 9, 10, 40, 32, 37};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> supervisors = {-1, 0, 0, 0, 0, 4, 0, 4, 3, 6, 6, 9, 11, 4, 10, 12, 12, 4, 4, 11, 2, 1, 16, 7, 8, 24, 12, 9, 14, 4, 17, 3, 8, 19, 6, 25, 25, 12, 17, 13, 38, 10, 11, 24, 36, 16, 38, 26, 43, 19};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
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
    vector<int> supervisors = {-1, 0, 1, 0, 3, 3, 4, 5, 3, 3, 5, 2, 0, 10, 1, 4, 10, 2, 15, 0, 13, 18, 16, 16, 18, 19, 14, 14, 1, 13, 6, 15, 15, 25, 30, 26, 21, 26, 11, 0, 17, 17, 12, 21, 15, 37, 38, 9, 11, 6};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> supervisors = {-1, 0, 1, 2, 1, 1, 2, 1, 6, 1, 1, 3, 9, 1, 1, 4, 14, 12, 3, 14, 14, 20, 13, 16, 16, 17, 0, 22, 2, 9, 1, 17};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> supervisors = {-1, 0, 1, 1, 3, 2, 4, 0, 4, 1, 9, 7, 6, 10, 11, 3, 14, 15, 3, 16, 8, 8, 15, 6, 18, 5, 1, 20, 16, 16, 16, 24, 5, 2, 1, 34, 30, 33, 14, 19, 19, 29, 20, 8, 14, 15, 33};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> supervisors = {-1, 0, 0, 1, 0, 1, 4, 3, 1, 4, 9, 10, 11, 9, 3, 1, 13, 13, 14, 11, 13, 5, 19, 8, 14, 18, 19, 17, 9, 5, 12, 22, 29, 30, 30, 11, 21, 34, 12, 11, 0, 0, 17, 26, 29, 16, 36, 28, 46, 25};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> supervisors = {-1, 0, 0, 0, 1, 3, 1, 1, 1, 7, 7, 0, 6, 5, 12, 11, 8, 10, 2, 13, 19, 4, 10, 17, 12, 10, 19, 18, 3, 24, 18, 15, 19, 7, 23, 4, 2, 3, 28, 4, 34, 27, 12, 42, 16, 13, 13, 8, 15, 13};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> supervisors = {-1, 0, 0, 0, 0, 2, 5, 1, 4, 2, 9, 0, 1, 2, 8, 7, 9, 8, 9, 1, 2, 5, 1, 12, 0, 9, 11, 25, 9, 20, 1, 5, 10, 26, 11, 18, 8, 22, 10, 0, 33, 17, 17, 40, 23, 13, 20, 41};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> supervisors = {-1, 0, 1, 1, 1, 1, 1, 5, 2, 7, 5, 6, 0, 8, 13, 6, 8, 10, 12, 16, 12, 9, 12, 15, 10, 10, 18, 20, 16, 9, 2, 30, 0, 27, 6, 28, 29, 7, 34, 38, 13, 32, 18, 29, 28, 0, 17, 19, 26, 25};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> supervisors = {-1, 0, 1, 1, 1, 4, 4, 6, 7, 6, 3, 5, 9, 8, 12, 8, 2, 15, 11, 5, 10, 18, 13, 17, 1, 20, 25, 14, 27, 13, 5, 22, 5, 2, 14, 3, 21, 24, 27, 22, 13, 34, 38, 33, 26, 4, 13, 38, 12, 48};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> supervisors = {-1, 0, 1, 1, 3, 1, 0, 1, 4, 2, 0, 6, 2, 8, 11, 1, 6, 4, 9, 15, 18, 20, 12, 14, 23, 12, 0, 8, 16, 1, 9, 28, 6, 14, 27, 11, 25, 4, 19, 17, 14, 35, 29, 12, 25, 7, 4, 2, 12, 22};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> supervisors = {-1, 0, 1, 2, 2, 4, 5, 0, 5, 4, 1, 2, 9, 3, 7, 10, 13, 2, 16, 1, 1, 7, 0, 10, 23, 5, 13, 17, 19, 17, 18, 6, 14, 4, 3, 8, 0, 16, 27, 27, 4, 31, 7, 40, 32, 31, 30, 29, 47, 14};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> supervisors = {-1, 0, 1, 1, 0, 0, 5, 3, 3, 1, 7, 1, 6, 6, 4, 7, 10, 11, 12, 14, 15, 14, 13, 6, 6, 9, 3, 5, 7, 13, 12, 8, 11, 3, 25, 17, 20, 1};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> supervisors = {-1, 0, 0, 1, 1, 2, 3, 4, 3, 4, 1, 4, 0, 4, 2, 10, 3, 2, 12, 17, 10, 1, 11, 16, 1, 15, 16, 14, 7, 9, 7, 25, 7, 10, 27, 18, 25, 3, 25, 35, 39, 14, 7, 3, 6, 23, 41, 46, 21, 5};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> supervisors = {-1, 0, 0, 2, 3, 3, 5, 1, 7, 3, 3, 1, 2, 10, 6, 1, 15, 16, 15, 13, 13, 18, 2, 19, 10, 10, 6, 24, 25, 14, 10, 2, 17, 14, 11, 2, 11, 33, 20, 32, 28, 21, 21, 7, 41, 2, 33, 14, 7, 36};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> supervisors = {-1, 0, 1, 0, 3, 3, 3, 2, 4};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> supervisors = {-1, 0, 0, 0, 3, 2, 5, 2, 4, 7};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> supervisors = {-1, 0, 1, 1, 0, 0, 4, 6, 0, 6, 3, 2, 11, 7, 7, 0, 2, 8, 3, 15, 13, 11, 18, 6, 22, 8, 10, 25, 11, 24, 8, 3, 26, 6, 6, 33, 11, 31, 3, 36, 2, 29, 12, 39, 19, 8, 33, 10, 18, 32};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> supervisors = {-1, 0, 1, 1, 3, 4, 1, 5, 1, 6, 0, 8, 5, 1, 8, 12, 15, 1, 17, 5};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> supervisors = {-1, 0, 0, 0, 2, 4, 2, 1, 6, 8, 3, 5, 9, 10, 9, 12, 7, 4, 16, 10, 3};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> supervisors = {-1, 0, 1, 2, 2, 3, 3, 4, 2, 3, 0, 10, 0, 9, 6, 12, 0, 7, 8, 14, 15, 4, 2, 2, 3, 7, 23, 15, 2, 16, 10, 23, 14, 0, 1, 16, 16, 32, 25, 20, 18, 33, 31, 22, 5, 2, 43, 7, 35, 24};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> supervisors = {-1, 0};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> supervisors = {-1, 0, 1, 0, 1, 0, 0, 4, 7, 0, 9, 7, 4, 8, 3, 13, 6, 10, 15, 16, 3, 10, 18, 20, 11, 22, 3, 9, 14, 13, 10, 28, 30, 32, 31, 14, 29, 36, 9, 5, 1, 30, 31, 35, 3, 0, 26, 8, 31, 5};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> supervisors = {-1, 0, 1, 0, 3, 3, 2, 5, 5, 4, 5, 5, 0, 6, 2, 13, 0, 0, 11, 12, 14, 16, 13, 7, 9, 21, 8, 2, 14, 16, 15, 24, 19};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> supervisors = {-1, 0, 0, 1, 3, 0, 0, 0, 2, 6, 3, 1, 9, 7, 9, 3, 9, 1, 0, 15, 14, 14};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> supervisors = {-1, 0, 1, 2, 3, 2, 1, 5, 5, 5, 8, 6, 8, 3, 5, 3, 3, 15, 1, 7, 5, 6, 14, 8, 0, 16, 13, 14, 27, 8, 12, 6, 0, 30, 24, 11, 14, 32, 31, 31, 4, 21, 10, 14, 22, 28, 17, 35, 17};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> supervisors = {-1, 0, 0, 2, 0, 0, 2, 1, 7, 6, 2, 9, 6, 12, 13, 6, 2, 5, 13, 17, 3, 1, 4, 16, 14, 5, 19, 21, 22, 4, 22, 12, 13, 11, 16, 15, 28, 23, 27, 4, 3, 38, 13, 42, 29, 33, 25, 37, 24, 40};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> supervisors = {-1, 0, 1, 1, 2, 1, 1, 0, 6, 3, 6, 4, 4, 2, 1, 2, 1, 1, 1, 0, 17, 0, 5, 9, 13, 17};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> supervisors = {-1, 0, 0, 2, 3, 0, 5, 0, 5, 8, 4};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> supervisors = {-1, 0, 0, 0, 2, 2, 3, 2, 6, 5, 2};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> supervisors = {-1, 0, 1, 2, 2, 1, 0, 0, 1, 0, 8, 9, 6, 1, 10, 13, 13, 2, 10, 8, 0, 2, 20, 17, 16, 20, 8, 13, 17, 24, 13, 18, 0, 31, 5, 23, 19, 19, 37, 2, 17, 40, 29, 23, 39, 30, 22, 22, 25, 11};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> supervisors = {-1, 0, 1, 1, 0, 3, 1, 6, 0, 7, 8, 10, 4, 2, 3, 10, 14, 15, 4, 6, 4, 2, 6, 0, 13, 0, 14, 18};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> supervisors = {-1, 0, 1, 1, 3, 2, 2, 4, 6, 6, 1, 5, 1, 5, 4, 7, 14, 3, 14, 3, 4, 1, 14, 12, 5, 8, 5, 19, 0, 15, 12, 20, 24, 28, 4, 15, 8, 22, 10, 29, 32, 35, 18, 27, 23, 39, 42, 17, 10, 28};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> supervisors = {-1, 0, 0, 1, 0, 1, 0, 1, 1, 5, 1, 10, 10, 10, 9, 2, 10, 5, 3, 4, 3, 2, 21, 21, 7, 16, 6, 3, 12, 7, 22, 15, 23, 15, 4, 0, 24, 31, 27, 34, 31, 18, 41, 18, 41, 35, 39, 3, 23, 39};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> supervisors = {-1, 0, 0, 1, 1, 1, 3, 1, 0, 1, 1, 2, 7, 8};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> supervisors = {-1, 0, 1, 1, 0, 0, 1, 5, 7};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> supervisors = {-1, 0, 0, 1, 2, 4, 5, 6, 0, 8, 1, 7, 7, 9, 5, 4, 9, 0, 13, 2, 12, 15, 21, 12, 2, 8, 22, 3, 9, 5, 29, 28, 7, 9, 8, 2, 13, 35, 12, 24, 34, 3, 31, 25, 35, 26, 22, 23, 0, 28};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> supervisors = {-1, 0, 1, 2, 0, 2, 0, 6, 7, 7, 7, 10, 10, 10, 13, 11, 2, 0, 17, 4, 0, 17, 18, 17, 2, 16, 3, 19, 3, 8, 2, 20};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> supervisors = {-1, 0, 1, 2, 1, 4, 1, 3, 0, 4, 4, 4, 3, 9, 10, 8, 4, 2, 8, 12, 4, 0, 12, 14, 13, 18, 13, 11, 7, 4, 3, 13, 31, 12, 28, 8, 17, 12, 2, 22, 37, 21, 6, 4, 33, 41, 17, 25, 13, 28};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> supervisors = {-1, 0, 1, 0, 3, 2, 3, 3, 6, 3, 1, 2, 6, 7, 5, 1, 5, 16, 4, 6, 11, 10, 1, 15, 23, 7, 1, 26, 3, 19, 0, 24, 11, 32, 18, 7, 18, 10, 20, 4, 31, 19, 30, 36, 18, 9, 43, 5, 17, 42};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> supervisors = {-1, 0, 0, 1, 1, 4, 4, 6, 3, 7, 5, 7, 3, 2, 9, 9, 14, 6, 15, 15, 11, 5, 16, 22, 2, 8, 19, 20, 21, 26, 23, 17, 11, 23, 22, 32, 21, 20, 13, 34, 18, 16, 14};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> supervisors = {-1, 0, 0, 1, 2, 4, 4, 6, 5, 5, 9, 2, 9, 12, 1, 8, 6, 15, 17, 12, 19, 14, 15, 17, 10, 18, 23, 11, 19, 20, 24, 10, 25, 29, 14, 16, 32, 20, 25, 27, 32, 18, 30, 38};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> supervisors = {-1, 0, 0, 2, 2, 1, 4, 1, 6, 3, 7, 7, 11, 11, 9, 5, 13, 13, 12};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> supervisors = {-1, 0, 0, 1, 1, 3, 5, 2, 7, 4, 9, 3, 5, 7, 9, 2, 14, 6, 14, 17, 8, 15, 20, 19, 18, 13, 10, 8, 11, 16, 13, 19, 25, 10};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> supervisors = {-1, 0, 0, 2, 3, 4, 1, 6, 7, 5, 8, 3, 5, 7, 13, 13, 2, 6, 12, 17, 18, 14, 9, 18, 10, 17, 25, 19, 19, 16, 21, 20, 10, 24, 30, 1, 26, 14, 31, 26, 11, 31, 4, 8, 15, 35, 27, 32, 9, 38};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> supervisors = {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> supervisors = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> supervisors = {-1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> supervisors = {-1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> supervisors = {-1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 10, 10, 11, 11, 13, 13, 13, 13, 13, 6, 6, 6, 6, 6, 6, 13};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> supervisors = {-1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 3, 3, 3, 4, 4, 5, 5, 5, 6, 2, 4, 5, 6, 2};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> supervisors = {-1, 0, 0, 0, 2, 2, 5, 5, 1, 8, 9, 10, 11, 10, 13, 14};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> supervisors = {-1, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7, 8, 12, 13, 14, 16, 16, 16};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> supervisors = {-1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 10, 10, 10, 15, 15, 15, 15, 16};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
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
    vector<int> supervisors = {-1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 6, 7, 7, 8, 8, 8, 9, 10, 10, 11, 11, 11, 12};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> supervisors = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 4, 2, 0, 11, 4, 4, 11, 11, 11, 18};
    SpreadingNews* pObj = new SpreadingNews();
    clock_t start = clock();
    int result = pObj->minTime(supervisors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22629915&rd=9996&pm=6538
********************************************************************************
#include<stdio.h>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<math.h>
#include<set>
using namespace std;
int ms[55];
class SpreadingNews
{
public:
int minTime(vector <int> sp) 
{
  vector<int> tmp;
  for(int i=sp.size()-1;i>=0;i--)
  {
    tmp.clear();
    for(int j=i+1;j<sp.size();j++)
      if (sp[j]==i)
        tmp.push_back(ms[j]);
    sort(tmp.begin(),tmp.end());  
    ms[i]=0;    
    for(int j=tmp.size()-1,kol=1;j>=0;j--,kol++)
      ms[i]=max(ms[i],tmp[j]+kol);
  }
  return ms[0];
}
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/