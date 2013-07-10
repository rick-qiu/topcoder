/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11582
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

class PointErasingTwo {
public:
    int getMaximum(vector<int> y);
};

int PointErasingTwo::getMaximum(vector<int> y) {
    int ret;
    return ret;
}


int test0() {
    vector<int> y = {1, 2, 1, 1, 0, 4, 3};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
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
    vector<int> y = {0, 1};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> y = {0, 1, 2, 3, 4};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
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
    vector<int> y = {10, 19, 10, 19};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
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
    vector<int> y = {0, 23, 49, 50, 32, 0, 18, 50, 0, 28, 50, 27, 49, 0};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
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
    vector<int> y = {15, 39};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> y = {49, 40};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
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
    vector<int> y = {39, 39, 42};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
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
    vector<int> y = {8, 9, 8};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> y = {16, 26, 26};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> y = {47, 0, 0};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> y = {49, 32, 49};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> y = {41, 41, 31};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> y = {5, 26, 37};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> y = {1, 42, 38};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> y = {28, 1, 46};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> y = {29, 45, 10};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> y = {23, 10, 16};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> y = {31, 7, 6};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> y = {19, 29, 9, 18, 43, 49, 25, 30, 35, 36, 45, 22, 13, 11, 21, 46, 7, 37, 24, 34, 14, 33, 17, 39, 0, 28, 32, 47, 6, 44, 42, 38, 8, 12, 27, 26, 23, 31, 15, 40, 16, 10, 3, 5, 20, 2, 1, 48, 4, 41};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> y = {17, 1, 22, 16, 9, 34, 4, 44, 46, 26, 30, 18, 32, 39, 5, 12, 14, 45, 24, 0, 10, 49, 13, 27, 40, 48, 35, 23, 29, 25, 42, 6, 8, 20, 47, 38, 19, 28, 15, 37, 33, 21, 7, 11, 3, 41, 2, 43, 31, 36};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> y = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> y = {20, 2, 5, 22, 7, 5, 23, 4, 12, 11, 17, 15, 20, 19, 7, 23, 24, 22, 1, 12, 21, 0, 8, 1, 8, 13, 19, 16, 6, 16, 18, 14, 10, 0, 9, 2, 6, 3, 11, 15, 17, 13, 14, 3, 18, 10, 21, 24, 4, 9};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> y = {13, 9, 15, 3, 13, 17, 23, 16, 7, 14, 0, 12, 19, 14, 15, 16, 5, 20, 11, 18, 24, 6, 23, 7, 2, 8, 12, 4, 0, 10, 20, 2, 17, 6, 10, 18, 22, 24, 21, 1, 21, 1, 4, 5, 22, 11, 9, 3, 8, 19};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> y = {0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 14, 15, 15, 15, 16, 16};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> y = {1, 7, 7, 2, 4, 14, 16, 0, 13, 16, 6, 9, 1, 13, 3, 8, 11, 13, 8, 5, 0, 6, 12, 15, 5, 11, 4, 5, 8, 9, 15, 4, 6, 1, 11, 9, 2, 15, 0, 10, 10, 12, 14, 7, 2, 14, 3, 12, 10, 3};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> y = {5, 1, 3, 15, 11, 10, 14, 0, 6, 6, 12, 4, 0, 11, 7, 0, 14, 11, 7, 5, 9, 15, 8, 12, 1, 5, 14, 16, 9, 3, 8, 6, 2, 1, 16, 15, 2, 13, 7, 13, 10, 13, 4, 4, 8, 9, 2, 10, 3, 12};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> y = {48, 48, 48, 48, 49, 49, 49, 49, 49, 48, 48, 48, 49, 49, 48, 48, 48, 48, 49, 49, 49, 49, 48, 49, 49, 49, 49, 49, 48, 48, 49, 49, 48, 49, 48, 49, 48, 48, 48, 49, 48, 49, 49, 49, 48, 49, 49, 49, 48, 49};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> y = {32, 7, 32, 7, 7, 7, 32, 7, 7, 7, 7, 7, 32, 7, 32, 7, 7, 32, 32, 32, 7, 7, 32, 7, 7, 7, 7};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
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
    vector<int> y = {10, 50, 10, 50, 50, 50, 10, 10, 10, 10, 50};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> y = {36, 36, 1, 1, 36, 36, 1, 1, 36, 36, 36, 1, 36, 36};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> y = {29, 29, 29, 29, 4, 50, 10, 10, 10, 10, 50, 10, 4, 50, 10, 10, 10, 4, 10, 29, 29, 10, 4, 4, 29, 29, 10, 4, 29, 10, 4, 29, 10, 29, 50, 50, 10, 29, 10, 50, 4, 4, 29, 29, 29, 4, 50, 10, 4, 4};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> y = {35, 27, 9, 9, 27, 9};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> y = {15, 45, 36, 28, 28, 36, 28, 15, 28, 36, 45, 15, 45, 36, 36, 36, 15, 45, 36, 45, 45, 15, 36, 36, 36, 28, 36, 28, 15, 36, 15, 15, 36, 15, 28, 28, 28, 45, 36, 36, 36, 45, 28, 45, 28, 28};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> y = {19, 48, 19, 27, 0, 48, 48, 48, 27, 27, 19, 19, 27, 0, 27, 0, 27, 0, 19, 27, 19, 19, 19, 0, 0, 27, 19, 19};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> y = {3, 27, 13, 45, 13, 45, 3, 27, 24, 25, 27, 24, 34, 24, 13, 45, 3, 45, 47, 45, 24, 24, 3, 34, 47, 3, 25, 47, 25, 34, 3, 24, 13, 25, 45, 3, 34, 45, 47, 3, 3, 13, 25, 13, 47, 13, 27, 34, 27, 13};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> y = {16, 46, 37, 46, 46, 39, 39, 37, 34, 7, 7, 37, 46, 46, 37, 37, 39, 46, 40};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
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
    vector<int> y = {37, 33, 14, 39, 28, 45, 45, 33, 14, 14};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> y = {32, 21, 21, 32, 46, 21, 32, 18, 32};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> y = {39, 17, 11, 17, 23, 21, 4, 17, 16, 14, 4, 17, 14, 0, 14, 12, 39, 39, 16, 17, 41, 21, 39, 16, 50, 10, 4, 12, 21, 28, 12, 28, 12, 41, 14, 12, 17, 21, 35, 21, 21, 23, 4, 23, 14, 0, 28, 50, 28, 0};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> y = {1, 35, 0, 16, 34, 40, 31, 37, 31, 19, 19, 19, 31, 35, 26, 22};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
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
    vector<int> y = {39, 29, 22, 37, 43, 27, 43, 35, 48, 43, 35, 25, 25, 15, 11, 18, 15, 41, 43, 29, 48, 43, 25, 43, 39, 25, 27, 43, 18, 40, 48, 36, 41, 43, 40, 18, 48, 11, 3, 18, 40, 22, 37, 35};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> y = {22, 19, 21, 25, 22, 16, 48, 21, 7, 20, 32, 39, 48, 7, 21, 39, 7, 38, 19, 39, 20, 39, 20, 19, 39, 10, 10, 25, 10, 16, 38, 12, 27, 25, 48, 48, 12, 25, 25, 11};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> y = {0, 50};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> y = {50, 0};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> y = {0, 25, 13, 38, 7, 32, 19, 44, 4, 29, 16, 41, 10, 35, 22, 47, 2, 27, 15, 40, 9, 34, 21, 46, 6, 31, 18, 43, 12, 37, 24, 49, 1, 26, 14, 39, 8, 33, 20, 45, 5, 30, 17, 42, 11, 36, 23, 48, 3, 28};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> y = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> y = {6, 5, 25, 47, 0, 23, 26, 9, 49, 17, 20, 16, 15, 34, 25, 14, 12, 23, 38, 30, 17, 24, 43, 38, 13, 16, 24, 33, 27, 24, 16, 26, 23, 15, 7, 14, 35, 16, 38, 20, 31, 27, 19, 12, 19, 30};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> y = {5, 18, 11, 20, 40, 8, 40, 0, 37, 20, 31, 29, 7, 4, 20, 24, 20, 7, 31, 6, 9, 15, 28, 18, 49, 6, 28, 22, 17, 18, 8, 9, 14, 3, 10, 13, 18, 7, 14, 18, 7, 42, 20, 20, 23};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> y = {11, 17, 27, 38, 3, 23, 20, 30, 3, 42, 41, 8, 10, 23, 16, 45, 27, 38, 30, 43, 39, 19, 18, 3, 46, 23, 40, 23, 23, 50};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> y = {44, 2, 31, 49, 44, 48, 44, 45, 16, 45, 46, 48, 45, 42, 31, 47, 49, 33, 18, 44, 50, 45, 44, 44, 23, 41, 7, 37, 34, 48, 44, 46, 47, 37, 44, 45, 23, 9, 47, 48, 49, 46, 44, 49};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> y = {39, 18, 38, 8, 30, 39, 27, 12, 11, 18, 23, 47, 17, 6, 26, 39, 18, 33, 30, 32, 19, 16, 24, 25, 41, 12, 29, 12, 12, 20, 8, 29, 48, 3, 28, 24, 26, 31, 3, 36, 44, 10, 3, 40, 31, 50, 50, 3};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> y = {34, 40, 36, 17, 8, 23, 3, 24, 24, 31, 48, 15, 0, 17, 20, 22, 26, 26, 22, 13, 24, 12, 10, 23, 31, 31, 35, 16, 22, 33, 32, 2, 19, 38, 30, 13, 15, 27, 44, 37, 6, 26, 30, 1, 15};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> y = {12, 3, 17, 40, 12, 11, 12, 12, 41, 12, 0, 10, 11, 38, 11, 24, 11, 11, 12, 11, 26, 12, 28, 11, 12, 11};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> y = {19, 11, 19, 7, 38, 9, 19, 19, 42, 19, 26, 14, 15, 19, 31, 19, 19, 19, 19, 24, 19, 17, 17, 19, 19, 12, 20, 19, 11, 45, 19, 19, 19, 19, 31, 19, 19, 8, 19, 10, 31, 19, 19, 19, 4, 39, 19, 19, 36, 19};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> y = {3, 50, 10, 5, 35, 31, 11, 49, 49, 9, 44, 18, 9, 16, 26, 41, 33, 4, 15, 20, 10, 18, 6, 8, 21, 13, 46, 9, 32, 11, 8, 15, 10, 22, 23};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> y = {34, 50, 32, 29, 22, 50, 23, 20, 30, 22, 15, 24, 23, 33, 2, 19, 33, 45, 19, 14, 35, 20, 31, 20, 20, 43, 22, 18};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> y = {1, 2, 1, 1, 0, 4, 3};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> y = {0, 1, 2, 3};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> y = {0, 1, 2, 23, 12, 0, 34, 9, 8, 7, 5, 3, 2, 1, 12, 32, 5, 6, 8, 37};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> y = {0, 1, 1, 1, 1, 0, 0, 0, 10, 10, 0, 0, 0, 0, 0, 20, 20, 20, 20, 20};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> y = {5, 1, 2, 0};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> y = {0, 1, 2, 3, 4};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> y = {0, 9, 8, 7, 6};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> y = {0, 6, 7, 7, 10, 10, 10, 15};
    PointErasingTwo* pObj = new PointErasingTwo();
    clock_t start = clock();
    int result = pObj->getMaximum(y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22881763&rd=14547&pm=11582
********************************************************************************
/*
 * Bidhan Roy <mail2bidhan@gmail.com>
 * */
 
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
#define linf (i64(1)<<58)
#define eps 1e-9
#define pb push_back
#define clr clear()
#define all(x) x.begin(),x.end()
#define sz(x) int(x.size())
#define rev reverse
#define mem(x,val) memset((x),(val),sizeof(x));
#define read(x) freopen(x,"r",stdin);
#define rite(x) freopen(x,"w",stdout);
#define mp make_pair
#define on(bit,pos) ((bit)|(__typeof(bit))1<<(pos-1))
#define off(bit,pos) (bit)& ~(1<<(pos-1))
#define check(bit,pos) ((bit)==((bit)|(__typeof(bit))1<<(pos-1)))
 
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
 
st itoa(i64 a){st ret;for(i64 i=a; i>0; i=i/10) ret+=((i%10)+48);rev(all(ret));return ret;}
int toi(st s){int r=0;istringstream sin(s);sin>>r;return r;}
i64 toi64(st s){i64 r=0;istringstream sin(s);sin>>r;return r;}
double tod(st s){double r=0;istringstream sin(s);sin>>r;return r;}
vs token(st a, st b) {const char *q = a.c_str();while(count(all(b),*q)) q++;vs oot;while(*q){const char *e=q;while(*e&&!count(all(b),*e)) e++;oot.pb(st(q,e)); q=e;while(count(all(b),*q))q++;}return oot;}
 
template<class T> inline T gcd(T a,T b) {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
template<class T> inline T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));}
template<class T> inline T sqr(T x){return x*x;}
template<class T> inline T power(T x,T p){if(!p) return 1;return x*power(x,p-1);}
 
const int mx=0;
 
class PointErasingTwo {
public:
   int getMaximum( vector <int> y ) {
     int ret=0;
     rep(i,sz(y))
     {
       for(int j=i+1; j<sz(y); j++)
       {
         int x1=min(i,j), x2=max(i,j);
         int y1=min(y[i],y[j]), y2=max(y[i],y[j]);
         int cnt=0;
         rep(k,sz(y)) if( k>x1 && k<x2 && y[k]>y1 && y[k]<y2) cnt++;
         ret=max(ret,cnt);
       }
     }
     return ret;
   }
};
 
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/