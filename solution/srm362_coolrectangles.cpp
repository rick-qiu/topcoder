/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8015
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

class CoolRectangles {
public:
    int compress(vector<int> x1, vector<int> y1, vector<int> x2, vector<int> y2);
};

int CoolRectangles::compress(vector<int> x1, vector<int> y1, vector<int> x2, vector<int> y2) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x1 = {0, 1, 2};
    vector<int> y1 = {0, 1, 2};
    vector<int> x2 = {1, 2, 3};
    vector<int> y2 = {1, 2, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x1 = {0, 1};
    vector<int> y1 = {0, 1};
    vector<int> x2 = {2, 3};
    vector<int> y2 = {2, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x1 = {1, 0};
    vector<int> y1 = {1, 2};
    vector<int> x2 = {3, 4};
    vector<int> y2 = {4, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
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
    vector<int> x1 = {0, 1, 1};
    vector<int> y1 = {0, 1, 1};
    vector<int> x2 = {2, 3, 2};
    vector<int> y2 = {2, 3, 2};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
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
    vector<int> x1 = {0, -1, -2, -3};
    vector<int> y1 = {0, 1, 2, 3};
    vector<int> x2 = {1, 2, 3, 4};
    vector<int> y2 = {7, 6, 5, 4};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
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
    vector<int> x1 = {0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17, -18, -19, -20, -21, -22, -23, -24, -25, -26, -27, -28, -29};
    vector<int> y1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    vector<int> x2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    vector<int> y2 = {59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x1 = {-10000};
    vector<int> y1 = {-10000};
    vector<int> x2 = {10000};
    vector<int> y2 = {10000};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 400000000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x1 = {0, 0};
    vector<int> y1 = {0, 0};
    vector<int> x2 = {1, 1};
    vector<int> y2 = {1, 1};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x1 = {0, -1};
    vector<int> y1 = {0, 1};
    vector<int> x2 = {1, 2};
    vector<int> y2 = {59, 58};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x1 = {0, -4, -18, -20, -21, -24, -28, -29};
    vector<int> y1 = {0, 4, 18, 20, 21, 24, 28, 29};
    vector<int> x2 = {1, 5, 19, 21, 22, 25, 29, 30};
    vector<int> y2 = {59, 55, 41, 39, 38, 35, 31, 30};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x1 = {-2, -3, -5, -6, -8, -11, -13, -15, -16, -19, -20, -21, -24, -25};
    vector<int> y1 = {2, 3, 5, 6, 8, 11, 13, 15, 16, 19, 20, 21, 24, 25};
    vector<int> x2 = {3, 4, 6, 7, 9, 12, 14, 16, 17, 20, 21, 22, 25, 26};
    vector<int> y2 = {57, 56, 54, 53, 51, 48, 46, 44, 43, 40, 39, 38, 35, 34};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x1 = {0, -2, -3, -6, -10, -12, -15, -19, -20, -21, -22, -23, -24, -26, -27};
    vector<int> y1 = {0, 2, 3, 6, 10, 12, 15, 19, 20, 21, 22, 23, 24, 26, 27};
    vector<int> x2 = {1, 3, 4, 7, 11, 13, 16, 20, 21, 22, 23, 24, 25, 27, 28};
    vector<int> y2 = {59, 57, 56, 53, 49, 47, 44, 40, 39, 38, 37, 36, 35, 33, 32};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x1 = {-2, -3, -4, -5, -8, -16, -18};
    vector<int> y1 = {2, 3, 4, 5, 8, 16, 18};
    vector<int> x2 = {3, 4, 5, 6, 9, 17, 19};
    vector<int> y2 = {57, 56, 55, 54, 51, 43, 41};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x1 = {-5, -6, -8, -9, -22};
    vector<int> y1 = {5, 6, 8, 9, 22};
    vector<int> x2 = {6, 7, 9, 10, 23};
    vector<int> y2 = {54, 53, 51, 50, 37};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x1 = {-2, -7, -11, -15, -28};
    vector<int> y1 = {2, 7, 11, 15, 28};
    vector<int> x2 = {3, 8, 12, 16, 29};
    vector<int> y2 = {57, 52, 48, 44, 31};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x1 = {-2, -29};
    vector<int> y1 = {2, 29};
    vector<int> x2 = {3, 30};
    vector<int> y2 = {57, 30};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x1 = {0, -7, -8, -13, -15, -19, -26, -29};
    vector<int> y1 = {0, 7, 8, 13, 15, 19, 26, 29};
    vector<int> x2 = {1, 8, 9, 14, 16, 20, 27, 30};
    vector<int> y2 = {59, 52, 51, 46, 44, 40, 33, 30};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x1 = {-1, -4, -17, -26};
    vector<int> y1 = {1, 4, 17, 26};
    vector<int> x2 = {2, 5, 18, 27};
    vector<int> y2 = {58, 55, 42, 33};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x1 = {0, 2};
    vector<int> y1 = {0, 1};
    vector<int> x2 = {1, 3};
    vector<int> y2 = {1, 2};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
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
    vector<int> x1 = {1, 0};
    vector<int> y1 = {1, 0};
    vector<int> x2 = {2, 1};
    vector<int> y2 = {2, 2};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x1 = {1, 0, 0};
    vector<int> y1 = {1, 0, 2};
    vector<int> x2 = {3, 3, 2};
    vector<int> y2 = {3, 4, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x1 = {0, 0, 0, 1};
    vector<int> y1 = {0, 0, -1, -1};
    vector<int> x2 = {2, 2, 1, 2};
    vector<int> y2 = {2, 2, 3, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x1 = {3, 0};
    vector<int> y1 = {0, 3};
    vector<int> x2 = {6, 8};
    vector<int> y2 = {3, 9};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x1 = {0, 2};
    vector<int> y1 = {0, 0};
    vector<int> x2 = {9, 5};
    vector<int> y2 = {9, 5};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x1 = {0, 3};
    vector<int> y1 = {0, 0};
    vector<int> x2 = {9, 5};
    vector<int> y2 = {9, 5};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x1 = {0, 0};
    vector<int> y1 = {0, 0};
    vector<int> x2 = {9, 5};
    vector<int> y2 = {9, 5};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x1 = {0, 0, 3};
    vector<int> y1 = {0, 0, 0};
    vector<int> x2 = {9, 3, 100};
    vector<int> y2 = {9, 7, 7};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x1 = {0, 0, 50};
    vector<int> y1 = {0, 0, 0};
    vector<int> x2 = {100, 50, 99};
    vector<int> y2 = {100, 99, 101};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5049;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x1 = {0, 0, 50, 50};
    vector<int> y1 = {0, 0, 0, 0};
    vector<int> x2 = {100, 50, 99, 100};
    vector<int> y2 = {100, 99, 101, 99};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5099;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x1 = {587, 221, 895, 109, 907, 775};
    vector<int> y1 = {684, 147, 535, 633, 843, 292};
    vector<int> x2 = {1067, 512, 1410, 626, 1414, 903};
    vector<int> y2 = {8481, 7209, 1147, 4436, 1099, 8064};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 310138;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x1 = {933, 147, 305, 929, 194, 580, 460, 975, 18, 244, 369};
    vector<int> y1 = {762, 137, 252, 13, 234, 560, 769, 820, 767, 457, 497};
    vector<int> x2 = {1242, 965, 622, 1692, 308, 798, 567, 1896, 810, 1035, 1117};
    vector<int> y2 = {6768, 5753, 1752, 6727, 1626, 6426, 5746, 7480, 1392, 9711, 1587};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 39009;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x1 = {59, 253, 985, 786, 329, 422, 351, 197, 428, 26, 380, 279, 240};
    vector<int> y1 = {57, 973, 783, 562, 798, 375, 776, 343, 651, 339, 501, 392, 879};
    vector<int> x2 = {99, 329, 1846, 1326, 578, 467, 928, 742, 710, 286, 1330, 322, 1057};
    vector<int> y2 = {242, 6742, 8158, 6090, 7911, 5799, 4966, 8005, 6371, 5760, 652, 9528, 2509};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 157340;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x1 = {900};
    vector<int> y1 = {878};
    vector<int> x2 = {1220};
    vector<int> y2 = {5082};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1345280;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x1 = {-123, -661, 195, 548, -143, 388, -584, -161, -378, -746};
    vector<int> y1 = {-364, -7, 53, -287, -154, -105, -127, 123, 3, 465};
    vector<int> x2 = {827, -635, 775, 1417, 434, 1271, 396, -18, -237, 157};
    vector<int> y2 = {9270, 6452, 2858, 5857, 2678, 8277, 4752, 5781, 985, 1763};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 171960;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x1 = {417, -59, -604, -465, 178, -454, -146, 94, 256, -11, -172, -458};
    vector<int> y1 = {-557, 519, 372, 290, 336, 349, -217, 145, -14, -156, -562, 86};
    vector<int> x2 = {1313, 870, -221, 334, 323, -15, -93, 423, 516, 163, 417, 75};
    vector<int> y2 = {7668, 5657, 2587, 8232, 7661, 4450, 256, 7317, 25, 4068, 203, 1083};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 80639;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x1 = {-65, -7, -339, 27, -116, -141, -449, 296, -242, 452, 547, 114, 200, 104};
    vector<int> y1 = {576, -252, -565, 215, 930, -713, -57, -862, -201, 561, -423, 341, 169, -655};
    vector<int> x2 = {421, 820, 208, 789, 118, 484, -299, 665, 751, 669, 1146, 483, 329, 332};
    vector<int> y2 = {1568, 6962, 1621, 2042, 9115, 167, 6762, -27, 53, 6469, 4875, 4024, 7238, 6372};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 135315;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x1 = {250, -616, -103, -613, -487, 31, 196, 188};
    vector<int> y1 = {387, 408, -529, 84, -234, -530, -319, 745};
    vector<int> x2 = {259, -158, 843, -256, -348, 355, 608, 338};
    vector<int> y2 = {2589, 6473, 3955, 1372, 1300, 646, 4216, 2260};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 216625;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x1 = {-462, -86, 762, -628};
    vector<int> y1 = {71, -129, 870, 649};
    vector<int> x2 = {434, 545, 922, 306};
    vector<int> y2 = {8336, 528, 1853, 8545};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x1 = {-653, -2546, 1677, 374, 1951, -289, -1993, 86};
    vector<int> y1 = {341, -837, 1417, 794, -1007, 473, -176, -1097};
    vector<int> x2 = {-1, -393, 3113, 2194, 2329, 2219, -1890, 194};
    vector<int> y2 = {1110, 441, 2230, 1124, 562, 1421, 1141, 856};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 999195;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x1 = {-1113, 2056, 1527, 1714, 1624, 1221, -555, -1659, -1412, 302};
    vector<int> y1 = {-1852, 339, -265, 1370, 2483, -425, -265, 572, 416, -492};
    vector<int> x2 = {-515, 2112, 2766, 1817, 3571, 1285, 622, -1366, -493, 1631};
    vector<int> y2 = {-1491, 1648, -43, 2497, 5193, 1242, -2, 1687, 435, 922};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 963355;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x1 = {33, 1883, -1905, -202, 913, -591, 1649, -778, -2069, 867};
    vector<int> y1 = {315, 427, -510, -1116, 313, -513, -53, -234, 620, 85};
    vector<int> x2 = {2081, 4298, 330, 1808, 2101, 964, 3925, -107, -1129, 1922};
    vector<int> y2 = {1800, 759, 1547, 488, 2228, 1379, 48, 2078, 1472, 2861};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 265680;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x1 = {1968, 95, -961, -611, 2054, 2193, -2832, 575, -972};
    vector<int> y1 = {-845, 225, -356, 714, -1610, 1031, -1235, -844, 1042};
    vector<int> x2 = {3725, 2866, -51, 1813, 4081, 3366, -2421, 3471, 1653};
    vector<int> y2 = {485, 3094, 876, 1032, -255, 3395, 1304, 1437, 3114};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2988678;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x1 = {1011, -647, 134, -2009, 875, 819};
    vector<int> y1 = {189, -1504, 1830, -1383, -319, 825};
    vector<int> x2 = {2530, 1930, 620, -805, 1821, 1054};
    vector<int> y2 = {1419, 1224, 2476, 203, 1982, 2943};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2325650;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x1 = {-1346, 690, 1700, 115, 1523, -117, -740, -364, -517};
    vector<int> y1 = {-616, -1696, 95, -2389, -1921, 147, -672, 2125, -139};
    vector<int> x2 = {894, 2815, 2639, 2972, 4417, 2753, 1757, 1567, 782};
    vector<int> y2 = {-356, -1624, 733, -1744, 771, 1195, 1561, 2628, 886};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2284917;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x1 = {-740, 584, -662, 251, -580, -480, -929, -234, 1236, 47, 1986, 462, -1371, -1068, 401, 168, 1570};
    vector<int> y1 = {1644, 234, 2776, -2716, 1682, 50, -543, 1439, -2533, -312, 579, 2028, -464, -1289, 1210, -2098, 9};
    vector<int> x2 = {2183, 2980, 360, 599, -128, 1022, 1767, 1946, 1720, 2710, 3131, 1961, 889, 341, 1803, 1915, 3714};
    vector<int> y2 = {4359, 3000, 3515, -497, 2752, 1770, 1816, 1900, -859, 1035, 2738, 4852, 2330, -377, 3260, -9, 1088};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1210620;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x1 = {131, -192, 35, -340, -15, 145, -86, 235, 248, -202, -134, -435, 22, 143, 25, -163, 279, -316, -188, -411, -1, -21, 370, -17, -167, 366, -295, -50};
    vector<int> y1 = {-94, -274, -64, -156, -53, 132, 403, -58, 76, -23, -395, -147, 115, -52, 166, -178, 99, 121, -14, 192, -106, 184, 36, -93, 312, 3, 4, -15};
    vector<int> x2 = {241, -57, 226, -288, 85, 295, 8, 277, 396, -71, -36, -391, 59, 265, 120, -133, 289, -131, -41, -279, 150, 171, 456, 33, -18, 417, -125, 1};
    vector<int> y2 = {64, -254, 11, -129, 24, 206, 519, 20, 132, 95, -252, -22, 253, -51, 355, -102, 202, 221, 8, 273, -28, 295, 67, 3, 507, 139, 167, 111};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
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
    vector<int> x1 = {29, 56, 131, -278, 94, 44, 188, 252, -381, -23, 94, -88, 140, -313, 291, 123, 398, 245, 9, -409, -93, 416};
    vector<int> y1 = {263, 278, -389, -31, -331, -190, -77, -244, 46, 75, 211, 32, -38, 250, -198, 235, -169, 78, 98, 8, -295, 42};
    vector<int> x2 = {30, 254, 289, -192, 158, 112, 218, 412, -357, -11, 233, 27, 250, -267, 292, 207, 549, 260, 209, -375, 93, 461};
    vector<int> y2 = {368, 285, -307, 129, -142, -21, 22, -81, 155, 100, 297, 93, 142, 358, -6, 350, 28, 96, 149, 183, -237, 86};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x1 = {-98, -397, -92, 197, -278, -168, -174, 191, 287, -336, -13, -250, -351, 34, -26, 318, -206, -107, -346, 330, -291, -352, 71, 81, 320};
    vector<int> y1 = {5, 183, -336, -132, -45, -167, 9, 64, 97, 81, -80, -71, -234, -112, -137, 343, 200, 195, 321, 16, 329, -207, -7, 266, 94};
    vector<int> x2 = {41, -218, 39, 328, -207, -94, -93, 234, 403, -230, 69, -81, -243, 179, 170, 464, -204, -52, -252, 419, -103, -287, 198, 162, 470};
    vector<int> y2 = {29, 269, -304, -88, 146, -67, 75, 198, 156, 116, -8, -46, -93, -10, -72, 495, 350, 207, 521, 195, 473, -22, 131, 382, 109};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x1 = {215, 3, -60, -404, -86, -267, 279, -188, -279, 351, 46, -395, 87, 228, -249, -96, 140, 307, 102, 185, 115, 43};
    vector<int> y1 = {-8, 209, -289, 366, 6, 75, -14, 77, -135, -74, 69, 86, -112, -54, 72, -446, 349, -57, 145, -421, 106, 127};
    vector<int> x2 = {299, 155, 127, -333, 45, -150, 395, 7, -181, 391, 99, -334, 120, 423, -145, 72, 257, 373, 254, 197, 261, 51};
    vector<int> y2 = {27, 218, -201, 454, 132, 129, 28, 262, -121, -60, 215, 165, -86, 6, 79, -398, 516, -24, 175, -373, 135, 226};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 69412;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x1 = {-57, -460, 71, -118, -21, 294, 111, 170, 93, 120, 70, 256, -228, -65, -266, 15, 56, 220, -14, -12, -51, 140, 127, 261, 129, 39, -109, 60, -7, -5};
    vector<int> y1 = {58, 42, 105, -217, -276, 334, 480, -21, -406, 419, -291, -167, 40, -63, -384, -283, 38, -291, -154, -31, -193, -21, 9, -102, 296, -135, -417, 54, -29, -246};
    vector<int> x2 = {194, -369, 72, 102, 261, 423, 402, 179, 344, 167, 135, 479, -109, 250, -193, 114, 69, 461, 42, -4, 110, 476, 297, 270, 210, 77, 85, 118, 80, 323};
    vector<int> y2 = {109, 360, 287, -180, -184, 462, 830, 65, -352, 434, -19, 178, 141, 66, -227, -220, 256, -76, -43, 317, -182, 245, 153, 40, 497, -9, -167, 125, 216, -115};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 86155;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x1 = {276, 152, 66, -238, -136, 33, 209, -346, 25, 70, -314, -193};
    vector<int> y1 = {-163, -212, -66, -10, 282, -301, -370, 55, -250, 165, -28, -78};
    vector<int> x2 = {494, 438, 177, -42, -130, 260, 549, -280, 332, 228, -199, 129};
    vector<int> y2 = {133, 107, 184, 307, 554, -148, -166, 276, -228, 166, 86, -58};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 55292;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x1 = {-370, 1, 344, -167, -381, -59, 133, -152, 100, -302, 332, -48, 52, 427, -175, -185, 71, -48, -9, 361, -107, 27, -235, -149, -290, 348, -36, 36, 38, 76};
    vector<int> y1 = {56, -95, 144, -311, -225, -145, 1, -224, -84, 179, 43, -119, -169, 374, -57, 124, 294, -114, 232, -162, 289, 137, 24, -191, 5, -213, 77, -7, -107, -77};
    vector<int> x2 = {-261, 183, 376, -118, -288, 111, 258, 153, 379, -80, 498, 296, 356, 562, -145, -164, 182, 75, 117, 631, 25, 159, -167, 145, -239, 585, 118, 144, 93, 315};
    vector<int> y2 = {181, 85, 340, -237, -47, 73, 52, 95, 84, 301, 154, 93, 147, 574, -56, 431, 586, 158, 482, -86, 525, 350, 122, -144, 238, -65, 420, 319, -41, -56};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 63677;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x1 = {9, -53, -85, -3, 61, -86, 3, -48, 22, -25, 30, -19, 24, 25, -4, 0, 45, -17, 68, 74, 12, -20, -27, -71, 0, -62, 42, -11, -12, -5};
    vector<int> y1 = {-57, 38, -19, -15, -20, 27, -1, -41, -48, 25, -57, -36, -34, 24, 47, 56, -50, 21, -55, 83, -28, -75, -39, 3, -25, 46, 16, -26, -32, -24};
    vector<int> x2 = {27, -24, -45, 25, 93, -46, 15, -44, 42, 17, 78, 30, 56, 38, 4, 23, 89, 8, 118, 84, 22, -6, 0, -23, 6, -25, 61, 26, -8, 16};
    vector<int> y2 = {-18, 84, -6, 26, -6, 34, 36, -14, -41, 41, -25, -33, -30, 31, 51, 76, -32, 66, -38, 114, -5, -45, -37, 22, -10, 71, 37, -9, -6, 5};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x1 = {0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17, -18, -19, -20, -21, -22, -23, -24};
    vector<int> y1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> x2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> y2 = {49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x1 = {0, -1, -2, -3, -4, -8, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17, -18, -19, -20, -21, -26, -23, -2};
    vector<int> y1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> x2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 12, 13, 14, 15, 26, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> y2 = {49, 48, 47, 96, 45, 44, 13, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 100};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
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
    vector<int> x1 = {0, -1, -2, -9, -4, -8, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17, -18, -500, -20, -21, -26, -23, -2};
    vector<int> y1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 11, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> x2 = {1, 2, 3, 4, 3, 6, 7, 8, 9, 5, 15, 12, 13, 14, 15, 26, 17, 18, 0, 20, 21, 22, 25, 24, 25};
    vector<int> y2 = {49, 48, 47, 96, 45, 44, 13, 42, 41, 40, 39, 38, 37, 36, 25, 34, 33, 32, 31, 30, 29, 28, 99, 26, 100};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x1 = {0, -1, -2, -9, -4, -8, -6, -7, -8, -9, -5, -11, -12, -13, -14, -15, -16, -17, -18, -500, -20, -21, -26, -23, -2};
    vector<int> y1 = {0, 1, 2, 3, 4, 5, 2, 7, 8, 9, 10, 11, 11, 13, 14, 15, 16, 17, 18, 11, 20, 21, 22, 20, 23};
    vector<int> x2 = {1, 2, 3, 1, 3, 6, 7, 8, 9, 5, 15, 12, 13, 14, 15, 26, 17, 18, 0, 20, 21, 22, 25, 24, 25};
    vector<int> y2 = {49, 48, 23, 96, 45, 44, 13, 42, 41, 20, 39, 38, 37, 36, 25, 34, 33, 32, 29, 30, 29, 28, 99, 26, 100};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
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
    vector<int> x1 = {0, -111, -20, 9, 4, -15, -6, -7, 8, -94, -25, -118, -132, -123, -1, 15, 16, -17, -1815, -500, -20, 21, -26, -2};
    vector<int> y1 = {0, 1, 2, 3, -4, 5, 2, 7, 8, -9, 4, 11, 211, 13, 15, 15, -10, 17, 18, 11, 20, -21, 232, 20};
    vector<int> x2 = {1, 12, 13, 10, 23, 566, 7, 118, 19, 15, 15, 1122, 135, 14, 15, 26, 17, 18, 0, 220, 121, 232, 25, 3524};
    vector<int> y2 = {49, 348, 23, 96, 45, 44, 13, 242, 421, 20, 39, 38, 307, 36, 25, 25, 133, 32, 291, 30, 29, 28, 999, 26};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x1 = {0, -111, -20, 9, 4, -15, -6, -7, 8, -94, -25, -118, -132, -123, -1, 15, 16, -17, -1815, -500, -20, 21, -26, -2, 0};
    vector<int> y1 = {0, 1, 2, 10, -4, 5, 2, 7, 8, -9, 4, 11, 211, 13, 15, 15, -10, 17, 18, 11, 20, -21, 232, 20, 0};
    vector<int> x2 = {1, 12, 13, 10, 23, 566, 7, 118, 19, 15, 15, 1122, 135, 14, 15, 26, 17, 18, 0, 220, 121, 232, 25, 3524, 1};
    vector<int> y2 = {49, 348, 23, 96, 45, 44, 13, 242, 421, 20, 39, 38, 307, 36, 25, 25, 133, 32, 291, 30, 29, 28, 999, 26, 100};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x1 = {0, -111, -20, 9, 4, -15, -6, -7, 8, -94, -25, -118, -132, -123, -1, 15, 16, -17, -1815, -500, -20, 21, -26, -2, 0, -50};
    vector<int> y1 = {0, 1, 2, 10, -4, 5, 2, 7, 8, -9, 4, 11, 211, 13, 15, 15, -10, 17, 18, 11, 20, -21, 232, 20, 0, 15};
    vector<int> x2 = {1, 12, 13, 10, 23, 566, 7, 118, 19, 15, 15, 1122, 135, 14, 15, 26, 17, 18, 0, 220, 121, 232, 25, 3524, 1, 5};
    vector<int> y2 = {49, 348, 23, 96, 45, 44, 13, 242, 421, 20, 39, 38, 307, 36, 25, 25, 133, 32, 291, 30, 29, 28, 999, 26, 100, 125};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x1 = {0, -111, -20, 9, 4, -15, -6, -7, 8, -94, -25, -118, -132, -123, -1, 15, 16, -17, -1815, -500, -20, 21, -26, -2, 0, -50, -23};
    vector<int> y1 = {0, 1, 2, 10, -4, 5, 2, 7, 8, -9, 4, 11, 211, 13, 15, 15, -10, 17, 18, 11, 20, -21, 232, 20, 0, 15, -1};
    vector<int> x2 = {1, 12, 13, 10, 23, 566, 7, 118, 19, 15, 15, 1122, 135, 14, 15, 26, 17, 18, 0, 220, 121, 232, 25, 3524, 1, 5, 2};
    vector<int> y2 = {49, 348, 23, 96, 45, 44, 13, 242, 421, 20, 39, 38, 307, 36, 25, 25, 133, 32, 291, 30, 29, 28, 999, 26, 100, 125, 200};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x1 = {0, -111, -20, 9, 4, -15, -6, -7, 8, -94, -25, -118, -132, -123, -1, 15, 16, -17, -1815, -500, -20, 21, -26, -2, 0, -50, -23, -1, 9, -10};
    vector<int> y1 = {0, 1, 2, 10, -4, 5, 2, 7, 8, -9, 4, 11, 211, 13, 15, 15, -10, 17, 18, 11, 20, -21, 232, 20, 0, 15, -1, -100, 3, 6};
    vector<int> x2 = {1, 12, 13, 10, 23, 566, 7, 118, 19, 15, 15, 1122, 135, 14, 15, 26, 17, 18, 0, 220, 121, 232, 25, 3524, 1, 5, 2, 200, 1000, 569};
    vector<int> y2 = {49, 348, 23, 96, 45, 44, 13, 242, 421, 20, 39, 38, 307, 36, 25, 25, 133, 32, 291, 30, 29, 28, 999, 26, 100, 125, 200, 109, 109, 1001};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x1 = {1, 0, 2};
    vector<int> y1 = {1, 0, 0};
    vector<int> x2 = {3, 4, 3};
    vector<int> y2 = {3, 3, 2};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x1 = {1, 0, 2, 2};
    vector<int> y1 = {1, 0, 0, 2};
    vector<int> x2 = {3, 4, 3, 3};
    vector<int> y2 = {3, 3, 2, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x1 = {1, 0, 2, 2, 2};
    vector<int> y1 = {1, 0, 0, 2, 0};
    vector<int> x2 = {3, 4, 3, 3, 3};
    vector<int> y2 = {3, 3, 2, 3, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x1 = {1, 0, 2, 2, 2, 3};
    vector<int> y1 = {1, 0, 0, 2, 0, 0};
    vector<int> x2 = {3, 4, 3, 3, 3, 4};
    vector<int> y2 = {3, 3, 2, 3, 3, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
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
    vector<int> x1 = {1, 0, 0, 2};
    vector<int> y1 = {1, 0, 2, 2};
    vector<int> x2 = {3, 3, 2, 3};
    vector<int> y2 = {3, 4, 3, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x1 = {1, 0, 0, 2, 0};
    vector<int> y1 = {1, 0, 2, 2, 2};
    vector<int> x2 = {3, 3, 2, 3, 3};
    vector<int> y2 = {3, 4, 3, 3, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
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
    vector<int> x1 = {1, 0, 0, 2, 0, 0};
    vector<int> y1 = {1, 0, 2, 2, 2, 3};
    vector<int> x2 = {3, 3, 2, 3, 3, 3};
    vector<int> y2 = {3, 4, 3, 3, 3, 4};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
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
    vector<int> x1 = {2, 1};
    vector<int> y1 = {-1, 2};
    vector<int> x2 = {3, 4};
    vector<int> y2 = {6, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x1 = {-1, 2};
    vector<int> y1 = {2, 1};
    vector<int> x2 = {6, 3};
    vector<int> y2 = {3, 4};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x1 = {0, 30, 60};
    vector<int> y1 = {0, -1, -1};
    vector<int> x2 = {100, 31, 61};
    vector<int> y2 = {1, 2, 2};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x1 = {0, 30, 60, 0};
    vector<int> y1 = {0, -1, -1, 0};
    vector<int> x2 = {100, 31, 61, 100};
    vector<int> y2 = {1, 2, 2, 1};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x1 = {0, 30, 60, 0, 30, 30};
    vector<int> y1 = {0, -1, -1, 0, -1, 1};
    vector<int> x2 = {100, 31, 61, 100, 61, 61};
    vector<int> y2 = {1, 2, 2, 1, 0, 2};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x1 = {0, 1, 0, 1};
    vector<int> y1 = {0, 0, 1, 1};
    vector<int> x2 = {1, 2, 1, 2};
    vector<int> y2 = {1, 1, 2, 2};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x1 = {0, 1, 0, 1, 0};
    vector<int> y1 = {0, 0, 1, 1, 0};
    vector<int> x2 = {1, 2, 1, 2, 2};
    vector<int> y2 = {1, 1, 2, 2, 2};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x1 = {0, 1, 0, 1, 0};
    vector<int> y1 = {0, 0, 1, 1, 0};
    vector<int> x2 = {1, 2, 1, 2, 3};
    vector<int> y2 = {1, 1, 2, 2, 2};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x1 = {1, 0, 0, 0, 0};
    vector<int> y1 = {1, 0, 2, 1, 0};
    vector<int> x2 = {3, 3, 2, 2, 3};
    vector<int> y2 = {3, 4, 3, 3, 4};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x1 = {1, 0, 0, 0, 0, 1};
    vector<int> y1 = {1, 0, 2, 1, 0, 1};
    vector<int> x2 = {3, 3, 2, 2, 3, 3};
    vector<int> y2 = {3, 4, 3, 3, 4, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x1 = {-37, 11, -39, 12, -37, 74, -6, 49, -58};
    vector<int> y1 = {25, -20, -74, 36, -5, -13, 15, 39, 18};
    vector<int> x2 = {-15, 28, 7, 46, 1, 75, 0, 63, -25};
    vector<int> y2 = {75, 0, -51, 67, 42, 7, 28, 81, 50};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3488;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x1 = {75, 12, -55, -37, 3, 75, 47, -26, -25, -68, 25, 18, 24, -40, 2, -1, -45, -65, -6, -12, -56, -72, -12, -25, -29, -42, 53, -25};
    vector<int> y1 = {64, 7, 25, 36, -52, 28, -8, 1, -15, -24, 72, 12, 28, -22, 63, -18, -71, -85, 66, -1, 2, 11, 41, -44, 15, -10, 33, 12};
    vector<int> x2 = {93, 50, -53, -12, 53, 118, 88, -11, -9, -21, 51, 63, 33, -10, 10, 9, -23, -25, -5, 32, -29, -63, -9, 16, 10, -11, 67, 7};
    vector<int> y2 = {78, 50, 52, 61, -22, 52, 32, 43, 22, -2, 99, 21, 39, -17, 113, -11, -26, -83, 85, 3, 51, 60, 43, -29, 41, 38, 47, 50};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3114;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x1 = {28, 46, 5, 9, -9, 79, 45, -2, -2, 6, 10, 7, 3, -29, 49};
    vector<int> y1 = {-38, 42, -4, 79, 79, 27, -47, -5, 0, 34, -32, -24, -12, 6, 79};
    vector<int> x2 = {61, 94, 27, 41, 34, 121, 73, 41, 30, 23, 49, 51, 21, -6, 66};
    vector<int> y2 = {11, 86, 11, 101, 119, 60, -19, 24, 24, 59, 13, -21, -3, 20, 99};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2145;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x1 = {-12, -5, -63, 8, -17, -20, -2, 24, -16, -7, -30, 61};
    vector<int> y1 = {48, 18, 43, 78, 31, -26, 30, 9, -84, 27, 17, -19};
    vector<int> x2 = {17, 14, -35, 30, -14, 13, 14, 69, -2, 43, -21, 97};
    vector<int> y2 = {61, 35, 65, 94, 56, 11, 35, 38, -55, 29, 37, -12};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3639;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x1 = {41, -71, -4, 6, 72, -16, -4, 0, -46, 18, 6, 2, -32, -26, -27, -23, -17, -7, 8, -76, 2};
    vector<int> y1 = {46, 1, -35, -30, -37, -79, 91, -49, 32, -16, -36, -2, 69, -11, 2, -41, 22, 17, 17, 24, 5};
    vector<int> x2 = {83, -44, 43, 35, 118, 16, -1, 25, -14, 38, 29, 36, -29, -10, 6, -5, -16, 16, 52, -64, 4};
    vector<int> y2 = {94, 19, -25, -17, -4, -33, 136, -32, 48, -11, 2, -1, 109, 20, 34, -10, 52, 54, 62, 63, 17};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3661;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x1 = {2, 57, 4, 25, -52, 75, -71, 38, -87, 38, 24, -78, -29, -11, 24};
    vector<int> y1 = {-52, -36, 44, 10, 27, -53, 61, -8, -66, 8, 71, 53, 16, -54, -30};
    vector<int> x2 = {51, 102, 37, 65, -16, 120, -70, 74, -80, 86, 32, -31, 4, -4, 55};
    vector<int> y2 = {-14, -10, 89, 58, 38, -24, 87, 18, -17, 46, 90, 56, 34, -29, 5};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x1 = {-80, 35, 4, 72, 57, 6, -4, -11, -94, 6, 24, -18, -7, -39, -19, -7, -43, -59, -36, 56, 29, 25, 56, 47};
    vector<int> y1 = {-49, 51, 28, -3, -28, -2, -8, 26, 77, -50, -7, -1, -54, -19, -64, 23, 69, -16, -65, 57, 73, 61, 5, -6};
    vector<int> x2 = {-33, 58, 38, 77, 75, 29, 9, 19, -51, 40, 43, 8, 28, 5, -4, 27, -22, -20, -5, 58, 79, 67, 67, 79};
    vector<int> y2 = {-15, 92, 52, 18, -20, 36, 39, 35, 105, -49, 2, 15, -31, -9, -43, 59, 74, -2, -23, 71, 114, 101, 14, -4};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2381;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x1 = {-58, -40};
    vector<int> y1 = {3, 39};
    vector<int> x2 = {-12, 9};
    vector<int> y2 = {33, 45};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1674;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x1 = {-100, 50};
    vector<int> y1 = {-100, 50};
    vector<int> x2 = {-50, 100};
    vector<int> y2 = {-50, 100};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5000;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x1 = {28, -59, -25, -11, 27, -20, 6, 29, -75, 73, -40, -81, -7, 31, -8, -18, 28, -36, 67};
    vector<int> y1 = {-71, 54, -14, -25, -67, -36, -4, 76, 51, 49, 22, -89, 14, 38, -62, -44, 16, 46, 3};
    vector<int> x2 = {73, -48, 7, 1, 39, 25, 55, 65, -58, 92, -36, -33, 11, 55, 4, 23, 50, -11, 101};
    vector<int> y2 = {-25, 64, 35, -7, -18, 5, -1, 126, 97, 52, 52, -48, 38, 44, -19, -12, 31, 82, 52};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x1 = {-51, -13, -48, 63, 56, 68, -2, 16, -6, 56, 1, -43, 54, -22, 23, 77, 24, -40, -39, 42, -31, 4};
    vector<int> y1 = {18, 6, 38, 74, -29, -18, -19, -17, 6, -44, -68, 6, -30, 76, 47, 13, -18, 15, -25, 26, 16, 10};
    vector<int> x2 = {-19, 28, -43, 70, 75, 69, 45, 36, 2, 68, 50, -39, 70, 1, 32, 83, 45, -23, -11, 86, -16, 10};
    vector<int> y2 = {33, 45, 39, 124, -26, 3, 1, 5, 53, -30, -53, 12, 7, 126, 63, 31, 0, 43, 23, 55, 44, 46};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3238;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x1 = {47, 1, 36, -72, -24, 63, 24};
    vector<int> y1 = {78, -74, -9, 7, 10, 15, -12};
    vector<int> x2 = {55, 47, 39, -36, 16, 85, 71};
    vector<int> y2 = {105, -48, 9, 45, 13, 22, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3108;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x1 = {12, 1, 19, 80};
    vector<int> y1 = {17, -47, -9, 6};
    vector<int> x2 = {15, 18, 28, 107};
    vector<int> y2 = {58, 0, 14, 38};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1993;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x1 = {21, -19, -74, 0, -7, 7, -39, 20, -18, -26, -26, -57, -19, -31, -27, -43, 39, -31, 3, 31, -21, 20, 18, -6, 10, 26, 3, 64};
    vector<int> y1 = {-34, 14, 18, 45, 26, -17, -65, -41, 28, 13, -53, 34, -28, -35, -4, -14, 83, -11, 6, -54, 54, -33, 7, 65, -51, 2, -33, -51};
    vector<int> x2 = {30, 16, -29, 38, 32, 34, -7, 43, 8, 11, 8, -28, 18, 15, -17, -21, 52, 7, 27, 79, -19, 48, 63, 6, 59, 61, 42, 81};
    vector<int> y2 = {-3, 20, 26, 62, 43, 29, -43, -13, 78, 44, -8, 40, 10, -33, 41, 30, 98, 29, 31, -28, 98, -21, 9, 103, -12, 8, 1, -39};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1068;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x1 = {-48, 4, 21, -31, -10, -26, 63, -14, 10, 36, 3, -65, -22, -6, -18, 3, 24, -31, -76, 24, -73};
    vector<int> y1 = {-29, -73, 58, -18, 52, 11, 23, -61, -45, -31, -19, 19, -11, -19, 14, -8, -43, -23, 11, 0, -43};
    vector<int> x2 = {2, 25, 31, -24, 8, -7, 71, 34, 31, 68, 20, -43, -12, 26, 14, 49, 50, -13, -58, 65, -55};
    vector<int> y2 = {3, -45, 90, 11, 82, 43, 58, -28, -20, -5, 27, 49, 11, 5, 25, 27, -13, -13, 34, 41, -8};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x1 = {-48, -62, -20, 13, -23, -22, 62, 62, -19, -39, -60, 24, -42, -45, -19, 22, 15, 17, 6, -35, 1, 30, 85, -79, -7, -27, -24, -21, 0, -14};
    vector<int> y1 = {-30, -36, -20, 74, -17, 10, 84, -18, 21, -74, -72, -17, 49, 9, 30, -49, -21, 56, 24, 31, -77, -4, -18, 56, 20, 41, -62, -58, 44, 20};
    vector<int> x2 = {-33, -33, 9, 29, -12, -4, 107, 88, 18, -38, -29, 44, -23, -21, 23, 61, 47, 21, 17, 4, 51, 64, 110, -64, 2, 2, 20, 11, 42, 5};
    vector<int> y2 = {-13, -7, 2, 101, 22, 49, 109, 2, 33, -47, -57, 7, 70, 40, 64, 0, 17, 74, 46, 32, -54, 37, 28, 79, 70, 58, -48, -53, 59, 65};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x1 = {70, -36, 30, -41, -62, -43, -19, -35, -26};
    vector<int> y1 = {21, 0, 64, -39, 29, -40, 16, 68, -40};
    vector<int> x2 = {82, -29, 61, -10, -16, 3, -13, -15, -3};
    vector<int> y2 = {34, 44, 65, 10, 65, 9, 62, 70, 1};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1146;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x1 = {1, -65};
    vector<int> y1 = {-20, -35};
    vector<int> x2 = {5, -23};
    vector<int> y2 = {-5, -19};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 732;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x1 = {-90, -86, -69, 0, 59, -33, 19, 16, 9, -35, 38, -5, 27, -37, -1, 36, -26, 9, -17, -10, 28, -52, -59, -13, -24, 24};
    vector<int> y1 = {28, -74, -17, 37, 18, 16, 26, -10, -58, -52, -10, 18, -58, 16, 86, 21, 1, 58, 47, -34, 45, 14, 51, -42, -13, -19};
    vector<int> x2 = {-79, -76, -37, 14, 73, 17, 48, 22, 49, -24, 46, -2, 50, 2, 43, 64, -12, 11, 24, 8, 40, -48, -37, 28, 1, 69};
    vector<int> y2 = {33, -49, -6, 82, 46, 35, 66, 6, -10, -35, 29, 30, -20, 49, 126, 67, 27, 71, 64, 6, 85, 41, 54, -35, -10, -12};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3913;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x1 = {-58, 37, 26, 17, -45, 33, -28, 34, -15, -71, 19, -65, -29, -14, -91, -67, -42, 57, 4, -16};
    vector<int> y1 = {-18, -9, 23, 74, -56, -10, 14, -29, 69, 4, -25, 2, 59, -68, 4, 79, 27, -1, 51, -26};
    vector<int> x2 = {-56, 83, 75, 50, -2, 75, -23, 64, 20, -66, 61, -20, 17, 12, -75, -65, -13, 89, 39, -5};
    vector<int> y2 = {-12, 37, 60, 82, -13, -7, 17, -10, 92, 16, 15, 38, 82, -63, 10, 115, 69, 34, 65, -20};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x1 = {21, 59, 22, -64, -48};
    vector<int> y1 = {41, 9, 15, 58, 70};
    vector<int> x2 = {63, 90, 37, -60, -23};
    vector<int> y2 = {49, 29, 29, 76, 76};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1388;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x1 = {12, -51, -13, -41, 4, 16, -10, 9};
    vector<int> y1 = {-16, -84, -19, 1, 20, -7, 6, -1};
    vector<int> x2 = {27, -21, 7, -34, 25, 35, -7, 12};
    vector<int> y2 = {21, -71, -13, 29, 67, 15, 20, 38};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1054;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x1 = {1, 1, 1};
    vector<int> y1 = {0, 0, 1};
    vector<int> x2 = {2, 3, 3};
    vector<int> y2 = {2, 1, 2};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x1 = {1, 1, 1, 1};
    vector<int> y1 = {0, 0, 1, 0};
    vector<int> x2 = {2, 3, 3, 3};
    vector<int> y2 = {2, 1, 2, 2};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x1 = {4, 32, -25, 59, 40, -67, 63, -45, 64, 15, 10, -50, 17, -66};
    vector<int> y1 = {-3, 34, -16, 45, 73, 0, 1, -72, 4, -42, -71, 73, 51, -77};
    vector<int> x2 = {52, 74, 8, 100, 78, -60, 111, -1, 93, 39, 29, -40, 64, -63};
    vector<int> y2 = {11, 55, 17, 78, 120, 13, 39, -46, 7, -15, -27, 89, 62, -67};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x1 = {-30, -11, -1, -76, 33, 2, 10, 71, -69, 15, 15, -24, -49, -26, -20, -53, 38, -53, 43, -11, -40};
    vector<int> y1 = {11, -43, -49, 22, -74, 32, -74, 42, 82, -22, -39, 18, 9, 57, 35, -29, -28, -22, 51, 11, 12};
    vector<int> x2 = {-23, 4, 13, -46, 83, 9, 31, 116, -62, 18, 60, -14, -46, 5, -19, -45, 67, -26, 61, 36, -30};
    vector<int> y2 = {49, -20, -8, 69, -39, 33, -59, 58, 93, 24, 1, 46, 20, 89, 57, 8, -8, -16, 76, 47, 54};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 6951;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x1 = {10, 57, -12, -32, 65, -44, 1, -2, 42, -26, 29, -49, -29, -49, -58, 0, 20, -23, 12, -33, 52};
    vector<int> y1 = {-32, 0, 48, 6, -16, 37, -77, -32, -4, 1, 6, -6, 59, 3, 5, 26, 15, -13, 52, -93, -36};
    vector<int> x2 = {50, 67, 33, -28, 91, -32, 11, 0, 51, -19, 30, -34, 17, -33, -48, 24, 48, 17, 57, -14, 70};
    vector<int> y2 = {13, 2, 61, 54, 3, 48, -59, 11, 27, 22, 9, 5, 83, 45, 27, 48, 37, 34, 91, -56, -4};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2138;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x1 = {-76, -426, -7, -91, -365, -783, -200, 76, -78, -137, 11, 383, -237, 717};
    vector<int> y1 = {2, -605, -60, -59, 300, 28, 274, -81, 647, -791, -250, -821, 301, -185};
    vector<int> x2 = {589, 173, 383, 17, -243, -132, 319, 188, 547, 45, 659, 839, 405, 1117};
    vector<int> y2 = {29, -179, -15, 527, 671, 361, 449, 587, 1255, -737, 164, -268, 406, 531};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 954398;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x1 = {-597, -156, 488, -22, -270, 184, -147};
    vector<int> y1 = {-543, 361, -719, 425, 278, -345, 662};
    vector<int> x2 = {-341, 579, 744, 508, -267, 327, 296};
    vector<int> y2 = {-215, 810, -447, 871, 765, 324, 900};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 301558;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x1 = {215, -254, 371, -270, 423, -63, -342, 114, -916, -286, 351, -171, 46, 83, 252, 161, -370, 1, -204, 601, 768, -508, 79, 321, -158, -776};
    vector<int> y1 = {296, 35, -524, -224, -671, -399, 139, -588, 689, 609, -120, -778, 187, 739, -29, 68, -270, -374, 783, -653, 499, -10, -746, -540, 598, -80};
    vector<int> x2 = {617, 52, 483, -252, 936, 571, 39, 204, -715, 224, 800, 168, 186, 571, 968, 186, 217, 64, -63, 1255, 784, -469, 183, 785, 242, -114};
    vector<int> y2 = {388, 757, -148, 16, -501, -376, 152, -367, 876, 1235, 272, -597, 660, 1184, 236, 98, 369, -300, 1328, -495, 1020, 474, -407, -100, 663, 31};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 208423;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x1 = {985, 223, 620, 224};
    vector<int> y1 = {199, -26, -189, -288};
    vector<int> x2 = {1536, 407, 634, 309};
    vector<int> y2 = {837, 359, 68, -223};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 431501;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x1 = {755, 348, 221, -281, -256, -905, -904, 369, -281, -551, -698, 44, -54};
    vector<int> y1 = {103, -86, 795, 352, -181, -297, 49, 82, -329, -11, 73, -190, -351};
    vector<int> x2 = {1103, 807, 886, 269, 326, -465, -200, 644, -211, -168, -380, 337, 289};
    vector<int> y2 = {537, 315, 1331, 640, -18, 445, 155, 567, 416, 643, 797, -34, -17};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 528019;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x1 = {1, 2, 2, 3};
    vector<int> y1 = {2, 1, 3, 2};
    vector<int> x2 = {2, 3, 3, 4};
    vector<int> y2 = {3, 2, 4, 3};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x1 = {1, 2, 2, 3, 0};
    vector<int> y1 = {2, 1, 3, 2, 0};
    vector<int> x2 = {2, 3, 3, 4, 5};
    vector<int> y2 = {3, 2, 4, 3, 5};
    CoolRectangles* pObj = new CoolRectangles();
    clock_t start = clock();
    int result = pObj->compress(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7442498&rd=10775&pm=8015
********************************************************************************
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <deque>
#include <cctype>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <numeric>
using namespace std;
 
typedef long long LL;
#define MP(a,b) make_pair(a,b)
#define ST first
#define ND second
 
typedef vector <int > VI;
#define REP(i,n) for (int i=0; i<n; ++i)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define FOR(i,p,k) for (int i=p; i<=k; ++i)
#define PB push_back
#define ALL(x) x.begin(),x.end()
#define SIZE(x) (int)x.size()
 
const int INF = 1000000001;
const int MAXN=100000;
struct Edge{
  int v,rev,c,koszt;
  Edge(int vv,int rrev,int cc,int kkoszt) : v(vv), rev(rrev), c(cc), koszt(kkoszt) {}
  Edge(){}
};
vector<Edge> kraw[MAXN];
int parent[MAXN],parent_kraw[MAXN];
int used[MAXN],dist[MAXN],pot[MAXN];
void AddEdge(int a,int b,int c,int koszt){
  kraw[a].PB(Edge(b,SIZE(kraw[b])+(a==b),c,koszt));
  kraw[b].PB(Edge(a,SIZE(kraw[a])-1,0,-koszt));
}
 
pair<int,LL> MinCostMaxFlow(int beg,int end,int n){
  int res=0;
  LL koszt=0;
  REP(i,n) pot[i]=0; //poczatkowy potencjal, zakladam, ze poczatkowo
                     //wszystkie wagi sa nieujemne, jesli moba byc ujemne,
                     //to trzeba obliczyc poczatkowe potencjaly Bellmanem-Fordem
  while (1){
    REP(i,n) dist[i]=INF,used[i]=0; 
    dist[beg]=0;
    //algorytm Dijkstry, mozna zmienic na wersje z kopcem dla grafu rzadkiego
    REP(k,n){
      int best=-1;
      REP(i,n) if (!used[i] && (best==-1 || dist[i]<dist[best])) best=i;
      used[best]=1;
      if (dist[best]==INF) break;
      FOREACH(it,kraw[best]) if (it->c>0){
        int x=it->koszt-pot[it->v]+pot[best];
        if (dist[it->v]>dist[best]+x){
          dist[it->v]=dist[best]+x;
          parent[it->v]=best;
          parent_kraw[it->v]=it-kraw[best].begin();
        }
      }
    }
 
    if (dist[end]==INF) break; //brak sciezki powiekszajacej
    REP(i,n) dist[i]+=pot[i],pot[i]=dist[i]; //uaktualnienie potencjalu
 
    int cap=INF; //minimalna przepustowosc na sciezce
    int x=end;
    do{
      cap=min(cap,kraw[parent[x]][parent_kraw[x]].c);
      x=parent[x];
    } while (x!=beg);
    res+=cap;
 
    x=end;
    do{
      koszt+=kraw[parent[x]][parent_kraw[x]].koszt*(LL)cap;
      kraw[parent[x]][parent_kraw[x]].c-=cap;
      kraw[x][kraw[parent[x]][parent_kraw[x]].rev].c+=cap;
      x=parent[x];
    } while (x!=beg);
  }
  return MP(res,koszt);
}
 
const int N=510;
VI v,x1,x2,y1,y2;
int vis[N][N];
int n;
int odwiedzone;
int maxx,minx,maxy,miny;
map<int,int> mapa;
 
int nalezy(int i,int j,int k){
  if (i<0 || j<0) return 0;
  int a=mapa[x1[k]];
  int b=mapa[x2[k]];
  if (!(i>=a && i<b)) return 0;
  a=mapa[y1[k]];
  b=mapa[y2[k]];
  if (!(j>=a && j<b)) return 0;
  return 1;
}
 
int gdzies_nalezy(int i,int j){
  REP(k,n) if (nalezy(i,j,k)) return 1;
  return 0;
}
 
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
 
void dfs(int i,int j){
  vis[i][j]=1;
  odwiedzone++;
  minx<?=i; maxx>?=i;
  miny<?=j; maxy>?=j;
  REP(ruch,4){
    int ni=i+dx[ruch];
    int nj=j+dy[ruch];
    if (ni>=0 && nj>=0 && ni<SIZE(v) && nj<SIZE(v) && !vis[ni][nj]){
      int ok=1;
      REP(k,n) if (nalezy(i,j,k) && !nalezy(ni,nj,k) || !nalezy(i,j,k) && nalezy(ni,nj,k)){
        ok=0;
        break;
      }
      if (ok) dfs(ni,nj);
    }
  }
}
 
    class CoolRectangles
        { 
        public: 
        int compress(vector <int> _x1, vector <int> _y1, vector <int> _x2, vector <int> _y2){ 
          x1=_x1; x2=_x2; y1=_y1; y2=_y2;
          n=SIZE(x1);
          FOREACH(it,x1) v.PB(*it);
          FOREACH(it,x2) v.PB(*it);
          FOREACH(it,y1) v.PB(*it);
          FOREACH(it,y2) v.PB(*it);
          sort(ALL(v));
          v.erase(unique(ALL(v)),v.end());
          REP(i,SIZE(v)) mapa[v[i]]=i;
          int k=SIZE(v);
          int prostokaty=0;
          REP(i,n) AddEdge(0,i+1,1,0);
          REP(i,k-1) REP(j,k-1) if (!vis[i][j] && gdzies_nalezy(i,j)){
            minx=N,maxx=-1;
            miny=N,maxy=-1;
            odwiedzone=0;
            dfs(i,j);
            if ((maxx-minx+1)*(maxy-miny+1)==odwiedzone){
              prostokaty++;
              int pole=(v[maxx+1]-v[minx])*(v[maxy+1]-v[miny]);
              REP(a,n) if (nalezy(i,j,a)) AddEdge(a+1,n+prostokaty,1,pole);
            }
          }
          cout << prostokaty << endl;
          int wierzcholki=n+prostokaty+2;
          REP(i,prostokaty) AddEdge(n+1+i,wierzcholki-1,1,0);
          pair<int,LL> p=MinCostMaxFlow(0,wierzcholki-1,wierzcholki);
          if (p.ST!=n) return -1;
          return (int)p.ND;
        } 
        
 
         }; 
 
    
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/