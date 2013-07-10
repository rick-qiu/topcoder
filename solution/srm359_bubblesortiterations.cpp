/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7854
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

class BubbleSortIterations {
public:
    int numIterations(vector<int> X, vector<int> Y, int L0, int M, int n);
};

int BubbleSortIterations::numIterations(vector<int> X, vector<int> Y, int L0, int M, int n) {
    int ret;
    return ret;
}


int test0() {
    vector<int> X = {0};
    vector<int> Y = {10, 1, 5, 2, 3};
    int L0 = 10;
    int M = 100;
    int n = 5;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> X = {0};
    vector<int> Y = {1, 3, 5, 7, 9};
    int L0 = 1;
    int M = 100;
    int n = 5;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
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
    vector<int> X = {999998};
    vector<int> Y = {500000};
    int L0 = 500000;
    int M = 1000000;
    int n = 100;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> X = {234, 56, 567, 3147, 23464, 57128, 1254, 45, 23247, 1347, 145, 123};
    vector<int> Y = {3413, 171, 58, 569, 40, 467, 2456, 246, 2684, 5, 61, 8, 258, 24524, 2, 58, 245, 674};
    int L0 = 1;
    int M = 99991;
    int n = 100000;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 99228;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> X = {0};
    vector<int> Y = {1, 2, 3, 4, 5, 6, 7, 0};
    int L0 = 1;
    int M = 100;
    int n = 8;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> X = {100000};
    vector<int> Y = {900000, 0, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000};
    int L0 = 900000;
    int M = 1000000;
    int n = 10;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
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
    vector<int> X = {2, 3, 4, 5, 6, 7};
    vector<int> Y = {1, 0};
    int L0 = 4;
    int M = 15;
    int n = 10;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> X = {1};
    vector<int> Y = {10};
    int L0 = 0;
    int M = 1000000;
    int n = 100000;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> X = {1};
    vector<int> Y = {999990};
    int L0 = 999995;
    int M = 1000000;
    int n = 100000;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> X = {1};
    vector<int> Y = {0};
    int L0 = 1234;
    int M = 99991;
    int n = 99999;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> X = {1};
    vector<int> Y = {1};
    int L0 = 50000;
    int M = 100000;
    int n = 99998;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 50001;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> X = {1};
    vector<int> Y = {99999};
    int L0 = 50000;
    int M = 100000;
    int n = 100000;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 50001;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> X = {999999};
    vector<int> Y = {999995, 5};
    int L0 = 500000;
    int M = 1000000;
    int n = 99999;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> X = {999999};
    vector<int> Y = {4, 999995};
    int L0 = 1;
    int M = 1000000;
    int n = 100000;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 50000;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> X = {0};
    vector<int> Y = {1, 3, 2};
    int L0 = 1;
    int M = 10;
    int n = 3;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> X = {0};
    vector<int> Y = {2, 1, 3};
    int L0 = 2;
    int M = 10;
    int n = 3;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> X = {0};
    vector<int> Y = {2, 3, 1};
    int L0 = 2;
    int M = 10;
    int n = 3;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> X = {0};
    vector<int> Y = {3, 1, 2};
    int L0 = 3;
    int M = 10;
    int n = 3;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> X = {1};
    vector<int> Y = {3000};
    int L0 = 0;
    int M = 900000;
    int n = 100000;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 99568;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> X = {1};
    vector<int> Y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 999900};
    int L0 = 999000;
    int M = 1000000;
    int n = 99901;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 99900;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> X = {1};
    vector<int> Y = {999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 100};
    int L0 = 5;
    int M = 1000000;
    int n = 99997;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {32, 31, 29, 30, 25, 26, 28, 27, 17, 18, 20, 19, 24, 23, 21, 22, 1, 2, 4, 3, 8, 7, 5, 6, 16, 15, 13, 14, 9, 10, 12, 11};
    int L0 = 32;
    int M = 100;
    int n = 32;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> X = {234, 56, 567, 3147, 23464, 57128, 1254, 45, 23247, 1347, 145, 123};
    vector<int> Y = {3413, 171, 58, 569, 40, 467, 2456, 246, 2684, 5, 61, 8, 258, 24524, 2, 58, 245, 674};
    int L0 = 1;
    int M = 99991;
    int n = 100000;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 99228;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> X = {1};
    vector<int> Y = {999999};
    int L0 = 0;
    int M = 1000000;
    int n = 100000;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> X = {567, 5234, 42};
    vector<int> Y = {3434, 5342, 3245};
    int L0 = 563653;
    int M = 1000000;
    int n = 100000;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 99681;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> X = {1};
    vector<int> Y = {1};
    int L0 = 1;
    int M = 3;
    int n = 3;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> X = {1};
    vector<int> Y = {1};
    int L0 = 1;
    int M = 2;
    int n = 2;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> X = {1};
    vector<int> Y = {1};
    int L0 = 1;
    int M = 2;
    int n = 100000;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 50001;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> X = {0};
    vector<int> Y = {3, 4, 2, 1};
    int L0 = 3;
    int M = 10000;
    int n = 4;
    BubbleSortIterations* pObj = new BubbleSortIterations();
    clock_t start = clock();
    int result = pObj->numIterations(X, Y, L0, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15193859&rd=10770&pm=7854
********************************************************************************
#define ll long long 
#line 83 "BubbleSortIterations.cpp" 
#include <iostream> 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <string> 
#include <sstream> 
#include <vector> 
#include <algorithm> 
#include <queue> 
#include <utility>  
#include <map> 
#include <set> 
 
using namespace std; 
 
#define cisti(X) memset(X, 0, sizeof(X)) 
#define loop(i, X) for(int i = 0; i<(X); i++) 
#define loopi(X) loop(i, X) 
#define loopj(X) loop(j, X)  
 
class BubbleSortIterations { 
  public: 
    int numIterations(vector <int> X, vector <int> Y, int L0, int M, int n) { 
 
      ll a[100100], b[100100]; 
      int last[1000010]; 
      int last2[1000010]; 
      memset(last, -1, sizeof(last)); 
      cisti(last2); 
      a[0] = L0; 
      b[0] = a[0]; 
      last[L0] = 0; 
      for (int i=1; i<n; i++){ 
        a[i] = (a[i-1] * (ll)X[i % X.size()] + (ll)Y[i % Y.size()]) % M; 
        last[a[i]] = i; 
        b[i] = a[i]; 
      }; 
      sort(b, b + n); 
      loopi(n) last2[b[i]] = i; 
      int res =0; 
      loopi(M){ 
        if (last[i] == -1) continue; 
        res = max(res, last[i] - last2[i]); 
      }; 
      return res + 1; 
 
 
    }; 
 
     
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/