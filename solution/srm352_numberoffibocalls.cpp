/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2292
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

class NumberofFiboCalls {
public:
    vector<int> fiboCallsMade(int n);
};

vector<int> NumberofFiboCalls::fiboCallsMade(int n) {
    vector<int> ret;
    return ret;
}


int test0() {
    int n = 0;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 1;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 2;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 3;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 4;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 5;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 6;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 8};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 7;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 13};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 8;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 21};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 9;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 34};
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
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34, 55};
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
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {55, 89};
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
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {89, 144};
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
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {144, 233};
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
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {233, 377};
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
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {377, 610};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 16;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {610, 987};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 17;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {987, 1597};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 18;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1597, 2584};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 19;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2584, 4181};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 20;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4181, 6765};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 21;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6765, 10946};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 22;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10946, 17711};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 23;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17711, 28657};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 24;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28657, 46368};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 25;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {46368, 75025};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 26;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75025, 121393};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 27;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {121393, 196418};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 28;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {196418, 317811};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 29;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {317811, 514229};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 30;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {514229, 832040};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 31;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {832040, 1346269};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 32;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1346269, 2178309};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 33;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2178309, 3524578};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 34;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3524578, 5702887};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 35;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5702887, 9227465};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 36;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9227465, 14930352};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 37;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14930352, 24157817};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 38;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24157817, 39088169};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 39;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39088169, 63245986};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 40;
    NumberofFiboCalls* pObj = new NumberofFiboCalls();
    clock_t start = clock();
    vector<int> result = pObj->fiboCallsMade(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {63245986, 102334155};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=10709&pm=2292
********************************************************************************
#include<algorithm>  
#include<sstream> 
#include<string>  
#include<vector>  
using namespace std;  
   
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it)  
#define pb push_back  
#define all(x) (x).begin(),(x).end()  
#define CLEAR(x,with) memset(x,with,sizeof(x))  
#define sz size()  
typedef long long ll; 
vector<int> cache[41]; 
struct NumberofFiboCalls  
{ 
  vector <int> fiboCallsMade(int n)  
  { 
    if(cache[n].sz) return cache[n]; 
    vector<int>& ret = cache[n]; 
    ret.resize(2); 
    if(n == 0) ret[0] = 1;  
    else if(n == 1) ret[1] = 1; 
    else 
    { 
      vector<int> a = fiboCallsMade(n-1); 
      vector<int> b = fiboCallsMade(n-2); 
      ret[0] = a[0] + b[0]; 
      ret[1] = a[1] + b[1]; 
    } 
    return ret; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/