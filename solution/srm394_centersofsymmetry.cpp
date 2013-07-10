/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8546
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

class CentersOfSymmetry {
public:
    int lineConfigurations(vector<int> x1, vector<int> y1, vector<int> x2, vector<int> y2);
};

int CentersOfSymmetry::lineConfigurations(vector<int> x1, vector<int> y1, vector<int> x2, vector<int> y2) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x1 = {0, 0};
    vector<int> y1 = {0, 0};
    vector<int> x2 = {1, -1};
    vector<int> y2 = {1, 1};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y1 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> x2 = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> y2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {0, 1, 2};
    vector<int> y1 = {0, 1, -1};
    vector<int> x2 = {1, 2, 0};
    vector<int> y2 = {1, -1, 0};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {-10, 10};
    vector<int> y1 = {10, -10};
    vector<int> x2 = {-10, 10};
    vector<int> y2 = {-10, 10};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x1 = {-50, -50, -50, -50};
    vector<int> y1 = {-50, -49, -48, -46};
    vector<int> x2 = {50, 49, 48, 46};
    vector<int> y2 = {50, 50, 50, 50};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x1 = {7};
    vector<int> y1 = {11};
    vector<int> x2 = {10};
    vector<int> y2 = {-7};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x1 = {0, 0, 0, 0};
    vector<int> y1 = {0, 7, 4, 3};
    vector<int> x2 = {10, 20, 30, 40};
    vector<int> y2 = {0, 7, 4, 3};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x1 = {0, 0, 0, 0};
    vector<int> y1 = {0, 7, 5, 3};
    vector<int> x2 = {40, 30, 20, 10};
    vector<int> y2 = {0, 7, 5, 3};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {1, 1, 3, 3};
    vector<int> y1 = {1, 1, 3, 3};
    vector<int> x2 = {1, 3, 1, 3};
    vector<int> y2 = {3, 1, 3, 1};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {2, -9, 1, 21, -15, 13, 6, -3, -3, 1, 0, 0, 12, 9, 29};
    vector<int> y1 = {13, -2, 5, -27, -4, 2, 3, 10, 0, 11, 0, 3, -5, 8, -19};
    vector<int> x2 = {5, -5, 2, 24, -11, 10, 3, -5, -5, 3, 8, 2, 0, -11, 32};
    vector<int> y2 = {1, 0, 5, -31, -2, 3, 6, 10, 0, 7, 10, 4, 10, -4, -23};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {2, 3, -7, 5, -5, 3, 14, 2, 7, 6, 2, 6, 15, 7, -2, -6, 3, -1, 4, -3};
    vector<int> y1 = {-11, 0, 13, 3, -2, 7, -8, 4, 2, 2, -5, 5, -5, 1, 26, 18, 5, 0, 7, -2};
    vector<int> x2 = {6, 6, 9, 5, 0, 7, 8, 6, 8, 2, 4, 2, 18, 10, -3, -7, 11, -4, 2, 9};
    vector<int> y2 = {9, 6, 1, 5, 1, 1, 0, 4, 1, 10, 1, 1, -8, -2, 28, 20, 1, -2, 13, 7};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {-4, -32, -2, -2, -2, -7, -5, -8, -13, -3, 2, -13, -3, -3, -3, -5, 1, -1, 1, -6, -8, -9, -2, -10, -12, -2, -6, -36};
    vector<int> y1 = {-3, -25, -2, -6, -3, -14, 1, -4, -7, -1, -10, -13, 1, 0, -5, 2, -11, -4, -2, -11, 0, -3, 2, -4, -11, -11, -7, -17};
    vector<int> x2 = {-4, -23, 2, 0, -1, -7, -7, 0, -10, -5, -6, -7, -5, -7, -6, -6, 1, -1, 6, -7, 4, -9, -8, -2, -16, -2, -6, -27};
    vector<int> y2 = {0, -19, -4, -11, -4, -15, 5, 2, -5, -1, 2, -5, -3, -4, 7, 5, -13, -5, -3, -16, -3, -5, -7, 0, -16, -9, -5, -11};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {-19, -11, -13, -3, -4, -5, -2, -10, -25, -44, -3, -2, -7, -1, -25, -7, -3, -10, -15, -34, 6, 8, -1, -30, -32, 2};
    vector<int> y1 = {-4, 37, -10, 6, 3, 5, 10, -3, -14, 22, 1, 3, 11, 4, -4, 14, 9, 2, 27, 16, 3, 2, 1, -26, -36, 2};
    vector<int> x2 = {-9, -10, -1, -6, -4, -6, -8, -13, -34, -39, -5, -5, -3, -7, -34, -3, -5, -8, -14, -29, 11, 0, 2, -21, -23, -6};
    vector<int> y2 = {2, 34, 10, 3, 6, 5, -5, -7, -20, 20, 9, 6, 3, 6, -10, 2, 1, 3, 24, 14, 2, 4, -3, -14, -24, 6};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x1 = {-35, -12, -39, -19, -17, -43, 21, -13, -37, -11, -11, 23, -17};
    vector<int> y1 = {-12, -7, -4, -13, -14, 23, -36, 36, 33, -4, -7, -36, 44};
    vector<int> x2 = {-43, -13, -47, -16, -16, -48, 12, -12, -42, -10, -8, 14, -16};
    vector<int> y2 = {-14, -8, -6, -10, -13, 27, -24, 32, 37, -3, -4, -24, 40};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {20, -16, -10, -12, -2, -17, 5, -9, 18, -3, -6, -6, 3, 11, -2, 11, 1, 11, -7, -10, 19, -26, -4, -6, -8};
    vector<int> y1 = {-4, 38, -23, -19, 17, -13, -6, -3, -12, 21, 2, -2, 1, -13, -33, -8, -10, -3, 27, -39, -4, 42, -13, -3, 15};
    vector<int> x2 = {16, -19, -8, -10, 0, -21, 5, -13, 14, -1, -7, -7, 3, 9, 1, 13, 1, 9, -5, -7, 21, -29, -3, -5, -6};
    vector<int> y2 = {-2, 43, -20, -16, 13, -15, -8, -5, -10, 15, 2, -2, -2, -11, -21, -9, -12, -1, 21, -27, -5, 47, -12, -2, 11};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {34, 0, -11, 10, -7, -16, -16, -6, 9, -3, -8, 1, -1, 2, 11, -10, -23, -15, 4, -18, 38, 18, -2, 3, 24};
    vector<int> y1 = {-10, -3, -5, -13, -8, -14, -23, -6, -16, -4, -14, -4, -5, -2, -6, -4, -28, -36, -3, -29, -8, -27, 2, -4, -37};
    vector<int> x2 = {39, 2, 5, 11, 5, -18, -28, -5, 8, -1, -7, 1, -3, 0, 10, -12, -17, -9, 5, -30, 43, 10, 7, 0, 16};
    vector<int> y2 = {-11, -1, -1, -14, 1, -15, -39, -5, -15, -3, -13, -5, -8, -2, -5, -5, -19, -27, -4, -45, -9, -15, -10, -1, -25};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {-9, -6, -15, 5, -8, -14, -6, -8, -4, -1, -1, -11, 6, 15, -2, -12, 0, -14, -25, -20, -10, -23, -19, -21, -8, -1, 5, -6, -19};
    vector<int> y1 = {-13, 18, -4, -7, 20, -3, 19, 19, -1, 22, 1, 12, -5, -5, -3, -8, 32, 0, 24, -9, 22, -10, -24, 14, 25, -17, 4, 29, -30};
    vector<int> x2 = {-11, -5, -13, 6, -7, -12, -4, -6, -4, 0, 0, -10, 6, 16, 0, -18, -3, -20, -28, -18, -13, -21, -15, -24, -7, -3, -11, -5, -15};
    vector<int> y2 = {-19, 16, -3, -8, 18, -2, 15, 15, -5, 20, 2, 10, -9, -6, 1, -11, 44, -3, 26, -8, 34, -9, -18, 16, 22, -23, 0, 26, -24};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x1 = {10, -35, -8, 7, -5, -8, -9, -50, -17, -18, -17, -26, -5, 23, 18, -7, -8, -6, -8, -12, 22, -7, 17, -48, -6, -16, -12, -14, 13, 30, 11, 17, -3, -5, -27, -30};
    vector<int> y1 = {-27, -25, -17, -26, -3, -19, -20, -33, -22, -21, -23, -38, -2, -32, -27, -8, -2, -5, -21, -7, -15, -15, -5, -27, 0, -19, -25, 1, -22, -11, -13, -38, -1, -6, -17, -32};
    vector<int> x2 = {16, -32, -11, 11, -3, -9, -8, -45, -16, -15, -19, -29, -2, 20, 24, -1, 4, -7, -5, -13, 16, -9, 29, -43, 2, -17, -15, -15, 17, 24, 23, 14, -7, -3, -24, -33};
    vector<int> y2 = {-35, -23, -26, -32, -3, -21, -18, -30, -20, -15, -27, -42, -5, -28, -35, 2, -5, -6, -15, -7, -13, -19, -9, -24, -12, -21, -34, 1, -28, -9, -17, -34, -9, 0, -15, -36};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {3, 3, 1, -5, 3, 5, 20, -24, -6, 8, 38, 12, -4, -24, 42, 26, -10, 18, -13, -5, 2, 37, -28, 2, 0, -23, -8, -4, -6, 0, -29, 26, -4, -16, -33, 18, -6, -11, -39, -2};
    vector<int> y1 = {4, -2, -9, 0, 5, -4, 2, -24, -12, 8, -37, -8, -11, 12, -47, -5, -2, -22, 0, -9, 3, -41, 18, -6, -9, -13, -17, 24, -3, -19, -21, -26, 9, -34, -34, -7, 18, -10, -24, 8};
    vector<int> x2 = {7, 3, 2, -2, 5, 5, 24, -27, -10, -8, 30, 16, -7, -44, 34, 22, -6, 16, -11, 1, 5, 28, -48, -2, 1, -14, -7, -3, -11, -3, -20, 24, -8, -19, -28, 14, -5, -9, -34, 2};
    vector<int> y2 = {0, -6, -5, 1, 1, -8, 0, -28, -20, -12, -27, -10, -20, 20, -37, -3, -2, -19, 1, -1, 3, -29, 26, -14, -7, -7, -15, 22, -6, -28, -15, -23, 12, -38, -30, -5, 16, -9, -20, 8};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {-11, -3, -8, -19, -17, -8, 0, -4, 16, -10, -3, -12, -33, -18, 15, -39, -4, 21, 20, -41, -6, -3, -10, -12, -10, -27, -4, -9, -18, -8, -15, -1, 4, 15, 24, 12, -8, -12, 3, -14, -17, 4, -7, -5, -13, 3, 24};
    vector<int> y1 = {-1, -8, -2, -22, -24, 10, 2, -2, -3, -8, -5, -4, -2, 3, -9, 40, 9, -1, -1, 32, -6, 8, 2, 3, -1, -2, -27, 0, -7, -14, -23, 4, -2, 1, -9, 1, -8, -7, 0, -19, -5, 7, 3, -29, 5, -1, 1};
    vector<int> x2 = {-17, -2, -9, -13, -11, -4, 0, -4, 19, -11, -3, -9, -38, -27, 17, -34, -3, 23, 23, -36, -7, -4, -5, -16, -9, -32, -3, -10, -27, -9, -13, -2, 4, 5, 27, -4, -5, -16, 9, -13, -23, -8, -5, -3, -11, 3, 27};
    vector<int> y2 = {-4, -4, -3, -13, -15, 7, 5, -6, -4, -9, -8, -1, -3, 0, -10, 36, 9, -2, -2, 28, -8, 8, 3, 1, -1, -3, -24, 0, -10, -16, -17, 4, -6, 3, -10, 5, -5, -9, -8, -16, -8, -2, 3, -23, 5, -4, 0};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x1 = {-24, 45, 28, -15, -50, 16};
    vector<int> y1 = {-42, 39, -13, 29, 2, -2};
    vector<int> x2 = {5, -33, -16, 40, -4, -26};
    vector<int> y2 = {35, 9, 37, 28, -33, 46};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x1 = {-36, 9, 0, 12, -39, -24, -6};
    vector<int> y1 = {22, 29, 49, 23, 35, -3, 35};
    vector<int> x2 = {-39, 48, -18, 15, 40, -13, -44};
    vector<int> y2 = {13, 50, -47, 45, -34, 22, 44};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x1 = {-47, 3, 15, -18, -45, -6, -12, -33, -39};
    vector<int> y1 = {-3, -19, 49, 5, 29, 26, 3, 2, 4};
    vector<int> x2 = {-20, -50, 11, 21, -40, 28, 43, -42, 42};
    vector<int> y2 = {46, -12, -32, -27, 21, -7, -41, -19, -40};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x1 = {-21, -42, -34, -46, -23, -28, -23};
    vector<int> y1 = {9, -8, -7, 17, 43, -20, 4};
    vector<int> x2 = {-40, -19, -32, -18, 17, 50, -24};
    vector<int> y2 = {-20, 22, -34, -3, 4, 9, 8};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x1 = {36, 44, -23, 33, -21, -36, -8, -48, 2, 15, -1, -7};
    vector<int> y1 = {-47, 46, -27, 11, -11, -23, -19, 29, 50, -8, -23, 40};
    vector<int> x2 = {-50, 28, -35, -34, 21, -34, -35, -6, 20, -26, 26, -34};
    vector<int> y2 = {39, 48, -43, -49, -16, -38, -27, 29, 31, 9, -39, 25};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x1 = {-44, 6, -12, -14, -25, 11, 20, -26, 29, 31, 14, -31, -19, -49, 45, -27};
    vector<int> y1 = {-10, -26, 35, 31, 42, 15, 2, -33, 12, 31, 21, 19, 5, -33, 7, -30};
    vector<int> x2 = {12, -40, -28, 11, 48, 22, 50, 33, -40, -47, -44, -25, -38, -36, 14, -28};
    vector<int> y2 = {46, 20, 40, 18, -31, 24, 27, 41, 41, 29, 37, 22, -31, 10, -2, 47};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x1 = {-19, -46, 41, -30, 24, 34, 49, -4, 5, 39, -2, -16, 13};
    vector<int> y1 = {-8, 19, -1, 2, -43, 22, 29, 11, 0, 33, -18, -16, 24};
    vector<int> x2 = {13, -21, -2, -27, -23, 6, -40, -8, 15, 19, -23, 39, 38};
    vector<int> y2 = {-9, -26, 27, -25, 33, -24, 38, 8, 8, 6, -31, 1, -5};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x1 = {-38, -17, 46, -36, -25, -3, -8, 34, -17, -50, 44, -31, 40, 16, 2, -31, -39, 14, 1, -13};
    vector<int> y1 = {-28, -24, 17, 2, 6, 28, -41, 13, -27, -19, -19, 26, 0, 12, 11, -42, -49, -44, 42, -50};
    vector<int> x2 = {40, 16, -27, 21, 32, 37, -17, -32, -21, 39, -37, -41, 5, -33, -34, -28, 11, 35, 12, 43};
    vector<int> y2 = {23, 36, -1, -7, -8, -18, -39, 31, 45, 10, -42, 28, 37, -45, -7, -35, 11, 10, 0, -46};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x1 = {-42, -16, 33, 27, -28, 47, -44, 30, 30, 7, -16, -20, -14, 5, -16, 26, -27, 16, 23};
    vector<int> y1 = {33, -18, -34, -46, -23, 26, 44, 21, -33, 21, 17, 38, 5, -41, 3, 23, 26, 2, -39};
    vector<int> x2 = {38, 15, -5, 47, 46, 48, 28, -35, 2, -38, -8, -34, 38, 42, 41, -30, 26, 17, -19};
    vector<int> y2 = {22, 11, 14, -26, -45, -14, -1, 40, -4, -5, 49, -1, -35, -23, -2, 29, 22, 33, 48};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {-50, 19, -44, 15, -40, 42, -33, 18, 32, -30, 46, 5, -19, 50, -48, 27, 2, -32, -23};
    vector<int> y1 = {46, -8, -25, -48, -11, 24, -30, -33, -34, 34, -23, -31, 5, 3, 35, -42, -43, -42, 40};
    vector<int> x2 = {33, -1, -30, -46, -30, -21, 1, 0, 42, -35, 42, -47, 22, 44, -12, -11, 15, 39, -31};
    vector<int> y2 = {-40, -15, -18, -16, -45, -8, 8, -41, 34, -41, -8, -34, 17, -29, -4, 1, -25, -28, -10};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {-11, 48, -32, 19, -33, 21, -37, -36, 26, 8, 26, 25, -9, -43, -36, -20, -15, -4, -27, -36, 38, -22, -25, -31, -26, 16, 34, 37, 12};
    vector<int> y1 = {-25, -20, 5, -31, -11, 29, -10, 31, 2, 23, 46, 33, -11, -31, 4, 13, 7, 27, 38, -45, -38, 15, -31, 2, -9, -12, -26, 24, -7};
    vector<int> x2 = {27, 26, 25, 38, 44, 42, -23, 25, 19, 30, 6, -9, -42, -26, 38, 45, 15, -4, -40, 14, -10, 50, 6, 9, -50, -35, -41, -37, 1};
    vector<int> y2 = {24, -25, -28, 16, 10, -45, -49, -45, 2, -39, -27, 10, -34, -35, 27, -15, -48, 24, -24, 43, 20, 24, 24, 11, 5, -1, 20, -43, -9};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {44, -40, -33, 17, -34, 18, 8, -39, 50, -33, -5, -23, -43, -31, 1, -42, -7, -45, -29, 44, 38, 1, -18, 49, -20, 25};
    vector<int> y1 = {15, 47, -15, -4, 6, 48, 0, 37, 21, 3, 12, -2, -26, -12, -29, -32, 35, 39, -42, 19, 21, 35, 37, 41, 6, 6};
    vector<int> x2 = {-43, -28, -13, 0, 29, 35, -29, 11, 8, 11, 30, -43, 38, 50, 28, 16, 1, -40, -29, 17, 44, -5, 42, 38, -29, -41};
    vector<int> y2 = {-15, -47, -2, -16, -4, -47, 28, -22, 8, 23, -38, -5, -16, 17, -17, -23, -50, 7, -35, -42, -6, 37, -6, -16, 28, -11};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {-18, 11, 3, 41, -47, 17, -17, -31, 32, 30, -20, -32, -29, -50, 42, -27, -35, 37, 0, -29, -44, 3, 24, -21, 43, -14, 31, 5, -41};
    vector<int> y1 = {49, 7, -1, 2, -42, 6, 45, 30, -15, -42, 28, 7, 2, -50, -47, 18, 17, 0, -44, 32, 6, 0, 35, 47, -15, -28, 19, 16, 7};
    vector<int> x2 = {30, -24, 32, 14, -45, 1, 27, -11, 45, -34, 5, -41, -17, 38, -28, 17, 25, 33, 18, -17, -25, 4, -40, -36, -17, -25, -24, -13, 45};
    vector<int> y2 = {9, -15, -5, 20, 24, -32, 39, -27, 45, -12, 35, 19, -35, -47, -3, -29, 33, 22, -8, 38, 47, 15, -36, 38, -44, -26, -33, -37, -42};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {-5, 12, 44, -1, -6, 50, -11, 29, -46, 20, 50, 10, -2, -27, -20, 6, 19, -6, -16, 35, 29, 25, 20, -37, 18, -43, -5, 7, 0, 30, 47, 37, -28};
    vector<int> y1 = {2, -2, 44, 20, -4, -12, -27, -1, 34, -9, -36, 30, 13, -34, -49, 35, 8, 46, 28, 38, 30, 9, 33, -43, 38, -24, 45, 41, 38, 22, 18, -9, 13};
    vector<int> x2 = {28, 32, 50, -2, 23, 25, -16, -26, -29, -28, 3, 38, 45, 47, -16, -15, 42, -23, -42, -41, 27, 24, 25, -37, 14, 20, 19, 45, -45, 30, 9, -8, -41};
    vector<int> y2 = {-14, -49, 11, 41, 21, 22, 48, -43, -4, 33, 39, 45, 30, -16, -41, -16, -5, -3, -25, -48, 15, 48, -46, -46, 50, -22, -13, 35, 25, -37, 0, 13, 8};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x1 = {-21, 25, 44, -35, 20, 8, 25, -37, -29, -38, -38, 6, 0, 23, -28, -27, 48, -26, -6, -23, -24, -44, 31, -31, 15, -36, 45, -36, 39, 26, 24, 36, -12, 33, 20, -5, 18, 26};
    vector<int> y1 = {-18, 46, -33, 0, 46, 16, -39, -28, -46, 42, 17, 46, -37, 14, 37, 30, 1, -34, -34, -29, 47, -11, 8, 2, 23, 8, 9, -28, -4, 28, -43, -17, -16, -39, 7, 17, -26, -1};
    vector<int> x2 = {50, 6, 38, 28, -4, 45, 23, 39, -46, 16, 23, -36, -2, 48, 48, -19, -35, -50, 45, 10, 24, -35, 31, 12, 17, -17, -44, 4, 27, 50, 35, -30, -17, -35, 22, 16, -30, -36};
    vector<int> y2 = {-5, -29, -41, 32, -19, -32, 29, -6, 23, 44, 28, -45, -37, -25, 18, 27, 16, -35, 35, 35, 22, -9, -40, -22, -3, -44, 19, -4, -13, 42, -4, -26, -5, -44, 11, -36, -11, -22};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x1 = {-32, -40, -17, -14, -39, -18, -26, -2, 12, -7, -14, -23, 46, -44, -23, 3, -20, -14, -17, 22, 40, 25, -44, 1, 47, -2, 47, -20, 28, -36, 3, -42, -7, 27, -40};
    vector<int> y1 = {14, 17, 24, 46, -17, -8, 8, -47, 32, 8, -23, -10, 6, -7, 1, -10, 32, 2, 5, 50, -49, -32, -13, 7, -24, -43, -22, -28, -36, -8, 47, -11, 30, 33, 34};
    vector<int> x2 = {46, -42, -42, 3, 31, -8, -43, 10, 46, -46, -3, 10, 27, -13, 30, -21, 38, -11, -48, 22, 20, 0, 29, 20, 42, 5, -47, -27, 39, 49, -7, 50, -13, 20, 38};
    vector<int> y2 = {-8, -35, -9, 34, -38, 4, -27, -5, 50, -50, 48, -15, -25, 2, -37, -6, -1, -32, 6, -13, 46, 27, 13, -49, -39, 8, -24, 39, -25, -26, 26, -44, 37, -27, -50};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x1 = {36, 8, -4, 23, -33, 36, -33, 35, -22, 45, -43, -29, 18, 49, 38, 42, -32, 19, 26, -47, -18, 39, -15, 10, -46, -15, 49, 15, 17, -39, -24, -7, -14, 14, -6, 27, -10, -40, -41, 45, 31};
    vector<int> y1 = {-20, 24, -34, -49, 19, 13, -25, 37, -15, -4, -12, 35, 46, 49, -3, -30, 15, -7, 49, -19, -37, 25, 21, -22, 3, -47, -36, 12, -2, -38, -21, -11, -26, -10, -14, -44, -7, 8, -11, 34, -27};
    vector<int> x2 = {44, -36, -38, 2, 23, 29, -19, -44, 19, 33, -6, -47, -43, 46, 37, -21, -32, -27, -24, -21, -35, -11, 37, 37, -9, 5, 7, 1, -47, -20, -3, 41, 1, 21, 0, 10, 28, 10, 22, -17, -5};
    vector<int> y2 = {-8, -46, -10, -45, 11, -44, 14, 9, 4, -19, 8, -5, -28, 49, -10, 35, -45, 21, 22, 38, -41, 6, -48, 20, 29, -48, 32, -31, -45, -10, -7, 33, -3, -29, 10, -24, 42, -5, 2, -49, 43};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x1 = {9, -45, 1, -28, -44, -30, -38, -39, -35, 25, 35, -38, -18, 30, -22, 4, 6, 31, -1, -38, -48, 32, -20, -39, 33, -24, 25, -21, -23, -27, -10, 38, -26, -31, -7, 19, -41, -40};
    vector<int> y1 = {16, 14, 20, -35, 3, -36, -29, 20, 33, 45, -44, -4, -6, 47, -20, 10, 26, 27, 10, 44, 10, -34, -43, 17, -20, 34, -24, -2, 27, 15, -19, 13, -24, -44, 32, 34, 31, -43};
    vector<int> x2 = {-13, -38, -24, -43, 50, 44, 48, 24, -23, 48, 20, -46, 21, -9, -18, -43, -30, 36, 35, 32, -30, -19, -42, 16, 24, -13, -32, -31, -37, -42, 42, 45, -4, 49, -12, 14, -50, -24};
    vector<int> y2 = {44, 2, -24, 6, -44, -20, 42, -17, 19, 24, 48, -44, 7, 15, -25, 43, 26, -23, -37, -13, -45, -2, 9, -8, 7, 3, -40, 18, 47, -34, -7, -39, -11, 30, -37, -21, 5, -48};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x1 = {38, -19, 7, -32, -45, 23, 1, -17, 6, -6, 42, -49, 42, -34, 14, -24, -38, -49, -42, -4, -49, 28, -36, 9, 3, 19, -48, -25, -21, -3, 23, -28, -3, -15, -8, -37, 3, -42, -34, 49, 20};
    vector<int> y1 = {-18, 6, 37, -9, 36, 17, -12, -2, 37, -38, 3, -41, -14, 34, 28, -24, -44, -32, -46, 8, -20, 35, 35, -34, 8, -32, -43, 7, -25, -43, -41, 30, 49, 33, 44, 2, 40, -28, -41, 21, 20};
    vector<int> x2 = {47, -28, 5, -22, 5, 1, -35, -17, 11, -38, -19, -2, 22, 13, 44, -9, 13, -38, -39, -1, 38, -47, -8, 4, -24, 2, -40, 39, -13, -47, 28, -38, 46, 20, 14, 20, 5, 42, -15, -14, 46};
    vector<int> y2 = {48, 14, 7, 25, -14, -2, 8, 33, -20, -29, 12, 21, -3, -4, 13, -30, -41, -44, -19, -8, 39, -18, -10, 47, -28, -38, 13, 40, 36, 40, 46, 46, 44, -1, 31, -26, -15, -12, -23, -14, -30};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x1 = {-27, -24, -21, -36, -43, -42, -26, -26};
    vector<int> y1 = {20, 16, 23, 24, 35, 32, 22, 24};
    vector<int> x2 = {-31, -28, -25, -24, -35, -38, -30, -34};
    vector<int> y2 = {23, 19, 26, 15, 29, 29, 25, 30};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x1 = {13, 9, 5, 9, 11, 9, 12, 2, 11};
    vector<int> y1 = {-22, -35, -26, -22, -15, -31, -29, -13, -13};
    vector<int> x2 = {14, 7, 4, 11, 15, 10, 9, 5, 13};
    vector<int> y2 = {-25, -29, -23, -28, -27, -34, -20, -22, -19};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x1 = {-19, -9, -21, -13, -18, -7, -9, -11, -16, -12, -7, -11, -17, -7};
    vector<int> y1 = {36, 22, 34, 20, 42, 21, 19, 30, 34, 37, 26, 37, 23, 19};
    vector<int> x2 = {-15, -13, -19, -17, -12, -15, -13, -15, -18, -8, -15, -13, -21, -13};
    vector<int> y2 = {28, 30, 30, 28, 30, 37, 27, 38, 38, 29, 42, 41, 31, 31};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x1 = {-2, -4, 5, -5, -1, -3, 0, 4};
    vector<int> y1 = {25, 31, 31, 35, 27, 27, 32, 39};
    vector<int> x2 = {-2, -4, 5, -5, -1, -3, 0, 4};
    vector<int> y2 = {33, 43, 35, 31, 31, 31, 28, 35};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x1 = {33, 29, 31, 23, 37, 33, 22, 40, 45, 44, 23, 28, 33};
    vector<int> y1 = {33, 32, 33, 24, 43, 38, 29, 38, 40, 41, 19, 22, 32};
    vector<int> x2 = {41, 41, 23, 39, 21, 25, 26, 28, 41, 32, 27, 32, 25};
    vector<int> y2 = {41, 44, 25, 40, 27, 30, 33, 26, 36, 29, 23, 26, 24};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x1 = {26, 41, 34, 35, 27, 20, 19, 38, 28, 32, 26, 35, 27, 20, 31, 33, 26, 44, 19};
    vector<int> y1 = {7, 7, 13, 8, 11, 8, 5, 13, 8, 13, 4, 5, 5, 4, 10, 4, 12, 15, 10};
    vector<int> x2 = {30, 29, 38, 19, 43, 28, 23, 34, 20, 28, 30, 27, 23, 28, 19, 45, 38, 40, 27};
    vector<int> y2 = {8, 4, 14, 4, 15, 10, 6, 12, 6, 12, 5, 3, 4, 6, 7, 7, 15, 14, 12};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {-18, -17, -16, -21, -12, -17, -17, -20, -8, -12, -13};
    vector<int> y1 = {-3, 4, 2, 0, 3, -2, 1, -1, -4, -5, 5};
    vector<int> x2 = {-22, -19, -10, -25, -16, -19, -23, -18, -10, -18, -9};
    vector<int> y2 = {-3, 4, 2, 0, 3, -2, 1, -1, -4, -5, 5};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x1 = {13, 7, 9, 8, 10, 10, 6, 6, 6, 9, 8, 10, 12, 5, 4, 11, 12, 4, 6, 8, 6, 13, 12, 2, 1, 7, 6};
    vector<int> y1 = {32, 34, 32, 29, 33, 34, 23, 34, 27, 19, 36, 42, 26, 36, 40, 31, 39, 37, 35, 41, 31, 34, 37, 28, 22, 28, 39};
    vector<int> x2 = {11, 5, 8, 10, 7, 11, 9, 5, 10, 11, 4, 6, 14, 6, 1, 14, 11, 1, 8, 7, 9, 12, 10, 4, 2, 10, 7};
    vector<int> y2 = {24, 26, 28, 37, 21, 38, 35, 30, 43, 27, 20, 26, 34, 40, 28, 43, 35, 25, 43, 37, 43, 30, 29, 36, 26, 40, 43};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x1 = {-13, 32, 28, 26, -26, 31, 37};
    vector<int> y1 = {-26, 40, 44, 36, -9, -45, 11};
    vector<int> x2 = {-15, 34, 26, 28, -30, 33, 39};
    vector<int> y2 = {-26, 40, 44, 36, -9, -45, 11};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x1 = {10, 13, -32, -2, -46, -33, 12, -46, 18, 36, -39};
    vector<int> y1 = {8, 20, 40, -10, 38, 14, 42, 13, -39, 26, 45};
    vector<int> x2 = {9, 14, -33, 1, -44, -32, 13, -47, 17, 34, -36};
    vector<int> y2 = {8, 20, 40, -10, 38, 14, 42, 13, -39, 26, 45};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x1 = {-6, 40, 36, 34, -20, 45};
    vector<int> y1 = {-33, 32, 36, 28, -15, 3};
    vector<int> x2 = {-6, 40, 36, 34, -20, 45};
    vector<int> y2 = {-35, 34, 34, 30, -19, 5};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x1 = {17, 23, -26, 7, -36, -23, 21, -10, -40, 24, 43, -30};
    vector<int> y1 = {1, 10, 34, -19, 28, 4, 33, 0, 7, -45, 19, 36};
    vector<int> x2 = {17, 23, -26, 7, -36, -23, 21, -10, -40, 24, 43, -30};
    vector<int> y2 = {0, 11, 33, -16, 30, 5, 34, 2, 6, -46, 17, 39};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x1 = {38, 42, -29, -28, -31, -15, -10, 8, -7, 43, -38, -2, -43, -8, -35, -33, -39, 24, -6, 12};
    vector<int> y1 = {-31, -39, -33, 14, -27, 21, -8, 32, -34, -7, -31, -23, -39, 26, 36, -18, 25, -19, 14, 25};
    vector<int> x2 = {38, 42, -29, -28, -31, -15, -10, 8, -7, 43, -38, -2, -43, -8, -35, -33, -39, 24, -6, 12};
    vector<int> y2 = {-28, -38, -35, 11, -30, 24, -5, 31, -32, -10, -29, -22, -42, 27, 37, -19, 23, -20, 15, 28};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x1 = {-17, -35, -19, 3, -2, 38, -8, 20, 43, -11, -15, -18, 44, 11, 36, 15, -43, -33, 17, 30, 26, -37, -34};
    vector<int> y1 = {6, -13, -21, -5, 29, -28, -29, 6, -34, 10, 21, 10, -42, 10, 5, -20, 6, -35, -39, -48, -31, 24, 19};
    vector<int> x2 = {-17, -35, -19, 3, -2, 38, -8, 20, 43, -11, -15, -18, 44, 11, 36, 15, -43, -33, 17, 30, 26, -37, -34};
    vector<int> y2 = {8, -14, -19, -2, 30, -29, -30, 7, -36, 7, 17, 11, -40, 8, 2, -17, 4, -36, -36, -46, -28, 21, 18};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    vector<int> x1 = {16, 1, 3, 11, 5, -10, -5};
    vector<int> y1 = {-15, 39, 2, 9, 5, 28, -16};
    vector<int> x2 = {16, 1, 3, 11, 5, -10, -5};
    vector<int> y2 = {29, -33, -4, 28, 35, -50, 37};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x1 = {32, -18, -14, 1, 45, 36, -27, 17};
    vector<int> y1 = {13, -39, 48, 22, 0, 23, -47, 46};
    vector<int> x2 = {32, -18, -14, 1, 45, 36, -27, 17};
    vector<int> y2 = {9, 35, 50, -39, 49, 15, 12, -17};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x1 = {10, 14, -23, -34, -30, -19, -10, 2, -22, 3, -1};
    vector<int> y1 = {5, 44, -50, -3, -45, 35, -7, 15, 26, 46, -13};
    vector<int> x2 = {10, 14, -23, -34, -30, -19, -10, 2, -22, 3, -1};
    vector<int> y2 = {21, 32, -12, -20, 29, -44, -12, 49, 28, 3, 22};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x1 = {-2, 27, 22, 11, -36, 26, -29, -28, -24, -1, 0, -13, 34};
    vector<int> y1 = {-21, 22, -46, -40, -28, 50, -32, 4, -3, 8, 42, -8, 43};
    vector<int> x2 = {-2, 27, 22, 11, -36, 26, -29, -28, -24, -1, 0, -13, 34};
    vector<int> y2 = {9, -34, 17, -20, -20, 9, -34, -24, -23, -39, -40, -19, 17};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x1 = {-9, -7, 8, 23, -22, -15, -31, 6, 2, 29, 25, 10, 14, -13, 38, 47, 31};
    vector<int> y1 = {-34, -27, -44, -8, 2, 26, 33, 25, -8, 44, -16, -7, -34, 48, 29, -27, 9};
    vector<int> x2 = {-9, -7, 8, 23, -22, -15, -31, 6, 2, 29, 25, 10, 14, -13, 38, 47, 31};
    vector<int> y2 = {-38, -48, -10, -19, 50, -39, 11, -2, -26, 46, -36, 40, -49, -23, -6, -35, -1};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x1 = {42, 25, -7, -23, -11, -28, 21, -21, 37, 33, 41, -19, -27, 35};
    vector<int> y1 = {50, -25, -40, 35, -31, -33, 15, -36, 45, -30, -25, 41, 5, -31};
    vector<int> x2 = {42, 25, -7, -23, -11, -28, 21, -21, 37, 33, 41, -19, -27, 35};
    vector<int> y2 = {27, 42, 41, -28, 11, 33, 22, 10, 7, -28, 22, -19, -38, -49};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x1 = {2, -9, 23, 9, 8, 14, 1, -32, 5, -1, 34, 11, 35, 19, 32, -22, -13, -25, 42, -7, -4, -24, 17};
    vector<int> y1 = {19, -31, -2, 34, 8, 29, -24, -27, -36, -38, 19, 38, -25, -2, 40, -24, 2, -23, 36, 0, -4, 41, -8};
    vector<int> x2 = {2, -9, 23, 9, 8, 14, 1, -32, 5, -1, 34, 11, 35, 19, 32, -22, -13, -25, 42, -7, -4, -24, 17};
    vector<int> y2 = {6, -16, 27, 22, 39, -40, 49, -1, 2, -28, -21, -5, 24, -18, 23, 16, -27, 33, 46, 15, 11, -1, 8};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x1 = {6, -40, -45, 11, -1, 17, -31, 27, -35, -44, 10, -17, -33, -8, -24, -28, -27, 9, 25, 5, -23, 20, -43, 22, -38, -47, 15, -10, 13, 26, 29, -29};
    vector<int> y1 = {46, -16, 26, 41, 24, -40, 5, 29, -45, 28, -14, -33, 33, -38, 19, -35, -27, -39, -23, 49, -34, -41, -25, -41, 42, -33, 16, 17, -47, -14, 1, 23};
    vector<int> x2 = {6, -40, -45, 11, -1, 17, -31, 27, -35, -44, 10, -17, -33, -8, -24, -28, -27, 9, 25, 5, -23, 20, -43, 22, -38, -47, 15, -10, 13, 26, 29, -29};
    vector<int> y2 = {33, 3, 22, -2, -21, -11, 22, -27, 42, -1, 5, -30, 23, -5, -8, 5, -50, -19, 42, -20, -1, 32, -30, 42, 34, 0, 2, -8, -34, -44, 8, -30};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x1 = {-20, -24, 1, 19, 50, 4, -17};
    vector<int> y1 = {-9, -2, -1, -1, 8, 1, -1};
    vector<int> x2 = {1, -3, -8, -2, 44, -2, -14};
    vector<int> y2 = {-2, 5, -4, -8, 6, -1, 0};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x1 = {27, 13, -25, -9, 20, -20};
    vector<int> y1 = {4, 1, -1, 3, -1, 3};
    vector<int> x2 = {29, 1, -23, -19, 18, -32};
    vector<int> y2 = {5, -5, 0, -2, -2, -3};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x1 = {-4, -4, 9, 32, 11, -1, -28, 28, -16, -4, -1, 35, -24, 2, -17, -1, 0};
    vector<int> y1 = {-1, -8, 7, 1, -6, 1, 1, 6, -1, -3, -4, 9, 0, 1, 3, -6, 0};
    vector<int> x2 = {0, 7, -5, 34, 25, 2, -31, 31, -20, -2, 9, 24, -27, 1, -25, 15, -4};
    vector<int> y2 = {3, 3, -7, 3, 8, 4, -2, 9, -5, -1, 6, -2, -3, 0, -5, 10, -4};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x1 = {-15, 39, 2, 9, 5, 28, -16};
    vector<int> y1 = {16, 1, 3, 11, 5, -10, -5};
    vector<int> x2 = {29, -33, -4, 28, 35, -50, 37};
    vector<int> y2 = {16, 1, 3, 11, 5, -10, -5};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x1 = {13, -39, 48, 22, 0, 23, -47, 46};
    vector<int> y1 = {32, -18, -14, 1, 45, 36, -27, 17};
    vector<int> x2 = {9, 35, 50, -39, 49, 15, 12, -17};
    vector<int> y2 = {32, -18, -14, 1, 45, 36, -27, 17};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x1 = {5, 44, -50, -3, -45, 35, 43, 15, 26, -12, 46, -32, -13};
    vector<int> y1 = {30, 34, -3, -14, -10, 1, 10, 22, 15, 5, 23, -2, 19};
    vector<int> x2 = {21, 32, -12, -20, 29, -44, -41, 49, 28, 3, 3, -18, 22};
    vector<int> y2 = {30, 34, -3, -14, -10, 1, 10, 22, 15, 5, 23, -2, 19};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x1 = {-20, 17, 17, -8, 36, -50, -23, -39, -20, -40, -24, -21, -34};
    vector<int> y1 = {-32, 28, 39, 40, -9, 5, -18, 25, -29, -15, 19, 42, -30};
    vector<int> x2 = {-42, -18, 4, -19, -47, 39, 43, 4, 50, 11, 8, 9, -7};
    vector<int> y2 = {-32, 28, 39, 40, -9, 5, -18, 25, -29, -15, 19, 42, -30};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x1 = {-23, 11, -34, -23, -23, 12, -48, 15, -14, -38, 11, 20, -44, -43, -21, -26, 22, 18, 21, 2, -7, 42, 29, -35, 50, -28};
    vector<int> y1 = {13, 19, 24, -27, 18, 11, 27, -12, 22, 5, -39, 32, -28, -17, -23, -15, 14, -26, 23, -18, -22, 35, -31, -9, 8, -36};
    vector<int> x2 = {-27, -34, 25, -34, 26, 46, 29, -8, 31, -8, 15, -12, -10, 33, -11, -40, 24, -25, -16, 50, 40, 48, 2, -27, 20, 40};
    vector<int> y2 = {13, 19, 24, -27, 18, 11, 27, -12, 22, 5, -39, 32, -28, -17, -23, -15, 14, -26, 23, -18, -22, 35, -31, -9, 8, -36};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x1 = {10, -28, 6, -25, 7, -26, -27, -44, -30, 34, 19, -40, -8, 38, -43, 41, 29, -49, -2, 29, -19, 13, -31, 22};
    vector<int> y1 = {-16, 38, 43, -23, 35, 31, -21, -30, 37, -25, 6, -7, 4, 10, 39, 21, -29, 30, -17, 44, -24, 8, 23, -9};
    vector<int> x2 = {45, 47, -24, 24, 14, 41, -30, 37, 2, 22, -21, 41, 8, -4, -23, 29, -40, -33, 27, 14, -8, -9, 19, -19};
    vector<int> y2 = {-16, 38, 43, -23, 35, 31, -21, -30, 37, -25, 6, -7, 4, 10, 39, 21, -29, 30, -17, 44, -24, 8, 23, -9};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x1 = {-42, 21, 25, -12, 45, -26, -10, -11, -8, -43, 3, -11, 27, -19, -30, -11, 15, -31, -31, 4, -39, 27, -20, 16, 22, -31, 25, 44, -35, 42, -48, -36, 46, -21, -42, -45, -34, 0, 34, 10, -15, 8};
    vector<int> y1 = {-13, -4, 30, 3, -27, 2, 25, 11, -30, -8, -44, -2, 17, -36, -17, -14, 32, -7, 26, -12, -34, 8, -18, 21, 34, 4, -3, -31, -28, -21, -20, -35, 20, 7, -42, -6, -23, 13, 18, -40, 10, 24};
    vector<int> x2 = {-11, 29, 33, -4, -15, -35, -23, -30, 5, -31, 44, -42, -20, 5, 1, -25, -25, 38, -47, 38, 26, 24, 26, -33, 17, -10, -28, 10, -41, 24, -4, 31, -23, -8, 39, -37, 42, -41, -30, -9, 7, 23};
    vector<int> y2 = {-13, -4, 30, 3, -27, 2, 25, 11, -30, -8, -44, -2, 17, -36, -17, -14, 32, -7, 26, -12, -34, 8, -18, 21, 34, 4, -3, -31, -28, -21, -20, -35, 20, 7, -42, -6, -23, 13, 18, -40, 10, 24};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x1 = {-12, -25, -38, -29, -7, -2, 11, -16, 0, 0, -50, 50, 38, -41, 8, 28, -36, -2, -1, 2, -5, 37, 24, -26, 17, -40, 15, -12, -43, -29, 39, 28, 38, -28, 14, 50, 35, -15, 20, 3, -43};
    vector<int> y1 = {-4, 32, 9, -9, 22, 47, -22, -2, 7, 5, 24, -18, 35, -23, 4, -30, -10, 13, 43, 41, 3, 21, -12, -21, 50, -5, 25, -15, -1, 10, 29, 42, 30, 14, 11, 16, 15, 6, 38, 17, -27};
    vector<int> x2 = {-35, -31, -10, -42, 1, -43, -22, 44, -16, -29, 5, 24, -16, 20, -33, -17, -45, 17, 34, 9, 12, 24, -31, -9, 1, 47, -43, 50, 12, -35, -40, -39, -40, -47, 43, 21, -47, -13, -22, 11, -26};
    vector<int> y2 = {-4, 32, 9, -9, 22, 47, -22, -2, 7, 5, 24, -18, 35, -23, 4, -30, -10, 13, 43, 41, 3, 21, -12, -21, 50, -5, 25, -15, -1, 10, 29, 42, 30, 14, 11, 16, 15, 6, 38, 17, -27};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x1 = {0, 1, 0, 0};
    vector<int> y1 = {0, 0, 0, 1};
    vector<int> x2 = {0, 1, 1, 1};
    vector<int> y2 = {1, 1, 0, 1};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x1 = {10, -35, -8, 7, -5, -8, -9, -50, -17, -18, -17, -26, -5, 23, 18, -7, -8, -6, -8, -12, 22, -7, 17, -48, -6, -16, -12, -14, 13, 30, 11, 17, -3, -5, -27, -30};
    vector<int> y1 = {-27, -25, -17, -26, -3, -19, -20, -33, -22, -21, -23, -38, -2, -32, -27, -8, -2, -5, -21, -7, -15, -15, -5, -27, 0, -19, -25, 1, -22, -11, -13, -38, -1, -6, -17, -32};
    vector<int> x2 = {16, -32, -11, 11, -3, -9, -8, -45, -16, -15, -19, -29, -2, 20, 24, -1, 4, -7, -5, -13, 16, -9, 29, -43, 2, -17, -15, -15, 17, 24, 23, 14, -7, -3, -24, -33};
    vector<int> y2 = {-35, -23, -26, -32, -3, -21, -18, -30, -20, -15, -27, -42, -5, -28, -35, 2, -5, -6, -15, -7, -13, -19, -9, -24, -12, -21, -34, 1, -28, -9, -17, -34, -9, 0, -15, -36};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x1 = {0, 0, 0, 1};
    vector<int> y1 = {0, 0, 1, 0};
    vector<int> x2 = {0, 1, 1, 1};
    vector<int> y2 = {1, 0, 1, 1};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x1 = {0, 0, 1, 0};
    vector<int> y1 = {0, 0, 0, 1};
    vector<int> x2 = {0, 1, 1, 1};
    vector<int> y2 = {1, 0, 1, 1};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x1 = {0, 1, 2, 0, 0, 0, 0, 0, 3};
    vector<int> y1 = {0, 0, 0, 1, 2, 0, 0, 3, 0};
    vector<int> x2 = {0, 1, 2, 1, 1, 1, 1, 1, 3};
    vector<int> y2 = {1, 1, 1, 1, 2, 0, 1, 3, 1};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x1 = {1, 2, 4};
    vector<int> y1 = {0, 0, 0};
    vector<int> x2 = {0, 0, 0};
    vector<int> y2 = {2, 4, 8};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x1 = {0, -1, -2, 3};
    vector<int> y1 = {0, 0, 0, 0};
    vector<int> x2 = {0, -1, -2, 3};
    vector<int> y2 = {1, 1, 1, 1};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x1 = {0, 0, 0, 0, 0};
    vector<int> y1 = {0, 1, 3, 5, 6};
    vector<int> x2 = {1, 2, 3, 4, 5};
    vector<int> y2 = {0, 1, 3, 5, 6};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x1 = {-50, -50};
    vector<int> y1 = {50, -50};
    vector<int> x2 = {50, 50};
    vector<int> y2 = {49, -49};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x1 = {-1, 3, -2, -6};
    vector<int> y1 = {5, 5, 5, 4};
    vector<int> x2 = {1, 3, -2, 7};
    vector<int> y2 = {5, 4, 4, 4};
    CentersOfSymmetry* pObj = new CentersOfSymmetry();
    clock_t start = clock();
    int result = pObj->lineConfigurations(x1, y1, x2, y2);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15868491&rd=11128&pm=8546
