/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12074
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

class RelativelyPrimeSubset {
public:
    int findSize(vector<int> S);
};

int RelativelyPrimeSubset::findSize(vector<int> S) {
    int ret;
    return ret;
}


int test0() {
    vector<int> S = {2, 3, 7, 11, 4};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
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
    vector<int> S = {4, 8, 12, 16};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> S = {100, 17, 81, 82};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> S = {2, 3, 4, 5, 6};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> S = {1, 7, 49, 14};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> S = {1, 2};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
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
    vector<int> S = {1};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
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
    vector<int> S = {1, 100};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> S = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> S = {34, 1, 13, 70, 35, 25, 23, 92, 79, 68, 12, 96, 46, 63, 48, 24, 39, 58, 72, 5, 100, 91, 60, 17, 74, 3, 22, 83, 93, 37, 27, 38, 6, 82, 36, 69, 30, 89, 45, 59, 43, 54, 4, 62, 95, 7, 28, 65, 42, 19};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> S = {87, 1, 37, 21, 58, 49, 19, 11, 3, 30, 32, 42, 35, 69, 56, 91, 92, 97, 89, 38, 51, 31, 14, 84, 46, 82, 23, 85, 25, 78, 63, 7, 13, 10, 54, 75, 59, 60, 98, 53, 96, 8, 88, 22, 74, 62, 67, 68, 100, 47};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> S = {1, 89, 18, 23, 35, 3, 2, 39, 43, 34, 83, 70, 24, 82, 86, 16, 45, 22, 91, 12, 13, 76, 93, 73, 80, 47, 87, 92, 99, 33, 11, 29, 100, 69, 52, 77, 62, 26, 90, 30, 59, 57, 55, 27, 58, 17, 4, 10, 56, 63};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> S = {11, 24, 23, 62, 73, 93, 97, 30, 51, 100, 98, 94, 65, 45, 71, 4, 78, 26, 19, 35, 32, 6, 50, 3, 28, 74, 33, 55, 67, 25, 15, 88, 14, 34, 36, 43, 92, 75, 54, 69, 64, 46, 81, 82, 40, 44, 86, 87, 59, 60};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> S = {62, 24, 96, 83, 48, 5, 91, 54, 2, 21, 4, 79, 78, 38, 63, 41, 27, 75, 8, 94, 26, 61, 36, 97, 30, 88, 66, 29, 28, 40, 65, 87, 85, 14, 1, 52, 9, 6, 31, 89, 12, 17, 57, 25, 72, 3, 58, 64, 59, 51};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> S = {60, 70, 49, 80, 99, 12, 41, 18, 14, 57, 6, 51, 77, 96, 78, 35, 53, 76, 13, 74, 43, 91, 79, 71, 84, 55, 2, 44, 27, 19, 82, 25, 38, 98, 1, 42, 26, 22, 11, 56, 33, 32, 94, 90, 63, 89, 86, 97, 46, 73};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> S = {48, 72, 65, 44, 76, 41, 43, 2, 79, 90, 22, 85, 47, 28, 29, 9, 14, 50, 40, 46, 88, 92, 20, 19, 33, 6, 45, 53, 24, 66, 51, 38, 16, 49, 13, 11, 71, 10, 89, 4, 73, 23, 64, 70, 7, 5, 99, 86, 1, 63};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
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
    vector<int> S = {27, 9, 51, 38, 57, 95, 42, 63, 62, 29, 4, 56, 26, 73, 77, 31, 76, 53, 18, 65, 1, 49, 25, 10, 13, 5, 14, 34, 30, 54, 81, 74, 35, 83, 19, 66, 55, 17, 87, 6, 15, 16, 59, 39, 37, 94, 12, 32, 91, 7};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> S = {40, 34, 94, 57, 50, 1, 42, 55, 78, 89, 96, 54, 51, 77, 16, 91, 75, 90, 14, 33, 72, 27, 9, 24, 68, 69, 52, 88, 83, 65, 13, 6, 17, 79, 81, 67, 10, 11, 87, 80, 29, 22, 64, 74, 31, 99, 86, 85, 26, 30};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> S = {23, 24, 47, 99, 83, 38, 80, 49, 1, 55, 17, 8, 89, 64, 21, 22, 87, 59, 68, 60, 39, 67, 15, 97, 61, 52, 16, 34, 56, 29, 37, 50, 70, 26, 41, 79, 31, 19, 98, 93, 53, 63, 71, 100, 76, 48, 30, 62, 3, 35};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> S = {13, 65, 42, 59, 92, 3, 61, 67, 55, 6, 73, 9, 96, 56, 35, 95, 40, 10, 53, 20, 44, 68, 62, 23, 32, 80, 66, 5, 75, 63, 12, 94, 82, 27, 17, 60, 29, 11, 74, 83, 51, 69, 1, 86, 16, 90, 48, 78, 22, 24};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> S = {27, 91, 58, 88, 2, 12, 43, 46, 66, 29, 44, 19, 87, 28, 64, 82, 42, 96, 86, 73, 3, 84, 31, 15, 71, 78, 35, 83, 14, 11, 52, 65, 62, 70, 61, 59, 51, 80, 24, 68, 57, 99, 94, 4, 55, 50, 9, 39, 93, 38};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> S = {39, 9, 53, 26, 97, 93, 92, 83, 35, 74, 68, 20, 61, 91, 73, 27, 79, 12, 84, 98, 75, 50, 23, 4, 88, 86, 45, 80, 21, 57, 30, 8, 90, 6, 1, 78, 77, 41, 32, 55, 62, 11, 81, 72, 60, 19, 94, 25, 71, 100};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> S = {56, 41, 16, 34, 71, 53, 85, 69, 95, 12, 14, 30, 49, 9, 52, 94, 79, 88, 50, 48, 51, 81, 58, 70, 98, 73, 76, 46, 78, 37, 90, 84, 74, 45, 18, 92, 13, 15, 62, 63, 75, 17, 27, 83, 66, 44, 87, 23, 47, 8};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> S = {77, 69, 89, 11, 2, 36, 30, 82, 51, 21, 60, 59, 44, 10, 27, 18, 46, 62, 67, 73, 88, 75, 85, 97, 33, 91, 90, 66, 23, 48, 49, 100, 32, 64, 72, 13, 17, 16, 70, 54, 6, 98, 99, 7, 95, 79, 94, 56, 81, 74};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> S = {12, 73, 17, 69, 21, 83, 60, 48, 26, 80, 41, 88, 7, 6, 59, 44, 37, 63, 86, 77, 76, 75, 56, 82, 66, 3, 22, 52, 74, 9, 18, 2, 96, 94, 33, 34, 54, 98, 57, 72, 47, 85, 32, 5, 81, 65, 64, 14, 36, 62};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> S = {99, 79, 90, 71, 63, 15, 8, 30, 84, 21, 80, 66, 22, 72, 6, 24, 7, 29, 39, 94, 5, 68, 70, 95, 73, 58, 77, 48, 53, 34, 28, 45, 36, 27, 11, 41, 91, 97, 65, 56, 89, 98, 19, 43, 64, 35, 2, 46, 88, 54};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> S = {68, 25, 19, 9, 92, 26, 77, 6, 78, 42, 69, 98, 54, 81, 84, 57, 33, 96, 36, 20, 90, 10, 38, 4, 37, 61, 91, 75, 73, 82, 64, 2, 8, 62, 7, 76, 21, 29, 94, 56, 85, 83, 88, 39, 80, 35, 30, 52, 40, 31};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> S = {91, 57, 52, 1, 59, 45, 71, 34, 4, 49, 96, 27, 24, 79, 3, 72, 43, 92, 64, 90, 80, 39, 63, 6, 55, 26, 20, 23, 36, 100, 37, 89, 69, 58, 48, 42, 51, 84, 32, 86, 18, 70, 76, 46, 53, 68, 12, 94, 16, 73};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> S = {99, 79, 91, 44, 64, 82, 29, 63, 66, 58, 72, 81, 89, 17, 77, 87, 65, 20, 33, 93, 11, 80, 32, 52, 73, 36, 41, 49, 78, 68, 8, 96, 71, 42, 51, 54, 35, 21, 3, 74, 16, 84, 18, 4, 23, 53, 31, 50, 90, 12};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> S = {68, 15, 74, 27, 77, 53, 93, 41, 94, 39, 62, 56, 35, 18, 72, 59, 38, 80, 19, 70, 90, 6, 47, 29, 12, 99, 82, 32, 50, 37, 49, 28, 69, 71, 2, 76, 23, 60, 31, 91, 36, 48, 97, 4, 66, 100, 61, 24, 95, 34};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> S = {33, 93, 18, 29, 76, 36, 84, 82, 83, 56, 73, 11, 86, 10, 25, 19, 4, 91, 66, 37, 81, 75, 52, 74, 42, 6, 47, 40, 61, 48, 87, 2, 21, 72, 3, 63, 78, 51, 46, 26, 88, 38, 13, 99, 35, 79, 90, 22, 57, 28};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> S = {85, 69, 59, 5, 71, 98, 20, 35, 70, 60, 49, 65, 66, 19, 43, 99, 39, 87, 34, 55, 77, 91, 9, 10, 30, 25, 58, 67, 1, 63, 86, 94, 53, 44, 73, 45, 79, 13, 68, 42, 6, 28, 37, 16, 92, 78, 24, 22, 75, 8};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> S = {70, 3, 93, 88, 44, 13, 59, 54, 15, 20, 29, 55, 33, 48, 95, 24, 41, 90, 39, 4, 77, 52, 6, 85, 56, 92, 76, 60, 57, 72, 14, 23, 84, 71, 10, 8, 40, 63, 25, 73, 91, 30, 94, 74, 2, 62, 61, 12, 67, 42};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> S = {65, 44, 92, 75, 52, 18, 13, 68, 62, 17, 70, 73, 35, 9, 74, 10, 24, 54, 86, 76, 15, 78, 31, 42, 45, 67, 89, 4, 12, 38, 77, 64, 93, 33, 84, 3, 80, 5, 29, 11, 58, 90, 19, 96, 99, 88, 82, 1, 37, 47};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> S = {93, 79, 84, 95, 9, 63, 88, 75, 94, 97, 13, 67, 41, 54, 34, 52, 14, 47, 22, 89, 86, 45, 83, 98, 10, 71, 80, 61, 87, 55, 90, 96, 38, 44, 30, 39, 72, 36, 60, 35, 42, 59, 11, 18, 31, 62, 29, 7, 70, 58};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> S = {97, 60, 51, 86, 28, 40, 100, 27, 53, 22, 56, 13, 58, 30, 87, 81, 1, 23, 19, 94, 83, 49, 2, 64, 42, 65, 67, 33, 88, 41, 55, 44, 66, 76, 57, 71, 39, 35, 63, 89, 54, 96, 29, 5, 12, 14, 32, 24, 72, 45};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> S = {92, 73, 34, 85, 41, 59, 27, 96, 7, 12, 62, 1, 25, 35, 17, 47, 31, 5, 20, 94, 57, 51, 87, 13, 61, 68, 14, 2, 83, 95, 72, 28, 44, 26, 4, 79, 36, 78, 89, 42, 69, 60, 43, 99, 80, 90, 11, 16, 6, 38};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> S = {6, 88, 97, 94, 92, 12, 44, 45, 62, 40, 5, 67, 87, 49, 55, 27, 37, 42, 22, 100, 39, 4, 79, 68, 20, 24, 15, 47, 43, 48, 60, 93, 72, 2, 98, 51, 54, 13, 75, 50, 57, 69, 26, 85, 29, 19, 63, 21, 52, 18};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> S = {91, 12, 48, 52, 9, 42, 72, 28, 7, 23, 66, 39, 22, 45, 25, 98, 51, 37, 79, 89, 50, 86, 46, 18, 19, 53, 69, 56, 99, 11, 58, 32, 92, 6, 5, 3, 81, 90, 83, 44, 24, 59, 80, 57, 21, 64, 87, 15, 14, 34};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> S = {36, 61, 10, 7, 52, 22, 87, 91, 41, 13, 48, 70, 66, 30, 88, 17, 8, 31, 6, 92, 14, 34, 98, 38, 44, 83, 9, 50, 76, 16, 93, 55, 85, 78, 100, 57, 89, 54, 20, 27, 32, 86, 56, 46, 84, 5, 11, 63, 90, 1};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> S = {43, 76, 55, 7, 67, 26, 66, 6, 97, 91, 38, 18, 39, 37, 47, 86, 85, 48, 93, 51, 58, 32, 35, 99, 96, 10, 25, 13, 42, 28, 19, 50, 100, 29, 87, 62, 45, 24, 31, 98, 40, 61, 17, 68, 16, 94, 23, 56, 14, 54};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> S = {13, 68, 78, 85, 10, 91, 80, 1, 45, 70, 72, 48, 30, 43, 8, 44, 87, 23, 97, 20, 18, 40, 71, 62, 98, 27, 39, 63, 15, 65, 19, 96, 53, 14, 37, 5, 57, 47, 9, 51, 22, 77, 59, 58, 81, 76, 35, 7, 3, 2};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> S = {1, 53, 44, 35, 41, 5, 45, 58, 23, 17, 49, 60, 66, 16, 40, 47, 27, 37, 4, 72, 3, 38, 85, 76, 34, 25, 82, 28, 46, 18, 77, 50, 67, 97, 69, 75, 54, 2, 73, 6, 57, 33, 42, 26, 90, 19, 51, 65, 71, 92};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> S = {59, 49, 97, 85, 80, 16, 41, 55, 84, 67, 98, 56, 19, 18, 81, 64, 54, 91, 99, 62, 88, 90, 23, 30, 77, 8, 34, 7, 14, 47, 3, 12, 53, 32, 20, 43, 95, 71, 1, 46, 63, 58, 66, 33, 76, 40, 65, 68, 52, 11};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> S = {55, 58, 61, 41, 22, 76, 39, 64, 95, 84, 5, 94, 71, 29, 98, 91, 44, 89, 81, 23, 18, 8, 78, 15, 45, 53, 99, 43, 31, 80, 62, 2, 87, 32, 6, 34, 37, 3, 73, 48, 19, 86, 42, 56, 16, 7, 46, 82, 77, 20};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> S = {18, 97, 82, 11, 86, 47, 90, 36, 99, 14, 73, 71, 40, 79, 61, 17, 58, 23, 31, 84, 43, 66, 93, 92, 74, 20, 53, 77, 88, 21, 80, 60, 78, 3, 98, 46, 65, 76, 83, 87, 37, 81, 55, 12, 22, 6, 49, 89, 48, 70};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> S = {74, 7, 71, 20, 24, 72, 42, 18, 88, 32, 30, 100, 51, 9, 67, 48, 94, 3, 73, 80, 45, 66, 97, 89, 15, 91, 96, 56, 90, 60, 58, 16, 82, 8, 69, 28, 54, 79, 27, 6, 37, 34, 93, 86, 64, 63, 35, 14, 53, 62};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> S = {9, 40, 92, 14, 81, 83, 56, 75, 61, 90, 67, 35, 25, 27, 68, 87, 38, 59, 84, 10, 88, 32, 19, 79, 95, 45, 52, 21, 36, 47, 28, 57, 77, 26, 60, 2, 20, 73, 33, 93, 65, 48, 64, 80, 15, 3, 29, 91, 49, 24};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> S = {76, 77, 97, 60, 12, 61, 18, 19, 27, 49, 39, 22, 62, 35, 74, 34, 55, 8, 9, 100, 91, 73, 80, 38, 14, 75, 78, 4, 2, 54, 17, 36, 64, 3, 33, 30, 46, 96, 86, 29, 90, 45, 23, 93, 92, 89, 70, 21, 94, 13};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> S = {46, 11, 9, 48, 27, 83, 87, 73, 45, 41, 33, 63, 57, 72, 39, 88, 70, 16, 60, 79, 40, 50, 81, 67, 44, 97, 69, 1, 59, 49, 68, 100, 26, 34, 94, 65, 29, 6, 19, 24, 5, 37, 99, 31, 62, 91, 17, 4, 80, 66};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> S = {77, 53, 19, 99, 95, 67, 14, 48, 20, 78, 12, 94, 33, 85, 69, 55, 63, 46, 30, 22, 66, 54, 83, 72, 40, 61, 36, 35, 59, 43, 92, 6, 18, 100, 17, 60, 50, 73, 84, 86, 8, 45, 62, 51, 21, 93, 58, 71, 27, 37};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> S = {81, 86, 74, 82, 91, 67, 24, 72, 54, 32, 99, 89, 85, 14, 45, 78, 64, 76, 98, 97, 77, 18, 34, 30, 100, 36, 57, 71, 84, 55, 1, 52, 95, 7, 50, 42, 47, 39, 46, 59, 33, 70, 20, 21, 28, 27, 38, 37, 92, 49};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> S = {60, 68, 59, 48, 9, 26, 58, 7, 53, 83, 44, 51, 11, 66, 37, 47, 40, 27, 76, 29, 75, 39, 91, 1, 17, 71, 85, 12, 2, 93, 56, 81, 65, 16, 72, 46, 25, 67, 89, 18, 35, 13, 100, 62, 57, 49, 45, 64, 69, 30};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> S = {83, 31, 54, 27, 2, 28, 68, 93, 22, 57, 19, 18, 42, 30, 17, 81, 21, 44, 13, 34, 45, 84, 94, 49, 8, 96, 72, 7, 23, 32, 53, 64, 71, 92, 46, 16, 40, 62, 25, 65, 52, 95, 100, 67, 82, 36, 29, 43, 91, 70};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> S = {71, 60, 22, 80, 95, 73, 91, 26, 54, 30, 8, 79, 89, 24, 37, 63, 88, 43, 50, 44, 53, 66, 99, 51, 81, 72, 40, 48, 69, 52, 49, 25, 68, 76, 16, 47, 90, 39, 29, 86, 83, 45, 85, 4, 78, 61, 14, 27, 17, 82};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> S = {51, 52, 8, 13, 75, 50, 53, 76, 93, 84, 65, 17, 91, 41, 60, 36, 24, 22, 6, 25, 80, 68, 20, 56, 49, 83, 10, 2, 1, 69, 64, 7, 92, 94, 26, 30, 70, 96, 15, 57, 42, 88, 61, 85, 32, 12, 71, 35, 89, 37};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> S = {95, 39, 35, 2, 23, 84, 58, 68, 98, 82, 81, 73, 100, 80, 57, 83, 59, 52, 29, 66, 28, 69, 4, 65, 37, 53, 54, 44, 22, 67, 27, 21, 94, 41, 11, 25, 33, 99, 64, 24, 91, 34, 50, 45, 79, 19, 61, 97, 62, 88};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> S = {95, 56, 73, 16, 72, 46, 75, 53, 8, 20, 69, 90, 89, 77, 33, 79, 96, 50, 9, 55, 57, 68, 60, 43, 54, 28, 38, 71, 2, 70, 82, 93, 27, 74, 29, 59, 52, 12, 4, 49, 87, 66, 32, 39, 48, 100, 30, 58, 13, 6};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> S = {5, 60, 78, 46, 90, 33, 28, 21, 72, 62, 85, 22, 51, 93, 24, 14, 75, 87, 91, 83, 36, 19, 61, 29, 3, 20, 54, 70, 38, 6, 34, 94, 100, 50, 66, 59, 69, 55, 52, 82, 64, 53, 17, 16, 86, 80, 95, 47, 23, 44};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> S = {22, 45, 43, 17, 50, 27, 20, 28, 6, 33, 48, 29, 25, 32, 39, 13, 15, 42, 36, 9, 3, 4, 37, 5, 46, 12, 35, 19, 1, 18};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> S = {7, 2, 28, 44, 40, 30, 38, 45, 37, 27, 5, 22, 35, 39, 17, 31, 41, 6, 19, 16, 32, 24, 21, 33, 42, 9, 34, 49, 1, 47};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> S = {34, 4, 11, 50, 3, 46, 22, 21, 23, 39, 14, 49, 38, 42, 37, 1, 31, 25, 32, 9, 35, 6, 10, 8, 7, 28, 18, 13, 19, 47};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> S = {35, 23, 13, 12, 29, 40, 24, 6, 3, 47, 7, 42, 1, 41, 15, 43, 10, 31, 4, 8, 30, 32, 49, 44, 16, 37, 38, 39, 9, 19};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> S = {46, 26, 37, 44, 43, 13, 11, 8, 48, 17, 47, 4, 40, 15, 42, 24, 33, 20, 35, 38, 6, 27, 30, 22, 5, 19, 50, 36, 39, 18};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> S = {46, 45, 26, 24, 5, 4, 37, 11, 31, 10, 43, 23, 19, 3, 25, 6, 35, 50, 34, 15, 38, 28, 21, 44, 42, 40, 9, 36, 14, 48};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> S = {2, 38, 10, 9, 33, 35, 30, 29, 28, 27, 22, 3, 1, 37, 17, 45, 15, 26, 8, 44, 36, 20, 24, 25, 19, 21, 41, 16, 11, 46};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> S = {20, 38, 11, 7, 28, 27, 4, 16, 36, 12, 8, 13, 23, 17, 2, 41, 6, 25, 9, 29, 24, 5, 18, 14, 1, 47, 22, 35, 40, 44};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> S = {42, 2, 27, 6, 39, 32, 3, 24, 1, 13, 10, 43, 34, 5, 14, 49, 21, 30, 28, 41, 35, 38, 7, 44, 26, 25, 22, 47, 12, 29};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> S = {10, 49, 2, 26, 37, 22, 16, 32, 38, 21, 29, 15, 48, 41, 28, 11, 5, 25, 50, 4, 9, 30, 18, 35, 7, 42, 43, 14, 12, 34};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> S = {23, 21, 4, 41, 39, 13, 10, 45, 50, 43, 2, 32, 19, 36, 3, 9, 46, 44, 24, 16, 48, 20, 11, 28, 38, 29, 1, 40, 14, 33};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> S = {33, 26, 27, 13, 39, 35, 24, 2, 42, 6, 44, 12, 49, 41, 14, 3, 5, 31, 43, 47, 45, 15, 37, 30, 50, 16, 23, 38, 32, 7};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> S = {36, 21, 15, 5, 12, 40, 3, 16, 46, 38, 4, 9, 24, 49, 25, 43, 35, 11, 20, 22, 33, 14, 10, 23, 44, 29, 32, 27, 1, 39};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> S = {27, 26, 46, 25, 14, 24, 41, 15, 34, 31, 19, 22, 6, 10, 36, 49, 30, 18, 32, 50, 9, 17, 44, 1, 42, 37, 4, 29, 35, 38};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> S = {43, 20, 19, 34, 37, 9, 7, 48, 44, 42, 49, 41, 39, 46, 26, 17, 5, 15, 8, 35, 47, 30, 10, 13, 32, 38, 24, 40, 23, 3};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> S = {42, 24, 25, 6, 38, 26, 35, 29, 15, 50, 16, 5, 12, 8, 22, 34, 39, 21, 11, 48, 31, 44, 14, 20, 43, 47, 37, 49, 13, 1};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> S = {12, 1, 9, 45, 46, 44, 42, 40, 16, 6, 30, 22, 13, 48, 17, 32, 27, 19, 5, 36, 20, 23, 25, 24, 10, 28, 33, 11, 3, 15};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> S = {28, 49, 47, 9, 12, 24, 4, 22, 21, 48, 20, 33, 46, 26, 36, 39, 37, 29, 19, 44, 34, 32, 7, 25, 41, 23, 35, 42, 27, 13};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> S = {23, 33, 29, 39, 35, 18, 15, 37, 46, 2, 38, 41, 32, 4, 34, 1, 11, 30, 28, 19, 8, 14, 16, 21, 43, 24, 20, 9, 42, 27};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> S = {38, 34, 9, 26, 29, 24, 48, 43, 45, 50, 40, 32, 49, 16, 42, 36, 3, 20, 1, 41, 12, 25, 13, 39, 2, 5, 15, 44, 33, 31};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> S = {42, 29, 52, 57, 71, 31, 41, 43, 7, 81, 12, 37, 19, 11, 72, 33, 77, 17, 49, 68, 92, 55, 87, 63, 4, 65, 80, 95, 27, 13, 51, 26, 5, 32, 16, 9, 82, 86, 67, 93, 59, 74, 84, 14, 98, 15, 89, 40, 94, 73};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> S = {52, 29, 42, 57, 71, 31, 41, 43, 37, 23, 12, 7, 19, 11, 72, 33, 77, 17, 49, 28, 5, 55, 68, 87, 93, 46, 80, 95, 27, 13, 51, 26, 92, 32, 16, 9, 82, 86, 89, 4, 74, 59, 69, 14, 97, 15, 73, 21, 1, 67};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> S = {52, 19, 29, 57, 90, 31, 41, 13, 17, 23, 72, 7, 42, 11, 49, 85, 77, 37, 55, 9, 5, 12, 26, 87, 93, 43, 15, 95, 27, 46, 51, 68, 33, 32, 16, 28, 82, 86, 89, 4, 74, 14, 69, 59, 97, 80, 73, 99, 1, 67};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> S = {52, 19, 29, 57, 90, 31, 41, 13, 17, 23, 27, 7, 42, 11, 49, 85, 77, 37, 55, 9, 95, 88, 26, 87, 93, 43, 15, 5, 72, 3, 51, 68, 33, 32, 16, 91, 82, 86, 2, 4, 74, 14, 69, 59, 97, 80, 73, 99, 1, 67};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> S = {7, 19, 29, 57, 41, 31, 38, 13, 17, 23, 27, 52, 98, 11, 49, 85, 77, 37, 55, 9, 95, 88, 26, 87, 93, 43, 39, 5, 2, 3, 51, 68, 33, 32, 16, 91, 82, 86, 72, 4, 74, 14, 69, 59, 97, 80, 73, 99, 1, 67};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> S = {7, 19, 29, 25, 41, 31, 38, 13, 17, 23, 27, 52, 98, 11, 49, 77, 5, 37, 55, 9, 95, 88, 43, 87, 93, 26, 39, 85, 2, 3, 51, 68, 33, 32, 86, 91, 82, 16, 72, 4, 74, 69, 14, 59, 97, 80, 73, 99, 1, 67};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> S = {43, 19, 29, 25, 41, 31, 38, 13, 17, 23, 27, 69, 98, 11, 49, 7, 5, 37, 55, 9, 95, 88, 77, 87, 2, 26, 39, 85, 93, 3, 57, 68, 81, 32, 86, 91, 82, 16, 99, 4, 74, 52, 14, 59, 97, 80, 73, 72, 1, 67};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> S = {43, 19, 29, 25, 41, 31, 85, 13, 17, 23, 27, 69, 91, 11, 49, 7, 5, 37, 55, 9, 95, 14, 77, 87, 2, 26, 39, 38, 93, 3, 57, 68, 81, 32, 72, 98, 82, 16, 99, 4, 74, 52, 86, 59, 97, 80, 73, 88, 1, 67};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> S = {43, 19, 29, 25, 41, 31, 85, 13, 17, 23, 27, 69, 91, 11, 49, 7, 5, 37, 55, 9, 95, 14, 77, 87, 2, 26, 39, 38, 93, 3, 57, 68, 81, 32, 94, 98, 82, 16, 99, 4, 74, 52, 86, 59, 97, 80, 73, 88, 1, 67};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> S = {43, 19, 29, 25, 41, 31, 85, 13, 17, 23, 57, 69, 91, 11, 49, 7, 5, 37, 55, 9, 95, 35, 77, 87, 2, 26, 39, 38, 93, 3, 27, 68, 81, 32, 74, 48, 82, 16, 99, 4, 94, 52, 86, 59, 97, 80, 73, 88, 1, 67};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> S = {43, 19, 29, 25, 41, 31, 85, 13, 17, 23, 57, 69, 91, 47, 49, 7, 5, 37, 55, 9, 95, 35, 77, 87, 2, 8, 39, 38, 93, 82, 27, 68, 81, 32, 74, 48, 3, 16, 99, 4, 94, 63, 86, 59, 97, 80, 73, 88, 1, 67};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> S = {13, 85, 29, 25, 41, 31, 19, 43, 17, 23, 57, 69, 91, 47, 49, 7, 5, 37, 55, 9, 95, 35, 77, 38, 2, 8, 11, 87, 93, 82, 27, 86, 88, 32, 74, 79, 4, 39, 99, 3, 94, 64, 68, 59, 97, 34, 73, 81, 1, 67};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> S = {13, 85, 29, 25, 41, 31, 5, 43, 17, 23, 27, 69, 91, 47, 49, 7, 19, 37, 55, 9, 95, 35, 77, 93, 2, 11, 8, 81, 86, 82, 3, 57, 88, 32, 64, 4, 79, 39, 99, 38, 94, 74, 51, 59, 97, 89, 73, 87, 1, 67};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> S = {1, 70, 78, 11, 17, 23, 29, 67, 71, 79, 83, 89, 19, 61, 42};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> S = {21, 7, 3, 13};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> S = {73, 79, 83, 89, 97, 1, 2, 3, 5, 6, 8, 10, 23, 29, 31, 37, 30, 32, 34, 27, 7, 11, 13, 17, 19, 41, 43, 47, 53, 59, 12, 61, 67, 71, 99, 98, 96, 94, 92, 90, 88, 86, 84, 40, 46, 56, 60, 62, 66};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> S = {4, 8, 12, 16};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> S = {30, 10, 14, 21, 42, 63, 70, 2, 3, 7, 1, 5};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> S = {100, 1, 81, 82};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> S = {2, 5, 15, 25, 35};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> S = {2, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> S = {1, 2, 3, 4, 5};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> S = {100, 98, 70, 30};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> S = {1, 3, 5, 7, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 51, 52, 53, 54, 55, 56};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> S = {6, 10, 21};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> S = {12, 24, 6, 7, 14, 97, 1};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> S = {2, 3, 9, 27};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> S = {2, 24};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> S = {2, 3, 4, 9};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> S = {16, 8, 4, 2, 1};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> S = {6, 2, 3, 36, 1};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> S = {6, 9, 10};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> S = {30, 32, 55, 81, 7};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> S = {14, 7};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> S = {42, 68, 35, 1, 70, 25, 79};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> S = {1};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> S = {3, 4, 8};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> S = {15, 39, 55};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> S = {59, 63, 65, 6, 46, 82, 28};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> S = {2, 4, 6, 9, 15};
    RelativelyPrimeSubset* pObj = new RelativelyPrimeSubset();
    clock_t start = clock();
    int result = pObj->findSize(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=23067703&rd=14739&pm=12074
********************************************************************************
#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <list> 
#include <map> 
#include <cmath> 
using namespace std; 
 
 
//[\u26368][\u22823][\u22242] 
//[\u36820][\u22238][\u26368][\u22823][\u22242][\u22823][\u23567][\u21644][\u19968][\u20010][\u26041][\u26696],[\u20256][\u20837][\u22270][\u30340][\u22823][\u23567]n[\u21644][\u37051][\u25509][\u38453]mat 
//mat[i][j][\u20026][\u24067][\u23572][\u37327] 
const int MAXN = 60; 
 
void clique(int n, int * u, const bool mat[][MAXN], int size, int & max, int & bb, int * res, int * rr, int * c) { 
  int i, j, vn, v[MAXN]; 
  if (n) { 
    if (size + c[u[0]] <= max) { 
      return ; 
    } 
    for (i = 0; i < n + size - max && i < n; ++i) { 
      for (j = i + 1, vn = 0; j < n; ++j) { 
        if (mat[u[i]][u[j]]) { 
          v[vn++] = u[j]; 
        } 
      } 
      rr[size] = u[i]; 
      clique(vn, v, mat, size + 1, max, bb, res, rr, c); 
      if (bb) { 
        return ; 
      }  
    } 
  } else if (size > max) { 
    max = size; 
    for (i = 0; i < size; ++i) { 
      res[i] = rr[i]; 
    } 
    bb = 1; 
  } 
} 
 
int maxclique(int n, const bool mat[][MAXN], int * ret) { 
  int max = 0, bb, c[MAXN], i, j; 
  int vn, v[MAXN], rr[MAXN]; 
  for (c[i = n - 1] = 0; i >= 0; --i) { 
    vn = 0; 
    for (j = i + 1; j < n; ++j) { 
      if (mat[i][j]) { 
        v[vn++] = j; 
      } 
    } 
    bb = 0; 
    rr[0] = i; 
    clique(vn, v, mat, 1, max, bb, ret, rr, c); 
    c[i] = max; 
  } 
  return max; 
} 
 
 
int gcd(int a, int b) { 
  int t; 
  if (a < 0) { 
    a = -a; 
  } 
  if (b < 0) { 
    b = -b; 
  } 
  if (!b) { 
    return a; 
  }  
  while (t = a % b) { 
    a = b; 
    b = t; 
  } 
  return b; 
} 
 
 
bool relativeprim(int a, int b) 
{ 
  return gcd(a,b)==1; 
} 
 
 
class RelativelyPrimeSubset{ 
public: 
  int findSize(vector <int> S) 
  { 
    int size = S.size(); 
    bool mat[MAXN][MAXN]; 
    for( int i =0; i< size; i++) 
      for( int j =0; j< size; j++) 
        mat[i][j] = relativeprim(S[i], S[j]); 
    int tmp[100]; 
    return maxclique(size, mat, tmp); 
 
  } 
};

********************************************************************************
*******************************************************************************/