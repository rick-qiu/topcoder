/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4612
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

class ClockManagement {
public:
    double winProbability(vector<int> percentageA, vector<int> percentageB, vector<int> reboundA, vector<int> reboundB, int time, int scoreA, int scoreB);
};

double ClockManagement::winProbability(vector<int> percentageA, vector<int> percentageB, vector<int> reboundA, vector<int> reboundB, int time, int scoreA, int scoreB) {
    double ret;
    return ret;
}


int test0() {
    vector<int> percentageA = {10, 20, 30, 40};
    vector<int> percentageB = {10, 20, 30, 40};
    vector<int> reboundA = {1, 2, 3, 4};
    vector<int> reboundB = {1, 2, 3, 4};
    int time = 5;
    int scoreA = 99;
    int scoreB = 100;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> percentageA = {10, 20, 30, 40};
    vector<int> percentageB = {10, 20, 30, 40};
    vector<int> reboundA = {1, 2, 3, 4};
    vector<int> reboundB = {1, 2, 3, 4};
    int time = 5;
    int scoreA = 98;
    int scoreB = 100;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
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
    vector<int> percentageA = {10, 20, 30, 40};
    vector<int> percentageB = {10, 20, 30, 40};
    vector<int> reboundA = {1, 2, 3, 4};
    vector<int> reboundB = {1, 2, 3, 4};
    int time = 10;
    int scoreA = 98;
    int scoreB = 100;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.011519999999999997;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> percentageA = {5, 8, 10, 13, 15, 20, 25, 30, 35, 40, 41, 42, 42, 43, 44, 46, 45, 45, 46, 47, 48, 48, 48, 49};
    vector<int> percentageB = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> reboundA = {20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43};
    vector<int> reboundB = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int time = 180;
    int scoreA = 94;
    int scoreB = 100;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11549711731257152;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> percentageA = {0};
    vector<int> percentageB = {0};
    vector<int> reboundA = {0};
    vector<int> reboundB = {0};
    int time = 120;
    int scoreA = 99;
    int scoreB = 98;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
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
    vector<int> percentageA = {100};
    vector<int> percentageB = {100};
    vector<int> reboundA = {100};
    vector<int> reboundB = {100};
    int time = 1;
    int scoreA = 100;
    int scoreB = 100;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
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
    vector<int> percentageA = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> percentageB = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> reboundA = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> reboundB = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int time = 180;
    int scoreA = 100;
    int scoreB = 100;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.42987449203679523;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> percentageA = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43};
    vector<int> percentageB = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    vector<int> reboundA = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33};
    vector<int> reboundB = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    int time = 180;
    int scoreA = 99;
    int scoreB = 100;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6750794552557516;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> percentageA = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43};
    vector<int> percentageB = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    vector<int> reboundA = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33};
    vector<int> reboundB = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    int time = 50;
    int scoreA = 97;
    int scoreB = 100;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06837784648408529;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> percentageA = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> percentageB = {5, 8, 10, 13, 15, 20, 25, 30, 35, 40, 41, 42, 42, 43, 44, 46, 45, 45, 46, 47, 48, 48, 48, 49};
    vector<int> reboundA = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> reboundB = {20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43};
    int time = 180;
    int scoreA = 100;
    int scoreB = 97;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4440988111855081;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> percentageA = {0, 100};
    vector<int> percentageB = {100, 100};
    vector<int> reboundA = {100, 100};
    vector<int> reboundB = {100, 100};
    int time = 10;
    int scoreA = 54;
    int scoreB = 55;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> percentageA = {100};
    vector<int> percentageB = {100};
    vector<int> reboundA = {100};
    vector<int> reboundB = {100};
    int time = 31;
    int scoreA = 65;
    int scoreB = 66;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> percentageA = {5, 0, 87, 34, 56, 67, 91, 66, 48, 7, 22, 20, 49, 14, 19, 14, 91, 44, 32, 90};
    vector<int> percentageB = {83, 32, 65, 98, 93, 26, 7, 47, 12, 56, 48, 71, 74, 55, 52, 49, 17, 10, 57, 11};
    vector<int> reboundA = {3, 62, 65, 5, 13, 16, 65, 33, 0, 94, 73, 31, 77, 60, 49, 47, 65, 76, 70, 96};
    vector<int> reboundB = {83, 61, 1, 30, 72, 3, 3, 64, 24, 37, 9, 56, 15, 54, 17, 82, 82, 66, 18, 37};
    int time = 33;
    int scoreA = 57;
    int scoreB = 50;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
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
    vector<int> percentageA = {29, 71, 73, 45, 86, 79, 59, 1, 74, 42, 96, 88, 58, 34, 91, 52, 97, 63, 99, 87};
    vector<int> percentageB = {23, 39, 11, 9, 0, 60, 37, 100, 80, 13, 59, 13, 78, 58, 6, 69, 50, 73, 18, 98};
    vector<int> reboundA = {11, 25, 0, 99, 98, 0, 50, 58, 34, 57, 37, 82, 43, 22, 56, 34, 57, 55, 59, 66};
    vector<int> reboundB = {2, 76, 60, 82, 60, 38, 29, 98, 40, 1, 57, 73, 88, 66, 67, 23, 23, 76, 54, 38};
    int time = 59;
    int scoreA = 36;
    int scoreB = 39;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> percentageA = {47, 45, 38, 76, 52, 69, 94, 86, 5, 13, 38, 50, 46, 96, 28, 20, 88, 1, 9, 45, 66, 7, 59, 40, 31, 3, 51, 23, 28, 82, 62, 76, 53, 86, 80, 77, 59, 6};
    vector<int> percentageB = {50, 49, 22, 90, 60, 48, 35, 25, 31, 43, 5, 23, 5, 94, 18, 50, 12, 66, 12, 73, 59, 60, 4, 36, 37, 33, 10, 95, 75, 67, 83, 91, 59, 42, 60, 68, 22, 57};
    vector<int> reboundA = {49, 78, 18, 0, 0, 76, 75, 0, 3, 69, 82, 29, 45, 31, 61, 50, 16, 31, 12, 62, 87, 4, 48, 92, 47, 73, 39, 79, 57, 91, 82, 54, 33, 84, 58, 71, 77, 26};
    vector<int> reboundB = {29, 83, 69, 56, 63, 70, 93, 93, 95, 72, 94, 61, 83, 3, 62, 41, 74, 0, 86, 42, 49, 16, 77, 61, 88, 59, 95, 59, 37, 60, 66, 0, 95, 76, 20, 36, 17, 100};
    int time = 163;
    int scoreA = 86;
    int scoreB = 82;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9989723564557763;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> percentageA = {34, 67, 21, 1, 89, 62, 17, 14, 93, 89, 42};
    vector<int> percentageB = {12, 95, 67, 21, 69, 9, 64, 18, 71, 12, 1};
    vector<int> reboundA = {70, 16, 81, 28, 90, 19, 11, 40, 23, 42, 94};
    vector<int> reboundB = {28, 69, 6, 77, 30, 49, 1, 22, 2, 61, 9};
    int time = 124;
    int scoreA = 22;
    int scoreB = 24;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.101755679000814;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> percentageA = {83, 91, 52, 54, 44, 84, 48, 45, 71, 30, 17, 39, 25, 34, 48, 94, 49, 95, 50, 30, 8, 38, 62, 24, 63, 63, 62, 64, 99, 22, 63, 77, 35};
    vector<int> percentageB = {27, 95, 85, 77, 91, 58, 42, 19, 57, 46, 42, 67, 10, 3, 22, 65, 92, 29, 42, 92, 54, 44, 3, 29, 2, 74, 44, 52, 45, 20, 91, 79, 33};
    vector<int> reboundA = {47, 64, 12, 64, 72, 94, 58, 9, 55, 37, 7, 95, 72, 98, 77, 92, 35, 17, 76, 8, 0, 20, 77, 49, 70, 64, 30, 58, 18, 96, 72, 2, 32};
    vector<int> reboundB = {99, 97, 97, 81, 78, 14, 6, 54, 40, 89, 41, 6, 19, 87, 57, 92, 56, 74, 26, 60, 88, 11, 74, 2, 39, 91, 37, 35, 17, 93, 98, 43, 23};
    int time = 84;
    int scoreA = 9;
    int scoreB = 11;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0024819267669867065;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> percentageA = {29, 87, 76, 13, 83, 37, 46, 50, 87, 37, 82, 25, 94, 51, 20, 95, 60, 52, 95, 24, 50, 24, 36, 59, 98, 23, 56, 64, 75, 84, 28, 8, 0, 53, 12};
    vector<int> percentageB = {54, 77, 32, 53, 0, 5, 77, 16, 29, 95, 45, 29, 56, 93, 70, 75, 79, 36, 75, 72, 92, 58, 66, 21, 92, 67, 55, 23, 78, 14, 98, 85, 94, 8, 90};
    vector<int> reboundA = {97, 41, 94, 55, 38, 53, 23, 21, 100, 42, 0, 94, 10, 23, 11, 6, 52, 67, 47, 77, 94, 82, 63, 54, 34, 87, 2, 67, 26, 25, 15, 89, 6, 57, 64};
    vector<int> reboundB = {40, 97, 93, 70, 60, 33, 21, 35, 33, 42, 59, 58, 47, 92, 16, 70, 43, 48, 84, 54, 39, 35, 26, 38, 63, 58, 31, 64, 97, 84, 33, 5, 7, 8, 26};
    int time = 76;
    int scoreA = 84;
    int scoreB = 85;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.63473882263872;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> percentageA = {24, 91, 74, 43, 99, 59, 98, 50, 17, 43, 26, 70, 82, 39, 33, 37, 95, 35, 91, 62, 97, 97, 25, 1, 42, 44, 71};
    vector<int> percentageB = {43, 13, 38, 70, 41, 64, 40, 61, 9, 8, 5, 75, 18, 38, 24, 19, 78, 41, 3, 67, 85, 32, 19, 82, 90, 65, 48};
    vector<int> reboundA = {80, 78, 22, 54, 57, 98, 87, 22, 93, 13, 40, 14, 93, 73, 83, 61, 91, 55, 1, 4, 21, 40, 57, 9, 25, 86, 12};
    vector<int> reboundB = {8, 93, 79, 54, 2, 65, 10, 46, 15, 82, 69, 83, 43, 31, 65, 81, 16, 16, 89, 55, 68, 23, 68, 67, 51, 59, 1};
    int time = 107;
    int scoreA = 87;
    int scoreB = 87;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4736928355540612;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> percentageA = {80, 58, 53, 27, 4, 72, 5, 59, 73, 60, 20, 79, 87, 33, 10, 69, 23, 21, 59, 89, 40, 80, 36, 7, 10, 6, 98, 45, 21, 57, 41, 9};
    vector<int> percentageB = {61, 37, 85, 93, 78, 99, 48, 74, 67, 96, 93, 34, 98, 41, 4, 100, 62, 4, 0, 52, 64, 75, 89, 0, 79, 77, 90, 83, 76, 58, 38, 60};
    vector<int> reboundA = {45, 63, 1, 90, 12, 21, 41, 51, 96, 38, 8, 25, 18, 100, 61, 85, 72, 12, 19, 64, 74, 92, 90, 23, 15, 82, 10, 94, 5, 98, 3, 29};
    vector<int> reboundB = {5, 62, 46, 81, 85, 90, 25, 71, 26, 44, 54, 0, 63, 18, 14, 74, 58, 83, 79, 7, 32, 29, 2, 61, 43, 10, 99, 1, 46, 1, 55, 21};
    int time = 134;
    int scoreA = 81;
    int scoreB = 84;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1069555735679684E-16;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> percentageA = {82, 7, 98};
    vector<int> percentageB = {15, 25, 41};
    vector<int> reboundA = {54, 81, 98};
    vector<int> reboundB = {50, 46, 57};
    int time = 145;
    int scoreA = 88;
    int scoreB = 90;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.995403665344783;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> percentageA = {96, 91, 93, 8, 65, 85, 21, 3, 69};
    vector<int> percentageB = {46, 29, 21, 47, 39, 7, 48, 2, 35};
    vector<int> reboundA = {41, 29, 28, 84, 8, 17, 70, 30, 7};
    vector<int> reboundB = {22, 87, 36, 65, 55, 14, 4, 51, 11};
    int time = 74;
    int scoreA = 44;
    int scoreB = 49;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3298551828672662;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> percentageA = {25, 43, 12, 4, 17, 5, 7, 27, 17, 18, 86, 95, 9};
    vector<int> percentageB = {95, 69, 76, 78, 42, 1, 22, 93, 75, 80, 82, 41, 36};
    vector<int> reboundA = {66, 71, 13, 7, 82, 39, 5, 97, 35, 79, 91, 13, 43};
    vector<int> reboundB = {54, 79, 23, 41, 48, 53, 97, 5, 93, 71, 100, 73, 23};
    int time = 59;
    int scoreA = 73;
    int scoreB = 71;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9667816875827727;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> percentageA = {65, 49, 59, 93, 22, 14, 32, 57, 38, 85, 58, 79, 95, 43, 57, 86, 78, 13, 7, 14, 88, 90, 83, 16, 34};
    vector<int> percentageB = {42, 38, 19, 97, 95, 92, 51, 22, 6, 51, 29, 31, 81, 13, 95, 80, 13, 27, 40, 64, 0, 92, 21, 100, 20};
    vector<int> reboundA = {69, 91, 23, 74, 65, 13, 32, 43, 70, 29, 10, 70, 84, 35, 13, 1, 55, 86, 46, 85, 85, 71, 24, 57, 82};
    vector<int> reboundB = {26, 90, 92, 62, 83, 27, 61, 52, 74, 88, 74, 66, 83, 39, 83, 83, 24, 45, 59, 45, 5, 58, 2, 79, 91};
    int time = 179;
    int scoreA = 52;
    int scoreB = 45;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999997614262687;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> percentageA = {20, 58};
    vector<int> percentageB = {47, 58};
    vector<int> reboundA = {10, 5};
    vector<int> reboundB = {15, 73};
    int time = 180;
    int scoreA = 30;
    int scoreB = 25;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1617112556221944;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> percentageA = {39, 97, 27, 93, 92, 47, 18, 69, 86, 37, 2, 53, 69, 67, 92, 35, 72, 28, 99, 63, 67, 91, 21, 40, 36, 42, 79, 88, 58, 21, 94, 16, 94, 23, 61};
    vector<int> percentageB = {50, 93, 66, 44, 61, 44, 7, 89, 8, 52, 82, 65, 73, 33, 75, 11, 17, 53, 52, 56, 85, 6, 43, 9, 28, 93, 65, 56, 82, 4, 41, 48, 60, 33, 86};
    vector<int> reboundA = {55, 27, 32, 88, 27, 16, 59, 96, 100, 59, 15, 74, 94, 44, 36, 20, 82, 38, 94, 64, 26, 54, 52, 56, 27, 34, 82, 75, 28, 45, 96, 52, 20, 69, 30};
    vector<int> reboundB = {70, 78, 82, 68, 21, 95, 48, 78, 57, 85, 39, 3, 97, 42, 8, 54, 60, 70, 22, 63, 29, 39, 78, 20, 86, 66, 58, 95, 7, 85, 47, 98, 39, 59, 72};
    int time = 105;
    int scoreA = 70;
    int scoreB = 72;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.015374178524924717;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> percentageA = {5, 63, 99, 3, 75, 97, 47, 58, 69, 31, 98, 67, 3, 31, 62, 36, 33, 94, 75, 79, 90, 49, 27, 83, 53, 38, 46, 19, 88, 40, 9, 52, 1, 71, 1, 93, 87, 57, 98, 79, 22, 97, 46, 20, 98, 100, 0, 19, 42, 34};
    vector<int> percentageB = {22, 23, 64, 94, 64, 75, 34, 40, 85, 74, 16, 78, 92, 40, 12, 94, 11, 23, 13, 21, 69, 48, 63, 6, 95, 33, 71, 97, 5, 85, 18, 63, 24, 74, 19, 53, 19, 28, 4, 83, 47, 9, 64, 45, 82, 85, 48, 7, 0, 72};
    vector<int> reboundA = {38, 8, 76, 18, 8, 56, 27, 13, 61, 52, 85, 87, 10, 79, 20, 84, 21, 17, 34, 78, 65, 68, 12, 50, 18, 75, 67, 1, 83, 4, 38, 3, 33, 95, 85, 74, 92, 64, 13, 40, 19, 66, 15, 4, 38, 83, 97, 97, 49, 17};
    vector<int> reboundB = {38, 85, 49, 40, 81, 38, 100, 33, 80, 100, 69, 89, 37, 4, 6, 6, 46, 65, 42, 28, 77, 64, 50, 85, 20, 27, 77, 43, 37, 93, 11, 39, 90, 34, 82, 81, 79, 41, 76, 49, 40, 66, 45, 30, 50, 89, 37, 40, 51, 100};
    int time = 43;
    int scoreA = 61;
    int scoreB = 58;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> percentageA = {34, 12, 68, 78, 76, 67, 84, 77, 22, 23};
    vector<int> percentageB = {41, 81, 95, 28, 14, 99, 82, 52, 26, 65};
    vector<int> reboundA = {48, 90, 19, 43, 43, 87, 32, 35, 12, 57};
    vector<int> reboundB = {64, 76, 98, 59, 33, 43, 20, 7, 93, 28};
    int time = 98;
    int scoreA = 26;
    int scoreB = 27;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3116494857061885;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> percentageA = {80, 73, 22, 13, 7, 63, 49, 88, 68, 75, 37, 48, 78, 78, 8, 69, 71, 28, 41, 62, 40, 80, 39, 50, 36, 35};
    vector<int> percentageB = {2, 60, 98, 89, 0, 52, 91, 57, 3, 100, 46, 67, 93, 54, 91, 5, 22, 67, 99, 94, 31, 20, 31, 62, 72, 35};
    vector<int> reboundA = {85, 69, 69, 92, 35, 39, 51, 97, 83, 29, 80, 10, 82, 43, 19, 57, 21, 92, 92, 10, 75, 15, 36, 82, 70, 43};
    vector<int> reboundB = {27, 89, 42, 47, 67, 66, 16, 70, 44, 67, 13, 36, 16, 3, 80, 58, 56, 7, 63, 38, 29, 76, 59, 35, 67, 69};
    int time = 32;
    int scoreA = 95;
    int scoreB = 96;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6911272;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> percentageA = {75, 11, 39, 69, 68, 33, 50, 27, 87, 94, 56, 30, 61, 38, 57, 43, 41, 3, 88, 29};
    vector<int> percentageB = {49, 8, 30, 38, 78, 46, 66, 94, 58, 45, 84, 82, 88, 40, 22, 27, 12, 22, 40, 31};
    vector<int> reboundA = {50, 23, 97, 7, 42, 23, 10, 71, 96, 41, 31, 34, 45, 10, 46, 99, 90, 87, 94, 21};
    vector<int> reboundB = {15, 47, 45, 86, 35, 80, 97, 86, 38, 13, 17, 39, 57, 44, 86, 59, 91, 66, 16, 73};
    int time = 52;
    int scoreA = 12;
    int scoreB = 13;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5275232599143961;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> percentageA = {47, 17};
    vector<int> percentageB = {88, 86};
    vector<int> reboundA = {33, 95};
    vector<int> reboundB = {88, 13};
    int time = 54;
    int scoreA = 74;
    int scoreB = 76;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009626866757070161;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> percentageA = {21, 43, 14, 36, 85, 58, 81, 97, 4, 28, 76, 15, 5, 1, 6, 12, 17, 66, 87, 25, 58, 30, 18, 61, 89, 98, 79, 50, 48};
    vector<int> percentageB = {1, 63, 87, 16, 8, 40, 98, 23, 85, 57, 55, 74, 58, 86, 71, 57, 14, 2, 3, 85, 52, 38, 46, 3, 37, 7, 11, 17, 94};
    vector<int> reboundA = {83, 52, 44, 44, 63, 99, 85, 57, 32, 15, 40, 30, 72, 4, 88, 42, 34, 23, 20, 52, 71, 53, 70, 66, 52, 44, 4, 22, 69};
    vector<int> reboundB = {10, 54, 13, 29, 81, 30, 56, 56, 63, 90, 65, 18, 63, 43, 54, 0, 45, 84, 48, 71, 78, 35, 90, 16, 80, 71, 41, 93, 33};
    int time = 178;
    int scoreA = 27;
    int scoreB = 32;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001580787880359752;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> percentageA = {36, 84, 95, 23, 45, 41, 23, 19, 1, 22, 41, 3, 55, 34, 23, 80, 35, 95, 42, 8, 14, 7, 87, 62, 26, 37, 66, 36, 8, 98, 64, 45, 62, 14, 75, 51, 20, 10, 86, 30, 93, 44, 6, 85, 32, 30};
    vector<int> percentageB = {23, 9, 26, 81, 95, 57, 89, 98, 99, 80, 59, 2, 95, 23, 36, 4, 47, 97, 82, 19, 64, 24, 17, 78, 82, 33, 90, 13, 66, 53, 50, 82, 73, 22, 71, 55, 89, 34, 84, 90, 60, 99, 88, 28, 58, 12};
    vector<int> reboundA = {54, 60, 41, 8, 40, 89, 31, 30, 34, 100, 4, 65, 31, 44, 62, 64, 28, 16, 26, 18, 76, 65, 71, 5, 48, 43, 32, 61, 33, 94, 34, 78, 46, 25, 30, 79, 15, 86, 46, 32, 56, 77, 49, 15, 65, 43};
    vector<int> reboundB = {95, 82, 81, 73, 42, 1, 42, 30, 30, 7, 41, 50, 83, 19, 59, 31, 36, 99, 6, 75, 13, 87, 3, 66, 61, 9, 99, 89, 82, 47, 15, 13, 25, 81, 35, 6, 96, 7, 8, 4, 38, 8, 39, 80, 44, 17};
    int time = 156;
    int scoreA = 27;
    int scoreB = 28;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5351069388264408;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> percentageA = {32};
    vector<int> percentageB = {90};
    vector<int> reboundA = {97};
    vector<int> reboundB = {59};
    int time = 158;
    int scoreA = 73;
    int scoreB = 70;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8493316041033258;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> percentageA = {23, 35, 77, 47, 13, 86, 16, 95, 98, 83, 15, 76, 97, 17, 67, 64, 73, 86, 55, 19, 38, 76, 21, 19, 53, 68, 57, 64};
    vector<int> percentageB = {56, 21, 9, 69, 100, 72, 32, 1, 51, 22, 28, 11, 57, 16, 16, 35, 55, 68, 98, 61, 38, 0, 94, 91, 29, 38, 53, 45};
    vector<int> reboundA = {20, 89, 28, 75, 87, 7, 96, 100, 61, 87, 5, 97, 32, 18, 48, 92, 39, 17, 29, 66, 66, 10, 27, 95, 5, 22, 32, 73};
    vector<int> reboundB = {87, 76, 24, 32, 52, 9, 8, 83, 71, 70, 69, 67, 61, 45, 11, 5, 61, 84, 6, 18, 93, 11, 29, 73, 20, 50, 72, 100};
    int time = 132;
    int scoreA = 65;
    int scoreB = 65;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5521492905125465;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> percentageA = {29, 58, 39, 22, 31, 23, 39, 44, 35, 29, 57, 40, 25, 36, 36, 51, 54, 34, 25, 55, 47, 40, 42, 57, 60, 33, 56, 54, 37, 25, 50, 33, 38, 39, 27, 37, 35, 54, 57, 60, 51, 35, 35, 24, 31, 43, 46, 26, 28, 43};
    vector<int> percentageB = {52, 53, 22, 38, 24, 29, 23, 41, 25, 53, 54, 20, 45, 28, 20, 34, 31, 44, 60, 25, 32, 39, 44, 22, 22, 45, 21, 47, 51, 21, 57, 39, 49, 59, 28, 39, 36, 47, 43, 30, 47, 21, 52, 27, 24, 30, 60, 48, 29, 21};
    vector<int> reboundA = {19, 4, 6, 5, 20, 18, 18, 9, 6, 5, 13, 18, 11, 12, 5, 6, 20, 11, 2, 16, 7, 18, 16, 16, 12, 18, 4, 20, 20, 4, 11, 17, 7, 14, 10, 13, 7, 12, 11, 6, 20, 20, 4, 14, 8, 17, 10, 13, 5, 11};
    vector<int> reboundB = {13, 4, 14, 17, 11, 16, 6, 7, 8, 8, 20, 6, 2, 11, 8, 2, 8, 2, 12, 20, 14, 12, 6, 17, 17, 9, 14, 7, 17, 7, 18, 15, 14, 7, 16, 8, 16, 9, 13, 9, 4, 20, 9, 9, 5, 17, 19, 14, 3, 11};
    int time = 180;
    int scoreA = 54;
    int scoreB = 61;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0033905246284758887;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> percentageA = {51, 44, 56, 47, 38, 27, 43, 28, 49, 24, 24, 44, 32, 24, 36, 46, 29, 56, 25, 55, 51, 28, 40, 29, 36, 24, 55, 58, 48, 28, 44, 21, 33, 35, 48, 35, 46, 39, 38, 52, 34, 36, 47, 45, 21, 20, 52, 34, 25, 54};
    vector<int> percentageB = {28, 42, 59, 29, 33, 53, 50, 59, 49, 21, 31, 25, 35, 41, 28, 33, 56, 46, 43, 44, 60, 53, 40, 53, 36, 21, 36, 44, 29, 32, 55, 29, 51, 25, 51, 60, 50, 32, 28, 56, 44, 48, 41, 34, 25, 52, 47, 60, 56, 26};
    vector<int> reboundA = {11, 15, 17, 4, 12, 8, 20, 15, 17, 8, 9, 3, 7, 5, 15, 18, 17, 17, 16, 10, 6, 15, 11, 2, 16, 2, 7, 20, 19, 11, 15, 7, 2, 11, 20, 14, 18, 2, 9, 19, 6, 7, 9, 10, 8, 18, 16, 10, 18, 6};
    vector<int> reboundB = {9, 16, 20, 9, 5, 6, 13, 20, 14, 4, 4, 14, 7, 16, 8, 15, 5, 12, 4, 19, 9, 20, 12, 14, 6, 15, 14, 11, 20, 11, 20, 2, 4, 18, 6, 17, 11, 7, 8, 3, 7, 4, 12, 20, 3, 6, 4, 3, 9, 7};
    int time = 180;
    int scoreA = 84;
    int scoreB = 88;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03983990177320299;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> percentageA = {20, 58, 45, 37, 30, 56, 41, 30, 58, 26, 20, 46, 58, 21, 52, 28, 46, 26, 51, 32, 58, 54, 20, 39, 22, 22, 30, 38, 33, 40, 40, 39, 32, 59, 39, 57, 26, 52, 28, 36, 40, 53, 46, 59, 28, 22, 48, 50, 22, 58};
    vector<int> percentageB = {26, 29, 20, 26, 54, 59, 43, 48, 30, 48, 41, 35, 23, 28, 43, 58, 36, 45, 49, 30, 46, 59, 60, 24, 44, 25, 31, 23, 44, 40, 41, 49, 33, 39, 32, 27, 34, 30, 56, 26, 25, 21, 20, 53, 33, 49, 42, 44, 30, 40};
    vector<int> reboundA = {18, 10, 5, 2, 3, 10, 6, 15, 12, 12, 17, 12, 7, 14, 20, 4, 15, 5, 18, 19, 11, 5, 6, 14, 19, 3, 8, 11, 14, 2, 13, 20, 8, 11, 17, 6, 12, 4, 6, 16, 13, 6, 15, 20, 8, 11, 7, 16, 11, 13};
    vector<int> reboundB = {13, 9, 10, 16, 8, 18, 2, 15, 5, 11, 16, 14, 6, 4, 12, 18, 14, 9, 8, 17, 6, 16, 8, 10, 3, 10, 3, 15, 2, 18, 10, 18, 19, 13, 10, 7, 18, 4, 20, 7, 18, 14, 16, 9, 3, 15, 17, 7, 4, 15};
    int time = 180;
    int scoreA = 31;
    int scoreB = 31;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.45399356635962324;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> percentageA = {52, 50, 22, 30, 26, 30, 58, 58, 28, 41, 44, 38, 27, 30, 44, 45, 28, 27, 44, 28, 44, 30, 33, 25, 42, 27, 28, 48, 49, 59, 32, 34, 43, 43, 43, 31, 51, 49, 54, 51, 25, 28, 47, 25, 24, 47, 46, 50, 38, 59};
    vector<int> percentageB = {24, 55, 46, 57, 25, 37, 38, 33, 53, 33, 36, 21, 50, 48, 53, 34, 40, 59, 31, 43, 52, 34, 50, 50, 31, 30, 47, 41, 22, 59, 56, 34, 23, 44, 43, 56, 30, 29, 50, 20, 48, 46, 56, 48, 48, 48, 28, 51, 38, 34};
    vector<int> reboundA = {5, 7, 16, 15, 6, 20, 6, 2, 13, 3, 3, 8, 16, 7, 19, 5, 9, 16, 19, 19, 10, 10, 5, 19, 7, 19, 13, 15, 6, 15, 15, 16, 19, 4, 6, 11, 15, 19, 12, 6, 3, 4, 10, 20, 7, 15, 7, 6, 2, 17};
    vector<int> reboundB = {6, 17, 17, 13, 10, 18, 9, 7, 8, 15, 8, 11, 19, 15, 14, 16, 20, 11, 17, 17, 17, 8, 19, 10, 15, 9, 2, 18, 11, 19, 11, 2, 17, 4, 5, 8, 12, 15, 2, 9, 10, 10, 7, 19, 11, 19, 7, 19, 19, 4};
    int time = 180;
    int scoreA = 57;
    int scoreB = 64;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004010720150365774;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> percentageA = {31, 32, 41, 41, 31, 58, 30, 50, 33, 29, 56, 49, 58, 46, 60, 35, 27, 50, 37, 60, 55, 43, 42, 50, 49, 20, 32, 39, 39, 25, 28, 53, 27, 45, 57, 21, 36, 27, 43, 37, 46, 32, 51, 59, 49, 21, 46, 50, 39, 60};
    vector<int> percentageB = {22, 50, 46, 22, 59, 57, 45, 40, 46, 42, 60, 30, 60, 20, 21, 27, 49, 37, 32, 53, 30, 60, 48, 21, 37, 58, 46, 49, 45, 34, 23, 25, 44, 27, 35, 25, 39, 29, 26, 51, 34, 30, 27, 33, 40, 35, 34, 38, 41, 34};
    vector<int> reboundA = {5, 2, 16, 18, 6, 12, 19, 9, 17, 7, 11, 5, 2, 7, 3, 18, 6, 7, 10, 3, 16, 20, 5, 5, 18, 3, 12, 14, 9, 14, 5, 5, 18, 17, 14, 11, 16, 8, 20, 5, 14, 3, 11, 17, 12, 2, 15, 9, 8, 10};
    vector<int> reboundB = {12, 12, 17, 14, 20, 16, 12, 10, 15, 9, 2, 20, 2, 3, 3, 5, 7, 2, 9, 3, 15, 8, 20, 16, 10, 6, 11, 11, 12, 18, 19, 20, 12, 18, 3, 14, 15, 12, 18, 9, 8, 4, 2, 20, 2, 3, 20, 10, 16, 14};
    int time = 180;
    int scoreA = 51;
    int scoreB = 45;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9933009352449537;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> percentageA = {31, 20, 49, 48, 30, 42, 41, 24, 39, 27, 44, 23, 24, 21, 40, 51, 39, 41, 35, 25, 44, 58, 26, 32, 32, 30, 47, 27, 48, 46, 39, 28, 40, 37, 46, 28, 60, 28, 35, 29, 32, 52, 28, 31, 46, 33, 42, 51, 56, 39};
    vector<int> percentageB = {26, 21, 43, 20, 40, 28, 32, 60, 22, 50, 30, 47, 26, 60, 25, 36, 37, 39, 45, 40, 44, 29, 39, 60, 25, 22, 45, 46, 49, 35, 38, 30, 57, 45, 50, 34, 37, 29, 26, 58, 60, 40, 40, 51, 44, 36, 52, 32, 47, 41};
    vector<int> reboundA = {20, 5, 13, 5, 20, 11, 18, 4, 2, 2, 2, 10, 8, 7, 8, 5, 4, 2, 17, 9, 11, 16, 14, 14, 7, 14, 9, 16, 5, 20, 15, 11, 11, 8, 12, 16, 18, 7, 10, 11, 16, 19, 5, 16, 10, 12, 13, 13, 8, 16};
    vector<int> reboundB = {2, 20, 12, 17, 8, 15, 11, 20, 20, 6, 2, 12, 17, 9, 4, 19, 14, 5, 9, 12, 12, 6, 9, 16, 13, 5, 9, 13, 7, 2, 9, 15, 20, 15, 20, 3, 14, 11, 13, 2, 16, 2, 9, 2, 17, 14, 6, 8, 13, 20};
    int time = 180;
    int scoreA = 45;
    int scoreB = 46;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.41374509822431227;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> percentageA = {60, 42, 39, 51, 38, 21, 39, 29, 27, 47, 43, 25, 41, 39, 23, 29, 51, 29, 41, 43, 22, 59, 31, 33, 53, 38, 56, 44, 46, 21, 58, 60, 36, 26, 31, 40, 54, 51, 38, 42, 54, 33, 58, 56, 54, 33, 58, 52, 36, 38};
    vector<int> percentageB = {59, 37, 24, 28, 52, 25, 52, 39, 28, 39, 41, 37, 27, 31, 48, 33, 46, 21, 42, 36, 51, 43, 47, 34, 48, 28, 29, 22, 50, 50, 36, 23, 60, 43, 20, 59, 30, 32, 56, 39, 25, 30, 24, 60, 32, 21, 42, 44, 29, 55};
    vector<int> reboundA = {12, 2, 13, 15, 16, 15, 13, 5, 19, 18, 8, 10, 13, 15, 13, 5, 14, 20, 11, 12, 13, 4, 11, 13, 18, 16, 15, 8, 6, 13, 19, 7, 11, 17, 18, 2, 11, 12, 9, 5, 6, 15, 2, 9, 7, 10, 17, 20, 19, 9};
    vector<int> reboundB = {15, 20, 8, 7, 8, 8, 2, 9, 4, 14, 4, 18, 20, 9, 9, 17, 16, 6, 4, 14, 20, 3, 6, 6, 16, 9, 15, 12, 6, 9, 16, 20, 12, 3, 5, 13, 3, 6, 15, 13, 2, 4, 12, 19, 9, 4, 8, 4, 9, 17};
    int time = 180;
    int scoreA = 89;
    int scoreB = 80;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> percentageA = {60, 57, 46, 60, 41, 44, 40, 21, 38, 50, 46, 49, 33, 34, 39, 42, 58, 55, 51, 28, 48, 49, 24, 39, 36, 49, 58, 53, 35, 44, 21, 52, 28, 55, 34, 50, 57, 49, 30, 55, 45, 43, 37, 57, 32, 24, 52, 30, 38, 30};
    vector<int> percentageB = {37, 28, 60, 25, 35, 57, 33, 47, 30, 40, 35, 24, 48, 40, 33, 24, 50, 51, 59, 55, 56, 37, 29, 27, 32, 34, 51, 49, 30, 49, 37, 28, 51, 56, 40, 33, 55, 23, 59, 24, 58, 45, 31, 25, 45, 22, 47, 38, 23, 60};
    vector<int> reboundA = {3, 14, 19, 17, 13, 18, 16, 12, 7, 7, 16, 20, 19, 7, 16, 11, 14, 11, 5, 11, 17, 15, 8, 14, 4, 12, 7, 9, 5, 9, 6, 17, 8, 18, 2, 19, 10, 20, 8, 7, 11, 13, 8, 17, 14, 14, 18, 11, 11, 3};
    vector<int> reboundB = {13, 8, 7, 20, 17, 10, 5, 7, 4, 15, 4, 15, 14, 4, 5, 4, 7, 20, 2, 11, 12, 10, 7, 10, 7, 13, 11, 9, 4, 19, 19, 11, 19, 2, 8, 3, 7, 5, 17, 12, 17, 7, 14, 18, 8, 8, 13, 6, 9, 13};
    int time = 180;
    int scoreA = 6;
    int scoreB = 13;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004665105094684716;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> percentageA = {43, 25, 41, 54, 48, 37, 30, 45, 38, 27, 26, 47, 36, 32, 60, 27, 41, 52, 35, 20, 36, 23, 53, 45, 52, 27, 36, 27, 59, 59, 43, 51, 32, 41, 52, 52, 49, 33, 35, 32, 59, 26, 31, 20, 23, 59, 28, 28, 51, 53};
    vector<int> percentageB = {55, 45, 23, 52, 39, 41, 51, 59, 32, 31, 50, 21, 52, 58, 49, 55, 52, 30, 57, 40, 32, 47, 43, 26, 51, 39, 33, 47, 50, 28, 32, 53, 46, 39, 53, 21, 43, 52, 47, 54, 45, 23, 45, 26, 53, 45, 26, 51, 47, 24};
    vector<int> reboundA = {9, 19, 15, 19, 11, 4, 14, 14, 5, 4, 9, 8, 6, 18, 10, 6, 12, 20, 9, 12, 3, 18, 19, 13, 3, 14, 5, 10, 9, 13, 10, 14, 12, 5, 10, 13, 20, 14, 7, 19, 5, 18, 5, 20, 3, 10, 4, 13, 20, 18};
    vector<int> reboundB = {16, 19, 5, 18, 3, 14, 4, 6, 9, 4, 14, 18, 19, 14, 14, 20, 2, 11, 2, 19, 6, 13, 13, 12, 3, 13, 15, 2, 15, 15, 9, 7, 16, 3, 12, 5, 12, 20, 3, 5, 13, 17, 4, 5, 7, 2, 10, 13, 15, 17};
    int time = 180;
    int scoreA = 62;
    int scoreB = 65;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18582423148303792;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> percentageA = {47, 27, 35, 23, 55, 26, 26, 39, 32, 58, 59, 55, 34, 22, 29, 34, 59, 23, 22, 60, 43, 45, 50, 25, 54, 30, 25, 33, 50, 42, 60, 43, 43, 57, 50, 35, 31, 51, 29, 36, 40, 53, 33, 26, 52, 32, 33, 31, 43, 41};
    vector<int> percentageB = {53, 58, 58, 53, 56, 23, 32, 20, 35, 48, 51, 42, 31, 34, 39, 36, 30, 48, 22, 59, 48, 37, 21, 30, 24, 36, 35, 54, 20, 24, 24, 30, 27, 25, 23, 58, 53, 56, 47, 58, 28, 32, 42, 40, 48, 24, 41, 33, 28, 59};
    vector<int> reboundA = {9, 15, 6, 9, 3, 7, 12, 5, 14, 7, 7, 4, 4, 17, 4, 2, 9, 13, 10, 20, 5, 18, 10, 8, 6, 15, 3, 3, 14, 5, 6, 17, 4, 4, 11, 19, 9, 19, 10, 12, 10, 11, 14, 3, 6, 20, 17, 14, 3, 11};
    vector<int> reboundB = {9, 19, 11, 6, 10, 2, 4, 20, 8, 10, 8, 18, 11, 11, 2, 3, 3, 12, 4, 19, 4, 3, 9, 10, 5, 11, 18, 17, 10, 4, 15, 3, 11, 11, 19, 20, 8, 8, 2, 7, 15, 6, 9, 4, 2, 9, 7, 2, 3, 19};
    int time = 180;
    int scoreA = 75;
    int scoreB = 76;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.42499260668888866;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> percentageA = {52, 48, 35, 45, 23, 41, 52, 50, 52, 32, 35, 58, 60, 39, 46, 20, 55, 38, 31, 58, 58, 48, 39, 53, 37, 47, 36, 28, 32, 52, 21, 52, 50, 60, 53, 48, 52, 50, 29, 57, 53, 35, 27, 26, 38, 24, 55, 35, 38, 36};
    vector<int> percentageB = {47, 37, 30, 24, 28, 30, 25, 36, 28, 28, 37, 24, 50, 33, 36, 43, 54, 59, 51, 33, 36, 29, 45, 60, 42, 48, 42, 21, 53, 31, 38, 54, 49, 55, 35, 60, 59, 27, 54, 37, 57, 23, 39, 38, 22, 25, 20, 60, 25, 54};
    vector<int> reboundA = {11, 7, 2, 8, 16, 15, 7, 11, 6, 16, 15, 16, 3, 13, 15, 3, 7, 12, 9, 18, 11, 9, 19, 15, 2, 13, 12, 2, 4, 16, 19, 8, 3, 9, 3, 9, 10, 5, 5, 12, 2, 19, 4, 13, 10, 16, 17, 9, 3, 20};
    vector<int> reboundB = {11, 17, 16, 18, 13, 8, 9, 16, 11, 13, 20, 7, 13, 9, 15, 15, 7, 16, 7, 17, 16, 11, 9, 7, 16, 12, 3, 4, 12, 5, 10, 4, 11, 19, 4, 13, 11, 19, 18, 10, 2, 14, 8, 2, 4, 12, 8, 7, 2, 20};
    int time = 180;
    int scoreA = 12;
    int scoreB = 2;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> percentageA = {26, 24, 40, 25, 28, 32, 37, 36, 45, 59, 58, 38, 45, 39, 59, 45, 47, 20, 22, 51, 32, 55, 48, 60, 33, 25, 37, 30, 32, 54, 36, 35, 59, 32, 23, 41, 58, 22, 28, 36, 53, 46, 26, 30, 56, 51, 20, 57, 57, 51};
    vector<int> percentageB = {33, 34, 34, 60, 52, 20, 31, 51, 38, 30, 45, 34, 29, 23, 49, 54, 47, 53, 28, 32, 56, 37, 54, 59, 34, 42, 24, 54, 54, 30, 49, 26, 35, 58, 27, 41, 42, 39, 38, 45, 49, 25, 28, 29, 57, 31, 34, 56, 46, 53};
    vector<int> reboundA = {8, 6, 17, 15, 9, 20, 7, 19, 2, 8, 3, 18, 8, 9, 6, 11, 10, 15, 10, 13, 14, 8, 18, 10, 18, 5, 3, 19, 16, 5, 18, 9, 5, 16, 10, 19, 19, 14, 5, 15, 12, 2, 20, 4, 12, 11, 12, 7, 12, 12};
    vector<int> reboundB = {11, 4, 11, 2, 3, 2, 6, 10, 14, 11, 14, 3, 9, 18, 19, 18, 11, 6, 14, 14, 10, 13, 19, 7, 12, 11, 2, 4, 14, 10, 3, 20, 7, 17, 5, 10, 19, 2, 13, 18, 11, 15, 7, 11, 4, 16, 9, 13, 5, 3};
    int time = 180;
    int scoreA = 25;
    int scoreB = 27;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1648066034434377;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> percentageA = {58, 45, 27, 24, 58, 45, 42, 24, 56, 53, 39, 51, 53, 25, 52, 51, 25, 25, 39, 23, 54, 60, 60, 24, 23, 29, 30, 52, 60, 27, 20, 60, 31, 42, 51, 44, 20, 36, 47, 23, 55, 23, 32, 43, 55, 31, 20, 30, 20, 38};
    vector<int> percentageB = {21, 34, 27, 47, 47, 38, 42, 30, 23, 59, 37, 57, 54, 60, 38, 36, 20, 49, 41, 41, 50, 42, 60, 45, 60, 48, 33, 58, 26, 45, 32, 38, 48, 28, 45, 28, 28, 47, 58, 49, 32, 39, 59, 57, 28, 34, 24, 36, 50, 29};
    vector<int> reboundA = {11, 19, 2, 17, 9, 3, 7, 5, 11, 11, 12, 16, 15, 16, 4, 2, 2, 16, 9, 19, 13, 3, 20, 7, 2, 13, 17, 4, 6, 19, 14, 16, 15, 6, 5, 15, 11, 16, 15, 20, 7, 2, 12, 8, 2, 16, 2, 10, 12, 3};
    vector<int> reboundB = {2, 19, 4, 8, 15, 18, 19, 7, 20, 4, 14, 17, 17, 10, 6, 10, 6, 13, 18, 6, 4, 9, 15, 14, 14, 14, 4, 10, 5, 6, 4, 18, 8, 12, 6, 19, 14, 15, 20, 4, 3, 16, 7, 10, 11, 17, 2, 4, 16, 11};
    int time = 180;
    int scoreA = 15;
    int scoreB = 18;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18427586755983363;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> percentageA = {36, 60, 25, 34, 54, 33, 51, 47, 55, 58, 33, 47, 34, 42, 22, 53, 27, 26, 28, 39, 59, 46, 49, 44, 41, 20, 43, 32, 51, 52, 55, 39, 44, 57, 37, 47, 31, 36, 21, 40, 43, 55, 43, 38, 22, 59, 39, 43, 44, 54};
    vector<int> percentageB = {26, 28, 25, 34, 51, 47, 31, 36, 44, 58, 29, 24, 53, 53, 32, 38, 52, 21, 21, 57, 29, 40, 54, 48, 41, 46, 36, 29, 58, 33, 38, 60, 30, 21, 21, 55, 48, 53, 39, 60, 40, 25, 45, 36, 34, 46, 39, 46, 39, 35};
    vector<int> reboundA = {17, 8, 9, 13, 15, 6, 8, 20, 16, 12, 20, 5, 11, 6, 15, 5, 12, 14, 2, 7, 14, 6, 11, 11, 10, 17, 10, 20, 11, 10, 19, 3, 13, 5, 20, 19, 20, 5, 17, 15, 12, 16, 20, 15, 3, 13, 12, 20, 14, 2};
    vector<int> reboundB = {2, 11, 7, 18, 10, 14, 15, 7, 4, 11, 7, 18, 3, 11, 9, 16, 15, 17, 7, 15, 17, 20, 9, 5, 14, 9, 18, 14, 7, 12, 11, 20, 15, 12, 5, 20, 8, 10, 5, 5, 8, 11, 15, 20, 6, 19, 6, 8, 5, 19};
    int time = 180;
    int scoreA = 76;
    int scoreB = 78;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18769301887956885;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> percentageA = {59, 58, 31, 27, 60, 33, 59, 39, 27, 36, 52, 34, 21, 53, 29, 43, 26, 49, 42, 40, 48, 41, 46, 23, 27, 29, 52, 47, 49, 28, 57, 21, 55, 42, 20, 56, 57, 30, 53, 57, 57, 34, 33, 58, 27, 50, 44, 57, 26, 30};
    vector<int> percentageB = {28, 37, 38, 29, 42, 49, 40, 20, 22, 30, 48, 44, 59, 60, 22, 43, 49, 52, 31, 57, 48, 56, 35, 48, 52, 35, 30, 53, 30, 28, 32, 32, 51, 54, 60, 23, 35, 28, 38, 35, 43, 21, 45, 39, 47, 35, 37, 20, 60, 21};
    vector<int> reboundA = {6, 10, 9, 16, 20, 19, 4, 9, 3, 12, 15, 5, 2, 14, 4, 10, 13, 7, 9, 12, 12, 14, 9, 11, 13, 17, 15, 9, 17, 19, 3, 9, 19, 16, 13, 18, 18, 11, 20, 2, 3, 20, 16, 13, 10, 17, 13, 18, 18, 2};
    vector<int> reboundB = {15, 4, 19, 12, 7, 14, 3, 5, 20, 17, 10, 5, 3, 9, 2, 13, 15, 8, 6, 20, 6, 4, 15, 2, 5, 11, 17, 10, 13, 18, 4, 5, 5, 18, 15, 10, 14, 3, 15, 2, 20, 5, 12, 18, 10, 13, 3, 9, 2, 20};
    int time = 180;
    int scoreA = 69;
    int scoreB = 60;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> percentageA = {44, 59, 31, 23, 20, 49, 51, 49, 27, 27, 58, 31, 55, 42, 46, 43, 43, 27, 60, 55, 43, 57, 48, 55, 26, 51, 27, 40, 27, 31, 21, 57, 56, 47, 29, 21, 25, 46, 30, 49, 60, 37, 26, 47, 49, 32, 21, 22, 28, 58};
    vector<int> percentageB = {57, 48, 41, 31, 38, 29, 58, 43, 46, 30, 24, 21, 57, 36, 49, 24, 43, 43, 22, 25, 31, 38, 29, 37, 57, 22, 32, 56, 56, 25, 24, 35, 32, 46, 27, 20, 41, 41, 30, 58, 52, 31, 25, 54, 43, 48, 24, 47, 41, 48};
    vector<int> reboundA = {2, 14, 20, 2, 6, 18, 20, 8, 3, 5, 8, 6, 10, 19, 13, 11, 18, 12, 7, 11, 6, 17, 10, 8, 8, 17, 19, 13, 10, 9, 2, 9, 12, 19, 10, 18, 5, 18, 2, 19, 8, 8, 11, 12, 10, 5, 7, 2, 12, 10};
    vector<int> reboundB = {4, 20, 13, 11, 7, 12, 17, 16, 7, 18, 18, 16, 15, 7, 11, 20, 6, 17, 16, 6, 7, 8, 11, 5, 16, 7, 16, 9, 15, 14, 4, 3, 18, 3, 4, 9, 8, 11, 7, 9, 8, 5, 20, 11, 10, 9, 19, 14, 15, 2};
    int time = 180;
    int scoreA = 73;
    int scoreB = 73;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.46023126098410294;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> percentageA = {34, 27, 35, 46, 39, 24, 35, 29, 29, 36, 48, 57, 45, 54, 58, 55, 54, 56, 30, 51, 44, 27, 47, 35, 44, 29, 55, 30, 20, 54, 54, 57, 26, 37, 39, 32, 36, 37, 53, 37, 22, 31, 41, 29, 26, 41, 49, 49, 53, 21};
    vector<int> percentageB = {48, 34, 23, 33, 33, 20, 34, 44, 27, 58, 35, 20, 33, 43, 60, 24, 52, 59, 47, 34, 57, 23, 60, 49, 25, 27, 58, 29, 56, 31, 25, 51, 20, 44, 58, 32, 31, 33, 56, 56, 33, 27, 38, 28, 42, 59, 29, 56, 22, 56};
    vector<int> reboundA = {8, 9, 9, 19, 10, 16, 9, 8, 15, 12, 13, 9, 6, 18, 17, 9, 12, 6, 8, 18, 5, 14, 7, 3, 9, 4, 4, 18, 11, 20, 20, 7, 15, 10, 5, 16, 11, 13, 16, 12, 17, 15, 19, 20, 6, 5, 17, 6, 4, 14};
    vector<int> reboundB = {15, 4, 2, 18, 9, 13, 9, 5, 12, 13, 16, 17, 2, 3, 5, 2, 10, 15, 15, 11, 3, 9, 17, 3, 9, 20, 3, 12, 12, 10, 15, 7, 2, 11, 3, 11, 16, 19, 17, 12, 4, 8, 19, 2, 19, 8, 4, 4, 17, 20};
    int time = 180;
    int scoreA = 83;
    int scoreB = 77;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9907268771446173;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> percentageA = {27, 50, 59, 59, 24, 39, 40, 40, 56, 47, 39, 45, 57, 35, 35, 50, 57, 37, 21, 49, 40, 27, 38, 31, 24, 22, 47, 35, 44, 52, 46, 35, 23, 30, 33, 20, 27, 38, 40, 41, 47, 49, 51, 53, 24, 59, 38, 32, 48, 34};
    vector<int> percentageB = {49, 31, 44, 27, 58, 57, 29, 52, 52, 51, 28, 40, 39, 30, 31, 55, 36, 29, 53, 39, 51, 41, 52, 29, 21, 57, 37, 37, 59, 27, 49, 34, 60, 39, 20, 32, 50, 50, 24, 57, 45, 24, 20, 59, 43, 53, 35, 56, 59, 20};
    vector<int> reboundA = {15, 6, 15, 10, 20, 8, 18, 6, 11, 19, 12, 2, 10, 3, 14, 5, 3, 2, 12, 15, 10, 18, 11, 6, 12, 3, 15, 10, 17, 16, 17, 9, 7, 14, 15, 20, 5, 10, 7, 5, 19, 13, 17, 9, 19, 11, 17, 5, 4, 18};
    vector<int> reboundB = {8, 2, 13, 18, 14, 13, 2, 5, 7, 2, 13, 20, 12, 11, 12, 20, 10, 11, 19, 14, 7, 16, 14, 6, 4, 5, 12, 13, 11, 8, 20, 20, 13, 8, 4, 2, 3, 11, 8, 20, 18, 19, 15, 18, 10, 7, 11, 9, 16, 20};
    int time = 180;
    int scoreA = 36;
    int scoreB = 41;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.035670801126284596;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> percentageA = {53, 32, 43, 20, 53, 58, 23, 56, 40, 29, 46, 43, 25, 26, 25, 51, 43, 20, 29, 60, 57, 48, 34, 29, 28, 34, 37, 34, 30, 53, 28, 26, 37, 39, 33, 50, 33, 37, 36, 55, 37, 57, 39, 38, 42, 41, 21, 34, 40, 41};
    vector<int> percentageB = {24, 40, 40, 35, 55, 41, 33, 25, 26, 52, 39, 53, 43, 57, 25, 46, 25, 56, 46, 30, 46, 21, 40, 60, 36, 33, 32, 49, 23, 49, 32, 51, 29, 29, 35, 60, 40, 37, 29, 50, 29, 60, 56, 54, 31, 23, 49, 32, 28, 39};
    vector<int> reboundA = {11, 8, 16, 18, 12, 4, 2, 11, 11, 13, 9, 4, 7, 10, 10, 18, 19, 3, 17, 13, 20, 4, 4, 15, 12, 16, 17, 11, 8, 2, 15, 14, 3, 13, 13, 20, 16, 3, 18, 14, 4, 5, 12, 9, 9, 16, 7, 20, 13, 5};
    vector<int> reboundB = {18, 2, 13, 10, 19, 13, 13, 12, 20, 9, 13, 12, 14, 9, 17, 2, 18, 3, 16, 12, 11, 16, 17, 7, 5, 16, 14, 19, 6, 19, 11, 11, 12, 16, 7, 6, 19, 17, 3, 18, 9, 10, 18, 5, 10, 9, 9, 17, 6, 17};
    int time = 180;
    int scoreA = 69;
    int scoreB = 70;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4447114655006103;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> percentageA = {23, 49, 48, 34, 45, 26, 27, 31, 32, 56, 34, 57, 57, 27, 35, 60, 44, 45, 28, 43, 22, 51, 32, 48, 22, 35, 39, 40, 21, 36, 58, 43, 31, 21, 25, 45, 35, 51, 22, 31, 34, 32, 55, 37, 25, 28, 58, 58, 56, 45};
    vector<int> percentageB = {60, 55, 24, 25, 56, 38, 59, 34, 58, 39, 40, 56, 49, 51, 60, 31, 29, 43, 51, 43, 28, 24, 36, 56, 35, 34, 51, 29, 25, 42, 59, 47, 24, 24, 31, 52, 59, 59, 48, 49, 58, 42, 36, 54, 45, 42, 46, 60, 22, 32};
    vector<int> reboundA = {20, 19, 13, 19, 5, 12, 13, 4, 19, 4, 13, 15, 2, 18, 11, 12, 13, 9, 19, 10, 10, 12, 5, 19, 13, 9, 13, 6, 11, 19, 2, 6, 17, 17, 11, 7, 4, 7, 14, 8, 20, 6, 15, 12, 5, 10, 4, 8, 6, 4};
    vector<int> reboundB = {7, 7, 11, 7, 3, 5, 14, 15, 12, 8, 6, 13, 10, 17, 15, 4, 12, 4, 2, 7, 20, 7, 19, 4, 19, 8, 11, 20, 19, 9, 10, 19, 14, 3, 17, 16, 15, 8, 15, 3, 11, 6, 18, 8, 10, 5, 20, 16, 12, 19};
    int time = 300;
    int scoreA = 12;
    int scoreB = 12;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4093399690791083;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> percentageA = {41, 47, 47, 20, 28, 24, 33, 29, 23, 31, 48, 30, 60, 28, 36, 53, 38, 37, 26, 32, 26, 51, 33};
    vector<int> percentageB = {43, 20, 51, 59, 39, 24, 25, 31, 29, 24, 44, 37, 28, 52, 42, 41, 40, 53, 29, 27, 22, 58, 37};
    vector<int> reboundA = {10, 15, 14, 19, 6, 7, 5, 16, 20, 19, 12, 16, 5, 6, 10, 15, 19, 10, 2, 20, 14, 15, 13};
    vector<int> reboundB = {8, 3, 8, 16, 5, 9, 13, 4, 6, 11, 8, 5, 4, 7, 13, 6, 10, 15, 5, 4, 8, 2, 3};
    int time = 300;
    int scoreA = 80;
    int scoreB = 77;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.726788486703416;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> percentageA = {45, 50, 21, 20, 22, 53, 34, 45, 21, 55, 31, 23, 52, 20, 40, 47, 38, 32, 54, 59, 37, 58, 37};
    vector<int> percentageB = {27, 40, 21, 58, 25, 52, 57, 43, 40, 28, 48, 55, 44, 20, 48, 36, 22, 28, 39, 38, 58, 32, 39};
    vector<int> reboundA = {7, 16, 16, 8, 15, 19, 20, 15, 9, 16, 4, 8, 3, 19, 12, 2, 14, 12, 9, 6, 8, 3, 2};
    vector<int> reboundB = {7, 17, 6, 8, 4, 14, 14, 10, 6, 19, 12, 2, 9, 11, 19, 4, 3, 15, 6, 12, 19, 3, 8};
    int time = 300;
    int scoreA = 40;
    int scoreB = 37;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7789264154054888;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> percentageA = {30, 29, 22, 39, 20, 50, 60, 36, 33, 34, 27, 41, 28, 32, 54, 36, 42, 31, 25, 47, 26, 51, 44};
    vector<int> percentageB = {25, 40, 58, 44, 56, 50, 56, 42, 54, 38, 20, 39, 39, 56, 39, 33, 58, 50, 25, 41, 40, 32, 46};
    vector<int> reboundA = {12, 17, 17, 2, 17, 5, 7, 3, 3, 14, 4, 4, 15, 18, 14, 15, 14, 5, 18, 12, 11, 12, 5};
    vector<int> reboundB = {19, 7, 7, 20, 2, 3, 14, 2, 9, 9, 14, 16, 9, 19, 20, 6, 8, 17, 15, 4, 15, 6, 13};
    int time = 300;
    int scoreA = 87;
    int scoreB = 84;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7458491649794542;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> percentageA = {38, 54, 35, 48, 49, 59, 23, 29, 50, 24, 27, 35, 37, 43, 26, 36, 48, 25, 21, 34, 59, 57, 25};
    vector<int> percentageB = {30, 49, 58, 34, 25, 23, 36, 26, 34, 58, 60, 46, 57, 20, 40, 28, 58, 23, 21, 31, 27, 30, 44};
    vector<int> reboundA = {5, 7, 4, 11, 5, 9, 15, 9, 2, 18, 19, 11, 4, 13, 8, 16, 19, 4, 12, 11, 5, 18, 13};
    vector<int> reboundB = {10, 2, 4, 11, 12, 20, 10, 7, 2, 19, 18, 20, 8, 9, 10, 15, 6, 12, 12, 7, 9, 20, 14};
    int time = 300;
    int scoreA = 92;
    int scoreB = 95;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.28774128884318817;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> percentageA = {44, 53, 52, 47, 20, 42, 33, 39, 20, 26, 45, 40, 39, 37, 36, 26, 57, 44, 32, 30, 27, 38, 20};
    vector<int> percentageB = {39, 40, 37, 27, 43, 43, 34, 35, 21, 60, 57, 26, 55, 58, 32, 26, 46, 59, 35, 39, 33, 46, 22};
    vector<int> reboundA = {17, 4, 3, 7, 6, 14, 20, 14, 4, 13, 10, 11, 2, 17, 7, 10, 18, 7, 16, 7, 13, 9, 18};
    vector<int> reboundB = {12, 9, 3, 19, 18, 5, 16, 14, 13, 12, 18, 16, 13, 20, 16, 5, 2, 4, 4, 20, 6, 10, 20};
    int time = 300;
    int scoreA = 9;
    int scoreB = 12;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2564826480534824;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> percentageA = {41, 30, 36, 40, 46, 46, 44, 51, 37, 31, 39, 39, 37, 59, 23, 22, 46, 43, 32, 37, 40, 25, 33};
    vector<int> percentageB = {32, 56, 51, 46, 53, 27, 21, 23, 40, 54, 44, 43, 38, 53, 27, 27, 54, 30, 46, 36, 37, 49, 24};
    vector<int> reboundA = {9, 12, 18, 3, 11, 10, 17, 5, 19, 9, 13, 19, 5, 13, 4, 2, 14, 4, 3, 13, 2, 17, 5};
    vector<int> reboundB = {6, 7, 5, 3, 4, 19, 10, 7, 3, 3, 13, 19, 16, 19, 2, 20, 7, 14, 3, 13, 20, 12, 12};
    int time = 300;
    int scoreA = 9;
    int scoreB = 9;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4987788480182374;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> percentageA = {20, 50, 44, 34, 26, 23, 55, 30, 47, 57, 48, 51, 57, 44, 58, 46, 29, 33, 37, 44, 40, 42, 30};
    vector<int> percentageB = {34, 56, 55, 56, 39, 44, 48, 32, 35, 31, 45, 50, 25, 51, 37, 41, 49, 55, 33, 34, 32, 60, 44};
    vector<int> reboundA = {9, 18, 15, 8, 14, 9, 12, 13, 18, 4, 11, 7, 19, 20, 12, 14, 6, 5, 5, 2, 20, 6, 2};
    vector<int> reboundB = {7, 2, 19, 2, 12, 2, 12, 11, 17, 17, 19, 10, 3, 12, 5, 8, 15, 15, 11, 13, 17, 15, 6};
    int time = 300;
    int scoreA = 25;
    int scoreB = 26;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4194074906581274;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> percentageA = {26, 26, 23, 29, 57, 28, 41, 45, 30, 45, 40, 43, 40, 58, 56, 36, 27, 25, 20, 51, 31, 46, 24};
    vector<int> percentageB = {60, 55, 20, 39, 25, 48, 48, 42, 53, 30, 48, 41, 28, 47, 43, 57, 32, 24, 22, 33, 36, 54, 38};
    vector<int> reboundA = {9, 15, 4, 13, 12, 11, 16, 14, 18, 16, 13, 7, 12, 2, 11, 15, 7, 6, 4, 2, 8, 19, 20};
    vector<int> reboundB = {15, 17, 5, 20, 11, 18, 19, 13, 5, 15, 15, 2, 10, 13, 13, 8, 19, 9, 14, 4, 11, 2, 11};
    int time = 300;
    int scoreA = 52;
    int scoreB = 44;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8898035564216058;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> percentageA = {55, 23, 47, 43, 34, 53, 26, 48, 59, 54, 57, 54, 21, 23, 27, 33, 59, 21, 45, 55, 47, 47, 31};
    vector<int> percentageB = {28, 57, 56, 49, 21, 32, 51, 57, 46, 60, 57, 40, 50, 45, 42, 38, 57, 52, 51, 44, 58, 37, 26};
    vector<int> reboundA = {18, 18, 20, 8, 10, 13, 15, 11, 11, 4, 15, 6, 13, 3, 11, 4, 19, 5, 7, 10, 13, 11, 16};
    vector<int> reboundB = {12, 10, 2, 8, 14, 4, 4, 5, 15, 8, 15, 16, 9, 10, 9, 4, 10, 10, 17, 18, 2, 12, 11};
    int time = 300;
    int scoreA = 14;
    int scoreB = 8;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9065446019710741;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> percentageA = {51, 58, 25, 46, 47, 53, 29, 37, 54, 56, 38, 24, 56, 29, 28, 24, 25, 32, 44, 45, 32, 54, 49};
    vector<int> percentageB = {55, 24, 48, 39, 22, 35, 47, 25, 57, 57, 26, 53, 54, 34, 55, 47, 37, 33, 36, 34, 41, 37, 33};
    vector<int> reboundA = {5, 12, 7, 20, 19, 11, 14, 2, 11, 4, 7, 2, 18, 12, 9, 15, 11, 18, 13, 6, 11, 2, 12};
    vector<int> reboundB = {12, 8, 5, 11, 18, 5, 18, 20, 5, 20, 8, 7, 15, 16, 19, 13, 6, 4, 16, 12, 14, 13, 14};
    int time = 300;
    int scoreA = 77;
    int scoreB = 78;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4700678663419652;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> percentageA = {46, 56, 40, 38, 24, 28, 30, 39, 21, 31, 40, 58, 29, 49, 48, 54, 52, 21, 34, 59, 25, 50, 59};
    vector<int> percentageB = {36, 34, 31, 53, 41, 42, 44, 25, 44, 56, 22, 34, 46, 55, 51, 35, 54, 20, 36, 43, 34, 60, 20};
    vector<int> reboundA = {18, 8, 10, 14, 2, 16, 15, 8, 3, 8, 12, 8, 11, 2, 8, 16, 18, 11, 9, 10, 10, 18, 17};
    vector<int> reboundB = {6, 9, 2, 9, 17, 13, 8, 19, 14, 17, 8, 15, 3, 8, 16, 12, 18, 17, 2, 3, 11, 4, 17};
    int time = 300;
    int scoreA = 13;
    int scoreB = 8;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9355233496932868;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> percentageA = {41, 54, 29, 59, 28, 28, 34, 50, 30, 22, 37, 59, 37, 53, 21, 39, 56, 40, 20, 28, 49, 48, 57};
    vector<int> percentageB = {33, 50, 31, 38, 21, 33, 54, 46, 50, 51, 41, 50, 53, 41, 20, 44, 29, 56, 37, 25, 38, 34, 47};
    vector<int> reboundA = {3, 20, 8, 12, 13, 19, 2, 9, 17, 13, 9, 12, 6, 12, 14, 8, 4, 9, 15, 15, 17, 13, 16};
    vector<int> reboundB = {4, 4, 5, 11, 13, 4, 12, 18, 18, 17, 19, 7, 15, 12, 12, 20, 15, 10, 4, 4, 3, 8, 2};
    int time = 300;
    int scoreA = 89;
    int scoreB = 92;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3862984108896498;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> percentageA = {21, 51, 38, 42, 35, 46, 38, 38, 39, 22, 37, 45, 39, 34, 45, 59, 45, 39, 40, 60, 42, 58, 34};
    vector<int> percentageB = {59, 39, 60, 35, 33, 35, 46, 45, 34, 39, 57, 52, 55, 21, 58, 52, 52, 58, 48, 24, 40, 41, 36};
    vector<int> reboundA = {7, 11, 6, 13, 4, 19, 16, 15, 19, 8, 7, 14, 10, 18, 7, 11, 16, 12, 12, 12, 10, 6, 3};
    vector<int> reboundB = {12, 9, 6, 4, 17, 6, 3, 5, 11, 2, 5, 12, 14, 14, 3, 7, 19, 14, 10, 5, 14, 6, 19};
    int time = 300;
    int scoreA = 82;
    int scoreB = 86;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1374536185132702;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> percentageA = {50, 20, 46, 38, 55, 32, 60, 21, 38, 27, 28, 43, 56, 60, 42, 26, 54, 58, 58, 34, 49, 25, 45};
    vector<int> percentageB = {33, 55, 51, 34, 58, 52, 33, 25, 53, 28, 25, 52, 34, 60, 47, 35, 32, 59, 34, 26, 31, 22, 51};
    vector<int> reboundA = {16, 19, 6, 18, 6, 3, 12, 13, 17, 16, 18, 9, 6, 2, 2, 6, 6, 4, 13, 7, 12, 17, 11};
    vector<int> reboundB = {6, 13, 14, 8, 4, 18, 17, 6, 2, 11, 18, 19, 17, 16, 13, 13, 10, 10, 17, 17, 20, 7, 14};
    int time = 300;
    int scoreA = 78;
    int scoreB = 85;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08127236325673796;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> percentageA = {36, 55, 32, 33, 34, 35, 41, 43, 51, 39, 41, 21, 52, 46, 33, 41, 20, 35, 20, 39, 39, 36, 42};
    vector<int> percentageB = {28, 54, 36, 39, 22, 53, 53, 46, 42, 59, 33, 38, 40, 29, 27, 58, 53, 42, 39, 57, 33, 40, 53};
    vector<int> reboundA = {2, 9, 9, 7, 11, 12, 3, 17, 9, 8, 9, 20, 19, 11, 20, 17, 6, 17, 18, 12, 14, 16, 4};
    vector<int> reboundB = {5, 10, 11, 20, 2, 15, 14, 12, 7, 15, 7, 7, 9, 4, 9, 8, 16, 7, 7, 14, 2, 6, 7};
    int time = 300;
    int scoreA = 96;
    int scoreB = 88;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9105590321422845;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> percentageA = {30, 22, 27, 33, 34, 36, 25, 33, 44, 41, 21, 55, 50, 57, 50, 46, 37, 53, 41, 35, 36, 31, 47};
    vector<int> percentageB = {60, 44, 45, 43, 21, 22, 57, 23, 52, 29, 22, 48, 50, 22, 22, 21, 21, 23, 36, 35, 36, 48, 44};
    vector<int> reboundA = {15, 5, 7, 3, 8, 19, 7, 11, 3, 12, 2, 19, 18, 8, 18, 19, 5, 6, 9, 16, 13, 12, 2};
    vector<int> reboundB = {13, 16, 13, 20, 8, 5, 14, 19, 16, 14, 4, 17, 17, 15, 15, 16, 14, 19, 15, 9, 9, 6, 13};
    int time = 300;
    int scoreA = 21;
    int scoreB = 21;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3907546457491758;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> percentageA = {60, 55, 42, 29, 40, 50, 21, 56, 39, 24, 44, 40, 47, 47, 56, 48, 37, 31, 22, 46, 53, 26, 30};
    vector<int> percentageB = {50, 34, 33, 29, 51, 58, 50, 40, 21, 25, 39, 36, 35, 32, 39, 32, 44, 57, 52, 55, 20, 47, 45};
    vector<int> reboundA = {4, 20, 2, 15, 10, 15, 7, 17, 11, 13, 10, 7, 19, 9, 11, 19, 8, 7, 16, 16, 3, 14, 7};
    vector<int> reboundB = {16, 13, 17, 10, 8, 2, 5, 16, 12, 16, 7, 13, 20, 19, 17, 8, 12, 20, 3, 16, 10, 12, 3};
    int time = 300;
    int scoreA = 16;
    int scoreB = 22;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08914753657240274;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> percentageA = {24, 48, 39, 59, 42, 50, 48, 21, 27, 60, 57, 44, 49, 46, 46, 57, 21, 49, 36, 43, 60, 31, 20};
    vector<int> percentageB = {29, 24, 50, 21, 28, 30, 32, 45, 20, 48, 39, 22, 49, 46, 37, 38, 42, 27, 56, 29, 50, 57, 20};
    vector<int> reboundA = {16, 2, 2, 8, 11, 13, 14, 14, 4, 8, 5, 10, 7, 16, 6, 14, 4, 8, 7, 13, 8, 17, 16};
    vector<int> reboundB = {5, 12, 7, 3, 18, 11, 13, 10, 18, 11, 16, 12, 20, 7, 11, 11, 6, 8, 5, 11, 18, 19, 4};
    int time = 300;
    int scoreA = 10;
    int scoreB = 8;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.690902964683045;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> percentageA = {23, 44, 55, 42, 24, 39, 32, 28, 40, 27, 42, 24, 20, 24, 55, 30, 22, 39, 31, 37, 22, 51, 48};
    vector<int> percentageB = {25, 57, 51, 48, 39, 36, 24, 51, 49, 40, 37, 35, 41, 57, 54, 45, 54, 25, 49, 22, 20, 28, 30};
    vector<int> reboundA = {10, 2, 6, 20, 6, 11, 13, 15, 19, 9, 7, 11, 20, 13, 7, 17, 12, 20, 16, 6, 17, 5, 13};
    vector<int> reboundB = {8, 14, 11, 19, 14, 8, 14, 15, 3, 8, 19, 20, 12, 13, 14, 14, 10, 19, 15, 17, 19, 5, 13};
    int time = 300;
    int scoreA = 22;
    int scoreB = 27;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14806082171564397;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> percentageA = {27, 37, 28, 38, 55, 30, 31, 31, 48, 52, 52, 42, 59, 28, 38, 45, 59, 54, 56, 51, 53, 55, 53};
    vector<int> percentageB = {57, 55, 21, 39, 60, 30, 37, 57, 41, 25, 56, 52, 34, 24, 44, 36, 59, 59, 44, 54, 30, 39, 41};
    vector<int> reboundA = {3, 11, 16, 12, 12, 7, 16, 7, 13, 10, 9, 11, 19, 7, 3, 14, 16, 19, 19, 4, 8, 11, 13};
    vector<int> reboundB = {2, 6, 13, 15, 11, 14, 3, 2, 9, 6, 16, 3, 18, 8, 14, 4, 11, 16, 3, 5, 11, 2, 14};
    int time = 300;
    int scoreA = 22;
    int scoreB = 25;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.27945478659756423;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> percentageA = {5, 8, 10, 13, 15, 20, 25, 30, 35, 40, 41, 42, 42, 43, 44, 46, 45, 45, 46, 47, 48, 48, 48};
    vector<int> percentageB = {5, 8, 10, 13, 15, 20, 25, 30, 35, 40, 41, 42, 42, 43, 44, 46, 45, 45, 46, 47, 48, 48, 48};
    vector<int> reboundA = {10, 11, 12, 13, 14, 15, 16, 17, 18, 18, 18, 18, 19, 20, 20, 18, 18, 17, 16, 15, 15, 14, 13};
    vector<int> reboundB = {10, 11, 12, 13, 14, 15, 16, 17, 18, 18, 18, 18, 19, 20, 20, 18, 18, 17, 16, 15, 15, 14, 13};
    int time = 300;
    int scoreA = 89;
    int scoreB = 98;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.010792332158302477;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> percentageA = {100};
    vector<int> percentageB = {100};
    vector<int> reboundA = {100};
    vector<int> reboundB = {100};
    int time = 299;
    int scoreA = 100;
    int scoreB = 100;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> percentageA = {100};
    vector<int> percentageB = {100};
    vector<int> reboundA = {100};
    vector<int> reboundB = {100};
    int time = 300;
    int scoreA = 100;
    int scoreB = 100;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> percentageA = {17, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3};
    vector<int> percentageB = {17, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3};
    vector<int> reboundA = {17, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3};
    vector<int> reboundB = {17, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3, 41, 21, 41, 63, 23, 63, 67, 91, 21, 3};
    int time = 300;
    int scoreA = 0;
    int scoreB = 0;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5017933656540992;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> percentageA = {32, 32, 54, 12, 52, 56, 8, 30, 44, 94, 44, 39, 65, 19, 51, 91, 1, 5, 89, 34, 25, 58, 20, 51, 38, 65, 30, 7, 20, 10, 51, 18, 43, 71, 97, 61, 26, 5, 57, 70, 65, 0, 75, 29, 86, 93, 87, 87, 64, 75};
    vector<int> percentageB = {88, 89, 100, 7, 40, 37, 38, 36, 44, 24, 46, 95, 43, 89, 32, 5, 15, 58, 77, 72, 95, 8, 38, 69, 37, 24, 27, 90, 77, 92, 31, 30, 80, 30, 37, 86, 33, 76, 21, 77, 100, 68, 37, 8, 22, 69, 81, 38, 94, 57};
    vector<int> reboundA = {76, 54, 65, 14, 89, 69, 4, 16, 24, 47, 7, 21, 78, 53, 17, 81, 39, 50, 22, 60, 93, 89, 94, 30, 97, 16, 65, 43, 20, 24, 67, 62, 78, 98, 42, 67, 32, 46, 49, 57, 60, 56, 44, 37, 75, 62, 17, 13, 11, 40};
    vector<int> reboundB = {40, 4, 95, 100, 0, 57, 82, 31, 0, 1, 56, 67, 30, 100, 64, 72, 66, 63, 18, 81, 19, 44, 2, 63, 81, 78, 91, 64, 91, 2, 70, 97, 73, 64, 97, 39, 21, 78, 70, 21, 46, 25, 54, 76, 92, 84, 47, 57, 46, 31};
    int time = 300;
    int scoreA = 100;
    int scoreB = 100;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3492966910592574;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> percentageA = {51};
    vector<int> percentageB = {50};
    vector<int> reboundA = {37};
    vector<int> reboundB = {38};
    int time = 300;
    int scoreA = 100;
    int scoreB = 100;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5117187891293529;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> percentageA = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> percentageB = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> reboundA = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> reboundB = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int time = 300;
    int scoreA = 1;
    int scoreB = 0;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7057571941893207;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> percentageA = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> percentageB = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> reboundA = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> reboundB = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    int time = 300;
    int scoreA = 50;
    int scoreB = 50;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.377819763154806;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> percentageA = {99};
    vector<int> percentageB = {1};
    vector<int> reboundA = {100};
    vector<int> reboundB = {0};
    int time = 300;
    int scoreA = 100;
    int scoreB = 0;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> percentageA = {100};
    vector<int> percentageB = {100};
    vector<int> reboundA = {0};
    vector<int> reboundB = {0};
    int time = 4;
    int scoreA = 0;
    int scoreB = 0;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> percentageA = {99};
    vector<int> percentageB = {1};
    vector<int> reboundA = {99};
    vector<int> reboundB = {1};
    int time = 300;
    int scoreA = 100;
    int scoreB = 0;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> percentageA = {10, 20, 30, 40};
    vector<int> percentageB = {10, 20, 30, 40};
    vector<int> reboundA = {1, 2, 3, 4};
    vector<int> reboundB = {1, 2, 3, 4};
    int time = 1;
    int scoreA = 0;
    int scoreB = 0;
    ClockManagement* pObj = new ClockManagement();
    clock_t start = clock();
    double result = pObj->winProbability(percentageA, percentageB, reboundA, reboundB, time, scoreA, scoreB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=7223&pm=4612
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <deque>
#include <ctime>
#include <queue> 
using namespace std;
 
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ii;
 
int OFFSET=1000;
double sp[2][55];
double rp[2][55];
 
double p[2][301][2001];
bool d[2][301][2001];
int SC;
int P[] = {2, -2};
class ClockManagement {
  public:
  double go(int team, int time, int diff) {
    if (d[team][time][diff]) return p[team][time][diff];
    if (time == 0) {
      if (team == 0) {
        if (diff > OFFSET) return 1;
        return 0;
      }
      else {
        if (diff <= OFFSET) return 1;
        return 0;
      }
    }
    if (time == 1) {
      return go(team, 0, diff);
    }
    
    double opt = 0;
    for (int i = 2; i <= SC && i <= time; i++) {
      double winp = 0;
      winp += (1 - go(1-team, time-i, diff + P[team])) * sp[team][i];
      winp += (go(team, time-i, diff)) * (1-sp[team][i]) * rp[team][i];
      winp += (1 - go(1-team, time-i, diff)) * (1-sp[team][i]) * (1 - rp[team][i]);
      opt >?= winp;
    }
    d[team][time][diff] = 1;
    p[team][time][diff] = opt;
    return opt;
  }
  double winProbability(vector <int> percentageA, vector <int> percentageB, vector <int> reboundA, vector <int> reboundB, int time, int scoreA, int scoreB) {
    SC = percentageA.si + 1;
    for (int i = 0; i < percentageA.si; i++) sp[0][i+2] = 0.01 * percentageA[i];
    for (int i = 0; i < percentageA.si; i++) sp[1][i+2] = 0.01 * percentageB[i];
    for (int i = 0; i < percentageA.si; i++) rp[0][i+2] = 0.01 * reboundA[i];
    for (int i = 0; i < percentageA.si; i++) rp[1][i+2] = 0.01 * reboundB[i];
    
    int diff = scoreA - scoreB;
    return go(0, time, diff+OFFSET);
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/