********************************************************************************
#include <set> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <sstream> 
 
using namespace std; 
 
#define forn(i, n) for (int i = 0; i < (int)(n); i++) 
#define sz(a) (int)(a).size() 
 
typedef long long ll; 
typedef vector <int> vi; 
 
#define maxn 53 
#define eps 1e-6 
 
typedef long double dbl; 
 
dbl a[maxn], b[maxn], c[maxn]; 
int u[maxn]; 
 
struct pnt 
{ 
  dbl x, y; 
  pnt( dbl _x = 0, dbl _y = 0 ) { x = _x, y = _y; } 
}; 
 
bool operator < ( pnt a, pnt b ) 
{ 
  if (fabs(a.x - b.x) > eps) 
    return a.x < b.x; 
  return a.y + eps < b.y; 
} 
 
int Par( int i, int j ) 
{ 
  return fabs(a[i] - a[j]) < eps && fabs(b[i] - b[j]) < eps; 
} 
 
class CentersOfSymmetry 
{ 
public: 
  int lineConfigurations(vector <int> x1, vector <int> y1, vector <int> x2, vector <int> y2) 
  { 
    int n = sz(x1); 
    forn(i, n) 
    { 
      a[i] = y1[i] - y2[i]; 
      b[i] = x2[i] - x1[i]; 
      double no = sqrt(a[i] * a[i] + b[i] * b[i]); 
      a[i] /= no, b[i] /= no; 
      if (a[i] < -eps || (a[i] < eps && b[i] < -eps)) 
        a[i] = -a[i], b[i] = -b[i]; 
      c[i] = -(a[i] * x1[i] + b[i] * y1[i]); 
    } 
     
    int s = 0, t = -1; 
    forn(i, n) 
      if (!Par(i, s)) 
        t = i; 
    if (t == -1) 
    { 
      sort(c, c + n); 
      int f = 1; 
      forn(i, n) 
        if (fabs(c[i] + c[n - i - 1] - c[n - 1] - c[0]) > eps) 
          f = 0; 
      return f ? -1 : 0; 
    } 
    else 
    { 
      set <pnt> ans; 
      forn(i, n) 
        forn(j, n) 
          if (Par(i, s) && Par(j, t)) 
          { 
            dbl a1 = a[i], b1 = b[i], c1 = (c[i] + c[s]) / 2; 
            dbl a2 = a[j], b2 = b[j], c2 = (c[j] + c[t]) / 2; 
            dbl x, y; 
            x = -(c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1); 
            y = -(c1 * a2 - c2 * a1) / (b1 * a2 - b2 * a1); 
             
            int f = 1; 
            memset(u, 0, sizeof(u)); 
            forn(k, n) 
              if (!u[k]) 
              { 
                forn(t, n) 
                  if (!u[t] && Par(k, t) && fabs(a[k] * x + b[k] * y + (c[k] + c[t]) / 2) < eps) 
                  { 
                    u[k] = u[t] = 1; 
                    break; 
                  } 
                if (!u[k]) 
                  f = 0; 
              } 
            if (f) 
              ans.insert(pnt(x, y)); 
          } 
       return ans.size(); 
    }     
  } 
};

********************************************************************************
*******************************************************************************/