/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7751
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

class NormalizingTrees {
public:
    vector<int> normalize(vector<int> tree);
};

vector<int> NormalizingTrees::normalize(vector<int> tree) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> tree = {2, 0, -1, 4, 2, 4};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 4};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> tree = {-1, 0, 1, 2, 3};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 1, 2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> tree = {3, 3, 3, 4, -1, 3};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> tree = {10, 9, 6, 10, 6, 9, 7, -1, 9, 7, 7, 10, 6};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 5, 5, 5, 6, 6, 6};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> tree = {-1, 0, 0, 0, 0, 1, 1, 5, 5, 5, 6, 6, 6};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 5, 5, 5, 6, 6, 6};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> tree = {1, -1};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> tree = {-1};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> tree = {-1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> tree = {43, 13, 41, 29, 36, 2, 17, -1, 18, 0, 3, 42, 10, 5, 17, 3, 42, 42, 30, 24, 10, 1, 41, 7, 10, 47, 16, 19, 8, 41, 0, 40, 24, 7, 29, 41, 7, 3, 34, 34, 38, 36, 23, 42, 45, 18, 3, 24, 28, 36};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 6, 6, 9, 9, 9, 9, 10, 10, 11, 12, 14, 14, 14, 18, 20, 21, 21, 21, 21, 22, 22, 22, 25, 26, 27, 27, 28, 29, 31, 32, 38, 38, 42, 44, 44, 45, 46, 47};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> tree = {7, 3, 8, 14, 5, 3, 3, 8, -1, 11, 3, 0, 3, 19, 7, 3, 14, 19, 9, 2, 7};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 8, 8, 8, 11, 12, 14, 15, 16, 16, 17};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> tree = {9, 7, -1, 2, 1, 2, 11, 2, 7, 2, 7, 3, 1, 7};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 6, 7, 11};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> tree = {6, 45, 27, 12, 40, 15, -1, 23, 12, 11, 35, 0, 19, 24, 45, 10, 24, 11, 30, 0, 24, 14, 33, 21, 6, 19, 45, 24, 18, 27, 6, 46, 45, 12, 29, 19, 13, 18, 31, 30, 27, 39, 49, 28, 41, 36, 27, 48, 7, 1};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 3, 6, 7, 8, 10, 10, 11, 11, 12, 13, 16, 16, 16, 17, 17, 18, 18, 19, 20, 20, 20, 20, 22, 22, 22, 23, 27, 29, 30, 31, 34, 37, 40, 41, 43, 44, 47, 48};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> tree = {23, 27, 32, 19, 12, 27, 2, 20, 12, 1, 30, 32, 1, 18, 6, 18, 10, 7, 1, 23, 30, 1, 6, 30, 25, 23, 2, -1, 10, 22, 1, 13, 9};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 5, 7, 7, 7, 8, 8, 9, 10, 14, 14, 16, 17, 21, 23, 23, 28, 28, 30};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> tree = {2, 35, -1, 42, 33, 40, 12, 33, 7, 27, 2, 10, 35, 32, 3, 11, 29, 2, 42, 35, 24, 34, 2, 42, 2, 18, 42, 23, 25, 42, 37, 18, 2, 32, 32, 36, 29, 38, 25, 28, 25, 22, 2, 18};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 3, 4, 5, 8, 8, 8, 9, 9, 10, 11, 13, 13, 14, 16, 19, 19, 19, 22, 24, 26, 30, 31, 32, 33, 33, 33, 36, 39};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> tree = {8, 40, 8, 19, 15, 23, 15, 8, 18, 47, 27, 26, 17, 22, 9, 19, 28, 18, -1, 47, 24, 36, 9, 17, 2, 39, 31, 30, 47, 2, 18, 9, 16, 20, 48, 12, 18, 24, 8, 47, 39, 13, 13, 17, 23, 38, 37, 30, 18};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 7, 10, 10, 11, 13, 13, 13, 13, 14, 17, 17, 23, 23, 23, 24, 24, 25, 25, 26, 28, 29, 30, 31, 33, 33, 35, 37, 40, 40, 41};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> tree = {2, 13, 4, 14, 11, 4, 37, 38, 37, 27, 27, 37, 37, 43, 45, 22, 44, 39, 32, 25, 18, 25, 23, 37, 23, 24, 3, 26, 23, 30, 32, 43, 28, 42, 23, 30, 21, -1, 28, 23, 34, 11, 39, 37, 21, 11, 25};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 7, 7, 8, 8, 9, 10, 11, 12, 12, 13, 15, 17, 17, 18, 19, 21, 21, 21, 24, 26, 28, 28, 29, 32, 32, 36, 40, 42, 44, 44};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> tree = {16, 23, 6, 30, 30, 1, 0, 12, 23, 20, 30, 20, 8, 5, 11, -1, 15, 4, 20, 18, 15, 0, 23, 20, 8, 17, 30, 20, 5, 0, 15};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 4, 7, 7, 8, 10, 10, 10, 10, 11, 14, 16, 16, 17, 21, 21, 21, 25, 26};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> tree = {46, 35, 12, 21, 3, 44, 37, 40, 23, 3, 34, 34, 0, 19, 33, 21, 43, 18, 12, 43, 16, 34, 11, 0, 9, 31, 46, 34, 37, 46, 3, 0, 8, 45, 31, 41, 26, 46, 28, 18, 47, 26, 41, 0, 47, 18, -1, 0, 36, 2};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7, 8, 8, 10, 10, 10, 10, 12, 12, 12, 13, 14, 15, 16, 17, 18, 19, 19, 20, 21, 23, 23, 24, 27, 36, 40, 40, 40, 43, 45};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> tree = {23, 8, 30, 49, 2, 41, 15, 49, 6, 2, 9, 26, 6, 37, 21, 41, 8, 20, 2, 2, 41, 23, 5, 30, 15, 2, 32, 44, 15, 25, 49, 34, 41, 32, 30, 9, 4, 49, 26, 41, 32, 49, 49, 30, 25, 49, 5, 32, 41, -1};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 8, 8, 8, 8, 9, 14, 14, 18, 18, 24, 24, 24, 24, 24, 25, 25, 26, 31, 31, 33, 33, 34, 34, 35, 38, 43};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> tree = {12, 34, 20, 29, 37, 29, 9, 29, 20, 34, 31, 7, 43, 33, 24, 26, 20, 34, 20, 31, 34, 6, 1, 1, 33, 1, 37, 4, 19, 24, 1, 34, 25, 34, -1, 12, 34, 24, 23, 29, 24, 34, 33, 33};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 5, 9, 9, 9, 9, 10, 13, 14, 21, 23, 24, 24, 24, 24, 25, 25, 28, 28, 33, 37, 38};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> tree = {20, 36, 39, 13, 6, 36, 36, 39, 39, 6, 36, 1, 27, 36, 36, 8, 36, 34, 20, 13, 36, 20, 36, 36, 1, 36, 32, 36, 1, 39, 12, 6, 6, 36, 2, 36, -1, 26, 35, 36, 6};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 7, 16, 21, 22, 33, 35, 36};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> tree = {33, 44, 31, 9, 6, 9, 41, 35, 28, -1, 9, 33, 28, 21, 13, 13, 28, 13, 44, 31, 47, 9, 21, 9, 31, 31, 31, 41, 9, 9, 23, 41, 31, 41, 7, 31, 28, 41, 31, 9, 45, 9, 41, 35, 9, 21, 41, 9, 44};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 6, 12, 12, 12, 12, 12, 12, 12, 12, 13, 13, 14, 23, 23, 23, 24, 31, 31, 46};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> tree = {11, 0, 4, 5, 7, 11, 11, 11, 11, 11, 11, -1, 9, 11, 4};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 9, 9};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> tree = {11, 3, 32, 11, 11, 32, 32, 11, 26, 20, 11, -1, 4, 20, 3, 24, 20, 3, 11, 11, 24, 7, 4, 11, 18, 5, 18, 26, 26, 4, 17, 20, 18, 18};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 9, 9, 9, 10, 10, 10, 11, 11, 13, 20, 26, 26, 26, 26};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> tree = {28, 28, 7, 28, 1, 15, 22, 1, 28, 1, 7, 35, 22, 17, 17, 35, 27, 22, 28, 17, 35, 1, -1, 22, 22, 7, 41, 28, 22, 12, 27, 35, 17, 22, 27, 17, 17, 41, 43, 22, 17, 43, 22, 22, 17, 43, 22, 43, 27, 22};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 13, 13, 13, 13, 21, 21, 21, 21, 22, 22, 22, 22, 27, 27, 32, 36, 36, 36};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> tree = {44, 0, 0, 1, 33, 10, 33, 13, 39, 13, 14, 41, 40, 16, 24, 44, 31, 25, 8, 43, 41, 16, 25, 39, 46, 4, 24, 31, 31, -1, 29, 29, 12, 13, 0, 46, 44, 45, 11, 35, 4, 12, 9, 8, 28, 33, 28, 25, 43, 29};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 5, 5, 6, 8, 8, 8, 9, 11, 11, 11, 17, 17, 18, 18, 19, 19, 21, 21, 23, 23, 23, 24, 24, 27, 29, 29, 29, 32, 32, 33, 35, 38, 40, 40, 42, 43, 43, 46, 46};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> tree = {12, 10, 30, 35, 31, 31, 3, 28, 6, -1, 26, 17, 26, 25, 21, 3, 10, 2, 11, 5, 25, 20, 10, 9, 21, 5, 31, 15, 16, 30, 23, 23, 11, 23, 19, 30, 2};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 5, 5, 6, 6, 8, 8, 9, 11, 11, 11, 12, 13, 13, 14, 15, 17, 17, 18, 22, 25, 25, 26, 27, 28, 29, 29};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> tree = {12, 12, 15, 5, 16, 8, 10, 14, 12, 18, 18, 8, 15, 12, -1, 7, 2, 9, 12, 17};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 7, 8, 9, 10, 11, 13, 15};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> tree = {29, 45, 23, 9, 35, 27, 13, 27, 26, 1, 14, 41, 47, -1, 7, 26, 40, 4, 40, 5, 17, 30, 42, 6, 33, 44, 38, 31, 15, 17, 23, 6, 41, 27, 26, 46, 21, 26, 4, 24, 10, 43, 5, 27, 6, 29, 42, 24, 4};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 2, 3, 4, 5, 6, 6, 8, 8, 8, 9, 9, 10, 10, 11, 12, 14, 14, 15, 17, 21, 22, 23, 27, 27, 28, 28, 28, 29, 32, 32, 33, 36, 36, 38, 38, 38, 38, 39, 41, 45, 47};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> tree = {3, 9, 1, 4, 2, -1, 4, 6, 5, 8};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 2, 3, 4, 7, 8};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> tree = {28, 24, 17, 20, 30, 32, 32, 9, 15, 22, 27, 32, 26, 14, -1, 9, 35, 4, 31, 11, 9, 6, 24, 30, 13, 1, 25, 20, 23, 13, 18, 35, 25, 25, 12, 13};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 3, 5, 6, 8, 8, 9, 12, 12, 12, 13, 15, 15, 18, 18, 18, 19, 21, 21, 22, 24, 25, 28, 28, 30, 31, 32, 33};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> tree = {33, 22, 4, 14, 36, 7, 48, 40, 32, 20, 20, 39, 14, 20, 25, 27, 35, 31, 48, 45, 14, 22, 4, 5, 1, 2, 5, 14, 48, 49, 25, 25, 37, 27, 42, 40, -1, 24, 15, 44, 14, 5, 8, 9, 6, 28, 12, 38, 1, 46};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 5, 7, 8, 10, 13, 14, 15, 16, 17, 18, 18, 21, 21, 21, 23, 25, 26, 26, 33, 33, 35, 35, 35, 36, 37, 38, 40, 41, 42, 43, 44, 46, 48};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> tree = {6, 37, 6, 6, 6, 37, -1, 6, 6, 6, 37, 6, 6, 37, 6, 0, 6, 37, 6, 6, 6, 6, 6, 6, 37, 6, 37, 6, 37, 37, 6, 6, 6, 37, 6, 6, 37, 6, 37, 6, 6, 37, 6, 37, 6, 37, 6, 6, 6, 30};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> tree = {16, 23, 10, 16, 16, 16, 16, 23, 23, 16, 27, 23, 16, 16, 16, 23, -1, 16, 16, 34, 16, 23, 16, 16, 16, 23, 16, 29, 16, 23, 16, 16, 23, 16, 23};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 21, 22, 31, 33};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> tree = {21, 8, 12, 45, 19, -1, 5, 30, 16, 30, 43, 37, 45, 47, 6, 43, 47, 5, 0, 27, 7, 8, 20, 3, 5, 41, 29, 38, 14, 4, 34, 41, 17, 0, 13, 33, 18, 46, 14, 25, 7, 17, 2, 12, 4, 27, 21, 32, 40, 44};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 1, 2, 2, 3, 4, 4, 5, 6, 7, 12, 12, 13, 13, 14, 15, 16, 20, 20, 21, 21, 23, 23, 24, 25, 27, 27, 29, 30, 31, 31, 32, 33, 33, 35, 35, 36, 36, 37, 38, 38, 40, 41, 42, 43, 44};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> tree = {33, 6, 26, 2, 1, 10, 22, 43, 9, 14, 38, 39, 9, 45, 18, 11, 42, 7, 23, 33, 24, 3, 35, -1, 1, 13, 35, 47, 2, 11, 34, 3, 29, 23, 42, 8, 25, 34, 12, 10, 23, 25, 39, 23, 22, 6, 7, 26};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 2, 3, 7, 7, 8, 11, 11, 12, 13, 14, 14, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 21, 21, 23, 23, 25, 25, 28, 28, 29, 30, 30, 31, 31, 34, 36, 37, 37, 39, 42, 42};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> tree = {5, 4, 0, 6, 3, 6, -1, 4, 6, 7, 6, 3, 0, 7, 11};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 2, 5, 5, 6, 7, 7, 8, 8};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> tree = {34, 7, 10, 5, 14, 21, 28, 41, 20, 27, 47, 8, 24, 29, 3, 34, 19, 15, 49, 47, 4, 13, 31, 42, 2, 2, 19, 32, 9, 1, 20, 38, 5, 0, 4, 45, 0, 13, 47, 8, 7, 35, 49, 24, 15, 12, 18, -1, 12, 9};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 10, 10, 12, 15, 15, 16, 17, 18, 18, 19, 20, 22, 22, 23, 24, 24, 25, 26, 26, 27, 28, 30, 34, 35, 36, 36, 37, 37, 39, 39, 41, 43, 43, 44, 44, 45, 48};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> tree = {7, 24, 30, 20, 25, 9, 31, 31, 24, 11, 17, 22, 20, 28, 5, 23, 29, 15, 0, 29, 28, 30, -1, 2, 32, 5, 0, 18, 10, 3, 8, 22, 27};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 1, 2, 4, 6, 6, 7, 10, 11, 12, 13, 13, 14, 16, 16, 17, 19, 20, 21, 21, 22, 24, 24, 25, 27, 28, 29, 29, 30};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> tree = {28, 12, 17, 11, 17, 16, 7, 21, 26, 23, 0, 28, 19, 26, 34, 5, 9, 27, 31, 27, 9, 33, 30, 3, 14, 10, 7, 33, 32, 22, 18, 20, 19, -1, 0, 11};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 1, 2, 2, 3, 4, 5, 6, 8, 8, 9, 11, 12, 12, 13, 15, 15, 16, 16, 17, 19, 20, 23, 24, 25, 26, 26, 27, 29, 29, 31, 34};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> tree = {10, 44, 17, 31, 47, 35, 46, 39, 28, 16, 42, 38, 21, 2, 18, 33, 20, 20, 21, 11, 35, -1, 36, 46, 34, 15, 1, 42, 1, 27, 10, 5, 38, 23, 33, 21, 47, 43, 15, 8, 2, 19, 28, 4, 37, 39, 31, 41, 21};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 2, 5, 5, 6, 8, 9, 10, 10, 11, 11, 13, 13, 17, 19, 19, 20, 20, 21, 22, 22, 25, 27, 28, 29, 29, 30, 31, 32, 34, 35, 36, 36, 37, 37, 39, 39, 40, 41, 41, 42, 43, 43};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> tree = {4, 6, 5, 2, 1, 8, -1, 5, 0, 6};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 2, 4, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> tree = {8, 26, 3, 13, 11, 8, 9, 5, 10, 16, 29, 22, 20, 19, 21, 20, 23, 26, 12, 4, 7, -1, 24, 27, 21, 27, 7, 18, 6, 2};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 1, 2, 2, 3, 4, 8, 8, 9, 10, 12, 12, 13, 14, 16, 17, 18, 19, 20, 21, 22, 24, 25, 26, 27, 28};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> tree = {21, 21, 1, 25, 20, 46, 22, 4, 42, 34, 43, 25, 18, 40, 43, 44, 7, 21, 48, 33, 32, -1, 47, 40, 39, 21, 8, 21, 29, 17, 24, 8, 9, 29, 31, 7, 5, 1, 24, 18, 6, 27, 41, 20, 27, 28, 48, 9, 26, 14};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 6, 7, 12, 12, 13, 15, 16, 17, 17, 20, 21, 22, 22, 23, 24, 24, 25, 26, 26, 27, 29, 30, 31, 32, 32, 34, 34, 35, 38, 38, 39, 40, 41, 43, 43, 44, 44};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> tree = {13, 29, 1, 29, 8, 15, 1, 34, 17, 32, 42, 38, 41, -1, 34, 9, 31, 37, 41, 41, 16, 38, 38, 42, 15, 17, 29, 34, 42, 13, 2, 1, 13, 37, 17, 36, 13, 36, 17, 13, 15, 1, 31, 33, 33, 2, 2, 25, 36, 38};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4, 5, 13, 13, 13, 14, 14, 17, 17, 17, 17, 22, 22, 22, 23, 26, 26, 26, 26, 29, 30, 30, 30, 31, 31, 31, 32, 32, 34, 34, 34, 41, 41, 41, 42};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> tree = {-1, 0, 4, 5, 0, 0, 0, 0, 5};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> tree = {11, 15, 9, 15, 12, 10, 8, 8, 5, 14, -1, 5, 10, 11, 12, 14, 5};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 2, 2, 3, 9, 9, 10, 10, 12, 12, 13};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> tree = {35, 48, 37, 32, 37, 37, 35, 2, 22, 37, 31, 33, 30, 46, 37, 44, 22, 13, 24, 22, 21, 5, 5, 32, 2, 7, 9, 17, 35, 21, 13, 5, 13, 13, 32, 14, 48, -1, 24, 2, 7, 21, 30, 21, 9, 30, 37, 48, 9};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 5, 7, 7, 7, 7, 8, 8, 8, 9, 10, 10, 10, 11, 13, 13, 14, 14, 16, 16, 16, 16, 17, 17, 17, 34, 34, 34, 35, 35, 35, 36, 37};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> tree = {41, 27, 31, 24, 18, 3, 18, 6, 39, 44, 44, 15, 31, 39, 31, 24, 12, 2, -1, 6, 3, 15, 36, 27, 18, 4, 35, 24, 6, 6, 14, 18, 44, 14, 3, 24, 31, 12, 44, 4, 15, 4, 2, 35, 18, 39, 4, 27, 36, 35};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 11, 14, 14, 15, 15, 16, 16, 17, 17};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> tree = {27, 7, 5, 7, 27, -1, 22, 26, 27, 23, 6, 16, 2, 16, 6, 22, 26, 5, 15, 25, 15, 25, 5, 2, 25, 17, 5, 17};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> tree = {1, 20, 30, 30, 5, 29, 21, 5, 31, 20, 14, -1, 21, 29, 29, 2, 3, 31, 13, 14, 30, 30, 1, 21, 20, 3, 13, 21, 2, 11, 11, 29, 1, 2, 2, 20, 3, 13, 3, 14, 5, 31};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 6, 6, 6, 22, 22, 22, 22, 26, 26, 26, 27, 27, 27, 28, 28, 28, 29, 29, 29};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> tree = {24, 33, 3, 19, 12, 25, 34, 2, 12, 27, 41, 16, 45, 12, 15, 19, 15, 27, 2, -1, 25, 27, 12, 19, 23, 3, 41, 45, 41, 41, 34, 19, 14, 31, 23, 33, 14, 34, 24, 27, 16, 31, 34, 24, 25, 19, 33, 2, 33};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 15, 15};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> tree = {22, 31, 23, 19, 12, 12, 20, 14, 39, -1, 20, 27, 24, 14, 24, 39, 49, 27, 49, 9, 31, 49, 24, 9, 9, 22, 49, 31, 39, 27, 14, 9, 23, 12, 12, 22, 19, 20, 20, 31, 27, 22, 23, 14, 19, 23, 1, 39, 19, 24};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 22, 22, 22, 22, 23, 23, 23, 23, 24, 24, 24, 24, 25, 25, 25, 25, 26, 26, 26, 26, 27, 27, 27, 27, 28};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> tree = {15, 14, 25, 15, 30, 41, 25, 15, 15, 20, 6, 5, 37, 14, 41, 17, 37, 34, 20, 30, 41, 25, 40, 5, 14, -1, 43, 43, 40, 5, 37, 40, 40, 43, 10, 20, 14, 17, 5, 20, 37, 17, 43, 41};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 22, 22, 22, 22, 23, 23, 23, 23, 24, 25, 25, 25, 25, 26, 26, 33, 40, 41, 41};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> tree = {34, 24, 32, 35, 8, 14, 34, 32, 14, 22, 5, 35, 16, 1, 15, 37, 15, 34, 1, 8, 22, 22, 24, 14, 37, 32, 16, 22, 16, 8, 32, 35, 24, 1, 37, 15, 1, -1};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 17, 17, 17, 18, 18, 18, 19, 19, 19, 20, 20, 20, 21, 21, 21, 25, 25, 25, 26};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> tree = {9, 31, 15, 21, 0, 29, 22, 10, 9, 12, 38, 23, 37, 29, 10, 8, 31, 0, 44, 8, 22, 9, 8, 38, 15, 31, 44, 8, 21, 38, 23, 38, 10, 0, 0, 44, 15, 44, 9, 10, 23, 23, 21, 29, -1, 31, 15, 21, 29};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 26, 26, 26, 26, 27, 27, 38, 45, 45, 45};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> tree = {8, 31, 41, 47, 8, 42, 8, 14, 19, 13, 31, 14, 34, 34, -1, 10, 42, 47, 41, 33, 31, 41, 42, 10, 41, 10, 34, 44, 20, 47, 20, 29, 20, 44, 37, 44, 14, 14, 47, 42, 34, 19, 19, 44, 9, 20, 31, 19, 10, 8};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 6, 22, 22, 22, 22, 23, 23, 23, 23, 24, 28, 28, 28, 28, 29, 29, 29, 29, 32, 41, 41, 41, 41, 42, 46, 46, 46};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> tree = {31, 12, 21, 40, 42, 35, 9, 42, 13, 32, 13, 12, 21, 32, 13, 2, 31, 12, 31, 13, 35, 22, 26, 40, 9, 35, 9, 42, 12, 40, 35, 32, 38, 2, 42, 32, 2, 2, 3, 31, -1, 21, 21, 9};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 6, 22, 23, 24, 24, 25, 25, 25, 25, 28, 28, 28, 28, 29, 29, 29, 29, 30, 30, 30, 30};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> tree = {3, 0, 3, -1};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> tree = {32, 14, 34, 25, 25, 1, 9, 25, 29, 14, 9, 20, 16, 9, 37, 29, 1, 32, 34, 21, 14, 14, 31, 16, 16, 37, 20, 9, 34, 1, 20, 5, 1, 32, 5, 29, 5, -1, 21, 21, 20, 25, 34, 32, 5, 31, 16, 21, 29};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 10, 10, 10, 10, 11, 11, 38, 38, 38, 38};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> tree = {29, 22, 25, 30, 25, 30, 35, 43, 9, 35, 22, 34, 34, 30, 16, 35, 0, 37, 30, 43, 16, 9, 0, 43, 9, 0, 16, 43, 37, 12, 35, 16, 22, 22, -1, 0, 0, 25, 9, 22, 16, 37, 30, 35, 37, 9, 37, 43, 25, 25};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 12, 12, 12, 12, 12, 27, 48};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> tree = {10, 7, 1, 18, 1, 2, 18, 0, 2, 18, -1, 10, 1, 2, 1, 2, 18, 1, 2};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 7, 16, 17};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> tree = {14, 18, 20, 18, 39, 33, 5, 25, 18, 5, 18, 39, 39, 20, 33, 14, 18, 14, 25, 25, 23, 33, 5, -1, 39, 23, 20, 39, 20, 33, 25, 25, 20, 23, 5, 14, 19, 5, 14, 33};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 22, 22, 22, 22, 22, 23, 23, 23, 23, 23, 24, 24, 24, 24, 24, 25};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> tree = {41, -1, 19, 41, 20, 23, 23, 27, 20, 23, 1, 18, 2, 15, 1, 19, 1, 12, 2, 1, 2, 18, 23, 19, 27, 41, 20, 2, 27, 18, 41, 18, 15, 27, 15, 12, 23, 41, 19, 12, 15, 2, 15, 20, 20, 18, 12, 19, 12};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 9, 9, 9};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> tree = {9, 48, 36, 48, 20, 4, 18, 48, 46, 20, 17, 1, 18, 12, 1, 23, 42, 6, 23, 12, 6, 9, 28, 28, 13, 20, 12, 9, -1, 4, 42, 25, 4, 6, 17, 7, 13, 25, 28, 25, 1, 7, 17, 7, 46, 42, 18, 13, 46, 23};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 8, 8, 8, 11, 11, 11, 14, 14, 17, 17, 17, 18, 18, 18, 19, 19, 19, 20, 20, 20, 23, 23, 23, 24, 24, 24, 26};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> tree = {17, 17, 0, 1, 13, 13, 10, 14, 0, 14, 9, 0, 10, 9, 1, 14, 15, -1, 15, 15, 1, 13, 9, 10, 17};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 5, 5, 5, 6, 6, 6, 8, 8, 20, 20, 20};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> tree = {7, 5, 5, 2, 5, 7, 2, -1, 2};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> tree = {3, 12, 29, 33, 14, 3, 12, 30, 30, 13, 22, 16, 16, 40, 6, 16, 29, 13, 46, 37, 40, 14, 33, 14, 22, 30, 22, 35, 46, 39, 40, 13, 11, 37, 37, -1, 46, 29, 35, 44, 33, 6, 3, 11, 45, 38, 12, 11, 6};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 8, 8, 8, 23, 23, 23, 24, 26, 26, 26, 27, 27, 27, 29, 30, 30, 30, 31, 31, 31, 36, 37, 37, 37, 43, 47};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> tree = {27, 35, 22, 38, 21, 36, 40, 11, 21, 38, 35, 36, 5, 23, 27, 38, 0, 0, 31, 22, 38, 13, 31, 40, 32, 14, 5, 23, 18, 21, 14, 6, 40, 38, 0, 32, 6, 0, 13, 0, -1, 18, 14, 14, 14, 24, 24, 21, 21, 11};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 7, 7, 7, 7, 7, 8, 8, 14, 14, 15, 15, 16, 16, 16, 16, 16, 17, 17, 17, 17, 17, 18, 18, 19, 19, 30, 30, 31, 31, 32, 32, 33, 33, 34, 34, 35, 35, 36, 36, 37, 37};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> tree = {2, 9, 7, 10, 7, 2, 10, 1, 10, 10, -1, 2};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 5, 7, 8, 8, 8};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> tree = {7, 7, 4, -1, 14, 12, 9, 13, 11, 14, 12, 17, 17, 3, 3, 13, 9, 3, 11, 4};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> tree = {30, 5, 34, 6, 34, 28, 35, 41, 44, 17, 7, 31, 14, 14, 47, 7, 23, 2, 6, 25, 40, 44, 47, 4, 31, 27, 7, -1, 27, 41, 19, 19, 40, 30, 27, 27, 7, 42, 42, 17, 4, 28, 35, 5, 2, 22, 22, 25, 23};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 6, 6, 8, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> tree = {45, 18, 12, 24, 30, 29, 36, 24, 29, 36, 24, 27, 45, 36, 26, 44, 30, 0, -1, 29, 0, 26, 44, 30, 45, 27, 45, 1, 40, 18, 1, 26, 29, 24, 44, 40, 18, 36, 44, 26, 1, 0, 27, 30, 1, 18, 40, 0, 27, 40};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 22, 22, 22, 22, 23, 23, 23, 23, 24, 24, 24, 24, 25, 25, 25, 25, 26, 26, 26, 26, 27, 27, 27, 27, 28};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> tree = {3, 3, 4, -1, 3, 3};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> tree = {8, 7, 5, 7, 8, -1, 8, 5, 5};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 5, 5};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> tree = {37, 32, 43, 40, 19, 43, 13, 43, 15, 15, 32, 42, 37, 4, 43, 19, 42, 47, 42, -1, 47, 37, 13, 47, 13, 32, 40, 40, 47, 13, 42, 13, 4, 15, 43, 40, 47, 4, 37, 32, 4, 42, 15, 15, 37, 40, 8, 4, 32};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 32, 32, 32, 32, 32, 33, 33, 33, 33, 33, 34, 34, 34, 34, 34, 35};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> tree = {4, -1, 1, 16, 35, 14, 2, 8, 35, 41, 25, 14, 2, 8, 35, 16, 35, 14, 20, 20, 35, 41, 41, 41, 16, 1, 8, 8, 4, 41, 8, 25, 2, 4, 14, 1, 16, 14, 20, 25, 4, 1, 25, 20, 4, 2, 25, 16, 2, 20};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 32, 32, 32, 32, 32, 33, 33, 33, 33, 33, 34, 34, 34, 34, 34};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> tree = {6, 6, 12, 12, 12, -1, 5, 0, 6, 12, 0, 6, 5};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 2, 8, 8, 8, 8};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> tree = {2, 2, -1};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> tree = {28, 28, -1, 27, 48, 27, 18, 2, 23, 32, 23, 46, 32, 18, 18, 32, 38, 46, 33, 38, 38, 46, 36, 33, 46, 23, 9, 7, 33, 36, 36, 38, 7, 2, 48, 28, 32, 48, 7, 27, 27, 18, 48, 36, 28, 36, 33, 23, 7};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 7, 7, 7, 7, 8, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13, 14, 28, 28, 28, 28, 29, 29, 29, 29, 30, 30, 30, 30, 31, 31, 31, 31, 32, 32, 32, 32};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> tree = {19, 5, 49, 36, 15, 44, 8, 18, 44, 22, 8, 15, 36, 21, 1, 41, 47, 6, 11, 11, 49, 41, 4, 19, 46, 22, 18, 43, 38, 7, 38, 6, 13, 10, 26, 10, 5, 43, 32, 1, 13, -1, 47, 40, 21, 46, 4, 40, 26, 32};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> tree = {13, 5, 8, 18, 9, 6, -1, 19, 15, 17, 19, 13, 9, 5, 1, 6, 1, 15, 8, 17};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 10, 12, 12, 14, 14, 15, 15};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> tree = {3, 4, 3, 1, -1, 13, 18, 4, 7, 13, 8, 17, 17, 15, 8, 7, 18, 15, 1, 10};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 10, 12, 12, 14, 14, 15, 15};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> tree = {36, 47, 33, 12, 3, 14, 20, 27, 48, 17, 43, 44, 19, 6, 11, 3, 32, 47, 25, 33, 41, 20, 1, 6, 30, 28, 30, 12, 41, 32, 28, 21, 38, -1, 25, 43, 1, 17, 44, 14, 36, 2, 48, 11, 2, 21, 27, 19, 38};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> tree = {13, 27, -1, 16, 29, 44, 15, 27, 30, 2, 9, 22, 45, 33, 4, 39, 10, 4, 9, 15, 41, 30, 29, 31, 45, 41, 16, 39, 0, 32, 10, 18, 2, 2, 31, 16, 13, 44, 33, 32, 0, 10, 22, 38, 13, 18, 38, 4, 30, 41};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 20, 21, 21, 22, 22, 23, 23, 28, 28, 29, 29, 33, 33, 33, 34, 34, 35, 35, 36, 36};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> tree = {2, 7, 7, 2, 1, 1, 1, -1, 7};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 5, 5};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> tree = {17, 0, 15, 14, 17, 0, 27, 28, 7, 26, 0, 4, 15, 26, 28, 14, 21, 28, 4, 15, 3, 17, 21, 4, 7, 3, 14, 7, -1};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 11, 11, 11, 12, 12, 12, 15, 15, 15, 16, 16, 17, 17, 18};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> tree = {21, 25, 17, 24, 17, 21, 26, 40, 34, 18, 42, 46, 13, 45, 45, 33, 25, 36, 26, 9, 42, 24, 47, 40, 26, 18, -1, 14, 17, 34, 11, 13, 42, 3, 3, 9, 24, 21, 33, 14, 46, 11, 45, 13, 40, 6, 6, 36, 9};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 11, 11, 12, 12, 15, 15, 15, 16, 16, 17, 17, 17, 18, 18, 19, 19, 19, 20, 20, 21, 21, 22, 22, 22, 23, 23, 32, 32, 32, 33, 34, 34, 35, 35};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> tree = {10, 13, 21, 37, 14, 18, 45, 13, 21, 37, 28, 28, 18, 47, 28, 13, 28, 14, 28, 11, 37, 47, 21, 13, 37, 11, 14, 21, 47, 11, 14, 10, 16, 11, 10, 10, 18, 47, 18, 45, 16, 18, 10, 14, 21, 47, 45, -1, 13, 45};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 22, 22, 22, 22, 22, 23, 23, 23, 23, 23, 24, 24, 24, 24, 25, 25, 25, 25};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> tree = {10, 9, 6, 10, 6, 9, 7, -1, 9, 7, 7, 10, 6};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 5, 5, 5, 6, 6, 6};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> tree = {-1, 0, 0, 0, 3, 3, 1, 3, 4, 6, 1, 8, 7, 0, 11, 8, 6, 11, 0, 5, 16, 17, 8, 2, 21, 7, 18, 26, 27, 16, 25, 12, 26, 21, 0, 24, 3, 8, 34, 22, 2, 5, 39, 34, 23, 14, 1, 13, 20, 23};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 5, 6, 7, 7, 8, 8, 9, 11, 11, 14, 14, 18, 18, 20, 21, 24, 24, 24, 24, 25, 25, 29, 33, 33, 34, 37, 40, 41, 42, 44, 44, 47};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> tree = {12, 23, 0, 15, 5, 12, 7, 0, 11, 20, 1, 23, -1, 12, 13, 13, 3, 3, 2, 24, 22, 20, 5, 12, 2, 15, 12, 26, 26};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 8, 10, 11, 12, 16, 19, 19, 23, 23};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> tree = {-1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 6, 6, 7, 7, 7, 8, 8, 9, 10, 11, 11, 12, 12, 12};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 8, 8, 8, 9, 9, 9, 13, 13, 13, 14, 14, 15, 16, 16, 17, 17, 18};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> tree = {-1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 13, 13, 10};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 6, 6, 7, 8, 8, 9, 11, 11, 12, 12, 13, 13, 18, 18, 19, 19, 20, 20, 20, 21, 21, 22, 22, 23, 23};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> tree = {-1, 0, 0, 0, 1, 2, 2, 4, 3, 7};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 1, 2, 3, 6, 8};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> tree = {12, 4, 9, 9, 5, 8, 7, 8, -1, 5, 9, 4, 7};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 1, 1, 5, 5, 6, 9, 9, 10};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> tree = {-1, 0, 1, 1, 3};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> tree = {3, 2, 3, 4, -1, 4, 1, 2, 0, 0, 12, 12, 5, 5, 13, 13};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 1, 1, 2, 2, 3, 4, 8, 8, 10, 10, 11, 11};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> tree = {-1, 0, 1, 2, 3, 0, 2, 5, 4, 4, 6, 7, 7, 9, 2, 14, 5, 14, 15, 15, 3, 2, 18, 21, 9, 7, 22, 17, 25, 12, 20, 28, 24, 12, 19, 31, 35, 1, 3, 14, 21, 12, 27, 23, 10, 0, 28, 31, 39, 0};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 9, 9, 10, 12, 12, 12, 14, 16, 17, 18, 19, 21, 21, 24, 24, 29, 32, 34, 34, 34, 38, 38, 38, 39, 44, 44, 45, 45, 47};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> tree = {-1, 0, 0, 1, 1, 2, 2, 3, 3, 5, 5, 6, 7, 7, 8, 8, 0, 0, 0, 0, 0, 0};
    NormalizingTrees* pObj = new NormalizingTrees();
    clock_t start = clock();
    vector<int> result = pObj->normalize(tree);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 9, 9, 10, 11, 11, 16, 16, 17, 17};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=10672&pm=7751
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
const int INF = 1000000000;
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
 
