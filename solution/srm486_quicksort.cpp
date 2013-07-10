/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10996
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

class QuickSort {
public:
    double getEval(vector<int> L);
};

double QuickSort::getEval(vector<int> L) {
    double ret;
    return ret;
}


int test0() {
    vector<int> L = {1, 2, 3, 4, 5};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
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
    vector<int> L = {1, 2, 4, 3, 5, 6};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> L = {3, 2, 1};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6666666666666665;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> L = {50, 40, 30, 20, 10, 15, 25, 35, 45};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 11.07698412698413;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> L = {1, 3, 2};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> L = {1, 50};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
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
    vector<int> L = {50, 1};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> L = {4, 19, 25, 27, 30, 31, 34, 38, 40, 44, 47};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> L = {1, 8, 12, 15, 32, 34, 41, 50};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> L = {50, 39, 37, 33, 31, 26, 25, 23, 15, 6};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 24.437301587301594;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> L = {47, 40, 34, 31, 25, 20, 15, 12, 5};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 20.57936507936508;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> L = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> L = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 251.9205338329425;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> L = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 258.91894450960143;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> L = {38, 37, 48, 10, 16, 24, 9, 39, 26, 32, 23, 46, 2, 45, 18, 17, 27, 20, 41, 5, 6, 43, 31, 34, 49, 12, 47, 42, 40, 14, 28, 1, 22, 7, 35, 33, 21, 44, 29, 30, 13, 11, 15, 3, 4, 25, 8, 19, 50, 36};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 133.4645960603161;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> L = {3, 11, 33, 4, 44, 42, 26, 46, 17, 43, 39, 23, 1, 25, 24, 15, 36, 38, 41, 2, 14, 19, 27, 29, 22, 18, 49, 10, 47, 5, 6, 31, 45, 7, 35, 30, 34, 13, 21, 16, 50, 9, 12, 48, 8, 40, 28, 32, 20, 37};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 127.21361286229708;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> L = {14, 27, 4, 16, 48, 26, 20, 25, 1, 28, 37, 8, 6, 7, 13, 35, 21, 5, 41, 12, 39, 34, 9, 30, 38, 3, 19, 49, 11, 17, 42, 44, 24, 18, 15, 33, 31, 2, 45, 29, 46, 22, 47, 40, 43, 10, 32, 36, 23, 50};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 113.72015634238707;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> L = {39, 16, 28, 4, 10, 11, 47, 24, 23, 31, 40, 26, 33, 49, 29, 19, 42, 9, 25, 41, 43, 12, 13, 45, 27, 48, 38, 17, 18, 37, 50, 35, 34, 3, 21, 30, 44, 20, 22, 15, 46, 1, 32, 36, 2, 5, 6, 8, 14, 7};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 132.48594203536916;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> L = {26, 45, 49, 5, 40, 25, 21, 29, 27, 39, 3, 41, 44, 12, 4, 37, 23, 47, 22, 31, 1, 6, 13, 50, 34, 20, 32, 48, 10, 28, 11, 8, 9, 15, 30, 2, 38, 35, 7, 43, 24, 33, 19, 42, 46, 36, 17, 14, 18, 16};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 132.80018685281803;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> L = {24, 25, 12, 9, 19, 46, 3, 21, 43, 39, 33, 38, 26, 47, 11, 30, 18, 23, 34, 35, 31, 44, 40, 8, 28, 14, 2, 4, 48, 45, 36, 42, 29, 32, 22, 10, 15, 50, 20, 13, 27, 6, 7, 49, 1, 41, 5, 17, 16, 37};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 133.00061422179306;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> L = {31, 36, 29, 13, 39, 22, 42, 50, 18, 15, 32, 20, 45, 41, 11, 28, 3, 44, 49, 12, 47, 37, 9, 7, 43, 21, 1, 16, 23, 2, 25, 14, 24, 40, 33, 8, 27, 35, 38, 17, 5, 46, 10, 30, 26, 6, 48, 19, 34, 4};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 135.98326878715204;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> L = {13, 26, 23, 35, 12, 27, 6, 48, 40, 17, 45, 9, 33, 50, 15, 3, 34, 14, 29, 31, 2, 32, 36, 43, 1, 38, 28, 30, 49, 42, 39, 7, 19, 37, 21, 16, 41, 47, 8, 44, 24, 25, 22, 5, 10, 20, 46, 18, 11, 4};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 131.6984569123695;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> L = {11, 23, 31, 18, 38, 15, 4, 50, 22, 37, 9, 19, 17, 30, 35, 27, 25, 42, 16, 5, 7, 44, 45, 47, 32, 49, 6, 28, 13, 12, 26, 39, 33, 48, 21, 46, 2, 41, 8, 43, 34, 40, 1, 10, 14, 36, 29, 24, 20, 3};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 131.9611972560578;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> L = {8, 24, 5, 10, 44, 1, 32, 11, 49, 30, 40, 50, 7, 3, 18, 13, 41, 46, 33, 36, 19, 20, 14, 39, 23, 35, 9, 34, 43, 27, 6, 37, 42, 47, 29, 21, 26, 45, 16, 31, 25, 22, 12, 38, 2, 48, 17, 15, 28, 4};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 125.96286978960593;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> L = {40, 43, 5, 19, 1, 11, 13, 32, 37, 14, 4, 25, 8, 24, 9, 7, 12, 41, 2, 34, 17, 45, 27, 33, 6, 44, 21, 16, 20, 42, 50, 15, 23, 28, 30, 3, 36, 18, 29, 49, 31, 38, 22, 46, 10, 47, 39, 35, 26, 48};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 109.74405274055049;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> L = {49, 23, 16, 37, 44, 39, 38, 28, 20, 45, 17, 31, 3, 8, 9, 25, 6, 33, 18, 5, 11, 32, 30, 21, 12, 34, 14, 2, 27, 13, 4, 41, 42, 19, 36, 43, 29, 10, 24, 1, 35, 15, 50, 40, 26, 47, 48, 7, 46, 22};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 125.79021887820811;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> L = {34, 24, 9, 44, 50, 49, 42, 46, 1, 31, 45, 36, 22, 30, 7, 38, 29, 18, 41, 2, 20, 12, 14, 11, 35, 5, 47, 17, 23, 4, 16, 32, 15, 26, 13, 21, 6, 25, 40, 3, 19, 43, 48, 27, 37, 33, 39, 10, 28, 8};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 139.02941374236866;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> L = {39, 6, 18, 24, 20, 8, 5, 50, 31, 22, 10, 17, 12, 35, 25, 43, 9, 37, 23, 3, 29, 13, 7, 32, 45, 36, 21, 49, 46, 11, 40, 26, 4, 48, 2, 38, 15, 1, 33, 27, 19, 16, 30, 44, 41, 34, 14, 28, 47, 42};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 120.94029344598134;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> L = {8, 40, 21, 45, 1, 49, 42, 17, 36, 50, 33, 29, 18, 20, 9, 5, 26, 32, 39, 13, 4, 44, 23, 22, 16, 12, 11, 7, 38, 47, 2, 48, 27, 35, 19, 25, 28, 15, 31, 30, 46, 24, 37, 43, 10, 6, 41, 14, 3, 34};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 136.59470580278435;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> L = {12, 8, 22, 25, 9, 39, 2, 11, 28, 26, 3, 30, 16, 10, 49, 43, 27, 31, 15, 36, 19, 37, 45, 42, 17, 24, 23, 18, 13, 7, 41, 5, 46, 34, 21, 32, 40, 50, 20, 6, 1, 38, 44, 4, 47, 14, 33, 48, 35};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 113.90508169982951;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> L = {2, 21, 8, 30, 50, 40, 41, 45, 44, 22, 11, 13, 14, 46, 18, 16, 38, 47, 27, 15, 32, 6, 9, 36, 24, 7, 10, 29, 4, 43, 35, 34, 28, 26, 49, 31, 12, 37, 3, 17, 1, 20, 19, 5, 33, 25, 23, 48, 39};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 128.42873179255872;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> L = {16, 26, 39, 38, 12, 48, 24, 30, 1, 15, 27, 14, 9, 32, 50, 3, 11, 43, 40, 4, 45, 6, 2, 23, 25, 35, 19, 28, 44, 22, 10, 20, 5, 36, 7, 42, 49, 31, 18, 46, 34, 47, 33, 37, 29, 17, 8, 21, 41};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 122.21284384335854;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> L = {39, 17, 41, 13, 23, 3, 28, 12, 44, 30, 50, 5, 26, 49, 29, 25, 48, 11, 10, 19, 40, 18, 42, 20, 36, 21, 9, 37, 43, 24, 15, 45, 34, 32, 46, 6, 1, 2, 31, 33, 27, 22, 16, 7, 38, 14, 8, 47, 4};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 133.50371597161148;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> L = {13, 39, 30, 5, 24, 18, 47, 4, 3, 35, 11, 14, 48, 23, 7, 1, 49, 32, 10, 33, 43, 36, 9, 50, 21, 44, 17, 31, 45, 28, 40, 37, 15, 16, 38, 2, 27, 25, 8, 20, 6, 12, 34, 22, 29, 42, 26, 19, 46};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 123.68811569334648;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> L = {20, 48, 41, 4, 37, 13, 27, 3, 31, 12, 29, 17, 24, 23, 26, 10, 47, 15, 33, 49, 14, 1, 40, 18, 9, 5, 50, 16, 35, 38, 6, 43, 28, 19, 30, 46, 21, 39, 36, 32, 45, 25, 34, 11, 22, 42, 44, 7, 2};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 123.24410832094958;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> L = {42, 7, 22, 48, 3, 15, 45, 35, 17, 34, 21, 50, 43, 6, 47, 40, 12, 5, 24, 8, 10, 29, 49, 13, 41, 32, 27, 28, 39, 44, 23, 37, 20, 18, 31, 4, 16, 14, 36, 25, 2, 38, 30, 46, 11, 26, 1, 19, 9};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 138.26584910023132;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> L = {29, 1, 41, 6, 34, 49, 23, 2, 20, 45, 10, 44, 36, 37, 47, 32, 24, 16, 38, 27, 12, 11, 28, 43, 26, 39, 30, 8, 48, 17, 19, 15, 3, 33, 40, 21, 13, 35, 22, 31, 5, 18, 46, 50, 7, 42, 4, 14, 9};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 127.32212874395306;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> L = {42, 15, 9, 16, 31, 2, 11, 47, 39, 32, 23, 43, 24, 45, 29, 26, 50, 48, 21, 8, 19, 6, 34, 36, 33, 13, 37, 10, 44, 40, 5, 12, 41, 17, 30, 25, 1, 49, 35, 4, 20, 7, 22, 18, 3, 38, 28, 14, 27};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 130.90675617461025;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> L = {14, 22, 30, 44, 24, 29, 31, 47, 35, 27, 48, 19, 7, 46, 36, 6, 23, 25, 50, 49, 45, 18, 8, 17, 43, 4, 11, 9, 39, 41, 32, 26, 37, 15, 20, 13, 12, 38, 34, 42, 5, 33, 28, 10, 1, 16, 40, 21, 2};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 138.03532816798887;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> L = {10, 40, 35, 22, 16, 37, 3, 7, 30, 29, 11, 18, 6, 43, 46, 2, 41, 42, 39, 20, 1, 45, 12, 47, 9, 25, 28, 21, 17, 48, 13, 5, 33, 34, 4, 8, 38, 24, 15, 27, 44, 31, 26, 23, 14, 49, 19, 36, 50};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 118.51744419865646;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> L = {50, 31, 17, 37, 2, 42, 40, 35, 32, 27, 7, 18, 1, 36, 9, 49, 26, 25, 11, 5, 29, 47, 38, 21, 16, 33, 12, 46, 4, 23, 45, 20, 14, 3, 39, 8, 22, 28, 13, 48, 6, 43, 15, 19, 10, 34, 24, 44, 30};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 130.83143569747796;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> L = {5, 2, 33, 16, 35, 13, 12, 8, 39, 4, 26, 19, 32, 43, 40, 49, 21, 36, 29, 7, 1, 24, 50, 31, 10, 25, 27, 22, 46, 17, 23, 47, 44, 42, 41, 28, 30, 14, 37, 3, 34, 45, 6, 9, 18, 48, 20, 15, 11};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 121.3923691173885;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> L = {39, 2, 22, 20, 6, 49, 44, 4, 37, 33, 11, 29, 36, 8, 27, 25, 38, 12, 17, 26, 5, 21, 34, 1, 24, 23, 50, 35, 45, 7, 14, 40, 18, 30, 47, 9, 48, 13, 16, 42, 31, 43, 3, 19, 41, 15, 32, 10, 28};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 123.24104955787492;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> L = {29, 47, 40, 2, 19, 46, 16, 15, 12, 31, 49, 45, 23, 10, 14, 22, 18, 48, 42, 36, 8, 17, 34, 7, 5, 9, 1, 30, 38, 13, 20, 32, 37, 28, 6, 4, 44, 39, 24, 27, 35, 43, 26, 41, 33, 50, 21, 11, 25};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 131.368602040077;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> L = {31, 12, 22, 25, 46, 13, 10, 48, 17, 8, 15, 9};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 19.227922077922077;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> L = {47, 21, 15, 43, 38, 19, 31, 16, 28, 25, 39, 4, 44, 18, 22, 23, 32, 41};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 31.160498651675116;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> L = {17, 16, 19, 46, 47, 31, 11, 10, 3, 23, 48, 8};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 18.02316017316017;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> L = {21, 50, 42, 14, 5, 35, 26, 11, 47, 23, 17, 28, 25};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 20.22700632700633;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> L = {4, 12, 18, 27, 44, 50, 21, 14, 42, 45, 37, 46, 3};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 14.229315129315129;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> L = {38, 50, 21, 20, 29, 33, 9, 12, 1, 27, 2, 13, 8, 10, 42, 15, 35};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 29.828283644460118;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> L = {9, 23, 44, 26, 12, 31, 3, 48, 24, 41, 37, 39, 43, 47, 45, 16};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 19.25155955155955;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> L = {34, 29, 40, 17, 32, 14, 16, 45, 5, 10, 9, 18, 15, 8, 13, 20, 7};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 35.01104810222457;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> L = {30, 11, 48, 22, 24, 4, 35, 10, 16, 29, 33, 47, 12};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 17.432417582417578;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> L = {43, 41, 21, 9, 4, 20, 39, 46, 19, 49, 31, 17, 7, 48, 10};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 25.83759018759019;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> L = {23, 25, 33, 2, 31, 5, 21, 28, 17, 46, 43, 13, 6, 1, 16};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 25.549372849372848;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> L = {19, 25, 50, 35, 26, 30, 48, 34, 44, 24, 42, 4, 46, 45};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 18.53010878010878;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> L = {1, 28, 50, 4, 11, 25, 20, 8, 36, 30, 10, 29};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 14.761183261183263;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> L = {1, 5, 29, 16, 10, 31, 46, 37, 7, 9, 14, 41, 18};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 13.358802308802309;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> L = {38, 22, 47, 15, 45, 21, 29, 34, 28, 31, 26, 7, 44, 3, 48, 9, 14, 50};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 31.417057942057948;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> L = {15, 18, 29, 10};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 2.166666666666667;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> L = {15, 29, 18, 10};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 3.166666666666667;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> L = {18, 10, 29, 15};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3333333333333335;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> L = {18, 15, 29, 10};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1666666666666665;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> L = {18, 29, 10, 15};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8333333333333335;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> L = {18, 29, 15, 10};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 3.833333333333333;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> L = {29, 10, 15, 18};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 2.166666666666667;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> L = {29, 10, 18, 15};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1666666666666665;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> L = {29, 15, 10, 18};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1666666666666665;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> L = {29, 15, 18, 10};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8333333333333335;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> L = {29, 18, 10, 15};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8333333333333335;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> L = {29, 18, 15, 10};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 4.833333333333333;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> L = {50};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> L = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 258.91894450960143;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> L = {16, 42, 30, 1, 17, 49, 36, 24, 4, 9, 29, 21, 39, 41, 48, 7, 23, 40, 27, 26, 11, 28, 13, 46, 3, 37, 35, 25, 33, 10, 50, 45, 14, 19, 8, 44, 34, 15, 32, 43, 18, 47, 2, 5, 22, 6, 38, 20, 31, 12};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 133.73936507133013;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> L = {20, 7, 8, 3, 24, 36, 23, 39, 27, 28, 1, 2, 19, 32, 47, 12, 38, 45, 25, 26, 46, 6, 11, 48, 14, 17, 10, 33, 37, 16, 35, 5, 42, 31, 15, 41, 30, 34, 22, 49, 9, 4, 29, 44, 13, 50, 18, 40, 21, 43};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 119.43416052426332;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> L = {50, 49, 48, 47, 21, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 4, 30, 29, 28, 27, 26, 25, 24, 23, 22, 46, 20, 19, 18, 17, 15, 16, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 31, 3, 2, 1};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 235.31235080224968;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> L = {1, 5, 2, 4, 10, 9, 3, 8, 6, 7};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 10.102380952380953;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> L = {4, 28, 11, 15, 24, 35, 17, 36, 26, 48, 33, 39, 19, 2, 47, 49, 25, 18, 32, 40, 5, 21, 7, 12, 14, 42, 27, 6, 45, 44, 30, 38, 13, 37, 3, 16, 29, 43, 9, 22, 8, 23, 20, 34, 1, 10, 31, 50, 46, 41};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 124.75787470993147;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> L = {50, 17, 38, 21, 30, 1, 35, 34, 4, 26, 20, 13, 2, 10, 41, 32, 16, 23, 49, 24, 33, 45, 22, 28, 40, 7, 43, 25, 27, 12, 47, 46, 3, 14, 18, 48, 44, 9, 8, 19, 37, 36, 15, 31, 29, 39, 6, 11, 5, 42};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 132.139459945221;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> L = {47, 26, 16, 42, 31, 24, 34, 22, 36, 49, 1, 3, 20, 30, 18, 27, 45, 39, 32, 48, 10, 50, 28, 21, 8, 23, 6, 15, 29, 14, 35, 38, 9, 44, 12, 37, 2, 11, 40, 17, 19, 13, 5, 7, 43, 46, 33, 41, 25, 4};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 135.62864592528314;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> L = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> L = {50, 49, 48, 47, 46, 40, 44, 43, 42, 41, 38, 39, 45, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 23, 24, 22, 21, 20, 15, 16, 17, 18, 19, 14, 13, 12, 11, 10, 9, 8, 7, 4, 6, 5, 3, 2, 1};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 241.8498968905537;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> L = {22, 15, 18, 12, 23, 32, 27, 42, 49, 26, 31, 28, 37, 45, 3, 10, 41, 4, 39, 29, 36, 48, 34, 9, 13, 44, 38, 46, 7, 2, 50, 21, 16, 5, 8, 19, 43, 47, 30, 11, 25, 6, 1, 20, 35, 40, 17, 14, 33, 24};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 131.67636535859387;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> L = {13, 2, 10, 50, 1, 28, 37, 32, 30, 46, 19, 47, 33, 41, 24, 34, 27, 42, 49, 18, 9, 48, 23, 35, 31, 8, 7, 12, 6, 5, 3, 22, 43, 36, 11, 40, 26, 4, 44, 17, 39, 38, 14, 25, 16, 29, 20, 21, 45};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 131.1180898143273;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> L = {7, 9, 12, 6, 23, 11, 45, 50, 1, 2, 5, 3, 27, 24, 35, 8, 21, 19, 17, 18};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 34.49842616104227;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> L = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> L = {19, 20, 2, 33, 12, 24, 9, 1, 30, 36, 21, 34, 6, 44, 14, 40, 25, 46, 18, 41, 38, 23, 48, 7, 11, 3, 29, 49, 50, 4, 39, 16, 45, 17, 28, 27, 10, 32, 8, 22, 43, 15, 42, 37, 47, 26, 31, 35, 5, 13};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 122.03266391701122;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> L = {5, 29, 12, 16, 25, 36, 18, 37, 27, 49, 34, 40, 20, 3, 48, 50, 26, 19, 33, 41, 6, 22, 8, 13, 15, 43, 28, 7, 46, 45, 31, 39, 14, 38, 4, 17, 30, 44, 10, 23, 9, 24, 21, 35, 2, 11, 32, 1, 47, 42};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 131.0661131474819;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> L = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 71.1050656000346;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> L = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 98.42982524318234;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> L = {10, 11, 6, 13, 14, 18, 15, 16, 3, 5, 8, 1, 2, 12, 50, 17, 4, 7, 9, 19};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 31.615397347750292;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> L = {33, 21, 19, 20, 34, 27, 31, 16, 42, 11, 15, 12, 41, 13, 29, 39, 37, 18, 40, 48, 49, 50, 8, 38, 43, 4, 3, 44, 24, 2, 9, 32, 26, 6, 30, 46, 28, 23, 45, 36, 7, 10, 17, 25, 22, 5, 1, 14, 47, 35};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 137.64640866227754;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> L = {1, 28, 10, 39, 27, 22, 16, 47, 35, 31, 7, 34, 46, 20, 11, 50, 4, 13, 5, 6, 30, 33, 43, 42, 38, 48, 29, 14, 23, 24, 49, 21, 9, 41, 26, 25, 36, 45, 40, 37, 18, 12, 8, 15, 19, 44, 2, 32, 17, 3};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 133.4743148115943;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> L = {44, 1, 17, 30, 35, 26, 19, 45, 18, 2};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 13.751587301587302;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> L = {42, 18, 35, 1, 20, 25, 29, 9, 13, 15, 6, 46, 32, 28, 12, 43, 37, 5, 3, 4, 33, 22, 17, 19, 48, 27, 39, 50, 36, 45, 23, 34, 24, 8, 38, 10, 30, 41, 7, 49, 47, 21, 2, 44, 40, 16, 31, 14, 11, 26};
    QuickSort* pObj = new QuickSort();
    clock_t start = clock();
    double result = pObj->getEval(L);
    clock_t end = clock();
    delete pObj;
    double expected = 124.95381822909368;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=20463878&rd=14239&pm=10996
********************************************************************************
#include <algorithm>   
#include <string>   
#include <set>   
#include <map>   
#include <vector>   
#include <queue>    
#include <iostream>   
#include <iterator>   
#include <math.h>   
#include <cstdio>   
#include <cstdlib>   
#include <sstream>   
 
#pragma comment(linker, "/STACK:60777216")   
 
using namespace std;   
 
typedef pair<int,int> pii;   
typedef long long ll;   
typedef vector<int> vi;   
 
#define UN(v) SORT(v),v.erase(unique(v.begin(),v.end()),v.end())   
#define SORT(c) sort((c).begin(),(c).end())   
#define FOR(i,a,b) for (int  i=(a); i < (b); i++)    
#define REP(i,n) FOR(i,0,n)    
#define CL(a,b) memset(a,b,sizeof(a))   
#define pb push_back   
 
map<vi,double> r; 
 
double go(vi v){ 
  if(v.size()<2) return 0.; 
  if(r.count(v)) return r[v]; 
 
  double val = 0; 
 
  REP(i,v.size()){ 
    vi v1,v2; 
 
    int p = v[i]; 
 
    REP(j,v.size())if(i!=j){ 
      if(v[j] > p) v2.pb(v[j]); 
      else v1.pb(v[j]); 
 
      if(j<i && v[j] > p) val++; 
      if(j>i && v[j] < p) val++; 
    } 
 
    val += go(v1); 
    val += go(v2); 
  } 
 
  return r[v] = val / v.size(); 
} 
 
class QuickSort { 
public: 
 double getEval(vector <int> L) { 
   r.clear(); 
  return go(L); 
 } 
  
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/