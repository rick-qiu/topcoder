/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8590
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

class RandomSort {
public:
    double getExpected(vector<int> permutation);
};

double RandomSort::getExpected(vector<int> permutation) {
    double ret;
    return ret;
}


int test0() {
    vector<int> permutation = {1, 3, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
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
    vector<int> permutation = {4, 3, 2, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.066666666666666;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> permutation = {1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> permutation = {2, 5, 1, 6, 3, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.666666666666666;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> permutation = {1, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> permutation = {2, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> permutation = {1, 2, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> permutation = {2, 1, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> permutation = {2, 3, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> permutation = {3, 1, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> permutation = {3, 2, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 2.333333333333333;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> permutation = {1, 5, 2, 3, 6, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> permutation = {1, 5, 3, 7, 8, 6, 2, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.685714285714287;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> permutation = {6, 3, 4, 1, 5, 8, 7, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.355555555555558;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> permutation = {3, 1, 4, 2, 6, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> permutation = {5, 1, 4, 2, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.866666666666665;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> permutation = {7, 2, 5, 4, 1, 3, 8, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.22063492063492;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> permutation = {2, 1, 6, 5, 4, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0666666666666655;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> permutation = {5, 3, 4, 2, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.8317460317460315;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> permutation = {4, 1, 8, 3, 6, 5, 2, 7};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.933333333333334;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> permutation = {7, 8, 1, 6, 4, 2, 3, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 11.61303167731739;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> permutation = {6, 1, 4, 2, 3, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.866666666666666;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> permutation = {5, 1, 6, 2, 4, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 6.488888888888889;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> permutation = {3, 6, 2, 5, 1, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 6.7333333333333325;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> permutation = {3, 4, 2, 5, 6, 7, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 6.866666666666666;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> permutation = {4, 1, 7, 2, 6, 8, 3, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.155555555555555;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> permutation = {3, 6, 2, 1, 7, 8, 5, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.298412698412697;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> permutation = {4, 3, 1, 5, 6, 2, 7};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.866666666666666;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> permutation = {7, 5, 3, 4, 1, 2, 8, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.904761904761905;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> permutation = {3, 1, 4, 5, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> permutation = {5, 2, 1, 4, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.666666666666666;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> permutation = {4, 2, 1, 3, 6, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.333333333333333;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> permutation = {4, 2, 1, 3, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 3.333333333333333;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> permutation = {3, 8, 5, 7, 1, 4, 6, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 11.212698412698412;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> permutation = {5, 6, 4, 1, 2, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 7.712987012987013;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> permutation = {2, 1, 4, 5, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> permutation = {4, 1, 2, 6, 3, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> permutation = {6, 2, 4, 5, 7, 1, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.63015873015873;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> permutation = {5, 4, 3, 2, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 6.03015873015873;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> permutation = {3, 1, 5, 2, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> permutation = {3, 7, 2, 6, 5, 1, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.753968253968253;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> permutation = {8, 5, 4, 1, 7, 3, 2, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 11.308225108225109;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> permutation = {4, 2, 1, 3, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 3.333333333333333;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> permutation = {3, 5, 2, 1, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.866666666666665;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> permutation = {2, 1, 7, 4, 5, 6, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.999999999999998;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> permutation = {6, 7, 5, 4, 2, 3, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 10.44287775716347;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> permutation = {6, 7, 4, 2, 1, 5, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.657431457431459;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> permutation = {2, 4, 3, 1, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 3.333333333333333;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> permutation = {4, 2, 3, 1, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6666666666666665;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> permutation = {4, 5, 2, 1, 6, 3, 7};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 6.488888888888889;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> permutation = {7, 4, 8, 3, 1, 5, 6, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 11.465367965367967;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> permutation = {6, 1, 7, 3, 2, 5, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.296825396825398;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> permutation = {3, 5, 1, 4, 2, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> permutation = {2, 7, 5, 3, 1, 6, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 7.965079365079364;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> permutation = {4, 1, 5, 2, 3, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.666666666666666;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> permutation = {5, 3, 4, 2, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.8317460317460315;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> permutation = {4, 2, 5, 6, 3, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 6.765079365079365;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> permutation = {1, 6, 5, 4, 3, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 6.03015873015873;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> permutation = {3, 1, 4, 2, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> permutation = {6, 2, 3, 5, 1, 8, 7, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.866666666666664;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> permutation = {4, 3, 6, 1, 7, 2, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.155555555555555;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> permutation = {2, 7, 8, 3, 5, 1, 4, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 10.153968253968257;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> permutation = {8, 6, 4, 2, 7, 3, 5, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 12.041991341991341;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> permutation = {3, 7, 1, 2, 6, 4, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 7.533333333333333;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> permutation = {6, 7, 5, 1, 3, 4, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.987538651824366;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> permutation = {2, 3, 4, 1, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> permutation = {7, 3, 5, 6, 1, 2, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.493650793650792;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> permutation = {4, 1, 2, 5, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> permutation = {2, 7, 3, 5, 4, 1, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 7.4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> permutation = {4, 2, 5, 1, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> permutation = {5, 7, 4, 2, 6, 1, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.663780663780663;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> permutation = {5, 2, 4, 1, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.199999999999998;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> permutation = {3, 6, 1, 2, 4, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.666666666666665;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> permutation = {1, 3, 4, 2, 6, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> permutation = {3, 2, 4, 5, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.333333333333333;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> permutation = {8, 6, 5, 1, 3, 4, 2, 7};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 11.078447742733456;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> permutation = {1, 3, 5, 2, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> permutation = {5, 4, 2, 3, 1, 7, 8, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 7.831746031746032;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> permutation = {6, 7, 4, 8, 2, 1, 5, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 12.087157287157288;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> permutation = {5, 6, 8, 4, 3, 7, 2, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 12.095798910084625;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> permutation = {2, 3, 5, 1, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> permutation = {5, 7, 3, 4, 6, 1, 8, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 10.595238095238095;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> permutation = {2, 5, 4, 1, 6, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.866666666666666;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> permutation = {2, 3, 8, 5, 6, 4, 1, 7};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.831746031746032;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> permutation = {3, 2, 6, 5, 4, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 6.3999999999999995;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> permutation = {1, 3, 8, 4, 7, 6, 2, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.220634920634918;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> permutation = {5, 4, 2, 3, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.8317460317460315;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> permutation = {5, 4, 7, 3, 6, 1, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.657431457431455;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> permutation = {1, 2, 5, 3, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> permutation = {2, 7, 1, 5, 8, 6, 3, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.552380952380954;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> permutation = {6, 3, 5, 4, 2, 1, 7};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 7.806349206349205;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> permutation = {2, 7, 3, 1, 6, 8, 5, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.965079365079365;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> permutation = {1, 3, 6, 5, 2, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.866666666666665;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> permutation = {3, 7, 2, 4, 5, 1, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 7.533333333333333;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> permutation = {3, 1, 2, 6, 5, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.333333333333333;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> permutation = {1, 5, 7, 4, 3, 2, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 6.887301587301588;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> permutation = {1, 4, 2, 6, 8, 7, 3, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 7.48888888888889;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> permutation = {3, 2, 7, 6, 1, 4, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 7.765079365079366;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> permutation = {5, 2, 1, 4, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.666666666666666;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> permutation = {3, 1, 2, 5, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> permutation = {1, 2, 4, 5, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> permutation = {2, 6, 3, 7, 8, 4, 1, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.876190476190477;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> permutation = {4, 6, 3, 2, 1, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 6.887301587301588;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> permutation = {7, 4, 1, 2, 6, 3, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.298412698412697;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> permutation = {4, 2, 5, 1, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> permutation = {5, 3, 2, 7, 1, 4, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 7.733333333333332;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> permutation = {4, 8, 5, 3, 2, 1, 6, 7};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.966955266955267;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> permutation = {4, 1, 2, 3, 5, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> permutation = {7, 6, 2, 4, 8, 1, 3, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 11.341702741702743;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> permutation = {3, 4, 1, 2, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 3.666666666666666;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> permutation = {4, 5, 7, 1, 6, 2, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.207936507936507;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> permutation = {8, 7, 6, 5, 4, 3, 2, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 13.221053196152711;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> permutation = {8, 7, 6, 5, 1, 4, 3, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 12.895467847303319;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> permutation = {4, 1, 2, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> permutation = {1, 4, 3, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 2.333333333333333;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> permutation = {2, 1, 4, 3, 6, 5, 8, 7};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> permutation = {4, 3, 2, 1, 8, 7, 6, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.133333333333333;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> permutation = {5, 4, 3, 2, 1, 8, 7, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.363492063492064;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> permutation = {2, 1, 8, 7, 6, 5, 4, 3};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.24819624819625;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> permutation = {1, 7, 6, 5, 4, 3, 2, 8};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.248196248196248;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> permutation = {7, 6, 5, 4, 3, 2, 1, 8};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 10.641022469593898;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> permutation = {1, 2, 3, 4, 5, 6, 7, 8};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> permutation = {8, 7, 6, 5, 4, 3, 2, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 13.221053196152711;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> permutation = {2, 5, 1, 6, 3, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 5.666666666666666;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> permutation = {4, 3, 2, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 4.066666666666666;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> permutation = {2, 8, 6, 5, 1, 7, 3, 4};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 10.632034632034634;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> permutation = {8, 7, 6, 5, 4, 3, 1, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 13.144130119229633;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> permutation = {5, 2, 4, 7, 3, 6, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.298412698412697;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> permutation = {2, 5, 1, 6, 3, 8, 4, 7};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 7.666666666666666;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> permutation = {8, 6, 7, 5, 4, 3, 2, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 13.133236873042268;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> permutation = {4, 2, 8, 6, 3, 5, 1, 7};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.730158730158731;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> permutation = {7, 6, 5, 4, 3, 2, 1};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 10.641022469593898;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> permutation = {7, 8, 1, 4, 5, 6, 3, 2};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 11.519288119288117;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> permutation = {1, 8, 2, 5, 7, 3, 4, 6};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.253968253968253;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> permutation = {2, 7, 1, 8, 4, 6, 3, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 9.552380952380954;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> permutation = {8, 4, 6, 1, 2, 3, 7, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 10.595238095238095;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> permutation = {2, 4, 3, 6, 8, 1, 7, 5};
    RandomSort* pObj = new RandomSort();
    clock_t start = clock();
    double result = pObj->getExpected(permutation);
    clock_t end = clock();
    delete pObj;
    double expected = 8.333333333333332;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20286298&rd=12174&pm=8590
********************************************************************************
#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
 
typedef vector<int> VI;
map <VI, double> memo;
 
double f(VI a)
{
  if (memo.count(a)) return memo[a];
  double &res = memo[a];
  res = 0;
 
  int denom = 0;
  for (int i = 0; i < (int)a.size(); i++)
    for (int j = i+1; j < (int)a.size(); j++) {
      if (a[i] > a[j]) {
        swap(a[i], a[j]);
        res += 1 + f(a);
        swap(a[i], a[j]);
        denom++;
      }
    }
 
  if (denom == 0) {
    res = 0;
  } else {
    res /= denom;
  }
  
  return res;
}
 
struct RandomSort {
  double getExpected(vector<int> permutation) {
    return f(permutation);    
  }
};

********************************************************************************
*******************************************************************************/