/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10469
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

class PerfectPermutationHard {
public:
    vector<int> reorder(vector<int> P);
};

vector<int> PerfectPermutationHard::reorder(vector<int> P) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> P = {2, 0, 1};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> P = {4, 0, 5, 2, 1, 3};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 5, 4, 1, 3};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> P = {2, 7, 3, 0, 6, 4, 5, 1};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 3, 0, 6, 2, 5, 4};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> P = {11, 8, 10, 1, 5, 4, 0, 7, 3, 9, 12, 6, 2};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 8, 10, 2, 5, 7, 0, 9, 3, 11, 12, 6, 4};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> P = {0, 1, 4, 2, 3, 5};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 5, 3, 0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> P = {0, 2, 6, 5, 7, 3, 1, 4};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 6, 5, 7, 4, 3, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> P = {1, 0, 7, 19, 10, 9, 23, 14, 21, 8, 13, 11, 6, 5, 18, 17, 3, 22, 2, 15, 20, 4, 16, 12};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 7, 19, 10, 9, 23, 14, 21, 8, 13, 20, 11, 5, 18, 17, 4, 22, 3, 15, 0, 6, 16, 12};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> P = {1, 2, 3, 4, 0};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> P = {10, 9, 6, 7, 1, 2, 5, 0, 8, 3, 4};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 9, 6, 7, 1, 8, 5, 0, 10, 3, 4};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> P = {10, 0, 8, 14, 28, 5, 7, 11, 2, 39, 24, 12, 25, 6, 16, 27, 38, 17, 32, 9, 20, 18, 35, 23, 1, 13, 34, 36, 19, 31, 22, 33, 4, 15, 30, 37, 29, 26, 3, 21};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 8, 14, 28, 6, 7, 11, 3, 39, 24, 12, 25, 15, 16, 27, 38, 20, 32, 9, 22, 18, 35, 10, 1, 13, 34, 36, 19, 31, 23, 33, 5, 17, 30, 37, 29, 26, 4, 21};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> P = {4, 5, 0, 7, 1, 2, 3, 6};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 0, 7, 1, 2, 4, 6};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> P = {2, 7, 14, 19, 21, 8, 36, 16, 17, 9, 29, 6, 5, 33, 0, 13, 10, 22, 26, 4, 1, 25, 30, 23, 3, 24, 32, 34, 35, 20, 27, 31, 11, 28, 12, 15, 18};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 14, 19, 21, 8, 36, 16, 17, 13, 29, 9, 6, 33, 0, 23, 10, 22, 26, 4, 3, 25, 30, 31, 5, 24, 32, 34, 35, 20, 27, 2, 11, 28, 12, 15, 18};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> P = {25, 7, 30, 4, 38, 11, 2, 35, 22, 36, 28, 26, 6, 39, 0, 33, 12, 21, 1, 3, 24, 29, 32, 19, 40, 9, 5, 14, 8, 16, 17, 37, 15, 10, 13, 34, 27, 31, 23, 18, 20};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 30, 4, 38, 11, 3, 35, 22, 36, 28, 26, 6, 39, 0, 33, 12, 21, 2, 5, 24, 29, 32, 19, 40, 9, 8, 14, 20, 16, 17, 37, 15, 10, 13, 34, 27, 25, 23, 18, 31};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> P = {17, 8, 7, 11, 13, 16, 9, 18, 21, 0, 19, 5, 15, 14, 20, 6, 3, 10, 1, 12, 22, 2, 4};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 8, 7, 11, 13, 16, 9, 18, 21, 0, 19, 5, 15, 14, 20, 6, 4, 10, 3, 12, 22, 2, 17};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> P = {3, 37, 2, 24, 34, 40, 6, 42, 11, 31, 39, 21, 25, 16, 38, 43, 22, 46, 8, 36, 29, 18, 26, 45, 7, 35, 27, 13, 10, 17, 1, 28, 33, 20, 4, 12, 44, 30, 0, 9, 5, 19, 14, 41, 15, 23, 32};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 37, 4, 24, 34, 40, 8, 42, 11, 31, 39, 21, 25, 16, 38, 43, 22, 46, 9, 36, 29, 18, 26, 45, 7, 35, 27, 15, 10, 23, 2, 28, 33, 20, 5, 13, 44, 30, 0, 12, 6, 19, 14, 41, 17, 3, 32};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> P = {18, 12, 14, 24, 13, 25, 3, 10, 23, 21, 4, 16, 20, 5, 19, 22, 17, 8, 15, 2, 9, 1, 0, 11, 6, 7};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 12, 14, 24, 13, 25, 4, 10, 23, 21, 8, 16, 20, 5, 19, 22, 17, 18, 15, 3, 9, 2, 0, 11, 6, 7};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> P = {2, 18, 0, 16, 17, 6, 23, 1, 25, 20, 19, 15, 14, 4, 11, 12, 22, 13, 7, 8, 24, 21, 3, 5, 9, 10};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 18, 0, 16, 17, 6, 23, 3, 25, 20, 19, 15, 14, 5, 21, 12, 22, 13, 7, 9, 24, 2, 4, 8, 11, 10};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> P = {3, 4, 0, 1, 2};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 0, 1, 2};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> P = {7, 18, 2, 10, 8, 4, 17, 1, 15, 19, 14, 3, 9, 11, 6, 5, 12, 13, 16, 0};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 18, 3, 10, 8, 7, 17, 1, 15, 19, 14, 4, 9, 11, 6, 5, 12, 13, 16, 0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> P = {1, 0, 6, 2, 16, 14, 3, 15, 10, 13, 17, 4, 11, 5, 9, 12, 7, 8};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 6, 4, 16, 14, 3, 15, 10, 13, 17, 5, 11, 8, 9, 12, 7, 0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> P = {0};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> P = {0, 1, 4, 3, 8, 6, 2, 5, 7};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 0, 8, 6, 3, 5, 7};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> P = {41, 26, 22, 8, 10, 6, 18, 35, 33, 42, 30, 27, 21, 0, 19, 36, 25, 15, 5, 14, 7, 13, 11, 16, 4, 39, 1, 40, 45, 32, 38, 44, 28, 34, 29, 20, 17, 12, 24, 23, 2, 46, 9, 43, 31, 3, 37};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 26, 22, 8, 10, 6, 18, 35, 33, 42, 30, 27, 21, 0, 19, 36, 25, 16, 7, 15, 9, 13, 11, 31, 5, 39, 2, 40, 45, 32, 38, 44, 28, 34, 29, 20, 17, 12, 24, 23, 3, 46, 14, 41, 43, 4, 37};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> P = {25, 16, 17, 15, 47, 7, 22, 4, 21, 44, 32, 30, 5, 48, 19, 28, 31, 20, 38, 26, 13, 45, 42, 24, 23, 40, 41, 1, 9, 18, 33, 36, 10, 43, 11, 6, 27, 14, 29, 34, 0, 37, 8, 39, 49, 35, 46, 12, 2, 3};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 16, 17, 15, 47, 7, 22, 6, 21, 44, 32, 30, 5, 48, 19, 28, 31, 20, 38, 26, 13, 45, 42, 24, 46, 40, 41, 2, 9, 23, 33, 36, 11, 43, 14, 10, 27, 18, 29, 34, 0, 37, 8, 39, 49, 35, 25, 12, 3, 4};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> P = {3, 8, 7, 1, 6, 14, 5, 12, 0, 4, 2, 10, 11, 9, 13};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 8, 7, 1, 6, 14, 5, 12, 0, 3, 4, 10, 11, 9, 13};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> P = {17, 16, 1, 7, 24, 14, 26, 15, 28, 19, 33, 23, 3, 30, 0, 34, 25, 21, 6, 11, 9, 8, 2, 13, 32, 22, 18, 10, 5, 31, 20, 12, 27, 4, 29};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 16, 3, 7, 24, 14, 26, 15, 28, 19, 33, 23, 4, 30, 0, 34, 25, 21, 9, 11, 17, 8, 2, 13, 32, 22, 18, 10, 5, 31, 20, 12, 27, 6, 29};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> P = {7, 8, 11, 16, 6, 0, 3, 10, 14, 2, 5, 12, 9, 4, 1, 13, 15};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 8, 11, 16, 6, 0, 7, 10, 14, 3, 5, 12, 9, 4, 2, 13, 15};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> P = {1, 3, 9, 6, 4, 7, 8, 5, 2, 0};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 9, 4, 5, 7, 8, 6, 2, 0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> P = {10, 8, 16, 14, 20, 12, 3, 13, 11, 9, 2, 4, 19, 0, 17, 15, 7, 5, 18, 6, 1};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 8, 16, 14, 20, 12, 9, 13, 11, 15, 2, 4, 19, 0, 17, 18, 7, 5, 10, 6, 3};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> P = {1, 2, 0, 5, 3, 4};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5, 0, 4};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> P = {10, 12, 23, 7, 11, 16, 6, 15, 20, 25, 4, 2, 22, 17, 26, 3, 5, 13, 9, 14, 8, 19, 21, 0, 24, 18, 1};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 12, 23, 7, 11, 16, 8, 15, 20, 25, 4, 2, 22, 17, 26, 5, 6, 24, 13, 14, 9, 19, 21, 0, 10, 18, 3};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> P = {1, 2, 0, 4, 3};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> P = {3, 14, 16, 23, 0, 24, 21, 17, 8, 7, 18, 6, 15, 20, 19, 2, 12, 5, 13, 4, 22, 10, 11, 1, 9};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 14, 16, 23, 0, 24, 21, 17, 3, 7, 18, 8, 15, 20, 19, 5, 12, 6, 13, 4, 22, 10, 11, 1, 9};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> P = {0, 14, 22, 13, 20, 4, 26, 25, 36, 11, 18, 37, 10, 35, 28, 32, 16, 15, 24, 21, 5, 34, 38, 30, 12, 31, 2, 27, 3, 33, 17, 7, 23, 29, 8, 1, 9, 19, 6};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 14, 22, 13, 20, 7, 26, 25, 36, 11, 18, 37, 15, 35, 28, 32, 27, 16, 24, 21, 5, 34, 38, 30, 12, 31, 4, 29, 3, 33, 17, 8, 23, 0, 10, 2, 9, 19, 6};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> P = {8, 4, 1, 5, 7, 9, 2, 3, 0, 6};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 8, 5, 7, 9, 2, 3, 0, 6};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> P = {13, 19, 18, 17, 9, 22, 30, 21, 15, 32, 20, 36, 5, 0, 28, 24, 7, 6, 31, 10, 26, 23, 27, 25, 16, 8, 37, 11, 33, 12, 3, 4, 35, 14, 2, 34, 29, 1};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 19, 18, 17, 9, 22, 30, 21, 15, 32, 20, 36, 7, 0, 28, 24, 14, 6, 31, 10, 26, 23, 27, 25, 16, 8, 37, 11, 33, 12, 5, 4, 35, 13, 3, 34, 29, 2};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> P = {11, 10, 7, 20, 17, 12, 14, 13, 21, 24, 16, 5, 6, 2, 0, 15, 19, 18, 4, 26, 8, 22, 23, 3, 9, 1, 25};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 10, 7, 20, 17, 12, 14, 13, 21, 24, 16, 5, 6, 3, 0, 11, 19, 18, 9, 26, 8, 22, 23, 4, 15, 2, 25};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> P = {25, 2, 21, 15, 9, 6, 5, 13, 7, 23, 10, 18, 3, 4, 17, 12, 8, 1, 19, 24, 26, 22, 14, 16, 11, 20, 0};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 21, 15, 9, 6, 10, 13, 7, 23, 11, 18, 4, 5, 17, 12, 8, 3, 19, 24, 26, 22, 14, 16, 25, 20, 0};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> P = {33, 15, 31, 38, 40, 37, 43, 17, 10, 20, 44, 36, 41, 16, 42, 26, 32, 30, 28, 21, 29, 27, 1, 34, 14, 3, 19, 22, 6, 2, 35, 25, 23, 0, 13, 24, 39, 5, 9, 11, 8, 12, 7, 18, 4};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 15, 31, 38, 40, 37, 43, 17, 10, 20, 44, 36, 41, 16, 42, 26, 32, 30, 28, 21, 29, 27, 2, 34, 14, 3, 19, 22, 7, 4, 35, 25, 23, 0, 33, 24, 39, 6, 9, 12, 8, 13, 11, 18, 5};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> P = {3, 15, 5, 6, 0, 12, 8, 17, 9, 10, 14, 7, 13, 2, 4, 11, 16, 1};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 15, 5, 6, 0, 12, 8, 17, 9, 10, 14, 7, 13, 16, 4, 11, 3, 2};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> P = {17, 4, 26, 9, 18, 30, 21, 28, 5, 20, 23, 33, 6, 15, 3, 31, 2, 19, 25, 16, 7, 24, 10, 35, 12, 32, 0, 11, 14, 27, 8, 22, 34, 29, 1, 13};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 26, 9, 18, 30, 21, 28, 6, 20, 23, 33, 10, 15, 5, 31, 2, 19, 25, 16, 7, 24, 11, 35, 12, 32, 0, 17, 14, 27, 8, 22, 34, 29, 3, 13};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> P = {31, 42, 9, 35, 0, 32, 2, 7, 43, 18, 37, 22, 23, 30, 13, 14, 20, 15, 38, 33, 19, 16, 11, 44, 41, 27, 26, 21, 3, 4, 17, 40, 28, 36, 24, 10, 25, 5, 6, 12, 29, 34, 1, 8, 39};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 42, 9, 35, 0, 32, 3, 8, 43, 18, 37, 22, 23, 30, 16, 14, 20, 15, 38, 33, 19, 24, 12, 44, 41, 27, 31, 21, 7, 4, 17, 40, 28, 36, 26, 10, 25, 5, 6, 13, 29, 34, 2, 11, 39};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> P = {15, 6, 18, 21, 9, 23, 7, 8, 3, 0, 2, 12, 27, 13, 17, 20, 10, 4, 5, 25, 14, 22, 1, 16, 11, 24, 26, 19};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 6, 18, 21, 9, 23, 7, 8, 3, 0, 11, 12, 27, 26, 17, 20, 10, 4, 5, 25, 14, 22, 2, 16, 13, 24, 15, 19};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> P = {0};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> P = {9, 11, 5, 6, 12, 2, 7, 3, 1, 0, 4, 10, 8};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 11, 5, 6, 12, 3, 7, 9, 2, 0, 4, 10, 8};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> P = {3, 14, 21, 17, 2, 20, 22, 6, 11, 13, 10, 16, 5, 19, 15, 9, 23, 18, 8, 1, 7, 4, 12, 0};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 14, 21, 17, 5, 20, 22, 6, 11, 13, 3, 16, 10, 19, 15, 9, 23, 18, 8, 2, 7, 4, 12, 0};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> P = {37, 16, 13, 34, 20, 39, 5, 15, 22, 12, 7, 4, 17, 23, 32, 21, 25, 30, 27, 6, 36, 28, 9, 11, 2, 38, 0, 1, 10, 35, 8, 14, 33, 19, 29, 3, 24, 26, 18, 31};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 16, 13, 34, 20, 39, 7, 15, 22, 12, 8, 4, 17, 23, 32, 21, 25, 30, 27, 6, 36, 28, 9, 11, 3, 38, 0, 2, 10, 35, 37, 14, 33, 19, 29, 5, 24, 26, 18, 31};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> P = {19, 25, 23, 13, 11, 14, 5, 20, 17, 21, 27, 8, 3, 4, 15, 2, 0, 12, 10, 28, 9, 24, 29, 1, 22, 6, 18, 26, 16, 7, 30};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 25, 23, 13, 11, 14, 5, 20, 17, 21, 27, 8, 7, 4, 15, 2, 0, 12, 30, 28, 9, 24, 29, 3, 22, 6, 18, 26, 16, 10, 19};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> P = {8, 15, 4, 2, 7, 1, 17, 6, 13, 5, 12, 10, 0, 11, 3, 9, 18, 14, 19, 20, 16};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 15, 4, 16, 7, 2, 17, 6, 13, 5, 12, 10, 0, 11, 3, 9, 18, 14, 19, 20, 8};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> P = {9, 5, 8, 2, 0, 10, 4, 1, 11, 3, 7, 6};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 8, 2, 0, 10, 4, 9, 11, 3, 7, 6};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> P = {10, 1, 31, 7, 5, 3, 0, 4, 35, 16, 24, 6, 18, 15, 12, 34, 11, 14, 32, 2, 30, 27, 17, 29, 9, 20, 23, 33, 22, 36, 25, 19, 28, 26, 8, 13, 21};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 31, 7, 5, 8, 0, 4, 35, 16, 24, 6, 18, 15, 20, 34, 11, 14, 32, 3, 30, 27, 17, 29, 9, 21, 23, 33, 22, 36, 25, 19, 28, 26, 12, 13, 10};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> P = {20, 5, 14, 17, 6, 8, 4, 18, 2, 1, 24, 15, 16, 10, 9, 21, 3, 0, 7, 23, 12, 11, 19, 13, 22};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 14, 17, 6, 8, 7, 18, 2, 4, 24, 15, 16, 11, 9, 21, 3, 0, 10, 23, 12, 20, 19, 13, 22};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> P = {2, 0, 1};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 1};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> P = {5, 15, 32, 9, 36, 6, 34, 29, 1, 41, 33, 2, 20, 47, 13, 48, 45, 18, 16, 43, 26, 35, 11, 21, 40, 8, 7, 25, 22, 12, 31, 46, 30, 27, 49, 3, 4, 24, 37, 17, 38, 42, 23, 14, 0, 39, 28, 19, 10, 44};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 15, 32, 9, 36, 6, 34, 29, 2, 41, 33, 3, 20, 47, 16, 48, 45, 18, 24, 43, 26, 35, 11, 21, 40, 8, 13, 25, 22, 12, 31, 46, 30, 27, 49, 4, 7, 5, 37, 17, 38, 42, 23, 14, 0, 39, 28, 19, 10, 44};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> P = {14, 1, 17, 4, 2, 19, 7, 12, 0, 16, 5, 3, 9, 13, 8, 6, 15, 11, 20, 18, 10};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 17, 4, 5, 19, 7, 12, 0, 16, 6, 3, 9, 14, 8, 13, 15, 11, 20, 18, 10};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> P = {44, 43, 0, 5, 15, 28, 2, 4, 6, 38, 33, 39, 46, 27, 26, 7, 12, 36, 14, 18, 20, 41, 42, 35, 34, 13, 17, 25, 29, 21, 22, 24, 10, 16, 23, 37, 19, 40, 9, 1, 31, 3, 8, 11, 30, 32, 45};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 43, 0, 5, 15, 28, 2, 9, 6, 38, 33, 39, 46, 27, 26, 7, 12, 36, 20, 18, 23, 41, 42, 35, 34, 14, 17, 25, 29, 21, 22, 24, 13, 16, 44, 37, 19, 40, 10, 3, 31, 4, 8, 11, 30, 32, 45};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> P = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> P = {49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 49, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> P = {1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14, 17, 16, 19, 18, 21, 20, 23, 22, 25, 24, 27, 26, 29, 28, 31, 30, 33, 32, 35, 34, 37, 36, 39, 38, 41, 40, 43, 42, 45, 44, 47, 46, 49, 48};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> P = {49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 49, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> P = {0};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> P = {4, 0, 5, 2, 1, 3};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 5, 4, 1, 3};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> P = {11, 8, 10, 1, 5, 4, 0, 7, 3, 9, 12, 6, 2};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 8, 10, 2, 5, 7, 0, 9, 3, 11, 12, 6, 4};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> P = {0, 1, 4, 2, 3, 5};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 5, 3, 0};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> P = {0, 2, 6, 5, 7, 3, 1, 4};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 6, 5, 7, 4, 3, 0};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> P = {2, 7, 3, 0, 6, 4, 5, 1};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 3, 0, 6, 2, 5, 4};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> P = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> P = {9, 8, 6, 1, 2, 7, 3, 4, 5, 0};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 8, 6, 9, 2, 7, 3, 4, 5, 0};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> P = {2, 0, 1};
    PerfectPermutationHard* pObj = new PerfectPermutationHard();
    clock_t start = clock();
    vector<int> result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 1};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22693771&rd=13749&pm=10469
