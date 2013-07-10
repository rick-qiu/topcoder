/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12075
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

class PillarsDivTwo {
public:
    double maximalLength(vector<int> height, int w);
};

double PillarsDivTwo::maximalLength(vector<int> height, int w) {
    double ret;
    return ret;
}


int test0() {
    vector<int> height = {3, 3, 3};
    int w = 2;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5.656854249492381;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> height = {1, 1, 1, 1};
    int w = 100;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 300.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> height = {100, 2, 100, 2, 100};
    int w = 4;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 396.32310051270036;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> height = {2, 1, 1, 2};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3.82842712474619;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> height = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int w = 20;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 221.02070848731498;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> height = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int w = 100;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 6895.085278660454;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> height = {100, 1, 100};
    int w = 97;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 277.2002886001384;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> height = {1, 100, 4};
    int w = 93;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 271.6615541441225;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> height = {42, 68, 35, 1, 70, 25, 79, 59, 63, 65, 6, 46, 82, 28, 62, 92, 96, 43, 28, 37, 92, 5, 3, 54, 93, 83, 22, 17, 19, 96, 48, 27, 72, 39, 70, 13, 68, 100, 36, 95, 4, 12, 23, 34, 74, 65, 42, 12, 54, 69};
    int w = 97;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5697.585698318906;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> height = {92, 98, 43, 46, 30, 10, 72, 1, 25, 43, 19, 44, 14, 38, 43, 94, 70, 25, 86, 59, 99, 51, 4, 68, 100, 4, 57, 92, 12, 95, 43, 61, 92, 5, 94, 15, 4, 13, 78, 42, 31, 100, 59, 74, 64, 17, 51, 20, 36, 9};
    int w = 23;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3227.74775802847;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> height = {61, 39, 43, 56, 60, 68, 98, 64, 20, 5, 13, 69, 78, 63, 27, 46, 91, 38, 63, 57, 49, 71, 35, 2, 51, 62, 84, 1, 88, 98, 94, 81, 31, 18, 78, 71, 6, 74, 33, 1, 83, 39, 19, 15, 80, 74, 36, 39, 14, 28};
    int w = 49;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3762.30612268847;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> height = {42, 68, 35, 1, 70, 25, 79, 59, 63, 65, 6, 46, 82, 28, 62, 92, 96, 43, 28, 37, 92, 5, 3, 54, 93, 83, 22, 17, 19, 96, 48, 27, 72, 39, 70, 13, 68, 100, 36, 95, 4, 12, 23, 34, 74, 65, 42, 12, 54, 69};
    int w = 48;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3851.8189701668684;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> height = {45, 63, 58, 38, 60, 24, 42, 30, 79, 17, 36, 91, 43, 89, 7, 41, 43, 65, 49, 47, 6, 91, 30, 71, 51, 7, 2, 94, 49, 30, 24, 85, 55, 57, 41, 67, 77, 32, 9, 45, 40, 27, 24, 38, 39, 19, 83, 30, 42, 34};
    int w = 16;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 2844.926773074714;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> height = {40, 59, 5, 31, 78, 7, 74, 87, 22, 46, 25, 73, 71, 30, 78, 74, 98, 13, 87, 91, 62, 37, 56, 68, 56, 75, 32, 53, 51, 51, 42, 25, 67, 31, 8, 92, 8, 38, 58, 88, 54, 84, 46, 10, 10, 59, 22, 89, 23, 47};
    int w = 7;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 2950.092492769286;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> height = {31, 14, 69, 1, 92, 63, 56, 11, 60, 25, 38, 49, 84, 96, 42, 3, 51, 92, 37, 75, 21, 97, 22, 49, 100, 69, 85, 82, 35, 54, 100, 19, 39, 1, 89, 28, 68, 29, 94, 49, 84, 8, 22, 11, 18, 14, 15, 10, 17, 36};
    int w = 52;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4049.5657504383657;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> height = {1, 50, 20, 57, 99, 4, 25, 9, 45, 10, 90, 3, 96, 86, 94, 44, 24, 88, 15, 4, 49, 1, 59, 19, 81, 97, 99, 82, 90, 99, 10, 58, 73, 23, 39, 93, 39, 80, 91, 58, 59, 92, 16, 89, 57, 12, 3, 35, 73, 56};
    int w = 29;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3524.900000318473;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> height = {47, 63, 87, 76, 34, 70, 43, 45, 17, 82, 99, 23, 52, 22, 100, 58, 77, 93, 90, 76, 13, 1, 11, 4, 70, 62, 89, 2, 90, 56, 24, 3, 86, 83, 86, 89, 27, 18, 58, 33, 33, 70, 55, 22, 90, 77, 30, 69, 93, 26};
    int w = 56;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4213.296072802553;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> height = {35, 50, 42, 13, 46, 61, 19, 54, 40, 24, 80, 97, 88, 30, 50, 38, 67, 50, 94, 96, 98, 17, 87, 6, 89, 83, 56, 35, 15, 2, 17, 72, 87, 64, 14, 56, 86, 54, 13, 9, 33, 46, 14, 57, 22, 59, 47, 83, 82, 45};
    int w = 97;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5645.772838902263;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> height = {23, 30, 62, 36, 51, 74, 67, 45, 60, 93, 40, 54, 25, 55, 11, 46, 50, 87, 14, 75, 23, 69, 19, 88, 6, 59, 92, 3, 26, 78, 15, 15, 25, 35, 75, 73, 60, 34, 71, 88, 98, 19, 78, 74, 71, 64, 69, 93, 86, 3};
    int w = 81;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5143.7240088784765;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> height = {14, 28, 3, 100, 28, 26, 44, 25, 24, 73, 62, 82, 4, 33, 6, 94, 26, 32, 93, 43, 23, 87, 65, 1, 88, 61, 14, 75, 71, 71, 36, 34, 12, 61, 97, 68, 86, 51, 41, 95, 96, 25, 20, 26, 77, 95, 59, 3, 72, 67};
    int w = 79;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5012.8427487849;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> height = {94, 52, 85, 19, 65, 20, 53, 1, 88, 61, 27, 11, 58, 71, 16, 77, 28, 44, 59, 65, 10, 83, 87, 66, 88, 78, 75, 26, 28, 30, 29, 24, 21, 3, 63, 24, 97, 38, 62, 96, 26, 65, 61, 3, 17, 31, 27, 12, 72, 12};
    int w = 48;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3761.538515581392;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> height = {54, 21, 91, 25, 89, 64, 41, 52, 63, 30, 1, 14, 59, 79, 66, 8, 78, 1, 59, 40, 4, 61, 58, 25, 78, 9, 14, 88, 2, 51, 61, 29, 94, 85, 6, 41, 12, 5, 36, 57, 73, 51, 24, 86, 57, 17, 27, 58, 27, 58};
    int w = 38;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3347.0754719268034;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> height = {72, 70, 62, 97, 23, 18, 13, 18, 97, 86, 42, 24, 30, 30, 66, 60, 33, 97, 56, 54, 63, 85, 35, 55, 73, 58, 70, 33, 64, 8, 84, 12, 36, 68, 49, 76, 39, 24, 43, 55, 12, 42, 76, 60, 26, 22, 71, 27, 35, 6};
    int w = 84;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5086.827402571348;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> height = {51, 99, 80, 2, 94, 35, 38, 35, 57, 94, 77, 6, 63, 49, 82, 1, 14, 42, 56, 56, 43, 63, 12, 78, 25, 79, 53, 44, 97, 74, 41, 14, 76, 73, 19, 11, 18, 33, 13, 96, 70, 32, 41, 89, 86, 91, 98, 90, 91, 46};
    int w = 54;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4138.221466339355;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> height = {15, 52, 41, 45, 59, 36, 60, 93, 6, 65, 82, 4, 30, 76, 9, 93, 98, 50, 57, 62, 28, 68, 42, 30, 41, 14, 75, 2, 78, 16, 84, 14, 93, 25, 2, 93, 60, 71, 29, 28, 85, 76, 87, 99, 71, 88, 48, 5, 4, 22};
    int w = 64;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4475.562028763542;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> height = {7, 64, 11, 72, 90, 41, 65, 43, 20, 14, 92, 5, 19, 33, 51, 6, 76, 40, 4, 23, 99, 48, 85, 49, 72, 65, 14, 76, 46, 13, 47, 79, 70, 63, 20, 86, 90, 45, 66, 41, 46, 9, 19, 71, 2, 24, 33, 73, 53, 88};
    int w = 71;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4603.814856077139;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> height = {64, 2, 4, 24, 28, 1, 70, 16, 66, 29, 44, 48, 89, 44, 38, 10, 64, 50, 82, 89, 43, 9, 61, 22, 59, 55, 89, 47, 91, 50, 44, 31, 21, 49, 68, 37, 84, 36, 27, 86, 39, 54, 30, 25, 49, 24, 60, 58, 67, 45};
    int w = 56;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3993.840621897657;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> height = {19, 27, 12, 26, 56, 2, 50, 97, 85, 16, 65, 43, 76, 14, 43, 97, 49, 73, 27, 7, 74, 30, 5, 6, 27, 13, 76, 94, 66, 37, 37, 42, 15, 95, 57, 53, 37, 39, 83, 56, 16, 32, 31, 42, 26, 12, 38, 87, 91, 51};
    int w = 63;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4146.494525759854;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> height = {35, 94, 54, 17, 53, 9, 63, 34, 55, 4, 35, 4, 57, 49, 25, 18, 14, 10, 29, 1, 81, 19, 59, 51, 56, 62, 65, 4, 77, 44, 10, 3, 62, 90, 49, 83, 54, 75, 21, 3, 24, 32, 70, 79, 60, 9, 20, 72, 4, 46};
    int w = 82;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4874.647346475028;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> height = {5, 93, 86, 14, 99, 90, 23, 39, 38, 11, 62, 35, 9, 62, 60, 94, 16, 70, 38, 70, 59, 1, 72, 65, 18, 16, 56, 16, 31, 40, 13, 89, 83, 55, 86, 11, 85, 75, 81, 16, 52, 42, 16, 80, 11, 99, 74, 89, 78, 33};
    int w = 57;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4214.483768834308;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> height = {90, 14, 9, 42, 91, 24, 64, 29, 85, 79, 1, 72, 86, 75, 72, 34, 68, 54, 96, 69, 26, 77, 30, 51, 99, 10, 94, 87, 81, 17, 50, 68, 29, 80, 65, 22, 6, 27, 17, 17, 27, 67, 88, 82, 65, 41, 87, 22, 63, 22};
    int w = 65;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4541.267361569381;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> height = {10, 16, 3, 74, 25, 42, 46, 63, 24, 32, 7, 69, 19, 3, 8, 8, 82, 13, 37, 31, 15, 10, 85, 57, 91, 94, 97, 53, 55, 46, 9, 49, 92, 13, 32, 15, 40, 59, 23, 5, 96, 53, 70, 80, 39, 24, 19, 67, 60, 99};
    int w = 87;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5138.717089235266;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> height = {97, 63, 34, 59, 23, 47, 93, 38, 26, 48, 59, 3, 8, 99, 31, 93, 1, 79, 100, 53, 49, 83, 41, 16, 76, 63, 68, 37, 98, 19, 98, 29, 52, 17, 31, 50, 26, 59, 30, 21, 41, 61, 48, 63, 56, 76, 93, 62, 55, 99};
    int w = 47;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3936.215255729578;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> height = {15, 47, 89, 70, 39, 64, 76, 16, 22, 76, 16, 29, 35, 71, 6, 65, 58, 63, 62, 25, 50, 70, 31, 24, 51, 34, 26, 11, 38, 37, 38, 79, 94, 37, 15, 65, 92, 50, 36, 6, 38, 5, 38, 24, 65, 71, 9, 69, 82, 86};
    int w = 53;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3721.8263629029;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> height = {74, 53, 95, 77, 27, 97, 73, 50, 41, 75, 20, 44, 12, 42, 90, 20, 66, 6, 86, 17, 51, 16, 10, 65, 67, 94, 75, 10, 1, 96, 74, 90, 62, 73, 69, 59, 32, 69, 27, 11, 23, 75, 80, 11, 53, 83, 92, 96, 65, 75};
    int w = 65;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4608.578068254262;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> height = {3, 56, 61, 75, 73, 22, 23, 48, 78, 90, 6, 96, 95, 51, 44, 55, 82, 13, 73, 40, 29, 13, 63, 68, 9, 16, 9, 24, 60, 35, 5, 87, 20, 59, 46, 7, 67, 1, 68, 93, 88, 33, 57, 75, 48, 22, 84, 23, 32, 77};
    int w = 84;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5069.750569832345;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> height = {49, 24, 83, 19, 77, 21, 12, 83, 57, 91, 26, 25, 87, 78, 70, 44, 35, 78, 69, 69, 92, 97, 84, 29, 28, 27, 72, 98, 13, 4, 28, 9, 46, 9, 86, 39, 38, 44, 14, 2, 51, 29, 12, 51, 50, 93, 55, 70, 82, 66};
    int w = 68;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4539.631995764839;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> height = {14, 94, 35, 73, 73, 31, 2, 43, 78, 78, 71, 3, 65, 82, 91, 24, 38, 24, 80, 96, 70, 28, 43, 11, 83, 59, 27, 88, 71, 29, 52, 59, 14, 61, 84, 87, 43, 11, 73, 29, 35, 42, 19, 4, 68, 66, 39, 82, 58, 51};
    int w = 15;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 2995.169090435318;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> height = {99, 59, 62, 64, 57, 8, 79, 90, 36, 66, 76, 87, 87, 34, 61, 31, 49, 29, 93, 34, 41, 67, 36, 11, 100, 38, 93, 83, 29, 53, 70, 45, 95, 9, 53, 48, 33, 36, 9, 65, 98, 44, 50, 16, 42, 90, 1, 13, 49, 24};
    int w = 52;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4036.1298009018233;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> height = {75, 34, 92, 1, 55, 91, 98, 20, 81, 79, 32, 45, 41, 88, 100, 26, 84, 39, 93, 94, 53, 12, 61, 35, 41, 98, 86, 30, 41, 6, 92, 93, 11, 50, 79, 80, 72, 78, 74, 94, 21, 98, 27, 77, 91, 83, 79, 60, 19, 90};
    int w = 60;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4613.392057360121;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> height = {50, 25, 73, 81, 9, 68, 9, 78, 4, 71, 8, 97, 75, 23, 12, 20, 62, 57, 91, 64, 84, 17, 33, 53, 42, 55, 14, 63, 97, 61, 16, 5, 100, 37, 81, 99, 33, 88, 85, 41, 18, 7, 71, 42, 83, 50, 24, 59, 6, 22};
    int w = 96;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5695.095225480062;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> height = {97, 17, 79, 79, 80, 59, 78, 51, 8, 30, 82, 96, 79, 77, 54, 100, 85, 66, 94, 9, 73, 44, 30, 15, 69, 56, 92, 74, 23, 49, 52, 87, 45, 47, 78, 18, 30, 17, 75, 92, 70, 13, 47, 94, 92, 16, 50, 58, 41, 53};
    int w = 37;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3701.285980331424;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> height = {52, 88, 27, 63, 56, 84, 95, 81, 98, 66, 66, 14, 62, 79, 79, 79, 41, 12, 48, 46, 71, 76, 90, 51, 50, 34, 66, 15, 83, 8, 33, 97, 68, 23, 83, 11, 42, 32, 88, 6, 80, 22, 39, 52, 48, 9, 47, 77, 60, 90};
    int w = 23;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3423.257432740588;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> height = {67, 87, 56, 29, 15, 61, 54, 78, 49, 4, 62, 32, 83, 56, 98, 7, 53, 22, 97, 82, 22, 56, 48, 25, 19, 36, 77, 75, 60, 99, 75, 54, 23, 36, 44, 89, 54, 33, 48, 81, 27, 79, 51, 2, 62, 100, 56, 64, 17, 74};
    int w = 62;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4400.964779878813;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> height = {46, 74, 75, 51, 54, 82, 88, 100, 11, 44, 66, 73, 30, 82, 13, 77, 82, 48, 91, 72, 6, 73, 33, 90, 21, 66, 32, 59, 94, 7, 79, 49, 7, 72, 67, 97, 98, 21, 95, 30, 89, 10, 85, 70, 79, 18, 16, 27, 85, 69};
    int w = 7;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3440.8269950782324;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> height = {29, 98, 19, 91, 100, 86, 87, 100, 21, 11, 72, 14, 16, 86, 19, 81, 32, 68, 88, 45, 87, 8, 61, 28, 75, 32, 53, 72, 69, 94, 86, 38, 12, 5, 78, 7, 69, 23, 14, 1, 43, 38, 39, 89, 56, 90, 48, 82, 94, 85};
    int w = 88;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5558.977635800158;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> height = {62, 94, 18, 2, 83, 48, 66, 54, 5, 85, 96, 26, 22, 65, 82, 73, 7, 57, 44, 94, 81, 81, 69, 12, 14, 69, 52, 17, 80, 69, 41, 32, 34, 80, 64, 60, 54, 37, 96, 66, 75, 21, 36, 81, 77, 56, 26, 72, 9, 60};
    int w = 57;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4212.1177983213665;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> height = {3, 33, 6, 41, 76, 63, 86, 63, 81, 37, 98, 3, 9, 81, 41, 77, 59, 94, 41, 47, 75, 74, 98, 81, 36, 73, 1, 8, 56, 67, 42, 89, 82, 69, 16, 97, 26, 10, 13, 37, 56, 63, 44, 43, 22, 23, 13, 49, 19, 69};
    int w = 18;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3132.125123376149;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> height = {15, 51, 91, 36, 60, 70, 96, 4, 41, 80, 100, 6, 92, 62, 82, 53, 54, 34, 30, 88, 43, 54, 84, 21, 15, 19, 45, 64, 30, 53, 65, 70, 71, 6, 48, 95, 88, 27, 77, 24, 41, 80, 91, 89, 11, 72, 46, 22, 71, 84};
    int w = 90;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5519.1645016944785;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> height = {56, 79, 80, 7, 63, 36, 88, 97, 34, 89, 36, 80, 94, 91, 63, 66, 2, 6, 8, 68, 70, 35, 72, 58, 99, 46, 98, 19, 39, 45, 73, 64, 29, 65, 2, 24, 91, 5, 2, 28, 98, 93, 72, 64, 2, 64, 22, 66, 22, 46};
    int w = 11;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3155.4891309934756;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> height = {96, 42, 23, 13, 52, 16, 56, 94, 39, 80, 83, 9, 55, 23, 8, 46, 39, 45, 91, 40, 55, 5, 24, 26, 79, 25, 82, 31, 34, 24, 95, 31, 47, 88, 46, 6, 17, 51, 90, 39, 64, 36, 98, 10, 31, 25, 9, 38, 75, 21};
    int w = 73;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4649.080920198726;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> height = {94, 56, 35, 62, 57, 7, 85, 76, 83, 20, 42, 33, 85, 80, 80, 84, 68, 37, 26, 19, 38, 29, 20, 78, 38, 92, 57, 96, 61, 2, 94, 33, 37, 81, 76, 8, 85, 75, 20, 91, 77, 42, 52, 30, 91, 75, 73, 92, 90, 88};
    int w = 91;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5599.94889235557;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> height = {40, 94, 54, 64, 82, 4, 6, 77, 80, 96, 40, 69, 99, 84, 40, 16, 22, 94, 27, 23, 39, 29, 82, 100, 79, 92, 24, 44, 35, 44, 50, 3, 8, 3, 42, 88, 47, 92, 38, 14, 1, 17, 91, 63, 36, 27, 11, 78, 83, 61};
    int w = 90;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5414.974253146997;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> height = {6, 75, 64, 23, 96, 67, 61, 39, 89, 12, 46, 68, 26, 68, 90, 43, 64, 48, 3, 18, 100, 24, 27, 4, 49, 52, 71, 37, 59, 68, 57, 6, 32, 63, 20, 76, 57, 32, 96, 45, 92, 4, 89, 16, 51, 20, 73, 92, 84, 34};
    int w = 76;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4963.683542239594;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> height = {43, 70, 1, 55, 79, 86, 58, 34, 94, 91, 4, 51, 34, 23, 72, 12, 91, 39, 42, 59, 48, 53, 59, 80, 3, 84, 91, 3, 69, 23, 96, 36, 9, 62, 43, 95, 100, 89, 79, 43, 58, 42, 48, 70, 46, 81, 14, 65, 11, 62};
    int w = 86;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5349.152628770879;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> height = {74, 5, 63, 4, 3, 70, 55, 30, 53, 75, 50, 31, 45, 45, 50, 19, 66, 64, 53, 74, 71, 32, 48, 12, 70, 99, 99, 4, 53, 80, 54, 44, 23, 89, 64, 35, 51, 23, 41, 12, 93, 52, 81, 78, 17, 77, 79, 21, 16, 49};
    int w = 99;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5683.230350379701;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> height = {80, 36, 58, 84, 63, 3, 63, 21, 71, 23, 74, 42, 87, 89, 18, 18, 93, 99, 68, 50, 66, 90, 33, 20, 82, 4, 31, 29, 32, 90, 53, 31, 73, 65, 8, 96, 29, 82, 91, 11, 78, 72, 37, 60, 44, 41, 34, 38, 94, 31};
    int w = 75;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4869.419994991303;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> height = {94, 83, 4, 62, 91, 63, 8, 98, 52, 24, 91, 18, 41, 4, 67, 84, 62, 60, 46, 87, 52, 66, 2, 41, 10, 98, 84, 51, 59, 22, 76, 82, 88, 72, 88, 100, 5, 80, 39, 1, 31, 62, 19, 6, 41, 29, 60, 23, 99, 61};
    int w = 99;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5883.412415138644;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> height = {36, 82, 15, 68, 94, 97, 62, 47, 39, 71, 39, 77, 56, 18, 72, 61, 53, 59, 34, 56, 66, 27, 2, 35, 60, 94, 49, 74, 93, 94, 34, 38, 4, 91, 12, 95, 69, 28, 99, 90, 49, 80, 48, 50, 32, 70, 76, 99, 50, 37};
    int w = 100;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5959.549729629215;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> height = {24, 44, 32, 55, 62, 35, 86, 68, 17, 94, 5, 67, 54, 9, 24, 85, 93, 68, 49, 70, 31, 12, 15, 91, 28, 44, 5, 100, 75, 96, 7, 59, 90, 59, 10, 90, 48, 41, 19, 65, 76, 27, 90, 4, 67, 13, 41, 71, 77, 96};
    int w = 42;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3799.667114248842;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> height = {87, 52, 10, 88, 84, 86, 91, 51, 87, 56, 82, 29, 3, 78, 63, 25, 66, 73, 33, 86, 29, 47, 90, 79, 84, 26, 66, 61, 46, 79, 22, 56, 21, 28, 74, 35, 52, 76, 37, 35, 2, 38, 11, 75, 91, 57, 72, 81, 36, 46};
    int w = 83;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5182.929781607518;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> height = {100};
    int w = 4;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> height = {5, 10, 10, 10};
    int w = 5;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 30.886890422961002;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> height = {34, 62, 79, 29, 38, 38, 5, 39, 57, 25, 24, 27, 24, 83, 54, 72, 12, 95, 11, 65, 62, 65, 98, 62, 63, 42, 63, 5, 64, 78, 3, 1, 92, 60, 98, 27, 92, 44, 67, 1, 9, 29, 28, 14, 18, 94, 64, 19, 66, 68};
    int w = 3;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 2767.087523846886;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> height = {100, 10, 1, 1, 10, 100, 100, 10, 1, 1, 10, 100, 100, 10, 1, 1, 10, 100, 100, 10, 1, 1, 10, 100, 100, 10, 1, 1, 10, 100, 100, 10, 1, 1, 10, 100, 100, 10, 1, 1, 10, 100, 100, 10, 1, 1, 10, 100};
    int w = 10;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 1950.4110370245667;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> height = {100, 1, 100, 100, 1, 1};
    int w = 95;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 601.62361448294;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> height = {100, 2, 100, 2, 100};
    int w = 4;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 396.32310051270036;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> height = {1, 51, 100, 1};
    int w = 10;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 209.00753754569197;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> height = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int w = 100;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5089.709782605168;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> height = {1, 2, 8, 100, 98, 10, 100, 34, 12, 100, 99, 100, 19, 43, 13, 12, 100, 100, 100, 100, 100, 100, 100, 100, 100, 9, 2, 100, 100, 29, 10};
    int w = 43;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 2639.5685714652464;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> height = {1, 2, 4};
    int w = 2;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5.60555127546399;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> height = {2, 1, 1, 2};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3.82842712474619;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> height = {1, 100, 1, 100};
    int w = 10;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 298.51130631853795;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> height = {1, 2, 5, 100, 1, 3, 100, 2, 1, 100, 5, 40, 100, 12, 100, 99, 1, 15, 100, 60, 50, 100, 1, 12};
    int w = 14;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 1529.6658157576385;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> height = {100, 99, 88, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 60, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 52, 52, 51};
    int w = 100;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 6122.496143467997;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> height = {36, 2, 1, 4, 5, 8, 96, 65, 5, 6};
    int w = 5;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 261.23081191346324;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> height = {100, 2, 100, 2, 100, 33, 44, 5, 55, 66, 77, 55, 88};
    int w = 7;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 932.1960719164986;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> height = {1, 10, 100};
    int w = 10;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 109.50376877284599;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> height = {1, 10, 10, 1};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 19.110770276274835;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> height = {3, 50, 80, 90, 6};
    int w = 2;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 276.1265368295624;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> height = {2, 2, 1, 3, 4};
    int w = 5;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 21.02899092203087;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> height = {3, 2, 1};
    int w = 2;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4.82842712474619;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> height = {100, 1, 1, 100};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 199.01010075246163;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> height = {1, 2, 3};
    int w = 2;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4.82842712474619;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> height = {5, 3};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4.123105625617661;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> height = {50, 45, 1};
    int w = 10;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 90.24411338142782;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> height = {16, 25, 12, 13, 51, 12, 6, 89, 6, 86, 54, 58, 14, 32, 27, 4, 66, 7, 93, 2, 74, 29, 47, 66, 14, 98, 93, 88, 88, 8, 49, 12, 78, 26, 8, 98, 51, 24, 52, 22, 76, 37, 35, 49, 61, 63, 11, 19, 28, 52};
    int w = 97;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5611.37850356068;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> height = {2, 100, 2, 100, 50, 100};
    int w = 10;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 497.51884386422995;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> height = {90, 1, 35, 70, 99, 10, 50, 11, 13, 33, 60, 50, 40, 30, 10, 99, 55, 16, 60, 53, 57, 63, 16, 1, 10, 5, 2, 3, 4, 5, 6, 7, 7, 8, 9, 16, 95, 16, 32, 32, 66, 13, 15, 15, 16, 19, 20, 25, 33};
    int w = 95;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5060.868086519161;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> height = {100, 2, 2, 100};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 199.01010075246163;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> height = {1, 100, 1, 1, 100, 1};
    int w = 20;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 424.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> height = {10, 50, 100};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 108.06043551436824;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> height = {100, 100, 100, 100, 100};
    int w = 5;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 396.50472884948044;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> height = {10, 9};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 9.055385138137417;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> height = {2, 10, 10, 5};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 22.233875901892496;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> height = {20, 40, 60, 70, 80, 90, 10, 60, 55, 3, 99, 99, 99, 40};
    int w = 99;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 1607.1064447643892;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> height = {100, 1, 100, 100, 1, 1, 2, 2, 3, 4, 4, 2, 100, 100, 99, 90, 100, 100, 100, 90, 80, 90, 80, 90, 100, 10, 100, 1, 10, 100};
    int w = 95;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3543.256352118813;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> height = {50, 15, 8, 20, 50, 19, 38, 30, 45, 1, 1, 1, 1, 1, 50, 12, 48, 32, 45, 11, 43, 100, 1, 12, 88};
    int w = 3;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 908.6756534435257;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> height = {1, 10, 100, 84, 34, 75, 34, 88, 11, 1, 22, 33, 44, 55, 100, 88, 15, 45, 75};
    int w = 4;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 971.9020717717231;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> height = {10, 8, 5};
    int w = 2;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 14.560219778561036;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> height = {5, 5, 2};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 8.246211251235321;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> height = {1, 4, 6};
    int w = 2;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 7.385164807134504;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> height = {3, 4, 88};
    int w = 5;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 92.52872452327188;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> height = {2, 3, 100, 2, 100};
    int w = 2;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 299.29666785570646;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> height = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 47, 48, 49};
    int w = 4;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 1227.9369749565783;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> height = {1, 46, 91, 100, 1, 46, 91, 5, 100};
    int w = 2;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 569.1938838734787;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> height = {50, 30, 59, 30, 49, 49, 39, 39, 30, 10, 10, 1, 39, 40, 20, 30, 40, 30, 40, 29, 99, 88, 69, 4, 3, 2, 6, 7, 1, 3, 6, 29, 30, 44, 58, 38, 30, 10, 10, 10, 10, 10, 10};
    int w = 100;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 4505.53649020157;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> height = {100, 2, 1, 1, 2, 100};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 201.01010075246163;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> height = {4, 2, 3, 4};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 7.63441361516796;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> height = {1, 2};
    int w = 100;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 100.00499987500625;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> height = {100, 1, 2, 3, 4, 1, 1, 1, 1, 100};
    int w = 100;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 981.5320316993422;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> height = {1, 2, 3};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3.23606797749979;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> height = {1, 2, 3, 3};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5.47213595499958;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> height = {5, 1, 4, 3, 4, 5};
    int w = 20;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 101.29107171899787;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> height = {1, 2, 3, 4, 5, 4, 3, 2, 1, 1, 2, 1, 1, 1, 2, 3, 4, 3, 2, 1, 100, 1, 1, 1, 2, 3, 4, 5, 6, 6, 6, 6, 4, 3, 2, 1, 2, 1, 2, 2, 2, 1, 2, 2, 1, 2, 3, 2, 1, 100};
    int w = 100;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 5023.327596290844;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> height = {2, 1, 1, 2, 2, 1, 1, 3, 2, 1, 1, 1, 2, 1, 3, 8, 24, 56};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 87.69442954849627;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> height = {50, 15, 8, 20, 50, 19, 38, 30, 45, 1, 1, 1, 1, 1, 50, 12, 48, 32, 45, 11, 43, 100, 1, 12, 88, 99, 12, 1, 15, 38, 39, 57, 68, 88, 89, 97, 33, 92, 34, 100, 100, 100, 100, 2, 3};
    int w = 7;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 2234.9825228448544;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> height = {100, 1, 100, 100, 1, 10, 50, 19, 90, 98, 100, 15, 17, 100, 90, 90, 90, 90, 80, 70, 60, 20, 10, 100, 90, 18, 20, 20};
    int w = 95;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 3233.2064416800113;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> height = {1, 67, 3, 45, 78, 90, 23, 12, 34, 72, 91, 87, 52, 58, 24, 51, 74};
    int w = 93;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 1795.3221382497823;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> height = {2, 1, 1, 2, 1, 3, 8, 24, 49, 100};
    int w = 1;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 154.763284751235;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> height = {2, 1, 1, 3};
    int w = 2;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 7.06449510224598;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> height = {3, 16, 17, 39, 12, 88, 80, 98, 73, 89, 4, 1, 92, 13, 2, 65, 7, 3, 69, 76};
    int w = 5;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 1115.1380910781872;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> height = {2, 3, 100, 3, 2, 100, 2, 3};
    int w = 2;
    PillarsDivTwo* pObj = new PillarsDivTwo();
    clock_t start = clock();
    double result = pObj->maximalLength(height, w);
    clock_t end = clock();
    delete pObj;
    double expected = 403.1452949398549;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23020892&rd=14739&pm=12075
********************************************************************************
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
#define FOR(i,a)  for(int i = 0;i<a;i++)
#define REP(i,a,b)  for(int i = a;i<b;i++)
 
using namespace std;
 
class PillarsDivTwo {
public:
  double maximalLength(vector <int>, int);
};
 
double PillarsDivTwo::maximalLength(vector <int> h, int w) {
  double ansarray[51][101] = {{0}};
  double maxanswer = 0;
  REP(i,1,h.size())
  {
    REP(j,1,h[i-1]+1)
    {
      REP(k,1,h[i]+1)
      {
          ansarray[i][k] = max(ansarray[i][k],ansarray[i-1][j] + sqrt(w*w + (j-k)*(j-k)));
          maxanswer = max(maxanswer,ansarray[i][k]);
      }
    }
  }
  return maxanswer;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/