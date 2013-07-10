/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3543
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

class ATaleOfThreeCities {
public:
    double connect(vector<int> ax, vector<int> ay, vector<int> bx, vector<int> by, vector<int> cx, vector<int> cy);
};

double ATaleOfThreeCities::connect(vector<int> ax, vector<int> ay, vector<int> bx, vector<int> by, vector<int> cx, vector<int> cy) {
    double ret;
    return ret;
}


int test0() {
    vector<int> ax = {0, 0, 0};
    vector<int> ay = {0, 1, 2};
    vector<int> bx = {2, 3};
    vector<int> by = {1, 1};
    vector<int> cx = {1, 5};
    vector<int> cy = {3, 28};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 3.414213562373095;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> ax = {-2, -1, 0, 1, 2};
    vector<int> ay = {0, 0, 0, 0, 0};
    vector<int> bx = {-2, -1, 0, 1, 2};
    vector<int> by = {1, 1, 1, 1, 1};
    vector<int> cx = {-2, -1, 0, 1, 2};
    vector<int> cy = {2, 2, 2, 2, 2};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> ax = {4, 5, 11, 21, 8, 10, 3, 9, 5, 6};
    vector<int> ay = {12, 8, 9, 12, 2, 3, 5, 7, 10, 13};
    vector<int> bx = {34, 35, 36, 41, 32, 39, 41, 37, 39, 50};
    vector<int> by = {51, 33, 41, 45, 48, 22, 33, 51, 41, 40};
    vector<int> cx = {86, 75, 78, 81, 89, 77, 83, 88, 99, 77};
    vector<int> cy = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 50.323397776611024;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> ax = {1, 8};
    vector<int> ay = {0, 0};
    vector<int> bx = {3, 7};
    vector<int> by = {0, 0};
    vector<int> cx = {5, 6};
    vector<int> cy = {0, 0};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> ax = {1, 2, 3, 4};
    vector<int> ay = {1, 2, 3, 4};
    vector<int> bx = {5, 6, 7, 8};
    vector<int> by = {5, 6, 7, 8};
    vector<int> cx = {10, 12, 14};
    vector<int> cy = {10, 12, 14};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 4.242640687119286;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> ax = {26, -38, -4, -41, -3, 34, -45, -34, 32, 44, 0, 32, 48, -1, 33, 19, 46, 27, -23, -9, 41, 1, -32, -49, -44, -18, 48, -20, 38, -50, -29, -47, 21, 17, 49, -49, 26, -2, 37, -21, 42, 44, -23, -20, -15, -9, -32, -40, -16, 8};
    vector<int> ay = {9, 11, 4, -3, 5, 9, 1, -18, 10, -3, -15, -19, -15, 3, -10, 8, 12, 4, 1, -10, -4, 9, -3, 18, 1, -11, 0, 15, 3, -16, -7, -10, -19, 18, 2, -8, -14, -16, 13, -17, 1, 1, 8, -19, 3, 18, 3, 6, 12, 19};
    vector<int> bx = {-35, 38, 20, -26, 21, -25, 30, 44, 1, 35, 6, 42, -22, -6, 42, 22, -22, -37, 4, -26, 10, -13, 24, 9, 2, 44, -20, -43, 29, -31, 30, -5, 5, -47, -16, -12, 0, -40, -46, -47, 26, -12, -16, -14, -46, 18, 33, -12, 22, -35};
    vector<int> by = {0, -13, -3, -11, -11, -11, -5, -8, 0, -11, -7, -4, -11, -19, -10, -7, -5, -11, 0, -13, -20, -6, -1, -12, -9, -9, -9, -1, -12, -3, -6, -8, -2, -18, -10, -15, -20, -8, -20, -11, -18, -1, -7, -5, -8, -1, -4, -14, -11, -1};
    vector<int> cx = {21, -2, -4, -3, 24, -18, -40, 49, 12, 34, 34, -43, 17, 4, 14, 22, -11, -32, -1, 35, -50, 41, -40, 14, -40, -31, -37, -28, 18, -1, 46, -17, -40, -16, -8, 23, 35, -43, -48, -16, -12, -37, 17, -32, 21, 25, -34, 11, 49, 5};
    vector<int> cy = {19, 1, -18, -2, 14, 1, 1, 16, 1, -15, -16, 5, -11, -12, -14, -14, -1, 5, -5, 2, 3, -15, -12, 20, 9, -11, -6, 17, -15, -12, 17, -8, 20, -6, 4, -11, 17, 6, -15, 2, -7, 13, -4, -18, -18, -12, -12, -9, -17, 18};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> ax = {47, 50, -27, 50, -49, -40, -30, 11, -35, -18, -43, 2, -45, 31, -42, -45, 50, -33, 50, -19, 3, -12, 27, 14, -23, 25, 44, 19, 27, -15, 12, -8, 34, 43, -42, 50, 16, -32, 4, 38, -24, 19, -22, -8, 23, 38, 45, -31, -50, 34};
    vector<int> ay = {16, 2, -15, 18, 3, 20, -1, 7, -20, -3, -10, 16, -7, 18, 16, -8, -8, -11, -18, 2, -20, 2, -10, -7, -16, -8, 20, -3, -4, -19, 19, 4, 0, 14, 19, 3, -6, 4, -10, -2, -6, -2, 5, -16, -17, -1, -17, -6, -14, -20};
    vector<int> bx = {28, 6, -20, -28, -31, -13, 15, -27, 5, -39, -32, -29, -42, 17, -46, 15, -43, -7, 43, -17, -15, -26, 49, -20, 33, 30, 48, 19, 25, 14, 39, 25, -12, 13, 36, 11, 2, -14, 8, 18, 48, 44, 31, -40, 41, 4, -43, -15, -35, -18};
    vector<int> by = {45, 28, 32, 36, 25, 40, 43, 42, 41, 33, 43, 39, 42, 26, 44, 41, 44, 31, 25, 26, 32, 26, 27, 39, 32, 37, 42, 38, 32, 40, 26, 42, 27, 31, 37, 27, 42, 35, 26, 34, 38, 37, 28, 29, 37, 31, 37, 34, 31, 40};
    vector<int> cx = {-14, -10, 47, -20, 27, 10, -46, -17, -25, -46, 22, 17, -50, -45, 27, 41, 39, 8, -31, -10, -47, -20, -14, 9, 32, -32, -13, -31, -7, 20, -34, 6, 33, 7, 0, -44, 31, 50, 48, 8, -14, -30, 40, -5, 41, 2, 37, -35, 30, 24};
    vector<int> cy = {66, 80, 83, 73, 65, 60, 66, 70, 55, 62, 78, 64, 74, 85, 55, 63, 53, 59, 77, 59, 80, 85, 70, 76, 88, 53, 82, 82, 56, 50, 56, 63, 58, 66, 56, 58, 56, 69, 53, 65, 62, 88, 58, 60, 86, 60, 52, 65, 72, 65};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 13.70134478063541;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> ax = {21, -35, -45, 40, -33, -44, -41, 42, -24, 35, -39, 27, -37, -16, 18, -39, -6, -1, 41, 21, -5, 15, 4, 11, 49, -8, -39, 26, 45, -32, 39, -33, -27, 34, 13, 42, 16, -28, -41, 13, 2, 31, -50, -37, -28, 42, -10, -8, -14, 32};
    vector<int> ay = {-20, -8, 9, 19, -17, -8, -5, 5, -7, 8, -16, -4, 9, -4, 20, -8, 8, -14, 5, -17, 18, -19, -17, -2, 18, 2, 10, -5, 18, -12, 0, 11, -10, -16, 1, 4, 5, -2, -12, 20, -7, -17, -17, -11, -12, -18, -12, -6, 17, -16};
    vector<int> bx = {-26, 49, 23, -32, -3, -35, -49, 41, -29, 50, 46, -3, 47, 26, 42, 10, -26, 48, 22, 15, -16, 33, -10, -23, -30, -26, -21, -38, -37, 5, -46, 24, 0, 25, 48, 46, -39, 39, -19, 29, 43, -44, -10, -14, -15, 49, -6, 29, -8, -23};
    vector<int> by = {45, 42, 36, 26, 40, 28, 32, 39, 30, 40, 37, 35, 40, 41, 26, 34, 25, 27, 44, 34, 31, 33, 36, 35, 33, 32, 43, 38, 30, 42, 43, 39, 36, 33, 33, 45, 34, 38, 30, 39, 40, 35, 42, 26, 40, 39, 33, 42, 45, 36};
    vector<int> cx = {-12, -6, -46, 4, -30, -36, 7, -24, 17, 11, 9, 8, 40, -25, -48, 17, 29, -19, 39, 15, -9, -11, 20, 38, 32, -1, -34, -46, -26, 32, -1, -16, 32, 16, -19, 31, -46, 46, -17, 22, 32, 16, 20, 0, -34, -47, -48, -44, 0, -6};
    vector<int> cy = {61, 71, 54, 90, 88, 83, 52, 81, 86, 66, 62, 58, 59, 78, 55, 66, 51, 87, 54, 73, 65, 55, 63, 61, 50, 71, 76, 79, 90, 66, 53, 53, 56, 58, 59, 56, 86, 52, 55, 85, 51, 88, 64, 67, 77, 84, 60, 88, 74, 63};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 14.280109889280517;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> ax = {-8, 29, -26, 49, 41, -5, 35, 12, -17, -29, 9, -12, 13, -26, -40, 19, -30, -31, -14, 1, 20, -40, -41, 21, 4, -6, 43, 12, 16, 48, 35, 43, 20, 21, -10, -34, 22, 9, -12, 43, 47, -30, 38, -36, -31, 43, 5, 31, -36, -24};
    vector<int> ay = {3, 19, -12, -19, 12, -11, 14, -15, 9, -8, 2, 5, -10, -8, -14, 19, -6, 2, -10, 16, -5, 1, -16, 19, 10, -13, -18, -16, 6, 12, -19, 3, -11, -19, 6, -3, 2, -5, 20, -7, 19, -20, -14, -8, -1, 16, -9, -6, 2, 12};
    vector<int> bx = {-40, 50, 9, -7, 39, -33, -40, -17, -41, -24, -3, -19, -21, 14, -31, 7, -29, -3, -35, 0, 10, 48, 11, -6, -6, 28, -23, -25, -41, 19, -48, 19, 4, -24, -22, 1, -40, -9, -28, 43, 4, -32, 43, -5, 4, 23, 17, 46, 30, 50};
    vector<int> by = {32, 33, 40, 42, 27, 29, 36, 28, 44, 33, 28, 31, 36, 45, 36, 34, 34, 43, 45, 32, 27, 37, 28, 38, 41, 29, 30, 25, 39, 43, 42, 40, 42, 26, 27, 28, 42, 41, 36, 38, 27, 40, 41, 42, 29, 33, 25, 32, 43, 27};
    vector<int> cx = {-29, 1, -4, 10, 17, 23, -31, -22, 42, 28, -48, -16, 21, 11, -47, -44, 41, 31, 44, 29, 15, -10, -23, 26, 1, 13, 4, -17, 4, 21, -14, 9, -9, 12, -38, 19, 9, -16, -39, 23, 21, -13, -8, -49, 22, -42, 43, -25, -44, 48};
    vector<int> cy = {58, 80, 60, 63, 67, 51, 71, 74, 74, 70, 76, 57, 84, 74, 87, 61, 56, 53, 90, 77, 90, 75, 70, 69, 90, 63, 90, 70, 86, 76, 76, 84, 85, 56, 59, 69, 51, 68, 50, 59, 82, 69, 63, 72, 88, 50, 78, 58, 54, 89};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 12.407317850634975;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> ax = {9, -34, -6, -44, -17, -17, -8, 5, 3, 41};
    vector<int> ay = {-12, -13, -8, 10, 12, -11, 0, -3, 16, 1};
    vector<int> bx = {-7, -9, -19, 15, 8, 50, 65, 31, 60, 42, 12, 51, 52, 15, 64, 38, -7, -6, -24, -11};
    vector<int> by = {38, 26, 30, 40, 35, 27, 34, 25, 38, 30, 25, 43, 30, 25, 43, 39, 35, 26, 45, 35};
    vector<int> cx = {21, 31, 92, 76, 7, 70, 21, 26, 70, 86};
    vector<int> cy = {90, 58, 86, 71, 70, 83, 69, 55, 70, 74};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 31.328997299096123;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> ax = {-46, 50, 44, 12, -11, -7, 28, 14, -48, 21};
    vector<int> ay = {19, 16, -19, 11, 7, 3, -19, 11, -12, -10};
    vector<int> bx = {8, -3, -6, 43, 30, -19, 27, 40, 66, -4, 5, -13, 64, 66, 36, 31, 40, 0, 61, 22};
    vector<int> by = {39, 44, 36, 33, 27, 27, 34, 41, 31, 31, 29, 31, 26, 30, 34, 28, 35, 30, 30, 29};
    vector<int> cx = {100, 87, 72, 52, 66, 51, 11, 2, 75, 15};
    vector<int> cy = {86, 76, 53, 85, 76, 55, 73, 72, 80, 60};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 35.00914434885011;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> ax = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    vector<int> ay = {-9, -10, -3, 19, 7, -16, 1, 12, -12, -20, 0, -18, -19, 16, 17, -13, -2, 10, 13, 11};
    vector<int> bx = {8, -46, 7, -4, -32, 3, -26, -31, 9, 10, 4, -35, -1, -15, -25, -17, -29, -24, -30, -13, -33, -36, -39, -27, -11, -50, -10, -49, -45, -12};
    vector<int> by = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> cx = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> cy = {2, -5, -7, 12, -4, 13, 4, -16, 5, -3, 7, -19, 10, 17, -18, -9, 11, -11, 14, 3};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> ax = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    vector<int> ay = {-13, 14, 11, -19, 13, -3, 18, -10, 17, -6, -1, 1, 7, -20, 2, 5, 8, 12, -7, -15};
    vector<int> bx = {-50, 1, 6, -2, 5, -27, -6, 4, -21, -11, -1, -14, -41, -25, -43, -49, -24, -46, -19, -18, -35, -36, -13, 10, -26, -7, -40, -48, -15, -3};
    vector<int> by = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> cx = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> cy = {-5, -12, -6, -1, 10, -18, -19, -20, -17, -15, -3, -4, 18, -2, 5, 11, 8, -14, -16, 19};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> ax = {-50, -50, -50, -50};
    vector<int> ay = {6, -8, 18, 5};
    vector<int> bx = {-7, -21, -23, -48, -38, -25};
    vector<int> by = {20, 20, 20, 20, 20, 20};
    vector<int> cx = {10, 10, 10, 10};
    vector<int> cy = {11, -2, -12, -13};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 22.06381118641753;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> ax = {82, -33, 26, -39, 95, 68, -53, 66, 13, -59, 15, -53, 60, -50, -54, -88, 81, -29, 16, -44, -78, -23, -94, -69, 76, -26, -22, -12, 16, -61, 32, 73, 3, 96, -32, -82, -21, 30, -96, -68, 85, 94, -45, 86, -61, 67, -88, -35, -91, -84};
    vector<int> ay = {83, -63, 96, 26, 58, -36, 76, 44, -38, -39, 26, 83, 64, -50, 83, 12, 38, -52, -45, -98, 70, -95, 58, -83, 54, 0, 26, 35, -2, -75, 22, 79, 53, -79, 11, -13, 15, 29, -9, 11, 99, 73, 16, -90, 26, 51, 8, -92, -83, 69};
    vector<int> bx = {-21, 46, 96, 21, -6, 44, 11, 68, -84, -33, 81, 20, 8, 20, 61, -17, 71, -12, -68, -90, -56, -79, 29, 15, -70, 24, 90, 42, 52, -85, -43, 9, -30, 89, -47, 34, 50, 89, -57, 50, 0, -76, 57, -45, 87, 13, -98, 74, -58, -65};
    vector<int> by = {-79, 55, -57, 95, 71, -84, -31, 41, 76, 77, -39, 34, -46, 0, -39, -94, -23, 72, 46, -30, -75, 19, 73, 61, -78, 94, -21, 95, 5, 29, 67, 35, -86, -2, 64, -1, 38, -91, -48, -18, -84, -76, -16, -77, -34, 83, 56, -49, -74, -20};
    vector<int> cx = {50, 92, -83, -67, -33, 29, 32, 0, 73, -62, 84, -64, 28, 39, -40, 3, -71, -46, 77, -80, -60, -2, 68, 55, 56, -67, -23, 81, -80, -87, 25, -84, 59, -18, -27, -79, -46, 55, -45, -53, -88, 45, -96, 20, -90, 14, 6, -44, 14, -6};
    vector<int> cy = {80, 32, -80, -38, -95, -44, 67, -85, 29, -87, 78, 35, 97, 54, 40, -24, -80, 13, -61, -54, -31, 18, 19, 10, -80, 22, -47, 92, 18, -82, -79, -39, -30, -96, 26, -74, 97, 65, -50, -3, 22, -70, 97, -98, 37, 78, -52, -89, 34, 66};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2360679774997894;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> ax = {38, 52, -12, -9, -11, 4, -33, 26, 78, -37, -46, -37, 6, -83, -53, 21, -56, 52, -14, 25, -83, 8, 2, 30, -45, 42, -40, 10, 46, 37, 94, 13, -6, 13, -18, -20, -46, -93, -76, 96, 49, -3, -16, -48, 22, 52, -94, -1, 22, -78};
    vector<int> ay = {-35, 56, 11, 36, 63, 68, 29, 2, 39, -41, 100, 53, -40, -71, -52, -27, 29, -98, 87, -20, 76, 94, 7, 78, 57, -41, -42, 18, -78, -71, 97, 4, 9, -89, -22, -21, -95, -43, -97, 84, -19, -68, -56, -80, -8, -71, 8, -61, -30, 81};
    vector<int> bx = {97, -91, 14, 2, -79, -37, 92, 5, 18, -39, 56, -47, -75, -40, 80, -78, -17, -79, 22, -40, 91, 39, 42, -10, -41, 91, 90, 95, 12, -70, 35, -65, 0, 12, -69, 18, 55, -4, 86, 59, 33, 57, 78, -16, -52, 21, -23, 44, 34, 18};
    vector<int> by = {61, 52, -28, -90, -75, -34, -64, -62, 40, -27, -43, -57, 11, 17, -97, -85, -56, 0, 35, -86, -79, 55, 0, -84, 85, -17, -45, 54, 80, 57, -48, 9, 83, 26, 4, -1, -23, 69, -23, -86, -49, -60, 67, 61, 25, 85, 15, 57, -27, -73};
    vector<int> cx = {-97, -19, -50, -17, 12, 84, -8, 49, -5, -82, 27, 16, 7, -95, 87, 69, -76, 14, 29, 5, 41, -93, 82, -82, 39, -44, 68, -48, 53, -52, 81, -51, 5, 68, 78, -49, 4, -66, 99, -10, 22, -83, 4, -46, 61, -35, 51, -76, -36, 50};
    vector<int> cy = {-81, -90, 37, -73, 36, 68, -35, 46, -99, 45, -99, -85, -90, 35, -37, 89, -15, 74, 72, -55, 75, 2, 93, 74, 37, -16, 17, -40, 18, 22, 44, 94, -79, 18, -91, 25, -53, 41, -61, 7, -34, -51, -94, 12, 65, -15, 35, -86, 23, -38};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 3.23606797749979;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> ax = {0, 78, 72, 20, -64, 50, 34, -51, -98, 29, 0, 56, 13, 81, 36, 97, -79, 11, 47, 2, 62, 3, -12, -42, -23, -43, -100, -22, -94, 70, 60, -77, 71, 100, -14, 1, 32};
    vector<int> ay = {27, 52, -59, 20, 34, 59, -96, 65, -23, -39, -24, -12, 64, 91, -24, -6, -12, 22, 40, 16, -31, 48, 80, 71, -25, 15, 2, 8, -53, -50, 74, 2, -51, 61, -77, 40, -54};
    vector<int> bx = {-90, -65, -48, 90, -98, 57, -83, 11, 100, 22, -51, -31, 94, -53, 23, 26, -76, -15, -75, 48, -21, -36, -2, 96, -21, -47, -20, 93, 67, 52, -94, -3, -75, 91};
    vector<int> by = {-92, 30, -7, -90, -69, -100, 33, -66, -5, -98, 49, -94, 72, -34, 23, -30, -78, 12, 14, -70, -73, -49, 53, 76, -76, -94, 85, -41, -8, -48, 29, -74, 19, 63};
    vector<int> cx = {83, 16, 12, -20, -45, 94, 52, -40, 32, -99, 2, 99, 87, 70, 96, 97, 46, -65, -56, -70, -58, -81, -36, 5, -65, 17, 16, -56, 35, -68, -46, -94};
    vector<int> cy = {57, 72, 77, 25, 7, -91, 96, -66, 12, 87, 2, 49, 68, 8, -26, 34, -6, 71, 75, -12, -24, 73, 99, 18, 73, -24, -60, 8, 86, 91, -5, -43};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 5.99070478491457;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> ax = {12, 98, 84, 93, 86, 84, 83, 40, -64, 19, 7, 14, -61, 36, 47, -42, -1, -42, -14, -93, 34, 59, -7, 1, -78};
    vector<int> ay = {94, -54, 69, -77, 63, -92, -100, 60, 79, 24, 82, -1, 3, -82, 10, 38, -42, -22, -41, -36, -51, -55, -21, 69, -95};
    vector<int> bx = {76, 20, 16, -39, -65, -8, -73, -64, -95, -67, 24, -47, 76, 93, -14, 51, 45, 48, -43, -30, -23, -27, -13, -66, 16};
    vector<int> by = {4, -63, 59, 62, 100, -9, 36, -50, -36, -34, -37, -58, 23, -42, -23, -24, -54, 87, 0, 42, 95, 51, 28, 89, 45};
    vector<int> cx = {69, 35, -37, -93, 19, -23, -5, -51, -49, -54, -39, -26, 28, -91, 43, 56, -16, -60, -74, 11, 49, -64, -16, 100, 47};
    vector<int> cy = {7, 72, 25, -24, 98, 14, -2, -61, 77, 76, -68, 5, -29, 35, -27, 69, 65, 52, -35, -40, -68, 16, 44, 1, -70};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> ax = {-26, -72, -33, -84, 34};
    vector<int> ay = {-40, -53, -1, -87, 33};
    vector<int> bx = {-75, -50, -37, -40};
    vector<int> by = {100, -23, -79, 13};
    vector<int> cx = {85, 53, -89, -54, 4};
    vector<int> cy = {26, -42, -71, -94, 80};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 32.415530456738736;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> ax = {-67, -17};
    vector<int> ay = {-73, 4};
    vector<int> bx = {-8, 43};
    vector<int> by = {21, 10};
    vector<int> cx = {-48, -86};
    vector<int> cy = {-79, 47};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 39.16024290684261;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> ax = {67, 61};
    vector<int> ay = {-46, -58};
    vector<int> bx = {-80, -2};
    vector<int> by = {-4, 9};
    vector<int> cx = {60, 86};
    vector<int> cy = {-56, 44};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 90.4743816513229;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> ax = {-60, -67};
    vector<int> ay = {-93, -92};
    vector<int> bx = {-83, -75};
    vector<int> by = {-73, -79};
    vector<int> cx = {99, 98, 96, 99, 99, 93, 96, 93, 99, 98, 96, 94, 93, 98, 97, 98, 95, 95, 93, 96, 94, 97, 99, 93, 94, 93, 97, 97, 96, 95, 94, 98, 97, 98, 97, 95, 95, 95, 97, 98, 94, 94, 96, 99, 94, 93, 99, 95, 96};
    vector<int> cy = {97, 93, 99, 98, 93, 95, 93, 98, 99, 98, 96, 94, 97, 95, 97, 97, 99, 97, 96, 97, 99, 94, 96, 93, 93, 99, 99, 98, 95, 93, 97, 94, 96, 99, 93, 95, 98, 94, 95, 96, 96, 98, 98, 95, 95, 94, 94, 96, 94};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 255.69728035685324;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> ax = {-64, -61};
    vector<int> ay = {-83, -85};
    vector<int> bx = {-88, -86};
    vector<int> by = {-74, -72};
    vector<int> cx = {93, 96, 97, 99, 95, 98, 94, 94, 99, 97, 96, 93, 95, 94, 98, 97, 98, 95, 94, 95, 99, 97, 99, 94, 96, 93, 98, 98, 96, 94, 98, 95, 95, 93, 97, 93, 93, 97, 93, 99, 96, 94, 97, 99, 96, 96, 98, 95, 99};
    vector<int> cy = {93, 93, 95, 99, 98, 97, 96, 94, 94, 98, 96, 99, 95, 93, 98, 99, 94, 96, 99, 97, 98, 93, 97, 95, 97, 98, 93, 95, 98, 97, 99, 94, 99, 97, 94, 96, 95, 97, 94, 93, 94, 98, 96, 96, 95, 99, 96, 93, 95};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 259.96879367129407;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> ax = {-64, -56, -61};
    vector<int> ay = {-91, -100, -92};
    vector<int> bx = {-86, -84, -89};
    vector<int> by = {-79, -70, -76};
    vector<int> cx = {97, 93, 99, 93, 97, 95, 93, 98, 99, 96, 96, 99, 99, 96, 98, 96, 97, 94, 98, 98, 98, 94, 95, 97, 93, 98, 93, 94, 94, 96, 97, 93, 94, 98, 95, 95, 94, 95, 97, 94, 96, 99};
    vector<int> cy = {99, 93, 94, 99, 93, 93, 97, 95, 96, 96, 94, 93, 99, 98, 93, 93, 96, 99, 98, 96, 99, 95, 96, 95, 94, 97, 96, 96, 98, 95, 97, 98, 94, 94, 95, 99, 93, 94, 98, 97, 97, 97};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 265.6799605885392;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> ax = {-68, -65, -58};
    vector<int> ay = {-89, -97, -89};
    vector<int> bx = {-90, -85, -86};
    vector<int> by = {-73, -70, -74};
    vector<int> cx = {99, 96, 93, 99, 95, 99, 97, 94, 94, 98, 96, 96, 98, 95, 97, 94, 93, 95, 95, 98, 97, 96, 96, 98, 95, 99, 93, 95, 95, 97, 94, 94, 93, 93, 93, 99, 99, 94, 98, 97, 98, 99};
    vector<int> cy = {95, 93, 95, 99, 98, 96, 95, 95, 99, 99, 96, 98, 94, 95, 98, 97, 98, 93, 96, 98, 97, 95, 94, 97, 97, 98, 94, 94, 99, 96, 96, 98, 97, 99, 93, 93, 97, 94, 93, 99, 95, 94};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 259.91542083542925;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> ax = {-59, -65, -63, -59, -52, -69, -64, -53, -55, -70};
    vector<int> ay = {-91, -92, -88, -96, -87, -84, -94, -97, -98, -90};
    vector<int> bx = {-75, -83, -70, -81, -79, -86, -73, -71, -82, -73};
    vector<int> by = {-72, -70, -77, -72, -76, -72, -72, -80, -73, -77};
    vector<int> cx = {93, 94, 96, 95, 95, 97, 97, 93, 93, 96};
    vector<int> cy = {93, 95, 93, 96, 95, 93, 94, 96, 99, 97};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 235.61062258152396;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> ax = {-52, -59, -64, -50, -52, -57, -54, -52, -50, -66, -54, -50, -52, -57, -51, -54, -65, -70, -51, -65, -64, -60, -62, -65, -70, -66, -64, -66, -65, -57, -58, -53, -56, -54, -63, -66, -53, -50, -67, -51, -60, -64, -57, -53, -50, -56, -63, -59, -61, -65};
    vector<int> ay = {-88, -88, -97, -90, -82, -90, -88, -81, -86, -98, -85, -82, -86, -91, -90, -98, -92, -97, -93, -86, -81, -96, -87, -96, -88, -94, -96, -99, -87, -96, -81, -97, -98, -89, -91, -92, -96, -92, -91, -95, -86, -99, -81, -88, -84, -95, -96, -85, -95, -88};
    vector<int> bx = {-81, -74, -70, -74, -82, -74, -72, -80, -82, -75, -81, -88, -81, -72, -86, -85, -90, -70, -81, -79, -84, -73, -71, -71, -79, -71, -86, -87, -88, -71, -87, -82, -81, -78, -76, -90, -71, -75, -74, -83, -85, -82, -87, -86, -90, -90, -88, -72, -80, -73};
    vector<int> by = {-80, -75, -79, -80, -75, -78, -70, -78, -76, -71, -72, -75, -75, -74, -75, -76, -74, -77, -73, -78, -77, -75, -74, -73, -76, -70, -74, -70, -70, -71, -80, -70, -70, -73, -70, -70, -72, -75, -76, -72, -78, -80, -77, -80, -71, -78, -77, -73, -76, -77};
    vector<int> cx = {99, 97};
    vector<int> cy = {95, 98};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 237.69006701125406;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> ax = {-100, -100};
    vector<int> ay = {-100, -99};
    vector<int> bx = {-100, -99, -98};
    vector<int> by = {100, 99, 99};
    vector<int> cx = {100, 98};
    vector<int> cy = {100, 100};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 394.0050762402293;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> ax = {-100, -100};
    vector<int> ay = {-98, -100};
    vector<int> bx = {-100, -99, -98};
    vector<int> by = {100, 99, 100};
    vector<int> cx = {98, 100};
    vector<int> cy = {100, 98};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 393.0025380547164;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> ax = {-32, -41, -69, -61, -50, -32};
    vector<int> ay = {-61, -44, -38, -59, -53, -38};
    vector<int> bx = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> by = {72, 83, -26, 7, 32, 28, -23, -91, 20, -37, 50, -86, 53, -56, 91, -55, 41, -83};
    vector<int> cx = {68, 44, 51, 56, 36, 44};
    vector<int> cy = {67, 68, 38, 61, 61, 45};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 68.89379901633579;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> ax = {-59, -48, -66, -41, -30, -44};
    vector<int> ay = {-41, -68, -63, -50, -64, -33};
    vector<int> bx = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> by = {56, -50, 64, -60, 72, -66, -89, 9, 94, 12, 27, -23, 43, 70, -21, -75, 79, -1};
    vector<int> cx = {37, 34, 51, 40, 46, 41};
    vector<int> cy = {59, 52, 42, 35, 62, 46};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 64.30107829399317;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> ax = {-53, -54, -50, -65, -37, -69};
    vector<int> ay = {-66, -68, -66, -41, -38, -39};
    vector<int> bx = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> by = {55, -95, 65, -47, -49, 19, 23, -48, 79, 86, -37, -6, -45, 43, 98, -74, -87, -64, 66, -67, 36, 80, -86, -46, -73, -69, -78, -88, 51, -44, -52, -29, 26, -51, 37, -36, 9, 82, -93, 30, -82, 94, -7, -50, 24, -26, 41, 99, 67, 88};
    vector<int> cx = {46, 56, 69, 46, 54, 49};
    vector<int> cy = {58, 61, 47, 61, 56, 57};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 83.11123333310793;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> ax = {-70, -32, -58, -56, -61, -41, -39, -37, -49, -34, -47, -60, -38, -51, -37, -45, -47, -46, -62, -54, -47, -55, -39, -43, -50, -44, -47, -70, -43, -37, -48, -59, -36, -41, -38, -48, -69, -65, -70, -41, -58, -53, -34, -30, -57, -68};
    vector<int> ay = {-36, -39, -45, -40, -43, -66, -34, -51, -50, -70, -31, -38, -63, -32, -38, -70, -47, -58, -61, -64, -52, -50, -66, -38, -68, -56, -54, -47, -44, -43, -38, -64, -53, -68, -43, -56, -33, -58, -64, -39, -33, -38, -33, -44, -31, -45};
    vector<int> bx = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> by = {97, 34, -95, -53, 50, 98, 39, -89, -12, 23, 5, 62, 8, 51, -13, -28, -75, -48, 13, -91, -81, -67, 49, 81, 63, 71, 79, -20, -88, -97, 76, 14, -37, 16, -96, -41, 73, 7, -26, 100, 66, 22, 3, 56, -52, -33, -50, 20, -58, -21};
    vector<int> cx = {44, 64, 53, 30, 45, 47, 67, 45, 56, 50, 54, 40, 35, 65, 45, 62, 47, 31, 65, 63, 62, 52, 35, 65, 55, 53, 48, 44, 54, 45, 51, 41, 44, 57, 55, 55, 62, 50, 61, 33, 31, 68, 30, 63, 65, 31};
    vector<int> cy = {50, 39, 60, 65, 44, 68, 31, 58, 52, 49, 30, 51, 37, 69, 51, 44, 50, 41, 48, 59, 43, 31, 40, 68, 52, 47, 53, 59, 58, 50, 59, 55, 45, 49, 49, 31, 30, 63, 61, 40, 31, 41, 36, 55, 35, 61};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 60.16628890296994;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> ax = {-61, -59, -68, -43, -38};
    vector<int> ay = {-54, -53, -57, -38, -55};
    vector<int> bx = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> by = {-87, 79, -74, 80, -47, -94, -71, 27, 94, -27};
    vector<int> cx = {38, 38, 62};
    vector<int> cy = {47, 57, 69};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 81.77479678506299;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> ax = {-47, -69, -31, -48, -43, -69, -42, -41, -42, -39, -47, -70, -56, -36, -70, -44, -63, -53, -34, -51, -40, -48, -51, -46, -55, -33, -36, -50, -42, -53, -41, -37, -39, -66, -59, -70, -49, -49, -39, -43, -57, -66, -41, -59, -70, -58, -45, -56, -49, -30};
    vector<int> ay = {-69, -53, -53, -49, -64, -37, -70, -59, -68, -36, -49, -46, -56, -68, -69, -49, -37, -57, -34, -48, -44, -51, -41, -68, -60, -55, -31, -36, -44, -64, -64, -53, -70, -35, -68, -67, -54, -46, -46, -38, -53, -42, -39, -31, -56, -49, -63, -61, -39, -51};
    vector<int> bx = {0, 0};
    vector<int> by = {3, 32};
    vector<int> cx = {34, 63, 34, 62, 34, 55, 37, 50, 69, 36, 38, 61, 30, 31, 38, 63, 46, 47, 59, 35, 68, 39, 53, 33, 64, 47, 65, 54, 30, 49, 30, 45, 39, 34, 67, 30, 36, 59, 31, 37, 49, 51, 59, 65, 36, 34, 58, 64, 51, 61};
    vector<int> cy = {42, 67, 32, 63, 44, 35, 38, 30, 54, 51, 47, 46, 33, 38, 51, 37, 50, 35, 65, 52, 34, 35, 48, 62, 36, 48, 48, 41, 67, 39, 35, 57, 56, 57, 30, 41, 56, 34, 58, 51, 48, 41, 49, 38, 70, 48, 63, 55, 64, 70};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 79.53433565216704;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> ax = {-69, -67, -53};
    vector<int> ay = {-36, -54, -61};
    vector<int> bx = {1, 0, 1, 0, 1, 0, 0, -1, 0, 0, 1, -1, 1, 0, -1, 1, 1, 0, -1, -1, 0};
    vector<int> by = {37, 65, -96, 43, -22, -37, 49, 100, 99, 81, 12, 84, -40, -59, 0, -2, -12, -5, -45, 14, 20};
    vector<int> cx = {65, 63, 61};
    vector<int> cy = {42, 39, 51};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 114.07050050337301;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> ax = {1, 4, 3};
    vector<int> ay = {5, 4, 5};
    vector<int> bx = {10, 9, 9, 6, 5, 8, 6, 7, 8, 6, 5, 6, 10, 10, 10, 6, 5, 7, 8, 7, 8};
    vector<int> by = {9, 7, 9, 10, 6, 5, 6, 9, 6, 9, 5, 8, 7, 5, 6, 5, 9, 5, 10, 8, 7};
    vector<int> cx = {10, 10, 9};
    vector<int> cy = {0, 1, 4};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.82842712474619;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> ax = {4, 0};
    vector<int> ay = {2, 4};
    vector<int> bx = {10, 7};
    vector<int> by = {9, 9};
    vector<int> cx = {5, 8};
    vector<int> cy = {2, 4};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0990195135927845;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> ax = {5, 4};
    vector<int> ay = {1, 3};
    vector<int> bx = {8, 8};
    vector<int> by = {10, 9};
    vector<int> cx = {10, 6};
    vector<int> cy = {5, 1};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 5.4721359549995805;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> ax = {4, 1};
    vector<int> ay = {5, 1};
    vector<int> bx = {8, 5};
    vector<int> by = {7, 8};
    vector<int> cx = {9, 10};
    vector<int> cy = {2, 5};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 5.99070478491457;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> ax = {1, 5};
    vector<int> ay = {4, 0};
    vector<int> bx = {7, 7};
    vector<int> by = {7, 10};
    vector<int> cx = {7, 8};
    vector<int> cy = {2, 1};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 7.82842712474619;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> ax = {26, 17, 37, 29, 4, 38};
    vector<int> ay = {0, 0, 0, 0, 0, 0};
    vector<int> bx = {60, 40, 51};
    vector<int> by = {0, 0, 0};
    vector<int> cx = {88, 71, 87, 49, 66, 78};
    vector<int> cy = {0, 0, 0, 0, 0, 0};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> ax = {50, 3, 19};
    vector<int> ay = {0, 0, 0};
    vector<int> bx = {48, 28, 25};
    vector<int> by = {0, 0, 0};
    vector<int> cx = {76, 45, 54};
    vector<int> cy = {0, 0, 0};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> ax = {21, 46, 32};
    vector<int> ay = {0, 0, 0};
    vector<int> bx = {25, 57, 68};
    vector<int> by = {0, 0, 0};
    vector<int> cx = {89, 49, 62};
    vector<int> cy = {0, 0, 0};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> ax = {2, 4, 5};
    vector<int> ay = {1, 0, 0};
    vector<int> bx = {32, 48, 51};
    vector<int> by = {1, 1, 0};
    vector<int> cx = {74, 85, 82};
    vector<int> cy = {0, 0, 1};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 50.018512172212596;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> ax = {5, 8, 15, 2, 32, 17, 45, 38, 19, 35, 10, 44, 50, 35, 9, 0, 22, 33, 18, 31, 7, 27, 24, 14, 14, 13, 5, 42, 23, 45, 33, 29, 18, 4, 47, 26, 50, 23, 49, 1, 37, 21, 38, 13, 41, 43, 43, 17, 22, 3};
    vector<int> ay = {1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0};
    vector<int> bx = {27, 42, 68, 51, 61, 55, 65, 29, 30, 62, 24, 57, 55, 31, 54, 66, 48, 67, 34, 26, 67, 54, 28, 64, 53, 34, 37, 39, 25, 69, 61, 57, 36, 46, 69, 51, 58, 64, 63, 68, 36, 44, 48, 70, 52, 20, 21, 53, 60, 66};
    vector<int> by = {0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0};
    vector<int> cx = {72, 56, 74, 82, 62, 87, 49, 76, 40, 81, 83, 78, 80, 75, 89, 90, 56, 72, 46, 88, 75, 47, 41, 81, 73, 60, 78, 70, 83, 87, 85, 63, 52, 77, 79, 71, 84, 80, 79, 90, 89, 58, 73, 77, 59, 88, 40, 86, 71, 86};
    vector<int> cy = {0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> ax = {6, 49, 12, 18, 2, 3, 20, 25, 25, 9, 9, 41, 24, 13, 11, 11, 34, 32, 23, 29};
    vector<int> ay = {0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0};
    vector<int> bx = {55, 31};
    vector<int> by = {0, 1};
    vector<int> cx = {58, 45, 72, 71, 71, 57, 65, 41, 78, 68, 67, 69, 43, 52, 59, 81, 50, 53, 61, 53};
    vector<int> cy = {0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> ax = {5, 1, 3, 5, 0, 1, 1, 1, 4, 3, 0, 4, 3, 5, 2, 0, 3, 3, 2, 5, 0, 1, 0, 4, 5, 4, 2, 0, 4, 2, 2, 1, 3, 5, 2, 4};
    vector<int> ay = {1, 4, 3, 2, 0, 0, 1, 3, 3, 5, 4, 0, 4, 3, 1, 5, 1, 2, 5, 4, 2, 2, 1, 2, 0, 1, 4, 3, 4, 3, 2, 5, 0, 5, 0, 5};
    vector<int> bx = {6, 8, 2, 2, 2};
    vector<int> by = {7, 8, 7, -2, 9};
    vector<int> cx = {28, -77, 90, 74, 50, -25, -74, -74, 61, 52};
    vector<int> cy = {-32, -24, -39, -81, -88, -54, -52, -24, -10, 22};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 41.408120990476064;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> ax = {5, 3, 2, 2, 5, 1, 3, 1, 1, 4, 1, 4, 0, 3, 2, 3, 5, 1, 2, 0, 1, 3, 3, 5, 5, 0, 4, 2, 4, 4, 0, 0, 4, 0, 5, 2};
    vector<int> ay = {3, 1, 4, 1, 2, 1, 3, 2, 5, 5, 0, 3, 3, 4, 3, 5, 5, 4, 2, 4, 3, 2, 0, 0, 1, 0, 2, 5, 4, 1, 2, 1, 0, 5, 4, 0};
    vector<int> bx = {-2, 10};
    vector<int> by = {-7, 3};
    vector<int> cx = {-37, 61, 55, 56, 92, 16, 12, 48, 14, 98, -33, 44, 92, -33, -36, -4, 55, 55, -41, -93, 60, 68, -87, -84, 81, 58, -78, -27, 97, 86, 58, 71, 54, 54, 27, 64, -1, 80, 6, 59, -21, -93, 3, -21, -68, 37, 61, 96, -42, 57};
    vector<int> cy = {27, -36, 15, -93, -33, 67, -48, -75, 92, 1, 63, 68, 56, -53, -95, -78, -52, -72, -72, 100, -16, -76, 88, -47, 96, 39, -43, -4, -31, -65, -80, -13, -35, -46, 46, 65, -61, -95, -8, -1, 90, -49, 49, 79, -75, -67, 7, -86, 69, -14};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 13.06225774829855;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> ax = {1, 2, 1, 3, 2, 5, 3, 2, 5, 0, 3, 2, 1, 4, 5, 0, 1, 4, 1, 4, 1, 3, 3, 5, 4, 0, 2, 2, 0, 5, 4, 3, 0, 0, 4, 5};
    vector<int> ay = {4, 4, 1, 2, 5, 4, 0, 2, 5, 4, 4, 0, 2, 2, 0, 1, 3, 1, 0, 3, 5, 1, 3, 3, 5, 3, 3, 1, 2, 1, 4, 5, 0, 5, 0, 2};
    vector<int> bx = {-8, -11, -9, -9, -8, -12, -12, -7, -13, -7, -10, -7, -11, -12, -7, -9, -9, -8, -10, -11, -8, -10, -12, -11, -9, -10, -13, -8, -8, -7, -12, -11, -10, -11, -7, -8};
    vector<int> by = {-6, -5, -5, -1, -5, -1, -5, -3, -6, -5, -5, -2, -3, -4, -4, -4, -3, -2, -3, -7, -3, -7, -2, -1, -2, -1, -2, -4, -7, -7, -6, -4, -2, -6, -6, -1};
    vector<int> cx = {0, 1, -1, -2, -4, 0, -4, -5, -3, -1, -2, -2, -3, -2, 1, 0, -3, -3, -1, 1, -3, -5, 0, 1, -1, 0, -3, -5, -4, -5, -5, -4, -2, 1, -4, -5};
    vector<int> cy = {12, 12, 7, 10, 10, 9, 7, 13, 13, 9, 8, 11, 12, 12, 10, 11, 10, 9, 12, 11, 11, 7, 8, 9, 13, 10, 7, 9, 13, 10, 11, 11, 7, 13, 9, 12};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 9.516177866780305;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> ax = {1, 3};
    vector<int> ay = {2, 1};
    vector<int> bx = {-11, -9};
    vector<int> by = {-1, -6};
    vector<int> cx = {-4, 1};
    vector<int> cy = {9, 13};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 20.808880882776332;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> ax = {-2, -1, 0, 1, 2};
    vector<int> ay = {0, 0, 0, 0, 0};
    vector<int> bx = {-2, -1, 0, 1, 2};
    vector<int> by = {1, 1, 1, 1, 1};
    vector<int> cx = {-2, -1, 0, 1, 2};
    vector<int> cy = {2, 2, 2, 2, 2};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> ax = {-100, -99};
    vector<int> ay = {-100, -99};
    vector<int> bx = {100, 99};
    vector<int> by = {100, 99};
    vector<int> cx = {0, 1};
    vector<int> cy = {0, 1};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 278.6000717874997;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> ax = {0, 0, 0};
    vector<int> ay = {0, 1, 2};
    vector<int> bx = {2, 3};
    vector<int> by = {1, 1};
    vector<int> cx = {1, 5};
    vector<int> cy = {3, 28};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 3.414213562373095;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> ax = {0, 24};
    vector<int> ay = {1, 25};
    vector<int> bx = {2, 26};
    vector<int> by = {1, 25};
    vector<int> cx = {1, 25};
    vector<int> cy = {1, 25};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> ax = {0, 0};
    vector<int> ay = {0, 1};
    vector<int> bx = {100, 100};
    vector<int> by = {100, 99};
    vector<int> cx = {70, 71};
    vector<int> cy = {30, 30};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 150.61589656271536;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> ax = {0, 0};
    vector<int> ay = {1, 2};
    vector<int> bx = {2, 2};
    vector<int> by = {3, 4};
    vector<int> cx = {60, 60};
    vector<int> cy = {61, 62};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 83.55642213314768;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> ax = {-10, 0};
    vector<int> ay = {0, 0};
    vector<int> bx = {1, 10};
    vector<int> by = {0, 0};
    vector<int> cx = {-11, 11};
    vector<int> cy = {0, 0};
    ATaleOfThreeCities* pObj = new ATaleOfThreeCities();
    clock_t start = clock();
    double result = pObj->connect(ax, ay, bx, by, cx, cy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8547850&rd=6538&pm=3543
********************************************************************************
#define FR(i,a,b) for (int i = (a); i < (b); i++)
#define FOR(i,n) FR(i,0,n)
#define FORI(i,n) FOR(i,n.size())
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <setjmp.h>
#include <regex.h>
#include <utility>
#define ll long long
#define ld long double
#define EPS 1e-9
using namespace std;
 
struct ATaleOfThreeCities {
double connect(vector <int> ax, vector <int> ay, vector <int> bx, vector <int> by, vector <int> cx, vector <int> cy) {
ld ab=1e9,ac=1e9,bc=1e9;
FORI(i,ax) FORI(j,bx) ab <?= hypot(ax[i]-bx[j],ay[i]-by[j]);
FORI(i,cx) FORI(j,bx) bc <?= hypot(cx[i]-bx[j],cy[i]-by[j]);
FORI(i,ax) FORI(j,cx) ac <?= hypot(ax[i]-cx[j],ay[i]-cy[j]);
return (ab+ac) <? (ab+bc) <? (ac+bc);
}};
// Powered by ted

********************************************************************************
*******************************************************************************/