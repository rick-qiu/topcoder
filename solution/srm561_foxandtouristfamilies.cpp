/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11811
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

class FoxAndTouristFamilies {
public:
    double expectedLength(vector<int> A, vector<int> B, vector<int> f);
};

double FoxAndTouristFamilies::expectedLength(vector<int> A, vector<int> B, vector<int> f) {
    double ret;
    return ret;
}


int test0() {
    vector<int> A = {0, 1};
    vector<int> B = {1, 2};
    vector<int> f = {0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {0, 1};
    vector<int> B = {1, 2};
    vector<int> f = {0, 0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.25;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> A = {0, 1};
    vector<int> B = {1, 2};
    vector<int> f = {0, 1};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.75;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {0, 1};
    vector<int> B = {1, 2};
    vector<int> f = {0, 2};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> A = {0, 0, 0};
    vector<int> B = {1, 2, 3};
    vector<int> f = {0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
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
    vector<int> A = {0, 0, 0};
    vector<int> B = {1, 2, 3};
    vector<int> f = {1, 2};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7777777777777777;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {0, 1, 1, 3, 5, 6};
    vector<int> B = {1, 2, 3, 4, 4, 4};
    vector<int> f = {5, 6, 1};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4537037037037037;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> f = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4914341925000003;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {24, 20, 19, 3, 28, 27, 9, 11, 5, 12, 23, 29, 1, 26, 8, 32, 22, 31, 14, 7, 30, 10, 25, 6, 4, 17, 16, 21, 15, 18, 13, 2};
    vector<int> B = {22, 18, 17, 1, 25, 24, 7, 8, 4, 11, 21, 26, 0, 24, 5, 31, 20, 30, 11, 4, 29, 8, 24, 4, 3, 14, 14, 18, 14, 16, 10, 1};
    vector<int> f = {12, 13, 13, 20, 27, 31, 32, 1, 22, 8, 4, 23, 17, 11, 20};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2603064190219374E-4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {1, 3, 2};
    vector<int> B = {0, 0, 1};
    vector<int> f = {0, 1, 2, 3, 1, 0, 1, 1, 1, 1, 1, 1, 3};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005145757791865259;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {8, 1, 20, 31, 22, 36, 15, 39, 26, 14, 13, 7, 30, 21, 4, 10, 12, 9, 35, 32, 38, 25, 27, 37, 29, 6, 16, 17, 23, 33, 2, 5, 24, 18, 34, 3, 28, 11, 19};
    vector<int> B = {0, 0, 13, 13, 20, 35, 5, 28, 3, 12, 9, 2, 7, 14, 3, 9, 5, 0, 20, 19, 35, 14, 26, 20, 5, 3, 8, 4, 0, 10, 0, 0, 13, 12, 11, 0, 21, 5, 3};
    vector<int> f = {2, 22, 27, 29, 11, 24, 36, 39, 29};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0011277418605991965;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {1, 14, 16, 37, 5, 26, 35, 11, 25, 10, 42, 31, 6, 24, 41, 39, 33, 32, 2, 22, 3, 28, 23, 30, 17, 38, 27, 18, 19, 13, 15, 12, 21, 46, 47, 20, 44, 7, 36, 9, 40, 48, 29, 8, 43, 45, 34, 4};
    vector<int> B = {0, 10, 8, 32, 2, 22, 27, 9, 21, 9, 37, 24, 4, 18, 33, 38, 27, 31, 1, 21, 0, 20, 16, 28, 14, 30, 21, 10, 11, 5, 9, 5, 17, 39, 45, 16, 40, 3, 34, 8, 34, 43, 27, 0, 41, 39, 27, 0};
    vector<int> f = {20, 13, 35, 10, 45, 0, 36, 11, 23, 26, 29, 16, 20, 25, 22, 22, 27, 1, 33, 9, 31, 9, 30, 33, 48, 13, 36, 6, 8, 9};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.28553577709674E-9;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {1};
    vector<int> B = {0};
    vector<int> f = {1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {22, 2, 38, 1, 29, 10, 39, 21, 3, 15, 14, 6, 9, 20, 31, 40, 33, 25, 43, 28, 13, 44, 12, 35, 47, 42, 32, 49, 5, 36, 34, 4, 23, 37, 24, 30, 41, 48, 18, 46, 45, 8, 27, 16, 7, 19, 26, 17, 11};
    vector<int> B = {12, 0, 34, 0, 11, 1, 35, 16, 0, 4, 1, 5, 5, 1, 13, 39, 15, 5, 30, 21, 8, 26, 11, 24, 39, 26, 16, 29, 0, 28, 23, 1, 20, 35, 13, 24, 39, 30, 5, 37, 39, 4, 20, 13, 2, 6, 23, 3, 9};
    vector<int> f = {14, 4, 32, 2, 14, 40, 26, 19, 9, 31, 32, 46, 5, 17, 9, 43, 27};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3181591397894855E-5;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {20, 18, 3, 22, 10, 11, 21, 8, 16, 7, 4, 23, 9, 1, 17, 12, 26, 13, 2, 24, 5, 25, 19, 14, 15, 6};
    vector<int> B = {16, 13, 0, 16, 5, 2, 10, 4, 10, 1, 2, 13, 3, 0, 7, 3, 16, 7, 0, 16, 0, 14, 18, 4, 4, 0};
    vector<int> f = {16, 5, 4, 12, 9, 16};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01746381512092151;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {1};
    vector<int> B = {0};
    vector<int> f = {1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {6, 5, 7, 8, 2, 1, 4, 3, 10, 9};
    vector<int> B = {0, 2, 2, 3, 1, 0, 0, 2, 9, 7};
    vector<int> f = {1, 1, 0, 10, 0, 6, 10, 6, 3, 2, 10, 1, 7, 1, 10, 1, 6, 9, 4, 9, 10, 0, 9, 4, 4, 0, 6, 10, 9, 9, 2, 2, 9, 5, 7, 7};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.691531743774108E-11;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {15, 49, 11, 43, 30, 42, 8, 28, 13, 17, 5, 18, 20, 14, 24, 41, 37, 2, 4, 23, 46, 10, 19, 32, 34, 38, 21, 25, 48, 40, 3, 12, 31, 26, 16, 9, 27, 7, 39, 6, 45, 47, 35, 1, 22, 29, 33, 36, 44};
    vector<int> B = {3, 44, 6, 15, 11, 19, 1, 5, 10, 9, 2, 15, 6, 4, 19, 13, 30, 1, 2, 10, 25, 6, 1, 18, 16, 23, 2, 19, 35, 3, 0, 10, 26, 23, 2, 5, 22, 0, 19, 2, 19, 45, 12, 0, 10, 19, 10, 21, 38};
    vector<int> f = {5, 43, 43, 26, 17, 13, 12, 43, 8, 14, 3, 12, 1, 32, 32, 5, 34, 6, 5, 27, 47, 8, 45, 47, 4, 36};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 8.011945607469446E-9;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {15, 19, 16, 18, 10, 9, 17, 20, 2, 12, 7, 8, 3, 11, 6, 5, 14, 1, 4, 13};
    vector<int> B = {14, 18, 15, 17, 9, 8, 16, 19, 1, 11, 6, 7, 2, 10, 5, 4, 13, 0, 3, 12};
    vector<int> f = {17, 9, 10, 10, 12, 14, 12, 14, 13, 6, 16, 1, 12, 15, 5, 8, 8};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 5.845263478193482E-5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {10, 19, 25, 22, 24, 7, 18, 11, 36, 13, 27, 14, 12, 32, 31, 6, 9, 28, 17, 5, 26, 29, 8, 1, 35, 3, 34, 21, 20, 33, 16, 4, 30, 15, 2, 23};
    vector<int> B = {4, 14, 21, 18, 17, 5, 10, 10, 28, 6, 21, 6, 7, 24, 23, 0, 3, 25, 15, 4, 25, 21, 2, 0, 30, 2, 33, 19, 14, 26, 11, 0, 22, 13, 1, 16};
    vector<int> f = {5, 29, 19, 36, 0, 25, 35, 15, 16, 16, 22, 17, 19, 1, 20, 32, 23, 33, 12, 12, 28, 17, 25, 36, 10, 4, 22, 9, 34, 6, 22, 30, 27, 20, 3, 36, 19, 10, 18, 3, 6, 8, 14, 16, 7, 20, 11};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4751152839289116E-14;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {16, 4, 12, 5, 6, 22, 2, 11, 15, 9, 21, 14, 17, 20, 7, 18, 3, 19, 8, 10, 1, 13};
    vector<int> B = {14, 3, 1, 2, 4, 15, 0, 4, 10, 2, 19, 4, 7, 9, 6, 8, 0, 5, 7, 0, 0, 10};
    vector<int> f = {21, 5, 17, 22, 15, 3, 12, 4, 19};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0028028759129539887;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {10, 5, 11, 2, 8, 3, 6, 1, 9, 4, 7};
    vector<int> B = {8, 2, 7, 1, 7, 2, 3, 0, 8, 1, 5};
    vector<int> f = {10, 1, 10, 1, 5, 7, 11, 1, 11, 6, 9, 2, 5, 2, 7, 4, 11, 10, 9, 10, 10, 11, 11, 10, 7, 2, 6, 7, 10, 11};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 4.4566837072294814E-8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {24, 11, 19, 18, 8, 12, 20, 9, 5, 2, 14, 4, 26, 6, 13, 16, 22, 7, 3, 1, 21, 17, 15, 25, 10, 23};
    vector<int> B = {1, 9, 8, 11, 6, 11, 5, 6, 2, 1, 8, 0, 24, 2, 4, 10, 10, 1, 1, 0, 15, 6, 8, 8, 8, 22};
    vector<int> f = {22, 1, 7, 20, 24, 26, 8, 13, 8, 8, 24, 13, 13, 11, 5, 12, 2, 15, 5, 20, 20, 12, 4, 6, 18, 6, 26, 18, 2, 7, 8, 18, 13, 21, 16, 2, 7, 7, 15, 0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 6.306763048318147E-12;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {1, 16, 2, 10, 6, 28, 23, 4, 19, 15, 35, 20, 7, 29, 33, 40, 27, 12, 26, 8, 30, 32, 24, 3, 14, 18, 36, 22, 21, 17, 25, 34, 38, 9, 37, 5, 13, 39, 11, 31};
    vector<int> B = {0, 15, 0, 9, 5, 17, 13, 2, 11, 6, 31, 3, 2, 24, 16, 39, 19, 8, 9, 6, 17, 20, 18, 1, 0, 9, 22, 19, 16, 6, 18, 17, 37, 5, 21, 1, 4, 36, 1, 26};
    vector<int> f = {10, 12, 26, 18, 33, 4, 39, 16, 0, 35, 38, 23, 29, 17, 3, 32, 4, 16, 9, 4, 21};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8290099350681716E-7;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {32, 22, 19, 4, 29, 28, 20, 15, 6, 10, 34, 2, 17, 33, 5, 14, 31, 18, 36, 8, 37, 26, 35, 9, 16, 13, 7, 3, 25, 30, 11, 23, 1, 12, 21, 24, 27};
    vector<int> B = {21, 1, 4, 0, 9, 20, 8, 9, 3, 6, 9, 1, 13, 6, 0, 0, 27, 14, 30, 6, 15, 19, 2, 1, 14, 3, 1, 1, 4, 7, 3, 4, 0, 0, 12, 21, 13};
    vector<int> f = {34, 3, 4, 13, 14, 12, 30, 15, 29, 30, 16, 0, 22, 19, 16, 6, 31, 9, 5, 23, 22, 9, 18, 6, 19, 21, 32, 14, 12, 18, 37, 15};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7338045083489127E-10;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {9, 28, 39, 17, 14, 46, 12, 29, 38, 48, 1, 21, 40, 18, 36, 34, 10, 42, 35, 24, 30, 13, 11, 19, 20, 44, 47, 8, 43, 23, 6, 22, 27, 26, 16, 41, 32, 25, 33, 31, 37, 5, 7, 4, 3, 2, 45, 15};
    vector<int> B = {2, 26, 2, 8, 10, 38, 11, 24, 26, 11, 0, 14, 33, 5, 25, 12, 5, 6, 13, 20, 0, 10, 1, 11, 9, 42, 10, 7, 37, 12, 0, 15, 20, 8, 6, 21, 14, 19, 14, 30, 10, 4, 6, 0, 1, 1, 13, 12};
    vector<int> f = {17, 42, 35, 42, 44, 9, 30, 13, 24, 47, 39, 36, 35, 25, 14, 7, 14, 3};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2193880646223552E-6;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {9, 13, 8, 18, 10, 6, 2, 16, 7, 12, 17, 4, 15, 3, 1, 24, 20, 5, 14, 11, 19, 21, 23, 22};
    vector<int> B = {5, 11, 6, 16, 2, 5, 1, 0, 2, 0, 11, 3, 3, 0, 0, 8, 8, 0, 8, 8, 12, 19, 11, 9};
    vector<int> f = {9, 3, 21, 11, 20, 18, 16, 3};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006898452742872681;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {1, 4, 6, 8, 2, 5, 9, 3, 7};
    vector<int> B = {0, 2, 5, 2, 1, 4, 7, 0, 1};
    vector<int> f = {0, 9, 4, 8, 4, 4, 1, 5, 4, 3, 7, 5, 7, 7, 9, 9, 9, 0, 3, 1, 9, 6, 7, 6, 0, 5, 0, 4, 3, 3, 2, 5, 7, 2, 5, 1, 0, 1, 7, 3, 8, 2, 7, 9, 2, 0, 2, 5, 5, 4};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.72335959418213E-13;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {9, 3, 22, 6, 5, 25, 7, 1, 21, 26, 24, 14, 12, 11, 16, 10, 2, 13, 17, 19, 8, 27, 28, 18, 23, 4, 20, 15};
    vector<int> B = {7, 0, 19, 4, 2, 22, 4, 0, 18, 22, 23, 13, 8, 9, 14, 7, 0, 11, 13, 15, 6, 26, 24, 17, 21, 3, 17, 14};
    vector<int> f = {24, 1, 18, 27, 28, 11, 20, 15, 26, 23, 10, 1, 4, 25};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0822193657946031E-4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {2, 3, 4, 5, 8, 9, 1, 7, 6};
    vector<int> B = {0, 0, 3, 3, 5, 6, 0, 6, 5};
    vector<int> f = {0, 9, 3, 9, 5, 0, 9, 6, 6, 0, 2, 1, 2, 3, 7, 0, 2, 6, 4, 3, 9, 8, 5, 8, 5, 3, 9, 1, 3, 0, 2, 9, 5, 1, 5, 1, 4, 6, 4, 4, 0, 5, 6, 7};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 5.86171928291633E-12;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {14, 21, 24, 16, 25, 5, 3, 12, 13, 26, 23, 4, 11, 17, 10, 8, 18, 20, 7, 19, 6, 1, 22, 2, 9, 15};
    vector<int> B = {12, 15, 19, 10, 19, 4, 0, 10, 7, 22, 17, 1, 5, 14, 9, 6, 15, 15, 5, 14, 5, 0, 17, 1, 8, 14};
    vector<int> f = {9, 20, 0, 22, 1, 0, 5, 19, 22, 8, 11, 6, 24, 1, 1, 8, 2, 20, 9, 22, 20, 3, 13, 0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 7.571502144066066E-7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {27, 12, 9, 31, 25, 19, 17, 36, 45, 32, 11, 29, 33, 15, 47, 2, 49, 18, 10, 35, 48, 38, 7, 4, 26, 6, 42, 24, 40, 23, 22, 50, 8, 5, 3, 1, 28, 14, 21, 39, 43, 34, 41, 37, 16, 30, 44, 20, 46, 13};
    vector<int> B = {9, 6, 7, 19, 23, 11, 6, 15, 0, 0, 7, 22, 17, 7, 11, 0, 31, 17, 4, 23, 3, 31, 4, 2, 20, 5, 20, 3, 33, 3, 4, 0, 6, 3, 2, 0, 19, 11, 6, 15, 21, 11, 14, 28, 11, 0, 20, 5, 40, 7};
    vector<int> f = {48};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 4.659999999999993;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {4, 38, 24, 11, 21, 23, 18, 12, 8, 41, 40, 39, 47, 35, 36, 30, 31, 45, 26, 5, 48, 19, 28, 27, 49, 17, 14, 10, 2, 16, 25, 34, 20, 42, 50, 15, 37, 22, 6, 44, 1, 43, 7, 3, 46, 29, 32, 33, 13, 9};
    vector<int> B = {0, 36, 23, 8, 18, 22, 14, 9, 3, 39, 38, 34, 46, 33, 33, 25, 26, 44, 22, 4, 46, 17, 23, 25, 47, 15, 9, 7, 0, 14, 23, 32, 17, 39, 48, 10, 35, 18, 2, 41, 0, 38, 6, 2, 44, 28, 27, 29, 10, 7};
    vector<int> f = {18, 9, 11, 0, 47, 24, 45, 43, 14, 3, 47, 13, 4, 28, 7, 22, 9, 7, 20, 9, 23, 23, 50, 43, 46, 42, 46, 7, 40, 19, 35, 27, 39, 49, 0, 28, 25, 22, 38};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 4.959137653616618E-12;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {1, 4, 21, 9, 20, 3, 23, 6, 16, 19, 22, 13, 10, 14, 5, 8, 7, 18, 2, 11, 15, 24, 12, 17};
    vector<int> B = {0, 3, 17, 3, 18, 1, 12, 1, 11, 4, 16, 0, 0, 1, 2, 2, 4, 8, 1, 1, 8, 14, 5, 11};
    vector<int> f = {10, 19, 21, 13, 23, 1, 9, 13, 17, 18, 3, 7, 5, 22, 24, 20, 14, 3, 1, 16, 14, 1, 1, 7, 23, 1, 20, 19, 0, 4, 19, 6, 19, 1, 10, 24, 14, 11};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 6.817617529349197E-17;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {13, 7, 19, 42, 30, 5, 32, 18, 20, 24, 34, 6, 29, 9, 38, 14, 31, 46, 45, 15, 25, 33, 17, 39, 1, 36, 8, 22, 4, 35, 43, 26, 3, 16, 10, 21, 27, 47, 44, 41, 40, 28, 12, 48, 11, 37, 2, 23};
    vector<int> B = {4, 4, 16, 41, 27, 1, 28, 8, 13, 0, 28, 3, 17, 7, 17, 0, 30, 39, 20, 7, 14, 13, 13, 37, 0, 7, 6, 5, 1, 9, 2, 0, 2, 1, 7, 17, 4, 44, 15, 12, 8, 21, 8, 32, 2, 2, 1, 14};
    vector<int> f = {0, 18, 42, 47, 2, 46, 32, 4, 36};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0029152504228781855;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {13, 18, 17, 3, 9, 16, 12, 14, 10, 2, 15, 21, 20, 23, 6, 24, 11, 19, 1, 4, 8, 7, 5, 22};
    vector<int> B = {2, 15, 2, 0, 0, 13, 1, 0, 5, 1, 2, 4, 7, 11, 2, 9, 7, 14, 0, 3, 0, 5, 1, 16};
    vector<int> f = {12, 22, 22, 21, 2, 10, 3, 12, 10, 20, 4, 8, 10, 9, 0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3637018619487686E-5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {13, 30, 16, 3, 36, 38, 33, 7, 18, 35, 14, 17, 21, 20, 31, 27, 10, 29, 15, 12, 2, 9, 32, 6, 23, 1, 5, 34, 4, 37, 19, 24, 26, 25, 22, 28, 8, 11, 39};
    vector<int> B = {10, 27, 12, 0, 33, 36, 30, 4, 14, 34, 12, 15, 17, 19, 30, 26, 9, 25, 13, 8, 0, 7, 31, 5, 22, 0, 2, 31, 2, 34, 16, 22, 24, 21, 18, 24, 6, 10, 37};
    vector<int> f = {13, 33};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.715976331360947;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {1, 22, 17, 13, 4, 26, 29, 33, 21, 30, 11, 15, 34, 6, 18, 12, 25, 10, 19, 24, 8, 28, 23, 16, 27, 3, 5, 20, 2, 14, 7, 32, 31, 9, 35};
    vector<int> B = {0, 10, 0, 1, 1, 15, 17, 13, 9, 29, 8, 5, 28, 2, 10, 8, 7, 8, 16, 3, 1, 12, 21, 5, 15, 2, 3, 19, 1, 7, 4, 12, 23, 3, 24};
    vector<int> f = {26, 34, 24, 3, 8, 26, 6, 22, 6, 31, 3, 19, 18, 26, 15, 31, 17, 28, 33, 0, 16, 20, 15, 35, 10};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7572591926361785E-7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {12, 9, 11, 14, 21, 15, 13, 3, 4, 7, 19, 1, 2, 5, 18, 10, 8, 23, 24, 16, 17, 22, 20, 6, 25, 26};
    vector<int> B = {8, 1, 8, 1, 19, 12, 8, 0, 3, 6, 18, 0, 0, 1, 17, 0, 7, 22, 13, 11, 12, 10, 6, 4, 13, 25};
    vector<int> f = {26, 4, 13, 10, 6, 3, 16, 7, 10, 1, 9, 5, 19, 9, 0, 3, 21, 4, 8, 7, 26, 23, 21, 10, 26, 10, 15, 6, 10, 6, 20, 22};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.055197156778579E-9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {0, 1, 2, 2};
    vector<int> f = {1, 0, 2, 4, 2, 1, 3, 0, 2, 0, 1, 2, 1, 3, 3, 2, 3, 3, 3, 0, 4, 3, 2};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0554404020222137E-6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> A = {20, 5, 40, 19, 2, 32, 28, 3, 15, 23, 34, 6, 35, 21, 14, 16, 36, 33, 31, 29, 22, 1, 4, 8, 13, 18, 38, 24, 9, 27, 39, 7, 30, 26, 41, 25, 42, 11, 12, 17, 10, 37};
    vector<int> B = {3, 1, 13, 17, 0, 7, 2, 2, 9, 5, 13, 3, 23, 16, 10, 7, 31, 18, 24, 17, 3, 0, 1, 1, 6, 12, 33, 2, 4, 19, 32, 2, 7, 19, 26, 24, 32, 3, 5, 2, 9, 13};
    vector<int> f = {32, 8, 5, 3, 18, 11, 4, 8, 28, 3, 26, 34, 16, 25, 13, 34, 7, 27, 25, 3, 23, 5, 28, 40, 34, 24, 37, 40, 27, 42, 8, 9, 7, 41, 7, 21, 22};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 9.408746018324123E-15;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> A = {39, 8, 3, 13, 21, 24, 2, 11, 33, 27, 28, 32, 35, 42, 30, 43, 38, 10, 16, 46, 40, 14, 15, 47, 25, 18, 12, 5, 29, 31, 19, 6, 1, 7, 34, 36, 44, 23, 17, 20, 22, 26, 37, 9, 4, 45, 41};
    vector<int> B = {38, 7, 2, 11, 20, 22, 0, 9, 31, 25, 27, 31, 34, 40, 28, 42, 36, 9, 15, 45, 38, 12, 13, 46, 23, 17, 10, 4, 28, 30, 18, 4, 0, 6, 32, 34, 43, 21, 15, 19, 20, 24, 36, 7, 2, 44, 40};
    vector<int> f = {29, 26, 7, 36, 1, 1, 34, 46, 43, 28, 3, 32, 18};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0011351363544716895;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> A = {30, 31, 26, 27, 22, 25, 9, 8, 29, 4, 20, 10, 2, 3, 21, 7, 14, 17, 12, 19, 23, 24, 18, 1, 15, 34, 35, 5, 6, 13, 32, 16, 11, 28, 33};
    vector<int> B = {27, 29, 24, 25, 19, 21, 6, 7, 24, 2, 15, 9, 0, 0, 16, 3, 9, 12, 10, 15, 19, 22, 17, 0, 11, 29, 33, 3, 4, 8, 29, 14, 6, 23, 29};
    vector<int> f = {12, 27, 26, 35, 2, 9, 7, 13, 19, 21, 23, 26, 5, 25, 0, 23, 19, 0, 2, 30};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 8.020144794196773E-7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> A = {8, 17, 19, 9, 18, 4, 12, 5, 3, 6, 1, 14, 13, 15, 10, 20, 16, 2, 11, 7};
    vector<int> B = {7, 8, 16, 1, 4, 2, 11, 1, 1, 1, 0, 0, 9, 4, 1, 15, 11, 0, 5, 6};
    vector<int> f = {7, 12, 10, 18, 15, 5, 15, 1, 19, 7};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.949615657226561E-4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> A = {13, 2, 6, 9, 3, 14, 8, 7, 5, 1, 12, 11, 4, 10};
    vector<int> B = {12, 1, 3, 5, 0, 12, 6, 4, 0, 0, 5, 1, 0, 5};
    vector<int> f = {3, 3, 10, 4, 10, 2, 5, 3, 7, 10, 11, 7, 9, 7, 8, 4, 12, 5, 2, 9, 3, 2, 3, 1, 1, 4, 7, 10, 12, 1, 11, 3, 3, 4, 7, 10, 13, 0, 1, 10, 1, 0, 2, 0, 12, 6, 7, 14, 8, 6};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.747952477683801E-16;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> A = {25, 10, 5, 23, 9, 15, 14, 6, 19, 7, 3, 12, 2, 11, 4, 24, 17, 16, 13, 20, 1, 22, 28, 18, 26, 27, 8, 21};
    vector<int> B = {17, 4, 0, 19, 3, 7, 7, 1, 10, 3, 0, 4, 1, 8, 0, 13, 16, 6, 8, 8, 0, 12, 25, 14, 17, 21, 3, 19};
    vector<int> f = {3, 19, 8, 20, 17, 19, 12, 17, 1, 3, 17, 6, 20, 25, 11, 1, 0, 26, 20, 0, 17, 16, 20, 17, 24, 0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6638518469940106E-9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> A = {15, 28, 14, 16, 12, 7, 1, 30, 37, 8, 38, 21, 4, 39, 34, 32, 26, 19, 13, 6, 36, 31, 17, 43, 29, 41, 24, 44, 2, 20, 45, 3, 11, 10, 22, 23, 25, 42, 5, 40, 35, 27, 33, 9, 18};
    vector<int> B = {6, 16, 6, 7, 3, 0, 0, 24, 33, 0, 37, 17, 0, 37, 33, 29, 15, 13, 8, 2, 26, 18, 12, 31, 18, 37, 10, 37, 1, 17, 38, 1, 5, 5, 21, 14, 12, 35, 4, 30, 29, 26, 21, 4, 6};
    vector<int> f = {42, 0, 41, 39, 5, 43, 3, 10, 27, 42, 21, 10, 15, 26};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.646501644587077E-5;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> A = {8, 12, 5, 3, 21, 14, 1, 2, 20, 7, 6, 9, 19, 23, 10, 18, 16, 13, 11, 4, 15, 26, 24, 17, 22, 25};
    vector<int> B = {4, 4, 1, 2, 5, 8, 0, 0, 17, 6, 0, 0, 14, 11, 8, 15, 6, 2, 3, 0, 8, 20, 16, 6, 9, 20};
    vector<int> f = {25, 9, 7, 22, 15, 25, 19, 5, 6, 5, 23, 14, 5, 7, 17, 25, 4, 17, 5, 0, 6, 0, 1, 13, 11, 7, 23, 4, 21, 17, 23, 14, 3, 13, 26, 8, 17, 24, 5, 25, 25, 19, 5, 4, 6};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2488422926460686E-17;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> A = {29, 7, 32, 18, 13, 5, 15, 20, 33, 9, 23, 25, 2, 4, 10, 17, 27, 16, 24, 22, 31, 34, 12, 1, 14, 21, 3, 26, 30, 35, 28, 36, 6, 8, 19, 11, 37};
    vector<int> B = {6, 2, 20, 12, 3, 3, 1, 18, 28, 6, 1, 21, 1, 3, 8, 10, 23, 5, 12, 5, 18, 33, 6, 0, 5, 0, 0, 25, 4, 29, 12, 13, 5, 7, 18, 4, 28};
    vector<int> f = {36, 36, 6, 30, 10, 5, 37, 8, 24, 4, 16, 30, 1, 5, 20, 34, 34, 17, 7, 27, 27, 13, 1, 4, 12, 31, 8, 27, 27, 3, 3, 2, 3, 14, 2, 33, 16, 25, 8, 37, 13, 13, 10};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5988992063879746E-13;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> A = {16, 9, 6, 7, 11, 15, 1, 14, 4, 8, 2, 13, 12, 3, 10, 5, 17};
    vector<int> B = {4, 2, 3, 6, 5, 8, 0, 6, 3, 1, 1, 6, 5, 0, 8, 4, 10};
    vector<int> f = {5, 6, 16, 9, 16, 10};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.041777198026860106;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> A = {20, 16, 12, 10, 19, 1, 3, 11, 6, 15, 17, 7, 14, 5, 18, 8, 4, 2, 9, 13};
    vector<int> B = {17, 15, 11, 8, 18, 0, 2, 10, 2, 14, 14, 4, 13, 2, 17, 4, 2, 1, 8, 10};
    vector<int> f = {1};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 4.649999999999999;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> A = {3, 1, 5, 2, 4};
    vector<int> B = {0, 0, 3, 1, 0};
    vector<int> f = {0, 4, 0, 2, 5, 0, 0, 0, 0, 4, 3, 3, 4, 4, 1, 5, 5, 4, 3, 0, 3, 4, 3, 1, 2, 3};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.377901661893955E-8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> A = {5, 3, 2, 4, 6, 1};
    vector<int> B = {3, 0, 0, 0, 0, 0};
    vector<int> f = {2, 3, 5, 5, 2, 1, 4, 4, 2, 1, 4, 4, 5, 1, 0, 1, 6, 4, 5, 1, 4, 5, 4, 0, 6, 4, 1, 2, 3, 2, 5, 4, 4, 2, 1, 1, 2};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3887050832459834E-15;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> A = {11, 31, 35, 6, 32, 42, 44, 14, 21, 1, 5, 27, 8, 19, 25, 36, 20, 46, 23, 29, 4, 13, 22, 15, 28, 12, 26, 17, 33, 2, 16, 34, 43, 10, 30, 7, 37, 40, 3, 9, 45, 24, 38, 39, 41, 18};
    vector<int> B = {9, 27, 30, 4, 30, 40, 41, 8, 18, 0, 2, 22, 5, 13, 19, 34, 18, 44, 18, 25, 1, 7, 17, 11, 26, 10, 24, 11, 29, 1, 12, 28, 40, 9, 23, 5, 34, 36, 1, 7, 44, 22, 35, 38, 37, 15};
    vector<int> f = {7, 43, 13, 25, 34, 45, 23, 9, 24, 6, 2, 4, 18, 25, 4, 34, 35, 35, 36, 26, 15, 21, 1, 42, 24, 34, 15, 30, 15, 20, 9, 23, 37, 0, 10, 44, 35, 20, 9, 42, 22, 25, 45, 36, 26, 45, 0, 19, 13};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8720900242651869E-16;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> A = {13, 10, 4, 12, 21, 1, 19, 17, 7, 20, 14, 3, 9, 11, 18, 16, 15, 8, 2, 6, 5};
    vector<int> B = {9, 2, 2, 11, 1, 0, 3, 15, 2, 8, 7, 0, 8, 2, 16, 9, 12, 3, 1, 3, 2};
    vector<int> f = {7, 17, 6, 4, 2};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10488060897612476;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> A = {15, 22, 23, 13, 14, 11, 8, 18, 2, 12, 3, 1, 19, 7, 5, 21, 4, 10, 9, 17, 20, 16, 24, 6, 25};
    vector<int> B = {7, 2, 21, 4, 7, 8, 3, 10, 0, 3, 1, 0, 5, 1, 1, 7, 0, 1, 4, 13, 2, 15, 9, 2, 22};
    vector<int> f = {1, 12, 4, 19, 9, 15, 20, 4, 21, 21, 3, 1, 14, 21, 20, 19, 16, 20, 5, 11, 12, 18, 11, 10, 20, 18};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 4.7061889047011014E-9;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> A = {18, 17, 1, 12, 6, 9, 19, 11, 3, 16, 15, 2, 7, 13, 8, 10, 14, 5, 4};
    vector<int> B = {15, 15, 0, 11, 3, 6, 17, 8, 2, 15, 13, 1, 4, 10, 6, 7, 13, 2, 3};
    vector<int> f = {11, 19, 12, 15, 17, 8, 9, 2, 8, 8, 19, 4, 12, 2, 6, 12, 8, 2, 1, 11, 10, 10, 8, 12, 14, 6, 7, 0, 9, 0, 8, 13, 18, 7, 0, 4, 18, 19, 14, 14, 5, 1, 1, 1, 11, 8, 14, 7};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9979908593710377E-14;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> A = {8, 9, 1, 6, 11, 13, 10, 14, 7, 5, 4, 12, 2, 3};
    vector<int> B = {7, 6, 0, 4, 8, 9, 8, 9, 5, 2, 3, 9, 0, 2};
    vector<int> f = {13, 4, 6, 3, 12, 5, 11, 11, 13, 12, 3, 4, 9, 3, 5, 11, 2, 1, 6, 9, 1, 10, 9, 12, 13, 5, 14, 10};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 5.1906014085905174E-8;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> A = {16, 2, 14, 13, 9, 5, 15, 6, 10, 3, 11, 4, 7, 12, 8, 1};
    vector<int> B = {10, 0, 13, 11, 1, 2, 11, 3, 0, 0, 7, 0, 1, 5, 1, 0};
    vector<int> f = {1, 14, 16, 7, 1, 4, 16, 8, 9, 15, 12, 2, 15, 9, 9, 2, 11, 1, 4, 14, 10, 10, 8, 16, 5, 11, 7, 4, 9, 12, 0, 1, 2, 4, 12, 12, 15};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 6.820112187390381E-11;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> A = {27, 18, 12, 16, 1, 5, 31, 11, 28, 17, 30, 4, 7, 21, 20, 29, 13, 15, 2, 8, 19, 32, 3, 22, 25, 14, 23, 10, 24, 6, 9, 26};
    vector<int> B = {16, 7, 3, 0, 0, 4, 30, 4, 25, 13, 14, 0, 0, 17, 8, 28, 10, 9, 1, 5, 9, 27, 2, 8, 17, 4, 14, 9, 12, 3, 8, 23};
    vector<int> f = {20, 14, 15, 27, 0, 26, 28, 1, 1, 10, 9, 23, 14, 7, 13, 3, 11, 7, 16, 29, 20, 3, 12, 30, 20, 20, 30, 0, 22, 9, 27, 18, 6, 5, 7, 31, 4, 28, 1, 10, 24};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7043125041120565E-13;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> A = {21, 12, 20, 23, 8, 3, 7, 14, 10, 15, 6, 13, 11, 2, 18, 9, 1, 24, 22, 16, 26, 5, 19, 4, 17, 25};
    vector<int> B = {20, 11, 19, 22, 7, 1, 5, 13, 9, 14, 4, 11, 10, 0, 16, 7, 0, 22, 20, 14, 24, 4, 18, 2, 16, 24};
    vector<int> f = {23, 18, 2, 24, 25, 25, 12, 10, 20, 10, 1, 21, 16, 11, 14, 4, 9, 17, 9, 8, 25, 25, 0, 1, 25, 3, 20, 14, 17, 24, 16, 16, 1, 4, 20, 19, 1, 23, 24, 2, 17, 17, 22, 20, 16, 11, 6, 9};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 6.458421620403958E-14;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> A = {1, 6, 5, 4, 2, 3};
    vector<int> B = {0, 3, 2, 1, 1, 0};
    vector<int> f = {5, 4, 2, 5, 6, 1, 4, 5, 1, 1, 0, 5, 0, 5, 5, 0, 1, 0, 0, 2, 4, 4, 6, 1, 3, 0, 6, 3, 2, 6, 6, 6, 4, 0, 1, 5, 1, 3, 3, 5, 3};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 8.066301961143619E-11;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> A = {38, 25, 40, 15, 8, 14, 24, 6, 46, 33, 2, 7, 17, 36, 32, 35, 39, 37, 10, 11, 5, 41, 28, 13, 12, 26, 9, 43, 27, 1, 19, 42, 4, 23, 30, 34, 18, 29, 21, 20, 3, 16, 44, 22, 45, 31};
    vector<int> B = {34, 21, 25, 1, 4, 7, 14, 4, 36, 30, 0, 1, 2, 31, 27, 31, 38, 36, 2, 0, 4, 27, 21, 0, 7, 21, 4, 41, 23, 0, 10, 34, 2, 21, 18, 33, 17, 14, 18, 11, 2, 7, 37, 18, 33, 22};
    vector<int> f = {22, 31, 10, 43, 18, 9, 0, 24, 10, 32, 23, 26, 19, 8, 24, 35, 8, 7, 40, 2, 1, 46, 4, 45, 7, 24, 38, 30, 29, 11, 2, 40, 24, 18, 1, 34, 37, 43, 39, 25, 32, 35, 13, 23};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.098669276971706E-13;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> A = {16, 14, 31, 40, 34, 3, 5, 26, 36, 12, 41, 24, 17, 10, 11, 7, 20, 39, 13, 33, 25, 9, 22, 38, 8, 23, 45, 32, 43, 15, 21, 46, 2, 37, 18, 47, 35, 6, 27, 29, 19, 1, 4, 42, 28, 44, 30};
    vector<int> B = {10, 8, 27, 36, 29, 0, 2, 23, 33, 8, 38, 21, 15, 7, 5, 2, 16, 38, 6, 30, 18, 4, 16, 37, 1, 17, 39, 25, 37, 11, 15, 44, 1, 34, 12, 42, 34, 5, 25, 25, 18, 0, 3, 38, 27, 38, 23};
    vector<int> f = {15, 42, 26, 25, 22, 28, 36, 37, 1, 27, 4, 46, 20, 18, 8, 32, 38, 45, 27, 47, 34, 2, 31, 44, 41, 11, 33, 16, 19, 38, 39, 34, 3, 8, 22, 37, 29, 47, 24, 30, 28, 33, 21, 33, 19, 22, 35, 37};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 4.4448647903337225E-14;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> A = {13, 9, 7, 14, 2, 10, 11, 5, 4, 3, 1, 8, 12, 6};
    vector<int> B = {9, 6, 6, 12, 0, 6, 10, 1, 0, 1, 0, 4, 10, 5};
    vector<int> f = {4, 2, 7, 1, 2, 4, 1, 10, 0, 8, 3, 10, 11, 8, 5, 3, 7, 4, 9, 10, 0, 9, 9, 12, 11, 2, 8, 14, 8, 8, 0, 6, 13, 10, 10, 7, 8, 14, 8, 7, 7, 13};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 4.921088023355222E-12;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> A = {5, 2, 10, 3, 4, 6, 1, 9, 8, 7};
    vector<int> B = {4, 1, 9, 2, 3, 5, 0, 8, 7, 6};
    vector<int> f = {0, 3, 2, 5, 9, 2, 5, 5, 5, 5, 2, 0, 2, 1, 4, 3, 8, 7};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 4.1532430517149E-5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> A = {6, 3, 4, 5, 2, 1};
    vector<int> B = {0, 0, 0, 2, 1, 0};
    vector<int> f = {1, 6, 2, 0, 1, 6, 2, 2, 6, 0, 3};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0021464341761362037;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> A = {21, 5, 6, 22, 11, 9, 3, 10, 18, 2, 17, 20, 14, 12, 13, 1, 15, 7, 25, 24, 4, 16, 26, 19, 23, 8};
    vector<int> B = {19, 1, 1, 7, 7, 6, 0, 4, 11, 1, 5, 9, 7, 7, 10, 0, 1, 5, 21, 19, 2, 1, 24, 6, 22, 3};
    vector<int> f = {9, 13, 21, 0, 12, 15, 12, 3, 2, 0, 7, 23, 3, 8, 9, 2, 8, 26, 4, 26, 3, 12, 24, 12, 25, 17, 6, 5, 25, 25, 0, 26, 5, 2, 18, 0, 22, 8, 11, 18, 7, 17};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4657692814665503E-15;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> A = {1};
    vector<int> B = {0};
    vector<int> f = {1, 0, 1, 1, 1, 1, 1, 1};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> A = {33, 15, 20, 17, 13, 25, 23, 14, 4, 5, 31, 9, 6, 3, 29, 30, 34, 12, 35, 1, 10, 21, 16, 28, 7, 22, 27, 18, 2, 26, 24, 11, 8, 32, 19};
    vector<int> B = {9, 1, 7, 5, 0, 16, 12, 10, 2, 0, 21, 2, 5, 0, 20, 9, 20, 5, 11, 0, 4, 17, 12, 19, 5, 15, 8, 8, 0, 22, 21, 3, 1, 11, 15};
    vector<int> f = {0, 3, 13, 32, 0, 22, 18, 4, 2, 14, 16, 20, 15, 9, 6, 22, 8, 25, 24, 3};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0575067037314414E-7;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> A = {3, 9, 6, 29, 32, 14, 24, 36, 18, 8, 27, 20, 19, 15, 5, 22, 2, 28, 13, 39, 11, 33, 16, 38, 26, 12, 7, 10, 30, 25, 17, 4, 37, 21, 34, 31, 35, 1, 23};
    vector<int> B = {1, 0, 0, 21, 31, 10, 17, 28, 14, 7, 21, 12, 17, 6, 4, 10, 1, 24, 2, 27, 8, 32, 9, 28, 21, 3, 5, 1, 26, 19, 8, 2, 26, 17, 31, 23, 27, 0, 21};
    vector<int> f = {15, 24, 7, 28, 34, 31, 6, 8, 4, 14, 16, 39, 13, 34, 7, 20, 38, 33, 18, 34, 30, 8, 11, 5, 30, 17, 12, 24, 17, 6, 27, 39, 16, 24, 36, 34, 24, 39, 31, 29, 23, 18, 33};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 4.3110892338079375E-13;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> A = {8, 2, 18, 3, 5, 11, 12, 22, 1, 16, 6, 24, 9, 10, 13, 19, 14, 20, 21, 7, 15, 4, 17, 23};
    vector<int> B = {7, 0, 16, 1, 3, 10, 10, 21, 0, 15, 4, 22, 7, 8, 12, 18, 12, 19, 20, 5, 13, 2, 16, 21};
    vector<int> f = {4, 15, 18, 7, 11, 4, 15, 16, 20, 23, 21, 19, 17, 4, 22, 24, 18, 9, 14, 16, 0, 4, 22, 13, 19, 9, 23, 12, 15};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6266371419971033E-8;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> A = {12, 15, 39, 17, 33, 21, 26, 13, 8, 35, 29, 30, 16, 5, 9, 10, 18, 3, 37, 6, 27, 32, 31, 36, 24, 20, 4, 14, 25, 7, 23, 22, 2, 19, 28, 34, 1, 11, 38};
    vector<int> B = {6, 13, 16, 10, 7, 0, 25, 3, 1, 1, 9, 20, 3, 3, 1, 6, 10, 1, 29, 3, 9, 12, 22, 26, 9, 7, 1, 5, 14, 1, 17, 1, 0, 8, 16, 10, 0, 0, 19};
    vector<int> f = {8, 13, 5, 14, 20, 28, 7, 32, 2, 1, 9, 28};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2590675403645057E-4;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> A = {19, 38, 3, 34, 20, 37, 33, 6, 10, 9, 7, 40, 15, 25, 32, 14, 17, 26, 35, 23, 8, 30, 4, 1, 41, 18, 16, 39, 28, 21, 24, 31, 27, 2, 29, 12, 5, 13, 22, 11, 36};
    vector<int> B = {4, 27, 2, 31, 16, 25, 10, 0, 7, 1, 0, 27, 5, 15, 20, 10, 7, 24, 11, 4, 6, 0, 2, 0, 20, 15, 8, 4, 17, 2, 17, 29, 8, 0, 6, 8, 3, 11, 14, 10, 4};
    vector<int> f = {41, 35, 8, 41, 13, 23, 1};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006778119826046008;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> A = {6, 26, 18, 33, 21, 12, 27, 20, 32, 22, 1, 34, 14, 3, 4, 23, 7, 30, 17, 8, 10, 24, 31, 15, 29, 5, 9, 13, 25, 28, 19, 2, 16, 11};
    vector<int> B = {3, 15, 14, 23, 0, 4, 15, 6, 29, 8, 0, 27, 7, 1, 0, 9, 5, 0, 8, 3, 5, 13, 13, 3, 0, 4, 2, 0, 10, 4, 12, 1, 13, 7};
    vector<int> f = {22, 27, 15, 3, 4, 15, 28, 10, 10, 22, 10, 19, 21, 5, 30, 17, 7, 27, 9, 18, 25, 18, 25, 15, 11, 33, 24, 8, 15, 28, 5, 29, 30, 29, 29, 18, 13, 13, 5, 26, 17};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0565850317932053E-13;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> A = {24, 19, 47, 46, 28, 16, 1, 20, 33, 12, 17, 29, 30, 37, 2, 5, 13, 8, 43, 50, 44, 10, 26, 31, 42, 22, 45, 21, 32, 15, 3, 11, 7, 14, 25, 9, 34, 48, 49, 6, 36, 41, 35, 38, 18, 39, 4, 23, 27, 40};
    vector<int> B = {9, 15, 29, 25, 13, 1, 0, 14, 21, 11, 8, 15, 18, 30, 0, 0, 1, 1, 25, 45, 39, 3, 23, 29, 25, 19, 35, 19, 25, 4, 1, 8, 6, 3, 24, 3, 31, 36, 36, 0, 22, 21, 14, 18, 9, 20, 2, 7, 24, 36};
    vector<int> f = {15, 3, 11, 15, 21, 42, 19, 31, 4, 13, 18, 34, 10, 18, 30, 10, 43, 6, 0, 39, 0, 21, 5, 42, 39, 49, 23, 23, 8, 10, 4, 30, 15, 22, 14, 33, 12, 49, 15, 15, 17, 35, 43, 19, 11};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 5.524469483322165E-14;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> A = {5, 34, 32, 26, 35, 41, 16, 30, 18, 2, 40, 39, 20, 33, 11, 3, 17, 27, 23, 24, 8, 36, 1, 19, 10, 6, 15, 12, 28, 21, 25, 14, 13, 38, 4, 9, 37, 22, 29, 31, 7};
    vector<int> B = {4, 24, 17, 21, 32, 39, 15, 18, 14, 0, 28, 20, 17, 23, 4, 2, 5, 10, 13, 15, 2, 21, 0, 7, 3, 2, 0, 8, 22, 11, 17, 12, 8, 15, 0, 6, 16, 0, 22, 29, 2};
    vector<int> f = {30, 39, 0, 7, 41, 41, 8, 2, 0, 18, 25, 18, 24, 36, 41, 30, 22, 20, 21, 26, 30, 4, 5, 40};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4824974916066899E-8;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> A = {12, 16, 1, 18, 3, 17, 10, 8, 13, 14, 15, 9, 11, 5, 4, 7, 2, 6};
    vector<int> B = {8, 12, 0, 17, 0, 15, 2, 3, 8, 8, 14, 1, 9, 2, 0, 6, 1, 3};
    vector<int> f = {16, 4, 11, 12, 12, 7, 8, 17, 14, 17, 17, 9, 7, 6, 18, 0, 17, 7, 0, 2, 0, 13, 6, 10, 16, 5, 16, 17, 17, 18, 12, 0, 15, 11, 12, 15, 16, 10, 2, 3, 16, 11, 16, 4, 2, 0, 15};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 6.472567905153445E-14;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> A = {8, 17, 21, 6, 13, 19, 22, 2, 14, 23, 1, 16, 4, 15, 9, 3, 10, 18, 20, 7, 12, 5, 11};
    vector<int> B = {4, 11, 19, 5, 10, 8, 7, 0, 2, 2, 0, 1, 0, 13, 7, 0, 2, 0, 5, 0, 2, 2, 5};
    vector<int> f = {23, 20, 22, 15, 12, 16, 7, 1, 7, 1, 1, 16, 3, 1, 12, 21, 15};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5729271558282136E-5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> A = {11, 2, 9, 7, 3, 12, 1, 8, 10, 6, 4, 5};
    vector<int> B = {7, 1, 1, 2, 1, 5, 0, 3, 2, 5, 0, 4};
    vector<int> f = {6, 8, 7, 12, 9, 7, 2, 11, 2, 1, 7, 8, 5, 12, 1, 4};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.303681617700829E-5;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> A = {8, 5, 11, 6, 2, 7, 10, 9, 3, 1, 4};
    vector<int> B = {7, 3, 8, 3, 1, 3, 7, 3, 2, 0, 2};
    vector<int> f = {5, 8, 7, 2, 8, 9, 10, 6, 1, 2, 1, 11, 11, 10, 7, 5, 8, 4, 7, 0, 2, 1, 1, 9, 9, 4, 0, 10, 5, 3, 5, 10, 0, 6, 6, 6, 7, 5, 11, 11, 6};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.580651142151723E-14;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> A = {2, 10, 29, 19, 43, 20, 18, 38, 45, 41, 8, 42, 31, 14, 34, 13, 26, 17, 27, 12, 15, 11, 1, 32, 21, 4, 40, 33, 24, 36, 7, 28, 9, 39, 23, 35, 6, 25, 44, 5, 37, 30, 3, 22, 16, 46};
    vector<int> B = {0, 7, 27, 13, 37, 19, 10, 33, 37, 32, 7, 35, 30, 3, 20, 8, 16, 13, 20, 11, 12, 8, 0, 30, 7, 2, 36, 20, 12, 33, 5, 26, 1, 31, 20, 26, 1, 14, 40, 0, 24, 22, 0, 20, 10, 32};
    vector<int> f = {3, 41};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8610586011342163;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> A = {30, 18, 9, 5, 21, 37, 38, 3, 29, 23, 39, 4, 13, 28, 24, 14, 40, 1, 16, 12, 34, 31, 17, 2, 6, 35, 33, 10, 26, 22, 7, 36, 8, 19, 20, 27, 15, 25, 32, 11};
    vector<int> B = {20, 2, 8, 1, 15, 36, 33, 1, 13, 3, 12, 3, 12, 10, 8, 10, 37, 0, 7, 5, 14, 30, 13, 1, 0, 8, 31, 9, 19, 19, 1, 26, 2, 13, 18, 12, 0, 22, 5, 0};
    vector<int> f = {23, 27, 7, 31, 6, 28, 18, 33, 36, 10, 8, 2, 22, 37, 25, 2, 36, 11, 8};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4119082824937988E-6;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> A = {5, 6, 2, 4, 3, 10, 9, 1, 8, 7};
    vector<int> B = {4, 5, 1, 0, 2, 8, 1, 0, 1, 5};
    vector<int> f = {6, 0, 10, 10, 7, 4, 0, 7, 3, 8, 6, 1, 10, 5, 6, 3, 8, 6, 1, 2, 7, 1, 5, 2, 7, 3, 5, 6, 3, 8, 3, 9};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.855949335822336E-9;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> A = {7, 12, 4, 6, 8, 13, 1, 5, 3, 2, 10, 11, 14, 9};
    vector<int> B = {5, 10, 2, 4, 7, 12, 0, 3, 2, 0, 9, 10, 12, 7};
    vector<int> f = {0, 4, 4, 8, 4, 11, 7, 11, 11, 6, 5, 14, 5};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 5.929611829176606E-4;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> A = {4, 6, 3, 5, 1, 2};
    vector<int> B = {2, 4, 2, 4, 0, 1};
    vector<int> f = {4, 5, 4, 2, 1, 6, 1, 6, 3, 4, 2, 2, 0, 2, 6, 1, 3, 4, 0, 3, 0, 0, 2, 0, 4, 4, 4, 5, 2, 0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9419721851594665E-8;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> A = {27, 26, 20, 38, 33, 34, 18, 17, 23, 24, 25, 37, 14, 21, 9, 4, 42, 22, 3, 15, 10, 16, 6, 32, 36, 43, 44, 1, 29, 30, 41, 28, 19, 35, 40, 31, 11, 5, 2, 7, 8, 12, 39, 13};
    vector<int> B = {7, 22, 12, 10, 21, 33, 14, 15, 20, 20, 19, 35, 9, 16, 4, 1, 18, 4, 0, 13, 5, 4, 2, 31, 31, 23, 17, 0, 24, 3, 37, 12, 3, 32, 35, 21, 0, 0, 0, 1, 1, 7, 14, 7};
    vector<int> f = {7, 30, 8, 3, 5, 11, 22, 18, 34, 38, 3, 17, 20, 10, 39, 16, 34, 9, 21, 31, 27, 4, 31, 36, 36, 37, 22, 36, 28, 37, 14, 4, 3, 29, 13, 24, 20, 39};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 7.342293806073255E-12;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> A = {3, 8, 10, 11, 2, 5, 13, 7, 12, 4, 9, 1, 6};
    vector<int> B = {0, 6, 3, 5, 0, 1, 5, 2, 4, 0, 8, 0, 4};
    vector<int> f = {11, 2, 1, 13, 0, 13, 12, 8, 12, 8, 8, 5, 8, 6, 13, 6, 7, 9, 5, 13, 8, 7, 2, 5, 3, 3, 9, 4, 0, 8, 10, 1, 12, 6, 12, 4, 7, 8, 1, 12, 5, 7, 4, 11, 6, 1, 11};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 7.194893775293798E-15;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> A = {9, 18, 8, 24, 7, 10, 5, 19, 12, 23, 20, 6, 11, 13, 3, 4, 25, 22, 14, 26, 2, 17, 1, 16, 15, 21};
    vector<int> B = {2, 16, 5, 9, 5, 9, 4, 15, 7, 15, 11, 0, 8, 11, 2, 1, 13, 15, 6, 13, 0, 8, 0, 10, 1, 9};
    vector<int> f = {18, 8, 8, 8, 1, 3, 21, 11, 17, 25, 21, 16, 12, 6, 9, 8, 7, 12, 5, 13, 21, 0, 3, 19, 13, 15, 8, 3, 5, 18, 11, 4, 8, 26, 21, 12, 14, 1, 10, 15, 24, 21, 14, 9};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.239102413291813E-13;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> A = {11, 33, 4, 39, 18, 30, 3, 14, 1, 37, 7, 25, 13, 38, 16, 12, 27, 9, 32, 23, 5, 40, 24, 8, 31, 36, 19, 35, 21, 15, 10, 2, 26, 20, 17, 22, 34, 41, 6, 29, 28};
    vector<int> B = {0, 6, 3, 31, 10, 5, 0, 10, 0, 20, 3, 23, 2, 6, 12, 10, 21, 7, 4, 0, 3, 21, 9, 1, 6, 17, 17, 6, 18, 11, 5, 0, 8, 16, 8, 17, 18, 10, 1, 26, 21};
    vector<int> f = {25, 9, 23};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3248792095297513;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> A = {22, 39, 5, 18, 7, 36, 21, 26, 6, 29, 3, 35, 12, 8, 23, 34, 4, 37, 19, 1, 2, 24, 13, 31, 10, 15, 11, 32, 25, 16, 38, 9, 20, 28, 14, 30, 17, 27, 33};
    vector<int> B = {19, 5, 4, 5, 0, 26, 11, 14, 3, 24, 0, 31, 9, 7, 12, 3, 1, 20, 1, 0, 0, 16, 2, 21, 0, 4, 7, 26, 3, 15, 12, 5, 8, 7, 0, 29, 15, 15, 17};
    vector<int> f = {8, 25, 35, 17, 32, 1, 10, 23, 9, 22, 8, 4, 33, 11, 6, 8, 38, 1, 7, 1, 33, 32, 8, 17, 15, 26, 36, 0, 4, 5, 14, 29, 35, 15, 29, 27, 19, 17, 22, 19, 39, 5};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0151405920534663E-12;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> A = {5, 2, 29, 27, 16, 17, 6, 31, 13, 22, 42, 25, 1, 26, 24, 41, 19, 15, 10, 30, 7, 35, 28, 20, 14, 33, 12, 11, 3, 37, 18, 38, 23, 44, 39, 8, 21, 40, 4, 36, 34, 9, 32, 43};
    vector<int> B = {3, 0, 21, 21, 13, 13, 2, 19, 1, 5, 20, 12, 0, 12, 5, 30, 4, 0, 8, 17, 0, 22, 21, 16, 1, 24, 11, 6, 1, 26, 7, 25, 21, 21, 37, 0, 10, 36, 3, 18, 24, 6, 30, 41};
    vector<int> f = {37, 14, 43, 22, 24, 41, 19};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014409995864860638;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> A = {8, 13, 7, 14, 4, 11, 2, 12, 9, 3, 5, 6, 10, 1, 15};
    vector<int> B = {6, 11, 3, 1, 1, 9, 0, 8, 5, 0, 4, 0, 8, 0, 10};
    vector<int> f = {10, 10, 0, 13, 10, 0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.043942803840877905;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> A = {38, 9, 26, 24, 23, 11, 25, 42, 18, 16, 45, 30, 19, 15, 36, 4, 3, 8, 39, 1, 12, 31, 37, 40, 21, 7, 32, 35, 20, 2, 28, 29, 22, 13, 17, 44, 6, 10, 33, 27, 5, 34, 14, 43, 41};
    vector<int> B = {10, 8, 2, 19, 1, 2, 21, 34, 0, 15, 27, 24, 11, 7, 9, 1, 1, 7, 16, 0, 9, 15, 22, 15, 5, 4, 17, 25, 14, 0, 22, 3, 18, 11, 3, 38, 4, 2, 18, 22, 0, 28, 0, 22, 18};
    vector<int> f = {14, 13, 42, 35, 38, 4, 45, 22, 37, 42, 30, 33, 31, 6, 35, 12, 45, 25, 14, 22};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 7.074660071612273E-8;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> A = {2, 1};
    vector<int> B = {1, 0};
    vector<int> f = {0, 0, 1, 2, 1, 2, 0, 1, 1, 2, 2, 2, 0, 0, 2, 0, 2, 0, 0, 2, 0, 2, 2};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8310546875E-4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> A = {44, 37, 17, 19, 28, 5, 42, 15, 9, 34, 3, 10, 13, 16, 25, 7, 22, 24, 21, 4, 38, 45, 29, 35, 2, 33, 14, 23, 11, 20, 30, 32, 8, 6, 39, 26, 36, 31, 41, 27, 18, 12, 40, 1, 43};
    vector<int> B = {36, 19, 4, 18, 5, 3, 29, 8, 3, 20, 0, 8, 4, 10, 0, 6, 11, 0, 14, 0, 3, 40, 8, 23, 0, 8, 7, 8, 2, 16, 16, 16, 4, 1, 26, 1, 18, 7, 4, 5, 10, 0, 4, 0, 15};
    vector<int> f = {28, 35, 7, 0, 16, 27, 3, 21, 11, 0, 40, 23, 30, 11, 29, 0, 25, 26, 8, 42, 7, 15, 29, 25, 38, 23};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 4.005176635559283E-8;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> A = {5, 12, 2, 10, 3, 6, 11, 16, 14, 1, 7, 13, 8, 9, 15, 4};
    vector<int> B = {2, 3, 1, 7, 1, 4, 5, 0, 12, 0, 5, 9, 6, 8, 3, 1};
    vector<int> f = {9, 16, 6, 8, 14, 1, 6, 7, 1, 5, 11, 3, 12, 14, 5, 4, 8, 12, 0, 9, 16, 0, 9, 14, 13, 15, 11, 0, 1, 1, 13, 6, 11, 15, 4, 0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3986065073467732E-14;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> A = {7, 12, 18, 4, 9, 15, 13, 14, 21, 10, 3, 19, 6, 17, 1, 16, 8, 2, 11, 5, 20};
    vector<int> B = {3, 11, 13, 1, 2, 5, 12, 10, 18, 8, 0, 12, 2, 9, 0, 15, 7, 0, 9, 3, 17};
    vector<int> f = {13, 1, 11, 11, 10, 15, 10, 20, 7, 20, 11, 15, 18, 11, 8, 2, 20, 4, 7, 16, 13, 20, 6, 8, 18, 1, 15};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7040455889161086E-8;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> A = {3, 1, 2};
    vector<int> B = {1, 0, 1};
    vector<int> f = {3, 1, 2, 2, 1, 2, 0, 3, 1, 1, 2, 2, 2, 2, 0, 1, 0, 3, 1, 1, 1, 1, 2, 2, 3, 2, 3, 3, 0, 1, 0, 0, 3, 1};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.715555848458425E-12;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> A = {5, 1, 2, 4, 6, 3, 7};
    vector<int> B = {0, 0, 0, 3, 3, 1, 1};
    vector<int> f = {6, 5, 5, 1, 0, 4, 7, 6, 0, 4, 2};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001843479340429878;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> A = {14, 12, 6, 9, 22, 17, 20, 5, 1, 21, 8, 4, 23, 15, 10, 11, 19, 16, 7, 13, 3, 18, 2};
    vector<int> B = {10, 6, 2, 7, 10, 15, 11, 2, 0, 19, 3, 1, 19, 4, 7, 9, 15, 13, 6, 4, 2, 9, 0};
    vector<int> f = {7, 1, 7, 19, 9, 16, 23, 7, 17, 18, 6, 16, 1, 5, 14, 15, 2, 10, 18, 18, 4, 20, 21, 4, 3};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 9.649129185216587E-8;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> A = {6, 4, 7, 32, 42, 40, 13, 18, 37, 30, 3, 1, 21, 22, 35, 10, 34, 11, 19, 36, 17, 15, 25, 33, 27, 41, 5, 9, 39, 28, 12, 29, 14, 20, 16, 8, 23, 26, 31, 43, 2, 24, 38};
    vector<int> B = {5, 1, 3, 28, 37, 39, 4, 11, 27, 27, 0, 0, 20, 18, 33, 3, 27, 10, 9, 32, 11, 14, 19, 28, 23, 40, 0, 6, 37, 20, 6, 22, 10, 18, 15, 6, 21, 16, 29, 38, 1, 17, 31};
    vector<int> f = {35, 23, 38, 13, 41, 35};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05995685868097022;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> A = {7, 9, 10, 8, 1, 2, 11, 3, 5, 4, 6};
    vector<int> B = {6, 8, 8, 7, 0, 1, 9, 1, 4, 2, 4};
    vector<int> f = {0, 4, 2, 5, 7, 0, 11, 4, 6, 5, 2, 6, 7, 9, 8, 10, 8, 8, 1, 0, 6, 8, 9, 8, 8, 2, 10, 4, 3};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2965729045831624E-8;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> A = {22, 20, 30, 35, 39, 3, 6, 33, 31, 15, 19, 14, 13, 1, 4, 18, 23, 26, 34, 37, 17, 32, 10, 36, 27, 12, 28, 16, 7, 9, 24, 25, 5, 2, 40, 8, 21, 11, 38, 29};
    vector<int> B = {21, 3, 8, 27, 20, 1, 3, 19, 27, 8, 6, 2, 9, 0, 1, 2, 8, 15, 22, 22, 4, 14, 1, 19, 25, 9, 20, 2, 1, 5, 2, 2, 1, 1, 32, 7, 4, 2, 27, 22};
    vector<int> f = {24, 14, 24, 4, 24, 21, 21, 26, 4, 31, 34, 18, 8, 18, 3, 36, 17, 31, 39, 25, 36, 2, 11, 12, 27, 12, 14, 0, 5, 10, 19, 26, 11, 39, 16};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 8.206119192094605E-13;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> A = {12, 9, 14, 7, 13, 4, 8, 11, 2, 5, 6, 1, 3, 10};
    vector<int> B = {11, 1, 8, 0, 11, 3, 7, 9, 0, 3, 4, 0, 2, 8};
    vector<int> f = {14, 11, 9, 14, 3, 8, 13, 5, 14, 6, 8, 14, 7, 11, 13, 3, 1, 6, 7, 8, 7, 4, 7, 4, 13};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.438371444794867E-9;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> A = {6, 4, 18, 15, 19, 2, 13, 8, 17, 11, 12, 14, 10, 9, 5, 7, 3, 16, 1};
    vector<int> B = {0, 3, 6, 5, 2, 1, 0, 1, 16, 7, 3, 9, 3, 6, 4, 0, 1, 4, 0};
    vector<int> f = {11, 9, 6, 2, 18, 9, 1, 7, 15, 18, 6, 17, 4, 8, 5, 2, 2, 17, 7};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.356420067413333E-6;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> A = {25, 17, 33, 10, 14, 35, 4, 11, 21, 39, 22, 36, 27, 20, 26, 2, 32, 18, 28, 7, 30, 19, 29, 24, 37, 13, 5, 1, 8, 38, 6, 9, 3, 34, 12, 31, 15, 23, 16};
    vector<int> B = {21, 11, 29, 3, 13, 15, 0, 7, 15, 21, 4, 32, 14, 2, 14, 1, 13, 7, 18, 2, 18, 0, 14, 0, 19, 7, 4, 0, 3, 21, 3, 1, 0, 29, 0, 19, 5, 2, 5};
    vector<int> f = {4, 35, 2, 14, 22, 10, 36, 2, 11, 26, 29, 6, 38, 38, 4, 0, 32, 9, 7, 28, 11, 22, 30, 5, 12, 39, 8, 14, 13, 11, 4, 11, 19, 3, 3, 3, 6, 24, 20, 7, 19, 7, 9, 26, 38, 31, 15, 8};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6264774626832814E-14;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> A = {1};
    vector<int> B = {0};
    vector<int> f = {1, 1, 1, 0, 0, 0, 0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> A = {26, 2, 5, 21, 13, 40, 37, 32, 35, 25, 43, 30, 15, 8, 1, 31, 45, 39, 16, 3, 14, 23, 18, 38, 22, 12, 7, 33, 11, 36, 29, 4, 24, 42, 17, 28, 6, 46, 41, 10, 19, 34, 27, 9, 20, 44};
    vector<int> B = {25, 1, 4, 20, 12, 39, 36, 31, 34, 24, 42, 29, 14, 7, 0, 30, 44, 38, 15, 2, 13, 22, 17, 37, 21, 11, 6, 32, 10, 35, 28, 3, 23, 41, 16, 27, 5, 45, 40, 9, 18, 33, 26, 8, 19, 43};
    vector<int> f = {16, 37, 17, 18};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0250881304026214;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> A = {9, 18, 4, 10, 17, 6, 3, 11, 19, 8, 15, 12, 1, 13, 20, 14, 7, 16, 5, 2};
    vector<int> B = {6, 15, 3, 9, 15, 3, 1, 10, 17, 6, 14, 9, 0, 12, 19, 12, 6, 15, 2, 1};
    vector<int> f = {13, 19};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4849999999999999;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> A = {21, 14, 5, 25, 1, 3, 32, 27, 7, 16, 38, 4, 36, 44, 2, 37, 31, 15, 34, 10, 6, 20, 39, 12, 8, 26, 42, 40, 17, 43, 24, 13, 30, 33, 29, 23, 19, 35, 11, 9, 41, 22, 28, 18};
    vector<int> B = {20, 13, 4, 24, 0, 2, 31, 26, 6, 15, 37, 3, 35, 43, 1, 36, 30, 14, 33, 9, 5, 19, 38, 11, 7, 25, 41, 39, 16, 42, 23, 12, 29, 32, 28, 22, 18, 34, 10, 8, 40, 21, 27, 17};
    vector<int> f = {26, 28, 37, 9};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0400696780445324;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> A = {1, 2, 5, 4, 3};
    vector<int> B = {0, 1, 4, 3, 2};
    vector<int> f = {5, 1, 5, 4, 4};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2704000000000001;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> A = {13, 2, 14, 17, 15, 7, 18, 16, 12, 1, 8, 9, 5, 11, 4, 6, 3, 10};
    vector<int> B = {12, 1, 13, 15, 13, 6, 17, 14, 10, 0, 6, 7, 4, 9, 2, 4, 1, 9};
    vector<int> f = {11, 17, 4, 15};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3756191891479957;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> A = {3, 26, 17, 13, 10, 6, 19, 11, 5, 20, 28, 27, 9, 1, 31, 2, 22, 18, 29, 14, 39, 12, 40, 16, 4, 38, 37, 34, 33, 30, 35, 36, 8, 21, 23, 41, 15, 24, 32, 25, 7};
    vector<int> B = {2, 25, 16, 12, 9, 5, 18, 10, 4, 19, 27, 26, 8, 0, 30, 1, 21, 17, 28, 13, 38, 11, 39, 15, 3, 37, 36, 33, 32, 29, 34, 35, 7, 20, 22, 40, 14, 23, 31, 24, 6};
    vector<int> f = {36, 4, 30, 37};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5204728920811068;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> A = {7, 2, 4, 9, 8, 1, 5, 3, 11, 10, 6};
    vector<int> B = {6, 1, 3, 8, 7, 0, 4, 0, 9, 7, 5};
    vector<int> f = {6};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.999999999999999;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> A = {12, 10, 4, 7, 11, 1, 6, 5, 9, 2, 3, 8, 13, 14};
    vector<int> B = {11, 9, 3, 6, 10, 0, 5, 4, 8, 1, 2, 7, 12, 13};
    vector<int> f = {2, 9};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0918367346938775;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> A = {11, 15, 7, 10, 1, 9, 8, 13, 2, 6, 5, 4, 3, 12, 14};
    vector<int> B = {10, 14, 6, 8, 0, 8, 7, 12, 0, 5, 3, 2, 1, 11, 13};
    vector<int> f = {8};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.866666666666667;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> A = {16, 4, 19, 11, 12, 25, 17, 18, 2, 5, 1, 24, 7, 9, 22, 13, 14, 10, 3, 8, 27, 23, 20, 21, 15, 6, 26};
    vector<int> B = {15, 2, 17, 10, 10, 23, 15, 17, 0, 3, 0, 22, 6, 7, 20, 12, 12, 9, 2, 6, 26, 21, 19, 20, 13, 4, 25};
    vector<int> f = {25, 23, 15, 14};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.44902444485841325;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> A = {8, 11, 31, 42, 28, 13, 37, 15, 40, 24, 38, 23, 29, 43, 3, 22, 30, 34, 12, 5, 20, 9, 25, 39, 16, 32, 18, 36, 2, 26, 7, 33, 21, 19, 41, 35, 1, 10, 6, 14, 17, 4, 27};
    vector<int> B = {6, 9, 29, 41, 27, 10, 34, 12, 37, 23, 37, 22, 27, 40, 1, 21, 27, 32, 9, 3, 17, 7, 24, 37, 14, 30, 17, 35, 0, 24, 5, 31, 19, 17, 39, 33, 0, 7, 5, 13, 15, 1, 24};
    vector<int> f = {33, 36, 10};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4519350497440473;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> A = {5, 16, 24, 13, 26, 23, 32, 8, 42, 28, 12, 37, 10, 33, 40, 17, 39, 6, 19, 15, 7, 25, 1, 18, 22, 20, 34, 3, 41, 36, 21, 29, 11, 14, 31, 38, 4, 9, 27, 30, 35, 2};
    vector<int> B = {3, 15, 21, 11, 24, 20, 29, 6, 39, 27, 10, 35, 8, 30, 37, 15, 36, 3, 16, 13, 6, 22, 0, 17, 19, 19, 32, 2, 39, 34, 18, 28, 9, 11, 30, 37, 3, 7, 25, 29, 32, 1};
    vector<int> f = {25, 22, 2, 11, 32};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21921683315373447;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> A = {19, 16, 6, 8, 13, 20, 7, 22, 3, 24, 28, 25, 9, 30, 11, 21, 23, 10, 14, 17, 18, 26, 12, 1, 29, 2, 5, 27, 15, 4};
    vector<int> B = {17, 13, 4, 6, 12, 19, 6, 21, 2, 23, 25, 22, 6, 29, 8, 19, 20, 9, 11, 14, 15, 25, 10, 0, 27, 0, 4, 24, 13, 3};
    vector<int> f = {10, 15};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0000000000000004;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> A = {32, 13, 33, 36, 7, 34, 38, 26, 6, 20, 10, 44, 24, 29, 35, 2, 31, 46, 39, 28, 19, 3, 37, 18, 5, 30, 17, 40, 15, 16, 11, 21, 12, 22, 14, 27, 23, 8, 4, 45, 43, 42, 41, 9, 1, 25};
    vector<int> B = {30, 12, 32, 35, 6, 32, 36, 24, 5, 19, 8, 42, 23, 28, 33, 0, 30, 44, 38, 27, 17, 1, 36, 16, 4, 28, 16, 38, 14, 15, 10, 20, 10, 20, 13, 26, 22, 6, 2, 44, 41, 40, 39, 8, 0, 23};
    vector<int> f = {3};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 17.913043478260864;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> A = {23, 18, 37, 38, 29, 44, 22, 24, 7, 31, 9, 40, 32, 36, 11, 25, 13, 1, 12, 27, 30, 17, 16, 2, 8, 20, 15, 10, 39, 26, 41, 19, 28, 43, 5, 4, 33, 3, 14, 21, 6, 42, 34, 35};
    vector<int> B = {22, 17, 36, 37, 28, 43, 21, 23, 6, 30, 8, 39, 31, 35, 10, 24, 12, 0, 11, 26, 29, 16, 15, 1, 7, 19, 14, 9, 38, 25, 40, 18, 27, 42, 4, 3, 32, 2, 13, 20, 5, 41, 33, 34};
    vector<int> f = {29, 34};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 5.686983471074379;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> A = {12, 34, 20, 26, 32, 10, 22, 11, 41, 37, 3, 36, 19, 17, 33, 7, 15, 38, 4, 14, 9, 16, 23, 27, 2, 31, 21, 24, 6, 25, 28, 13, 40, 1, 35, 29, 18, 8, 5, 42, 30, 39};
    vector<int> B = {10, 33, 19, 24, 31, 8, 21, 10, 40, 35, 2, 34, 18, 15, 31, 5, 14, 36, 3, 13, 8, 15, 21, 26, 0, 30, 20, 23, 5, 23, 27, 11, 39, 0, 34, 27, 16, 6, 4, 41, 28, 37};
    vector<int> f = {18, 38, 11};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6442203865673255;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> A = {13, 2, 14, 7, 1, 11, 17, 12, 8, 10, 9, 16, 4, 3, 6, 5, 15};
    vector<int> B = {12, 1, 13, 6, 0, 10, 16, 11, 7, 9, 8, 15, 3, 2, 5, 4, 14};
    vector<int> f = {10, 11, 2};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9796458375737839;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> A = {6, 1, 9, 15, 11, 14, 13, 3, 8, 10, 7, 12, 5, 4, 2};
    vector<int> B = {5, 0, 7, 12, 8, 13, 12, 1, 7, 8, 6, 11, 4, 2, 1};
    vector<int> f = {7, 10};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1688888888888889;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> A = {4, 5, 9, 3, 6, 13, 10, 17, 2, 16, 7, 15, 12, 14, 8, 1, 11};
    vector<int> B = {3, 3, 8, 2, 4, 12, 8, 16, 1, 14, 5, 14, 11, 12, 7, 0, 9};
    vector<int> f = {5, 4};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7750865051903117;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> A = {4, 12, 29, 5, 7, 27, 32, 25, 6, 3, 15, 31, 20, 10, 11, 24, 8, 14, 17, 1, 23, 9, 22, 19, 13, 16, 28, 30, 26, 18, 21, 2};
    vector<int> B = {3, 11, 28, 4, 6, 26, 31, 24, 5, 2, 14, 30, 19, 9, 10, 23, 7, 13, 16, 0, 22, 8, 21, 18, 12, 15, 27, 29, 25, 17, 20, 1};
    vector<int> f = {28, 17};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 4.1357421875;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> A = {14, 3, 13, 7, 16, 21, 17, 10, 18, 9, 2, 12, 8, 1, 15, 22, 23, 5, 6, 11, 19, 20, 4};
    vector<int> B = {13, 2, 12, 6, 15, 20, 16, 9, 17, 8, 1, 11, 7, 0, 14, 21, 22, 4, 5, 10, 18, 19, 3};
    vector<int> f = {4, 1, 8, 13};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7097315975857719;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> A = {8, 7, 1, 4, 14, 12, 5, 17, 11, 3, 2, 16, 6, 13, 15, 9, 10};
    vector<int> B = {7, 6, 0, 3, 13, 11, 4, 16, 10, 2, 1, 15, 5, 12, 14, 8, 9};
    vector<int> f = {7, 11};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8996539792387548;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> A = {17, 25, 15, 8, 4, 30, 2, 27, 11, 5, 24, 10, 7, 18, 9, 28, 20, 26, 19, 3, 31, 1, 32, 23, 22, 6, 21, 16, 29, 13, 14, 12};
    vector<int> B = {16, 24, 14, 7, 3, 29, 1, 26, 10, 4, 23, 9, 6, 17, 8, 27, 19, 25, 18, 2, 30, 0, 31, 22, 21, 5, 20, 15, 28, 12, 13, 11};
    vector<int> f = {18, 7, 28, 11};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7786064147949219;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> A = {1, 21, 6, 43, 11, 29, 37, 35, 39, 2, 31, 34, 13, 3, 15, 14, 17, 32, 20, 5, 4, 8, 10, 30, 26, 23, 19, 46, 44, 27, 40, 18, 36, 38, 12, 28, 25, 24, 9, 22, 16, 41, 33, 42, 45, 7};
    vector<int> B = {0, 20, 5, 42, 10, 28, 36, 34, 38, 1, 30, 33, 12, 2, 14, 13, 16, 31, 19, 4, 3, 7, 9, 29, 25, 22, 18, 45, 43, 26, 39, 17, 35, 37, 11, 27, 24, 23, 8, 21, 15, 40, 32, 41, 44, 6};
    vector<int> f = {14, 46, 11};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8818320046026127;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> A = {1};
    vector<int> B = {0};
    vector<int> f = {0, 1, 0, 0, 1};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> A = {1, 2, 3, 4, 5, 6};
    vector<int> B = {0, 0, 1, 3, 4, 5};
    vector<int> f = {6};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> A = {2, 15, 12, 11, 1, 7, 14, 22, 30, 3, 34, 4, 16, 36, 24, 17, 39, 31, 35, 8, 28, 32, 9, 13, 26, 37, 27, 6, 38, 40, 18, 33, 5, 29, 20, 19, 25, 10, 21, 23};
    vector<int> B = {0, 13, 10, 8, 0, 5, 12, 20, 28, 2, 31, 2, 15, 34, 23, 16, 37, 30, 33, 6, 26, 29, 6, 10, 24, 35, 26, 4, 35, 37, 16, 30, 4, 27, 17, 17, 23, 7, 19, 21};
    vector<int> f = {37, 21};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9143749999999997;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> A = {29, 21, 28, 4, 25, 33, 40, 22, 35, 12, 24, 42, 36, 6, 14, 8, 5, 16, 38, 37, 2, 3, 17, 10, 15, 39, 26, 32, 7, 18, 1, 11, 19, 20, 41, 27, 9, 31, 13, 34, 30, 23};
    vector<int> B = {27, 20, 26, 3, 24, 31, 38, 21, 33, 10, 22, 40, 35, 5, 13, 7, 4, 14, 37, 35, 0, 2, 16, 8, 13, 38, 25, 31, 6, 16, 0, 9, 18, 19, 40, 26, 7, 30, 12, 32, 28, 21};
    vector<int> f = {36, 32, 14};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8607331821617537;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> A = {2, 1, 3};
    vector<int> B = {1, 0, 2};
    vector<int> f = {2, 2, 3, 2, 0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 0.15637860082304525;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> A = {5, 17, 19, 2, 6, 14, 3, 11, 23, 15, 1, 12, 8, 18, 16, 21, 4, 13, 24, 10, 7, 9, 22, 20};
    vector<int> B = {3, 15, 17, 1, 4, 13, 2, 10, 21, 14, 0, 11, 7, 17, 14, 19, 3, 12, 23, 8, 5, 7, 20, 18};
    vector<int> f = {23, 2};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 2.991319444444445;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> A = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> f = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    FoxAndTouristFamilies* pObj = new FoxAndTouristFamilies();
    clock_t start = clock();
    double result = pObj->expectedLength(A, B, f);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4914341925000003;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23110808&rd=15183&pm=11811
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
const int MAXDIS = 10000;
class FoxAndTouristFamilies {
public:
  int f[60][60];
  double expectedLength(vector <int> A, vector <int> B, vector <int> g) {
    int n = A.size() + 1;
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
        f[i][j] = MAXDIS;
    for (int i = 0; i < n; ++i)
      f[i][i] = 0;
    for (int i = 0; i < A.size(); ++i){
      f[A[i]][B[i]] = 1;
      f[B[i]][A[i]] = 1;
    }
    for (int k = 0; k < n; ++k)
      for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
          f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
    double ret = 0;
    for (int i = 0; i < A.size(); ++i){
      int a = A[i]; 
      int b = B[i];
      double sa = 0, sb = 0;
      for (int j = 0; j < n; ++j)
        if (f[j][a] < f[j][b]) sa += 1;
        else sb += 1;
      double p = 1;
      for (int j = 0; j < g.size(); ++j)
        if (f[g[j]][a] < f[g[j]][b]) p *= sb / (n - 1);
        else p *= sa / (n - 1);
      //cout<<a<<' '<<b<<' '<<sa<<' '<<sb<<' '<<p<<endl;
      ret += p;
    }
    return ret;
  }
};
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/