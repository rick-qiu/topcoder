/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4782
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

class GradingSystem {
public:
    int fairness(vector<int> scores, vector<int> grades);
};

int GradingSystem::fairness(vector<int> scores, vector<int> grades) {
    int ret;
    return ret;
}


int test0() {
    vector<int> scores = {60, 80, 80};
    vector<int> grades = {3, 8, 6};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> scores = {0, 25, 50, 75, 100};
    vector<int> grades = {0, 1, 3, 6, 8};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
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
    vector<int> scores = {0, 25, 50, 75, 100};
    vector<int> grades = {8, 6, 3, 1, 0};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> scores = {4, 6, 7, 9, 11, 14, 16, 17, 17, 21, 28, 28, 31, 33, 36, 39, 43, 44, 49, 54, 57, 59, 61, 62, 65, 66, 69, 71, 76, 77, 80, 83, 94, 97, 100};
    vector<int> grades = {0, 2, 0, 7, 1, 5, 0, 5, 0, 3, 5, 3, 6, 2, 8, 6, 2, 6, 7, 0, 3, 4, 0, 8, 3, 0, 7, 0, 6, 5, 5, 7, 0, 4, 3};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 243;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> scores = {4, 5, 6, 21, 22, 24, 28, 30, 33, 33, 35, 35, 35, 44, 48, 49, 54, 58, 60, 68, 72, 73, 77, 83, 83, 85, 86, 86, 91, 94, 100};
    vector<int> grades = {2, 0, 1, 8, 2, 0, 8, 4, 4, 0, 7, 6, 5, 7, 2, 6, 4, 6, 1, 2, 5, 0, 6, 5, 0, 5, 7, 2, 3, 8, 2};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> scores = {7, 58};
    vector<int> grades = {5, 4};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> scores = {1, 6, 16, 24, 28, 35, 41, 43, 44, 45, 47, 54, 54, 56, 59, 61, 67, 67, 70, 75, 76, 76, 82, 84, 87, 90, 90, 91, 91, 91, 93, 94};
    vector<int> grades = {0, 5, 6, 4, 1, 4, 5, 6, 1, 5, 3, 5, 5, 2, 1, 2, 8, 3, 0, 4, 8, 1, 0, 1, 3, 5, 2, 5, 2, 2, 5, 2};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> scores = {1, 3, 5, 6, 8, 13, 14, 14, 14, 15, 16, 17, 18, 21, 23, 31, 31, 34, 41, 42, 42, 44, 47, 48, 51, 53, 62, 65, 67, 67, 68, 69, 71, 71, 73, 74, 79, 82, 83, 88, 88, 90, 91, 92, 93, 95, 99, 100, 100};
    vector<int> grades = {1, 5, 6, 6, 6, 0, 6, 2, 1, 6, 4, 7, 1, 2, 0, 8, 7, 2, 1, 3, 3, 7, 7, 7, 1, 2, 0, 4, 6, 0, 5, 5, 8, 7, 1, 5, 1, 4, 3, 2, 2, 0, 8, 4, 2, 4, 7, 8, 0};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> scores = {6, 10, 12, 16, 17, 33, 39, 40, 45, 54, 58, 64, 64, 65, 67, 67, 75, 78, 78, 80, 81, 86, 91, 94};
    vector<int> grades = {1, 5, 4, 7, 2, 6, 4, 5, 1, 2, 0, 7, 6, 3, 3, 2, 2, 5, 4, 7, 2, 2, 2, 7};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> scores = {8, 11, 12, 12, 14, 19, 28, 29, 30, 31, 32, 37, 37, 40, 49, 50, 51, 52, 59, 60, 60, 64, 65, 70, 81, 93, 93, 94};
    vector<int> grades = {0, 3, 6, 0, 8, 1, 1, 7, 2, 2, 2, 8, 4, 8, 7, 0, 4, 7, 0, 4, 3, 3, 7, 7, 5, 2, 0, 7};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> scores = {0, 2, 7, 10, 12, 13, 20, 25, 30, 33, 38, 41, 42, 46, 53, 56, 57, 57, 58, 59, 60, 61, 64, 65, 69, 70, 71, 77, 82, 83, 85, 88, 89, 93, 93, 95, 96};
    vector<int> grades = {0, 7, 3, 3, 4, 6, 5, 3, 3, 8, 8, 5, 4, 5, 1, 7, 8, 1, 1, 1, 3, 1, 5, 6, 7, 2, 0, 6, 6, 7, 5, 3, 1, 7, 2, 1, 3};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 268;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> scores = {5, 5, 26, 36, 49, 49, 51, 51, 53, 63, 70, 72, 82, 82, 89};
    vector<int> grades = {7, 0, 8, 0, 6, 1, 8, 7, 3, 3, 3, 5, 1, 0, 2};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> scores = {0, 4, 12, 13, 16, 17, 17, 18, 21, 23, 24, 25, 29, 39, 41, 42, 43, 44, 50, 52, 54, 54, 59, 62, 65, 73, 73, 82, 90, 91, 91, 93, 96, 98, 99};
    vector<int> grades = {7, 1, 2, 8, 5, 5, 0, 0, 8, 2, 0, 1, 4, 3, 4, 0, 0, 4, 5, 8, 6, 3, 7, 1, 4, 6, 2, 3, 1, 5, 3, 5, 2, 8, 1};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 259;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> scores = {6, 19, 34, 49, 50, 55, 63, 67, 74, 75, 80, 96};
    vector<int> grades = {1, 3, 0, 8, 3, 5, 4, 3, 7, 2, 3, 6};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> scores = {3, 3, 5, 6, 11, 12, 13, 16, 19, 31, 39, 40, 53, 54, 59, 67, 74, 82, 83, 84, 88, 91};
    vector<int> grades = {4, 0, 4, 2, 2, 4, 2, 1, 4, 3, 8, 8, 7, 1, 1, 8, 3, 5, 4, 8, 6, 0};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> scores = {18, 24, 25, 33, 43, 56, 66, 71, 73, 77, 80, 85, 97};
    vector<int> grades = {4, 2, 3, 7, 2, 7, 3, 6, 0, 7, 7, 6, 1};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> scores = {3, 30, 62, 67, 70, 70};
    vector<int> grades = {5, 2, 1, 5, 4, 3};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> scores = {16, 60, 64, 64, 67, 86};
    vector<int> grades = {2, 1, 3, 3, 1, 0};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> scores = {10, 14, 18, 26, 34, 35, 42};
    vector<int> grades = {1, 0, 8, 4, 7, 6, 5};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> scores = {1, 2, 6, 10, 11, 11, 17, 20, 25, 33, 37, 55, 58, 60, 65, 72, 72, 79, 81, 84, 92};
    vector<int> grades = {1, 1, 5, 2, 2, 1, 1, 4, 4, 5, 0, 5, 8, 3, 7, 5, 4, 1, 1, 3, 8};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> scores = {1, 3, 4, 7, 11, 11, 20, 20, 20, 21, 38, 49, 50, 50, 61, 71, 72, 78, 81, 81, 83, 90, 92, 96, 96, 97, 100};
    vector<int> grades = {6, 1, 4, 0, 8, 2, 8, 8, 3, 2, 1, 3, 7, 2, 1, 5, 6, 1, 8, 6, 5, 3, 2, 5, 4, 2, 7};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> scores = {1, 3, 8, 9, 9, 10, 14, 15, 21, 22, 22, 24, 24, 27, 27, 29, 30, 35, 39, 40, 42, 43, 49, 50, 55, 62, 66, 75, 77, 79, 81, 83, 83, 85, 87, 88, 95};
    vector<int> grades = {4, 7, 5, 8, 3, 2, 2, 7, 1, 8, 0, 5, 0, 4, 1, 2, 3, 4, 4, 4, 0, 5, 4, 4, 4, 6, 1, 2, 4, 0, 3, 6, 3, 5, 8, 0, 3};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 287;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> scores = {1, 2, 2, 2, 4, 5, 6, 8, 10, 12, 14, 20, 20, 20, 25, 27, 27, 28, 33, 36, 36, 37, 37, 40, 41, 41, 41, 44, 52, 53, 53, 56, 56, 62, 64, 66, 69, 71, 71, 73, 77, 81, 82, 86, 88, 89, 89, 92, 94};
    vector<int> grades = {2, 8, 4, 1, 6, 4, 7, 5, 5, 3, 4, 8, 3, 0, 8, 8, 0, 4, 7, 8, 6, 2, 1, 6, 7, 7, 0, 1, 1, 6, 3, 3, 1, 2, 1, 5, 5, 8, 7, 4, 4, 8, 2, 7, 0, 8, 2, 3, 1};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 382;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> scores = {0, 4, 6, 6, 8, 11, 15, 16, 19, 19, 24, 25, 26, 27, 27, 28, 32, 33, 34, 38, 40, 42, 45, 45, 53, 54, 54, 57, 58, 59, 60, 66, 69, 71, 72, 74, 77, 78, 80, 85, 85, 85, 89, 90, 91, 93, 98, 99};
    vector<int> grades = {2, 5, 3, 2, 3, 3, 5, 4, 7, 3, 6, 7, 4, 6, 3, 4, 3, 5, 5, 1, 5, 5, 3, 0, 2, 3, 2, 8, 3, 3, 8, 4, 7, 6, 2, 1, 8, 6, 7, 6, 3, 3, 8, 1, 1, 4, 3, 6};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 305;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> scores = {3, 6, 8, 12, 15, 18, 19, 22, 24, 24, 24, 26, 33, 34, 37, 38, 39, 42, 50, 52, 55, 57, 57, 60, 60, 62, 63, 65, 66, 67, 67, 70, 72, 73, 74, 74, 77, 78, 82, 85, 87, 88, 90, 94, 94, 95, 99, 99};
    vector<int> grades = {4, 2, 8, 1, 4, 0, 2, 8, 8, 7, 2, 4, 2, 0, 1, 4, 2, 6, 5, 6, 0, 6, 3, 5, 2, 8, 2, 0, 4, 8, 6, 0, 6, 0, 8, 5, 0, 7, 0, 1, 8, 1, 7, 6, 1, 6, 8, 1};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 367;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> scores = {0, 4, 8, 10, 16, 17, 17, 18, 20, 25, 27, 29, 31, 35, 41, 41, 43, 44, 45, 50, 52, 52, 53, 56, 57, 58, 60, 61, 64, 74, 75, 77, 77, 78, 80, 88, 92, 96, 96, 100};
    vector<int> grades = {3, 4, 4, 6, 3, 4, 2, 5, 2, 6, 7, 8, 4, 8, 4, 1, 3, 3, 8, 0, 6, 0, 5, 3, 0, 5, 7, 8, 2, 6, 6, 8, 8, 5, 7, 3, 1, 3, 2, 7};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 269;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> scores = {5, 5, 7, 20, 21, 34, 43, 68, 82};
    vector<int> grades = {8, 8, 8, 2, 1, 6, 0, 2, 3};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> scores = {5, 6, 16, 44, 52, 56, 68, 84, 85, 90, 96};
    vector<int> grades = {2, 5, 2, 8, 3, 6, 4, 7, 7, 7, 2};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> scores = {7, 8, 30, 40, 46, 58, 65, 67, 68, 83, 85, 97};
    vector<int> grades = {8, 2, 3, 2, 8, 7, 5, 5, 7, 2, 5, 2};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> scores = {2, 5, 6, 6, 6, 8, 8, 13, 14, 15, 16, 19, 29, 34, 36, 37, 38, 38, 41, 46, 49, 53, 54, 55, 57, 57, 58, 60, 63, 64, 66, 69, 71, 75, 76, 77, 78, 83, 84, 87, 88, 94};
    vector<int> grades = {3, 7, 1, 1, 1, 6, 0, 1, 5, 3, 4, 0, 6, 5, 0, 6, 6, 4, 4, 0, 2, 1, 4, 5, 8, 2, 2, 1, 6, 6, 6, 5, 3, 8, 5, 6, 7, 6, 3, 0, 2, 2};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 304;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> scores = {1, 2, 5, 8, 9, 9, 11, 11, 13, 14, 16, 18, 19, 20, 21, 22, 24, 24, 24, 30, 31, 36, 37, 37, 39, 39, 41, 50, 50, 50, 51, 51, 51, 56, 62, 64, 64, 66, 70, 72, 73, 75, 76, 79, 81, 89, 90, 94, 94, 97};
    vector<int> grades = {7, 0, 8, 8, 8, 2, 3, 1, 0, 5, 0, 7, 7, 7, 3, 3, 5, 4, 1, 7, 8, 7, 3, 1, 7, 4, 7, 8, 4, 0, 3, 2, 1, 3, 6, 6, 0, 4, 6, 7, 4, 1, 1, 6, 6, 8, 4, 7, 5, 3};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 371;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> scores = {6, 13, 13, 14, 19, 27, 28, 30, 39, 52, 57, 81, 82, 90, 90, 95, 96, 98, 98, 99};
    vector<int> grades = {5, 5, 4, 3, 7, 6, 8, 2, 3, 0, 7, 7, 8, 5, 1, 1, 2, 8, 6, 4};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> scores = {0, 2, 4, 6, 7, 9, 15, 17, 17, 17, 21, 23, 23, 24, 24, 24, 25, 26, 29, 36, 37, 38, 39, 40, 44, 45, 47, 52, 53, 54, 66, 69, 73, 74, 76, 76, 79, 79, 80, 80, 83, 87, 91, 91, 93, 94, 96};
    vector<int> grades = {4, 5, 4, 3, 2, 6, 5, 7, 5, 0, 8, 0, 0, 8, 7, 1, 2, 5, 5, 4, 2, 6, 3, 2, 2, 4, 1, 1, 8, 1, 3, 2, 4, 6, 4, 0, 8, 4, 5, 1, 7, 6, 7, 6, 5, 3, 2};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 335;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> scores = {0, 0, 0, 0};
    vector<int> grades = {8, 8, 8, 0};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> scores = {60, 80, 80};
    vector<int> grades = {3, 8, 6};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> scores = {0, 25, 50, 75, 100};
    vector<int> grades = {8, 6, 3, 1, 0};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> scores = {0, 25, 50, 75, 100};
    vector<int> grades = {8, 2, 5, 1, 0};
    GradingSystem* pObj = new GradingSystem();
    clock_t start = clock();
    int result = pObj->fairness(scores, grades);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15052919&rd=7998&pm=4782
********************************************************************************
#include<vector> 
#include<string> 
#include<algorithm> 
#include<iostream> 
#include<iterator> 
#include<numeric> 
#include<math.h> 
#include<sstream> 
 
#define fors(i,v) for(int i=0;i<v.size();i++) 
#define ifors(i,v) for(int i=v.size()-1;i>=0;i--) 
 
 
using namespace std; 
 
typedef vector<vector<int> > VVI; 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef long long LL; 
 
class GradingSystem { 
public:   
 
    int fairness(vector <int> scores, vector <int> grades)  
    { 
        VI v1,v2; 
        int n=0; 
     fors(i,scores) 
     { 
            n=max(n,grades[i]); 
            v1.push_back(n); 
        } 
        n=2000000000; 
        v2=v1; 
        ifors(i,scores) 
        { 
            n=min(n,grades[i]); 
            v2[i]=n; 
        } 
        n=0; 
        fors(i,v1)n+=abs(v1[i]-v2[i]); 
        return n; 
    } 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/