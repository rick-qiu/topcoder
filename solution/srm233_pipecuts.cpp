/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3994
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

class PipeCuts {
public:
    double probability(vector<int> weldLocations, int L);
};

double PipeCuts::probability(vector<int> weldLocations, int L) {
    double ret;
    return ret;
}


int test0() {
    vector<int> weldLocations = {25, 50, 75};
    int L = 25;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> weldLocations = {25, 50, 75};
    int L = 50;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
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
    vector<int> weldLocations = {25, 50, 75};
    int L = 24;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> weldLocations = {99, 88, 77, 66, 55, 44, 33, 22, 11};
    int L = 50;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7222222222222222;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> weldLocations = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    int L = 34;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9974489795918368;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> weldLocations = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    int L = 95;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002551020408163265;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> weldLocations = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    int L = 60;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4362244897959184;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> weldLocations = {50, 51};
    int L = 50;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
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
    vector<int> weldLocations = {50, 51};
    int L = 49;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> weldLocations = {67, 21, 90, 77, 19, 38, 85, 91, 23, 29, 42};
    int L = 71;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18181818181818182;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> weldLocations = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    int L = 34;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9974489795918368;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> weldLocations = {31, 55, 22, 99, 1, 49, 21, 7, 3, 88, 89, 36, 41};
    int L = 77;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2948717948717949;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> weldLocations = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    int L = 55;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5892857142857143;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> weldLocations = {99, 97, 95, 93, 91, 89, 87, 85, 83, 81, 79, 77, 75, 73, 71, 69, 67, 65, 63, 61, 59, 57, 55, 53, 51, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    int L = 51;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9208163265306123;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> weldLocations = {99, 97, 95, 93, 91, 89, 87, 85, 83, 81, 79, 77, 75, 73, 71, 69, 67, 65, 63, 61, 59, 57, 55, 53, 51, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    int L = 60;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6048979591836735;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> weldLocations = {54, 69, 86, 50, 21, 66, 35, 62, 55, 44, 25, 2, 36, 37, 53, 82, 14, 19, 92, 60, 68, 16, 87, 78, 29, 31, 34, 77, 33, 74, 51, 97, 46, 58, 39, 71, 72, 32, 88, 42};
    int L = 74;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07307692307692308;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> weldLocations = {5, 92, 62, 69, 42, 11, 91, 24, 7, 78, 46, 44, 15, 90, 82, 71, 20, 39, 13, 96, 14, 19, 93, 38, 47, 12, 75, 45, 9, 2, 81, 73, 17, 64, 60, 26, 22, 84, 32, 67, 56, 30, 85, 66, 36};
    int L = 86;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04141414141414142;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> weldLocations = {8, 92, 80, 13, 95, 86, 4, 76, 85, 94, 41, 91, 57, 47};
    int L = 75;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5274725274725275;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> weldLocations = {12, 30, 87, 77, 22, 46, 98, 64, 20, 71, 44, 45, 36, 33, 92, 68, 97};
    int L = 61;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.45588235294117646;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> weldLocations = {74, 5, 72, 20, 29, 91, 80, 14, 30, 39, 46, 12, 95, 15, 93, 82, 79, 42, 25, 1, 84, 37, 7, 19, 9, 50, 35, 54, 44, 65, 68, 6, 28, 66, 99, 21};
    int L = 69;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.353968253968254;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> weldLocations = {18, 21, 20, 13, 92, 73, 80, 97, 27, 77, 16, 89, 7, 4, 65, 26, 1, 14, 25, 54, 28, 40, 34, 55, 86, 29, 98, 41, 2, 75, 94};
    int L = 50;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8451612903225807;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> weldLocations = {12, 43, 73, 82, 3, 85, 7, 67, 66, 6, 21, 71, 96, 28, 14, 1, 36, 60, 62, 61, 94, 9, 79, 84, 50, 65, 80, 76, 44, 59, 87, 88, 32};
    int L = 48;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8428030303030303;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> weldLocations = {51, 5, 19, 50, 55, 4, 33, 95, 57, 32, 13, 75, 21, 16, 42, 44, 14, 94, 96, 1, 53, 30, 88, 63, 25, 64, 83, 59, 20, 34, 99, 29, 54};
    int L = 92;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.028409090909090908;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> weldLocations = {36, 53, 89, 55, 63, 17, 85, 70, 60, 24, 58, 78, 14, 97, 52, 91, 64, 50, 44, 15, 4, 95, 46, 40, 82, 71, 88, 56, 77, 12, 41, 34, 75, 67, 57, 87, 2, 65, 69, 96};
    int L = 44;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8769230769230769;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> weldLocations = {27, 40, 67, 21, 57, 75, 42, 93, 46, 78, 54, 29, 53, 74, 22, 44, 13, 97, 95, 39, 63, 70, 65, 81, 14, 82};
    int L = 82;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.018461538461538463;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> weldLocations = {33, 96, 73, 72, 50, 76, 49, 41, 22, 39, 34, 6, 30, 65, 14, 40, 7, 43, 27, 99, 8, 78, 87, 36, 32, 15, 45, 23, 77, 20, 56, 35, 53, 31, 54, 66};
    int L = 36;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9761904761904762;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> weldLocations = {87, 49, 75, 41, 34, 9, 77, 1, 89, 66, 18, 58, 72, 31, 54, 43, 27, 60, 40, 38, 84, 86, 63, 70, 95, 69, 79, 26, 8, 55, 97, 17};
    int L = 43;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8508064516129032;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> weldLocations = {85, 16, 97, 8, 52};
    int L = 71;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> weldLocations = {92, 17, 21, 10, 4, 90, 52, 66, 58, 95, 53, 22, 99, 1, 63};
    int L = 61;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5428571428571428;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> weldLocations = {25, 50, 75};
    int L = 50;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
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
    vector<int> weldLocations = {30, 60, 90};
    int L = 50;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> weldLocations = {99, 88, 77, 66, 55, 44, 33, 22, 11};
    int L = 50;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7222222222222222;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> weldLocations = {50, 75};
    int L = 49;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> weldLocations = {1, 2};
    int L = 50;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> weldLocations = {99, 1};
    int L = 98;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> weldLocations = {80, 90, 10, 20};
    int L = 50;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> weldLocations = {24, 49};
    int L = 50;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> weldLocations = {20, 60, 70};
    int L = 45;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> weldLocations = {15, 45, 56};
    int L = 50;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> weldLocations = {25, 75};
    int L = 70;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
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
    vector<int> weldLocations = {25, 50, 60};
    int L = 39;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> weldLocations = {10, 30, 59, 1};
    int L = 59;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> weldLocations = {25, 75};
    int L = 30;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> weldLocations = {75, 76};
    int L = 74;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> weldLocations = {25, 26};
    int L = 25;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> weldLocations = {26, 40};
    int L = 25;
    PipeCuts* pObj = new PipeCuts();
    clock_t start = clock();
    double result = pObj->probability(weldLocations, L);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7462740&rd=6532&pm=3994
********************************************************************************
#include <string>
#include <vector>
 
using namespace std;
 
class PipeCuts {
  public:
  double probability(vector <int> v, int L) {
    
    double tot = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
      for (int j = i+1; j < v.size(); j++)
        if (v[i] > L || v[j] - v[i] > L || 100 - v[j] > L)
    tot++;
    return 2 * tot / v.size() / (v.size() - 1);
 
  }
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/