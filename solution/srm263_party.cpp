/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4772
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

class Party {
public:
    double averageNames(int n, vector<int> personA, vector<int> personB);
};

double Party::averageNames(int n, vector<int> personA, vector<int> personB) {
    double ret;
    return ret;
}


int test0() {
    int n = 4;
    vector<int> personA = {0, 1, 2};
    vector<int> personB = {1, 2, 3};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 2.25;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 5;
    vector<int> personA = {0, 0, 0, 0, 0, 0, 0};
    vector<int> personB = {1, 2, 3, 4, 3, 2, 1};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 100;
    vector<int> personA = {52, 19, 52, 19};
    vector<int> personB = {19, 52, 19, 52};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 97;
    vector<int> personA = {38, 56, 77, 88, 72, 21, 26, 69, 2, 25, 47, 85, 36, 52, 28, 73, 96, 86, 89, 61, 33, 16, 76, 57, 55, 95, 82, 78, 31, 92, 3, 70, 74, 35, 30, 50, 49, 11, 94, 21, 76, 17, 67, 45, 68, 12, 52, 55, 55, 33};
    vector<int> personB = {89, 34, 52, 26, 86, 11, 59, 81, 14, 32, 50, 11, 1, 33, 20, 17, 82, 22, 4, 70, 5, 24, 56, 6, 88, 12, 58, 55, 66, 61, 81, 89, 43, 37, 56, 72, 59, 29, 73, 74, 21, 56, 60, 78, 34, 37, 63, 82, 42, 40};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6391752577319587;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 20;
    vector<int> personA = {13, 3, 9, 16, 10, 11, 9, 8, 19, 1, 5, 7, 6, 17, 17, 19, 14, 5, 9, 8};
    vector<int> personB = {5, 14, 16, 12, 11, 19, 17, 6, 16, 10, 12, 0, 16, 5, 3, 5, 12, 4, 4, 4};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 4.85;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 25;
    vector<int> personA = {14, 14, 16, 4, 14, 16, 2, 16, 8, 15, 17, 17, 3, 3, 19, 17, 20, 4, 24, 8};
    vector<int> personB = {16, 2, 23, 16, 11, 8, 5, 19, 15, 20, 19, 18, 14, 12, 22, 9, 0, 7, 23, 10};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 4.44;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 43;
    vector<int> personA = {40, 6, 31, 5, 6, 24, 29};
    vector<int> personB = {11, 36, 11, 41, 21, 36, 23};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3953488372093023;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 90;
    vector<int> personA = {45, 60, 60, 81, 69, 64, 11, 53, 79, 24, 62, 13};
    vector<int> personB = {75, 48, 66, 15, 56, 78, 33, 77, 78, 26, 69, 4};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 100;
    vector<int> personA = {28, 2, 8, 16, 75, 28, 45, 88, 57, 60, 88, 94, 22, 68, 3, 11, 88, 46, 69, 38, 51, 80, 25, 77, 65, 21, 19, 11, 63, 69};
    vector<int> personB = {32, 96, 84, 56, 55, 24, 96, 74, 17, 77, 2, 48, 94, 3, 43, 0, 16, 13, 6, 83, 13, 92, 23, 75, 74, 38, 94, 43, 42, 97};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.81;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 14;
    vector<int> personA = {7, 1, 13, 2, 3, 6, 13, 5, 12, 8, 5, 0, 3, 11, 3, 7, 2, 12, 11, 0};
    vector<int> personB = {9, 6, 12, 10, 2, 0, 12, 11, 13, 6, 0, 2, 7, 8, 11, 8, 10, 9, 6, 2};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 5.928571428571429;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 42;
    vector<int> personA = {12, 41, 31, 9, 39, 18, 5, 31, 22, 26, 14, 37, 31, 21, 6, 0, 25, 18, 10, 24, 11, 35, 4, 0, 5, 36, 20, 7, 30, 32, 22, 21, 24, 27, 39, 38, 18, 37, 5, 15, 31, 6, 20, 1, 40, 37};
    vector<int> personB = {26, 4, 20, 31, 15, 27, 21, 23, 20, 32, 11, 1, 16, 5, 41, 6, 32, 16, 32, 38, 19, 6, 19, 30, 16, 35, 15, 32, 31, 27, 21, 15, 31, 36, 19, 27, 36, 38, 6, 35, 27, 5, 23, 2, 26, 4};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 6.857142857142857;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 30;
    vector<int> personA = {3, 26, 16, 4, 0, 4, 24, 19};
    vector<int> personB = {18, 7, 21, 2, 29, 15, 17, 18};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 88;
    vector<int> personA = {78, 4, 75, 11, 9, 17, 22, 0, 31, 8, 20, 50, 73, 45, 19, 17, 66, 17, 45, 33, 34, 83, 11, 25, 39, 82, 27, 57, 80, 54, 14, 55, 74, 21};
    vector<int> personB = {86, 43, 7, 74, 56, 59, 16, 13, 6, 21, 25, 48, 85, 25, 5, 28, 74, 37, 40, 73, 16, 37, 62, 30, 30, 18, 63, 55, 84, 64, 49, 46, 82, 44};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0340909090909092;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 63;
    vector<int> personA = {31, 28};
    vector<int> personB = {14, 27};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06349206349206349;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 88;
    vector<int> personA = {69, 60, 82, 40, 39, 53, 39, 22, 15, 46, 14, 87, 4, 5, 58, 3, 69, 19, 9, 53, 8, 11, 2};
    vector<int> personB = {32, 56, 2, 75, 44, 9, 71, 58, 52, 59, 43, 49, 50, 10, 40, 15, 85, 46, 33, 37, 63, 57, 64};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.625;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 78;
    vector<int> personA = {70, 14, 35, 13, 28, 17, 22, 22, 11, 40, 29, 33, 28, 29, 76, 26, 63, 45, 66, 51, 22, 30, 74, 19};
    vector<int> personB = {47, 30, 57, 54, 51, 44, 39, 19, 63, 21, 70, 6, 30, 30, 22, 61, 0, 40, 72, 42, 72, 9, 16, 5};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9487179487179487;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 28;
    vector<int> personA = {14, 20, 10, 7, 11, 1, 12, 10, 5, 0, 27, 24, 20, 4, 7, 22, 25, 25, 19, 13, 20, 11, 5, 1, 21, 0, 20, 19, 10, 17};
    vector<int> personB = {4, 9, 12, 8, 4, 27, 2, 12, 25, 21, 21, 18, 13, 6, 15, 23, 15, 24, 7, 21, 17, 18, 27, 15, 0, 15, 14, 6, 0, 0};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 5.035714285714286;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 22;
    vector<int> personA = {9, 21, 15, 8, 15, 9, 8, 16, 1, 6, 8, 21, 18, 15, 9, 11, 17, 5, 14, 13, 21};
    vector<int> personB = {13, 17, 13, 16, 17, 16, 14, 13, 19, 15, 1, 19, 17, 17, 16, 0, 5, 2, 20, 11, 16};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 4.045454545454546;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 10;
    vector<int> personA = {5, 3, 2, 3, 8, 5, 2, 5, 4, 1, 5, 8, 4, 0, 6, 3};
    vector<int> personB = {2, 2, 9, 5, 3, 9, 9, 4, 9, 0, 7, 5, 3, 5, 1, 8};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 85;
    vector<int> personA = {25, 52, 13, 1, 81, 47, 19, 60, 45, 33, 81, 38, 84, 76, 68, 24, 16, 78, 12, 18, 52, 20, 69, 34, 8, 56, 6, 54, 42, 49, 11, 82, 9, 10, 31, 62, 54, 52, 8, 28, 64, 84};
    vector<int> personB = {51, 37, 30, 70, 54, 55, 6, 58, 9, 54, 34, 82, 19, 20, 6, 71, 77, 23, 30, 50, 78, 70, 78, 69, 76, 29, 11, 80, 7, 25, 27, 43, 63, 25, 12, 72, 80, 24, 51, 58, 33, 75};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4941176470588236;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 59;
    vector<int> personA = {23, 8, 54, 4, 12, 3, 22, 27, 57, 38, 51, 37, 17, 11, 58, 13, 41, 54, 44, 55, 43, 13, 20, 2, 21, 51, 51, 48, 50, 28};
    vector<int> personB = {52, 27, 41, 26, 45, 55, 56, 34, 55, 4, 40, 31, 32, 10, 32, 56, 25, 21, 48, 7, 1, 42, 0, 57, 7, 18, 57, 28, 45, 44};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4406779661016949;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 3;
    vector<int> personA = {0, 0, 2, 0, 0, 0, 0, 1, 1, 1, 2, 2, 0, 2, 2, 0, 2, 0, 2, 0, 0};
    vector<int> personB = {1, 1, 0, 2, 2, 2, 1, 2, 2, 0, 0, 0, 1, 0, 1, 2, 1, 2, 0, 1, 2};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 88;
    vector<int> personA = {3, 33, 47, 57, 29, 5, 66, 54, 59, 44, 38, 81, 40, 33, 32, 9, 64, 51, 44, 17, 73, 55, 10, 12, 17, 28, 39, 10, 32, 87, 74, 28, 79, 0, 36, 21, 65, 5, 83, 9, 65, 6, 65, 58, 20, 17, 64, 25, 16, 31};
    vector<int> personB = {65, 10, 38, 38, 6, 43, 20, 24, 28, 30, 5, 52, 61, 12, 69, 12, 20, 29, 8, 23, 74, 46, 18, 23, 57, 58, 5, 21, 79, 76, 30, 12, 78, 83, 72, 67, 66, 55, 78, 87, 18, 75, 67, 1, 50, 44, 84, 83, 32, 57};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 2.147727272727273;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 5;
    vector<int> personA = {3, 0, 0, 2, 1, 1, 3, 2, 3, 3, 1, 3, 1, 1, 4, 1, 0, 1, 3, 2, 0, 1, 0, 3};
    vector<int> personB = {1, 2, 2, 3, 4, 0, 1, 3, 2, 2, 4, 2, 3, 4, 3, 3, 3, 2, 2, 1, 3, 3, 1, 2};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 61;
    vector<int> personA = {28, 25, 14, 47, 12, 40, 60, 59};
    vector<int> personB = {29, 4, 4, 19, 0, 16, 38, 0};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.29508196721311475;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 51;
    vector<int> personA = {22, 16, 12, 37, 7, 8, 45, 6, 6, 23, 10, 37, 40, 33, 35, 13, 5, 41, 17, 19, 47, 2, 24, 24, 13};
    vector<int> personB = {9, 42, 14, 0, 49, 7, 37, 45, 42, 2, 45, 11, 26, 11, 29, 34, 37, 38, 12, 14, 22, 38, 9, 1, 23};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5490196078431373;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 92;
    vector<int> personA = {14, 57, 4, 19, 14, 86, 18, 13, 54, 46, 37, 60, 36, 51, 40, 42, 68, 51, 62, 11, 21, 0, 4, 66, 34, 4, 24, 29, 87, 62, 85, 65, 59, 5};
    vector<int> personB = {15, 41, 11, 51, 25, 40, 65, 16, 45, 77, 41, 72, 20, 79, 80, 62, 83, 89, 71, 7, 25, 31, 30, 7, 75, 26, 69, 54, 40, 53, 33, 13, 20, 40};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0217391304347827;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 58;
    vector<int> personA = {56, 43, 13};
    vector<int> personB = {55, 24, 15};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10344827586206896;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 94;
    vector<int> personA = {24, 54, 73, 75, 49, 14, 2, 80, 48, 9, 13, 41, 78, 89, 68, 40, 4, 1, 16, 9, 41, 57, 26, 19};
    vector<int> personB = {87, 51, 42, 92, 66, 56, 42, 20, 6, 4, 72, 76, 51, 42, 7, 71, 17, 11, 83, 88, 67, 11, 88, 15};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6170212765957447;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 92;
    vector<int> personA = {70, 63, 84, 59, 10, 58, 52, 13, 81, 54, 11, 49, 11, 51, 48, 3, 30, 43, 63, 44, 89, 60, 66, 85, 17, 75, 79, 26};
    vector<int> personB = {6, 91, 48, 35, 58, 14, 44, 49, 80, 52, 13, 68, 15, 18, 62, 39, 24, 34, 7, 41, 10, 59, 75, 47, 20, 80, 45, 78};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.75;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 8;
    vector<int> personA = {2, 2, 6, 1, 2, 7, 3, 1, 5, 3, 7, 5, 4, 4, 1, 0, 0, 7, 1, 1, 7, 5, 6, 5, 4, 5, 2, 6, 3, 3, 2, 1, 5};
    vector<int> personB = {7, 1, 7, 4, 1, 1, 2, 4, 4, 1, 3, 3, 0, 1, 5, 6, 4, 6, 4, 7, 3, 0, 2, 3, 7, 1, 0, 0, 4, 7, 0, 0, 6};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 40;
    vector<int> personA = {8, 7, 23, 0, 29, 24, 0, 39, 12, 7, 31, 32, 38, 25, 32, 16, 3, 8, 31, 5, 4, 34, 18, 30, 15, 30, 28, 12, 0};
    vector<int> personB = {17, 16, 8, 6, 8, 19, 13, 12, 39, 21, 6, 17, 33, 0, 11, 34, 9, 2, 32, 6, 0, 24, 39, 27, 31, 36, 0, 31, 32};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 2.775;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 8;
    vector<int> personA = {1, 0, 3, 3, 1, 0, 4, 6, 5, 4, 5, 3, 6, 3, 2, 4, 3, 1, 1, 0, 4, 1, 4, 1, 1, 7, 5, 2, 4, 5, 2, 1, 4, 4, 1, 1};
    vector<int> personB = {3, 5, 5, 2, 2, 3, 1, 1, 4, 5, 4, 4, 1, 2, 7, 7, 4, 5, 3, 4, 6, 5, 6, 6, 4, 6, 7, 6, 7, 4, 0, 2, 3, 0, 4, 4};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 91;
    vector<int> personA = {36, 70};
    vector<int> personB = {75, 31};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04395604395604396;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 90;
    vector<int> personA = {57, 10, 64, 70, 55, 73, 78, 24, 27, 29, 67, 36, 45, 58, 12, 7, 21, 23, 33, 70, 75, 49, 8, 84, 77, 25, 89, 40, 43, 39, 68, 75};
    vector<int> personB = {71, 17, 46, 71, 18, 7, 44, 0, 3, 31, 30, 17, 63, 12, 38, 70, 77, 20, 26, 4, 3, 68, 57, 49, 29, 34, 87, 89, 16, 72, 28, 17};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9444444444444444;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 5;
    vector<int> personA = {0, 3, 4, 3, 0, 1, 4, 2, 0, 3, 4, 4, 2, 1, 3, 0, 1, 3, 1, 1, 2, 4, 3, 4, 4, 2, 0, 2, 4, 1, 1, 3, 0, 2, 3, 1, 2, 0, 0, 4, 4, 2};
    vector<int> personB = {2, 2, 0, 2, 3, 4, 0, 1, 1, 1, 2, 0, 1, 4, 0, 1, 4, 0, 2, 3, 1, 1, 0, 3, 2, 0, 4, 3, 3, 2, 3, 1, 4, 1, 2, 0, 1, 2, 3, 0, 0, 0};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 88;
    vector<int> personA = {21, 54, 25, 9, 66, 28, 66, 42, 12, 44, 41, 17, 65, 28, 34, 33, 65, 62, 64, 40, 25, 36, 57, 67, 20};
    vector<int> personB = {23, 20, 69, 31, 40, 55, 20, 52, 70, 82, 69, 81, 50, 56, 15, 73, 39, 6, 23, 68, 87, 28, 82, 27, 25};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.75;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 36;
    vector<int> personA = {19, 26};
    vector<int> personB = {20, 22};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1111111111111111;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 81;
    vector<int> personA = {59, 10, 6, 76, 55, 76, 8, 16, 31, 79, 31, 67, 22, 62, 35, 1, 74, 2, 17, 69, 42, 67, 31, 48, 37, 20, 60, 39, 71, 7, 70, 15, 63, 14, 47, 30, 15, 24, 57, 58, 15, 21, 27, 1};
    vector<int> personB = {27, 16, 61, 1, 50, 80, 76, 7, 67, 66, 59, 32, 73, 22, 27, 18, 30, 28, 44, 39, 54, 50, 37, 14, 33, 22, 73, 80, 56, 59, 44, 65, 6, 41, 41, 8, 72, 20, 24, 33, 39, 77, 75, 74};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.876543209876543;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 86;
    vector<int> personA = {73, 8, 72, 20, 53, 30, 29};
    vector<int> personB = {40, 57, 27, 25, 80, 50, 57};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1744186046511628;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 95;
    vector<int> personA = {17, 22, 33, 80, 10, 18, 46, 30, 25, 88, 90, 8, 6, 67, 74, 91, 71, 63, 12, 12, 3, 7, 46, 66};
    vector<int> personB = {60, 1, 83, 91, 16, 78, 75, 31, 53, 87, 1, 75, 44, 22, 6, 86, 0, 93, 92, 66, 7, 51, 80, 52};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6210526315789474;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 34;
    vector<int> personA = {28, 22, 8, 7, 19, 10, 4, 2, 18, 10, 13, 19, 23, 19, 22, 28, 26, 24, 31, 6, 21, 26, 22, 4};
    vector<int> personB = {13, 26, 24, 12, 0, 1, 33, 8, 31, 32, 31, 7, 15, 25, 9, 12, 20, 16, 22, 7, 23, 24, 26, 5};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4411764705882355;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 87;
    vector<int> personA = {81, 43, 28, 9, 71, 46, 51, 27, 4, 84, 79, 55, 44, 58};
    vector<int> personB = {16, 1, 40, 45, 38, 74, 65, 16, 10, 75, 17, 18, 48, 83};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 66;
    vector<int> personA = {19, 24, 7, 61, 47, 11, 6, 12, 14};
    vector<int> personB = {62, 17, 54, 48, 7, 1, 3, 27, 30};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2878787878787879;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 20;
    vector<int> personA = {16, 16, 10, 5, 0, 7, 2, 15, 16, 18, 0, 13, 16, 3, 0, 10, 14, 4, 0, 10, 12, 17, 19, 4, 7, 14, 11, 14, 15, 15, 2, 7, 11, 16, 8, 13, 19, 11, 10};
    vector<int> personB = {15, 10, 5, 18, 9, 19, 10, 7, 18, 16, 15, 4, 14, 14, 2, 4, 6, 19, 7, 2, 0, 6, 9, 7, 13, 6, 16, 17, 3, 3, 0, 13, 19, 1, 7, 0, 12, 12, 11};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 9.85;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 77;
    vector<int> personA = {34, 53, 11, 63, 29, 48, 73, 29, 69, 34, 24, 29, 54, 11, 29, 61, 59, 75, 14, 60, 47, 13, 38, 73};
    vector<int> personB = {8, 18, 58, 27, 31, 31, 47, 54, 16, 44, 54, 24, 23, 59, 9, 34, 51, 31, 63, 73, 49, 20, 70, 26};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9090909090909091;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 73;
    vector<int> personA = {37, 55, 21, 65, 8, 47};
    vector<int> personB = {44, 22, 60, 69, 4, 4};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1780821917808219;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 41;
    vector<int> personA = {37, 36, 18, 11, 11, 21, 32, 35, 34, 2, 12, 6, 6, 12, 26, 6, 34, 35, 10, 38, 25, 16, 21, 7, 39, 22, 5, 23, 32, 30};
    vector<int> personB = {9, 35, 40, 28, 22, 40, 5, 36, 29, 14, 27, 4, 34, 19, 31, 10, 9, 4, 13, 30, 22, 35, 33, 24, 30, 21, 27, 33, 27, 14};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3902439024390243;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 2;
    vector<int> personA = {0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1};
    vector<int> personB = {1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 57;
    vector<int> personA = {45, 0, 6, 5, 13, 14, 5, 21, 53, 18, 18, 25, 19, 20, 37, 46, 3, 29, 28, 29, 7, 32, 29, 26, 37, 36, 39, 11, 26, 54, 17, 53, 7, 23};
    vector<int> personB = {10, 24, 13, 44, 6, 1, 1, 25, 33, 34, 17, 24, 29, 18, 16, 37, 54, 12, 54, 56, 22, 45, 9, 9, 7, 1, 54, 47, 55, 49, 56, 48, 14, 3};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 14;
    vector<int> personA = {2, 5, 4, 2, 2, 8, 13, 0, 3, 12, 1, 9, 4, 8, 11, 10, 3, 5, 2, 11, 1, 8, 7, 5, 11, 7, 1, 6};
    vector<int> personB = {11, 7, 3, 3, 12, 11, 7, 4, 1, 5, 12, 12, 7, 0, 1, 7, 5, 0, 11, 4, 5, 0, 12, 13, 0, 3, 0, 8};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 9.642857142857142;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 18;
    vector<int> personA = {14, 15, 8, 13, 3, 8, 4, 13, 11, 10, 16, 4, 9, 14, 2, 7, 14, 1, 1, 13, 6, 16, 14, 12};
    vector<int> personB = {15, 1, 17, 16, 14, 17, 16, 7, 8, 9, 10, 1, 4, 2, 1, 13, 5, 8, 8, 17, 1, 6, 16, 9};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 6.444444444444445;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 62;
    vector<int> personA = {23, 12, 28, 43, 1, 10, 17, 61, 17};
    vector<int> personB = {61, 3, 5, 18, 22, 24, 29, 8, 10};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3387096774193548;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 94;
    vector<int> personA = {33, 56, 67, 30, 93, 66, 65, 7, 25, 2, 5, 83, 30, 37, 57, 10, 34, 14, 71, 57, 44, 19, 50, 41, 36, 83, 6, 44, 27, 10, 58, 79};
    vector<int> personB = {18, 10, 84, 6, 70, 4, 67, 62, 15, 38, 85, 90, 51, 83, 10, 66, 76, 93, 21, 84, 22, 46, 10, 28, 6, 29, 50, 20, 23, 68, 45, 91};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0106382978723405;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 94;
    vector<int> personA = {52, 13, 6, 21, 70, 21, 34, 69, 62, 5, 12, 3, 22, 66, 69, 36, 42, 89, 3, 39, 67, 48, 37, 4, 65, 91, 5, 49, 80, 15, 83, 24, 78, 17, 50, 19, 61, 17, 58, 54, 8, 16};
    vector<int> personB = {25, 15, 59, 53, 34, 16, 91, 92, 45, 22, 86, 80, 46, 88, 6, 38, 43, 87, 56, 11, 74, 45, 79, 75, 86, 53, 60, 3, 68, 28, 30, 12, 37, 4, 6, 73, 0, 87, 89, 68, 40, 54};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2446808510638299;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 23;
    vector<int> personA = {19, 6, 22, 7, 14, 18, 10, 13, 13, 4, 15, 16, 11, 18, 9, 7, 20, 20, 13, 13, 15, 1, 11, 18, 16, 13, 15, 15, 15, 17, 4, 16, 1, 16, 11, 22, 11, 21, 7, 16, 5, 6, 4};
    vector<int> personB = {9, 5, 18, 8, 5, 4, 14, 21, 6, 3, 10, 13, 9, 9, 7, 4, 16, 11, 3, 11, 14, 4, 18, 3, 11, 19, 11, 17, 9, 13, 5, 5, 14, 5, 8, 13, 16, 22, 15, 0, 22, 9, 9};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 14.217391304347826;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 63;
    vector<int> personA = {51, 45, 10, 17, 8, 21, 4, 30, 3, 44, 38, 25, 26, 6, 44, 35, 22, 30, 13, 31, 41, 18, 36, 3, 44, 43, 50, 31, 50, 50, 16, 1, 36, 57, 38};
    vector<int> personB = {1, 6, 54, 35, 34, 55, 57, 51, 4, 24, 13, 41, 28, 26, 8, 39, 18, 27, 56, 43, 11, 44, 6, 38, 45, 36, 0, 12, 56, 1, 54, 31, 55, 2, 7};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0952380952380953;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 40;
    vector<int> personA = {15, 7, 24, 20, 25, 18, 5};
    vector<int> personB = {12, 13, 17, 28, 5, 7, 39};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 90;
    vector<int> personA = {23, 48, 60, 9, 18, 15, 32, 70, 42, 31, 8};
    vector<int> personB = {34, 20, 17, 49, 10, 37, 20, 7, 80, 44, 37};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.26666666666666666;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 72;
    vector<int> personA = {0, 49, 5, 30, 32, 43, 56, 57, 8, 36, 5, 34, 36, 60, 4, 62, 11, 31, 24, 65, 39, 33, 17, 56, 34, 62, 44};
    vector<int> personB = {20, 5, 21, 7, 18, 4, 13, 59, 68, 37, 14, 26, 53, 44, 35, 8, 41, 14, 11, 58, 8, 51, 11, 66, 41, 29, 18};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0416666666666667;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 96;
    vector<int> personA = {32, 44, 25, 51, 34, 69, 28, 16, 35, 73, 18, 89, 93, 46, 42, 22, 81, 10, 66, 59, 82, 38, 88, 44, 75, 57, 3, 60, 91, 91, 7, 1, 50, 35, 49, 32, 90, 82, 16, 29, 39, 94, 24};
    vector<int> personB = {5, 24, 61, 26, 70, 28, 58, 89, 77, 75, 54, 54, 36, 20, 26, 49, 73, 19, 10, 74, 92, 81, 30, 0, 36, 82, 11, 78, 4, 17, 80, 73, 35, 77, 69, 3, 20, 79, 26, 54, 30, 91, 77};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.25;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 10;
    vector<int> personA = {1, 0, 1, 1, 1, 5, 7, 5, 0, 1, 2, 0, 0, 8, 4, 2, 9, 8, 7, 3, 0, 3, 8, 8, 2, 1, 9};
    vector<int> personB = {9, 6, 4, 2, 9, 1, 0, 7, 9, 5, 0, 1, 4, 2, 1, 7, 7, 1, 3, 4, 2, 0, 2, 4, 8, 7, 6};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 8.6;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 6;
    vector<int> personA = {0, 4, 2, 2, 0, 0, 2, 0, 1, 5, 2, 0, 4, 4, 4};
    vector<int> personB = {5, 1, 0, 0, 4, 5, 5, 4, 4, 1, 4, 2, 2, 2, 1};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3333333333333335;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 42;
    vector<int> personA = {32, 40, 35, 11, 21, 24, 0, 1, 17, 13, 39, 32, 12, 3, 21, 16, 5, 8, 36, 1, 27, 40, 2, 14, 39, 37, 25, 40, 7, 12, 40, 15, 5, 23, 31, 31, 20};
    vector<int> personB = {16, 25, 18, 20, 20, 33, 12, 31, 4, 31, 11, 9, 20, 7, 25, 40, 12, 6, 27, 26, 22, 0, 38, 19, 29, 38, 11, 34, 0, 26, 23, 24, 20, 20, 30, 41, 40};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3333333333333335;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 96;
    vector<int> personA = {81, 54, 9, 12, 76, 30, 24, 50, 32, 91};
    vector<int> personB = {38, 80, 14, 19, 11, 64, 84, 7, 46, 53};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20833333333333334;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 78;
    vector<int> personA = {53, 48, 77, 28, 31, 75, 16, 64, 42, 52, 13, 3, 55, 13, 9, 5, 47, 65, 9, 17, 57, 60, 49, 45, 47};
    vector<int> personB = {20, 58, 48, 77, 60, 5, 72, 67, 50, 21, 58, 28, 19, 16, 52, 15, 40, 16, 25, 40, 60, 76, 46, 44, 64};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9487179487179487;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 67;
    vector<int> personA = {9, 15, 38, 17, 39, 19, 7, 58, 31, 10, 15, 61, 52, 34, 66, 47, 8, 9, 25, 58, 62, 31, 50, 14, 15, 39, 2, 10, 53, 41, 28, 52, 9, 32, 60, 26, 24, 39, 63, 20, 62, 50, 3, 21, 28, 61};
    vector<int> personB = {27, 20, 50, 41, 55, 32, 16, 20, 19, 47, 63, 46, 21, 12, 9, 37, 38, 31, 6, 51, 18, 12, 41, 41, 44, 34, 25, 13, 16, 24, 18, 60, 36, 11, 15, 17, 59, 4, 13, 21, 48, 61, 57, 57, 15, 25};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6865671641791047;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 80;
    vector<int> personA = {60, 11, 6, 76, 52, 59, 55, 49, 4, 14, 9, 42, 7, 6, 55, 30, 74, 70, 31, 4, 33, 22, 43, 37, 49, 38, 47, 29, 17, 13, 76, 32, 66, 73, 60, 4, 50, 6, 29, 41, 51, 22, 0, 19, 40, 36, 74, 40, 17};
    vector<int> personB = {19, 69, 8, 66, 44, 69, 40, 58, 71, 67, 61, 36, 33, 69, 57, 32, 70, 56, 52, 60, 16, 23, 66, 76, 17, 23, 22, 18, 22, 11, 65, 13, 48, 10, 20, 34, 35, 33, 0, 68, 18, 28, 54, 3, 26, 40, 12, 63, 27};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0125;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 15;
    vector<int> personA = {12, 1, 6, 11, 12, 13, 5, 11, 6, 8, 6, 10, 7, 13, 2, 5, 13, 5, 7, 3, 14, 14, 6, 1, 10, 12, 14, 6, 11, 10, 6};
    vector<int> personB = {5, 12, 14, 13, 14, 9, 3, 8, 13, 1, 13, 12, 8, 8, 8, 12, 14, 10, 10, 2, 9, 5, 13, 9, 8, 14, 1, 2, 7, 4, 12};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 10.333333333333334;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 78;
    vector<int> personA = {52, 57, 38, 58, 26, 11, 13, 18, 57, 52, 15, 28, 11, 41, 52, 40, 73, 3, 63, 8, 1};
    vector<int> personB = {39, 76, 10, 18, 14, 42, 23, 21, 63, 20, 11, 66, 14, 48, 37, 26, 13, 58, 57, 21, 73};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.717948717948718;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 15;
    vector<int> personA = {4, 14, 1, 2, 13, 6, 14, 13, 2, 2, 8, 14, 6, 7, 10, 14, 7, 4, 3, 13, 13, 0, 0, 9, 2, 0, 7, 3, 11, 14, 9, 2, 0, 1, 1, 9, 5, 10, 0, 5, 4, 7, 8};
    vector<int> personB = {5, 3, 6, 14, 0, 4, 7, 6, 10, 5, 7, 1, 12, 9, 12, 7, 11, 7, 12, 11, 12, 1, 6, 5, 11, 12, 1, 8, 14, 9, 10, 11, 1, 9, 5, 7, 9, 0, 12, 4, 1, 14, 10};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 13.466666666666667;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 80;
    vector<int> personA = {64, 7, 17, 20, 31, 20, 10, 3, 1, 68, 31};
    vector<int> personB = {36, 37, 18, 29, 71, 57, 30, 8, 24, 67, 57};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.325;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 50;
    vector<int> personA = {32, 39, 20, 36, 17, 29, 14};
    vector<int> personB = {20, 41, 33, 44, 23, 12, 17};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.32;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 26;
    vector<int> personA = {23, 7, 14, 0, 18, 7, 1, 2, 8};
    vector<int> personB = {9, 15, 20, 25, 21, 6, 2, 7, 2};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 44;
    vector<int> personA = {25, 32, 28, 17, 42, 28, 9, 37, 34, 41, 31, 27, 40, 43, 30, 15, 39, 23, 7, 32, 27, 19, 36, 37, 41, 24, 10, 42, 35, 32, 5, 17, 14, 11, 9, 26, 17, 41, 37};
    vector<int> personB = {9, 10, 16, 10, 25, 9, 15, 26, 6, 13, 15, 32, 26, 13, 36, 4, 42, 21, 15, 33, 11, 23, 33, 8, 42, 5, 33, 32, 15, 36, 12, 27, 15, 15, 7, 12, 43, 11, 12};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 4.386363636363637;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 64;
    vector<int> personA = {52, 20, 27, 37, 49, 29, 28, 39, 19, 14, 46, 47, 38, 53, 37, 30, 28, 33, 2, 22, 18, 40, 2, 25, 13, 36, 41, 21, 49, 5, 8, 14, 28, 26, 35, 57, 53, 27, 33, 26, 54, 20, 39, 39, 6, 12, 45, 34};
    vector<int> personB = {15, 61, 18, 20, 60, 57, 32, 42, 37, 49, 43, 4, 51, 15, 26, 11, 1, 30, 5, 35, 36, 62, 48, 4, 29, 48, 62, 20, 41, 30, 12, 29, 0, 6, 18, 20, 14, 33, 36, 41, 3, 32, 2, 41, 1, 40, 19, 54};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 3.171875;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 35;
    vector<int> personA = {26, 11, 2, 31, 24, 6, 2, 12, 31, 30, 12, 1, 8, 15, 29, 0, 26, 19, 16, 19, 15, 14, 28, 3, 22, 20, 6, 27, 7, 18, 16, 8, 21, 18, 21, 32, 8, 25, 11, 13, 1};
    vector<int> personB = {21, 12, 31, 2, 19, 22, 24, 13, 0, 12, 28, 29, 33, 0, 20, 21, 17, 3, 30, 0, 2, 4, 17, 13, 18, 24, 9, 25, 4, 31, 34, 21, 29, 21, 28, 22, 15, 17, 16, 16, 26};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 5.685714285714286;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 27;
    vector<int> personA = {5, 5, 22, 5, 4, 25, 5, 7, 20, 19, 22, 6, 17, 26, 23, 4, 18, 1, 16, 11, 10, 11, 7, 4, 16, 7, 5, 21, 6, 15, 13};
    vector<int> personB = {11, 16, 20, 10, 11, 14, 20, 5, 21, 20, 25, 14, 19, 6, 4, 21, 19, 20, 14, 9, 3, 5, 4, 22, 1, 25, 22, 15, 22, 0, 9};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 7.148148148148148;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 73;
    vector<int> personA = {35, 72, 5, 37, 19, 22, 42, 11, 65, 9, 72, 8, 36, 45, 19, 3, 28, 21, 29, 50, 31, 29, 37, 18, 35, 27, 51, 47, 17, 70, 3, 59, 11, 11, 20, 33, 2, 27};
    vector<int> personB = {3, 29, 57, 4, 34, 48, 12, 15, 1, 65, 20, 25, 27, 58, 25, 64, 46, 47, 44, 59, 60, 38, 53, 55, 16, 31, 43, 52, 22, 28, 49, 21, 54, 4, 71, 63, 25, 15};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4794520547945205;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 72;
    vector<int> personA = {59, 3, 28, 71, 63, 21, 45, 68, 42, 64, 48};
    vector<int> personB = {54, 68, 51, 20, 23, 49, 62, 8, 48, 55, 7};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 100;
    vector<int> personA = {95, 96, 42, 94, 38, 18, 33, 84, 13, 26, 0, 47, 55, 19, 42, 87, 52, 29, 55, 26, 87, 89, 73, 23, 94, 44, 7, 12, 21, 9, 99, 10, 97, 1, 73, 6, 30, 21, 62, 1, 2};
    vector<int> personB = {68, 12, 31, 62, 94, 99, 87, 55, 71, 49, 18, 2, 97, 17, 19, 11, 77, 78, 46, 48, 0, 17, 91, 55, 69, 40, 30, 39, 36, 98, 80, 19, 38, 99, 98, 61, 83, 19, 29, 60, 43};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.26;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 30;
    vector<int> personA = {29, 6, 22, 18, 29, 0, 20, 4, 1, 14, 11, 13, 10, 3, 19, 17, 26, 12};
    vector<int> personB = {20, 2, 13, 6, 26, 28, 5, 2, 26, 1, 25, 11, 3, 12, 24, 27, 18, 27};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8666666666666667;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 44;
    vector<int> personA = {0, 24, 37, 30, 27, 3, 0, 16, 42, 19, 14, 2, 12, 30, 33, 14, 38};
    vector<int> personB = {19, 43, 36, 20, 14, 12, 43, 20, 18, 15, 7, 22, 22, 37, 0, 33, 5};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1818181818181819;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 11;
    vector<int> personA = {9, 7, 2, 3, 7, 2};
    vector<int> personB = {10, 1, 3, 10, 9, 9};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8181818181818181;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 47;
    vector<int> personA = {9, 6, 11, 35, 11, 8, 37, 46, 35, 43, 33, 30, 6, 32, 45, 13, 37, 9, 37, 11, 22, 32, 14, 17, 32, 17, 7, 37, 40, 20, 18, 28, 10, 23, 31, 6, 21, 27, 17, 29, 5, 42, 11, 44, 36, 16, 33};
    vector<int> personB = {36, 33, 18, 8, 34, 19, 22, 29, 27, 9, 30, 10, 34, 26, 9, 29, 0, 33, 6, 3, 36, 1, 22, 1, 31, 25, 11, 38, 42, 7, 42, 20, 45, 30, 2, 25, 46, 33, 3, 10, 23, 30, 8, 42, 2, 7, 46};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 5.340425531914893;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 11;
    vector<int> personA = {2, 8, 4, 0, 1, 0, 9, 3, 6, 6, 3, 6, 4, 1, 0, 2, 9, 3};
    vector<int> personB = {4, 1, 9, 1, 9, 1, 8, 6, 5, 7, 4, 9, 7, 5, 8, 4, 5, 2};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 6.2727272727272725;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 74;
    vector<int> personA = {35, 14, 54, 44, 29, 16, 6, 2, 33, 62, 58, 15, 14, 20, 65, 6, 49, 35, 29, 17, 61, 68, 18, 5, 27, 2, 57, 21, 69, 40, 43, 9, 12, 23, 24, 3, 37, 0, 37, 67, 52, 58, 12, 67, 66, 72, 21, 53, 47};
    vector<int> personB = {19, 72, 63, 16, 41, 22, 3, 49, 49, 73, 52, 8, 6, 14, 70, 26, 67, 57, 25, 1, 73, 42, 64, 40, 60, 3, 63, 37, 60, 13, 28, 56, 9, 5, 12, 27, 21, 28, 19, 11, 7, 45, 35, 7, 59, 12, 63, 33, 69};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 2.175675675675676;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 41;
    vector<int> personA = {19, 33, 15, 5, 16, 33, 20, 27, 8};
    vector<int> personB = {5, 40, 3, 17, 14, 25, 33, 5, 24};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5853658536585366;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 57;
    vector<int> personA = {35, 50, 9, 55, 5, 0, 30, 4, 56, 26, 39, 50, 52, 44, 41, 23, 15, 14, 48, 2, 41, 7, 23};
    vector<int> personB = {33, 21, 27, 48, 20, 19, 23, 8, 5, 56, 7, 12, 1, 12, 24, 39, 44, 32, 51, 54, 37, 15, 26};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2280701754385965;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 88;
    vector<int> personA = {64, 25, 70, 70, 45, 25, 60, 19, 5, 58, 70, 67, 50, 32, 9, 82, 3, 36, 32, 84, 34, 6, 81};
    vector<int> personB = {15, 77, 75, 61, 77, 9, 31, 41, 33, 56, 66, 28, 60, 83, 5, 28, 4, 4, 64, 0, 49, 41, 68};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6818181818181818;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 13;
    vector<int> personA = {2, 10, 11, 12, 4, 11, 11, 10, 8, 10};
    vector<int> personB = {1, 4, 5, 8, 11, 10, 0, 1, 11, 9};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 5;
    vector<int> personA = {1};
    vector<int> personB = {0};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 30;
    vector<int> personA = {21, 2, 8, 14, 20, 15, 27, 21, 29, 7, 8, 8, 11, 10, 3, 21, 25, 6, 19, 27, 15, 1, 12, 14, 0, 13, 11, 27, 4, 4, 6, 20, 1, 26, 2};
    vector<int> personB = {22, 17, 13, 11, 21, 24, 19, 28, 20, 0, 6, 29, 2, 16, 14, 26, 17, 20, 27, 13, 16, 16, 13, 21, 9, 25, 25, 8, 17, 1, 12, 11, 27, 20, 3};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 60;
    vector<int> personA = {34, 9, 13, 34, 54, 0, 22, 53, 56, 39};
    vector<int> personB = {36, 15, 39, 36, 23, 35, 59, 17, 20, 15};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 78;
    vector<int> personA = {23, 10, 62, 38, 5, 5};
    vector<int> personB = {17, 38, 1, 42, 6, 52};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1794871794871795;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 75;
    vector<int> personA = {18, 67, 41, 18, 27, 9, 42, 46, 34, 67, 38, 12, 33, 23, 24, 24, 3, 45, 30, 7, 70, 52, 37, 35, 8, 50, 40, 67, 71, 4, 71, 15, 10, 43, 11, 33, 66, 14, 15, 53};
    vector<int> personB = {31, 10, 42, 52, 1, 59, 70, 51, 2, 36, 62, 32, 50, 3, 14, 47, 42, 3, 66, 51, 49, 64, 73, 14, 37, 72, 69, 32, 59, 12, 4, 26, 18, 65, 14, 12, 29, 26, 31, 6};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.64;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 26;
    vector<int> personA = {0, 6, 2, 17, 10, 22, 16, 7, 7, 7, 2, 22, 25, 6, 20, 23, 0, 16, 16, 4, 11, 18, 16, 9, 24, 7, 22, 7, 20, 15, 14, 22, 8, 6};
    vector<int> personB = {22, 21, 7, 19, 11, 0, 3, 15, 21, 12, 17, 17, 19, 20, 5, 19, 5, 5, 23, 10, 16, 5, 2, 12, 14, 25, 24, 2, 0, 1, 6, 20, 13, 2};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 7.423076923076923;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 37;
    vector<int> personA = {12, 6, 29, 18, 3, 5, 35, 1, 22, 18, 1, 14, 11, 25, 18, 3, 14, 12, 8, 18, 22, 28, 19, 29, 0, 21, 27, 30, 5, 33, 12, 12, 36, 3, 9, 17, 6};
    vector<int> personB = {6, 12, 33, 15, 7, 6, 33, 34, 5, 3, 25, 13, 18, 0, 30, 24, 12, 2, 30, 28, 6, 22, 18, 19, 21, 25, 28, 36, 21, 12, 14, 1, 5, 16, 35, 26, 5};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 5.45945945945946;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 62;
    vector<int> personA = {14, 48, 33, 4, 38, 57, 29, 34, 7, 33, 7, 57, 47, 43, 46, 15, 11};
    vector<int> personB = {54, 3, 20, 39, 22, 50, 3, 59, 38, 6, 58, 25, 1, 28, 23, 24, 2};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6451612903225806;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 13;
    vector<int> personA = {7, 7, 4, 9, 1, 4, 12, 9, 3, 9, 11, 6};
    vector<int> personB = {6, 0, 11, 0, 6, 12, 3, 3, 4, 6, 10, 3};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4615384615384617;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 25;
    vector<int> personA = {14, 14, 16, 4, 14, 16, 2, 16, 8, 15, 17, 17, 3, 3, 19, 17, 20, 4, 24, 8};
    vector<int> personB = {16, 2, 23, 16, 11, 8, 5, 19, 15, 20, 19, 18, 14, 12, 22, 9, 0, 7, 23, 10};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 4.44;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 5;
    vector<int> personA = {0, 1, 2, 1, 3, 0};
    vector<int> personB = {4, 0, 1, 3, 0, 4};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 100;
    vector<int> personA = {52, 19, 52, 19};
    vector<int> personB = {19, 52, 19, 52};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 50;
    vector<int> personA = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> personB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 4;
    vector<int> personA = {1, 2, 1};
    vector<int> personB = {2, 3, 3};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 5;
    vector<int> personA = {1, 2, 3, 2, 3, 1, 0, 4};
    vector<int> personB = {0, 0, 0, 0, 0, 0, 1, 0};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 50;
    vector<int> personA = {4, 7, 9, 11, 7, 1, 0, 1, 1, 0};
    vector<int> personB = {12, 8, 12, 12, 12, 2, 1, 2, 3, 1};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.56;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 50;
    vector<int> personA = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    vector<int> personB = {2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 5;
    vector<int> personA = {1, 2, 3, 3};
    vector<int> personB = {0, 0, 4, 0};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 5;
    vector<int> personA = {0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> personB = {1, 2, 3, 1, 4, 3, 2, 1};
    Party* pObj = new Party();
    clock_t start = clock();
    double result = pObj->averageNames(n, personA, personB);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13298470&rd=7997&pm=4772
********************************************************************************
/*
Dumitriu Vlad, LIIS, Romania
vladut.mail@gmail.com
http://vladut.lx.ro/
""i hear and i forget;
 i see and i remeber;
 do and understand;""
*/
 
#include <algorithm>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <math.h>
#include <cctype>
#include <cstdlib>
#include <list>
#include <regex.h>
 
#define SZ(v) ((v).size()) 
 
using namespace std;
 
class Party {
  public:
  double averageNames(int n, vector <int> personA, vector <int> personB) {
 
  double ret;
  int v[100][100];
  int i,j;
  for (i=0; i<100; i++) for (j=0; j<100; j++) {v[i][j]=0; if (i==j) v[i][j]=1;}
  for (i=0; i<SZ(personA); i++) {
    for (j=0; j<n; j++) if (v[personA[i]][j]==1||v[personB[i]][j]==1) {v[personA[i]][j]=1; v[personB[i]][j]=1;}
  }
  int nr=0;
  for (i=0; i<n;i++) for (j=0; j<n; j++) if (i!=j) if (v[i][j]==1) nr++;
  ret=nr;
  ret/=n;
  return ret;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/