vector<vector<int> > edges;
 
VI calc(int x, int par) {
  vector<VI> ch;
  FOREACH(it,edges[x]) if(*it!=par) ch.push_back(calc(*it, x));
  sort(ch.begin(), ch.end());
  VI res;
  res.push_back(-1);
  int k = size(ch);
  vector<VI> newN(k);
  for(;;) {
    bool pr=false;
    REP(i,k) {
      int lim = size(newN[i]);
      int p = lim;
      while(ch[i][p] < lim) {
        pr=true;
        int pp = ch[i][p];
        pp = pp==-1 ? 0 : newN[i][pp];
        newN[i].push_back(size(res));
        res.push_back(pp);
        ++p;
      }
    }
    if(!pr) break;
  }
  res.push_back(INF);
  return res;
}
 
VI calc(int r) {
  return calc(r,-1);
}
 
struct NormalizingTrees {
vector <int> normalize(vector <int> tree) {
  int n= size(tree);
  edges.resize(n);
  REP(i,n) edges[i].clear();
  REP(i,n) {
    int j = tree[i];
    if(j!=-1) { edges[i].push_back(j); edges[j].push_back(i); }
  }
  VI res(1,INF);
  REP(i,n) res = min(res, calc(i));
  res.pop_back();
  return res;
}
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/