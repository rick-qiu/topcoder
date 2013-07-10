/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7263
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

class Sortness {
public:
    double getSortness(vector<int> a);
};

double Sortness::getSortness(vector<int> a) {
    double ret;
    return ret;
}


int test0() {
    vector<int> a = {3, 2, 1, 4, 6, 7, 5, 8};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 1.25;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> a = {1, 2, 3};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> a = {5, 4, 3, 2, 1};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> a = {1, 5, 8, 7, 9, 6, 10, 12, 11, 3, 4, 2};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 5.166666666666667;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> a = {1};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
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
    vector<int> a = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 49.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {49, 40, 48, 47, 46, 45, 44, 43, 42, 41, 50, 39, 38, 37, 36, 35, 34, 33, 31, 32, 20, 29, 28, 27, 26, 25, 24, 23, 22, 21, 30, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 1, 2};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 47.44;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {1, 2};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
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
    vector<int> a = {2, 1};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> a = {1, 3, 2};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> a = {2, 1, 3};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> a = {2, 3, 1};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> a = {3, 1, 2};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> a = {3, 2, 1};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> a = {28, 46, 30, 27, 38, 14, 19, 7, 49, 33, 8, 3, 48, 6, 2, 21, 35, 11, 24, 26, 12, 47, 41, 22, 20, 44, 43, 15, 18, 1, 31, 36, 29, 40, 16, 34, 17, 37, 39, 13, 42, 4, 10, 23, 9, 5, 32, 45, 50, 25};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 24.36;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> a = {21, 8, 5, 6, 22, 18, 20, 19, 14, 12, 15, 13, 4, 16, 11, 3, 9, 10, 1, 2, 17, 7};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 14.090909090909092;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> a = {12, 1, 14, 11, 7, 5, 10, 13, 4, 3, 8, 2, 9, 6};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 8.142857142857142;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {12, 16, 44, 5, 38, 28, 39, 45, 10, 2, 30, 33, 15, 37, 43, 29, 36, 13, 25, 23, 27, 3, 24, 21, 4, 22, 35, 17, 31, 32, 8, 26, 1, 7, 14, 41, 11, 19, 18, 9, 42, 34, 40, 20, 6};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 24.4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> a = {11, 7, 8, 1, 18, 19, 14, 36, 16, 23, 40, 24, 39, 29, 10, 34, 6, 13, 4, 31, 41, 2, 32, 26, 17, 42, 3, 21, 37, 15, 20, 25, 5, 33, 9, 12, 27, 22, 30, 28, 38, 35};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 16.761904761904763;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {37, 34, 10, 44, 7, 12, 24, 36, 5, 14, 19, 30, 32, 9, 46, 25, 20, 35, 43, 39, 26, 42, 15, 27, 13, 1, 45, 18, 48, 33, 40, 17, 22, 41, 21, 6, 49, 47, 2, 16, 29, 3, 28, 23, 11, 8, 4, 38, 31};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 24.979591836734695;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {11, 23, 46, 42, 37, 30, 40, 2, 44, 19, 3, 8, 35, 38, 29, 4, 14, 17, 22, 31, 7, 15, 45, 25, 1, 6, 39, 47, 41, 27, 24, 5, 16, 43, 33, 13, 10, 9, 20, 12, 34, 36, 28, 21, 32, 18, 26};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 23.95744680851064;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {29, 32, 27, 22, 43, 45, 8, 5, 38, 2, 12, 31, 42, 17, 37, 46, 48, 36, 25, 6, 23, 18, 14, 41, 28, 15, 10, 34, 24, 19, 16, 9, 21, 7, 4, 11, 44, 13, 20, 30, 33, 3, 35, 1, 26, 40, 47, 39};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {33, 45, 32, 36, 27, 42, 31, 37, 44, 14, 16, 8, 6, 9, 43, 22, 39, 30, 7, 48, 4, 38, 24, 10, 3, 29, 50, 47, 18, 2, 41, 34, 20, 28, 15, 46, 25, 12, 13, 11, 21, 49, 5, 23, 1, 35, 40, 26, 17, 19};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 27.8;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> a = {7, 24, 28, 25, 2, 4, 3, 13, 15, 6, 9, 5, 18, 8, 12, 19, 10, 27, 23, 1, 16, 20, 17, 11, 21, 14, 22, 26};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 10.5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {16, 42, 50, 47, 13, 2, 35, 10, 49, 12, 45, 43, 7, 3, 29, 30, 20, 17, 28, 41, 18, 32, 33, 25, 34, 23, 48, 22, 21, 14, 26, 44, 38, 1, 15, 40, 5, 39, 24, 31, 11, 4, 6, 19, 46, 9, 8, 36, 37, 27};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 26.88;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {23, 42, 39, 16, 2, 45, 1, 38, 35, 32, 5, 9, 15, 8, 34, 33, 41, 18, 4, 28, 3, 43, 46, 29, 47, 17, 7, 19, 14, 24, 21, 13, 31, 25, 26, 40, 22, 12, 44, 20, 27, 37, 30, 11, 36, 6, 10};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 23.48936170212766;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {11, 18, 1, 15, 17, 6, 9, 23, 14, 13, 3, 12, 4, 8, 16, 22, 10, 5, 7, 24, 21, 2, 20, 19};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 10.666666666666666;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> a = {24, 17, 28, 21, 10, 19, 30, 13, 34, 7, 23, 36, 11, 12, 15, 18, 1, 3, 14, 31, 35, 27, 6, 25, 29, 33, 22, 16, 20, 26, 5, 32, 4, 8, 2, 9};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 19.666666666666668;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {14, 8, 27, 9, 18, 7, 3, 21, 6, 11, 19, 26, 10, 5, 4, 28, 2, 22, 15, 24, 20, 23, 25, 16, 13, 1, 12, 17};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 12.857142857142858;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {6, 18, 34, 11, 19, 4, 23, 39, 29, 33, 10, 5, 9, 30, 22, 46, 32, 27, 40, 24, 17, 8, 45, 3, 48, 36, 20, 25, 35, 26, 38, 28, 12, 42, 1, 41, 21, 49, 14, 44, 31, 47, 7, 2, 15, 37, 43, 16, 13};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 21.510204081632654;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {15, 43, 32, 40, 17, 10, 9, 36, 2, 38, 30, 33, 41, 1, 11, 31, 29, 39, 22, 28, 23, 42, 21, 8, 27, 6, 18, 19, 37, 34, 7, 20, 14, 24, 35, 16, 12, 3, 26, 5, 4, 25, 13};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 25.813953488372093;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {4, 1, 2, 3};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> a = {20, 5, 16, 14, 9, 8, 32, 24, 6, 3, 27, 22, 29, 25, 7, 30, 1, 10, 26, 31, 19, 11, 17, 2, 15, 13, 12, 23, 4, 21, 28, 18};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 15.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {26, 16, 4, 10, 31, 36, 17, 5, 12, 8, 2, 29, 7, 35, 22, 14, 23, 11, 20, 25, 28, 13, 33, 3, 9, 18, 19, 34, 15, 27, 32, 24, 21, 30, 6, 1};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 16.38888888888889;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {3, 25, 2, 12, 41, 9, 26, 16, 28, 35, 27, 40, 47, 23, 24, 20, 37, 50, 22, 31, 42, 45, 15, 5, 21, 33, 29, 39, 1, 10, 30, 4, 48, 34, 32, 38, 43, 14, 36, 13, 46, 18, 44, 17, 19, 6, 11, 7, 8, 49};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 24.08;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {5, 1, 9, 8, 11, 4, 12, 6, 2, 13, 7, 3, 10};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 5.230769230769231;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {21, 30, 20, 22, 15, 29, 10, 8, 43, 44, 47, 25, 27, 41, 36, 46, 33, 11, 35, 24, 16, 23, 6, 5, 14, 19, 13, 9, 49, 28, 1, 34, 7, 45, 4, 3, 38, 18, 48, 12, 42, 40, 17, 37, 39, 2, 32, 31, 26};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 24.775510204081634;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {24, 14, 9, 4, 18, 6, 21, 11, 25, 12, 16, 13, 15, 19, 3, 22, 17, 8, 27, 7, 5, 20, 26, 2, 23, 10, 1};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 13.703703703703704;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {30, 24, 9, 10, 28, 15, 20, 23, 31, 26, 17, 25, 13, 27, 8, 12, 14, 5, 32, 6, 22, 16, 19, 1, 11, 7, 4, 29, 18, 3, 21, 2};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 19.9375;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {42, 48, 14, 4, 21, 41, 5, 49, 29, 47, 1, 12, 43, 2, 33, 9, 36, 3, 27, 10, 31, 44, 40, 34, 23, 28, 18, 7, 26, 16, 8, 20, 30, 15, 39, 11, 37, 35, 38, 19, 22, 6, 25, 32, 24, 13, 17, 46, 45};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 24.081632653061224;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {1, 3, 5, 4, 2};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {23, 26, 27, 21, 15, 43, 10, 29, 3, 32, 42, 40, 34, 22, 19, 25, 5, 31, 2, 38, 36, 18, 28, 44, 14, 12, 20, 13, 24, 30, 35, 11, 17, 8, 39, 33, 1, 6, 7, 41, 4, 16, 9, 37};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 24.5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {6, 9, 5, 7, 4, 13, 12, 8, 21, 22, 10, 17, 23, 11, 1, 18, 16, 24, 14, 2, 19, 15, 25, 20, 3};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 8.72;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {16, 17, 5, 12, 23, 24, 9, 2, 14, 15, 19, 8, 13, 1, 22, 3, 4, 20, 7, 10, 21, 11, 18, 6};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 12.416666666666666;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 15.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> a = {33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 32.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> a = {49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 48.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> a = {10, 11, 1, 3, 8, 9, 7, 2, 6, 4, 5, 13, 22, 30, 29, 15, 26, 20, 27, 28, 14, 12, 21, 18, 19, 16, 23, 24, 25, 17, 31, 32, 34, 33, 35, 45, 37, 39, 38, 36, 40, 44, 43, 42, 41, 47, 46, 48, 49, 50};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 5.92;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> a = {19, 28, 12, 23, 20, 8, 14, 13, 38, 10, 35, 27, 1, 4, 6, 21, 7, 37, 36, 26, 16, 2, 24, 31, 17, 5, 25, 22, 30, 15, 34, 33, 3, 11, 9, 18, 32, 29, 41, 43, 40, 42, 39, 44};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 15.545454545454545;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> a = {12, 6, 35, 19, 29, 22, 14, 8, 34, 31, 24, 4, 9, 25, 27, 13, 15, 20, 26, 17, 28, 5, 7, 10, 2, 30, 33, 3, 23, 11, 18, 1, 36, 16, 32, 21, 37};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 17.405405405405407;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> a = {22, 17, 5, 7, 3, 1, 12, 15, 9, 6, 13, 20, 14, 11, 10, 8, 4, 18, 21, 19, 16, 2, 23, 27, 35, 33, 30, 36, 24, 34, 45, 44, 32, 39, 46, 25, 28, 40, 37, 26, 41, 31, 38, 29, 43, 42, 47, 49, 48};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 8.693877551020408;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> a = {1, 2, 4, 3, 5, 6};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> a = {12, 19, 24, 15, 18, 9, 4, 17, 23, 22, 13, 1, 8, 20, 3, 14, 5, 11, 7, 2, 6, 16, 21, 10, 26, 28, 27, 25, 32, 35, 31, 29, 34, 33, 30, 40, 36, 38, 37, 43, 42, 39, 41};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 9.069767441860465;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> a = {1, 17, 6, 41, 39, 4, 24, 35, 12, 16, 29, 42, 40, 21, 9, 25, 8, 32, 37, 19, 27, 28, 30, 2, 31, 47, 33, 45, 34, 23, 7, 11, 13, 38, 18, 44, 10, 14, 20, 22, 3, 26, 5, 36, 43, 46, 15, 48, 49, 50};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 20.32;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> a = {19, 6, 1, 15, 14, 3, 16, 22, 7, 21, 8, 10, 12, 18, 20, 4, 11, 17, 2, 5, 9, 13, 23, 24, 28, 27, 25, 26, 29};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 8.620689655172415;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> a = {1, 12, 11, 5, 10, 8, 9, 7, 4, 2, 6, 3, 15, 13, 16, 14, 17, 19, 18, 20, 21};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 4.761904761904762;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> a = {16, 27, 5, 19, 11, 2, 14, 28, 12, 21, 10, 18, 29, 7, 9, 17, 13, 4, 20, 6, 26, 24, 8, 25, 23, 15, 1, 22, 3, 31, 47, 30, 43, 36, 48, 46, 42, 45, 40, 33, 44, 41, 38, 37, 35, 34, 39, 32, 49};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 13.061224489795919;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> a = {11, 2, 4, 1, 10, 15, 3, 13, 12, 14, 9, 8, 6, 5, 7, 18, 30, 22, 33, 34, 17, 19, 24, 16, 25, 35, 32, 26, 28, 31, 27, 29, 23, 21, 20, 36, 37};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 7.945945945945946;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> a = {19, 12, 24, 23, 22, 15, 1, 13, 25, 21, 17, 9, 10, 7, 4, 11, 6, 14, 20, 3, 18, 8, 16, 5, 2, 26, 32, 30, 27, 31, 28, 29, 33, 34, 37, 36, 35, 38};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 11.421052631578947;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> a = {11, 15, 28, 2, 21, 25, 24, 12, 23, 19, 20, 27, 14, 4, 7, 22, 26, 17, 18, 10, 3, 9, 5, 1, 13, 6, 8, 16, 33, 31, 30, 32, 29, 34, 35, 36, 37, 39, 38, 42, 40, 43, 41, 45, 44, 48, 50, 46, 47, 49};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 10.52;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> a = {1, 5, 7, 9, 8, 3, 4, 6, 2, 10, 12, 11, 13, 14};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 2.857142857142857;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> a = {14, 9, 15, 7, 12, 13, 4, 8, 1, 2, 6, 10, 5, 11, 3, 16, 17, 18, 20, 36, 35, 25, 38, 34, 41, 29, 26, 19, 23, 28, 21, 32, 40, 27, 37, 22, 33, 24, 31, 30, 39, 42, 43, 44, 45, 48, 47, 46, 49};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 8.081632653061224;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> a = {1, 2, 4, 3, 5, 6, 7, 8, 9, 11, 10, 12, 22, 20, 14, 18, 19, 23, 16, 15, 21, 13, 24, 17, 26, 29, 28, 27, 25, 31, 30, 32, 33, 34, 39, 36, 38, 37, 35, 40, 41, 44, 42, 43, 45, 46, 48, 47, 49};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 2.326530612244898;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> a = {1, 4, 3, 6, 8, 9, 5, 7, 2, 10, 11, 14, 12, 13, 15, 16, 17, 18};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6666666666666667;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> a = {1, 2, 3, 6, 5, 4, 7, 9, 8, 10, 17, 16, 12, 11, 14, 13, 15, 18};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8888888888888888;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 24, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> a = {2, 3, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 36, 35, 37, 38, 39, 40, 41, 42, 43, 44, 45, 49, 47, 48, 46};
    Sortness* pObj = new Sortness();
    clock_t start = clock();
    double result = pObj->getSortness(a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.32653061224489793;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22651083&rd=10010&pm=7263
********************************************************************************
#include <algorithm>  
#include <iostream>  
#include <sstream>  
#include <string>  
#include <vector>  
#include <queue>  
#include <map> 
#include <list> 
#include <set>  
 
 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
 
using namespace std;  
 
#define si(a) (a.size()) 
 
struct Sortness {  
 
double getSortness(vector <int> a) 
{ 
  int n=si(a); 
  double sum=0; 
  for(int i=0; i<n; i++) 
    for(int j=0; j<n; j++)  
      if(i<j&&a[i]>a[j] 
      ||i>j&&a[i]<a[j]) 
        sum++; 
  return sum/n; 
} 
 
};  
 
 
 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/