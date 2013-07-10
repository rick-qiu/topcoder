/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10007
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

class RoyalTreasurer {
public:
    int minimalArrangement(vector<int> A, vector<int> B);
};

int RoyalTreasurer::minimalArrangement(vector<int> A, vector<int> B) {
    int ret;
    return ret;
}


int test0() {
    vector<int> A = {1, 1, 3};
    vector<int> B = {10, 30, 20};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {1, 1, 1, 6, 0};
    vector<int> B = {2, 7, 8, 3, 1};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> A = {5, 15, 100, 31, 39, 0, 0, 3, 26};
    vector<int> B = {11, 12, 13, 2, 3, 4, 5, 9, 1};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 528;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {3, 100, 99, 100, 100};
    vector<int> B = {0, 31, 99, 1, 21};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 5566;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> A = {100};
    vector<int> B = {0};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {0};
    vector<int> B = {0};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {1};
    vector<int> B = {1};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {100};
    vector<int> B = {100};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> B = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> B = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 27, 22, 58, 48, 96, 17, 66, 59, 76};
    vector<int> B = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 51, 89, 27, 3, 68, 26, 63, 71, 87, 68, 17, 90, 66, 69, 0, 86, 72, 22, 98, 29};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 71487;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {52, 34, 69, 21, 18, 5, 51, 58, 85, 94, 96, 98, 72, 22, 21, 85, 21, 14, 79, 3};
    vector<int> B = {42, 0, 49, 62, 82, 77, 66, 77, 35, 74, 24, 72, 9, 31, 1, 11, 71, 70, 74, 72};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 32777;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {57, 38, 62, 72, 97, 27, 71, 2, 82, 85, 59, 61, 95, 30, 55, 63, 25, 62, 54, 5, 77, 29, 14, 66, 35, 54, 39, 25, 71, 88};
    vector<int> B = {82, 81, 0, 16, 76, 13, 11, 59, 87, 47, 26, 37, 92, 66, 35, 30, 48, 29, 91, 96, 8, 34, 4, 21, 23, 7, 97, 3, 28, 4};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 42818;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {87, 41, 23, 19, 44, 85, 0, 79, 3, 98, 32, 7, 41, 64, 57, 42, 78, 46, 4, 18, 96, 63, 78, 10, 42, 84, 94, 27, 18, 6, 51, 78, 37, 52, 21, 87, 64, 57, 19, 96, 83, 51, 25, 17, 66, 14, 12, 47, 42, 51};
    vector<int> B = {25, 59, 33, 63, 3, 72, 84, 63, 64, 88, 13, 23, 97, 80, 60, 6, 52, 93, 6, 6, 34, 93, 31, 50, 51, 91, 75, 52, 70, 31, 95, 32, 25, 13, 85, 61, 16, 11, 44, 59, 28, 57, 54, 93, 60, 88, 35, 7, 66, 80};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 80309;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {75, 53, 0, 99, 37, 97, 91, 39, 64, 7, 13, 89, 49, 50, 28, 53, 41, 30, 65, 24, 56, 86, 99, 97, 48, 75, 70, 19, 92, 100, 58, 90, 43, 97, 91, 25, 30, 13, 37, 59, 3, 70, 96};
    vector<int> B = {18, 14, 25, 75, 10, 1, 15, 36, 64, 41, 97, 64, 99, 37, 10, 33, 2, 41, 12, 76, 50, 99, 61, 52, 16, 53, 22, 6, 31, 83, 60, 95, 8, 98, 10, 47, 77, 63, 62, 50, 88, 100, 84};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 78517;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {75, 82, 44, 35, 36, 97, 30, 92, 25, 16, 70, 27, 81, 12, 94, 17, 21, 88, 40, 44, 17, 24, 49, 51, 22, 16, 85, 0, 83, 25, 82, 26, 44, 70, 59, 93, 58, 70, 61, 35, 16, 95, 70, 25, 97, 52, 41, 28, 42};
    vector<int> B = {34, 72, 55, 19, 82, 49, 20, 82, 84, 70, 78, 22, 89, 3, 18, 77, 68, 48, 11, 90, 33, 62, 70, 26, 25, 85, 24, 5, 46, 62, 89, 7, 84, 29, 95, 56, 48, 38, 86, 44, 64, 2, 39, 2, 6, 72, 88, 49, 45};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 84418;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {6, 6, 8, 0, 1, 4, 6, 9, 8, 8, 2, 2, 10, 7, 8, 10, 8, 7, 7, 5, 9, 1, 2, 9, 5, 4, 6, 10, 2};
    vector<int> B = {4, 6, 6, 6, 7, 8, 5, 4, 8, 8, 6, 8, 7, 6, 1, 1, 0, 8, 7, 3, 1, 4, 1, 7, 10, 10, 0, 3, 4};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 638;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {0, 2, 1, 4, 1, 4, 1, 1, 4, 0, 3, 4, 2, 0, 1, 2, 2, 3, 1, 4, 3, 3, 4, 3, 3, 1, 0, 0, 0, 2, 4, 3, 3, 3, 3, 4, 4, 4, 1, 2, 2, 1, 3, 3, 4, 1, 2, 4, 4};
    vector<int> B = {1, 3, 4, 3, 0, 0, 4, 4, 1, 0, 1, 3, 2, 3, 2, 0, 3, 2, 1, 3, 2, 2, 2, 1, 4, 2, 0, 4, 4, 2, 1, 1, 2, 4, 4, 4, 4, 0, 4, 3, 0, 4, 3, 4, 3, 2, 3, 3, 1};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 175;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {36, 1, 42, 22, 5, 46, 31, 34, 8, 49, 21, 0, 12, 35, 29, 37, 16, 2, 43, 19, 17, 24, 47, 11, 4, 20, 26, 27, 3, 10, 30, 32, 23, 9, 40, 48, 7, 45, 33, 28, 18, 6, 41, 15, 25, 13, 38, 39, 44, 14};
    vector<int> B = {9, 12, 28, 32, 12, 42, 48, 33, 12, 7, 43, 7, 13, 43, 13, 41, 47, 15, 6, 6, 38, 15, 46, 32, 20, 22, 3, 31, 16, 29, 26, 2, 20, 32, 33, 20, 12, 12, 44, 34, 30, 24, 31, 25, 42, 22, 38, 18, 30, 46};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 21398;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {9, 12, 28, 32, 12, 42, 48, 33, 12, 7, 43, 7, 13, 43, 13, 41, 47, 15, 6, 6, 38, 15, 46, 32, 20, 22, 3, 31, 16, 29, 26, 2, 20, 32, 33, 20, 12, 12, 44, 34, 30, 24, 31, 25, 42, 22, 38, 18, 30, 46};
    vector<int> B = {36, 1, 42, 22, 5, 46, 31, 34, 8, 49, 21, 0, 12, 35, 29, 37, 16, 2, 43, 19, 17, 24, 47, 11, 4, 20, 26, 27, 3, 10, 30, 32, 23, 9, 40, 48, 7, 45, 33, 28, 18, 6, 41, 15, 25, 13, 38, 39, 44, 14};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 21398;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {9, 12, 28, 32, 12, 42, 48, 33, 12, 7, 43, 7, 13, 43, 13, 41, 47, 15, 6, 6, 38, 15, 46, 32, 20, 22, 3, 31, 16, 29, 26, 2, 20, 32, 33, 20, 12, 12, 44, 34, 30, 24, 31, 25, 42, 22, 38, 18, 30, 46};
    vector<int> B = {89, 12, 28, 32, 12, 42, 48, 33, 12, 7, 43, 7, 13, 43, 13, 41, 47, 15, 6, 6, 38, 15, 46, 32, 20, 22, 3, 31, 16, 29, 26, 2, 20, 32, 33, 20, 12, 12, 44, 34, 30, 24, 31, 25, 42, 22, 38, 18, 30, 46};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 24135;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {46, 58, 10, 35, 31, 91, 17, 45, 43, 5, 54, 25, 46, 49, 47, 7, 41, 81, 11, 33, 64, 44, 45, 30, 67, 13, 72, 90, 22, 62, 57, 78, 18, 22, 16, 28, 65, 36, 78, 66, 29, 75, 43, 48, 40, 52, 66, 89, 98, 50};
    vector<int> B = {13, 0, 13, 24, 49, 11, 21, 20, 19, 17, 22, 20, 49, 14, 9, 22, 35, 18, 38, 37, 7, 17, 45, 11, 5, 9, 1, 2, 25, 31, 22, 22, 31, 36, 37, 45, 36, 10, 27, 40, 49, 17, 21, 44, 19, 27, 20, 1, 19, 3};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 36926;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {0, 7, 6, 1, 4, 5, 6, 0};
    vector<int> B = {1, 5, 2, 3, 4, 3, 7, 2};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    vector<int> B = {17, 3, 14, 7, 0, 5, 6, 1, 11, 9, 10, 8, 12, 13, 16, 15, 4, 2};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 816;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {40, 12, 34, 20, 6, 16, 18, 8, 28, 24, 26, 22, 30, 32, 38, 36, 14, 10};
    vector<int> B = {2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 8478;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {6, 7, 1, 1, 14, 99, 23, 3};
    vector<int> B = {1, 2, 9, 7, 8, 98, 33, 33};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 583;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    vector<int> B = {30, 9, 4, 0, 27, 8, 21, 16, 0, 33, 3, 7, 7, 14, 3, 13, 33, 13, 11, 12};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {0, 2};
    vector<int> B = {0, 1};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {89, 2};
    vector<int> B = {5, 16};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 477;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1};
    vector<int> B = {0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1};
    vector<int> B = {1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1};
    vector<int> B = {0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {47, 20, 76, 40, 87, 86, 49, 84, 57, 4, 50, 37, 75, 33, 26, 20, 84, 40, 42, 53};
    vector<int> B = {38, 54, 25, 53, 41, 0, 47, 10, 64, 50, 18, 8, 47, 7, 1, 39, 54, 57, 56, 31};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 25779;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {2, 3, 0, 0, 1, 1, 2, 1, 2, 3, 4, 1, 1, 2, 1, 1, 4, 2, 1, 4, 2, 0, 4, 4, 1, 1, 0, 3, 3, 0, 0, 3, 1, 2, 1, 3, 0, 1, 4, 3, 4, 2, 4};
    vector<int> B = {60, 41, 75, 91, 100, 98, 28, 50, 82, 96, 44, 28, 10, 17, 18, 40, 32, 60, 5, 80, 85, 65, 12, 10, 35, 60, 9, 80, 43, 36, 63, 43, 53, 31, 87, 92, 79, 16, 89, 4, 61, 23, 80};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2547;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {2, 4, 1, 4, 3, 0, 3, 0, 4, 3, 1, 0, 3, 0, 0, 2, 4, 4, 4, 2, 2, 1, 3, 1, 4, 4, 1, 3, 2, 1, 3, 1, 1, 2, 3, 1, 2, 4, 0, 4, 3, 0, 1, 1, 0, 0, 3, 1, 1, 1};
    vector<int> B = {54, 7, 39, 97, 25, 3, 71, 28, 88, 4, 42, 53, 60, 48, 79, 6, 44, 29, 60, 12, 22, 36, 97, 26, 13, 32, 76, 12, 21, 96, 67, 22, 5, 95, 7, 27, 79, 81, 10, 41, 92, 65, 52, 24, 11, 36, 66, 17, 5, 26};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2157;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {0, 48, 10, 34, 13, 1, 2, 14, 44, 16, 4, 23, 45, 11, 14, 25, 3, 41, 18, 0, 49, 22, 6, 42, 46, 36, 18, 23, 5, 36, 40, 30, 23, 3, 49, 22, 20, 17, 13, 47, 1, 13, 8, 18, 5, 37, 17, 31, 35};
    vector<int> B = {51, 12, 36, 9, 0, 17, 67, 51, 25, 7, 66, 1, 62, 10, 27, 24, 44, 43, 5, 28, 9, 66, 60, 43, 33, 68, 34, 25, 19, 7, 36, 23, 28, 1, 20, 28, 44, 8, 16, 52, 38, 34, 59, 68, 67, 41, 66, 35, 33};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 20851;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {61, 74, 72, 79, 58, 30, 75, 32, 85, 95, 38, 97, 66, 76, 54, 97, 73, 8, 9, 29, 68, 64, 94, 48, 32, 22, 38};
    vector<int> B = {9, 73, 48, 56, 23, 83, 6, 29, 4, 17, 70, 56, 67, 61, 62, 91, 65, 68, 57, 47, 55, 7, 26, 41, 23, 23, 2};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 50453;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {5, 4, 5, 6, 7, 5, 0, 5};
    vector<int> B = {1, 6, 4, 7, 5, 4, 8, 4};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 154;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {5, 4, 3, 0, 6, 4, 2, 6, 1};
    vector<int> B = {8, 0, 7, 5, 6, 5, 7, 8, 3};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {44, 70, 16, 16, 29, 38, 60, 23, 46};
    vector<int> B = {18, 25, 7, 7, 12, 8, 10, 26, 12};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3752;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> A = {6, 0, 15, 20, 0, 5, 13, 8, 7, 19};
    vector<int> B = {18, 14, 23, 5, 12, 24, 21, 20, 12, 19};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1192;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> A = {1, 1, 2, 1, 0, 2, 0, 3, 3, 3, 0, 2, 0, 3, 1, 2};
    vector<int> B = {1, 2, 1, 1, 2, 1, 0, 1, 2, 1, 2, 0, 0, 1, 2, 0};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> A = {2, 1, 3, 2, 0, 3, 0, 5, 5, 5, 0, 3, 0, 4, 2, 3, 3, 5, 2, 3, 5, 3};
    vector<int> B = {1, 3, 6, 3, 6, 1, 1, 4, 5, 2, 2, 5, 2, 0, 1, 3, 0, 1, 1, 1, 0, 0};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> A = {1, 0, 1, 1, 0, 1, 0, 2, 2, 2, 0, 1, 0, 2, 1, 1, 1, 2, 1, 1, 2, 1, 0, 1, 2, 1, 2, 0, 0, 1, 2, 0, 1, 2, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 2, 2, 2, 0, 2};
    vector<int> B = {2, 2, 2, 0, 1, 1, 1, 1, 2, 2, 1, 1, 0, 0, 2, 2, 2, 0, 1, 0, 2, 1, 2, 0, 0, 1, 0, 0, 1, 2, 1, 1, 2, 2, 0, 0, 2, 2, 0, 0, 1, 0, 1, 0, 2, 0, 1, 2, 2};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> A = {14, 10, 23, 17, 2, 22, 0, 33, 33, 33, 4, 24, 0, 31, 13, 21, 20, 38, 14, 25, 34, 25, 8, 22, 38, 19, 37, 6, 9, 22, 31, 12, 13, 28, 13, 0, 10, 18, 4, 6, 9, 8, 0, 1, 28, 29, 30, 0, 30};
    vector<int> B = {37, 26, 26, 2, 15, 24, 14, 13, 31, 28, 25, 18, 6, 5, 38, 27, 36, 11, 20, 1, 31, 24, 26, 1, 12, 23, 9, 8, 22, 34, 15, 16, 26, 33, 5, 12, 31, 28, 3, 0, 22, 12, 17, 7, 31, 8, 23, 36, 36};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 10543;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> A = {36, 25, 58, 45, 6, 57, 1, 86, 84, 83, 11, 63, 0, 79, 34, 53, 51, 98, 37, 65, 88, 65, 21, 55, 97, 50, 94, 15, 24, 56, 80, 31, 35, 72, 33, 0, 26, 46, 11, 16, 24, 22, 0, 3, 72, 75, 76};
    vector<int> B = {1, 60, 76, 54, 53, 5, 31, 48, 28, 27, 64, 57, 52, 38, 12, 11, 78, 56, 74, 22, 41, 3, 63, 48, 54, 2, 26, 47, 19, 16, 46, 69, 32, 32, 54, 67, 10, 25, 64, 57, 6, 0, 46, 24, 35, 15, 64};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 52128;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> A = {1, 60, 76, 54, 53, 5, 31, 48, 28, 27, 64, 57, 52, 38, 12, 11, 78, 56, 74, 22, 41, 3, 63, 48, 54, 2, 26, 47, 19, 16, 46, 69, 32, 32, 54, 67, 10, 25, 64, 57, 6, 0, 46, 24, 35, 15, 64};
    vector<int> B = {36, 25, 58, 45, 6, 57, 1, 86, 84, 83, 11, 63, 0, 79, 34, 53, 51, 98, 37, 65, 88, 65, 21, 55, 97, 50, 94, 15, 24, 56, 80, 31, 35, 72, 33, 0, 26, 46, 11, 16, 24, 22, 0, 3, 72, 75, 76};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 52128;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> A = {1, 1, 3};
    vector<int> B = {10, 30, 20};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> A = {54, 40, 43, 10, 98, 35, 52, 7, 48, 96, 7, 41, 97, 29, 35, 34, 12, 57, 41, 12, 60, 61, 7, 42, 33, 44, 98, 60, 78, 57, 65, 98, 97, 7, 7, 60, 8, 26, 67, 22, 21, 40, 63, 85, 35, 64, 18, 47, 88, 25};
    vector<int> B = {59, 47, 52, 32, 89, 85, 76, 53, 11, 19, 9, 76, 17, 72, 49, 91, 98, 57, 16, 30, 80, 4, 70, 8, 89, 4, 39, 73, 18, 26, 64, 43, 39, 15, 76, 27, 67, 17, 46, 78, 37, 21, 19, 54, 59, 68, 44, 56, 91, 27};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 74948;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> A = {1, 1, 1, 6, 0};
    vector<int> B = {2, 7, 8, 3, 1};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> A = {99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99};
    vector<int> B = {99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 9, 99, 99, 99};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 481140;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> A = {1, 2, 3};
    vector<int> B = {3, 2, 1};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    vector<int> B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 58};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 11498;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    vector<int> B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 11480;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 477;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 22100;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> A = {1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 23, 2, 2, 3, 3, 3, 3, 32, 3, 3, 3, 3, 1, 1, 1, 1, 4, 56, 7, 82, 3, 3, 4, 5, 3, 3, 7, 23, 23, 23, 23, 23, 54, 45, 56, 67, 89, 65, 34, 23};
    vector<int> B = {1, 2, 3, 4, 5, 67, 8, 5, 34, 23, 4, 4, 33, 23, 54, 3, 5, 5, 3, 3, 54, 23, 78, 8, 56, 4, 4, 5, 6, 7, 45, 4, 23, 2, 4, 5, 6, 7, 89, 5, 4, 4, 3, 5, 6, 7, 89, 5, 3, 2};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3202;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 67, 88, 99, 45, 68, 78, 78, 90, 87, 65, 45, 67, 66, 45, 46};
    vector<int> B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 23, 45, 67, 58, 56, 59, 13, 25, 46, 99, 87, 87, 67, 56, 78, 76, 76, 76, 54, 54, 34, 56, 45, 15, 46, 78, 98, 98, 78, 76, 5, 4, 4, 56, 7, 8, 89, 65};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 33494;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> A = {7, 8, 5, 4, 100};
    vector<int> B = {5, 3, 1, 8, 14};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 255;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> A = {33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 45, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 3, 4, 5, 6, 7, 8, 9, 7, 6, 54, 45, 45, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54};
    vector<int> B = {54, 54, 54, 54, 54, 54, 54, 65, 65, 65, 56, 65, 65, 65, 56, 65, 56, 56, 56, 65, 65, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 65, 56, 65, 56, 56, 56, 56, 56, 56, 56, 56, 65, 56};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 101486;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> A = {2, 2, 2, 3, 1};
    vector<int> B = {10, 10, 10, 10, 10};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> A = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> B = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> A = {12, 21, 33, 49, 54, 61, 72, 82, 92, 1, 1, 2, 3, 4, 5, 6, 7, 81, 9, 0, 1, 2, 3, 4, 5, 6, 1, 2, 42, 53, 61, 7, 8, 1, 2, 3, 1, 2, 3, 1, 2, 3, 15, 2, 34, 16, 25, 31, 32, 43};
    vector<int> B = {1, 22, 33, 4, 5, 1, 2, 3, 4, 5, 1, 2, 7, 8, 6, 22, 3, 4, 34, 34, 51, 4, 54, 3, 4, 3, 2, 3, 3, 2, 4, 3, 2, 3, 67, 65, 4, 34, 2, 42, 42, 23, 34, 45, 87, 44, 23, 54, 72, 1};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3377;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    vector<int> B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 4960;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> A = {7, 8, 5, 4, 100, 1, 2, 3, 4, 5, 6, 4, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 8, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 36, 36, 37, 8, 39, 40, 5, 55, 55, 54, 58};
    vector<int> B = {5, 3, 1, 8, 14, 35, 4, 6, 6, 6, 6, 6, 6, 6, 5, 5, 64, 46, 75, 46, 46, 46, 6, 6, 6, 6, 47, 87, 8, 7, 7, 7, 7, 7, 8, 9, 7, 7, 7, 8, 7, 7, 7, 7, 8, 9, 0, 0, 9, 8};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 7046;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    RoyalTreasurer* pObj = new RoyalTreasurer();
    clock_t start = clock();
    int result = pObj->minimalArrangement(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1540;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22673753&rd=13695&pm=10007
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
 
using namespace std;
 
class RoyalTreasurer {
public:
  int minimalArrangement(vector <int>, vector <int>);
};
 
int RoyalTreasurer::minimalArrangement(vector <int> A, vector <int> B) {
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  int res = 0;
  for(int i=0;i<A.size();++i)
    res+=A[i]*B[A.size()-i-1];
  return res;
}

********************************************************************************
*******************************************************************************/