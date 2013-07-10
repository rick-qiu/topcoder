/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4439
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

class HiddenTriangles {
public:
    int howMany(vector<int> X1, vector<int> Y1, vector<int> X2, vector<int> Y2);
};

int HiddenTriangles::howMany(vector<int> X1, vector<int> Y1, vector<int> X2, vector<int> Y2) {
    int ret;
    return ret;
}


int test0() {
    vector<int> X1 = {0, 0, 0, 0, 0, 3};
    vector<int> Y1 = {0, 0, 0, 3, 3, 0};
    vector<int> X2 = {3, 0, 3, 3, 3, 3};
    vector<int> Y2 = {0, 3, 3, 0, 3, 3};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> X1 = {0, 1, 0, 2, 1, 2, 0, 1, 2, 0, 0, 0};
    vector<int> Y1 = {0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 1, 0};
    vector<int> X2 = {2, 2, 1, 0, 0, 1, 0, 1, 2, 2, 2, 2};
    vector<int> Y2 = {2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 1, 0};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> X1 = {0, 1, 2, 0, 0, 0};
    vector<int> Y1 = {0, 0, 0, 2, 1, 0};
    vector<int> X2 = {0, 1, 2, 2, 2, 2};
    vector<int> Y2 = {2, 2, 2, 2, 1, 0};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> X1 = {};
    vector<int> Y1 = {};
    vector<int> X2 = {};
    vector<int> Y2 = {};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
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
    vector<int> X1 = {-50, -40, -30, -20, -10, 0, 10, 20, 30, 40, 50, -100, -100, 5, 6, 7, 20};
    vector<int> Y1 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 75, 8, 8, 8, 0};
    vector<int> X2 = {-50, -40, -30, -20, -10, 0, 10, 20, 30, 40, 50, 100, 100, 55, 56, 57, -40};
    vector<int> Y2 = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 25, 75, 58, 58, 58, 60};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> X1 = {0, 1, 2, 2, 1, 0};
    vector<int> Y1 = {0, 1, 0, 0, 1, 0};
    vector<int> X2 = {1, 2, 0, 0, 2, 1};
    vector<int> Y2 = {1, 0, 0, 0, 0, 1};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
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
    vector<int> X1 = {0, 1, 0, 1, 2};
    vector<int> Y1 = {0, 1, 0, 1, 2};
    vector<int> X2 = {2, 3, 2, 2, 2};
    vector<int> Y2 = {2, 3, 0, 0, 0};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> X1 = {-100, -84, -68, -52, -36, -20, -4, 12, 28, 44, 60, 76, 92, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -99, -98, -97, -96, -95, -94, -93, -92, -91, -90, -89, -100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 100};
    vector<int> Y1 = {-100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -84, -68, -52, -36, -20, -4, 12, 28, 44, 60, 76, 92, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -99, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -99};
    vector<int> X2 = {-100, -84, -68, -52, -36, -20, -4, 12, 28, 44, 60, 76, 92, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 99, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -99};
    vector<int> Y2 = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, -100, -84, -68, -52, -36, -20, -4, 12, 28, 44, 60, 76, 92, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 100};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 7227;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> X1 = {-100, -84, -68, -52, -36, -20, -4, 12, 28, 44, 60, 76, 92, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -95, -90, -85, -80, -75, -70, -65, -60, -55, -50, -45, -100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 100};
    vector<int> Y1 = {-100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -84, -68, -52, -36, -20, -4, 12, 28, 44, 60, 76, 92, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -95, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -95};
    vector<int> X2 = {-100, -84, -68, -52, -36, -20, -4, 12, 28, 44, 60, 76, 92, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 95, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -95};
    vector<int> Y2 = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, -100, -84, -68, -52, -36, -20, -4, 12, 28, 44, 60, 76, 92, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 100};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5825;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> X1 = {1, 1, 5, 2, 2, 7, 7};
    vector<int> Y1 = {1, 1, 5, 2, 2, 0, 5};
    vector<int> X2 = {8, 9, 7, 7, 7, 7, 7};
    vector<int> Y2 = {8, 9, 7, 7, 2, 5, 10};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
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
    vector<int> X1 = {0, 0, 4, 5, 10, 5};
    vector<int> Y1 = {0, 0, 4, 0, 10, 0};
    vector<int> X2 = {5, 5, 10, 10, 10, 5};
    vector<int> Y2 = {5, 0, 10, 0, 0, 5};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> X1 = {0, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> Y1 = {0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> X2 = {10, 0, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    vector<int> Y2 = {0, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> X1 = {1, 3, 0, 4, 4, 4, 4, 1, 3, 3, 3, 0, 0, 0, 0, 1, 3, 2, 0, 1, 3, 2, 1, 3, 3, 0, 3, 3, 3, 4, 0, 1, 2, 1, 0, 3, 2, 0, -100, 0, 1, 2, 0, 0, 2, 2, 1, 0, 1, 1};
    vector<int> Y1 = {3, 3, 0, 4, 3, 2, 1, 1, 3, 2, 2, 4, 4, 2, 2, 2, 4, 4, 4, 3, 1, 4, 3, 4, 0, 3, 3, 2, 0, 1, 1, 1, 0, 4, 0, 0, 1, 2, 2, 3, 4, 3, 2, 1, 0, 1, 2, 1, 0, 1};
    vector<int> X2 = {3, 2, 1, 4, 4, 4, 3, 2, 4, 4, 4, 4, 0, 0, 0, 2, 2, 4, 1, 3, 4, 1, 0, 4, 3, 1, 4, 4, 4, 3, 4, 1, 2, 1, 3, 3, 3, 100, 2, 1, 2, 3, 1, 1, 4, 3, 3, 1, 2, 2};
    vector<int> Y2 = {3, 2, 1, 1, 0, 0, 2, 2, 4, 1, 1, 4, 2, 1, 0, 3, 3, 2, 3, 1, 0, 3, 2, 3, 100, 3, 3, 3, 0, 0, 1, 0, 4, 1, 0, 1, 1, 2, 2, 4, 3, 2, 1, 2, 2, 2, 0, 0, 1, 0};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 251;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> X1 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 4};
    vector<int> Y1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0};
    vector<int> X2 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 4, 0};
    vector<int> Y2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0, 0};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
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
    vector<int> X1 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 4, 10};
    vector<int> Y1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0, 0};
    vector<int> X2 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 4, 0, 0};
    vector<int> Y2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0, 0, 0};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> X1 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 4, 10, -1};
    vector<int> Y1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0, 0, 0};
    vector<int> X2 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 4, 0, 0, 9};
    vector<int> Y2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0, 0, 0, 0};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> X1 = {0, 2, 0, 1, 1, 0, 1, 1};
    vector<int> Y1 = {0, 0, 2, 0, 1, 1, 0, 1};
    vector<int> X2 = {1, 1, 0, 2, 0, 0, 1, 0};
    vector<int> Y2 = {0, 1, 1, 0, 2, 0, 1, 1};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> X1 = {6, 6, 5, 1, 9, 8, 3, 4, 9, 2, 6, 4, 6, 8, 9, 4, 2, 6, 0, 1, 6, 1, 6, 8, 4, 3, 2, 0, 8, 5, 6, 9, 8, 8, 9, 6, 3, 3, 8, 7, 5, 4, 6, 5, 8, 1, 2, 6, 6, 4};
    vector<int> Y1 = {5, 5, 8, 5, 7, 1, 4, 0, 7, 3, 9, 6, 4, 6, 2, 6, 5, 0, 6, 1, 9, 5, 9, 4, 2, 2, 4, 9, 6, 3, 0, 2, 3, 1, 8, 6, 6, 5, 6, 6, 0, 8, 2, 2, 5, 2, 2, 1, 4, 2};
    vector<int> X2 = {6, 6, -2, 5, 6, 0, 9, 4, 9, 5, 1, 1, 9, 0, 1, -3, -5, 11, 0, -5, 6, -7, 6, 12, 4, 6, 2, -6, 8, -2, 12, 4, 10, 2, 3, 13, 9, 9, 6, 14, 9, -1, -2, 7, 1, -1, 7, 4, 14, 8};
    vector<int> Y2 = {-2, -3, 1, 5, 7, 9, -2, -5, 5, 6, 4, 6, 1, 6, -6, 6, -2, 5, 10, -5, 4, 5, 4, 4, 6, -1, 10, 15, 2, 10, 0, 7, 5, -5, 8, 13, 6, -1, 8, 6, 4, 3, 2, 4, 12, 2, 2, 1, 4, -2};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> X1 = {8, 3, 3, 8, 0, 2, 0, 6, 2, 5, 2, 2, 2, 6, 8, 8, 6, 9, 4, 5, 0, 7, 2, 4, 6, 1, 7, 8, 6, 7, 8, 7, 6, 6, 2, 7, 8, 6, 4, 5, 0, 6, 5, 7, 9, 7, 2, 1, 8, 6};
    vector<int> Y1 = {6, 4, 1, 1, 3, 2, 0, 8, 5, 4, 7, 5, 1, 3, 3, 7, 3, 3, 5, 8, 1, 6, 8, 1, 9, 0, 5, 3, 4, 7, 3, 6, 7, 8, 3, 3, 9, 8, 6, 4, 5, 3, 4, 8, 9, 0, 4, 4, 9, 9};
    vector<int> X2 = {16, 5, 3, 8, 0, 7, 0, 14, -6, 5, 2, -1, 8, 0, 6, 4, 6, 13, -2, 12, 7, 7, 2, 4, 9, -4, 4, 11, 1, 7, 15, 9, 8, 1, -5, 7, 10, 6, -2, 5, -5, -1, 3, 14, 5, 3, 8, -5, 4, 11};
    vector<int> Y2 = {14, 4, 9, -5, 5, 7, -5, 8, 13, -1, 1, 8, 7, 3, 5, 3, 11, 7, -1, 8, 1, 13, 0, -2, 6, 0, 8, 6, 4, 0, -4, 8, 9, 13, 10, 7, 11, 14, 6, 10, 0, 3, 2, 8, 9, -4, 4, 4, 9, 14};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> X1 = {-25, -30, -29, -29, -27, -24, -29, -29, -24, -23, -27, -27, -26, -30, -23, -28, -29, -25, -30, -26, -28, -26, -25, -23, -26, -29, -29, -24, -25, -28, -29, -30, -29, -26, -26, -30, -25, -28, -25, -26, -23, -26, -28, -28, -28, -25, -30, -25, -25, -28};
    vector<int> Y1 = {-25, -26, -30, -27, -30, -28, -30, -27, -27, -23, -26, -29, -30, -24, -23, -26, -24, -30, -30, -24, -30, -25, -30, -30, -24, -24, -28, -27, -29, -25, -25, -30, -27, -27, -27, -30, -27, -23, -26, -26, -26, -25, -27, -25, -24, -27, -23, -26, -28, -26};
    vector<int> X2 = {-23, -32, -26, -26, -25, -24, -28, -24, -24, -23, -23, -32, -25, -29, -23, -27, -29, -30, -30, -26, -25, -21, -21, -28, -31, -32, -29, -28, -21, -27, -34, -30, -29, -23, -26, -28, -21, -24, -26, -23, -25, -25, -29, -25, -30, -25, -26, -25, -25, -28};
    vector<int> Y2 = {-23, -26, -33, -27, -30, -25, -29, -32, -29, -24, -22, -34, -31, -25, -27, -27, -20, -35, -25, -29, -33, -30, -30, -25, -24, -24, -31, -31, -29, -26, -30, -27, -31, -27, -24, -30, -23, -27, -27, -29, -26, -24, -27, -22, -24, -24, -19, -28, -24, -27};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> X1 = {5, 4, 0, 4, 3, 5, 5, 1, 1, 0};
    vector<int> Y1 = {5, 5, 0, 4, 4, 4, 5, 2, 1, 0};
    vector<int> X2 = {0, 9, 3, 6, 3, -1, 11, 5, -3, 0};
    vector<int> Y2 = {10, 0, 0, 6, -2, -2, 5, -2, -3, 2};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> X1 = {-24, 25, 7, -3, -25, -2, -3, -28, 4, 15, -23, -25, 3, -15, 4, 7, 1, 16, 2, -19, 20, -7, -2, -5, 20, 18, -25, -16, -13, 8, -1, 18, -20, -1, 6, 3, 7, -3, -21, -18, 6, -6, -27, -2, 8, 4, 11, 14, 1, 24};
    vector<int> Y1 = {14, 0, -30, -16, 10, -26, -6, -6, 9, 2, 5, -17, -18, 17, 27, -30, 5, 22, 2, -30, -13, -4, 18, -28, 29, -13, 9, -29, 28, 20, 20, -2, 9, -23, 14, 3, -27, 21, -17, -29, -23, -9, 10, 10, 10, 16, -28, -5, -15, 3};
    vector<int> X2 = {-24, -11, -42, -30, -82, -59, 55, 19, 51, 66, -78, -25, 56, -72, 4, -36, -37, -30, 2, -19, -21, -7, 48, -5, -21, -13, 34, -67, -13, -20, -54, 53, 11, 59, -52, -46, 48, -34, 21, -49, 6, 56, 36, 59, 44, -30, -46, 76, 49, -21};
    vector<int> Y2 = {74, 36, 19, -16, 10, -26, 52, -6, -38, -49, 5, 11, -71, 17, 68, -73, 43, -24, -24, 30, -54, 38, 68, -53, 70, -44, -50, -80, -9, 20, -33, -2, -22, 37, 14, -46, -68, -10, -59, 2, 35, -71, 73, -51, 46, 50, -28, -5, 33, 3};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 229;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> X1 = {-2, -6, -9, 14, -8, -15, -11, 1, -5, 2, -10, 10, 14, 27, 25, -7, 27, -6, 21, 4, 16, -2, -21, 19, -4, -6, 3, 21, 28, -18, -30, -11, 27, -1, -11, 16, -7, 26, 18, -12, 15, -27, 10, 22, 1, -1, 21, -21, -19, -29};
    vector<int> Y1 = {-27, 15, -18, 12, -27, 4, 12, 3, 9, -8, -10, 4, -30, -17, 10, 21, -11, -29, -11, -20, -4, 16, -20, -28, -29, -16, -28, 28, 16, -21, 25, 7, 14, 3, 6, -20, -11, 1, 22, -1, -29, 1, -25, 13, -17, -15, -2, 23, 5, 29};
    vector<int> X2 = {62, 19, 55, 52, 35, 25, 19, 39, 37, 61, 35, 74, 71, 67, 60, 20, 64, 29, 73, 46, 74, 24, 41, 70, 43, 42, 40, 55, 84, 18, 9, 19, 77, 25, 45, 58, 43, 82, 47, 32, 44, 30, 55, 78, 56, 27, 72, 32, 36, 32};
    vector<int> Y2 = {-91, -10, -18, 50, -27, 44, -18, 41, 51, -67, -10, 4, -87, -17, -25, -6, -48, -29, -11, -62, -62, 16, 42, 23, -76, -64, -28, 62, 16, -57, -14, 7, 64, 3, 6, 22, 39, 1, 22, 43, -29, -56, -25, -43, -72, -43, -53, 23, 60, 29};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> X1 = {4, 0, 4, 2, 4, 1, 4, 1, 0, 2, 4, 1, 2, 4, 2, 1, 2, 0, 0, 2, 4, 4, 3, 1, 2, 3, 3, 4, 1, 3, 4, 0, 1, 3, 1, 0, 0, 1, 1, 3, 2, 3, 2, 0, 0, 0, 1, 2, 2, 1};
    vector<int> Y1 = {3, 4, 2, 1, 1, 0, 3, 1, 3, 4, 4, 0, 3, 0, 0, 1, 4, 1, 0, 0, 2, 4, 2, 2, 2, 4, 3, 2, 1, 1, 1, 0, 3, 3, 4, 1, 4, 2, 0, 4, 2, 2, 0, 3, 3, 3, 0, 3, 2, 4};
    vector<int> X2 = {4, 0, 4, 5, 2, 4, 2, 1, -1, 1, 7, 1, 3, 3, 1, -2, 3, -3, -1, 2, 6, 5, 4, 0, 4, 3, 6, 5, 1, 4, 1, -2, -2, 3, 1, -2, -1, -2, -1, 3, 1, 6, 3, 0, -3, -1, -2, 3, 2, 1};
    vector<int> Y2 = {1, 3, 5, -2, 1, 0, 3, -2, 4, 3, 1, 2, 4, 1, -1, -2, 3, 1, -1, 3, 0, 3, 1, 2, 0, 7, 0, 1, -2, 2, -2, -2, 0, 1, 7, -1, 5, 2, 0, 6, 1, 2, 0, 5, 3, 3, 0, 2, 4, 1};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> X1 = {-8, -8, -6, -9, -7, -10, -6, -7, -10, -9, -7, -10, -9, -10, -7, -7, -9, -6, -8, -6, -6, -7, -6, -10, -8, -9, -6, -10, -7, -7, -6, -10, -10, -9, -7, -9, -10, -10, -10, -9, -6, -10, -7, -9, -9, -9, -6, -8, -7, -10};
    vector<int> Y1 = {-6, -7, -6, -10, -7, -7, -9, -6, -9, -9, -6, -6, -8, -9, -10, -9, -10, -10, -7, -10, -9, -6, -9, -10, -9, -10, -6, -6, -9, -7, -8, -9, -7, -10, -10, -9, -7, -8, -6, -8, -7, -7, -8, -6, -9, -7, -9, -6, -8, -6};
    vector<int> X2 = {-12, -11, -3, -13, -16, -10, 2, -14, -8, -11, -1, -3, -15, -19, -4, -15, -12, -11, -16, 0, 0, -7, -5, -10, -8, -9, -6, -10, -7, -7, 1, -11, -6, -8, -11, -14, -10, -17, -17, -6, -6, -10, -7, -6, -5, -9, -8, -15, -12, -15};
    vector<int> Y2 = {-2, -4, -9, -14, -16, -3, -9, -13, -7, -9, -12, 1, -8, -9, -10, -17, -7, -10, 1, -10, -15, -1, -9, -4, -3, -18, -3, 1, -12, -11, -8, -8, -11, -9, -10, -4, 0, -8, -13, -11, -4, -4, 1, -3, -5, -10, -9, 1, -8, -1};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> X1 = {73, 74, 71, 73, 73, 74, 74, 73, 72, 74, 72, 70, 73, 74, 73, 70, 72, 72, 71, 74, 73, 74, 72, 72, 72, 71, 74, 72, 73, 74, 73, 70, 71, 71, 71, 74, 70, 74, 70, 72, 74, 73, 74, 73, 71, 73, 72, 72, 71, 70};
    vector<int> Y1 = {-9, -9, -6, -8, -10, -9, -6, -10, -7, -7, -10, -10, -7, -10, -7, -9, -7, -10, -6, -10, -8, -10, -10, -9, -9, -10, -7, -9, -6, -7, -10, -6, -10, -6, -7, -8, -10, -6, -8, -7, -10, -10, -7, -6, -10, -8, -6, -7, -6, -6};
    vector<int> X2 = {66, 66, 78, 68, 82, 74, 74, 83, 67, 74, 79, 65, 78, 80, 67, 70, 78, 63, 71, 68, 73, 74, 63, 72, 72, 76, 74, 64, 80, 64, 73, 77, 71, 78, 62, 84, 60, 66, 70, 81, 81, 79, 67, 73, 62, 82, 62, 63, 62, 62};
    vector<int> Y2 = {-9, -17, -6, -8, -10, -2, 2, -10, -2, 2, -17, -5, -12, -10, -13, -16, -7, -10, 4, -10, -14, -4, -19, 1, 0, -5, -13, -9, 1, -17, -5, 1, -2, -6, 2, 2, -10, -6, -3, -7, -10, -10, 0, 2, -10, 1, -6, -16, 3, -14};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> X1 = {26, 20, 26, 26, 26, 29, 17, 13, 30, 34, 32, 28, 30, 10, 29, 16, 17, 13, 20, 33, 25, 20, 33, 19, 32, 17, 22, 29, 18, 11, 32, 14, 20, 23, 28, 23, 31, 30, 11, 27, 15, 30, 27, 10, 15, 22, 21, 25, 26, 32};
    vector<int> Y1 = {-7, 11, 14, -5, 4, 0, 14, -1, 12, 12, -5, 9, 7, -7, 7, 6, 9, -1, 11, 13, -1, 4, -4, 14, 7, -8, -6, 9, -4, -8, 12, 0, 14, -9, -4, 1, 14, 13, 0, -4, -10, 12, 8, 12, 12, 3, -2, 4, -5, 1};
    vector<int> X2 = {26, 20, 26, 78, -33, -24, 35, -44, 60, -4, -1, -11, 30, -40, 29, -27, 63, 13, 74, 50, -19, 60, -6, 58, 32, 17, 22, -36, 40, -43, 78, -31, 0, -6, -18, 87, -36, 67, 54, 97, 41, 73, -14, -60, 83, 58, 42, 25, -14, 54};
    vector<int> Y2 = {-37, 46, 34, -57, 63, 53, -4, 56, -18, 12, 28, -30, 76, 43, -31, -37, -37, 30, -43, 30, -45, -36, -4, -25, 76, 36, 24, 9, 18, -8, 58, 45, 34, 20, -50, 65, 14, 13, 43, 66, -10, -31, 8, 12, 12, 3, 19, 30, -5, 23};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> X1 = {7, 16, 14, 17, 14, 17, 23, 20, 4, 12, 16, 2, 6, 7, 6, 0, 2, 16, 5, 21, 10, 9, 19, 20, 24, 5, 15, 13, 9, 19, 7, 9, 24, 22, 10, 3, 14, 15, 3, 18, 12, 0, 17, 5, 9, 5, 21, 6, 18, 19};
    vector<int> Y1 = {16, 24, 13, 11, 3, 9, 15, 22, 11, 15, 16, 17, 5, 1, 15, 18, 13, 14, 6, 20, 3, 12, 12, 15, 6, 2, 20, 17, 9, 1, 15, 10, 10, 9, 24, 3, 21, 18, 1, 24, 15, 2, 10, 7, 1, 22, 0, 15, 4, 3};
    vector<int> X2 = {58, 88, 14, -37, 83, -34, 73, 89, -49, 78, 16, 2, -54, -55, -45, 0, -59, 16, 68, -42, -60, 9, -49, -37, 24, -65, -40, 74, 77, -49, 72, -42, 24, -37, 75, 67, -44, 77, 3, -50, 62, 0, -35, 5, 9, -46, 87, 6, 71, -52};
    vector<int> Y2 = {67, 24, 70, 65, 72, 9, 65, 91, 11, 15, -39, -50, -55, -61, 15, -54, -48, 64, -57, 20, 73, 62, 12, 15, -57, 72, 20, -44, -59, 69, 80, -41, -51, -50, 89, 3, -37, -44, 59, 24, 65, 72, -42, 62, -56, 73, 66, -54, 57, 3};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 319;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> X1 = {3, 4, 9, 9, 6, 6, 0, 4, 9, 3, 2, 5, 3, 8, 4, 3, 3, 0, 8, 5, 8, 7, 8, 7, 1, 0, 8, 8, 0, 5, 6, 4, 9, 6, 3, 0, 1, 6, 1, 6, 4, 7, 0, 9, 7, 5, 1, 8, 9, 4};
    vector<int> Y1 = {0, 3, 1, 3, 9, 0, 5, 9, 9, 2, 5, 1, 0, 4, 7, 3, 2, 5, 2, 7, 3, 2, 9, 4, 0, 9, 8, 6, 7, 4, 4, 6, 3, 1, 8, 5, 8, 9, 3, 2, 2, 5, 0, 9, 5, 6, 0, 3, 6, 9};
    vector<int> X2 = {4, 4, 8, 9, 7, 6, 0, 3, 10, 2, 1, 6, 2, 9, 3, 4, 2, 1, 8, 6, 9, 7, 9, 8, 0, 1, 7, 7, -1, 5, 6, 4, 10, 7, 2, -1, 1, 5, 2, 7, 3, 6, 0, 8, 6, 6, 0, 9, 10, 5};
    vector<int> Y2 = {1, 4, 2, 2, 8, 1, 4, 9, 9, 1, 4, 2, 1, 3, 7, 4, 3, 5, 3, 8, 4, 1, 10, 5, 0, 10, 7, 6, 8, 5, 5, 7, 3, 1, 8, 4, 9, 9, 2, 3, 3, 6, -1, 9, 6, 7, 0, 3, 6, 10};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> X1 = {-68, -70, -72, -67, -69, -67, -68, -69, -67, -72, -67, -69, -72, -68, -71, -67, -69, -71, -69, -69, -70, -67, -69, -68, -69, -68, -71, -69, -71, -69, -72, -68, -72, -67, -67, -69, -67, -67, -68, -68, -71, -68, -72, -71, -71, -68, -72, -67, -70, -70};
    vector<int> Y1 = {83, 82, 80, 80, 80, 80, 82, 82, 82, 81, 83, 83, 80, 83, 82, 83, 81, 81, 82, 82, 80, 80, 82, 80, 80, 81, 80, 83, 80, 81, 83, 82, 82, 83, 82, 83, 83, 82, 80, 83, 83, 83, 81, 81, 81, 82, 82, 80, 81, 83};
    vector<int> X2 = {-69, -69, -73, -66, -70, -66, -69, -68, -67, -71, -67, -68, -71, -67, -70, -68, -70, -72, -69, -68, -69, -67, -68, -67, -68, -67, -70, -69, -71, -68, -71, -67, -73, -68, -67, -68, -66, -66, -67, -68, -71, -67, -72, -71, -70, -69, -73, -66, -70, -69};
    vector<int> Y2 = {84, 83, 81, 81, 79, 79, 82, 82, 83, 80, 82, 84, 81, 84, 81, 84, 82, 82, 81, 83, 81, 79, 82, 81, 81, 81, 79, 82, 79, 80, 83, 83, 83, 84, 83, 82, 82, 82, 80, 82, 84, 84, 82, 82, 81, 83, 81, 81, 80, 82};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
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
    vector<int> X1 = {-12, 30, -5, 23, 9, -19, 9, -19, 2, 2, -5, -33, 2, -33, 2, -26, 9, 9, 23, 23, 2, -33, -26, -5, -12, -26, -33, -19, -19, 9, -19, 23, -5, -19, -12, -12, 9, -5, 23, 30, 30, 23, 9, -19, 2, -19, -26, -5, -33, -5};
    vector<int> Y1 = {-23, 31, -14, 22, 4, -32, 4, -32, -5, -5, -14, -50, -5, -50, -5, -41, 4, 4, 22, 22, -5, -50, -41, -14, -23, -41, -50, -32, -32, 4, -32, 22, -14, -32, -23, -23, 4, -14, 22, 31, 31, 22, 4, -32, -5, -32, -41, -14, -50, -14};
    vector<int> X2 = {-12, 72, -54, -26, 52, -19, 49, 21, 47, 43, -5, -79, 2, 14, 2, 16, 49, -39, -18, -22, 2, 9, -26, -50, 35, 14, 8, 25, -63, -39, -66, 23, -49, 21, 28, 29, 9, -5, 72, 30, 71, 23, 9, -19, -44, 28, -26, -5, -33, -53};
    vector<int> Y2 = {18, 31, 35, -27, -39, 13, -36, 8, 40, -5, -59, -96, 37, -50, -49, 1, 44, 52, 63, 22, 36, -8, 3, -59, -70, -81, -91, -32, -76, 52, 15, -20, -14, 8, -23, -23, 50, 32, -27, 78, 31, -24, -37, -72, -5, -32, -87, 32, -5, -14};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> X1 = {-100};
    vector<int> Y1 = {-100};
    vector<int> X2 = {100};
    vector<int> Y2 = {100};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
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
    vector<int> X1 = {30, 50};
    vector<int> Y1 = {40, 60};
    vector<int> X2 = {50, 70};
    vector<int> Y2 = {60, 80};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> X1 = {0, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> Y1 = {0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> X2 = {10, 0, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    vector<int> Y2 = {0, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    HiddenTriangles* pObj = new HiddenTriangles();
    clock_t start = clock();
    int result = pObj->howMany(X1, Y1, X2, Y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=6538&pm=4439
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)
#define MAX(f,w) ({ int _mm=(1<<31); f _mm>?=(w); _mm; })
template<class T> inline int size(const T&c) { return c.size(); }
 
const int MAX = 400;
 
bool seg[MAX+1][MAX+1][8];
int ile[MAX+1][MAX+1][8];
 
int dx[] = { 1,1,0,-1,-1,-1,0,1};
int dy[] = { 0,1,1,1,0,-1,-1,-1};
 
inline int mysgn(int x) {
  if(x>0) return 1;
  if(x==0) return 0;
  return -1;
}
 
void mark(int x1,int y1,int x2,int y2) {
  int d=0;
  while(dx[d]!=mysgn(x2-x1) || dy[d]!=mysgn(y2-y1)) ++d;
  while(x1!=x2 || y1!=y2) {
    seg[x1][y1][d] = true;
    x1+=dx[d]; y1+=dy[d];
    seg[x1][y1][(d+4)%8] = true;
  }
}
 
int calcIle2(int x,int y,int d) {
  if(ile[x][y][d]==-1) {
    if(seg[x][y][d]) ile[x][y][d] = 1+calcIle2(x+dx[d],y+dy[d],d);
    else ile[x][y][d] = 0;
  }
  return ile[x][y][d];
}
 
void calcIle() {
  FOR(x,0,MAX) FOR(y,0,MAX) REP(d,8) ile[x][y][d] = -1;
  FOR(x,0,MAX) FOR(y,0,MAX) REP(d,8) calcIle2(x,y,d);
}
 
int calc() {
  int res = 0;
  FOR(x,0,MAX) FOR(y,0,MAX) REP(d,8) {
    int d1 = (d+2)%8;
    int side = d%2==0 ? 1 : 2;
    for(int r=1;;++r) {
      if(ile[x][y][d] < r || ile[x][y][d1] < r) break;
      if(ile[x+r*dx[d]][y+r*dy[d]][(d+3)%8] >= side*r) ++res;
    }
  }
  return res;
}
 
struct HiddenTriangles {
 
  // MAIN
  int howMany(vector <int> X1, vector <int> Y1, vector <int> X2, vector <int> Y2) {
    FOR(x,0,MAX) FOR(y,0,MAX) REP(i,8) seg[x][y][i] = false;
    REP(i,size(X1)) {
      mark(2*X1[i]+200,2*Y1[i]+200,2*X2[i]+200,2*Y2[i]+200);
    }
    calcIle();
    return calc();
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/