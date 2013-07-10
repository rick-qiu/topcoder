/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1945
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

class CombinationLock {
public:
    double degreesTurned(vector<int> combo, int size, int start);
};

double CombinationLock::degreesTurned(vector<int> combo, int size, int start) {
    double ret;
    return ret;
}


int test0() {
    vector<int> combo = {10, 20, 30};
    int size = 40;
    int start = 6;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 2556.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> combo = {0, 50, 99};
    int size = 100;
    int start = 65;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 2642.4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> combo = {18, 74, 43};
    int size = 77;
    int start = 22;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 2814.5454545454545;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> combo = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 10;
    int start = 5;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 79344.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> combo = {64, 93, 87, 3, 22, 53, 64, 53, 11, 90, 11, 59, 30, 6, 11, 17, 72, 0, 38, 55};
    int size = 97;
    int start = 26;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 79166.59793814432;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> combo = {64, 93, 87, 3, 22, 53, 64, 53, 11, 90, 11, 59, 30, 6, 11, 17, 72, 0, 38, 55};
    int size = 97;
    int start = 65;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 79381.85567010309;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> combo = {9, 40, 79, 78, 33, 16, 11, 7, 41, 88, 6, 48, 85, 80, 88, 64, 96, 79, 66, 69, 2, 17, 8, 54};
    int size = 99;
    int start = 23;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 111949.0909090909;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> combo = {31, 15, 57, 21, 9, 31, 20, 35, 28};
    int size = 60;
    int start = 25;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 18198.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> combo = {12, 21, 87, 40, 61, 50, 3, 24, 82, 62, 43, 25, 62, 25};
    int size = 90;
    int start = 36;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 40380.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> combo = {38, 7, 24, 1, 36, 16, 48, 3, 31, 2, 3, 2, 26, 48, 28, 7, 53, 60, 11, 35, 8, 42, 23, 54, 17, 46, 40, 10, 27, 38, 34, 6, 48, 60, 10, 23, 15, 58, 29, 49, 1, 32, 53};
    int size = 61;
    int start = 24;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 348432.7868852459;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> combo = {44, 24, 57, 27, 9, 44, 75, 54, 31, 61, 65, 3, 46, 77};
    int size = 83;
    int start = 70;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 40311.32530120482;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> combo = {7, 9, 4, 10, 6, 1, 6, 10, 3};
    int size = 11;
    int start = 9;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 18065.454545454544;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> combo = {57, 28, 8, 6, 7, 8, 3, 1, 58, 38, 40, 2, 64, 68, 54, 33, 30, 13, 6, 30, 10, 43, 30, 42, 17, 9, 47, 4, 49, 45, 46, 36, 15, 55, 54, 22, 5, 69, 23};
    int size = 70;
    int start = 42;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 288036.00000000006;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> combo = {25, 0, 3, 23, 5, 16, 26, 15, 8, 4, 24, 22, 5, 1, 19, 24, 12, 11, 24, 17, 1, 7};
    int size = 27;
    int start = 13;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 94559.99999999999;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> combo = {5, 6, 1, 9, 8, 4, 0, 10, 9, 3, 6, 0};
    int size = 11;
    int start = 10;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 30436.363636363636;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> combo = {2, 24, 32, 74, 8, 47, 76};
    int size = 85;
    int start = 35;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 11181.176470588234;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> combo = {64, 44, 39, 10, 23, 47, 35, 30, 63, 38, 33, 70, 61};
    int size = 71;
    int start = 59;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 35112.67605633802;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> combo = {29, 64, 9, 12, 53, 33, 11, 35, 69, 29, 41, 79, 51, 24, 5, 71, 37, 54, 9, 17, 58, 30, 47, 69, 64, 25, 46, 81};
    int size = 89;
    int start = 41;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 151681.34831460673;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> combo = {29, 57, 22, 12, 48, 14, 49, 4, 1, 46, 42, 36, 34, 57, 54, 14, 25, 11, 60, 10, 35, 3, 65, 34, 67, 70, 29, 43, 61, 70, 53, 67, 29, 52, 5, 54, 43, 54, 58, 45, 26, 45, 6, 37, 60, 38, 51, 10};
    int size = 75;
    int start = 33;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 432911.99999999994;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> combo = {48, 15, 29, 78, 20, 64, 9, 73, 24, 64, 30, 35, 73, 14, 7, 38, 66, 13, 28, 82, 43, 24, 21, 8, 37, 44, 75, 38, 36, 28, 45, 41, 44, 74, 75, 20, 10, 0, 10, 35, 21, 40, 26, 10, 12, 33, 4};
    int size = 84;
    int start = 50;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 414180.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> combo = {2, 22, 31, 27, 2, 27, 24, 30, 5, 10, 5, 3, 19, 35, 28, 2, 19, 29, 20, 34, 19, 11, 35, 13, 19, 6, 24, 20, 7, 35, 30, 25, 19};
    int size = 38;
    int start = 32;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 207918.94736842107;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> combo = {60, 69, 8, 35, 40, 1, 53, 29, 48};
    int size = 74;
    int start = 38;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 17591.351351351354;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> combo = {4, 68, 28, 53, 59, 69, 38, 16, 41, 79};
    int size = 84;
    int start = 59;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 21420.000000000004;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> combo = {60, 0, 66, 17, 4, 63, 30, 21, 20, 24, 47, 22, 9, 64};
    int size = 69;
    int start = 43;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 40690.4347826087;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> combo = {17, 2, 21, 8, 11, 22, 7, 1};
    int size = 35;
    int start = 30;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 14214.857142857145;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> combo = {54, 35, 16, 1, 21, 25, 39, 50, 18, 13, 31, 5, 44, 51, 31, 57, 7, 31, 27, 28, 46, 43, 12, 5, 24, 13, 10, 25, 27, 14, 17, 18, 47, 33, 17};
    int size = 63;
    int start = 57;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 232965.71428571423;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> combo = {3, 4, 19, 46, 64, 23, 71, 55, 60, 73, 20, 25};
    int size = 77;
    int start = 15;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 30389.61038961039;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> combo = {34, 2, 1, 7, 47, 54, 6, 9, 24, 14, 1, 29, 7, 23, 33, 22, 12, 49};
    int size = 56;
    int start = 20;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 65140.71428571428;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> combo = {2, 22, 31, 27, 2, 27, 24, 30, 5, 10, 5, 3, 19, 35, 28, 2, 19, 29, 20, 34, 19, 11, 35, 13, 19, 6, 24, 20, 7, 35, 30, 25, 19};
    int size = 38;
    int start = 32;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 207918.94736842107;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> combo = {60, 69, 8, 35, 40, 1, 53, 29, 48};
    int size = 74;
    int start = 38;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 17591.351351351354;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> combo = {4, 68, 28, 53, 59, 69, 38, 16, 41, 79};
    int size = 84;
    int start = 59;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 21420.000000000004;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> combo = {60, 0, 66, 17, 4, 63, 30, 21, 20, 24, 47, 22, 9, 64};
    int size = 69;
    int start = 43;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 40690.4347826087;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> combo = {17, 2, 21, 8, 11, 22, 7, 1};
    int size = 35;
    int start = 30;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 14214.857142857145;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> combo = {54, 35, 16, 1, 21, 25, 39, 50, 18, 13, 31, 5, 44, 51, 31, 57, 7, 31, 27, 28, 46, 43, 12, 5, 24, 13, 10, 25, 27, 14, 17, 18, 47, 33, 17};
    int size = 63;
    int start = 57;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 232965.71428571423;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> combo = {5, 6, 2, 0, 8, 0, 4, 5, 6, 3, 7, 5, 10, 0, 8, 4, 2, 4, 5, 7, 9, 6, 7, 1, 4, 2, 3, 1, 3, 9, 1, 7, 4, 1, 7, 1, 2, 9, 4, 7, 0};
    int size = 11;
    int start = 0;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 316505.45454545453;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> combo = {3, 4, 19, 46, 64, 23, 71, 55, 60, 73, 20, 25};
    int size = 77;
    int start = 15;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 30389.61038961039;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> combo = {34, 2, 1, 7, 47, 54, 6, 9, 24, 14, 1, 29, 7, 23, 33, 22, 12, 49};
    int size = 56;
    int start = 20;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 65140.71428571428;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> combo = {64, 93, 87, 3, 22, 53, 64, 53, 11, 90, 11, 59, 30, 6, 11, 17, 72, 0, 38, 55};
    int size = 97;
    int start = 26;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 79166.59793814432;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> combo = {0, 50, 99};
    int size = 100;
    int start = 65;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 2642.4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> combo = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 10;
    int start = 5;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 79344.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> combo = {10, 20, 30};
    int size = 40;
    int start = 6;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 2556.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> combo = {64, 93, 87, 3, 22, 53, 64, 53, 11, 90, 11, 59, 30, 6, 11, 17, 72, 0, 38, 55};
    int size = 97;
    int start = 96;
    CombinationLock* pObj = new CombinationLock();
    clock_t start = clock();
    double result = pObj->degreesTurned(combo, size, start);
    clock_t end = clock();
    delete pObj;
    double expected = 79266.80412371134;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=270505&rd=4725&pm=1945
********************************************************************************
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cstdio>
#include <algorithm>
using namespace std;
 
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vd vector<double>
#define vll vector<ll>
#define fo(x,y) for((x)=0;(x)<(y);(x)++)
#define fi fo(i,n)
#define fj fo(j,n)
#define fk fo(k,n)
#define fr(x,y,z) for((x)=(y);(x)<(z);(x)++)
#define pb push_back
#define sz size()
#define cs c_str()
#define ins(x) insert(x)
#define dub (double)
#define df double
 
class CombinationLock { public: df degreesTurned(vi f, int size,int start) {
int n=f.size();
int turn=0;
int i,j,k,dir=1;
fi {
  turn+=size*(n-i);
  if (dir==1) 
    turn+=(3*size+f[i]-start)%size;
  else
    turn+=(3*size+start-f[i])%size;
  start=f[i];
  dir=-dir;
}
return 360.0*turn/size;
}};

********************************************************************************
*******************************************************************************/