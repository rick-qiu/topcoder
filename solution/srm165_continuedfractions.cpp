/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1630
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

class ContinuedFractions {
public:
    vector<int> squareRoot(int n);
};

vector<int> ContinuedFractions::squareRoot(int n) {
    vector<int> ret;
    return ret;
}


int test0() {
    int n = 2;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 41;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 2, 2, 12};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 63;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 1, 14};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 158;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 1, 1, 3, 12, 3, 1, 1, 24};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 919;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 3, 5, 1, 2, 1, 2, 1, 1, 1, 2, 3, 1, 19, 2, 3, 1, 1, 4, 9, 1, 7, 1, 3, 6, 2, 11, 1, 1, 1, 29, 1, 1, 1, 11, 2, 6, 3, 1, 7, 1, 9, 4, 1, 1, 3, 2, 19, 1, 3, 2, 1, 1, 1, 2, 1, 2, 1, 5, 3, 60};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 3;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 5;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 6;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 4};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 7;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 1, 4};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 8;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 4};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 10;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 11;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 6};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 12;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 6};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 13;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 1, 1, 1, 6};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 14;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 2, 1, 6};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 15;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 6};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 17;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 18;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 8};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 19;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 1, 3, 1, 2, 8};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 20;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 8};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 1000;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 1, 1, 1, 1, 1, 6, 2, 2, 15, 2, 2, 6, 1, 1, 1, 1, 1, 62};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 512;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 1, 1, 1, 2, 6, 11, 6, 2, 1, 1, 1, 44};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 343;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 1, 1, 11, 1, 5, 3, 1, 17, 1, 3, 5, 1, 11, 1, 1, 36};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 519;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 1, 3, 1, 1, 2, 1, 2, 3, 7, 3, 2, 1, 2, 1, 1, 3, 1, 44};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 513;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 1, 1, 1, 5, 1, 4, 5, 2, 5, 4, 1, 5, 1, 1, 1, 44};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 511;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 1, 1, 1, 1, 6, 1, 14, 4, 1, 21, 1, 4, 14, 1, 6, 1, 1, 1, 1, 44};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 997;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 1, 1, 2, 1, 4, 1, 1, 4, 1, 2, 1, 1, 62};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 716;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 1, 3, 7, 2, 1, 1, 6, 10, 1, 1, 4, 2, 1, 12, 1, 2, 4, 1, 1, 10, 6, 1, 1, 2, 7, 3, 1, 52};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 434;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 1, 4, 1, 40};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 396;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 1, 8, 1, 38};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 212;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 1, 1, 3, 1, 1, 1, 6, 1, 1, 1, 3, 1, 1, 28};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 108;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 2, 1, 1, 4, 1, 1, 2, 20};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 76;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 1, 2, 1, 1, 5, 4, 5, 1, 1, 2, 1, 16};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 499;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 2, 1, 21, 1, 2, 44};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 777;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 1, 6, 1, 54};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 248;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 1, 2, 1, 30};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 998;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 1, 1, 2, 4, 8, 1, 3, 1, 30, 1, 3, 1, 8, 4, 2, 1, 1, 62};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 937;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 1, 1, 1, 1, 3, 4, 2, 3, 6, 1, 1, 19, 1, 6, 1, 2, 2, 1, 6, 1, 19, 1, 1, 6, 3, 2, 4, 3, 1, 1, 1, 1, 60};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 991;
    ContinuedFractions* pObj = new ContinuedFractions();
    clock_t start = clock();
    vector<int> result = pObj->squareRoot(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 2, 12, 10, 2, 2, 2, 1, 1, 2, 6, 1, 1, 1, 1, 3, 1, 8, 4, 1, 2, 1, 2, 3, 1, 4, 1, 20, 6, 4, 31, 4, 6, 20, 1, 4, 1, 3, 2, 1, 2, 1, 4, 8, 1, 3, 1, 1, 1, 1, 6, 2, 1, 1, 2, 2, 2, 10, 12, 2, 62};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=287568&rd=4630&pm=1630
********************************************************************************
#include <vector> 
#include <sstream> 
#include <algorithm> 
#include <cctype> 
#include <cmath> 
#include <cstdlib> 
#include <queue> 
#include <set> 
#include <map> 
using namespace std; 
typedef long long ll; 
typedef vector<int> vi; typedef vector<vi> vvi; 
typedef vector<string> vs; typedef vector<vs> vvs; 
typedef istringstream iss; typedef ostringstream oss; 
#define pq priority_queue 
#define let(a,b) typeof(b) a(b) 
#define all(a) a.begin(),a.end() 
#define forall(a,b) for (let(a,b.begin());a!=b.end();a++) 
#define forrall(a,b) for (let(a,b.rbegin());a!=b.rend();a++) 
#define contains(a,b) (find(all(a),b)!=a.end()) 
template<typename T> string str(const T &t){oss s;s<<t;return s.str();} 
template<typename T> ll Int(const T &t){stringstream s;s<<t;ll r;s>>r;return r;} 
template<typename T> double Double(const T &t){stringstream s;s<<t;double r;s>>r;return r;} 
ll gcd(ll a, ll b){return b?gcd(b,a%b):a;} 
class ContinuedFractions{ 
public: 
vector <int> squareRoot(int n) 
{ 
vector <int> ans; 
set<pair<int,int> > got; 
int a=0,b=1,sn=sqrt(double(n)); 
while (1) 
{ 
    int k=(sn-a)/b; 
    int na = -(a+b*k); 
    int nb = (n-(a+b*k)*(a+b*k))/b; 
    ans.push_back(k); 
    if (!got.insert(make_pair(na,nb)).second) return ans; 
    a=na; 
    b=nb; 
} 
return ans; 
} 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/