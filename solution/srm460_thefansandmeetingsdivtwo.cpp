/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10772
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

class TheFansAndMeetingsDivTwo {
public:
    double find(vector<int> minJ, vector<int> maxJ, vector<int> minB, vector<int> maxB);
};

double TheFansAndMeetingsDivTwo::find(vector<int> minJ, vector<int> maxJ, vector<int> minB, vector<int> maxB) {
    double ret;
    return ret;
}


int test0() {
    vector<int> minJ = {1};
    vector<int> maxJ = {3};
    vector<int> minB = {1};
    vector<int> maxB = {1};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> minJ = {5, 7, 7, 1, 6, 1, 1};
    vector<int> maxJ = {8, 9, 7, 3, 9, 5, 3};
    vector<int> minB = {9, 12, 10, 14, 50, 9, 10};
    vector<int> maxB = {9, 13, 50, 15, 50, 12, 11};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014880952380952378;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> minJ = {44};
    vector<int> maxJ = {47};
    vector<int> minB = {4};
    vector<int> maxB = {7};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
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
    vector<int> minJ = {1, 6, 3, 1, 4, 3, 5, 1};
    vector<int> maxJ = {7, 8, 5, 7, 9, 7, 9, 3};
    vector<int> minB = {5, 1, 5, 3, 1, 2, 4, 1};
    vector<int> maxB = {9, 2, 7, 9, 4, 5, 4, 9};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11562305130385474;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> minJ = {3, 1, 5, 1, 3, 1};
    vector<int> maxJ = {9, 5, 9, 7, 5, 10};
    vector<int> minB = {1, 1, 1, 3, 5, 5};
    vector<int> maxB = {3, 1, 6, 7, 8, 5};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12251763668430339;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> minJ = {1, 1, 7, 2, 1, 5, 1, 1};
    vector<int> maxJ = {3, 5, 9, 3, 9, 7, 9, 9};
    vector<int> minB = {5, 3, 6, 1, 3, 1, 7, 3};
    vector<int> maxB = {6, 5, 10, 5, 4, 3, 9, 6};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11054687499999998;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> minJ = {5, 3, 8, 1, 5, 6, 1, 4, 1};
    vector<int> maxJ = {9, 9, 9, 1, 7, 7, 5, 4, 3};
    vector<int> minB = {3, 1, 6, 9, 5, 3, 5, 5, 1};
    vector<int> maxB = {10, 1, 10, 10, 10, 7, 8, 6, 7};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10600697068951032;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> minJ = {10, 35, 14, 20, 18, 36, 24, 12, 10, 16, 10, 26, 39, 12, 31, 15, 14};
    vector<int> maxJ = {46, 37, 22, 46, 43, 42, 38, 30, 42, 30, 26, 48, 45, 28, 40, 46, 30};
    vector<int> minB = {14, 20, 16, 12, 20, 14, 33, 18, 20, 14, 26, 36, 10, 15, 30, 20, 30};
    vector<int> maxB = {18, 21, 34, 48, 23, 21, 33, 30, 40, 37, 38, 46, 32, 18, 34, 22, 47};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.028885315049831665;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> minJ = {49, 22, 30, 14, 10, 24, 34, 12, 10, 46, 11, 10, 26, 10, 10, 34, 22, 10, 20, 34, 26, 30, 14, 42, 20, 15, 38, 19, 38};
    vector<int> maxJ = {49, 38, 40, 45, 46, 37, 39, 40, 14, 48, 32, 48, 34, 28, 18, 48, 49, 17, 35, 39, 34, 42, 33, 45, 44, 45, 48, 42, 46};
    vector<int> minB = {15, 30, 18, 30, 22, 10, 34, 15, 42, 25, 10, 23, 12, 38, 22, 32, 10, 18, 18, 36, 36, 24, 43, 26, 46, 10, 22, 28, 30};
    vector<int> maxB = {32, 34, 40, 46, 42, 14, 37, 34, 44, 29, 14, 32, 40, 46, 45, 48, 38, 39, 40, 39, 45, 47, 44, 40, 48, 26, 34, 40, 42};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.027465906600859916;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> minJ = {28, 20, 38, 16, 10, 22, 35, 10, 10, 10, 16, 18, 20, 22, 42};
    vector<int> maxJ = {38, 28, 46, 40, 41, 46, 45, 10, 45, 10, 46, 42, 40, 46, 45};
    vector<int> minB = {34, 26, 40, 10, 25, 11, 22, 30, 40, 25, 14, 10, 42, 28, 10};
    vector<int> maxB = {45, 48, 49, 14, 48, 26, 34, 32, 42, 34, 24, 10, 44, 45, 14};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03542405648787763;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> minJ = {25, 11, 10, 14, 10, 20, 30, 26, 17, 35, 10, 18, 15, 24, 14, 32, 26, 14};
    vector<int> maxJ = {47, 30, 14, 30, 32, 41, 34, 45, 39, 42, 38, 43, 26, 45, 45, 48, 30, 17};
    vector<int> minB = {10, 10, 30, 10, 38, 10, 10, 12, 34, 17, 26, 31, 36, 40, 29, 10, 23, 26};
    vector<int> maxB = {42, 27, 48, 45, 46, 42, 30, 32, 42, 35, 36, 46, 40, 45, 30, 38, 35, 42};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.028709690556194746;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> minJ = {10, 10, 23, 35, 10, 17, 15, 10, 19, 40, 34, 15, 34, 25, 30, 34, 10, 17};
    vector<int> maxJ = {10, 49, 40, 42, 37, 37, 47, 18, 30, 48, 37, 36, 45, 48, 30, 40, 45, 21};
    vector<int> minB = {14, 10, 12, 10, 14, 10, 26, 38, 13, 10, 26, 16, 10, 26, 13, 11, 14, 19};
    vector<int> maxB = {30, 20, 30, 34, 14, 32, 34, 40, 22, 18, 40, 42, 38, 30, 34, 13, 26, 26};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024331436050403495;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> minJ = {42, 10, 27, 10, 34, 42, 27, 26, 18, 12};
    vector<int> maxJ = {48, 46, 40, 32, 45, 45, 30, 30, 40, 45};
    vector<int> minB = {17, 18, 42, 38, 10, 26, 42, 42, 15, 30};
    vector<int> maxB = {30, 40, 47, 45, 18, 46, 45, 46, 40, 38};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.033826981801610735;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> minJ = {26, 18, 10, 17, 10, 12, 15, 20, 23, 15, 38, 15, 14, 19, 41, 14, 14, 26, 10};
    vector<int> maxJ = {42, 42, 14, 38, 36, 42, 18, 44, 25, 45, 40, 21, 14, 42, 44, 30, 26, 26, 32};
    vector<int> minB = {32, 11, 34, 22, 16, 15, 12, 37, 10, 26, 26, 14, 34, 10, 10, 10, 26, 14, 34};
    vector<int> maxB = {32, 22, 40, 32, 49, 43, 46, 38, 34, 40, 30, 30, 40, 45, 25, 27, 35, 32, 45};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.028448193160877974;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> minJ = {14, 19, 34, 34, 12, 38, 16, 16, 12, 24, 10, 10, 14, 35, 10, 40};
    vector<int> maxJ = {20, 46, 36, 40, 18, 44, 46, 24, 26, 42, 15, 40, 38, 45, 44, 40};
    vector<int> minB = {18, 10, 20, 24, 21, 26, 35, 10, 10, 36, 10, 10, 22, 10, 11, 40};
    vector<int> maxB = {23, 22, 42, 42, 30, 32, 42, 30, 15, 38, 12, 44, 44, 30, 14, 42};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.028258594005270306;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> minJ = {26, 38, 15, 10, 25, 25, 39, 18, 12, 10, 25, 18, 14, 10, 34, 14};
    vector<int> maxJ = {38, 41, 26, 42, 39, 34, 45, 30, 30, 22, 30, 26, 16, 40, 37, 36};
    vector<int> minB = {25, 10, 18, 23, 10, 12, 26, 10, 20, 23, 22, 10, 12, 14, 26, 18};
    vector<int> maxB = {29, 34, 26, 36, 15, 30, 28, 36, 26, 24, 32, 24, 34, 14, 36, 30};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0333697760016695;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> minJ = {20, 38, 14, 16, 18, 19, 12, 20, 30, 30, 26, 28, 36, 10, 10, 18, 10, 25, 10, 10, 24, 10};
    vector<int> maxJ = {34, 46, 16, 30, 20, 45, 39, 21, 46, 48, 44, 40, 38, 46, 20, 26, 34, 30, 12, 34, 46, 35};
    vector<int> minB = {12, 38, 10, 20, 18, 10, 14, 33, 10, 28, 44, 22, 25, 10, 14, 26, 18, 26, 30, 25, 10, 30};
    vector<int> maxB = {23, 46, 31, 29, 39, 18, 30, 35, 12, 30, 45, 28, 45, 26, 40, 26, 37, 43, 33, 30, 22, 42};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.028165423428857656;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> minJ = {17, 26, 18, 21, 10, 12, 10, 10, 40, 32, 18, 36, 16, 14, 15, 32, 23, 20, 15, 14};
    vector<int> maxJ = {32, 30, 41, 40, 29, 22, 26, 30, 45, 40, 37, 46, 26, 24, 23, 40, 35, 27, 38, 20};
    vector<int> minB = {19, 12, 10, 32, 19, 30, 18, 12, 14, 33, 10, 10, 34, 18, 10, 30, 10, 25, 34, 25};
    vector<int> maxB = {30, 32, 26, 34, 42, 42, 26, 37, 26, 45, 34, 13, 39, 28, 46, 32, 14, 40, 42, 47};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02824163805763682;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> minJ = {18, 30, 14, 26, 20, 34, 20, 15, 20, 42, 10, 18, 10, 25, 25, 13, 32, 14, 26, 34, 31, 30, 18, 13, 33, 10, 14, 20};
    vector<int> maxJ = {27, 46, 21, 42, 34, 40, 38, 38, 37, 46, 34, 38, 22, 34, 30, 45, 38, 42, 32, 45, 37, 42, 42, 18, 47, 20, 18, 40};
    vector<int> minB = {14, 10, 12, 38, 12, 10, 15, 12, 38, 40, 44, 22, 12, 18, 10, 10, 10, 14, 10, 37, 12, 14, 10, 10, 10, 10, 10, 10};
    vector<int> maxB = {48, 31, 40, 45, 12, 26, 49, 40, 45, 45, 45, 36, 26, 26, 44, 27, 24, 15, 24, 42, 25, 35, 10, 34, 17, 45, 34, 44};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02419048357221935;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> minJ = {10, 10, 18, 40, 26, 25, 25, 24, 18, 26};
    vector<int> maxJ = {44, 10, 38, 42, 34, 35, 31, 49, 37, 48};
    vector<int> minB = {10, 10, 30, 12, 28, 10, 46, 10, 40, 20};
    vector<int> maxB = {12, 40, 35, 36, 30, 31, 47, 42, 45, 30};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.031457656108843185;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> minJ = {42, 45, 45, 47, 43, 40, 45, 41, 42, 43, 40, 40, 46, 44, 40, 47, 42, 40, 41, 44, 40, 47, 40, 41, 45, 45, 44};
    vector<int> maxJ = {49, 47, 47, 49, 49, 48, 48, 44, 48, 48, 44, 50, 47, 45, 42, 47, 50, 40, 42, 47, 47, 47, 43, 46, 49, 49, 46};
    vector<int> minB = {1, 3, 5, 7, 7, 4, 4, 1, 7, 1, 9, 1, 1, 2, 1, 7, 5, 2, 9, 3, 4, 1, 1, 1, 5, 7, 3};
    vector<int> maxB = {9, 12, 7, 7, 10, 9, 4, 1, 7, 4, 9, 3, 7, 9, 1, 9, 10, 4, 9, 7, 5, 1, 12, 9, 11, 9, 4};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> minJ = {41, 44, 44, 41, 40, 41, 40, 46, 40, 40, 40, 41, 40, 40, 44, 40, 40, 45, 40, 48, 45, 41, 42, 40, 43, 41, 43, 40, 43};
    vector<int> maxJ = {45, 46, 45, 50, 41, 44, 50, 48, 42, 44, 41, 47, 48, 49, 49, 41, 43, 50, 41, 49, 46, 45, 49, 47, 48, 49, 43, 45, 48};
    vector<int> minB = {1, 2, 3, 1, 8, 7, 5, 1, 3, 2, 3, 7, 2, 3, 9, 1, 1, 3, 1, 5, 3, 1, 3, 3, 9, 4, 5, 5, 1};
    vector<int> maxB = {1, 11, 11, 1, 9, 7, 9, 10, 5, 7, 12, 10, 7, 9, 11, 5, 5, 7, 1, 9, 3, 3, 9, 12, 10, 9, 7, 9, 12};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> minJ = {48, 43, 45, 44, 41, 40, 44, 40, 41, 44, 43, 46, 40, 40, 44, 40, 41, 40, 46, 49, 42, 41, 40, 44, 43, 40, 43, 49, 47, 40, 43, 42, 40, 40};
    vector<int> maxJ = {49, 49, 50, 47, 44, 44, 45, 45, 43, 47, 45, 50, 47, 43, 47, 40, 49, 46, 50, 50, 50, 49, 40, 50, 44, 47, 45, 50, 49, 50, 47, 48, 46, 40};
    vector<int> minB = {7, 1, 1, 4, 9, 5, 10, 9, 5, 9, 1, 1, 1, 5, 2, 1, 5, 1, 4, 1, 1, 1, 1, 5, 5, 10, 1, 1, 4, 2, 1, 1, 7, 4};
    vector<int> maxB = {9, 1, 7, 7, 9, 12, 10, 9, 12, 9, 3, 5, 7, 10, 4, 7, 6, 3, 4, 8, 11, 10, 12, 9, 8, 11, 2, 4, 8, 10, 1, 10, 11, 9};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> minJ = {48, 40, 40, 43, 46, 43, 45, 44, 40, 45, 46, 44, 40, 42, 42, 44, 41, 40, 47, 40, 40, 45, 44, 40, 48, 46};
    vector<int> maxJ = {48, 43, 41, 49, 48, 44, 50, 47, 49, 49, 48, 49, 40, 49, 50, 48, 48, 49, 50, 44, 47, 49, 50, 41, 50, 48};
    vector<int> minB = {7, 5, 5, 1, 4, 1, 4, 5, 1, 7, 1, 4, 4, 1, 1, 3, 4, 1, 1, 5, 1, 1, 4, 5, 9, 4};
    vector<int> maxB = {7, 8, 8, 4, 7, 4, 10, 7, 5, 10, 11, 5, 5, 10, 9, 9, 7, 10, 3, 9, 9, 7, 7, 10, 11, 12};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> minJ = {41, 41, 41, 49, 42, 40, 43, 40, 47, 40, 46, 41, 40, 42, 40, 44, 40, 40, 40, 40, 47, 42, 40};
    vector<int> maxJ = {47, 43, 47, 49, 43, 43, 48, 48, 47, 46, 49, 42, 41, 44, 46, 49, 45, 48, 43, 47, 48, 44, 43};
    vector<int> minB = {4, 3, 6, 1, 9, 7, 1, 1, 1, 7, 1, 1, 7, 9, 7, 3, 3, 6, 1, 7, 1, 1, 1};
    vector<int> maxB = {10, 9, 8, 1, 10, 12, 9, 1, 1, 9, 3, 1, 9, 11, 11, 4, 5, 7, 7, 10, 5, 9, 11};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> minJ = {40, 41, 47, 43, 45, 43, 40, 47, 45, 42, 41, 41, 40, 45, 44, 43, 40, 40, 49, 41, 43, 45, 45, 47, 40, 41, 41, 42, 40, 42, 40, 40, 43, 40, 48, 42, 45, 43, 40, 42, 40, 41, 43, 48};
    vector<int> maxJ = {45, 48, 49, 49, 48, 50, 43, 50, 47, 45, 50, 47, 40, 47, 44, 47, 46, 45, 49, 50, 47, 48, 49, 48, 47, 41, 49, 45, 50, 50, 40, 41, 48, 40, 49, 50, 46, 44, 50, 43, 50, 50, 45, 49};
    vector<int> minB = {8, 5, 7, 1, 4, 1, 1, 2, 5, 1, 1, 7, 1, 4, 1, 1, 3, 9, 1, 1, 7, 1, 6, 7, 5, 1, 1, 4, 5, 1, 7, 1, 8, 1, 9, 1, 1, 1, 1, 9, 1, 1, 10, 1};
    vector<int> maxB = {10, 7, 7, 7, 5, 10, 1, 10, 12, 4, 7, 9, 11, 10, 1, 1, 3, 9, 5, 5, 10, 9, 9, 8, 10, 9, 1, 6, 7, 11, 12, 7, 8, 9, 11, 5, 12, 10, 8, 12, 1, 5, 12, 7};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> minJ = {43, 49, 40, 45, 48, 40, 45, 40, 40, 41, 45, 40, 44, 47, 42, 44, 40, 42, 46, 42, 46, 45, 44, 43, 47, 43, 41, 40, 48, 40, 40, 40};
    vector<int> maxJ = {48, 49, 49, 47, 49, 45, 49, 40, 44, 49, 49, 44, 45, 48, 46, 46, 45, 46, 50, 45, 48, 50, 46, 45, 49, 44, 50, 40, 49, 44, 43, 44};
    vector<int> minB = {1, 1, 1, 1, 1, 7, 1, 4, 1, 1, 1, 5, 1, 1, 1, 7, 1, 4, 5, 1, 4, 5, 1, 5, 4, 2, 11, 1, 5, 5, 5, 1};
    vector<int> maxB = {9, 7, 10, 9, 9, 8, 1, 4, 1, 4, 10, 7, 9, 7, 1, 12, 9, 10, 5, 1, 7, 8, 7, 9, 7, 11, 12, 7, 8, 7, 9, 1};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> minJ = {46, 40, 44, 42, 46, 47, 40, 48, 41, 41, 47, 40, 43, 48, 41, 43, 46, 40, 48, 41, 43, 46, 44, 44, 42, 41, 43, 43, 45, 46, 41, 50, 40, 48, 40, 40, 41, 44, 44, 41, 41, 40, 40, 40, 42, 40};
    vector<int> maxJ = {50, 46, 50, 49, 48, 50, 45, 48, 47, 42, 47, 50, 46, 50, 41, 43, 49, 48, 50, 49, 50, 48, 49, 47, 50, 44, 48, 49, 50, 50, 42, 50, 49, 49, 42, 45, 47, 44, 47, 50, 45, 42, 48, 43, 47, 42};
    vector<int> minB = {1, 1, 5, 1, 1, 1, 7, 5, 1, 1, 1, 1, 1, 1, 1, 1, 5, 3, 5, 5, 6, 4, 1, 1, 4, 11, 7, 10, 1, 5, 4, 7, 7, 1, 3, 1, 4, 1, 1, 1, 4, 1, 1, 1, 6, 1};
    vector<int> maxB = {11, 6, 7, 2, 11, 4, 8, 6, 1, 1, 8, 12, 1, 7, 3, 9, 9, 7, 7, 8, 9, 9, 11, 1, 7, 11, 10, 11, 11, 12, 6, 11, 7, 7, 5, 4, 7, 7, 1, 10, 9, 5, 7, 1, 12, 10};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> minJ = {40, 40, 49, 47, 40, 41, 40, 40, 40, 45, 43, 40, 42, 40, 48, 40, 40, 43, 43, 41, 43, 42, 43, 45, 41, 42, 50};
    vector<int> maxJ = {41, 42, 50, 49, 42, 48, 47, 47, 48, 46, 48, 45, 48, 42, 49, 42, 46, 49, 50, 44, 45, 44, 49, 48, 41, 46, 50};
    vector<int> minB = {1, 7, 4, 1, 3, 1, 2, 1, 3, 1, 7, 6, 7, 1, 1, 1, 1, 3, 1, 1, 3, 1, 1, 3, 1, 7, 7};
    vector<int> maxB = {1, 8, 7, 11, 11, 4, 11, 9, 6, 10, 12, 10, 7, 7, 7, 11, 1, 7, 7, 3, 9, 7, 9, 4, 7, 9, 12};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> minJ = {42, 48, 50, 42, 45, 50, 43, 46, 42, 46, 40, 40, 42, 42, 48, 41, 43, 44, 40, 40, 43, 43, 40, 44, 40, 48, 42, 40};
    vector<int> maxJ = {44, 48, 50, 42, 46, 50, 49, 50, 45, 49, 43, 44, 49, 46, 49, 46, 47, 48, 42, 47, 45, 46, 42, 50, 41, 49, 47, 43};
    vector<int> minB = {1, 1, 1, 4, 3, 9, 10, 3, 5, 1, 1, 7, 1, 3, 4, 7, 1, 1, 1, 7, 4, 1, 3, 1, 3, 1, 3, 1};
    vector<int> maxB = {9, 10, 7, 10, 4, 10, 12, 5, 7, 8, 4, 12, 10, 5, 8, 10, 9, 1, 10, 10, 11, 7, 5, 11, 7, 7, 5, 1};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> minJ = {1, 26, 15, 11, 29, 23, 19, 11, 23, 1, 37, 17, 40, 13, 22, 36, 1, 10, 23, 1, 35, 27, 5, 1, 21, 1, 43, 2, 31, 14, 29, 11, 26, 23, 1, 16, 20, 5, 17, 35, 35, 17, 16, 29, 13, 19, 6, 25, 29, 11};
    vector<int> maxJ = {7, 38, 23, 37, 34, 27, 35, 13, 31, 7, 41, 49, 46, 29, 31, 47, 35, 10, 49, 35, 39, 31, 13, 10, 48, 36, 47, 50, 45, 35, 31, 19, 49, 30, 1, 40, 39, 20, 43, 48, 36, 21, 19, 41, 15, 47, 41, 36, 37, 40};
    vector<int> minB = {19, 2, 7, 23, 34, 2, 34, 29, 11, 15, 17, 7, 13, 29, 15, 13, 31, 6, 13, 11, 1, 3, 35, 5, 33, 15, 26, 1, 23, 3, 17, 33, 5, 33, 8, 21, 25, 7, 1, 14, 3, 15, 6, 19, 1, 23, 19, 1, 17, 11};
    vector<int> maxB = {25, 41, 45, 49, 41, 5, 44, 31, 31, 18, 49, 27, 21, 46, 41, 21, 38, 50, 31, 41, 46, 17, 48, 35, 45, 45, 29, 43, 39, 47, 21, 39, 39, 39, 19, 21, 27, 26, 5, 24, 31, 37, 47, 23, 20, 39, 29, 29, 49, 37};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.022860243235238876;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> minJ = {11, 26, 16, 1, 1, 1, 17, 3, 11, 27, 26, 9, 33, 11, 41, 1, 17, 13, 1, 33, 5, 18, 7, 17, 1, 21, 1, 9, 26, 23, 1, 21, 1, 11, 1, 11, 46, 11, 13, 11, 15, 7, 26, 16, 11, 4, 5};
    vector<int> maxJ = {21, 33, 47, 43, 6, 11, 45, 35, 21, 45, 49, 25, 41, 18, 49, 6, 19, 31, 11, 33, 13, 36, 37, 32, 17, 26, 30, 31, 34, 37, 31, 40, 43, 16, 25, 48, 47, 19, 40, 11, 27, 17, 41, 17, 24, 11, 26};
    vector<int> minB = {2, 7, 15, 13, 11, 26, 5, 1, 1, 3, 11, 8, 31, 11, 1, 13, 1, 1, 6, 10, 33, 31, 34, 17, 26, 16, 9, 1, 5, 9, 41, 1, 3, 35, 45, 13, 25, 1, 24, 39, 1, 33, 29, 1, 5, 1, 37};
    vector<int> maxB = {49, 42, 26, 21, 33, 31, 37, 39, 3, 6, 13, 26, 32, 45, 25, 31, 32, 45, 47, 28, 36, 39, 39, 36, 45, 35, 13, 27, 48, 21, 45, 34, 41, 38, 48, 28, 29, 11, 29, 48, 26, 45, 39, 11, 25, 22, 42};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02230386821759239;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> minJ = {20, 3, 17, 3, 19, 5, 7, 13, 17, 11, 1, 33, 3, 1, 29, 31, 3, 6, 21, 4, 6, 1, 36, 15, 3, 5, 1, 27, 17, 3, 35, 9, 27, 31, 13, 2, 7, 26, 1, 5, 29, 1, 9, 26, 21, 32, 33, 10, 31, 27};
    vector<int> maxJ = {47, 41, 39, 38, 21, 11, 33, 21, 27, 16, 33, 47, 19, 45, 38, 47, 3, 19, 25, 36, 26, 29, 42, 35, 50, 12, 5, 35, 17, 41, 47, 37, 31, 43, 35, 25, 47, 27, 23, 26, 31, 21, 45, 45, 31, 41, 37, 26, 45, 39};
    vector<int> minB = {19, 1, 11, 8, 6, 26, 7, 26, 13, 26, 9, 3, 3, 1, 23, 40, 14, 23, 38, 1, 7, 1, 25, 5, 1, 1, 31, 6, 35, 36, 14, 23, 5, 35, 39, 33, 27, 15, 31, 43, 26, 1, 23, 21, 15, 1, 47, 2, 36, 11};
    vector<int> maxB = {31, 8, 31, 13, 26, 39, 18, 41, 19, 31, 30, 33, 22, 5, 23, 47, 46, 37, 39, 45, 21, 17, 31, 41, 36, 36, 38, 7, 43, 45, 41, 50, 21, 43, 41, 39, 33, 41, 47, 47, 33, 11, 45, 26, 35, 1, 49, 49, 47, 13};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02146575953866377;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> minJ = {24, 1, 1, 19, 13, 11, 4, 9, 21, 3, 35, 7, 21, 13, 7, 11, 1, 19, 11, 35, 6, 11, 21, 5, 23, 16, 27, 5, 17, 8, 24, 11, 26, 23, 1, 18, 3, 29, 5, 30, 3, 31, 13, 37, 1, 11, 7, 25, 29};
    vector<int> maxJ = {50, 36, 36, 49, 21, 41, 26, 23, 35, 21, 45, 35, 43, 14, 19, 32, 10, 40, 49, 41, 14, 13, 39, 6, 39, 26, 41, 41, 37, 9, 27, 44, 31, 41, 23, 40, 31, 41, 41, 41, 3, 37, 21, 46, 4, 48, 41, 37, 35};
    vector<int> minB = {26, 25, 30, 21, 31, 13, 1, 5, 7, 1, 27, 19, 1, 37, 15, 7, 1, 6, 30, 2, 7, 9, 17, 1, 29, 31, 11, 39, 5, 1, 1, 15, 5, 16, 13, 27, 3, 32, 10, 13, 1, 9, 28, 33, 29, 45, 7, 10, 16};
    vector<int> maxB = {36, 33, 47, 47, 37, 35, 23, 37, 45, 15, 38, 37, 15, 39, 47, 31, 9, 10, 43, 21, 21, 31, 45, 29, 47, 47, 21, 47, 31, 16, 43, 41, 7, 31, 41, 41, 42, 37, 43, 33, 47, 31, 41, 35, 46, 47, 44, 15, 29};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.022892915216855023;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> minJ = {31, 3, 21, 1, 25, 46, 19, 41, 11, 6, 25, 35, 1, 3, 41, 7, 16, 37, 3, 9, 15, 26, 3, 25, 1, 8, 32, 26, 9, 15, 28, 1, 5, 21, 41, 11, 9, 11, 25, 6, 6, 5, 28, 27, 31, 25, 5, 6};
    vector<int> maxJ = {37, 11, 35, 26, 33, 48, 35, 41, 42, 27, 33, 47, 40, 46, 46, 31, 31, 39, 7, 35, 16, 41, 21, 46, 47, 46, 33, 31, 41, 19, 28, 31, 15, 31, 45, 21, 9, 33, 27, 16, 42, 50, 29, 29, 46, 41, 16, 20};
    vector<int> minB = {11, 26, 1, 46, 5, 48, 9, 32, 33, 29, 21, 11, 16, 1, 23, 5, 19, 13, 6, 17, 1, 28, 43, 13, 5, 8, 6, 33, 41, 21, 11, 19, 1, 41, 3, 1, 26, 7, 1, 21, 7, 31, 31, 11, 21, 3, 21, 47};
    vector<int> maxB = {13, 44, 18, 49, 11, 49, 27, 45, 43, 31, 23, 29, 19, 48, 39, 6, 45, 31, 33, 21, 24, 29, 45, 45, 45, 13, 13, 35, 44, 24, 21, 26, 1, 45, 41, 31, 41, 13, 39, 22, 8, 43, 36, 21, 38, 21, 31, 48};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02106904595221081;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> minJ = {23, 11, 14, 1, 29, 11, 1, 16, 45, 39, 1, 8, 14, 11, 11, 3, 4, 6, 19, 13, 3, 21, 21, 19, 12, 29, 23, 24, 3, 13, 1, 17, 37, 7, 6, 37, 21, 46, 13, 37, 11, 21, 1, 15, 40, 11, 21, 21, 31};
    vector<int> maxJ = {47, 24, 24, 3, 35, 11, 45, 31, 46, 41, 37, 37, 37, 27, 17, 11, 30, 15, 37, 44, 33, 41, 41, 31, 39, 49, 31, 31, 40, 46, 13, 27, 41, 15, 41, 43, 49, 47, 45, 43, 43, 43, 25, 47, 49, 29, 41, 42, 34};
    vector<int> minB = {37, 25, 16, 13, 5, 7, 13, 1, 21, 16, 9, 1, 18, 26, 17, 11, 5, 16, 19, 8, 1, 11, 21, 16, 28, 21, 26, 1, 1, 20, 9, 9, 13, 28, 36, 17, 33, 18, 9, 1, 11, 46, 7, 17, 19, 11, 7, 21, 24};
    vector<int> maxB = {43, 28, 46, 26, 33, 43, 41, 31, 43, 25, 13, 13, 21, 31, 30, 44, 16, 38, 23, 15, 18, 15, 37, 26, 35, 37, 37, 21, 1, 21, 41, 21, 31, 45, 41, 39, 37, 21, 30, 41, 17, 47, 27, 36, 41, 49, 38, 27, 30};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02332385489469141;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> minJ = {21, 16, 19, 1, 21, 32, 11, 15, 15, 41, 14, 15, 39, 15, 11, 13, 1, 1, 1, 7, 31, 1, 1, 11, 1, 15, 6, 1, 25, 35, 26, 11, 19, 25, 16, 14, 31, 3, 20, 36, 5, 17, 11, 43, 9, 5, 21, 32, 10};
    vector<int> maxJ = {29, 41, 26, 17, 49, 35, 31, 26, 17, 43, 20, 40, 46, 33, 12, 49, 3, 21, 22, 25, 45, 39, 35, 27, 27, 34, 13, 7, 26, 43, 45, 45, 47, 38, 41, 43, 43, 6, 31, 45, 49, 25, 43, 44, 17, 15, 21, 34, 33};
    vector<int> minB = {21, 1, 14, 31, 31, 7, 8, 7, 12, 23, 3, 25, 15, 13, 31, 2, 18, 10, 1, 5, 25, 1, 21, 1, 11, 16, 7, 25, 35, 39, 1, 10, 14, 39, 1, 27, 37, 1, 11, 11, 23, 1, 7, 9, 35, 14, 5, 11, 11};
    vector<int> maxB = {50, 24, 28, 41, 31, 49, 21, 27, 20, 47, 26, 25, 25, 31, 47, 31, 43, 27, 6, 11, 26, 22, 35, 41, 27, 39, 41, 41, 47, 49, 25, 13, 25, 46, 14, 47, 41, 16, 19, 17, 27, 33, 35, 31, 43, 45, 21, 17, 19};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.023256816036431645;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> minJ = {2, 1, 1, 4, 5, 11, 18, 25, 24, 15, 47, 5, 32, 31, 1, 12, 35, 5, 23, 1, 13, 5, 11, 16, 16, 1, 15, 15, 41, 33, 29, 31, 7, 14, 17, 15, 11, 9, 9, 3, 15, 30, 1, 2, 4, 6, 33};
    vector<int> maxJ = {13, 47, 17, 43, 21, 17, 25, 27, 25, 27, 49, 25, 41, 33, 1, 30, 44, 23, 37, 13, 46, 44, 28, 33, 28, 31, 31, 22, 45, 35, 49, 35, 28, 29, 50, 46, 41, 11, 29, 36, 15, 31, 5, 45, 41, 41, 41};
    vector<int> minB = {7, 3, 3, 27, 9, 9, 23, 6, 15, 31, 22, 21, 15, 7, 1, 21, 5, 48, 2, 39, 8, 12, 11, 31, 1, 7, 43, 1, 39, 20, 1, 14, 1, 6, 11, 5, 25, 5, 16, 15, 41, 1, 1, 20, 1, 11, 3};
    vector<int> maxB = {41, 40, 8, 31, 21, 35, 41, 31, 21, 40, 31, 42, 43, 39, 5, 47, 11, 49, 31, 44, 35, 21, 28, 38, 31, 29, 44, 25, 41, 39, 20, 19, 29, 45, 39, 15, 43, 11, 44, 23, 42, 31, 46, 45, 31, 26, 36};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0223855456367634;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> minJ = {48, 8, 1, 11, 3, 25, 16, 16, 38, 1, 39, 11, 14, 17, 14, 9, 5, 1, 25, 26, 29, 1, 1, 36, 11, 32, 1, 20, 45, 20, 3, 19, 41, 7, 14, 13, 33, 7, 7, 23, 19, 21, 5, 21, 31, 23, 3};
    vector<int> maxJ = {49, 33, 17, 31, 28, 31, 45, 21, 46, 21, 43, 11, 36, 31, 27, 41, 31, 32, 41, 27, 35, 27, 13, 47, 26, 33, 30, 27, 49, 27, 42, 29, 43, 37, 19, 23, 47, 12, 21, 27, 27, 27, 37, 24, 47, 46, 47};
    vector<int> minB = {1, 9, 39, 13, 5, 5, 15, 19, 11, 6, 21, 25, 13, 7, 33, 10, 1, 26, 31, 27, 1, 3, 26, 30, 1, 2, 1, 43, 31, 7, 19, 25, 17, 33, 11, 13, 27, 13, 11, 43, 11, 7, 35, 1, 31, 21, 23};
    vector<int> maxB = {39, 26, 40, 18, 34, 7, 24, 26, 21, 43, 33, 50, 37, 23, 47, 31, 19, 36, 39, 45, 43, 22, 37, 43, 41, 50, 45, 47, 45, 33, 34, 37, 26, 36, 12, 40, 50, 46, 33, 46, 43, 29, 39, 43, 43, 46, 36};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.022482923364524784;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> minJ = {13, 1, 21, 2, 26, 17, 14, 14, 5, 1, 1, 1, 11, 7, 1, 13, 3, 1, 9, 9, 27, 1, 21, 1, 3, 11, 26, 3, 5, 30, 1, 21, 1, 21, 13, 19, 15, 1, 13, 1, 9, 20, 7, 39, 18, 23, 33};
    vector<int> maxJ = {20, 45, 32, 6, 49, 49, 21, 28, 27, 21, 12, 7, 30, 9, 22, 45, 28, 46, 50, 9, 41, 3, 44, 41, 5, 17, 47, 20, 29, 39, 9, 31, 23, 29, 47, 31, 25, 45, 49, 31, 21, 26, 35, 47, 47, 41, 44};
    vector<int> minB = {1, 39, 21, 3, 7, 7, 11, 5, 41, 24, 11, 21, 17, 7, 31, 9, 21, 17, 17, 16, 17, 8, 29, 11, 30, 29, 2, 1, 33, 1, 26, 9, 1, 21, 6, 20, 15, 23, 11, 17, 39, 39, 33, 31, 17, 8, 9};
    vector<int> maxB = {21, 43, 48, 49, 17, 39, 13, 36, 46, 31, 11, 31, 46, 30, 32, 50, 31, 20, 26, 39, 35, 31, 46, 47, 31, 35, 47, 11, 39, 1, 33, 49, 41, 29, 27, 31, 21, 30, 29, 34, 43, 40, 35, 41, 18, 10, 10};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02175548808646403;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> minJ = {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    vector<int> maxJ = {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    vector<int> minB = {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    vector<int> maxB = {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999799;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> minJ = {23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23};
    vector<int> maxJ = {23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23};
    vector<int> minB = {43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43};
    vector<int> maxB = {43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> minJ = {1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {1, 2, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6440329218106948;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 2};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1};
    vector<int> maxB = {1, 2, 1, 1, 2, 1, 1, 2, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6577909270216961;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {2, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1};
    vector<int> minB = {1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {1, 1, 1, 2, 2, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 1};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5727040816326536;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> minJ = {1, 26, 5, 11, 9, 27, 15, 3, 1, 7, 1, 17, 30, 3, 22, 6, 5, 40, 23, 21, 5, 1, 15, 1, 28, 1, 33, 2, 1, 14, 19, 1, 36, 23, 1, 26, 9, 25, 27, 5, 35, 11, 36, 1, 25, 19, 21, 25, 17, 31};
    vector<int> maxJ = {37, 28, 13, 37, 34, 33, 29, 21, 33, 21, 17, 39, 36, 19, 31, 37, 21, 40, 29, 25, 9, 37, 33, 30, 31, 6, 37, 20, 5, 25, 31, 29, 39, 40, 1, 30, 30, 30, 33, 38, 36, 17, 39, 29, 33, 37, 26, 36, 39, 40};
    vector<int> minB = {15, 21, 17, 13, 21, 15, 34, 19, 21, 15, 27, 37, 11, 16, 31, 21, 31, 16, 23, 41, 31, 23, 15, 35, 13, 15, 26, 11, 33, 13, 11, 19, 35, 23, 18, 21, 35, 27, 25, 34, 41, 45, 16, 23, 20, 39, 29, 21, 39, 17};
    vector<int> maxB = {19, 22, 35, 49, 24, 22, 34, 31, 41, 38, 39, 47, 33, 19, 35, 23, 48, 50, 31, 41, 46, 47, 38, 35, 35, 45, 49, 33, 49, 27, 47, 23, 49, 39, 19, 41, 37, 46, 31, 44, 43, 47, 27, 49, 41, 43, 39, 29, 47, 41};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02238533610274826;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> minJ = {1, 13, 17, 1, 21, 1, 25, 5, 1, 35, 19, 5, 1, 1, 21, 1, 29, 1, 1, 3, 25, 8, 17, 22, 27, 31, 20, 1, 14, 17, 1, 1, 3, 1, 1, 1, 6, 1, 10, 1, 17, 7, 1, 16, 4, 4, 5, 8, 33, 1};
    vector<int> maxJ = {1, 16, 26, 13, 36, 31, 37, 33, 11, 37, 36, 29, 33, 18, 39, 36, 37, 33, 21, 23, 33, 26, 27, 37, 31, 36, 21, 29, 26, 33, 21, 40, 31, 26, 5, 8, 17, 29, 13, 31, 25, 27, 36, 17, 21, 31, 36, 10, 39, 37};
    vector<int> minB = {42, 12, 35, 11, 11, 11, 17, 11, 41, 23, 11, 26, 12, 11, 15, 11, 21, 31, 27, 18, 36, 11, 19, 16, 25, 15, 33, 27, 15, 11, 11, 21, 31, 35, 15, 33, 19, 31, 14, 19, 16, 35, 39, 31, 35, 11, 22, 11, 18, 19};
    vector<int> maxB = {49, 47, 46, 33, 43, 26, 25, 19, 43, 46, 43, 48, 31, 15, 31, 33, 42, 35, 46, 40, 43, 39, 44, 27, 46, 46, 49, 31, 18, 19, 15, 24, 43, 38, 38, 48, 35, 41, 49, 38, 41, 43, 49, 31, 35, 12, 27, 27, 31, 41};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.020504923450441373;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0200000000000089;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> minJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> minB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> maxB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.99999999999995;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> minJ = {5, 7, 7, 1, 6, 1, 1};
    vector<int> maxJ = {8, 9, 7, 3, 9, 5, 3};
    vector<int> minB = {9, 12, 10, 14, 50, 9, 10};
    vector<int> maxB = {9, 13, 50, 15, 50, 12, 11};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014880952380952378;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> minJ = {1, 6, 3, 1, 4, 3, 5, 1};
    vector<int> maxJ = {7, 8, 5, 7, 9, 7, 9, 3};
    vector<int> minB = {5, 1, 5, 3, 1, 2, 4, 1};
    vector<int> maxB = {9, 2, 7, 9, 4, 5, 4, 9};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11562305130385474;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> minJ = {1, 3, 5};
    vector<int> maxJ = {7, 9, 9};
    vector<int> minB = {2, 7, 3};
    vector<int> maxB = {9, 10, 4};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10396825396825396;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> minJ = {1, 5, 4, 3, 2, 5};
    vector<int> maxJ = {4, 5, 5, 20, 48, 6};
    vector<int> minB = {3, 14, 25, 36, 17, 1};
    vector<int> maxB = {5, 16, 25, 40, 17, 50};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03869582348305762;
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
    vector<int> maxJ = {1};
    vector<int> minB = {1};
    vector<int> maxB = {1};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> minJ = {1};
    vector<int> maxJ = {3};
    vector<int> minB = {1};
    vector<int> maxB = {1};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> minJ = {1, 2, 3};
    vector<int> maxJ = {6, 7, 8};
    vector<int> minB = {1, 2, 3};
    vector<int> maxB = {5, 6, 9};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13597883597883603;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> minJ = {1, 6, 3, 1, 4, 3, 5, 1, 1};
    vector<int> maxJ = {7, 8, 5, 7, 9, 7, 9, 3, 2};
    vector<int> minB = {5, 1, 5, 3, 1, 2, 4, 1, 3};
    vector<int> maxB = {9, 2, 7, 9, 4, 5, 4, 9, 4};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11672881498278315;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> minJ = {1, 6, 3, 1, 4, 3, 5, 1, 5, 7};
    vector<int> maxJ = {7, 8, 5, 7, 9, 7, 9, 3, 6, 7};
    vector<int> minB = {5, 1, 5, 3, 1, 2, 4, 1, 5, 5};
    vector<int> maxB = {9, 2, 7, 9, 4, 5, 4, 9, 5, 6};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12470907029478458;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> minJ = {2, 2, 2, 2, 2, 2};
    vector<int> maxJ = {9, 9, 9, 9, 9, 9};
    vector<int> minB = {1, 1, 1, 1, 1, 1};
    vector<int> maxB = {50, 50, 50, 50, 50, 50};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.020000000000000056;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> minJ = {50};
    vector<int> maxJ = {50};
    vector<int> minB = {43};
    vector<int> maxB = {50};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.125;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> minJ = {1};
    vector<int> maxJ = {3};
    vector<int> minB = {7};
    vector<int> maxB = {10};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> minJ = {50};
    vector<int> maxJ = {50};
    vector<int> minB = {50};
    vector<int> maxB = {50};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> minJ = {1, 5, 7, 8};
    vector<int> maxJ = {7, 12, 15, 19};
    vector<int> minB = {2, 4, 6, 7};
    vector<int> maxB = {10, 30, 40, 50};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03400374564809092;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> minJ = {3};
    vector<int> maxJ = {5};
    vector<int> minB = {2};
    vector<int> maxB = {6};
    TheFansAndMeetingsDivTwo* pObj = new TheFansAndMeetingsDivTwo();
    clock_t start = clock();
    double result = pObj->find(minJ, maxJ, minB, maxB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22685312&rd=14146&pm=10772
********************************************************************************
#include <string> 
#include <vector> 
#include <algorithm> 
#include <queue> 
#include <cmath> 
#define pi 3.14159265358979323846264338327950288 
#define INF 1000000007 
#define EPS 0.000000001 
using namespace std; 
int n,i,j; 
double r,a[51],b[51]; 
class TheFansAndMeetingsDivTwo { 
  public: double find(vector <int> minJ, vector <int> maxJ, vector <int> minB, vector <int> maxB) { 
    n=minJ.size(); 
    for(i=0;i<n;i++){ 
        for(j=minJ[i];j<=maxJ[i];j++) 
            a[j]+=1.0/n/(maxJ[i]-minJ[i]+1); 
        for(j=minB[i];j<=maxB[i];j++) 
            b[j]+=1.0/n/(maxB[i]-minB[i]+1); 
    } 
    r=0; 
    for(i=0;i<51;i++) 
        r+=a[i]*b[i]; 
    return r; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/