/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10771
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

class TheFansAndMeetingsDivOne {
public:
    double find(vector<int> minJ, vector<int> maxJ, vector<int> minB, vector<int> maxB, int k);
};

double TheFansAndMeetingsDivOne::find(vector<int> minJ, vector<int> maxJ, vector<int> minB, vector<int> maxB, int k) {
    double ret;
    return ret;
}


int test0() {
    vector<int> minJ = {1};
    vector<int> maxJ = {9};
    vector<int> minB = {5};
    vector<int> maxB = {5};
    int k = 1;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1111111111111111;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> minJ = {5, 2, 5, 1, 1, 2, 4, 1};
    vector<int> maxJ = {7, 6, 7, 3, 4, 3, 5, 1};
    vector<int> minB = {8, 9, 7, 11, 12, 7, 8, 40};
    vector<int> maxB = {9, 10, 9, 33, 14, 7, 11, 40};
    int k = 2;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.724111866969009E-5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> minJ = {4, 7, 4};
    vector<int> maxJ = {7, 7, 7};
    vector<int> minB = {40, 40, 40};
    vector<int> maxB = {40, 40, 40};
    int k = 1;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> minJ = {3, 6, 2, 1, 1, 10, 3};
    vector<int> maxJ = {6, 9, 5, 6, 5, 10, 9};
    vector<int> minB = {1, 1, 1, 1, 8, 3, 1};
    vector<int> maxB = {3, 9, 7, 3, 10, 6, 5};
    int k = 4;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.047082056525158976;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> minJ = {1};
    vector<int> maxJ = {7};
    vector<int> minB = {3};
    vector<int> maxB = {3};
    int k = 1;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14285714285714285;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> minJ = {1, 5, 5, 3, 6};
    vector<int> maxJ = {5, 8, 6, 5, 10};
    vector<int> minB = {5, 1, 1, 7, 2};
    vector<int> maxB = {10, 3, 5, 9, 3};
    int k = 3;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07195682098765432;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> minJ = {1};
    vector<int> maxJ = {9};
    vector<int> minB = {3};
    vector<int> maxB = {4};
    int k = 1;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1111111111111111;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> minJ = {5, 12, 5, 3, 11, 12, 15, 21, 31, 5, 1, 27, 23, 6, 22, 6, 5, 40, 13, 21, 5, 1, 15, 25, 3, 1, 37, 2};
    vector<int> maxJ = {37, 28, 7, 11, 34, 33, 24, 21, 33, 7, 17, 39, 36, 19, 25, 11, 21, 40, 29, 31, 36, 37, 28, 30, 31, 5, 39, 23};
    vector<int> minB = {9, 11, 25, 9, 14, 5, 3, 1, 11, 17, 17, 30, 1, 9, 21, 13, 38, 6, 21, 9, 21, 13, 1, 25, 6, 33, 16, 1};
    vector<int> maxB = {26, 13, 37, 39, 27, 29, 24, 9, 21, 28, 29, 37, 3, 31, 37, 21, 40, 23, 25, 31, 37, 33, 5, 28, 25, 35, 20, 5};
    int k = 17;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008962170085311234;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> minJ = {14};
    vector<int> maxJ = {23};
    vector<int> minB = {17};
    vector<int> maxB = {25};
    int k = 1;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07777777777777778;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> minJ = {1, 1, 25};
    vector<int> maxJ = {19, 9, 39};
    vector<int> minB = {29, 13, 23};
    vector<int> maxB = {37, 36, 39};
    int k = 3;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2296117927352875E-6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> minJ = {1, 9, 9, 27, 27, 15, 34, 17, 37, 1, 13, 19, 21, 25, 11, 29, 5, 32, 2, 25, 1, 1, 1, 7, 1, 31, 13, 1, 16, 2, 1, 5, 1, 11, 21, 17, 8, 26, 1, 9};
    vector<int> maxJ = {29, 30, 31, 30, 36, 38, 35, 31, 39, 17, 25, 31, 33, 29, 39, 31, 31, 39, 37, 36, 23, 33, 16, 15, 9, 33, 36, 33, 38, 21, 5, 21, 23, 32, 25, 36, 30, 33, 29, 34};
    vector<int> minB = {1, 11, 25, 17, 21, 5, 33, 11, 6, 29, 10, 29, 19, 19, 17, 7, 1, 13, 17, 1, 21, 1, 25, 5, 1, 35, 19, 5, 1, 1, 21, 1, 29, 1, 1, 3, 25, 8, 17, 22};
    vector<int> maxB = {8, 26, 30, 25, 33, 24, 36, 35, 36, 39, 33, 37, 26, 36, 37, 40, 1, 16, 26, 13, 36, 31, 37, 33, 11, 37, 36, 29, 33, 18, 39, 36, 37, 33, 21, 23, 33, 26, 27, 37};
    int k = 13;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008588769404181795;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> minJ = {27, 31, 20, 1, 14, 17};
    vector<int> maxJ = {31, 36, 21, 29, 26, 33};
    vector<int> minB = {15, 5, 23, 17, 5, 1};
    vector<int> maxB = {36, 36, 39, 21, 8, 9};
    int k = 1;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.029379983499047465;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> minJ = {1};
    vector<int> maxJ = {5};
    vector<int> minB = {1};
    vector<int> maxB = {40};
    int k = 1;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.025000000000000005;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> minJ = {3, 1, 1, 1, 6, 1, 10, 1, 17, 7, 1};
    vector<int> maxJ = {31, 26, 5, 8, 17, 29, 13, 31, 25, 27, 36};
    vector<int> minB = {21, 25, 5, 23, 9, 21, 4, 9, 6, 25, 29};
    vector<int> maxB = {33, 28, 28, 38, 25, 31, 39, 28, 31, 33, 39};
    int k = 10;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7.951979929161598E-6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> minJ = {21, 25, 1, 12, 1, 8, 9, 33, 29, 1, 17, 33, 33, 6, 21, 17};
    vector<int> maxJ = {21, 25, 2, 17, 17, 21, 31, 38, 36, 9, 37, 36, 37, 31, 29, 23};
    vector<int> minB = {4, 4, 5, 8, 33, 1, 18, 1, 25, 33, 18, 17, 9, 3, 30, 9};
    vector<int> maxB = {21, 31, 36, 10, 39, 37, 31, 23, 36, 36, 21, 21, 31, 36, 33, 23};
    int k = 9;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01186774013624482;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> minJ = {1, 25, 13, 3, 6, 11, 16, 25, 17, 12, 5, 10, 35, 1, 1, 17, 1, 7, 9, 1, 11, 15, 12, 17, 26, 1, 1, 27, 1, 1, 13, 1, 2};
    vector<int> maxJ = {13, 29, 27, 40, 9, 37, 28, 36, 29, 21, 5, 31, 36, 5, 5, 26, 5, 36, 14, 13, 33, 33, 21, 23, 33, 21, 6, 29, 3, 35, 35, 21, 5};
    vector<int> minB = {5, 8, 1, 33, 3, 29, 1, 6, 17, 6, 5, 1, 16, 18, 17, 17, 23, 5, 10, 25, 25, 3, 29, 7, 7, 3, 15, 1, 1, 5, 26, 1, 31};
    vector<int> maxB = {31, 23, 7, 34, 6, 35, 14, 31, 31, 21, 25, 33, 32, 21, 17, 23, 25, 11, 37, 27, 31, 9, 35, 37, 15, 17, 33, 6, 31, 29, 36, 35, 31};
    int k = 12;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007700142975775283;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> minJ = {7, 16, 6, 17, 14, 1, 21, 9, 1, 1, 14, 9, 1, 3, 5, 5, 21, 3, 29, 1, 11, 9, 1, 5, 24, 1, 19, 35, 13, 16, 1};
    vector<int> maxJ = {29, 29, 25, 33, 30, 16, 36, 19, 3, 11, 16, 13, 5, 31, 25, 17, 33, 14, 37, 22, 20, 30, 9, 21, 26, 3, 21, 36, 19, 36, 17};
    vector<int> minB = {17, 1, 9, 1, 6, 3, 17, 21, 17, 13, 21, 15, 7, 1, 27, 9, 11, 29, 5, 7, 9, 10, 3, 11, 21, 21, 17, 19, 27, 1, 1};
    vector<int> maxB = {20, 32, 17, 27, 16, 25, 30, 27, 21, 15, 23, 17, 25, 5, 28, 27, 25, 37, 7, 21, 11, 36, 30, 12, 37, 39, 35, 31, 29, 37, 11};
    int k = 11;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008821463168482197;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> minJ = {9, 1, 16, 1, 1, 15, 1, 11, 17, 3, 12, 20, 13, 17, 1, 28, 5, 9, 25, 4, 5, 6, 23, 21, 1, 6, 5, 16, 5, 1, 3};
    vector<int> maxJ = {17, 25, 21, 3, 25, 37, 26, 23, 21, 32, 17, 23, 33, 21, 9, 31, 23, 36, 37, 17, 30, 19, 37, 26, 18, 31, 33, 19, 39, 22, 31};
    vector<int> minB = {17, 9, 17, 21, 16, 1, 21, 8, 21, 1, 25, 1, 3, 1, 3, 17, 24, 1, 1, 7, 9, 1, 23, 5, 11, 25, 11, 9, 21, 5, 17};
    vector<int> maxB = {17, 28, 34, 24, 21, 13, 33, 10, 23, 9, 31, 10, 33, 17, 21, 36, 31, 28, 27, 25, 15, 14, 31, 14, 16, 29, 38, 18, 37, 12, 33};
    int k = 2;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02247476792050709;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> minJ = {11, 25, 11, 6, 11, 33, 1, 9, 1, 16, 16, 4, 23, 5, 17, 25, 22, 21, 9, 4, 24, 1, 5, 11, 1, 1, 29, 26, 3, 21, 16, 15, 28, 36, 1, 28};
    vector<int> maxJ = {25, 31, 29, 29, 28, 37, 25, 29, 13, 25, 21, 36, 29, 33, 23, 36, 28, 33, 33, 9, 38, 11, 9, 31, 1, 3, 31, 33, 17, 26, 22, 38, 33, 39, 11, 31};
    vector<int> minB = {3, 1, 6, 3, 29, 31, 35, 13, 3, 9, 1, 1, 1, 5, 1, 28, 3, 5, 1, 1, 1, 1, 1, 1, 1, 1, 9, 27, 19, 1, 22, 1, 9, 17, 16, 11};
    vector<int> maxB = {3, 17, 40, 31, 36, 36, 36, 27, 17, 17, 35, 18, 15, 6, 15, 33, 16, 26, 1, 25, 8, 36, 25, 35, 35, 1, 21, 31, 25, 16, 37, 40, 31, 21, 31, 35};
    int k = 21;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0029359878884012546;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> minJ = {6, 7, 27, 1, 24, 23, 35, 1, 5, 16, 15, 1, 1};
    vector<int> maxJ = {31, 10, 33, 4, 34, 31, 39, 11, 31, 21, 16, 19, 17};
    vector<int> minB = {11, 8, 33, 5, 6, 13, 33, 7, 11, 1, 31, 15, 19};
    vector<int> maxB = {26, 31, 37, 28, 26, 26, 35, 13, 23, 31, 33, 36, 33};
    int k = 7;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0080147948635035;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    int k = 1;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.025000000000000022;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    int k = 40;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0038566888196671528;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    int k = 20;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005443894058673988;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> minJ = {35, 22, 17, 21, 11, 23, 14, 11, 11, 17, 11, 19, 23, 29, 32, 11, 21, 20};
    vector<int> maxJ = {37, 38, 35, 23, 34, 32, 35, 31, 33, 35, 37, 37, 26, 36, 35, 36, 35, 40};
    vector<int> minB = {19, 23, 15, 29, 14, 25, 14, 29, 11, 17, 17, 17, 11, 11, 11, 13, 20, 13};
    vector<int> maxB = {36, 31, 17, 29, 17, 39, 33, 31, 31, 38, 19, 20, 23, 19, 17, 31, 38, 36};
    int k = 11;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003461891546683289;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> minJ = {31, 29, 21, 23, 11, 35, 15, 13, 20, 11, 24, 31, 17, 13, 23, 19, 20, 31, 17, 16, 35, 24, 31, 37, 17, 15, 11, 11, 15};
    vector<int> maxJ = {35, 31, 37, 23, 35, 38, 26, 35, 26, 35, 33, 33, 29, 36, 29, 21, 29, 39, 30, 37, 38, 35, 37, 39, 21, 23, 19, 23, 19};
    vector<int> minB = {11, 26, 17, 28, 25, 11, 21, 17, 13, 11, 27, 11, 11, 29, 23, 21, 21, 20, 17, 11, 15, 16, 11, 16, 29, 23, 27, 26, 16};
    vector<int> maxB = {11, 35, 31, 35, 40, 33, 25, 19, 32, 39, 35, 39, 29, 35, 40, 38, 26, 25, 35, 13, 24, 23, 35, 26, 39, 30, 29, 29, 29};
    int k = 21;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008320830088251843;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> minJ = {17, 17, 11, 26, 17, 31, 16, 21, 25, 23, 11, 17, 26, 25, 21, 11, 31, 11, 17, 11, 11, 23, 25, 16, 17, 27, 17, 21, 11, 11, 14};
    vector<int> maxJ = {17, 40, 21, 33, 26, 33, 31, 21, 37, 25, 31, 35, 29, 29, 33, 38, 39, 16, 19, 23, 21, 23, 33, 38, 37, 32, 31, 26, 20, 29, 26};
    vector<int> minB = {29, 25, 19, 32, 25, 21, 31, 11, 35, 11, 23, 26, 13, 16, 31, 11, 11, 23, 22, 11, 17, 20, 23, 11, 29, 16, 26, 35, 13, 11, 15};
    vector<int> maxB = {31, 31, 22, 37, 26, 23, 33, 16, 37, 19, 31, 33, 31, 28, 32, 25, 15, 31, 31, 35, 36, 38, 36, 39, 34, 17, 35, 36, 39, 17, 28};
    int k = 6;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.015965509437686872;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> minJ = {29, 21, 14, 11, 15, 18, 23, 29, 11, 29, 29, 11, 23, 19, 11, 25, 12, 17, 21, 11, 11, 33, 36};
    vector<int> maxJ = {31, 35, 31, 23, 38, 35, 38, 35, 11, 34, 38, 26, 25, 29, 31, 35, 21, 32, 37, 38, 29, 38, 39};
    vector<int> minB = {21, 11, 21, 11, 11, 31, 36, 11, 20, 11, 17, 17, 21, 27, 11, 11, 26, 20, 29, 11, 11, 11, 15};
    vector<int> maxB = {31, 30, 23, 36, 35, 38, 37, 39, 23, 21, 25, 17, 36, 36, 14, 14, 35, 38, 33, 27, 38, 33, 26};
    int k = 12;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00954838481495107;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> minJ = {26, 11, 17, 19, 23, 20, 13, 31, 19, 17, 20, 26, 21, 26, 26, 19, 12, 35, 20, 35, 21};
    vector<int> maxJ = {33, 38, 31, 31, 26, 23, 29, 33, 35, 23, 23, 39, 37, 28, 35, 27, 21, 35, 31, 36, 25};
    vector<int> minB = {17, 26, 17, 11, 11, 23, 22, 21, 23, 11, 14, 23, 35, 11, 11, 17, 16, 35, 11, 22, 11};
    vector<int> maxB = {27, 33, 23, 26, 39, 37, 23, 35, 38, 27, 23, 26, 39, 14, 26, 31, 31, 35, 13, 26, 38};
    int k = 16;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005563344413443235;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> minJ = {17, 13, 23, 11, 17, 17, 15, 19, 25, 37, 17};
    vector<int> maxJ = {17, 17, 35, 35, 40, 35, 21, 33, 29, 37, 35};
    vector<int> minB = {17, 31, 26, 14, 23, 13, 23, 21, 13, 16, 11};
    vector<int> maxB = {26, 35, 37, 29, 31, 21, 35, 32, 27, 23, 11};
    int k = 10;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.016270569263072583;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> minJ = {11, 29, 31, 11, 23, 11, 25, 21, 17, 22, 19, 11, 26, 23, 20, 11, 11, 23, 11, 17, 15, 11, 37};
    vector<int> maxJ = {26, 37, 33, 15, 35, 11, 32, 23, 40, 31, 37, 17, 36, 35, 37, 17, 37, 25, 13, 35, 37, 35, 38};
    vector<int> minB = {33, 21, 11, 29, 26, 21, 11, 17, 26, 26, 17, 20, 16, 11, 29, 23, 11, 14, 23, 11, 13, 25, 15};
    vector<int> maxB = {35, 26, 31, 35, 36, 35, 11, 29, 39, 35, 23, 24, 21, 26, 29, 31, 21, 26, 29, 35, 31, 25, 17};
    int k = 22;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014181095075945518;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> minJ = {21, 14, 29, 22, 11, 20, 11, 11, 14, 21, 11, 16, 23, 36, 17, 21, 17};
    vector<int> maxJ = {23, 23, 37, 31, 30, 39, 19, 35, 16, 23, 39, 35, 29, 36, 31, 25, 27};
    vector<int> minB = {11, 17, 15, 11, 11, 26, 13, 11, 11, 31, 17, 29, 37, 11, 21, 27, 25};
    vector<int> maxB = {35, 29, 37, 17, 29, 40, 30, 22, 17, 39, 35, 31, 39, 17, 31, 29, 31};
    int k = 10;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014972459409478346;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> minJ = {11, 21, 11, 27, 11, 21, 11, 23, 32, 20, 23, 31, 19, 11, 13, 19, 35, 14, 20, 16, 13, 11, 11, 11, 13, 26, 15, 11, 11};
    vector<int> maxJ = {26, 23, 35, 35, 36, 23, 37, 32, 37, 23, 23, 37, 21, 18, 35, 26, 37, 17, 35, 29, 37, 36, 38, 26, 15, 29, 29, 32, 13};
    vector<int> minB = {14, 11, 16, 11, 21, 20, 11, 11, 11, 20, 23, 11, 11, 16, 11, 11, 11, 17, 35, 11, 23, 14, 11, 35, 21, 18, 11, 25, 13};
    vector<int> maxB = {17, 24, 31, 23, 23, 28, 23, 29, 35, 31, 23, 17, 23, 17, 14, 38, 37, 35, 39, 14, 31, 35, 16, 39, 38, 39, 17, 32, 27};
    int k = 24;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007135987298226865;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> minJ = {11, 11, 11, 36, 21, 17, 15, 39, 11, 16, 11, 14, 19, 23, 13, 25, 32, 11, 19, 14, 14, 11, 29, 21, 11, 11, 19, 33, 23, 11, 12, 35, 23, 36, 21, 11};
    vector<int> maxJ = {35, 25, 29, 39, 38, 23, 21, 39, 33, 35, 36, 36, 33, 25, 17, 36, 38, 23, 23, 19, 28, 11, 35, 31, 11, 33, 21, 36, 27, 26, 36, 38, 28, 39, 21, 38};
    vector<int> minB = {13, 11, 20, 21, 16, 11, 15, 17, 13, 29, 11, 11, 21, 35, 11, 23, 23, 15, 11, 11, 11, 11, 11, 11, 11, 11, 19, 11, 15, 21, 22, 20, 21, 11, 11, 15};
    vector<int> maxB = {23, 27, 36, 33, 29, 26, 36, 23, 37, 37, 15, 28, 35, 36, 15, 38, 36, 16, 11, 35, 18, 16, 35, 35, 25, 31, 21, 37, 29, 36, 37, 31, 29, 17, 26, 21};
    int k = 21;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004726942600874737;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> minJ = {11, 20, 23, 21, 14, 11, 29, 11, 15, 11, 26, 11, 11, 17, 14, 17, 11, 11, 34, 26, 17, 14, 23};
    vector<int> maxJ = {26, 27, 27, 34, 34, 33, 35, 11, 31, 26, 35, 29, 17, 38, 37, 21, 17, 23, 40, 35, 19, 23, 23};
    vector<int> minB = {21, 21, 13, 15, 16, 23, 23, 17, 11, 11, 11, 26, 19, 23, 11, 11, 20, 14, 15, 18, 23, 18, 11};
    vector<int> maxB = {26, 28, 27, 18, 26, 26, 35, 23, 33, 21, 23, 35, 23, 31, 38, 26, 37, 21, 16, 26, 29, 25, 38};
    int k = 12;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014811477214552721;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> minJ = {11, 11, 16, 15, 27, 16, 11, 11, 21, 11, 11, 11, 15, 11, 17, 17, 31, 19, 11, 11, 17};
    vector<int> maxJ = {35, 37, 26, 38, 31, 37, 21, 11, 40, 39, 29, 13, 28, 26, 19, 23, 38, 20, 31, 37, 26};
    vector<int> minB = {11, 29, 12, 29, 11, 14, 23, 23, 21, 17, 11, 17, 11, 17, 11, 17, 25, 23, 11, 13, 11};
    vector<int> maxB = {21, 31, 29, 29, 13, 21, 40, 26, 23, 17, 17, 35, 16, 23, 39, 36, 33, 27, 23, 31, 15};
    int k = 14;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.013211027911460328;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> minJ = {35, 22, 17, 21, 11, 23, 14, 11, 11, 17, 11, 19, 23, 29, 32, 11, 21, 20, 13, 11, 26, 17, 28, 25, 11, 21, 17, 13, 11, 27, 11, 11, 29, 23, 21, 21, 20, 17};
    vector<int> maxJ = {37, 38, 35, 23, 34, 32, 35, 31, 33, 35, 37, 37, 26, 36, 35, 36, 35, 40, 29, 11, 35, 31, 35, 40, 33, 25, 19, 32, 39, 35, 39, 29, 35, 40, 38, 26, 25, 35};
    vector<int> minB = {9, 13, 5, 19, 4, 15, 4, 19, 1, 7, 7, 7, 1, 1, 1, 3, 10, 3, 21, 19, 11, 13, 1, 25, 5, 3, 10, 1, 14, 21, 7, 3, 13, 9, 10, 21, 7, 6};
    vector<int> maxB = {26, 21, 7, 19, 7, 29, 23, 21, 21, 28, 9, 10, 13, 9, 7, 21, 28, 26, 25, 21, 27, 13, 25, 28, 16, 25, 16, 25, 23, 23, 19, 26, 19, 11, 19, 29, 20, 27};
    int k = 23;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7504576752006604E-13;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> minJ = {35, 24, 31, 37, 17, 15, 11, 11, 15, 19, 29, 25, 19, 32, 25, 21, 31, 11, 35, 11, 23, 26, 13, 16, 31, 11, 11, 23, 22, 11, 17, 20, 23};
    vector<int> maxJ = {38, 35, 37, 39, 21, 23, 19, 23, 19, 31, 31, 31, 22, 37, 26, 23, 33, 16, 37, 19, 31, 33, 31, 28, 32, 25, 15, 31, 31, 35, 36, 38, 36};
    vector<int> minB = {5, 6, 1, 6, 19, 13, 17, 16, 6, 7, 7, 1, 16, 7, 21, 6, 11, 15, 13, 1, 7, 16, 15, 11, 1, 21, 1, 7, 1, 1, 13, 15, 6};
    vector<int> maxB = {14, 13, 25, 16, 29, 20, 19, 19, 19, 7, 30, 11, 23, 16, 23, 21, 11, 27, 15, 21, 25, 19, 19, 23, 28, 29, 6, 9, 13, 11, 13, 23, 28};
    int k = 13;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.170331467243986E-7;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> minJ = {17, 27, 17, 21, 11, 11, 14, 17, 21, 11, 21, 11, 11, 31, 36, 11, 20, 11, 17, 17, 21, 27, 11, 11, 26, 20, 29, 11, 11, 11, 15, 26, 11, 17, 19, 23, 20, 13, 31};
    vector<int> maxJ = {37, 32, 31, 26, 20, 29, 26, 23, 31, 30, 23, 36, 35, 38, 37, 39, 23, 21, 25, 17, 36, 36, 14, 14, 35, 38, 33, 27, 38, 33, 26, 33, 38, 31, 31, 26, 23, 29, 33};
    vector<int> minB = {19, 6, 16, 25, 3, 1, 5, 19, 11, 4, 1, 5, 8, 13, 19, 1, 19, 19, 1, 13, 9, 1, 15, 2, 7, 11, 1, 1, 23, 26, 11, 7, 16, 7, 1, 1, 13, 12, 11};
    vector<int> maxB = {24, 7, 25, 26, 29, 7, 18, 21, 25, 21, 13, 28, 25, 28, 25, 1, 24, 28, 16, 15, 19, 21, 25, 11, 22, 27, 28, 19, 28, 29, 19, 17, 23, 13, 16, 29, 27, 13, 25};
    int k = 34;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1127041850230152E-15;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> minJ = {22, 17, 22, 26, 24, 17, 24, 21, 21, 22, 31, 22, 28, 19, 30, 26, 21, 25, 28, 16, 25, 21, 20, 20, 23, 16, 19, 17, 21, 25, 19, 26, 20, 20, 16, 31, 35, 20, 16, 25};
    vector<int> maxJ = {40, 28, 30, 38, 31, 38, 25, 26, 38, 30, 32, 39, 36, 36, 37, 36, 25, 40, 39, 26, 36, 32, 38, 25, 36, 30, 37, 33, 29, 37, 36, 29, 39, 23, 23, 36, 40, 22, 33, 39};
    vector<int> minB = {1, 16, 12, 4, 2, 5, 13, 4, 1, 12, 17, 2, 13, 4, 16, 1, 10, 6, 6, 14, 1, 3, 1, 10, 11, 18, 1, 1, 14, 3, 17, 1, 14, 1, 15, 14, 2, 1, 5, 10};
    vector<int> maxB = {19, 23, 20, 24, 9, 19, 19, 6, 11, 18, 24, 15, 21, 6, 22, 13, 13, 23, 10, 16, 2, 13, 10, 23, 20, 20, 25, 20, 23, 6, 19, 8, 23, 14, 19, 21, 20, 17, 23, 14};
    int k = 1;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009142551038724193;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> minJ = {21, 27, 31, 30, 16, 31, 19, 16, 26, 25, 17, 22, 16, 28, 23, 16, 20, 16, 16, 18, 26, 16, 21, 26, 16, 21, 16, 16, 21, 18, 23, 21, 24, 26, 16, 25, 24, 16, 20, 24};
    vector<int> maxJ = {32, 34, 37, 38, 34, 38, 40, 19, 39, 26, 39, 32, 30, 36, 26, 21, 27, 29, 18, 21, 28, 23, 22, 35, 40, 28, 22, 35, 37, 25, 26, 29, 29, 32, 35, 31, 28, 17, 38, 36};
    vector<int> minB = {15, 6, 4, 13, 14, 6, 4, 12, 12, 11, 1, 16, 1, 1, 1, 17, 3, 11, 2, 1, 9, 8, 11, 16, 1, 17, 6, 1, 8, 5, 11, 7, 7, 1, 1, 1, 6, 1, 12, 1};
    vector<int> maxB = {21, 16, 19, 20, 22, 19, 11, 17, 15, 21, 8, 22, 18, 6, 11, 20, 10, 21, 20, 24, 25, 16, 18, 24, 6, 19, 13, 11, 8, 13, 18, 12, 17, 17, 21, 5, 9, 9, 23, 6};
    int k = 33;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> minJ = {30, 16, 26, 16, 26, 36, 26, 28, 26, 17, 22, 16, 31, 26, 19, 16, 33, 18, 16, 21, 28, 20, 16, 33, 17, 26, 16, 20, 18, 16, 19, 37, 18, 34, 27, 26, 21, 19, 16, 30};
    vector<int> maxJ = {36, 33, 31, 40, 38, 37, 34, 30, 26, 30, 32, 31, 32, 39, 26, 20, 35, 34, 32, 28, 36, 21, 23, 36, 31, 34, 23, 23, 34, 18, 20, 38, 30, 36, 36, 28, 35, 22, 32, 40};
    vector<int> minB = {1, 3, 10, 20, 3, 4, 1, 4, 14, 1, 8, 4, 1, 5, 1, 12, 6, 8, 11, 3, 1, 11, 7, 1, 13, 6, 1, 8, 3, 1, 13, 6, 3, 6, 14, 1, 1, 1, 6, 5};
    vector<int> maxB = {9, 16, 13, 23, 13, 25, 11, 24, 23, 1, 20, 14, 11, 25, 22, 17, 22, 16, 14, 8, 19, 14, 7, 13, 17, 16, 9, 22, 22, 20, 23, 22, 14, 23, 25, 4, 21, 17, 11, 10};
    int k = 1;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009626179532073289;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> minJ = {20, 34, 38, 32, 32, 20, 20, 20, 27, 20, 28, 34, 20, 20, 23, 24, 23, 22, 23, 23, 29, 22, 20, 22, 27, 21, 37, 35, 20, 27, 24, 20, 20, 20, 29, 24, 26, 26, 20, 21};
    vector<int> maxJ = {40, 35, 38, 33, 34, 23, 20, 25, 29, 29, 29, 34, 29, 33, 26, 32, 27, 23, 28, 26, 29, 29, 22, 40, 38, 34, 38, 40, 27, 29, 38, 20, 38, 31, 39, 29, 37, 32, 34, 33};
    vector<int> minB = {3, 10, 17, 1, 13, 5, 19, 3, 1, 10, 3, 1, 13, 9, 4, 3, 1, 8, 3, 13, 9, 7, 1, 7, 1, 1, 1, 1, 2, 5, 13, 5, 7, 8, 10, 2, 7, 3, 7, 1};
    vector<int> maxB = {8, 15, 19, 10, 16, 9, 20, 7, 12, 10, 19, 13, 16, 19, 10, 3, 13, 15, 10, 18, 17, 19, 13, 16, 8, 12, 10, 13, 11, 21, 16, 15, 13, 12, 16, 9, 20, 12, 19, 8};
    int k = 1;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0013947802299057272;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> minJ = {22, 30, 20, 20, 28, 23, 28, 25, 29, 34, 28, 31, 22, 27, 21, 20, 25, 20, 20, 27, 25, 22, 38, 20, 26, 23, 25, 29, 27, 20, 27, 20, 29, 20, 23, 20, 30, 23, 34, 26};
    vector<int> maxJ = {34, 34, 39, 27, 35, 26, 33, 31, 34, 40, 34, 35, 32, 35, 34, 40, 35, 34, 25, 38, 28, 31, 40, 34, 36, 34, 37, 32, 29, 38, 29, 27, 37, 28, 32, 30, 40, 29, 36, 40};
    vector<int> minB = {7, 1, 8, 2, 1, 7, 15, 16, 1, 4, 1, 1, 9, 12, 8, 12, 7, 12, 4, 1, 7, 8, 4, 8, 13, 4, 1, 2, 1, 5, 1, 7, 16, 6, 13, 1, 13, 1, 4, 8};
    vector<int> maxB = {19, 3, 16, 10, 5, 16, 19, 19, 6, 8, 5, 10, 14, 21, 17, 12, 9, 16, 19, 4, 15, 8, 13, 12, 15, 15, 1, 19, 4, 15, 3, 15, 20, 19, 14, 4, 19, 16, 4, 9};
    int k = 33;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> minJ = {20, 30, 38, 20, 22, 24, 24, 29, 20, 28, 20, 36, 27, 29, 35, 20, 23, 27, 20, 26, 26, 21, 20, 20, 20, 22, 20, 20, 29, 22, 37, 20, 20, 20, 33, 22, 20, 25, 33, 38};
    vector<int> maxJ = {33, 32, 39, 26, 26, 40, 29, 32, 36, 38, 23, 36, 30, 38, 38, 20, 26, 38, 36, 35, 27, 29, 27, 26, 31, 34, 38, 35, 34, 33, 38, 23, 20, 24, 40, 38, 32, 27, 36, 38};
    vector<int> minB = {13, 1, 1, 1, 1, 4, 1, 3, 10, 10, 7, 16, 15, 1, 5, 1, 6, 4, 1, 2, 2, 16, 8, 1, 1, 4, 10, 16, 16, 5, 10, 1, 4, 10, 8, 1, 19, 13, 9, 10};
    vector<int> maxB = {21, 10, 2, 5, 4, 16, 4, 19, 13, 13, 15, 18, 16, 9, 20, 7, 8, 7, 16, 7, 5, 20, 16, 11, 7, 19, 11, 18, 18, 7, 13, 8, 7, 19, 13, 4, 19, 18, 18, 16};
    int k = 1;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 9.519322723899968E-4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> minJ = {5, 12, 5, 3, 11, 12, 15, 21, 31, 5, 1, 27, 23, 6, 22, 6, 5, 40, 13, 21, 5, 1, 15, 25, 3, 1, 37, 2, 1, 17, 1, 1, 25, 13, 1, 11, 25, 17, 21, 5};
    vector<int> maxJ = {37, 28, 7, 11, 34, 33, 24, 21, 33, 7, 17, 39, 36, 19, 25, 11, 21, 40, 29, 31, 36, 37, 28, 30, 31, 5, 39, 23, 39, 25, 19, 9, 39, 40, 8, 26, 30, 25, 33, 24};
    vector<int> minB = {9, 11, 25, 9, 14, 5, 3, 1, 11, 17, 17, 30, 1, 9, 21, 13, 38, 6, 21, 9, 21, 13, 1, 25, 6, 33, 16, 1, 14, 3, 29, 13, 23, 1, 9, 9, 27, 27, 15, 34};
    vector<int> maxB = {26, 13, 37, 39, 27, 29, 24, 9, 21, 28, 29, 37, 3, 31, 37, 21, 40, 23, 25, 31, 37, 33, 5, 28, 25, 35, 20, 5, 23, 31, 37, 36, 39, 29, 30, 31, 30, 36, 38, 35};
    int k = 40;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002423903443583486;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> minJ = {17, 37, 1, 13, 19, 21, 25, 11, 29, 5, 32, 2, 25, 1, 1, 1, 7, 1, 31, 13, 1, 16, 2, 1, 5, 1, 11, 21, 17, 8, 26, 1, 9, 6, 15, 5, 23, 17, 5, 1};
    vector<int> maxJ = {31, 39, 17, 25, 31, 33, 29, 39, 31, 31, 39, 37, 36, 23, 33, 16, 15, 9, 33, 36, 33, 38, 21, 5, 21, 23, 32, 25, 36, 30, 33, 29, 34, 17, 36, 36, 39, 21, 8, 9};
    vector<int> minB = {11, 6, 29, 10, 29, 19, 19, 17, 7, 1, 13, 17, 1, 21, 1, 25, 5, 1, 35, 19, 5, 1, 1, 21, 1, 29, 1, 1, 3, 25, 8, 17, 22, 27, 31, 20, 1, 14, 17, 1};
    vector<int> maxB = {35, 36, 39, 33, 37, 26, 36, 37, 40, 1, 16, 26, 13, 36, 31, 37, 33, 11, 37, 36, 29, 33, 18, 39, 36, 37, 33, 21, 23, 33, 26, 27, 37, 31, 36, 21, 29, 26, 33, 21};
    int k = 40;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0036804386329718154;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> minJ = {1, 3, 1, 1, 1, 6, 1, 10, 1, 17, 7, 1, 16, 4, 4, 5, 8, 33, 1, 18, 1, 25, 33, 18, 17, 9, 3, 30, 9, 1, 25, 13, 3, 6, 11, 16, 25};
    vector<int> maxJ = {40, 31, 26, 5, 8, 17, 29, 13, 31, 25, 27, 36, 17, 21, 31, 36, 10, 39, 37, 31, 23, 36, 36, 21, 21, 31, 36, 33, 23, 13, 29, 27, 40, 9, 37, 28, 36};
    vector<int> minB = {11, 21, 25, 5, 23, 9, 21, 4, 9, 6, 25, 29, 21, 25, 1, 12, 1, 8, 9, 33, 29, 1, 17, 33, 33, 6, 21, 17, 2, 5, 8, 1, 33, 3, 29, 1, 6};
    vector<int> maxB = {14, 33, 28, 28, 38, 25, 31, 39, 28, 31, 33, 39, 21, 25, 2, 17, 17, 21, 31, 38, 36, 9, 37, 36, 37, 31, 29, 23, 33, 31, 23, 7, 34, 6, 35, 14, 31};
    int k = 37;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00192463005965827;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> minJ = {1, 2, 3, 1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 3, 2, 2, 2, 2};
    vector<int> maxJ = {3, 2, 3, 3, 3, 2, 1, 3, 3, 3, 3, 1, 3, 3, 3, 3, 2, 3, 2, 2};
    vector<int> minB = {1, 1, 1, 2, 2, 3, 1, 3, 1, 2, 1, 1, 1, 1, 1, 3, 2, 3, 3, 1};
    vector<int> maxB = {3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 2, 2, 3, 3, 3, 3, 3, 3, 3};
    int k = 4;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18089040497587602;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int k = 10;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999998;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int k = 18;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999991;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 39, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 39, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    int k = 20;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005463815230730449;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    int k = 40;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0038566888196671528;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> minJ = {39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 37};
    vector<int> maxJ = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> minB = {39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 35, 39};
    vector<int> maxB = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    int k = 39;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08075099735800484;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> minJ = {1};
    vector<int> maxJ = {9};
    vector<int> minB = {5};
    vector<int> maxB = {5};
    int k = 1;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1111111111111111;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39};
    int k = 20;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005599512006522801;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> minJ = {8, 11, 4, 31, 22, 5, 13, 19, 34, 5, 28, 34, 26, 16, 13, 33, 14, 11, 29, 14, 10, 29, 26, 39, 17, 2, 13, 19, 28, 16, 4, 31, 8, 35, 14, 11, 7, 18, 18, 39};
    vector<int> maxJ = {20, 27, 19, 31, 33, 10, 14, 28, 37, 30, 37, 38, 34, 35, 29, 39, 25, 28, 38, 25, 35, 32, 33, 39, 39, 3, 33, 39, 37, 24, 37, 37, 21, 37, 14, 17, 13, 22, 21, 39};
    vector<int> minB = {20, 35, 7, 6, 11, 9, 22, 3, 16, 29, 39, 37, 39, 35, 14, 16, 39, 36, 27, 36, 13, 5, 24, 10, 18, 9, 34, 14, 18, 34, 35, 36, 22, 39, 19, 5, 22, 21, 27, 27};
    vector<int> maxB = {25, 35, 7, 32, 12, 38, 34, 15, 37, 39, 39, 39, 39, 38, 15, 38, 39, 38, 34, 39, 33, 21, 33, 19, 29, 29, 35, 14, 19, 38, 35, 37, 27, 39, 25, 38, 25, 36, 36, 35};
    int k = 20;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003818334550212905;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> maxJ = {39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> minB = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    vector<int> maxB = {31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    int k = 20;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006284683843098235;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    int k = 20;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005443894058673988;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    int k = 35;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004121863696609754;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> minJ = {14, 17, 17, 12, 20, 25, 8, 26, 10, 22, 5, 13, 24, 21, 12, 33, 11, 24, 26, 28, 5, 4, 4, 6, 14, 6, 17, 4, 2, 14, 11, 25, 23, 9, 17, 14, 20, 3, 26, 4};
    vector<int> maxJ = {29, 38, 25, 24, 29, 30, 11, 34, 24, 30, 29, 20, 27, 28, 40, 36, 39, 39, 29, 30, 25, 6, 5, 10, 30, 11, 23, 33, 16, 35, 15, 38, 40, 17, 37, 21, 35, 28, 39, 21};
    vector<int> minB = {2, 29, 26, 19, 33, 8, 6, 5, 2, 26, 19, 24, 20, 26, 29, 4, 18, 2, 26, 9, 5, 28, 17, 25, 5, 16, 23, 21, 11, 1, 19, 27, 25, 23, 2, 29, 4, 27, 14, 9};
    vector<int> maxB = {39, 35, 39, 22, 36, 25, 36, 29, 35, 33, 31, 31, 34, 28, 34, 35, 22, 10, 37, 30, 18, 36, 38, 38, 30, 36, 40, 29, 37, 8, 33, 29, 29, 27, 10, 34, 29, 28, 38, 26};
    int k = 27;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002919018398370961;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> minJ = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10};
    vector<int> maxJ = {13, 13, 13, 13, 14, 14, 14, 14, 15, 15, 15, 15, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 19, 20, 20, 20, 20, 21, 21, 21, 21, 22, 22, 22, 22};
    vector<int> minB = {2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 11, 11, 11, 11};
    vector<int> maxB = {15, 15, 15, 15, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 19, 20, 20, 20, 20, 21, 21, 21, 21, 22, 22, 22, 22, 23, 23, 23, 23, 24, 24, 24, 24};
    int k = 30;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004676862028938306;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39};
    int k = 40;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003955642040574671;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> minJ = {3, 6, 2, 1, 1, 10, 3};
    vector<int> maxJ = {6, 9, 5, 6, 5, 10, 9};
    vector<int> minB = {1, 1, 1, 1, 8, 3, 1};
    vector<int> maxB = {3, 9, 7, 3, 10, 6, 5};
    int k = 4;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.047082056525158976;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> minJ = {2, 1, 1, 3, 1, 1, 3, 3, 1, 2, 3, 3, 1, 2, 2, 1, 2, 3, 1, 1, 2, 1, 1, 2, 1, 2, 1, 1, 3, 2, 2, 3, 1, 2, 1, 1, 2, 3, 2, 3};
    vector<int> maxJ = {40, 37, 38, 38, 37, 40, 39, 37, 39, 37, 40, 38, 39, 40, 38, 39, 40, 39, 38, 37, 38, 40, 39, 38, 38, 37, 38, 38, 40, 38, 39, 38, 37, 40, 38, 40, 38, 39, 37, 38};
    vector<int> minB = {2, 1, 1, 3, 1, 1, 3, 3, 1, 2, 3, 3, 1, 2, 2, 1, 2, 3, 1, 1, 2, 1, 1, 2, 1, 2, 1, 1, 3, 2, 2, 3, 1, 2, 1, 1, 2, 3, 2, 3};
    vector<int> maxB = {40, 37, 38, 38, 37, 40, 39, 37, 39, 37, 40, 38, 39, 40, 38, 39, 40, 39, 38, 37, 38, 40, 39, 38, 38, 37, 38, 38, 40, 38, 39, 38, 37, 40, 38, 40, 38, 39, 37, 38};
    int k = 29;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004806705925643168;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 4, 40, 40};
    int k = 40;
    TheFansAndMeetingsDivOne* pObj = new TheFansAndMeetingsDivOne();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0038218867407408424;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7433858&rd=14146&pm=10771
