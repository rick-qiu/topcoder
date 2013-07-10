/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2369
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

class ScheduleResources {
public:
    int schedule(vector<int> A, vector<int> B);
};

int ScheduleResources::schedule(vector<int> A, vector<int> B) {
    int ret;
    return ret;
}


int test0() {
    vector<int> A = {7, 6, 3};
    vector<int> B = {9, 7, 3};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {8, 1, 6};
    vector<int> B = {1, 6, 3};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> A = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> B = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {4, 5, 6};
    vector<int> B = {1, 1, 6};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> A = {6, 5, 7, 3, 2, 3, 6, 8, 7};
    vector<int> B = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {41, 23, 93, 31, 18, 82, 71, 9, 100, 3, 3, 13, 29, 38, 27, 43, 55, 23, 42, 57};
    vector<int> B = {16, 89, 63, 71, 14, 42, 35, 81, 34, 65, 54, 35, 59, 96, 64, 68, 93, 91, 5, 20};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1098;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {15, 19, 2, 75, 60, 69, 14, 51, 33, 52, 60, 41, 53, 75, 55, 7, 74, 3, 41, 73};
    vector<int> B = {90, 62, 62, 54, 9, 56, 17, 31, 11, 72, 11, 61, 64, 11, 5, 50, 12, 99, 90, 1};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 873;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {69, 19, 38, 9, 7, 61, 51, 88, 31, 29, 52, 79, 57, 80, 42, 87, 27, 42, 36, 5};
    vector<int> B = {76, 7, 4, 61, 36, 38, 60, 83, 71, 34, 61, 66, 12, 87, 66, 62, 77, 52, 74, 72};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1104;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {92, 22, 58, 90, 12, 90, 73, 12, 12, 28, 95, 6, 12, 94, 41, 51, 63, 54, 99, 78};
    vector<int> B = {84, 94, 84, 25, 92, 61, 73, 64, 94, 80, 86, 39, 65, 53, 56, 2, 40, 12, 34, 92};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1236;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {44, 18, 42, 83, 32, 32, 26, 13, 89, 75, 47, 73, 88, 8, 16, 37, 32, 37, 63, 58};
    vector<int> B = {57, 59, 11, 55, 85, 97, 51, 94, 49, 12, 20, 67, 80, 32, 51, 32, 11, 64, 86, 48};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1069;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {17, 52, 21, 8, 17, 32, 28, 61, 65, 59, 95, 70, 32, 42, 36, 48, 42, 56, 50, 35};
    vector<int> B = {59, 33, 4, 99, 99, 48, 58, 69, 12, 51, 97, 61, 62, 16, 51, 63, 6, 78, 78, 83};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1135;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {61, 78, 2, 30, 100, 28, 62, 81, 95, 34, 53, 17, 67, 27, 4, 27, 76, 37, 23, 9};
    vector<int> B = {40, 34, 97, 98, 68, 3, 79, 30, 14, 23, 96, 96, 56, 28, 92, 74, 88, 4, 49, 95};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1166;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {89, 79, 4, 10, 45, 33, 70, 25, 29, 63, 30, 59, 43, 45, 77, 92, 41, 36, 96, 14};
    vector<int> B = {96, 6, 46, 15, 15, 62, 93, 78, 23, 85, 86, 96, 99, 28, 90, 71, 36, 71, 53, 62};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1215;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {79, 23, 55, 45, 8, 54, 90, 43, 25, 34, 2, 41, 79, 26, 20, 48, 85, 27, 64, 32};
    vector<int> B = {77, 31, 17, 65, 48, 91, 13, 16, 93, 44, 10, 83, 95, 46, 13, 1, 48, 64, 80, 39};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 976;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {75, 21, 63, 100, 28, 23, 69, 63, 4, 58, 83, 24, 90, 74, 97, 51, 67, 11, 64, 85};
    vector<int> B = {99, 28, 20, 31, 33, 62, 90, 3, 23, 23, 32, 9, 15, 40, 31, 38, 28, 86, 40, 16};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1153;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {16, 41, 17, 7, 31, 60, 25, 34, 87, 32, 22, 68, 99, 17, 63, 50, 14, 100, 24, 44};
    vector<int> B = {81, 77, 24, 62, 26, 15, 37, 9, 40, 95, 69, 78, 39, 20, 16, 25, 39, 49, 7, 37};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 858;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {33, 56, 21, 63, 63, 81, 83, 1, 99, 40, 79, 39, 34, 60, 17, 58, 22, 61, 45, 86};
    vector<int> B = {70, 64, 33, 46, 13, 94, 38, 44, 60, 38, 36, 11, 89, 7, 4, 47, 45, 4, 99, 64};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1045;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {83, 25, 32, 78, 81, 30, 52, 45, 99, 88, 67, 17, 69, 97, 56, 71, 66, 7, 42, 5};
    vector<int> B = {28, 95, 67, 28, 27, 85, 5, 45, 13, 49, 50, 54, 60, 18, 64, 10, 7, 79, 43, 10};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1115;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {31, 95, 62, 31, 93, 66, 36, 98, 22, 50, 94, 35, 61, 100, 35, 44, 41, 49, 17, 13};
    vector<int> B = {11, 31, 74, 33, 8, 81, 33, 72, 87, 34, 23, 25, 63, 11, 87, 93, 78, 38, 16, 24};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1081;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {13, 84, 47, 72, 14, 81, 19, 61, 79, 36, 4, 2, 72, 46, 81, 71, 83, 83, 52, 63};
    vector<int> B = {86, 97, 90, 29, 50, 36, 84, 80, 88, 82, 22, 2, 26, 56, 38, 33, 8, 43, 9, 34};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1071;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {9, 81, 95, 57, 53, 91, 50, 27, 79, 15, 82, 62, 30, 42, 43, 20, 50, 92, 70, 80};
    vector<int> B = {57, 49, 20, 41, 58, 28, 17, 25, 57, 63, 9, 53, 71, 31, 32, 55, 36, 31, 10, 22};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1137;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {26, 1, 43, 68, 87, 16, 60, 9, 31, 51, 91, 33, 90, 48, 100, 96, 63, 93, 72, 84};
    vector<int> B = {69, 17, 86, 85, 29, 82, 19, 68, 14, 35, 13, 44, 47, 24, 75, 83, 13, 30, 36, 75};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1175;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {35, 41, 83, 49, 93, 96, 86, 96, 20, 2, 17, 67, 76, 16, 66, 79, 100, 49, 19, 48};
    vector<int> B = {43, 26, 3, 62, 28, 80, 28, 76, 9, 15, 2, 98, 50, 1, 33, 62, 19, 41, 94, 42};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1139;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {33, 62, 11, 9, 93, 82, 97, 21, 84, 98, 79, 34, 6, 5, 16, 44, 34, 9, 98, 38};
    vector<int> B = {45, 27, 36, 40, 56, 40, 75, 76, 87, 56, 29, 4, 33, 17, 35, 36, 24, 34, 13, 36};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 957;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {80, 43, 20, 32, 95, 74, 33, 95, 60, 77, 34, 80, 37, 12, 91, 25, 74, 43, 86, 14};
    vector<int> B = {46, 95, 87, 20, 10, 58, 72, 98, 61, 56, 95, 70, 67, 15, 60, 27, 72, 16, 97, 52};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1186;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {6, 62, 42, 92, 71, 1, 45, 29, 29, 76, 26, 77, 98, 88, 47, 98, 81, 4, 20, 45};
    vector<int> B = {57, 90, 67, 39, 35, 40, 64, 10, 28, 97, 92, 94, 43, 44, 42, 49, 58, 75, 9, 37};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1071;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {90, 60, 85, 22, 99, 17, 76, 67, 77, 55, 80, 25, 51, 57, 6, 28, 93, 20, 67, 39};
    vector<int> B = {46, 64, 13, 97, 12, 53, 14, 56, 85, 97, 81, 7, 55, 46, 35, 69, 76, 89, 95, 22};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1121;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {2, 51, 7, 82, 87, 43, 55, 97, 37, 45, 15, 27, 29, 83, 93, 76, 39, 78, 48, 58};
    vector<int> B = {8, 81, 13, 34, 75, 77, 70, 81, 93, 76, 92, 46, 4, 73, 45, 78, 6, 78, 89, 36};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1158;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {63, 50, 45, 16, 6, 7, 37, 9, 18, 54, 92, 22, 94, 9, 83, 27, 77, 14, 51, 89};
    vector<int> B = {77, 27, 34, 32, 4, 66, 13, 82, 97, 49, 72, 77, 75, 45, 11, 22, 7, 35, 60, 95};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 987;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {31, 25, 15, 39, 51, 64, 49, 48, 26, 78, 48, 42, 46, 92, 31, 37, 39, 73, 20, 84};
    vector<int> B = {84, 59, 25, 58, 48, 86, 63, 86, 99, 85, 6, 3, 60, 97, 33, 43, 85, 47, 8, 77};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1167;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {97, 15, 94, 18, 91, 11, 95, 18, 25, 64, 26, 91, 39, 12, 78, 40, 75, 81, 16, 20};
    vector<int> B = {21, 15, 66, 70, 25, 50, 19, 79, 82, 98, 4, 32, 51, 38, 87, 57, 5, 64, 46, 57};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1010;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {6, 76, 73, 7, 8, 46, 85, 15, 54, 57, 88, 63, 62, 19, 12, 47, 79, 95, 16, 77};
    vector<int> B = {83, 8, 13, 40, 64, 8, 2, 38, 97, 12, 17, 79, 22, 5, 54, 34, 12, 79, 36, 12};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 987;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {60, 5, 74, 9, 89, 26, 58, 6, 70, 53, 100, 6, 61, 22, 13, 33, 95, 70, 99, 90};
    vector<int> B = {53, 81, 66, 72, 13, 53, 15, 18, 93, 6, 27, 70, 99, 28, 29, 24, 15, 36, 80, 99};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1045;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {27, 73, 84, 71, 22, 14, 14, 97, 93, 50, 17, 94, 57, 93, 98, 49, 81, 3, 33, 73};
    vector<int> B = {37, 54, 84, 23, 21, 48, 72, 92, 94, 25, 55, 71, 56, 81, 80, 74, 11, 49, 12, 86};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1154;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {90, 95, 12, 93, 22, 27, 82, 100, 13, 14, 13, 82, 43, 64, 19, 1, 71, 57, 40, 97};
    vector<int> B = {64, 85, 41, 74, 67, 80, 11, 82, 73, 60, 48, 30, 53, 84, 40, 2, 81, 39, 67, 62};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1154;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {32, 49, 78, 40, 80, 28, 70, 74, 88, 79, 57, 9, 92, 21, 64, 17, 37, 60, 83, 53};
    vector<int> B = {99, 24, 16, 97, 42, 5, 97, 39, 72, 2, 95, 88, 71, 21, 45, 96, 23, 77, 78, 3};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1113;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {5, 89, 35, 59, 56, 2, 23, 88, 98, 54, 90, 37, 10, 87, 34, 95, 17, 83, 94, 31};
    vector<int> B = {87, 29, 45, 80, 92, 7, 34, 72, 84, 95, 44, 49, 37, 67, 50, 65, 4, 74, 3, 70};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1090;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {16, 51, 21, 86, 61, 23, 69, 38, 18, 83, 100, 86, 55, 83, 5, 14, 48, 87, 3, 43};
    vector<int> B = {57, 20, 20, 37, 74, 21, 99, 89, 78, 11, 99, 23, 33, 38, 80, 53, 71, 91, 94, 68};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1159;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {28, 11, 76, 99, 75, 40, 60, 27, 44, 76, 55, 2, 35, 62, 77, 80, 96, 51, 93, 92};
    vector<int> B = {83, 32, 18, 72, 97, 71, 14, 40, 70, 32, 95, 8, 98, 54, 26, 17, 41, 90, 62, 53};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1193;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {89, 25, 53, 85, 11, 60, 55, 17, 13, 59, 35, 8, 8, 15, 47, 18, 89, 84, 33, 4};
    vector<int> B = {76, 29, 94, 9, 70, 84, 89, 12, 58, 59, 35, 91, 73, 41, 50, 25, 30, 8, 7, 58};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1002;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> A = {97, 77, 51, 43, 52, 95, 70, 72, 100, 18, 49, 84, 46, 7, 6, 89, 6, 8, 46, 30};
    vector<int> B = {51, 38, 69, 73, 71, 68, 18, 7, 71, 92, 39, 27, 35, 24, 46, 70, 43, 11, 39, 62};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1053;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> A = {97, 82, 100, 50, 62, 90, 17, 26, 81, 27, 2, 54, 53, 56, 60, 52, 10, 92, 90, 56};
    vector<int> B = {64, 100, 49, 5, 59, 7, 76, 89, 18, 97, 30, 54, 24, 85, 20, 20, 15, 76, 44, 4};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1161;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> A = {15, 53, 70, 12, 90, 19, 100, 53, 46, 99, 41, 60, 51, 81, 36, 2, 62, 68, 12, 47};
    vector<int> B = {24, 82, 61, 32, 20, 35, 80, 70, 60, 94, 87, 27, 54, 74, 38, 37, 52, 49, 59, 63};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1100;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> A = {40, 45, 20, 30, 74, 59, 12, 46, 64, 12, 34, 78, 68, 82, 59, 2, 7, 31, 85, 83};
    vector<int> B = {94, 67, 79, 65, 84, 69, 68, 62, 70, 32, 47, 8, 26, 57, 5, 76, 10, 55, 100, 60};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1136;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> A = {69, 69, 31, 7, 51, 46, 17, 34, 60, 61, 23, 65, 52, 98, 89, 14, 74, 37, 73, 6};
    vector<int> B = {76, 14, 56, 6, 59, 100, 68, 52, 65, 56, 52, 96, 73, 17, 74, 91, 24, 45, 23, 39};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1092;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> A = {27, 31, 27, 73, 28, 7, 8, 89, 27, 42, 83, 83, 1, 59, 30, 3, 74, 95, 65, 55};
    vector<int> B = {82, 100, 20, 30, 3, 96, 87, 78, 55, 16, 33, 65, 96, 7, 4, 88, 65, 39, 39, 34};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1038;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> A = {76, 61, 22, 81, 15, 91, 23, 4, 32, 90, 42, 22, 84, 14, 60, 13, 93, 55, 25, 81};
    vector<int> B = {30, 20, 67, 47, 48, 56, 86, 59, 48, 2, 79, 22, 60, 21, 42, 3, 87, 36, 26, 3};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 986;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> A = {77, 24, 37, 3, 96, 8, 25, 28, 34, 55, 62, 74, 58, 37, 57, 25, 100, 62, 57, 87};
    vector<int> B = {12, 9, 4, 92, 27, 64, 36, 69, 97, 7, 13, 78, 75, 32, 67, 50, 7, 92, 79, 74};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1010;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> A = {75, 31, 55, 60, 15, 55, 33, 86, 16, 94, 10, 22, 69, 37, 51, 16, 61, 75, 36, 66};
    vector<int> B = {23, 12, 16, 20, 51, 43, 42, 2, 12, 53, 3, 59, 76, 11, 52, 46, 11, 70, 99, 88};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 965;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> A = {100, 46, 35, 22, 99, 7, 24, 79, 39, 65, 43, 7, 33, 42, 17, 39, 25, 23, 74, 64};
    vector<int> B = {34, 75, 51, 4, 7, 97, 9, 86, 97, 88, 79, 99, 34, 18, 68, 85, 77, 26, 20, 92};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1153;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> A = {62, 52, 67, 24, 79, 97, 21, 99, 20, 62, 56, 54, 1, 92, 40, 83, 13, 17, 95, 61};
    vector<int> B = {87, 2, 46, 49, 40, 70, 22, 11, 1, 12, 67, 38, 73, 68, 76, 22, 74, 59, 64, 30};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1096;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> A = {16, 87, 37, 8, 94, 28, 78, 71, 1, 11, 59, 44, 57, 97, 60, 15, 3, 77, 91, 74};
    vector<int> B = {59, 37, 75, 31, 49, 13, 92, 56, 95, 1, 27, 73, 83, 72, 22, 54, 8, 1, 14, 34};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1009;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> A = {73, 52, 31, 70, 8, 85, 33, 96, 86, 78, 75, 77, 79, 56, 59, 78, 16, 42, 83, 12};
    vector<int> B = {72, 99, 60, 14, 9, 37, 26, 10, 17, 33, 85, 48, 76, 35, 22, 14, 91, 52, 71, 45};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1199;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> A = {54, 74, 96, 60, 35, 50, 90, 31, 17, 35, 61, 19, 81, 10, 71, 88, 73, 5, 63, 68};
    vector<int> B = {40, 85, 76, 44, 74, 50, 40, 5, 75, 5, 51, 40, 14, 51, 4, 1, 80, 27, 94, 20};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1082;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> A = {77, 26, 30, 30, 5, 84, 13, 22, 72, 51, 85, 78, 70, 96, 25, 38, 43, 77, 32, 97};
    vector<int> B = {56, 52, 92, 61, 89, 29, 14, 75, 45, 4, 99, 2, 17, 73, 91, 30, 97, 61, 24, 91};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1107;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> A = {41, 84, 47, 71, 87, 61, 17, 73, 76, 21, 39, 6, 39, 19, 54, 80, 58, 41, 78, 58};
    vector<int> B = {34, 92, 33, 86, 33, 62, 25, 16, 71, 57, 57, 58, 48, 93, 48, 15, 12, 23, 57, 36};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1062;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> A = {89, 90, 11, 4, 26, 91, 40, 85, 56, 7, 7, 31, 3, 69, 78, 70, 65, 12, 76, 16};
    vector<int> B = {67, 91, 76, 100, 50, 68, 52, 44, 69, 88, 4, 3, 80, 98, 68, 44, 80, 58, 64, 44};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1251;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> A = {3, 62, 52, 14, 48, 4, 28, 1, 96, 34, 63, 14, 66, 39, 99, 86, 74, 88, 7, 34};
    vector<int> B = {12, 25, 53, 19, 18, 63, 76, 12, 62, 86, 76, 3, 83, 46, 65, 56, 11, 68, 73, 54};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 962;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> A = {99, 93, 26, 95, 54, 38, 37, 50, 81, 99, 12, 5, 24, 7, 93, 28, 38, 56, 27, 8};
    vector<int> B = {5, 49, 4, 95, 26, 2, 45, 32, 34, 55, 24, 3, 45, 45, 51, 3, 20, 98, 95, 7};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 972;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> A = {61, 29, 32, 3, 21, 35, 84, 37, 44, 36, 11, 20, 57, 71, 49, 60, 60, 93, 21, 39};
    vector<int> B = {48, 2, 90, 28, 3, 57, 84, 66, 3, 37, 56, 27, 36, 18, 17, 53, 7, 98, 79, 79};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 891;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> A = {79, 52, 93, 11, 87, 99, 71, 2, 79, 96, 7, 8, 35, 68, 70, 16, 94, 2, 100, 21};
    vector<int> B = {15, 32, 22, 100, 22, 22, 75, 9, 14, 81, 39, 61, 61, 70, 45, 20, 94, 52, 84, 11};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1101;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> A = {81, 68, 86, 39, 13, 27, 96, 31, 60, 19, 64, 98, 75, 57, 69, 61, 17, 50, 60, 10};
    vector<int> B = {44, 38, 52, 99, 56, 28, 56, 15, 68, 42, 71, 52, 25, 38, 73, 28, 30, 40, 48, 6};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1092;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> A = {18, 50, 94, 73, 88, 42, 83, 71, 94, 48, 96, 19, 7, 19, 78, 63, 15, 99, 4, 51};
    vector<int> B = {79, 61, 17, 18, 70, 15, 54, 35, 70, 84, 43, 78, 11, 100, 34, 21, 51, 18, 21, 7};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1119;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> A = {73, 45, 36, 49, 82, 24, 17, 53, 100, 57, 22, 71, 35, 87, 49, 7, 7, 79, 49, 23};
    vector<int> B = {77, 19, 85, 12, 21, 100, 2, 83, 69, 18, 35, 26, 80, 66, 44, 57, 18, 48, 48, 52};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 967;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> A = {39, 69, 20, 41, 24, 89, 13, 32, 87, 18, 31, 43, 42, 9, 27, 98, 54, 55, 70, 38};
    vector<int> B = {88, 97, 62, 96, 3, 11, 50, 38, 98, 29, 67, 33, 41, 41, 68, 19, 78, 75, 92, 48};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1143;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> A = {38, 74, 24, 36, 54, 28, 25, 87, 60, 7, 59, 69, 95, 46, 9, 25, 62, 34, 89, 31};
    vector<int> B = {28, 57, 43, 56, 88, 35, 65, 75, 74, 86, 32, 68, 59, 35, 88, 56, 98, 86, 7, 66};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1209;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> A = {1, 20, 35, 97, 96, 53, 79, 88, 37, 41, 10, 12, 61, 7, 34, 32, 75, 8, 1, 55};
    vector<int> B = {48, 4, 43, 34, 41, 8, 48, 60, 58, 91, 29, 28, 87, 21, 70, 9, 52, 5, 48, 51};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 846;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> A = {56, 55, 53, 31, 85, 17, 54, 29, 63, 10, 61, 98, 9, 18, 2, 24, 12, 16, 47, 43};
    vector<int> B = {42, 41, 61, 51, 21, 77, 99, 31, 45, 98, 66, 76, 62, 77, 36, 86, 77, 55, 95, 20};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1218;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> A = {26, 2, 3, 28, 63, 6, 72, 60, 19, 46, 24, 77, 33, 97, 39, 26, 60, 60, 19, 7};
    vector<int> B = {74, 67, 14, 58, 78, 57, 29, 92, 52, 16, 76, 63, 42, 72, 29, 96, 14, 31, 95, 57};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1114;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> A = {50, 21, 5, 87, 48, 30, 58, 68, 30, 94, 43, 87, 45, 6, 56, 64, 79, 41, 34, 81};
    vector<int> B = {91, 58, 31, 21, 63, 89, 87, 93, 72, 10, 27, 38, 97, 32, 50, 16, 60, 10, 87, 43};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1080;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> A = {24, 52, 20, 71, 96, 83, 41, 39, 82, 77, 16, 66, 83, 99, 49, 97, 92, 85, 14, 90};
    vector<int> B = {43, 79, 86, 68, 49, 84, 13, 16, 51, 99, 58, 42, 1, 76, 21, 77, 88, 51, 56, 10};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1277;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> A = {19, 19, 80, 84, 38, 85, 65, 98, 45, 19, 8, 39, 68, 13, 100, 91, 30, 7, 7, 5};
    vector<int> B = {3, 62, 48, 72, 48, 66, 63, 59, 50, 55, 50, 31, 38, 50, 73, 49, 91, 21, 96, 66};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1096;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> A = {11, 70, 65, 18, 70, 89, 46, 56, 79, 28, 2, 52, 18, 35, 44, 70, 13, 92, 70, 60};
    vector<int> B = {40, 27, 14, 61, 10, 21, 53, 47, 29, 89, 62, 9, 65, 31, 44, 47, 15, 48, 14, 58};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 997;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> A = {13, 72, 70, 67, 97, 22, 92, 16, 50, 7, 26, 64, 69, 82, 86, 28, 79, 77, 22, 28};
    vector<int> B = {75, 97, 34, 75, 81, 79, 54, 80, 14, 34, 24, 67, 97, 3, 23, 42, 16, 96, 18, 43};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1070;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> A = {44, 90, 51, 35, 86, 55, 57, 13, 62, 17, 7, 88, 80, 16, 93, 28, 13, 41, 45, 70};
    vector<int> B = {53, 32, 30, 32, 40, 81, 77, 18, 37, 71, 10, 55, 88, 76, 77, 5, 91, 52, 1, 77};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1013;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> A = {12, 58, 8, 63, 9, 1, 83, 18, 79, 21, 91, 33, 23, 19, 47, 88, 61, 17, 29, 30};
    vector<int> B = {11, 88, 58, 47, 41, 96, 70, 98, 64, 83, 98, 91, 73, 83, 96, 69, 77, 43, 59, 43};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1389;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> A = {82, 86, 49, 41, 20, 8, 100, 53, 83, 59, 17, 37, 16, 4, 27, 97, 48, 91, 69, 9};
    vector<int> B = {35, 19, 80, 78, 29, 91, 77, 13, 69, 13, 26, 2, 9, 74, 61, 89, 73, 62, 75, 21};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> A = {76, 48, 24, 8, 52, 35, 79, 66, 86, 11, 42, 16, 67, 58, 86, 91, 47, 22, 2, 20};
    vector<int> B = {1, 38, 66, 5, 33, 75, 39, 96, 39, 22, 39, 54, 25, 99, 12, 76, 17, 23, 34, 93};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 937;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> A = {99, 77, 54, 6, 58, 73, 86, 75, 4, 57, 10, 94, 40, 2, 84, 7, 51, 30, 32, 69};
    vector<int> B = {66, 48, 88, 36, 70, 29, 22, 6, 12, 61, 5, 95, 45, 63, 77, 61, 12, 24, 56, 34};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1013;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> A = {46, 56, 31, 86, 55, 81, 80, 2, 19, 48, 89, 88, 14, 38, 66, 51, 98, 82, 73, 82};
    vector<int> B = {68, 37, 37, 29, 74, 43, 1, 49, 53, 44, 61, 3, 67, 63, 11, 62, 3, 29, 16, 54};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1186;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> A = {67, 49, 88, 92, 58, 35, 25, 60, 4, 52, 53, 45, 63, 56, 36, 34, 97, 23, 26, 54};
    vector<int> B = {83, 92, 13, 71, 17, 23, 49, 49, 35, 57, 66, 51, 88, 49, 48, 18, 87, 81, 68, 17};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1066;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> A = {74, 24, 28, 74, 26, 45, 19, 10, 40, 25, 100, 39, 4, 9, 22, 67, 74, 15, 90, 22};
    vector<int> B = {24, 17, 58, 47, 80, 46, 12, 54, 95, 74, 57, 40, 42, 87, 83, 94, 76, 97, 66, 18};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1171;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> A = {3, 73, 62, 6, 18, 63, 13, 99, 25, 8, 32, 52, 15, 20, 80, 60, 92, 56, 40, 41};
    vector<int> B = {46, 91, 70, 95, 8, 86, 17, 41, 39, 47, 80, 23, 79, 19, 89, 6, 96, 34, 43, 45};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1057;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> A = {33, 60, 47, 68, 47, 4, 96, 46, 40, 39, 4, 56, 17, 50, 59, 12, 64, 89, 70, 41};
    vector<int> B = {99, 67, 78, 57, 76, 12, 26, 15, 31, 67, 49, 55, 96, 37, 16, 77, 48, 87, 16, 7};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1020;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> A = {47, 12, 6, 54, 18, 55, 79, 27, 33, 86, 81, 70, 55, 69, 66, 91, 40, 37, 2, 12};
    vector<int> B = {87, 81, 42, 67, 14, 21, 81, 88, 56, 39, 88, 30, 83, 20, 10, 16, 6, 40, 15, 91};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 977;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> A = {68, 73, 85, 80, 57, 70, 100, 99, 68, 54, 31, 41, 95, 27, 60, 30, 88, 29, 22, 12};
    vector<int> B = {5, 94, 22, 6, 2, 52, 95, 81, 16, 53, 36, 24, 75, 77, 50, 7, 69, 40, 82, 41};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1191;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> A = {72, 20, 6, 84, 12, 66, 50, 71, 95, 14, 12, 2, 54, 51, 58, 10, 14, 84, 77, 52};
    vector<int> B = {80, 32, 90, 66, 46, 58, 95, 54, 75, 42, 54, 6, 60, 89, 13, 76, 87, 16, 32, 25};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1098;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> A = {61, 22, 65, 93, 37, 94, 70, 51, 95, 86, 78, 1, 21, 44, 80, 79, 39, 90, 65, 76};
    vector<int> B = {7, 76, 94, 83, 70, 44, 95, 97, 95, 92, 38, 76, 67, 58, 18, 57, 89, 53, 78, 47};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1335;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> A = {61, 22, 30, 69, 14, 19, 12, 24, 10, 90, 74, 98, 49, 26, 23, 94, 62, 24, 60, 21};
    vector<int> B = {60, 8, 82, 67, 49, 1, 49, 32, 84, 68, 47, 71, 54, 99, 50, 13, 53, 81, 94, 61};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1133;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> A = {56, 26, 41, 64, 84, 35, 69, 55, 68, 73, 93, 50, 52, 78, 89, 14, 21, 15, 62, 47};
    vector<int> B = {68, 8, 62, 57, 90, 97, 23, 62, 64, 41, 2, 90, 93, 75, 20, 43, 59, 22, 75, 19};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1094;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> A = {100, 67, 72, 56, 83, 73, 80, 1, 48, 60, 31, 4, 100, 22, 21, 28, 29, 62, 11, 33};
    vector<int> B = {97, 45, 23, 43, 12, 31, 35, 34, 12, 14, 35, 80, 33, 33, 45, 50, 80, 40, 74, 18};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 993;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> A = {7, 28, 41, 53, 98, 28, 39, 63, 78, 50, 40, 84, 57, 99, 77, 12, 8, 46, 62, 85};
    vector<int> B = {18, 93, 24, 80, 89, 38, 51, 78, 40, 99, 26, 49, 17, 3, 53, 50, 74, 87, 97, 77};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1150;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> A = {89, 88, 70, 68, 14, 68, 77, 73, 8, 100, 100, 55, 88, 33, 53, 61, 50, 21, 58, 26};
    vector<int> B = {22, 48, 61, 18, 98, 3, 9, 28, 90, 32, 43, 16, 56, 61, 87, 29, 57, 78, 92, 63};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1203;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> A = {72, 100, 98, 25, 91, 39, 3, 33, 42, 47, 12, 38, 36, 3, 12, 93, 37, 78, 25, 51};
    vector<int> B = {25, 17, 27, 33, 29, 77, 76, 16, 79, 56, 58, 23, 8, 78, 53, 91, 47, 65, 23, 58};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 943;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> A = {9, 8, 22, 51, 72, 33, 49, 19, 48, 42, 21, 6, 77, 70, 56, 4, 63, 93, 21, 79};
    vector<int> B = {56, 77, 17, 57, 25, 63, 57, 20, 97, 63, 47, 75, 73, 75, 77, 96, 88, 80, 41, 4};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1192;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> A = {58, 51, 22, 84, 85, 5, 67, 88, 95, 47, 97, 95, 53, 80, 12, 3, 5, 21, 17, 25};
    vector<int> B = {13, 90, 28, 92, 49, 21, 86, 74, 55, 40, 42, 26, 37, 50, 49, 49, 94, 1, 67, 42};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1011;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> A = {100, 46, 80, 27, 84, 54, 30, 88, 86, 18, 71, 31, 49, 38, 1, 63, 64, 51, 10, 75};
    vector<int> B = {24, 48, 59, 69, 33, 55, 38, 37, 55, 83, 80, 48, 81, 88, 83, 59, 22, 89, 37, 80};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1169;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> A = {52, 27, 30, 3, 62, 31, 18, 41, 21, 96, 65, 13, 38, 21, 15, 21, 65, 21, 68, 53};
    vector<int> B = {91, 15, 55, 93, 94, 76, 10, 76, 11, 35, 40, 74, 55, 98, 77, 46, 48, 18, 35, 69};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1119;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> A = {94, 83, 33, 79, 13, 73, 63, 75, 77, 3, 25, 84, 18, 74, 90, 45, 86, 21, 88, 24};
    vector<int> B = {98, 91, 44, 5, 90, 7, 65, 72, 23, 57, 18, 12, 50, 83, 86, 54, 67, 30, 5, 41};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1153;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> A = {11, 25, 46, 94, 14, 7, 42, 28, 49, 72, 43, 91, 41, 87, 19, 88, 8, 6, 25, 29};
    vector<int> B = {15, 71, 50, 41, 57, 21, 44, 70, 44, 99, 23, 56, 53, 4, 50, 82, 42, 70, 36, 37};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 971;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> A = {12, 78, 32, 43, 76, 10, 43, 76, 76, 99, 32, 43, 65, 87, 54, 43, 65, 12, 87, 23};
    vector<int> B = {54, 65, 87, 34, 76, 32, 87, 45, 90, 11, 32, 32, 54, 79, 43, 10, 54, 24, 83, 12};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1066;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> A = {99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80};
    vector<int> B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1791;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> A = {1, 2};
    vector<int> B = {2, 4};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> A = {7, 6, 3};
    vector<int> B = {9, 7, 3};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> A = {6, 5, 5};
    vector<int> B = {20, 1, 1};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> A = {9, 5, 12, 32, 78, 99, 1, 3, 5, 7, 6, 9, 1};
    vector<int> B = {5, 9, 65, 55, 13, 54, 47, 13, 25, 66, 67, 62, 62};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 544;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> A = {63, 41, 99, 30, 62, 27, 32, 6, 30, 100, 4, 45, 24, 72, 2, 20, 48, 46, 24, 11};
    vector<int> B = {75, 7, 25, 18, 23, 58, 58, 83, 63, 89, 63, 27, 98, 24, 5, 55, 62, 81, 70, 77};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1063;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> A = {42, 68, 35, 1, 70, 25, 79, 59, 63, 65, 6, 46, 82, 28, 62, 92, 96, 43, 28, 37};
    vector<int> B = {92, 5, 3, 54, 93, 83, 22, 17, 19, 96, 48, 27, 72, 39, 70, 13, 68, 100, 36, 95};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1053;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> A = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> B = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    ScheduleResources* pObj = new ScheduleResources();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1020;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=309453&rd=4765&pm=2369
********************************************************************************
/* ############################ PRELIMINARIES ############################ */
 
using namespace std;
 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
 
#define PB push_back
#define SZ size()
#define ALL(x) ((x).begin()),((x).end())
#define REP(var, hi) for (int var=0; var<(hi); var++)
#define REPD(var, hi) for (int var=((hi)-1); var>=0; var--)
#define FOR(var, lo, hi) for (int var=(lo); var<(hi); var++)
#define FORD(var, lo, hi) for (int var=((hi)-1); var>=(lo); var--)
#define FORALL(it, x) for(__typeof((x).begin()) it=(x).begin(); it!=(x).end(); it++)
 
typedef vector <int> VI;
typedef vector <VI> VVI;
typedef long long LL;
typedef vector <LL> VLL;
typedef vector <VLL> VVLL;
typedef vector <string> VS;
typedef vector <VS> VVS;
typedef vector <double> VD;
typedef vector <VD> VVD;
typedef istringstream ISS;
typedef ostringstream OSS;
 
template <class T1, class T2> T1 cast (T2 x);
template <class T> vector<T> cut (string s, string sep);
template <class T> vector<vector<T> > cut (vector<string> vs, string sep);
 
/* ############################ THE REAL CODE ############################ */
 
const int infty = 999999;
 
class ScheduleResources {
  public:
  int schedule(vector <int> A, vector <int> B) {
    int N=A.SZ;
    VI bestA(1<<N,infty), bestB(1<<N,infty);
    bestA[0]=bestB[0]=0;
    
    REP(i,1<<N) REP(j,N) if (i & (1<<j)) {  
      int newA = bestA[i-(1<<j)] + A[j];
      int newB = max(bestB[i-(1<<j)], newA) + B[j];
      if (newB < bestB[i]) { bestA[i]=newA; bestB[i]=newB; }      
    }
    
    return bestB[(1<<N)-1];
  }
};
 
/* ########################### PREWRITTEN CODE ########################### */
 
template <class T1, class T2>
T1 cast (T2 x) {
  T1 y;
  ostringstream oss; oss << x;
  istringstream iss(oss.str()); iss >> y;
  return y;
}
 
template <class T>
vector<T> cut (string s, string sep) {
  vector<T> res;
  for (int i=0; i<s.size(); i++) {
    string sub = "";
    while (i<s.size() && sep.find(s[i])==string::npos) sub+=s[i++];
    if (sub != "") res.push_back (cast<T>(sub));
  }
  return res;
}
 
template <class T>
vector<vector<T> > cut (vector<string> vs, string sep) {
  vector<vector<T> > res;
  for (int i=0; i<vs.size(); i++) res.push_back (cut<T>(vs[i], sep));
  return res;
}
 
/* ############################### THE END ################################ */
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/