********************************************************************************
#include <vector> 
#include <string> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
#define FOR(start,by,stop) for(int by = (start);by < (int)(stop);++by) 
#define ROF(start,by,stop) for(int by = (start);by > (int)(stop);--by) 
 
using namespace std; 
 
class PerfectPermutationHard 
{ 
public: 
    vector <int> reorder(vector <int> P) 
    { 
      //Calculate presence 
      vector<bool> present(P.size(), false); 
      int current = 0; 
      FOR(0,i,P.size()) 
      { 
        cerr << "Found: " << current << endl; 
        present[current] = true; 
        current = P[current]; 
      } 
 
      //Calculate value to index 
      vector<int> valueToIndex(P.size(), 0); 
      FOR(0,i,P.size()) 
      { 
        valueToIndex[P[i]] = i; 
      } 
 
      FOR(0,i,P.size()) 
      { 
        cerr << "present[" << i << "] = " << present[i] << " "; 
      } 
      cerr << endl; 
      FOR(0,i,P.size()) 
      { 
        cerr << i << ": " << valueToIndex[i] << endl; 
      } 
      cerr << endl; 
 
      //Do the swaps 
    int last = -1; 
      FOR(0,i,P.size()) 
      { 
        if(!present[i]) 
        { 
          cerr << "trying to insert: " << i << endl; 
          //Find position 
          if(last == -1) 
          { 
            last = 0; 
              while(P[last] < i && P[last] != 0) 
              { 
                last = P[last]; 
              } 
          } 
 
          //Insert 
          swap(P[last], P[valueToIndex[i]]); 
          last = valueToIndex[i]; 
 
          //Fix permutation 
          int temp = 0; 
            FOR(0,i,P.size()) 
            { 
              present[temp] = true; 
              temp = P[temp]; 
 
              cerr << "P[" << i << "] = " << P[i] << " [" << present[i] << "]" << endl; 
            } 
        } 
      } 
 
    FOR(0,i,P.size()) 
    { 
      cerr << P[i] << " "; 
    } 
    cerr << endl; 
 
      return P; 
    } 
 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/