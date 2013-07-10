/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1650
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

class Soccer {
public:
    int maxPoints(vector<int> wins, vector<int> ties);
};

int Soccer::maxPoints(vector<int> wins, vector<int> ties) {
    int ret;
    return ret;
}


int test0() {
    vector<int> wins = {1, 4, 3, 0, 0};
    vector<int> ties = {3, 1, 5, 3, 1};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> wins = {12, 45, 20, 17, 48, 0};
    vector<int> ties = {48, 10, 53, 94, 0, 100};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> wins = {35, 0};
    vector<int> ties = {0, 76};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> wins = {0, 0, 0, 0};
    vector<int> ties = {0, 0, 0, 0};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> wins = {13, 79, 26, 73, 14, 89, 71, 37, 89, 71, 19, 59, 39};
    vector<int> ties = {88, 27, 5, 70, 84, 94, 20, 50, 2, 11, 31, 22, 50};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> wins = {14, 13, 15, 56, 71, 13, 21, 39, 87, 40, 54, 14, 34, 13, 27, 27, 0, 86, 0, 44, 76, 75, 62, 6, 64, 63, 60, 89, 1, 46, 7, 83, 20, 84, 16, 93, 18, 18, 77, 85, 90, 84, 12, 19, 74, 100};
    vector<int> ties = {40, 46, 27, 55, 45, 61, 73, 50, 15, 68, 51, 47, 47, 79, 26, 48, 13, 46, 75, 15, 0, 90, 30, 45, 82, 66, 55, 94, 59, 29, 6, 4, 57, 10, 82, 56, 6, 91, 5, 29, 1, 19, 88, 31, 93, 17};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> wins = {44, 5, 95, 89, 37};
    vector<int> ties = {18, 68, 29, 100, 75};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 367;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> wins = {23, 68, 38, 42, 54, 51, 71, 74, 43, 51, 59, 73, 60, 74, 3, 61, 90, 23, 98, 48, 51, 14, 97, 69, 76};
    vector<int> ties = {28, 79, 85, 78, 26, 42, 73, 63, 46, 7, 28, 52, 40, 84, 60, 41, 76, 63, 12, 17, 95, 44, 45, 61, 49};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 346;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> wins = {78, 33, 56, 13, 67, 32, 37, 25, 33, 18, 0, 49, 42, 51, 31, 16, 88, 31, 17, 26, 37, 82, 0, 39, 51, 81, 80, 53, 6, 76, 85, 76, 51, 47, 4, 91, 35, 81, 4, 43, 40, 64, 36, 54, 59, 83, 7, 88};
    vector<int> ties = {56, 20, 58, 4, 30, 29, 20, 46, 26, 39, 23, 60, 42, 7, 37, 69, 21, 59, 80, 81, 18, 87, 78, 4, 20, 48, 67, 10, 21, 56, 55, 45, 95, 55, 95, 6, 39, 70, 41, 54, 91, 33, 4, 18, 44, 74, 86, 47};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 333;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> wins = {35, 19, 75, 77, 35};
    vector<int> ties = {44, 87, 45, 10, 59};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> wins = {79, 60, 21, 100, 1, 9, 72, 42, 37, 46, 68, 43, 62, 66, 7, 35, 50, 12, 58, 91, 66, 0, 68, 36, 83, 99, 31, 17, 3, 72, 50, 90, 30, 22, 100, 8, 85, 83, 76, 94, 48};
    vector<int> ties = {100, 56, 50, 24, 52, 21, 60, 2, 52, 39, 83, 78, 44, 54, 78, 65, 56, 93, 61, 48, 17, 47, 48, 71, 62, 26, 75, 21, 36, 54, 67, 72, 76, 13, 40, 98, 1, 93, 46, 71, 50};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 353;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> wins = {44, 96, 80, 25, 11, 53, 74, 11, 58, 97, 42, 20, 90, 54, 87, 73, 66, 17, 7, 71, 72, 74, 98, 65, 25, 10, 30, 51, 29, 23};
    vector<int> ties = {99, 45, 99, 52, 89, 50, 62, 50, 63, 30, 59, 0, 68, 57, 47, 36, 13, 61, 7, 52, 31, 41, 45, 51, 88, 86, 71, 13, 21, 87};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 339;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> wins = {70, 89, 0, 79, 2, 79, 20, 34, 31, 24, 98, 84, 57, 37};
    vector<int> ties = {68, 61, 51, 44, 98, 31, 53, 73, 1, 66, 83, 18, 54, 1};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 377;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> wins = {17, 15, 91, 3, 22, 54, 12, 63, 92, 89, 73, 66, 40, 54, 40, 100, 90, 77, 41, 95, 85};
    vector<int> ties = {15, 92, 29, 19, 84, 7, 53, 49, 9, 44, 26, 39, 47, 56, 34, 67, 32, 12, 8, 15, 15};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 367;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> wins = {31, 29, 52, 27, 96, 94, 96, 24, 89, 45, 69, 92, 50, 86, 21, 72, 41, 29, 86, 54, 56, 60, 0, 13, 58, 6, 66};
    vector<int> ties = {66, 11, 10, 50, 7, 2, 40, 67, 67, 92, 3, 77, 22, 95, 30, 15, 95, 5, 3, 29, 99, 51, 96, 20, 38, 3, 100};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 353;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> wins = {77, 93, 84};
    vector<int> ties = {53, 49, 70};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 328;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> wins = {49, 22, 18, 27, 99, 97, 64, 0, 9, 1, 92, 35, 1, 86, 54, 60, 4, 88, 58, 28, 15, 75, 21, 24, 14, 76, 67, 11, 75, 15, 71, 92, 95, 69, 50, 72, 3, 15, 48, 70};
    vector<int> ties = {37, 78, 35, 2, 71, 99, 94, 81, 96, 97, 32, 19, 6, 34, 15, 14, 84, 37, 7, 92, 0, 38, 29, 6, 47, 31, 87, 80, 13, 40, 39, 58, 89, 77, 14, 90, 1, 43, 37, 64};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 390;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> wins = {45, 85, 5, 52, 53, 37, 12, 47, 66, 88, 49, 49, 73, 59, 5, 90, 45, 15, 55, 34, 79, 74, 50, 25, 42, 90, 49, 100, 45, 38, 86, 39, 3, 34, 68, 29, 90, 11, 63, 54, 20, 89, 12, 12, 17, 87, 68, 52, 6, 81};
    vector<int> ties = {24, 71, 58, 76, 63, 11, 86, 23, 99, 95, 23, 35, 75, 7, 71, 10, 48, 74, 33, 21, 1, 29, 10, 74, 80, 39, 38, 74, 8, 59, 61, 56, 81, 56, 14, 84, 44, 52, 24, 65, 45, 36, 74, 17, 77, 57, 76, 14, 79, 20};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 374;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> wins = {28, 97, 54, 61, 61, 55, 19, 35, 28, 1, 78, 64, 65, 84, 69, 45, 63, 36, 74, 57, 97, 66, 35, 62, 39, 58, 91, 23, 86};
    vector<int> ties = {46, 9, 39, 68, 42, 33, 33, 37, 88, 17, 68, 19, 30, 57, 2, 50, 1, 8, 94, 45, 25, 44, 86, 79, 4, 55, 26, 49, 22};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 316;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> wins = {99, 81, 31, 74, 91, 56, 23, 36, 99, 100, 96, 100, 98, 67, 73, 95, 33, 54, 18, 34, 25, 69, 71, 38, 62, 90, 33, 11};
    vector<int> ties = {62, 15, 52, 6, 5, 64, 8, 82, 95, 34, 34, 53, 37, 43, 80, 60, 24, 76, 65, 73, 22, 54, 71, 40, 74, 4, 4, 10};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 392;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> wins = {36, 44, 66, 2, 39, 3, 75, 91, 76, 63, 99, 49, 31, 64, 51, 40, 75, 26, 90, 57, 13, 98, 47, 96, 96, 78, 100, 53, 57, 90, 53, 65, 10, 96, 31, 39, 41, 86, 77, 86, 1, 14, 89, 32};
    vector<int> ties = {79, 31, 14, 39, 90, 55, 28, 12, 53, 62, 68, 39, 13, 23, 27, 38, 38, 80, 73, 40, 64, 39, 7, 20, 58, 82, 69, 87, 91, 4, 96, 65, 21, 42, 26, 6, 17, 98, 22, 39, 71, 35, 12, 93};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 369;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> wins = {60, 83, 94, 98, 56, 96, 11, 60, 84, 25, 61, 89, 67};
    vector<int> ties = {12, 70, 82, 39, 14, 96, 95, 97, 8, 55, 85, 94, 0};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 384;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> wins = {40, 87, 86, 59, 55, 69, 42, 76, 8, 93, 30, 95, 4, 46, 24, 80, 47, 56, 41, 65, 56, 68, 34, 27, 80, 76, 11, 45, 38, 6, 65, 40, 16, 72, 96, 31, 26, 40};
    vector<int> ties = {10, 23, 85, 34, 8, 24, 34, 86, 1, 38, 32, 86, 70, 48, 47, 80, 8, 2, 76, 4, 32, 35, 7, 15, 48, 52, 88, 66, 39, 11, 44, 78, 18, 66, 78, 87, 10, 94};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 371;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> wins = {43, 88, 32, 22, 97, 26, 5, 43, 38, 14};
    vector<int> ties = {20, 40, 24, 87, 70, 25, 51, 45, 3, 56};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> wins = {48, 38, 26, 5, 96, 44, 5, 100, 62, 60, 22};
    vector<int> ties = {80, 22, 7, 51, 82, 4, 7, 66, 84, 73, 3};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 370;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> wins = {62, 17, 36, 36, 29, 24, 92, 44, 73, 6, 16, 26, 79, 53, 42, 45, 98, 92};
    vector<int> ties = {38, 2, 44, 52, 82, 2, 33, 85, 89, 49, 91, 45, 55, 57, 34, 52, 3, 81};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 357;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> wins = {74, 6, 26, 42, 19, 94, 18};
    vector<int> ties = {64, 54, 65, 9, 98, 3, 63};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 286;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> wins = {84, 81, 99, 37, 77, 34, 59, 100, 51, 41, 27, 21, 16, 70, 11, 31, 65, 12, 4, 41, 32, 12, 14, 37, 93, 1, 38, 58, 89, 62, 57, 4};
    vector<int> ties = {13, 37, 85, 93, 57, 53, 79, 42, 36, 54, 31, 54, 93, 27, 30, 12, 22, 99, 91, 6, 38, 94, 16, 61, 60, 71, 97, 35, 88, 62, 55, 55};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 382;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> wins = {43, 9, 33, 92, 87, 57, 92, 29, 79, 84, 26, 66, 39, 88, 19, 42, 56, 62, 90, 20, 38, 45, 39, 86, 33, 24, 56, 73, 97, 80, 58, 22, 21, 46, 23, 53, 98, 1, 41, 37, 79, 3, 40, 43, 36, 22, 54, 40};
    vector<int> ties = {23, 43, 29, 32, 6, 96, 53, 24, 67, 2, 27, 72, 71, 16, 70, 30, 91, 47, 31, 24, 31, 51, 4, 57, 5, 72, 100, 32, 100, 0, 21, 86, 57, 54, 44, 77, 79, 35, 100, 61, 14, 92, 97, 96, 47, 10, 87, 63};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 391;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> wins = {8, 36, 18, 44, 69, 35, 68, 98, 59, 79, 4, 44, 56, 97, 96, 42, 91, 12, 42, 88, 35, 17, 15, 5, 16, 36, 8, 38, 19, 90, 82, 50, 49, 8, 61, 31, 100, 65, 86, 5, 60, 32, 32, 98, 65, 68, 24, 28, 49, 55};
    vector<int> ties = {57, 75, 43, 27, 51, 30, 76, 74, 52, 27, 36, 82, 32, 30, 65, 61, 41, 91, 7, 43, 22, 63, 40, 19, 2, 0, 81, 57, 19, 28, 52, 14, 21, 27, 73, 76, 18, 99, 11, 19, 44, 1, 98, 16, 89, 94, 19, 31, 100, 72};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 368;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> wins = {52, 91, 72, 76, 67, 69};
    vector<int> ties = {56, 66, 85, 90, 85, 42};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 339;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> wins = {81, 38, 37, 97, 81, 56, 67, 22, 93, 99, 28, 48, 2, 27, 65, 23, 78, 25};
    vector<int> ties = {69, 68, 19, 61, 41, 36, 34, 65, 16, 44, 88, 27, 68, 73, 72, 69, 16, 96};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 352;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> wins = {73, 65, 0, 28, 57, 57, 72, 90, 21, 59, 85, 5, 84, 8, 69, 62, 91, 7, 57};
    vector<int> ties = {58, 72, 86, 94, 50, 30, 99, 19, 20, 53, 37, 35, 43, 93, 34, 87, 38, 94, 53};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 315;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> wins = {62, 88, 35, 48, 98, 99, 64, 7, 40, 30, 21, 49, 77, 15, 83, 21, 41, 99, 62, 99, 16, 86, 47, 8, 78, 70, 25, 6, 49, 34, 53, 84, 40};
    vector<int> ties = {83, 24, 75, 92, 4, 34, 39, 40, 14, 5, 30, 47, 84, 0, 28, 99, 59, 10, 92, 48, 19, 71, 25, 48, 7, 10, 7, 26, 44, 76, 82, 20, 50};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 345;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> wins = {52, 53, 87, 99, 63, 41, 14, 12, 2, 46, 68, 37, 76, 50, 50, 86, 68, 34, 0, 40, 90, 12, 68, 65, 70, 56, 52, 41, 60, 65, 15, 13, 29, 53, 70};
    vector<int> ties = {40, 26, 38, 65, 69, 56, 16, 2, 47, 97, 31, 55, 37, 10, 89, 41, 15, 92, 66, 88, 0, 38, 6, 6, 5, 76, 60, 5, 74, 92, 33, 0, 86, 25, 10};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 362;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> wins = {33, 62, 58, 30, 46, 70, 100, 72, 62, 63, 82, 84, 81, 76, 28, 47, 1, 44, 33, 64, 53, 30, 42, 38, 77, 67, 59, 43, 96, 80, 1, 60, 61, 26, 12, 74, 17, 21, 28, 12};
    vector<int> ties = {37, 3, 25, 74, 23, 37, 75, 57, 90, 27, 69, 97, 7, 80, 47, 76, 95, 29, 43, 21, 60, 44, 58, 30, 68, 71, 44, 18, 79, 87, 53, 96, 84, 13, 78, 28, 95, 15, 82, 66};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 375;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> wins = {60, 96, 94, 8, 6, 75, 44, 20, 89, 32, 42, 96, 86, 24, 83, 7};
    vector<int> ties = {94, 74, 19, 52, 36, 80, 30, 10, 17, 7, 44, 26, 58, 81, 70, 16};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 362;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> wins = {68, 32, 89, 52, 34, 69};
    vector<int> ties = {9, 86, 100, 47, 47, 3};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 367;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> wins = {51, 6, 89, 16, 36, 52, 43, 40, 64, 79, 33, 87, 85, 77, 23, 86, 86, 74, 43, 34, 97, 87, 2, 14, 8, 55, 100, 62, 4, 75, 56, 33, 31, 34, 46, 63};
    vector<int> ties = {11, 80, 90, 0, 67, 92, 64, 9, 53, 59, 92, 15, 37, 91, 26, 12, 6, 48, 69, 37, 1, 54, 5, 71, 7, 92, 48, 66, 65, 73, 23, 79, 97, 65, 9, 94};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 357;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> wins = {41, 20, 89, 34, 94, 95, 34, 3, 41, 73, 87, 48, 63, 61, 86, 46, 10, 90, 51, 50, 18, 12, 59, 86, 6, 11, 34, 92, 29, 72, 70, 70, 97, 97, 19, 52, 82, 48, 10, 68, 47, 52, 58};
    vector<int> ties = {74, 44, 12, 15, 36, 15, 94, 26, 74, 5, 53, 62, 25, 22, 69, 59, 95, 94, 51, 80, 99, 25, 18, 88, 82, 83, 29, 41, 74, 16, 6, 24, 47, 23, 75, 62, 39, 77, 87, 11, 43, 20, 70};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 364;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> wins = {64, 78, 12, 52, 66, 1, 85, 62, 47, 78, 0, 13, 75, 72, 74, 30, 99, 17, 0, 79, 81, 92, 35, 61, 8, 54, 77, 68, 90, 87, 22, 25, 24, 11, 22, 32, 20, 26, 29, 77, 100};
    vector<int> ties = {45, 91, 51, 43, 19, 86, 22, 79, 89, 100, 1, 31, 56, 69, 35, 30, 21, 24, 61, 97, 13, 23, 14, 15, 85, 46, 51, 46, 81, 36, 41, 84, 55, 99, 45, 25, 60, 40, 13, 3, 17};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 351;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> wins = {37, 92, 70, 33, 21, 87, 46, 54, 85, 46, 17, 51, 52, 14, 17, 15, 31, 97, 32, 75, 58, 81, 9, 78, 8, 82, 58, 24, 28, 68, 41, 82, 80, 99, 78, 99, 2};
    vector<int> ties = {16, 48, 16, 45, 71, 53, 47, 12, 83, 0, 54, 88, 44, 65, 84, 26, 99, 8, 61, 31, 87, 46, 76, 14, 12, 92, 18, 78, 3, 39, 28, 83, 56, 77, 32, 85, 26};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 382;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> wins = {94, 2, 40, 54, 72, 8, 54};
    vector<int> ties = {45, 67, 45, 20, 29, 79, 86};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 327;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> wins = {54, 77, 95, 95, 63, 46, 56, 83, 91, 82, 33, 16, 81, 97, 93, 6, 9, 9, 59, 74, 12, 95, 81, 3, 95, 93, 32, 67, 35, 46, 7, 42, 10, 50, 98, 81, 8, 72, 36, 66, 1, 44, 29, 31, 18, 50, 64, 76, 45, 71};
    vector<int> ties = {64, 62, 20, 45, 73, 13, 94, 44, 49, 1, 35, 56, 84, 35, 100, 56, 78, 14, 23, 71, 100, 15, 87, 56, 59, 31, 19, 8, 9, 65, 90, 59, 50, 93, 20, 38, 52, 33, 31, 56, 6, 77, 50, 97, 77, 75, 87, 14, 72, 13};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 379;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> wins = {62, 52, 76, 66, 31, 40, 34, 77, 14, 53, 69, 98, 42, 90, 45, 48, 8, 36, 93, 23};
    vector<int> ties = {31, 48, 74, 66, 25, 39, 92, 11, 9, 100, 82, 60, 84, 23, 51, 68, 77, 50, 3, 47};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 354;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> wins = {24, 29, 37, 83, 39, 22, 92, 98, 91, 54, 49, 56, 74, 62, 75, 32, 95, 98, 76, 3, 14, 54, 85, 76, 25, 15, 30, 99, 71, 13, 22, 51, 31};
    vector<int> ties = {75, 90, 87, 99, 23, 43, 25, 34, 52, 38, 20, 46, 97, 7, 76, 39, 10, 13, 78, 92, 68, 47, 12, 32, 70, 72, 29, 39, 13, 55, 7, 45, 11};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 348;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> wins = {47, 90, 6, 75, 69, 3, 99, 53};
    vector<int> ties = {54, 71, 16, 56, 71, 6, 79, 67};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 376;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> wins = {42, 98, 2, 40, 85, 50, 7, 30, 94, 51, 60, 35, 38, 71, 56, 62, 83, 80, 13, 43, 43, 72, 46, 86, 52, 78, 43, 80, 0, 73, 82, 49, 12, 68, 31, 77, 8, 39, 62, 0, 34};
    vector<int> ties = {100, 24, 29, 72, 27, 91, 94, 4, 43, 90, 94, 25, 11, 59, 68, 19, 78, 99, 35, 55, 51, 53, 62, 13, 23, 93, 54, 16, 11, 90, 62, 14, 84, 65, 59, 84, 76, 51, 35, 38, 93};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 339;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> wins = {63, 64, 93, 4, 99, 30, 25, 18, 72, 84, 55, 15, 1, 20, 19, 22, 74, 6, 80, 35, 3, 89, 7, 1, 91, 74, 6, 75, 88, 26, 51, 92, 43, 21, 5, 95, 66, 96, 40, 40, 51, 33, 76, 29, 70, 24, 13};
    vector<int> ties = {14, 46, 100, 23, 3, 38, 55, 99, 30, 70, 54, 11, 96, 48, 64, 79, 12, 60, 99, 48, 75, 69, 47, 21, 19, 48, 51, 38, 23, 36, 41, 14, 90, 54, 50, 89, 89, 44, 7, 73, 86, 49, 95, 100, 29, 24, 38};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 379;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> wins = {76, 9, 2, 49, 61, 21, 86, 39, 27, 36};
    vector<int> ties = {40, 30, 33, 57, 61, 87, 49, 78, 4, 58};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 307;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> wins = {16, 88, 89, 7, 21, 65, 2, 99, 15, 96, 19, 41, 23, 9, 10, 19, 31, 60, 51};
    vector<int> ties = {81, 37, 33, 90, 45, 88, 51, 42, 84, 90, 13, 0, 50, 3, 23, 25, 19, 34, 95};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 378;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> wins = {76, 1, 37, 83, 8, 29, 33, 22, 68, 56, 13, 14, 100, 10, 42, 52, 89, 89, 66, 82, 90, 77, 58, 8, 32, 29, 45, 68, 14, 77, 11, 55, 25, 42, 55, 9, 70};
    vector<int> ties = {4, 11, 83, 58, 45, 98, 86, 2, 37, 96, 71, 82, 72, 39, 86, 85, 9, 61, 98, 88, 24, 83, 87, 29, 8, 13, 97, 77, 1, 75, 18, 9, 36, 96, 99, 30, 33};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 372;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> wins = {39, 79, 87, 0, 51, 96, 29, 98, 69, 20, 96, 89, 18, 53, 89, 72, 53, 39, 25, 32, 52, 63, 9, 21, 35, 4, 84, 30};
    vector<int> ties = {24, 2, 57, 27, 19, 98, 22, 56, 72, 87, 47, 47, 85, 100, 68, 83, 48, 3, 70, 46, 62, 21, 75, 95, 8, 87, 55, 35};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 386;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> wins = {32, 58, 88, 39, 59, 21, 1, 2, 29, 56, 6, 89, 79, 39, 38, 62, 60, 30, 85, 22, 91, 76, 41, 26, 38, 14, 84};
    vector<int> ties = {52, 19, 98, 91, 68, 20, 50, 15, 81, 61, 28, 79, 30, 62, 82, 75, 10, 42, 56, 80, 100, 13, 57, 46, 34, 15, 11};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 373;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> wins = {92, 44, 91, 84, 85, 38, 76, 78, 15, 79, 26, 91, 52, 12, 100, 32, 38, 45, 50, 40, 1, 60, 71, 79, 25, 65, 87, 17, 67, 13, 5, 50, 82, 20, 48, 94, 85, 43, 30, 48, 57, 6, 92, 52, 63, 72};
    vector<int> ties = {40, 22, 98, 34, 68, 26, 72, 46, 39, 77, 13, 12, 23, 20, 31, 89, 21, 60, 13, 4, 44, 72, 18, 23, 58, 13, 28, 28, 77, 80, 32, 96, 4, 24, 11, 93, 18, 65, 25, 39, 28, 17, 37, 7, 94, 2};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 375;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> wins = {1, 2};
    vector<int> ties = {1, 1};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> wins = {1, 0};
    vector<int> ties = {1, 0};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> wins = {0, 5, 0};
    vector<int> ties = {0, 10, 0};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> wins = {1};
    vector<int> ties = {1};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> wins = {1, 2};
    vector<int> ties = {1, 1};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> wins = {1, 0};
    vector<int> ties = {1, 0};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> wins = {0, 5, 0};
    vector<int> ties = {0, 10, 0};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> wins = {1};
    vector<int> ties = {1};
    Soccer* pObj = new Soccer();
    clock_t start = clock();
    int result = pObj->maxPoints(wins, ties);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8449604&rd=5069&pm=1650
********************************************************************************
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
class Soccer {
  public:
  int maxPoints(vector <int> wins, vector <int> ties) {
    int max = -1;
    int i;
    for (i = 0; i < wins.size(); ++i)
      max >?= wins[i] * 3 + ties[i] * 1;
    return max;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/