********************************************************************************
#include <vector>  
#include <list>  
#include <map>  
#include <set>  
#include <deque>  
#include <vector>  
#include <list>  
#include <map>  
#include <set>  
#include <deque>  
#include <queue>  
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
#include <cctype>  
#include <string>  
#include <cstring>  
#include <ctime>  
 
using namespace std; 
 
double d1[2][41][1610]; 
double p1[1610]; 
double p2[1610]; 
 
class TheFansAndMeetingsDivOne 
{ 
public: 
double find(vector <int> minJ, vector <int> maxJ, vector <int> minB, vector <int> maxB, int k) 
{ 
    int i,j,l,o,p,n,now; 
    double chu,ans; 
    n=minJ.size(); 
    memset(d1,0,sizeof(d1)); 
    d1[0][0][0]=1; 
    now=0; 
    for (i=0;i<n;i++) 
    { 
        memset(d1[1-now],0,sizeof(d1[1-now])); 
        for (j=0;j<=k;j++) 
            for (l=0;l<=40*k;l++) 
                if (d1[now][j][l]>0) 
                { 
                    d1[1-now][j][l]+=d1[now][j][l]; 
                    if (j<k) 
                        for (o=minJ[i];o<=maxJ[i];o++) 
                            d1[1-now][j+1][l+o]+=d1[now][j][l]/(maxJ[i]-minJ[i]+1); 
                } 
        now=1-now; 
    } 
    j=k; 
    for (l=0;l<=40*k;l++) 
        p1[l]=d1[now][j][l]; 
 
    memset(d1,0,sizeof(d1)); 
    d1[0][0][0]=1; 
    now=0; 
    for (i=0;i<n;i++) 
    { 
        memset(d1[1-now],0,sizeof(d1[1-now])); 
        for (j=0;j<=k;j++) 
            for (l=0;l<=40*k;l++) 
                if (d1[now][j][l]>0) 
                { 
                    d1[1-now][j][l]+=d1[now][j][l]; 
                    if (j<k) 
                        for (o=minB[i];o<=maxB[i];o++) 
                            d1[1-now][j+1][l+o]+=d1[now][j][l]/(maxB[i]-minB[i]+1); 
                } 
        now=1-now; 
    } 
    j=k; 
    for (l=0;l<=40*k;l++) 
        p2[l]=d1[now][j][l]; 
    chu=1; 
    for (i=0;i<k;i++) 
    { 
        chu*=(n-i); 
        chu/=(i+1); 
    } 
    ans=0; 
    for (l=0;l<=40*k;l++) 
    { 
        ans+=p1[l]/chu*p2[l]/chu; 
    } 
    return ans; 
} 
};

********************************************************************************
*******************************************************************************/