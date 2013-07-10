/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12295
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

class DrawingPointsDivOne {
public:
    int maxSteps(vector<int> x, vector<int> y);
};

int DrawingPointsDivOne::maxSteps(vector<int> x, vector<int> y) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 3};
    vector<int> y = {0, 0};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {0, 2};
    vector<int> y = {0, 0};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {-70};
    vector<int> y = {3};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {-41, -40, 1, -11, -32, -7, 24, -11, 49, -15, -22, 20, -8, 54, 54, 69, 16, -30, 36, -6, -30, 40, 64, 20, -66, -37, -33, -18, -35, 36, 9, 61, -43, 45, 5, 60, -8, -58, 65, -66, 41, 12, 34, -11, -57, -38, 46, 63, -55, 3};
    vector<int> y = {5, -24, -2, -4, 23, 14, 1, 70, -26, 45, 15, 48, 32, -41, 54, -47, -67, -46, -9, -53, 54, 28, -61, 11, 53, 68, -33, 62, 37, -8, -17, -17, 48, 19, -49, 56, -41, 16, 17, -50, 28, 59, 10, 50, 23, -16, 56, 31, -70, -44};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {39, 39};
    vector<int> y = {50, 26};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {49, 31, 34, 60, 0, -6, 63, 29, 54, 11, -37, -69, 30, -25, -29, 56, 45, 43, 68, -49, 15, -21, -58, 1, 52, 49, -36, -9, 8, 42, -29, 26, 14, 36, 66, -43, 65, 20, -12, -43, 37, 46, -12, -69, -31, 23, -14};
    vector<int> y = {14, 23, 27, -2, -6, -25, 10, -36, 35, 51, 63, -31, 70, 6, 21, 15, 29, -4, -14, 47, 57, -68, -31, 66, 25, -59, 43, -35, -38, 27, -42, -61, -25, 0, -24, -57, 25, -32, 55, 39, 42, 51, 48, 28, -31, 64, 16};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {27, -48, 22, 67, 65, 25, 64, 55, 52, 33, -46, -16};
    vector<int> y = {-8, 11, -56, 69, -43, -39, 5, -38, -61, 13, -16, 10};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {28, 38, 59, 32, 23, 67, 20, -68, 37, 54, -7, 56, 20, -16, -1, 8, 46, -7, -25, -69, -59, 6, 48, 52, 69, 63, 14, -48, 25, 3, -33, -25, 4, -8, 28, 57, -32};
    vector<int> y = {31, 34, -6, 51, -1, -26, -55, -51, 56, 70, -70, 39, 56, -27, -26, -56, 59, 24, -44, 38, -8, 17, 35, 62, 0, -66, 9, -62, 64, -7, 55, 2, 55, -15, -45, 64, -40};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {24, -64, -44, 60, -63, -45, -53, 4, 62, -15, 36, -1, -12, -28, -12, 40, -65, 5, -55, 22, -53, -5, 62, -68, 60, -65, -4, 4, -34, -6, -66, -16};
    vector<int> y = {56, -62, 24, 54, -63, -35, 44, 27, 29, -40, 19, 45, 30, 28, -3, -47, 32, 35, 40, 4, -13, -47, -43, 40, 10, 25, 45, -23, 70, -38, 61, -7};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {-19, -67, -28, 61, 38, -38, -69, 58, -57, 46, 0, 18, 47, -48, -3, -18, -30, -58, -27, -56, 40, -53, -15, 16, 20, -13, -18, -7, 35, 27, 68, 6, -24, -28, 2, 31, -37, 3, 53, -46};
    vector<int> y = {13, -25, -65, 38, -8, -61, -68, 8, 47, -59, 25, -60, -45, -61, 49, -46, 3, 68, -22, -36, 62, -55, -29, 47, -25, -46, -64, -27, -57, -55, 41, 56, -25, -31, -18, 57, -64, 70, 64, 57};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {37, -58, -35, -24, 65, 59, 48, 27, 19, 54, -55, -8, -24, 68, -48};
    vector<int> y = {-14, 42, -30, -39, 33, -58, 40, -8, -7, 29, 43, -7, 70, -4, -45};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {-5, -66, -10, 40, -48, -39, -51, -21, 62, -59, -55, 17, -63, 44, -30, -44, 20, -42, -13, -57, -7, -41, 35, 13, 38, 66, 14, 69, -45, -13, 6, -22};
    vector<int> y = {12, 38, -34, 42, 30, 16, -59, 62, -18, 54, 25, -68, 12, -35, -60, 42, 16, 67, -2, 44, 36, -21, 68, -36, -51, 22, 53, -8, -51, -35, -56, 47};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {66, -57, -23, -22, 52, 0, 13, 40, -20, 48, 52, -12, -19, -24, -23, -14, -11, -66, 54, -69, -48, -37, -33, 69, -62, -25, -52, -31, -68, -60, 66, 1, -48, -35, -26, -10, 67, 56, -69, 13, 50, -66, 30, -26, -32, -60, 30};
    vector<int> y = {-21, -60, -58, 18, -12, -29, -33, -7, -50, -67, 39, 18, -15, -50, -47, -15, 62, -37, -2, -14, 2, -13, -4, 35, -43, -18, 29, 5, 53, -27, -2, -45, -26, -5, 41, -66, 69, -38, 30, -61, 42, 16, 34, 27, 66, 27, -54};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {-59, -23, -65, -32, 10, 51, 34, -64, 62, 59, -45, 24, -48, 52, -27, -29, 26, -39, -23, -66, 45, -32, 29, -8, 36};
    vector<int> y = {1, -39, -39, -25, -55, -48, -69, -7, -16, 45, 52, 9, -69, -35, -9, -25, -40, -45, -11, 5, -41, 69, -37, -56, -17};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {-64, -1, 64, 65, 15, -56, 11, -13, -15, 55, 24, 44, -22, 53, 69, 24, 16, 13, -19, 0, 11, -33, -19, 35, 21, -40, 27, -45, 5, -53, -19, 7, -62, -59, 20, -63, -16, -53, -31, 9, -5, 44};
    vector<int> y = {66, 5, 8, 51, 17, 70, 37, -27, 13, 63, -37, 25, 48, 45, -24, 23, -1, -11, -14, -12, -20, 22, -54, -19, 69, 42, -34, -69, -19, 27, 68, 25, -49, -31, 32, 9, 15, 44, -53, 34, -63, -41};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {34, 36, 3, -47, -5, -33, -9, 29, 18, -66, 5, -39, 33, 46, 70, -41, 42, -61, 46, -6, -6, 32, -25, 51, -32, -54, 9, 53, 35, 31, 48, 23, 23, -46, 17, -39, 11, 42, -26, -67, 5, 51, 29, 6, 14};
    vector<int> y = {55, -40, 44, 19, -1, 18, -11, 46, 14, 33, 63, 21, -57, 47, 59, 8, -65, 10, 57, -43, 9, -34, 30, -42, -52, -65, -30, -67, 18, -69, -40, 53, -10, -21, -49, -57, -7, 7, 68, -5, -63, -22, -59, 7, 69};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-62, 32, 15, -10, -67, -33, -46, 50, 6, -33, 67, -47, -18, 16, 13, 53, 65, -54, 9, 36, -28, -12, 30, 34, -68, -9, 60, 14, -62};
    vector<int> y = {-32, -42, -26, -25, -59, 33, -14, 21, -37, 39, -37, -41, 51, -65, -54, 2, 36, 70, -68, -13, 46, 0, 27, -18, 20, 2, 46, -35, 60};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {-47, 41, 20, 21, -42, 6, 54, 54, 4, 23, -12, 0, 57, -22, 66, 70, -39, 69, 30, 42, -62, -52, -66, 7, 60, 64, 53, -39, 46, 29, -10, 44};
    vector<int> y = {-49, -58, 51, 60, -22, -23, -40, -14, -56, 12, -14, 27, -56, -21, -16, 48, 16, -27, 41, 23, -47, -11, 27, -11, 20, -16, -18, -38, -33, 22, 62, 4};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {-65, -9, 70};
    vector<int> y = {-28, -15, 14};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {-59, -32, 39, -14, 49, 69, 37, 33, 51, -21, 60, -3, -15, 65, -45, 28, -14, -69, -13, 45};
    vector<int> y = {-61, 42, -52, -41, 30, 7, -40, 37, 8, -11, 25, 37, -4, 35, -28, 64, 42, -66, 64, 12};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {-5, 70, 37, 11, -12, 44, 18};
    vector<int> y = {30, 15, -24, -39, 69, -34, 40};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {-30, 58, -4, -2, 52, -66, -26, -65, 18, -24, 27, -10, -44, -42, -43, 45, -42, -10, 38, 22, -60, 28, -48, -46};
    vector<int> y = {-41, -27, -54, 67, -22, 64, -53, 51, 36, -29, 16, -43, 57, 39, 27, 58, -3, -61, 63, 35, 16, -11, 14, 57};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {35, 4, 39, 34, 6, 4, -62, 8, 46, -70, 60, 11, 49, -48, 14, -16, -38, -19, 42, -34, 66, 38, -37, 40, 31, 20, -57, -46, 32, -30, 63, -23, 19, 0};
    vector<int> y = {-41, 5, -67, -25, -36, 67, -56, 15, -62, 29, 44, -65, -57, 2, -28, -40, -56, 43, 0, 67, -3, 60, 50, -54, -4, -61, 37, -41, 31, 60, -36, -65, 64, 38};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {35, -3, -20, 60, 13, 21, 13, 33, -1, 40, -15, 11, 28, -28, 36, 23, 36, -42, -54, 4, -1, 6, 7, -56, -14, 39, 14, 54, -48, 15, -50, -34, -21, -34, -56};
    vector<int> y = {-18, -17, 22, 59, 60, -42, 2, -34, -61, -17, -58, -57, -64, -47, -56, -43, 29, 68, 14, -30, -18, -45, 3, 36, 14, -43, 22, 2, -52, 62, 65, 10, 62, -57, 15};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {-12, -48, 61, 34, 62, 7, -59, -10, 13, 23, 4, -16, 36, -12, -11};
    vector<int> y = {27, 66, -23, -3, 0, 17, -1, -21, -33, 50, 32, 28, 17, 55, -67};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {-63, -37, -58, 17, 2, -39, 8, -43, 55, -70, 11, -68, 55, -36, -14, 34, -58, 46, -14, 48, 20, -34, -18, 17, -2, -67, -7, 10, 10, 29, 18, -45, 12, 36, 5, 15, 51, -37, 38, -44, 70, -56, 50, 55, 33, -38};
    vector<int> y = {-64, -30, -1, 6, 16, -48, -28, 33, -10, 49, -40, 24, -32, 22, -10, -52, 54, 20, -29, 63, -32, 15, -57, -5, 13, -68, -63, 67, -66, 54, 4, -49, 34, 24, 4, 27, 26, -12, -45, -53, -33, 27, 56, 52, -70, -47};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-62, -66, -32, -38, 10, 18, 43, -26, 30, -50, -5, -39, -25};
    vector<int> y = {1, -2, 8, 51, 37, -15, -40, 45, 47, -57, -28, 2, -69};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {-12, 67, 44, -41, 37, 16, -37, -24, -35, -19, -24, 53, 46, -8, 14, 34, 40, 11, 19, -5, 38, -28, 52, -5, -17, -8, 59, -60, -29, -28, -5, 38, -61, -15, -70, 26, -8, 35, 40, -45, 67};
    vector<int> y = {64, -61, 63, 54, 57, -27, -12, -67, -4, 49, 41, 66, -28, -5, 62, -7, 6, 47, 69, 27, 39, -35, 32, -15, -59, -21, -11, 56, 19, 33, 6, 43, -41, 24, -3, -18, 65, -37, 34, -14, 70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {50, -37, -3, 55, -41, -53, 27, 10, 5, -35, 43, -14, 9};
    vector<int> y = {-5, -39, -13, -36, -19, -21, 9, 43, 21, -60, 27, -25, 30};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {44, 2, 29, -44, -32, 57, 32, -58, 69, -9, 66, 13, -11, 2, 16, -10, 60, -22, 40, -30, 54, 7, 39, -68, 59, 35, -25, 69, -48, 18, -27, -6, 19, 32, 37, 41, -16, 49};
    vector<int> y = {-39, 66, 29, 36, 1, 41, 39, -68, -31, 0, -31, -64, -59, 60, 44, -36, 35, -51, 17, 32, 26, -52, 28, 54, -21, 66, -38, -64, 23, 53, -68, -57, -70, 68, 61, -57, -1, 62};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {-69, -17, -26, -46, 31, 31, 59, 18, -68, -1, -49, 52, 42, -40, -53, -64, -51, 9, 63, -14, 8, 63, -17, 45, -31, -58, 4, -37, -62, -27, 39, -20, -51, -34, -23, -21, 1, 10, -33, 59};
    vector<int> y = {68, 2, 51, -47, 10, -35, 19, -43, -5, 57, 53, -38, 22, -62, -56, 37, 23, 55, -29, -52, 1, 33, 18, 49, 61, -21, 44, -12, 10, 34, 17, 35, 14, -58, -23, -24, 55, 34, -16, -26};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {-10, 32, 55, -65};
    vector<int> y = {-57, -12, -53, 23};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {-1, 7, 25, -29, -70, 33, 3, -47, -34, -55};
    vector<int> y = {-12, 34, 39, -47, -22, 25, 56, 36, 50, 61};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {-34, 65, 16, 57, -26, -20, -22, -14, 40, -54, 2, -37, 36, -44, -7, 3};
    vector<int> y = {6, 37, -44, 68, -43, 54, -46, 18, -40, -3, 49, -7, -34, 58, 2, 30};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {-59, 45, -39, 31, 2, -26, 8, -69, -21, 49, 56, 53, 61, 68, -17, 27, -48, 52, -32, -21, -36, 8, -29, -36, 70, -41, 67, -26, 13, 19, -64, 2, 33, 44, -24, -34, 16, 8};
    vector<int> y = {-53, -42, 54, 67, -27, -9, -53, -24, 9, 27, 21, -70, -18, -70, -57, 13, -21, 41, 52, 47, -43, -21, -28, 61, 0, -4, 43, 38, 19, 2, 65, 26, -19, -66, -34, 28, -34, 42};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {54, 42, -14, -70, -70, -56, 51, 61, 21, 67, 13, 5, 57, -46, -2, -60, -13, 28, 22, -37, -7, -4, -62, 33, 63, 52, 42, 32, 66, -56, -18, 42, 21, 5, -60, -37, 32, -60, -34, -35, -49, -48};
    vector<int> y = {-26, -51, 11, -42, -57, 9, 47, -43, -58, 51, 50, -36, -38, -31, -62, 23, -8, 44, 5, -21, 56, -57, -57, 24, -40, -43, -19, 16, 16, 12, 66, -24, 44, -42, -40, 16, -40, 68, 5, -25, 51, -8};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {54, -69, -26, 12, -40, -55, -63, 37, 33, -47, 41, 47, -61, -52, 5};
    vector<int> y = {26, -59, 31, -19, -46, 34, 32, 1, -67, -47, 31, -17, 10, -62, 66};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {-10, -8, -46, 25, 41, -26, 21, -31, 12, -14, -17, -69, -35, 65, 24, -68, 10, 24, -37, 66, -15, -2, -68, 29, -37, 15, -20, -69, -15, 15, 13, -48, -32, 7, 5, -15, 62, -15, 7, 51, -29, 54, -58};
    vector<int> y = {-37, -41, 63, 10, -13, 60, -41, 19, 7, -24, -29, -9, 6, -52, 61, 68, -65, -38, -15, -37, -4, -37, -25, 43, -30, 54, -25, 31, -11, -25, 30, -39, 31, 40, -70, 63, 22, 7, 29, 11, -4, -43, 33};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {11, 46, -40, 39, 2, -55, 4, -13, -70, 33, 20, 66, -57, 32, 63, -14, -47, 66, -7, 19, -30, -26, -36, 30, 30, 14, -47, 58, -5};
    vector<int> y = {-49, 29, -17, 7, 4, 3, -51, -14, 54, -55, 19, 42, -51, -6, -67, -4, 15, -56, -59, -20, 19, -20, 32, -32, 24, -58, 62, -36, 25};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {-4, 30, 46, -5, -34, -14, -65, 68, -31, -33, 29, -15, -1, 64, -27, 70, 2, -43, -57, 30, 3, -2, 33, 41, -54, -65, -43, -57, 44, 12, -8, 28, -22};
    vector<int> y = {-4, -55, 0, 56, -4, -18, -60, -10, -15, -45, 5, -16, 49, 31, 38, 43, 7, 32, -54, -57, -59, -28, 17, 68, 60, -54, 59, 59, -45, -38, -14, 7, 16};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {-49, -3, -60, 61, 19, -29, -26, 49, -8, 51, 11, -68, 13, 62, -8, 35, -55, 9, -39, 28, -1, 5, 32, 13, 55, 31};
    vector<int> y = {-10, -8, 48, -46, 20, -53, 37, 62, -49, -1, 18, 49, -3, 14, 15, -51, -32, -39, -2, 45, 21, -68, -68, 69, -30, 70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {-36, -33, -58, 16, -21, 17, -1, -14, 31, -54, 50, 66, 38, 66, 47, 27, 31, -59, 1, -70, 28, 19, -6, -41, -68, -45, 17, -15, 60, 18, -63, 58, 61, 16, -40, 3, 7, 19, -56, 61, -37, -43, 40, 11, -7, 46, -8, 16, 38, -19};
    vector<int> y = {-23, 37, -29, 30, -64, 54, -54, -3, -35, -14, 34, -15, -31, 0, 53, 63, -28, 42, 43, -38, 9, 63, -38, -31, 5, -8, -48, 50, -8, 28, -40, -69, -27, 52, -10, -34, -34, -21, 66, -38, 17, -22, 18, 58, -48, -1, -19, 68, 44, -17};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {65, -68, 40, 56, 2, -12, 24, 7, -15, 12, -58, -1, 58, -13, -35, 6, 56, 19, 16, 54, 2, -28, 17, 10, 24, 12, 36, -54, -25, -31, -16, 4, 8, -23, 13};
    vector<int> y = {-34, 20, -6, 11, 67, -1, 26, -23, -2, -30, -34, 47, -34, 3, 37, 60, -29, 6, -58, -23, -15, -6, -58, -60, 20, 26, 59, -14, 11, 30, -60, 60, -50, -31, -24};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {-63, 8, -45, 8, -22, 0, -50, -52, 57, -41, 17, -5, 59, 48, -40, -54, -37, 25, -46, -13, -17, 5};
    vector<int> y = {70, -45, -55, -11, 29, -48, -32, -62, -22, -17, -54, -36, -39, 43, -61, 53, 32, 10, 6, -6, 29, -68};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {-24, 15, -39, 53, -54, -31, 9, 69, 21, -47, 34, 55, -3, -7, 39, -21, -21, -6, 10, 63, 26, -59, -67, -16, -54, 22, 9, 53, -24, -31, 62, -36, 5, 6, 36, 43, 21, 61, -19, 50, -15, -46, -35, -50, -23, -32};
    vector<int> y = {10, -20, 22, -15, -62, -19, 27, 36, -19, 18, -47, 28, 17, -59, -60, -2, 12, 16, -30, -61, -62, -11, -25, 22, -40, -30, -57, 49, -64, -24, 69, -30, -39, -6, 28, 5, -26, 43, 20, -47, 48, 46, -18, 42, 68, 0};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {13, 38, 40, 42, -18, 18, -6, -29, -53, 66, -24, 24, 64, -33, -13, 3, 8, -34, -64, -5, 70, -13, 21, -69, 29, -26, 49, 28};
    vector<int> y = {4, -65, 1, 47, 6, -9, 55, -11, 20, -37, -61, -4, -55, 7, -55, -52, 31, -37, -18, -11, -57, -42, -16, 59, 6, -58, -62, -54};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {-49, 27, -63, 22, -25, -19, -54, -37, 10, 48, 11, 7, -21, 47, 0, -65, -43, 0, 24, 23, 29, 36, -46, 35, 29, 15, 56, -54, -64, 37, -62, -16, 26, 55, -11, 0, -7, -35, 37};
    vector<int> y = {4, 47, 40, -43, -17, 36, -56, 9, 25, -30, -23, -28, -42, -64, 41, 37, -61, -60, -8, 19, 16, 67, -59, 38, -34, -3, -30, 65, -4, -38, 52, -15, -27, 20, -61, -68, 18, -66, 32};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {-19, 21, -42, 49, 55, -66, -45, -30, -68, -60, 66, 59, -25};
    vector<int> y = {41, -49, -21, 61, 44, -65, -70, -38, 40, -58, -19, -41, 4};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {52, 34, -60, -64, -32, 14, -51, 36, 26, -47, 57, -19, -17, -25, -64, 19, -33, -64, -12, 0, -44, 53, -70, 2, 55, 53, 3, 64, 18, -58, 4};
    vector<int> y = {-3, 62, 17, -1, -66, 51, 12, 33, 65, -40, 31, 26, 66, 54, 34, -62, 38, 57, -30, 51, -28, -19, 66, -47, -46, 57, -66, -35, -61, 54, -50};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {40, -35, 29, 55, 19, 38, -65, -21, 54, -63, -32, 35};
    vector<int> y = {70, -26, -47, 26, 69, 57, -68, 58, -30, 50, 52, -37};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {59, 60, 26, -64, -62, -9, -29, 53, -23, 26, -44, 22, 47, 10, -53, -1, 64, 28, 2};
    vector<int> y = {10, 62, 11, 52, 30, 36, 68, -13, 70, 48, -18, 68, -4, 69, 2, -66, -44, 45, 18};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {46, 17, -30, 61, -3, 55, 21, 1, -20, -20, -57, 21, 13, 45, -69, 4, 52, 10, -37};
    vector<int> y = {-33, 3, -19, 19, 19, -46, -19, 26, 13, -39, 38, 21, -14, -49, -65, 37, 37, -44, -23};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {-43, -59, -66, 1, 1, 32, -3};
    vector<int> y = {-37, 37, -35, -52, 34, 23, 3};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {-48, -59, 54, 63, 49, -25, -68, 45, -1, 10, -5, -5, -4, 15, 18, 16, 22, -50, 7, 48, 70, -20, 25, -49};
    vector<int> y = {18, 15, 2, -16, -45, -63, 51, 67, 54, 36, 60, 3, 35, -11, 7, -38, -12, 33, 30, -58, 13, 24, 40, 8};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {39, 39};
    vector<int> y = {50, 26};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {14, 23, 27, -2, -6};
    vector<int> y = {31, 34, 60, 0, -6};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {63, 29, 54};
    vector<int> y = {10, -36, 35};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {51, 63, -31, 70};
    vector<int> y = {-37, -69, 30, -25};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {6, 21, 15, 29, -4, -14};
    vector<int> y = {-29, 56, 45, 43, 68, -49};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {15, -21, -58, 1, 52};
    vector<int> y = {57, -68, -31, 66, 25};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {-59, 43, -35, -38, 27};
    vector<int> y = {-36, -9, 8, 42, -29};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {26, 14};
    vector<int> y = {-61, -25};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {0, -24, -57, 25, -32};
    vector<int> y = {66, -43, 65, 20, -12};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {-43, 37, 46, -12, -69};
    vector<int> y = {39, 42, 51, 48, 28};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {-31, 64, 16};
    vector<int> y = {23, -14, -23};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {-8, 11, -56, 69, -43};
    vector<int> y = {-48, 22, 67, 65, 25};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {64, 55};
    vector<int> y = {5, -38};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {-61, 13, -16, 10, 31};
    vector<int> y = {33, -46, -16, 28, 38};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {59, 32, 23, 67, 20};
    vector<int> y = {-6, 51, -1, -26, -55};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {-51, 56};
    vector<int> y = {37, 54};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {-7, 56, 20, -16, -1, 8};
    vector<int> y = {-70, 39, 56, -27, -26, -56};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {46, -7, -25, -69, -59, 6};
    vector<int> y = {59, 24, -44, 38, -8, 17};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {35, 62, 0, -66, 9};
    vector<int> y = {52, 69, 63, 14, -48};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {25, 3};
    vector<int> y = {64, -7};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {55, 2, 55};
    vector<int> y = {-25, 4, -8};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {28, 57, -32};
    vector<int> y = {-45, 64, -40};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {24, -64, -44, 60, -63};
    vector<int> y = {56, -62, 24, 54, -63};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {-35, 44};
    vector<int> y = {-53, 4};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {62, -15, 36, -1, -12};
    vector<int> y = {29, -40, 19, 45, 30};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {28, -3, -47};
    vector<int> y = {-12, 40, -65};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {5, -55, 22, -53, -5};
    vector<int> y = {35, 40, 4, -13, -47};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {-43, 40, 10, 25, 45, -23};
    vector<int> y = {-68, 60, -65, -4, 4, -34};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {-6, -66, -16, -19, -67, -28};
    vector<int> y = {-38, 61, -7, 13, -25, -65};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {38, -8, -61, -68, 8, 47};
    vector<int> y = {38, -38, -69, 58, -57, 46};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {-70, 70};
    vector<int> y = {0, 0};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {0, 0};
    vector<int> y = {70, -70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {0, 1};
    vector<int> y = {0, 1};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {39, 49, 31, 34, 60, 0, -6, 63, 29, 54, 11, -37, -69, 30, -25, -29, 56, 45, 43, 68, -49, 15, -21, -58, 1, 52, -36, -9, 8, 42, 26, 14, 36, 66, -43, 65, 20, -12, 37, 46, -31, 23, -14, -23, -8, -56, 69, -39, 5, -38};
    vector<int> y = {39, 49, 31, 34, 60, 0, -6, 63, 29, 54, 11, -37, -69, 30, -25, -29, 56, 45, 43, 68, -49, 15, -21, -58, 1, 52, -36, -9, 8, 42, 26, 14, 36, 66, -43, 65, 20, -12, 37, 46, -31, 23, -14, -23, -8, -56, 69, -39, 5, -38};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {33, -46, -16, 28, 38, 59, 32, 23, 67, 20, -68, 37, 54, -7, 56, -1, 8, 46, -25, -69, -59, 6, 48, 52, 69, 63, 14, -48, 25, 3, -33, 4, -8, 57, -32, -62, 24, -63, -35, 44, 27, 29, -40, 19, 45, 30, -3, -47, 35, 40};
    vector<int> y = {33, -46, -16, 28, 38, 59, 32, 23, 67, 20, -68, 37, 54, -7, 56, -1, 8, 46, -25, -69, -59, 6, 48, 52, 69, 63, 14, -48, 25, 3, -33, 4, -8, 57, -32, -62, 24, -63, -35, 44, 27, 29, -40, 19, 45, 30, -3, -47, 35, 40};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {-53, -5, 62, -68, 60, -65, -4, 4, -34, -6, -66, -16, -19, -67, -28, 61, 38, -38, -69, 58, -57, 46, 0, 18, 47, -48, -3, -18, -30, -58, -27, -56, 40, -15, 16, 20, -13, -7, 35, 27, 68, 6, -24, 2, 31, -37, 3, 53, -46, -11};
    vector<int> y = {-53, -5, 62, -68, 60, -65, -4, 4, -34, -6, -66, -16, -19, -67, -28, 61, 38, -38, -69, 58, -57, 46, 0, 18, 47, -48, -3, -18, -30, -58, -27, -56, 40, -15, 16, 20, -13, -7, 35, 27, 68, 6, -24, 2, 31, -37, 3, 53, -46, -11};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {39, 49, 31, 34, 60, 0, -6, 63, 29, 54, 11, -37, -69, 30, -25, -29, 56, 45, 43, 68, -49, 15, -21, -58, 1, 52, -36, -9, 8, 42, 26, 14, 36, 66, -43, 65, 20, -12, 37, 46, -31, 23, -14, -23, -8, -56, 69, -43, -39, 5};
    vector<int> y = {39, 49, 31, 34, 60, 0, -6, 63, 29, 54, 11, -37, -69, 30, -25, -29, 56, 45, 43, 68, -49, 15, -21, -58, 1, 52, -36, -9, 8, 42, 26, 14, 36, 66, -43, 65, 20, -12, 37, 46, -31, 23, -14, -23, -8, -56, 65, 25, 64, 55};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {52, 33, -46, -16, 28, 38, 59, 32, 23, 67, 20, -68, 37, 54, -7, 56, -1, 8, 46, -25, -69, -59, 6, 48, 69, 63, 14, -48, 25, 3, -33, 4, -8, 57, -32, -62, 24, -63, -35, 44, 27, 29, -40, 19, 45, 30, 28, -3, -47, 32};
    vector<int> y = {52, 33, -46, -16, 28, 38, 59, 32, 23, 67, 20, -68, 37, 54, -7, 56, -1, 8, 46, -25, -69, -59, 6, 48, 69, 63, 14, -48, 25, 3, -33, 4, -8, 57, -32, -62, 24, -63, -35, 44, 27, 29, -40, 19, 45, 30, -12, 40, -65, 5};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {-55, 22, -53, -5, 62, -68, 60, -65, -4, 4, -34, -6, -66, -16, -19, -67, -28, 61, 38, -38, -69, 58, -57, 46, 0, 18, 47, -48, -3, -18, -30, -58, -27, -56, 40, -15, 16, 20, -13, -7, 35, 27, 68, 6, -24, 2, 31, -37, 3, 53};
    vector<int> y = {-55, 22, -53, -5, 62, -68, 60, -65, -4, 4, -34, -6, -66, -16, -19, -67, -28, 61, 38, -38, -69, 58, -57, 46, 0, 18, 47, -48, -3, -18, -30, -58, -27, -56, 40, -15, 16, 20, -13, -7, 35, 27, 68, 6, -24, 2, 57, -64, 70, 64};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {57, 37, -58, -35, -24, 65, 59, 48, 27, 19, 54, -55, -8, 68, -48, 56, 12, 38, -34, 42, 30, 16, -59, 62, -18, 25, -68, -60, 67, -2, 44, 36, -21, -36, -51, 22, 53, -56, 47, 18, -12, -29, -33, -7, -50, -67, 39, 18, -15, -50};
    vector<int> y = {57, 37, -58, -35, -24, 65, 59, 48, 27, 19, 54, -55, -8, 68, -48, 56, 12, 38, -34, 42, 30, 16, -59, 62, -18, 25, -68, -60, 67, -2, 44, 36, -21, -36, -51, 22, 53, -56, 47, 18, -12, -29, -33, -7, -50, -67, -12, -19, -24, -23};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {-14, -11, -66, 54, -69, -48, -37, -33, 69, -62, -25, -52, -31, -68, -60, 66, 1, -35, -26, -10, 67, 56, 13, 50, 30, -32, 29, -39, -55, -7, -16, 45, 52, 9, -9, -40, -45, 5, -41, -56, -17, 8, 51, 17, 70, 37, -27, 13, 63, -37};
    vector<int> y = {-14, -11, -66, 54, -69, -48, -37, -33, 69, -62, -25, -52, -31, -68, -60, 66, 1, -35, -26, -10, 67, 56, 13, 50, 30, -32, 29, -39, -55, -7, -16, 45, 52, 9, -9, -40, -45, 5, -41, -56, -17, 8, 51, 17, 70, 37, -15, 55, 24, 44};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {-22, 53, 69, 24, 16, 13, -19, 0, 11, -33, 35, 21, -40, 27, -45, 5, -53, 7, -62, -59, 20, -63, -16, -31, 9, -5, 44, 34, 36, 3, -47, -9, 29, 18, -66, -39, 33, 46, 70, -41, 42, -61, -6, 32, -25, 51, -32, -54, 9, 53};
    vector<int> y = {-22, 53, 69, 24, 16, 13, -19, 0, 11, -33, 35, 21, -40, 27, -45, 5, -53, 7, -62, -59, 20, -63, -16, -31, 9, -5, 44, 34, 36, 3, -47, -9, 29, 18, -66, -39, 33, 46, 70, -41, 42, -61, -6, 32, -25, 51, -52, -65, -30, -67};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {18, -69, -40, 53, -10, -21, -49, -57, -7, 7, 68, -5, -63, -22, -59, 69, -62, 32, 15, -67, -33, -46, 50, 6, 67, -47, -18, 16, 13, 65, -54, 9, 36, -28, -12, 30, 34, -68, -9, 60, 14, 57, -58, 51, -23, -14, -56, 12, -14, 27};
    vector<int> y = {18, -69, -40, 53, -10, -21, -49, -57, -7, 7, 68, -5, -63, -22, -59, 69, -62, 32, 15, -67, -33, -46, 50, 6, 67, -47, -18, 16, 13, 65, -54, 9, 36, -28, -12, 30, 34, -68, -9, 60, 14, 57, -58, 51, -23, -14, 23, -12, 0, 57};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {-22, 66, 70, -39, 69, 30, 42, -62, -52, -66, 7, 60, 64, 53, 46, 29, -10, 44, -28, -15, 14, -59, -32, 39, -14, 49, 37, 33, 51, -21, -3, 65, -45, 28, -69, -13, 45, 15, -24, -34, 40, -30, 58, -4, -2, 52, -66, -26, -65, 18};
    vector<int> y = {-22, 66, 70, -39, 69, 30, 42, -62, -52, -66, 7, 60, 64, 53, 46, 29, -10, 44, -28, -15, 14, -59, -32, 39, -14, 49, 37, 33, 51, -21, -3, 65, -45, 28, -69, -13, 45, 15, -24, -34, 40, -30, 58, -4, -2, 52, 64, -53, 51, 36};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {-29, 16, -43, 57, 39, 27, 58, -3, -61, 63, 35, -11, 14, 4, 34, 6, -62, 8, 46, -70, 60, 11, 49, -48, -16, -38, -19, 42, -34, 66, 38, -37, 40, 31, 20, -57, -46, 32, -30, -23, 19, 0, -18, -17, 22, 59, 60, -42, 2, -34};
    vector<int> y = {-29, 16, -43, 57, 39, 27, 58, -3, -61, 63, 35, -11, 14, 4, 34, 6, -62, 8, 46, -70, 60, 11, 49, -48, -16, -38, -19, 42, -34, 66, 38, -37, 40, 31, 20, -57, -46, 32, -30, -23, 19, 0, -18, -17, 22, 59, 21, 13, 33, -1};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {40, -15, 11, 28, -28, 36, 23, -42, -54, 4, -1, 6, 7, -56, -14, 39, 14, 54, -48, 15, -50, -34, -21, -12, 27, 66, -23, -3, 0, 17, -33, 50, 32, 55, -67, -64, -30, 16, 33, -10, 49, -40, 24, -32, 22, -52, 54, 20, -29, 63};
    vector<int> y = {40, -15, 11, 28, -28, 36, 23, -42, -54, 4, -1, 6, 7, -56, -14, 39, 14, 54, -48, 15, -50, -34, -21, -12, 27, 66, -23, -3, 0, 17, -33, 50, 32, 55, -67, -64, -30, 16, 33, -10, 49, -40, 24, -32, 22, -52, 46, -14, 48, 20};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {-34, -18, 17, -2, -67, -7, 10, 29, 18, -45, 12, 36, 5, 15, 51, -37, 38, -44, 70, -56, 50, 55, 33, -38, -22, 1, 8, 37, -15, -40, 45, 47, -57, -28, 2, -69, 64, -61, 63, 54, 57, -27, -12, -4, 49, 41, 66, -28, -5, 62};
    vector<int> y = {-34, -18, 17, -2, -67, -7, 10, 29, 18, -45, 12, 36, 5, 15, 51, -37, 38, -44, 70, -56, 50, 55, 33, -38, -22, 1, 8, 37, -15, -40, 45, 47, -57, -28, 2, -69, 64, -61, 63, 54, 57, -27, -12, -4, 49, 41, 46, -8, 14, 34};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {40, 11, 19, -5, 38, -28, 52, -17, -8, 59, -60, -29, -61, -15, -70, 26, 35, -45, 67, -21, -39, -13, -36, -19, 9, 43, 21, 27, -25, 30, 66, 29, 36, 1, 41, 39, -68, -31, 0, -64, -59, 60, 44, -51, 17, 32, 26, -52, 28, 54};
    vector<int> y = {40, 11, 19, -5, 38, -28, 52, -17, -8, 59, -60, -29, -61, -15, -70, 26, 35, -45, 67, -21, -39, -13, -36, -19, 9, 43, 21, 27, -25, 30, 66, 29, 36, 1, 41, 39, -68, -31, 0, -64, -59, 60, 44, -51, 17, 32, 7, 39, -68, 59};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {35, -25, 69, -48, 18, -27, -6, 19, 32, 37, 41, -16, 49, -69, -17, -26, -46, 31, 59, -68, -1, -49, 52, 42, -40, -53, -64, -51, 9, 63, -14, 8, 45, -31, -58, 4, -37, -62, 39, -20, -34, -23, -21, 1, 10, -33, 59, -55, -57, -12};
    vector<int> y = {35, -25, 69, -48, 18, -27, -6, 19, 32, 37, 41, -16, 49, -69, -17, -26, -46, 31, 59, -68, -1, -49, 52, 42, -40, -53, -64, -51, 9, 63, -14, 8, 45, -31, -58, 4, -37, -62, 39, -20, -34, -23, -21, 1, 10, -33, -26, -10, 32, 55};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {-65, -31, -12, 34, 39, -47, -22, 25, 56, 36, 50, 61, -34, 65, 16, 57, -26, -20, -14, 40, -54, 2, -37, -44, -7, 3, -59, 45, -39, 31, 8, -69, -21, 49, 53, 68, -17, 27, -48, 52, -32, -36, -29, 70, -41, 67, -26, 13, 19, -64};
    vector<int> y = {-65, -31, -12, 34, 39, -47, -22, 25, 56, 36, 50, 61, -34, 65, 16, 57, -26, -20, -14, 40, -54, 2, -37, -44, -7, 3, -59, 45, -39, 31, 8, -69, -21, 49, 53, 68, -17, 27, -48, 52, -32, -36, -29, 70, -41, 67, 38, 19, 2, 65};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {26, -19, -66, -34, 28, 42, -26, -51, 11, -42, -57, 9, 47, -43, -58, 51, 50, -36, -38, -31, -62, 23, -8, 44, 5, -21, 56, 24, -40, 16, 12, 66, -24, 68, -25, 54, -69, -55, -63, 37, 33, -47, 41, -61, -52, -10, -8, -46, 25, 41};
    vector<int> y = {26, -19, -66, -34, 28, 42, -26, -51, 11, -42, -57, 9, 47, -43, -58, 51, 50, -36, -38, -31, -62, 23, -8, 44, 5, -21, 56, 24, -40, 16, 12, 66, -24, 68, -25, 54, -69, -55, -63, 37, 33, -47, 41, -61, -52, -10, -41, 63, 10, -13};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {33, -46, -16, 28, 38, 59, 32, 23, 67, 20, -68, 37, 54, -7, 56, -1, 8, 46, -25, -69, -59, 6, 48, 52, 69, 63, 14, -48, 25, 3, -33, 4, -8, 57, -32, -62, 24, -63, -35, 44, 27, 29, -40, 19, 45, 30, -3, -47, 35, -70};
    vector<int> y = {33, -46, -16, 28, 38, 59, 32, 23, 67, 20, -68, 37, 54, -7, 56, -1, 8, 46, -25, -69, -59, 6, 48, 52, 69, 63, 14, -48, 25, 3, -33, 4, -8, 57, -32, -62, 24, -63, -35, 44, 27, 29, -40, 19, 45, 30, -3, -47, 35, 70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {-70, 70};
    vector<int> y = {-70, -69};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {-70, 70, 0};
    vector<int> y = {-70, -69, 50};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {-41, -40, 1, -11, -32, -7, 24, -11, 49, -15, -22, 20, -8, 54, 54, 69, 16, -30, 36, -6, -30, 40, 64, 20, -66, -37, -33, -18, -35, 36, 9, 61, -43, 45, 5, 60, -8, -58, 65, -66, 41, 12, 34, -11, -57, -38, 46, 63, -55, 3};
    vector<int> y = {5, -24, -2, -4, 23, 14, 1, 70, -26, 45, 15, 48, 32, -41, 54, -47, -67, -46, -9, -53, 54, 28, -61, 11, 53, 68, -33, 62, 37, -8, -17, -17, 48, 19, -49, 56, -41, 16, 17, -50, 28, 59, 10, 50, 23, -16, 56, 31, -70, -44};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x = {0, 0};
    vector<int> y = {-70, 70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {-70, -70, 70, 70, -32, -7, 24, -11, 49, -15, -22, 20, -8, 54, 54, 69, 16, -30, 36, -6, -30, 40, 64, 20, -26, -37, -33, -18, -35, 36, 9, 61, -43, 45, 5, 60, -8, -58, 65, -66, 41, 12, 34, -11, -57, -38, 46, 63, -55, 3};
    vector<int> y = {70, -70, -70, 69, 23, 14, 1, 70, -26, 45, 15, 48, 32, -41, 54, -47, -67, -46, -9, -53, 54, 28, -61, 11, 53, 68, -33, 62, 37, -8, -17, -17, 48, 19, -49, 56, -41, 16, 17, -50, 28, 59, 10, 50, 23, -16, 56, 31, -70, -44};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
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
    vector<int> x = {0, 70, 70, 0};
    vector<int> y = {0, 0, 70, 70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {0, 3};
    vector<int> y = {0, 0};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x = {70, -70};
    vector<int> y = {70, -70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x = {-70, 0, 70};
    vector<int> y = {0, 70, -70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> x = {0, 0, 1, 1};
    vector<int> y = {0, 1, 0, 1};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> x = {-70, -70, 70, 70};
    vector<int> y = {-70, 70, -70, 70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> x = {-70, 70};
    vector<int> y = {-70, 70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> x = {-70, -70};
    vector<int> y = {-70, 70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> x = {-70, 70, -69, 69};
    vector<int> y = {-70, 70, 69, -69};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> x = {-70, 70};
    vector<int> y = {0, 0};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> x = {0, 0};
    vector<int> y = {0, 1};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> x = {-66, -68, -67, -68, -65, -67, -67, -67, -66, -70, -67, -69, -69, -69, -67, -65, -66, -69, -65, -68, -65, -65, -70, -67, -66, -65, -68, 68, -67, -66, -69, -69, -70, -69, -70, -68, -69, -66, -65, -68, -70, -70, -69, -70, -66, -65, -68, -68, -66, -70};
    vector<int> y = {63, 67, 66, 65, 70, 69, 68, 64, 67, 69, 70, 68, 70, 65, 65, 63, 65, 69, 68, 68, 69, 67, 66, 67, 69, 66, 69, 67, 63, 68, -70, 67, 63, 66, 65, 70, 63, 70, 64, 64, 68, 67, 64, 70, 64, 65, 66, 63, 66, 64};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> x = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    vector<int> y = {0, 0, 0, 1, 1, 1, 2, 2, 2};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> x = {0, 1};
    vector<int> y = {0, 1};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> x = {0, 51};
    vector<int> y = {0, 0};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> x = {70, 70};
    vector<int> y = {70, -70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> x = {0, 0, 0, 1, 1, 1, 2, 2, 2};
    vector<int> y = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> x = {70, 70, -70, -70};
    vector<int> y = {70, -70, 70, -70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> x = {0, 1, 0};
    vector<int> y = {0, 1, 2};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> x = {-70, -69, -68, -67, -69, -70, 70, 70};
    vector<int> y = {-70, -69, -68, -67, -70, 70, -70, 70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> x = {-70, 69};
    vector<int> y = {0, 0};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> x = {-70, 70, -70, 70};
    vector<int> y = {-70, -70, 70, 70};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> x = {68, 70};
    vector<int> y = {50, 50};
    DrawingPointsDivOne* pObj = new DrawingPointsDivOne();
    clock_t start = clock();
    int result = pObj->maxSteps(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22907549&rd=15182&pm=12295
********************************************************************************
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
const int MAXN = 150;
const int MAXD = 600;
 
class DrawingPointsDivOne {
public:
  int maxSteps(vector <int>, vector <int>);
};
 
int N;
bool pt[MAXN][MAXN];
bool seen[MAXD][MAXD];
int res[MAXD][MAXD];
 
bool works (int x)
{
  for (int i = 0; i < MAXN + x; i++)
    for (int j = 0; j < MAXN + x; j++)
      seen[i][j] = false;
  
  for (int i = 0; i < MAXN; i++)
    for (int j = 0; j < MAXN; j++)
      if (pt[i][j])
      {
        for (int k = 0; k < x; k++)
          for (int l = 0; l < x; l++)
            seen[i+k][j+l] = true;
      }
  
  for (int i = 0; i <= MAXN + x; i++)
  {
    res[i][MAXN+x] = 0;
    res[MAXN+x][i] = 0;
  }
  
  for (int i = MAXN + x - 1; i >= 0; i--)
    for (int j = MAXN + x - 1; j >= 0; j--)
    {
      res[i][j] = min (res[i+1][j], min (res[i+1][j+1], res[i][j+1])) + 1;
      if (!seen[i][j])
        res[i][j] = 0;
      
      if (res[i][j] >= x)
      {
        if (!pt[i][j])
          return false;
      }
    }
  return true;
}
 
int DrawingPointsDivOne::maxSteps(vector <int> x, vector <int> y) {
  for (int i = 0; i < MAXN; i++)
    for (int j = 0; j < MAXN; j++)
      pt[i][j] = false;
  N = x.size();
  
  for (int i = 0; i < N; i++)
    pt[x[i]+70][y[i]+70] = true;
  
  if (works (400)) return -1;
  
  int lo = 0, hi = 400;
  while (lo < hi)
  {
    int mid = (lo + hi + 1) / 2;
    if (works (mid))
      lo = mid;
    else
      hi = mid - 1;
  }
  return lo - 1;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/