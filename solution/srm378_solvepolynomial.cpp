/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8273
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

class SolvePolynomial {
public:
    vector<int> integerRoots(vector<int> X, vector<int> Y, int n);
};

vector<int> SolvePolynomial::integerRoots(vector<int> X, vector<int> Y, int n) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> X = {-4, 2, 2};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> X = {1, 2, 0};
    vector<int> Y = {2, 0, 0, 0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> X = {1, 4, 4};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> X = {-15, -10, 2, 1};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> X = {735134400, 1383, 4121, 18875, 10463, 13512, 19603, 28679, 13483, 9509, 1701, 13383, 24425, 7923, 7978, 21702, 30989, 20676, 18547, 28130, 10944};
    vector<int> Y = {34, 23, 6, 5, 3, 5, 4, 34, 37, 5, 6, 21, 17, 9};
    int n = 10000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> X = {1};
    vector<int> Y = {0};
    int n = 0;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> X = {-1000000000};
    vector<int> Y = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int n = 0;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> X = {1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1, 1};
    vector<int> Y = {0, 1, 2, 3, 4};
    int n = 0;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> X = {10, 1, 5};
    vector<int> Y = {2};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-10};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> X = {10, 1, 5};
    vector<int> Y = {1};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> X = {1000000000, 999999999};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> X = {1000000000, 999900000};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> X = {-1000000000, 480000, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> X = {154, -58, 4};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> X = {-35, 11, 6};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> X = {-4, 8, 4};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> X = {5, 2, 1};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> X = {500, 50, 5};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> X = {500, 50, 5, 0};
    vector<int> Y = {0, 0, 0, 1};
    int n = 5;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> X = {-16, 20, -8, 1, 0, 0, 0, 0, 0};
    vector<int> Y = {0};
    int n = 8;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> X = {1, 25, 300, 2300, 12650, 53130, 177100, 480700, 1081575, 2042975, 3268760, 4457400, 5200300, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {25, 23, 21, 19, 17, 15, 13, 11, 9, 7, 5, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n = 25;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> X = {1, 0, -24, 0, 276, 0, -2024, 0, 10626, 0, -42504, 0, 134596, 0, -346104, 0, 735471, 0, -1307504, 0, 1961256, 0, -2496144, 0, 2704156, 0, -2496144, 0, 1961256, 0, -1307504, 0, 735471, 0, -346104, 0, 134596, 0, -42504, 0, 10626, 0, -2024, 0, 276, 0, -24, 0, 1};
    vector<int> Y = {0};
    int n = 48;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> X = {0, -203212800, -25401600, 307216512, 38402064, -122333120, -15291640, 19803784, 2475473, -1532960, -191620, 59696, 7462, -1120, -140, 8, 1};
    vector<int> Y = {0};
    int n = 16;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> X = {735134400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = 2451;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> X = {-1225, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> Y = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = 2451;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 1};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    vector<int> Y = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = 2401;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> X = {735134400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    vector<int> Y = {0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0};
    int n = 1201;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> X = {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    vector<int> Y = {0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0};
    int n = 1201;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> X = {536870912, 536870912, 536870912, 536870912, 536870912, 536870912, 536870912, 536870912};
    vector<int> Y = {0};
    int n = 7;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> X = {536870912, -536870912};
    vector<int> Y = {0};
    int n = 7;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> X = {170};
    vector<int> Y = {0};
    int n = 0;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> X = {255, 0, 5};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> X = {238, 119, 0, 3};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> X = {68, 170, 0, 0, 2};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> X = {102, 0, 102, 51, 0, 1};
    vector<int> Y = {0};
    int n = 5;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> X = {153, 51, 153, 272, 0, 11};
    vector<int> Y = {0};
    int n = 5;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> X = {85, 17, 119, 204, 0, 0, 7};
    vector<int> Y = {0};
    int n = 6;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> X = {272, 204, 34, 85, 119, 34, 0, 4};
    vector<int> Y = {0};
    int n = 7;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> X = {119, 170, 170, 0, 85, 119, 119, 0, 2};
    vector<int> Y = {0};
    int n = 8;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> X = {0, 0, 15};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> X = {0, 221, 85, 0, 13};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> X = {0, 153, 170, 221, 255, 255, 119, 0, 10};
    vector<int> Y = {0};
    int n = 8;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> X = {0, 17, 0, 136, 34, 68, 85, 255, 0, 102, 272, 153, 119, 153, 119, 0, 6};
    vector<int> Y = {0};
    int n = 16;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> X = {136, 0, 7};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> X = {136, 102, 187, 0, 6};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> X = {136, 68, 85, 255, 119, 272, 51, 0, 5};
    vector<int> Y = {0};
    int n = 8;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> X = {136, 0, 0, 68, 17, 34, 187, 119, 0, 51, 136, 221, 51, 221, 51, 0, 3};
    vector<int> Y = {0};
    int n = 16;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> X = {153, 0, 7};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> X = {153, 102, 187, 0, 6};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> X = {153, 68, 85, 255, 119, 272, 51, 0, 5};
    vector<int> Y = {0};
    int n = 8;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> X = {153, 0, 0, 68, 17, 34, 187, 119, 0, 51, 136, 221, 51, 221, 51, 0, 3};
    vector<int> Y = {0};
    int n = 16;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> X = {17, 0, 15};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> X = {17, 221, 85, 0, 13};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> X = {17, 153, 170, 221, 255, 255, 119, 0, 10};
    vector<int> Y = {0};
    int n = 8;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> X = {238, 170, 170, 0, 85, 119, 119, 0, 2};
    vector<int> Y = {0};
    int n = 8;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> X = {34, 221, 85, 0, 13};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> X = {136, 68, 85, 255, 119, 272, 51, 0, 5};
    vector<int> Y = {0};
    int n = 8;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> X = {17, 272, 272, 51, 17, 34, 187, 119, 0, 51, 136, 221, 51, 221, 51, 0, 3};
    vector<int> Y = {0};
    int n = 16;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> X = {170, 238, 272, 119, 34, 68, 85, 255, 0, 102, 272, 153, 119, 153, 119, 0, 6};
    vector<int> Y = {0};
    int n = 16;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> X = {10, 1};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-10};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> X = {57777, 1};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-57777};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> X = {-56, -19, 40, 44, 54, 20, -13, 57, 15, 38, 80, 55, -72, -85, -84, 24, -85, 72, 11, -87, 38, -86, 23, 40, -65};
    vector<int> Y = {12, 34, 12, 8, 5, 11, 4, 16, 22, 48, 38, 44, 15, 45, 49, 9, 41};
    int n = 12;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> X = {81, 78, 68, 16, -7, 80, 26, 34, 93, 53, -24, 22, -77, -85, 17, 24, 12, 71, 15, 17, -16, 57, 27, 69, -74, -100, 46, -27, 76, 49};
    vector<int> Y = {11, 46, 42, 28, 25, 25, 16, 45, 48, 38, 40, 43, 41, 6, 5, 21, 16, 47, 4, 49, 33, 32, 11, 20};
    int n = 6;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> X = {18, -40, -97, 59, -2, -3, -8, -93, 78, 0, 74, 84, 63, 66, 90, -35, -97, -73, -83, -48, -66, 49, -24, -80, 26, 77, 39, 4, -81, 55, 3, 96, -73, 18, -60, 3, -97, -66, 49, -67, -97, 86, -73, -18, 90, -65, -50, -27};
    vector<int> Y = {9, 45, 10, 12, 16, 21, 47, 27, 31, 2, 30, 22, 39, 34, 4, 4, 43, 50, 5, 30, 37, 30, 44, 3, 27, 5, 5, 38};
    int n = 9;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> X = {16, 1, -11};
    vector<int> Y = {11};
    int n = 5;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-16};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> X = {81, 1};
    vector<int> Y = {6, 38, 50};
    int n = 15;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-81};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> X = {-1000000000, 1};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000000};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> X = {1000000000, 1};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1000000000};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> X = {999950884, -63244, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31622};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> X = {999950884, 999887640, -63243, 1};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 31622};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> X = {-999950884, 63244, 999950883, -63244, 1};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 1, 31622};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> X = {999887641, 63242, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-31621};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> X = {-999887641, 999824399, 63241, 1};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-31621, 1};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> X = {-999887641, -63242, 999887640, 63242, 1};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-31621, -1, 1};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> X = {-9, 1, 9, -1, -6, -9, -5, 5, -7, 9, 2, -4, 8, -4, 4, 8, 7, 7, -3, 8, -9, -9, 3, -9, 3, -1, -4, -8, -10, 2, 2, 7, 3};
    vector<int> Y = {19, 21, 2};
    int n = 1395;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> X = {0, 5, 1, -10, 5, -1, 0, 5, 2, 6, 5, 0, 3, -10, -9, 7, -9, 7, -7, 0, 5};
    vector<int> Y = {16, 10, 48, 1, 7, 30, 28, 24, 50, 19, 45, 2, 6, 16, 44, 5, 38, 30, 26, 23, 27, 3, 35, 1, 20, 18, 27, 37, 33, 37, 39, 19, 39, 38, 13, 38, 23, 11, 40};
    int n = 51;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> X = {-72, -8};
    vector<int> Y = {36, 18, 12, 30, 30};
    int n = 49;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-9};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> X = {-7, -3, 7, 6, 0, -5, -3, 2, -7};
    vector<int> Y = {1, 21};
    int n = 5055;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 1};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> X = {2, 2, -2, 2, -3, -6, -2, -7, 10, 1, -2, 5};
    vector<int> Y = {19, 27, 35, 20, 10, 45, 48, 2, 29};
    int n = 164;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> X = {2, -3};
    vector<int> Y = {30, 15, 2, 12, 26, 45, 13, 47, 26, 13, 3, 15, 50, 20, 10, 44, 45, 15, 48, 23, 13, 7, 0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 2};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> X = {0, -97, -89, 61, 57, 15, -98, -23, 16, 57, -40, 94, 17, -10, -60, 5, -96, -30, 17, 79, 43, -80, -78, 70, -93, 2, 85, -1, 49, -65, -4, -19, 35, -98, 53, -81, -36, 64, 80, -39, -79, -8};
    vector<int> Y = {16, 41, 0, 14, 38, 48, 23, 4, 20, 4, 13, 41, 27, 46, 19, 47, 23, 2, 24, 44, 40, 23, 21, 21, 0, 44, 23, 36, 44};
    int n = 52;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> X = {0, -10, -8, -10, 10, -5, -8, -7, -6, -7, 7, 1, -9, 4, 2, 2, 7, -1, -8, 4, -10, -4, -9, 10, 3, 8, 3, 0, 4, -7, 6, -2, -3, -7, 7, -8, -4, -5, 10, 8};
    vector<int> Y = {50, 27, 48, 14, 12, 26, 13, 37, 34, 23, 44, 27, 19, 36, 32, 33, 32, 18, 25, 37, 14, 42, 3};
    int n = 92;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> X = {84, -7};
    vector<int> Y = {32, 2};
    int n = 5699;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> X = {-8, 4};
    vector<int> Y = {44};
    int n = 2199;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> X = {0, -6, -5, 2, 1};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-3, -1, 0, 2};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> X = {180000180, -38999859, -25000064, 2999978, 1000004, 1};
    vector<int> Y = {0};
    int n = 5;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1000001, -5, -4, 3};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> X = {65536, -1, 0, 0, 1};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> X = {800000000, 80000, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> Y = {4};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-20000};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> X = {-977771176, -347146353, 52983272, -457767504, 358724203, -145336800, -923833776, -731436520, -320551246, -164767161, -566563875, 948705044, 753131334, -968286563, 211081101, -363904642, -251591409, 425699526, -993049659, 324406505, -691835130, -953794468, 456283349, -895742566, 904651322, -552860319, -412175286, 333817910, 254716748, -639774321, -341491833, 129461925, 13079327, 711491440, 671694421, -775680118, -581329008, 747860645, -507116638, 98119746, -564390163, -73680513, -100658858, -958742477, -41967076, -889577757, -322647119, 706441515, 388638121, -463180426};
    vector<int> Y = {3, 45, 30, 1, 16, 22, 39, 30, 40, 48, 11, 6, 35, 38, 41, 8, 41, 22, 1, 49, 8, 19, 8, 11, 21, 24, 0, 23, 26, 49, 23, 3, 17, 2, 5, 7, 49, 44, 38, 38, 15, 49, 44, 0, 10, 9, 33, 25, 31, 34};
    int n = 10000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> X = {0, 0, -1000000000, 1};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1000000000};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65536, 131072};
    vector<int> Y = {0};
    int n = 49;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> X = {0, 10, 5};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2, 0};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> X = {0, 0, 4, -2, -2, 0};
    vector<int> Y = {0};
    int n = 5;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2, 0, 1};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> X = {0, 1};
    vector<int> Y = {0, 0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576, 1048576};
    vector<int> Y = {0};
    int n = 100;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> X = {-201838042, 791798930, -361594123, 893475066, -321127951, 897556480, 615983779, 41461893, 287916127, -374882104, -165244471, 737880103, 894531394, -70971712, 494867109, 378306033, 170925420, -850966667, -835924195, -749166642, 558304148, 187073122, 88169908, -749119426, 277984823, -571761889, 767967947, -432314903, -212695002, 789689766, 504915505, -5308650, 36292909, 851386371, 58237918, -515847788, -573123791, -298908283, 335994991, 252908304, 683852114, 101176229, -704032315, 835656771, 32588609, 8893861, -659426004, 577846057, 401724475, -363362728};
    vector<int> Y = {38, 44, 21, 44, 13, 40, 17, 9, 15, 6, 3, 26, 6, 37, 28, 46, 17, 1, 46, 25, 23, 11, 20, 22, 14, 11, 22, 31, 30, 6, 2, 4, 29, 3, 5, 43, 2, 31, 32, 36, 44, 0, 2, 27, 28, 15, 21, 19, 17, 29};
    int n = 10000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> X = {-901800900, 0, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-30030, 30030};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> X = {0, 1000000000, 1, 0, 0};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1000000000, 0};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> X = {0, 1, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> X = {0, 4, 4, 1};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2, 0};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> X = {0, -1, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> X = {1000000000, 1};
    vector<int> Y = {0};
    int n = 10000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1};
    vector<int> Y = {0};
    int n = 10000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 1};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> X = {-9, 0, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-3, 3};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> X = {735134400};
    vector<int> Y = {0};
    int n = 10000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> X = {-1000000000};
    vector<int> Y = {0, 0, 0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> X = {0, 0, 0, 479001600, 479001600};
    vector<int> Y = {0, 1};
    int n = 1000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> X = {735134400, 1};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-735134400};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> X = {0, 2, 2};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> X = {0, 0, 0, 479001600, 479001600};
    vector<int> Y = {0, 1};
    int n = 10000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> X = {0, 1};
    vector<int> Y = {0, 1};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> X = {-1000000000, 1};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000000};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> X = {4005, 1, 0, 0};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-4005};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> X = {239017, 0};
    vector<int> Y = {0, 1};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> X = {8, -6, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> X = {0, 1383, 4121, 18875, 10463, 13512, 19603, 28679, 13483, 9509, 1701, 13383, 24425, 7923, 7978, 21702, 30989, 20676, 18547, 28130, 10944};
    vector<int> Y = {34, 23, 6, 5, 3, 5, 4, 34, 37, 5, 6, 21, 17, 9};
    int n = 10000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> X = {0, 0, 81, -72, -18, 8, 1};
    vector<int> Y = {0};
    int n = 6;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-9, -3, 0, 1, 3};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> X = {0, 1, 2, 3, 4, 5};
    vector<int> Y = {0};
    int n = 6;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> X = {0, 1, 0};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> X = {0, 0, 100000, 1};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-100000, 0};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> X = {0, 0, 0, 0, -4, 2, 2, 0, 0, 0, 0};
    vector<int> Y = {0};
    int n = 10;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2, 0, 1};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> X = {0, 999999999, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-999999999, 0};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> X = {0, 1000000000};
    vector<int> Y = {0, 1};
    int n = 9999;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> X = {-4, -2, 6};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> X = {0, 1, -1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> X = {0, 1, 2, 3, 4};
    vector<int> Y = {0, 1, 2, 3, 4, 5, 10};
    int n = 10000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> X = {999999999, 1000000000, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-999999999, -1};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> X = {28229, 2};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> X = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> Y = {6, 4, 6, 7, 8, 5};
    int n = 10000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> X = {0, 1, 1};
    vector<int> Y = {0, 1, 2};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> X = {0, 100};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> X = {0, 0, 0, 1, 2, 1};
    vector<int> Y = {0};
    int n = 5;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> X = {0, 999999999, -1000000000, 1};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 999999999};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> X = {0, 1, -1};
    vector<int> Y = {1, 0, 0};
    int n = 10000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> X = {-4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 1};
    vector<int> Y = {0};
    int n = 50;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> X = {0, -100, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 100};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> X = {0, 65536, 65535};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1};
    vector<int> Y = {0};
    int n = 70;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1000000, 0};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> X = {0, 0, 4, -4, 1};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> X = {0, 1, 1};
    vector<int> Y = {0, 0, 0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> X = {0, 0, 0, -900000000, 0, 1};
    vector<int> Y = {0};
    int n = 6;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-30000, 0, 30000};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> X = {0, 0, 0, 0, 16, 10, 1};
    vector<int> Y = {0};
    int n = 6;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-8, -2, 0};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    vector<int> Y = {0};
    int n = 32;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> X = {100000, 1};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-100000};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> X = {0, -2, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> X = {0, -4, 2, 2};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2, 0, 1};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> X = {0, 1, 2, 3};
    vector<int> Y = {1, 2};
    int n = 10000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> X = {0, 12, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-12, 0};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> X = {735134400, 1383, 4121, 18875, 10463, 13512, 19603, 28679, 13483, 9509, 1701, 13383, 24425, 7923, 7978, 21702, 30989, 20676, 18547, 28130, 10944, 12312312};
    vector<int> Y = {34, 23, 6, 5, 3, 5, 4, 34, 37, 5, 6, 21, 17, 9, 12, 12};
    int n = 9999;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> X = {1000000, -1};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> X = {1000000, 1};
    vector<int> Y = {0, 0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1000000};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> X = {-3600, 0, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-60, 60};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> X = {999999937, 4444, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> X = {1};
    vector<int> Y = {0};
    int n = 0;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> X = {0, 0, 100000000, 1};
    vector<int> Y = {0};
    int n = 4;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-100000000, 0};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> X = {0, 12, 1};
    vector<int> Y = {0};
    int n = 2999;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-12, -1, 0};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> X = {0, 0, 1};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> X = {0, -38999859, -25000064, 2999978, 1000004, 1};
    vector<int> Y = {0};
    int n = 5;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> X = {536870912, 7};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> X = {-2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1};
    vector<int> Y = {0};
    int n = 39;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> X = {999999999, 1};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-999999999};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> X = {1000000000, 1};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1000000000};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> X = {256, -1, 0, 0, 0, 0, 0, 0, 1};
    vector<int> Y = {0};
    int n = 8;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> X = {12, -8, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> X = {30011, 1};
    vector<int> Y = {0, 0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-30011};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> X = {6, 5, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-3, -2};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> X = {1, -3, 2};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> X = {4001, 1, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {0};
    int n = 5;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-4001};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> X = {1000000000, 2};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-500000000};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> X = {0, 200, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-200, 0};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> X = {0, 1, 2, 1};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> X = {-1, -1, 2, 2};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> X = {0, 0, 0, 0, 0, -4, 2, 2};
    vector<int> Y = {8};
    int n = 8;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2, 0, 1};
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> X = {-4, 2, 2};
    vector<int> Y = {0};
    int n = 10000;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> X = {0, 2, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2, 0};
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> X = {0, 1, 1};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576, 1048576};
    vector<int> Y = {0};
    int n = 35;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> X = {16, -2};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8};
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> X = {-4, 2, 2};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2, 1};
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> X = {0, 1};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> X = {0, -6, -1, 1};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2, 0, 3};
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 65536};
    vector<int> Y = {0};
    int n = 9;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> X = {0, -6, 1, 1};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-3, 0, 2};
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> X = {0, 1, 4, 4};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> X = {0, -268435456, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n = 20;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> X = {0, 1};
    vector<int> Y = {0};
    int n = 101;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 999999937, 1};
    vector<int> Y = {0};
    int n = 14;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-999999937, 0};
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> X = {0, 1, 2, 3, 4, 5, 6, 7};
    vector<int> Y = {3, 4, 5, 6, 7, 8, 9, 10};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> X = {1000000000, 7};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> X = {271000, 450000, 500000, 1000};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> X = {1, 0};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> X = {0, 0, 0, 0, 1000000000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {0};
    int n = 15;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1000000000, 0};
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    vector<int> Y = {0};
    int n = 16;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> X = {0, -1, 4, 4};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> X = {10000, 200, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-100};
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> X = {26, -15, 1};
    vector<int> Y = {0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 13};
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> X = {9, 3, 7, 7};
    vector<int> Y = {2, 2};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-3};
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> X = {0, 2, 1};
    vector<int> Y = {0, 0, 0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2, 0};
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1000000000, 1};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n = 49;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1000000000};
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 256};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n = 49;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4};
    vector<int> Y = {0};
    int n = 40;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> X = {65536, 65535, 65535, 65535};
    vector<int> Y = {0, 1, 2, 3};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> X = {-65536, 1, 0, 65536};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> X = {-2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    vector<int> Y = {0};
    int n = 32;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> X = {3, 0};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> X = {0, 1, 1};
    vector<int> Y = {0, 0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0};
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> X = {-1000000000, 1, -1000000000, 1};
    vector<int> Y = {0};
    int n = 3;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000000};
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> X = {6, 696904438};
    vector<int> Y = {0};
    int n = 1;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> X = {0, 8, 1};
    vector<int> Y = {0, 0, 0};
    int n = 2;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-8, 0};
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> X = {536870912};
    vector<int> Y = {0};
    int n = 7;
    SolvePolynomial* pObj = new SolvePolynomial();
    clock_t start = clock();
    vector<int> result = pObj->integerRoots(X, Y, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390224&rd=10798&pm=8273
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
 
#define FOR(i,n) for (int i=0; i<(int)(n); i++)
typedef long long int64;
typedef vector<int> vi;
 
struct SolvePolynomial {
  set<int> ans;
  int n,a[20000];
  void check(int x) {
    int64 tmp=0;
    for (int i=n; i>=0; i--) {
      tmp=tmp*x+a[i];
      if (abs(x)!=1 && abs(tmp)>2000000000) return;
    }
    if (!tmp) ans.insert(x);
  }
  vector <int> integerRoots(vector <int> X, vector <int> Y, int _n) {
    n=_n;
    FOR(i,n+1) {
      int p=i%X.size(),q=(i+Y[i%Y.size()])%X.size();
      a[i]=X[p];
      X[p]=X[q];
      X[q]=a[i];
    }
    if (!a[0]) ans.insert(0);
    vi t;
    int first=0; while (!a[first]) first++;
    for (int i=first; i<=n; i++) a[i-first]=a[i]; n-=first;
    int a0=abs(a[0]);
    for (int d=1; d*d<=a0; d++) if (a0%d==0) {
      check(d);
      check(-d);
      check(a0/d);
      check(-a0/d);
    }
    return vi(ans.begin(),ans.end());
  }
};
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/