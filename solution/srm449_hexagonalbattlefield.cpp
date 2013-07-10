/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10549
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

class HexagonalBattlefield {
public:
    int countArrangements(vector<int> X, vector<int> Y, int N);
};

int HexagonalBattlefield::countArrangements(vector<int> X, vector<int> Y, int N) {
    int ret;
    return ret;
}


int test0() {
    vector<int> X = {-2, 0, 1, 1, 0};
    vector<int> Y = {-2, 0, 1, 0, 2};
    int N = 3;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
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
    vector<int> Y = {0};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> X = {0};
    vector<int> Y = {0};
    int N = 3;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> X = {-1, 0, 0, 1, 2};
    vector<int> Y = {0, 0, 1, 0, 0};
    int N = 3;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> X = {0, 1};
    vector<int> Y = {0, 1};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
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
    vector<int> X = {-1, 0};
    vector<int> Y = {-1, 0};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
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
    vector<int> X = {-1, 0};
    vector<int> Y = {0, 0};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> X = {-1, 0, 1};
    vector<int> Y = {0, 1, 1};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
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
    vector<int> X = {0, 1, 1};
    vector<int> Y = {1, 1, 0};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> X = {1, 1, 0};
    vector<int> Y = {1, 0, -1};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> X = {1, 0, -1};
    vector<int> Y = {0, -1, -1};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> X = {-1, -1, 0};
    vector<int> Y = {-1, 0, 1};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> X = {-1, 0, 1};
    vector<int> Y = {-1, 0, 1};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> X = {-1, 0, 1};
    vector<int> Y = {0, 0, 0};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> X = {0, 0, 0};
    vector<int> Y = {1, 0, -1};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> X = {0, 1, -1, 0, 1};
    vector<int> Y = {0, 0, -1, -1, 1};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> X = {0, 0, 0, 2, 2, 2, 1, 1, -1, -1, -3, -3, -3, -2, -3};
    vector<int> Y = {3, 2, 1, 3, 2, 1, -2, -1, -3, -2, -3, -2, 0, 0, -1};
    int N = 4;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
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
    vector<int> Y = {0};
    int N = 4;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 78408;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> X = {0, -3, -2, -1, 0, 1, 2, 3, 3, 3, 3, 2, 1, 0, -1, -2, -3, -3, -3};
    vector<int> Y = {0, 0, 1, 2, 3, 3, 3, 3, 2, 1, 0, -1, -2, -3, -3, -3, -3, -2, -1};
    int N = 4;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> X = {-1, 0, 0, 1, 2};
    vector<int> Y = {0, 0, 1, 0, 0};
    int N = 3;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 4, 4, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -5, -4, -3, -3, -4, -4, -4, -5, -6, -6, -6, -6, 1, 2, 3, 4, 5, 5, 4, 3, 2, 5, 6, 6, 6, 6, 6};
    vector<int> Y = {7, 6, 5, 4, 3, 2, 2, 2, 2, 2, 1, 0, -1, -2, -3, -4, -5, -5, -5, -5, -5, -5, -4, -3, -2, -1, -1, 0, 1, 1, 0, -1, -2, -3, 4, 4, 4, 4, 5, 6, 6, 6, 6, 4, 4, 3, 2, 1, 0};
    int N = 8;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1424364185;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> X = {0};
    vector<int> Y = {0};
    int N = 8;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1931935224;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> X = {0, -1, 0, 1, 1, 0, -1};
    vector<int> Y = {0, 0, 1, 1, 0, -1, -1};
    int N = 8;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1961167642;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> X = {-3, -4, -4, -4, -3, -2, -2, -2, 0, 0, 3, 2, 2, 2, 3, 4, 4, 4, 0, 0, 0, -1, -2, -2, -1, 1, 2, 2, 1};
    vector<int> Y = {2, 1, 0, -1, -1, 0, 1, 2, 3, 1, 5, 4, 3, 2, 2, 3, 4, 5, -2, -3, -4, -3, -4, -5, -5, -2, -2, -3, -4};
    int N = 8;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 7, 4, 5, 6, 7, 7, 1};
    vector<int> Y = {4, 3, 2, 1, 0, -1, -1, -1, -1, -1, -1, -1, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 5, 0, 1, 2, 3, 7, 4};
    int N = 8;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 469208086;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> X = {0, -1, 0, 0, 0, 0};
    vector<int> Y = {0, -1, -1, -2, -3, -4};
    int N = 8;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> X = {0, -1, -2, -3, 1, 2, 3, 1, 2, 3, -1, -2, -3, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0, 1, 2, 3, 0, 0, 0, -1, -2, -3, -1, -2, -3, 1, 2, 3};
    int N = 8;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 633767932;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> X = {7, 7, 7, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -7, -7, -7, -7, -7, -7, -7, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 0};
    vector<int> Y = {7, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -7, -7, -7, -7, -7, -7, -7, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 0};
    int N = 8;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 605569627;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> X = {0, 1, 1, 0, -1, -1};
    vector<int> Y = {1, 1, 0, -1, -1, 0};
    int N = 8;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> X = {0};
    vector<int> Y = {0};
    int N = 7;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 605569627;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> X = {0, -1, -1, 0, 1, 1, 0};
    vector<int> Y = {0, 0, -1, -1, 0, 1, 1};
    int N = 7;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 580197178;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6};
    int N = 7;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3};
    vector<int> Y = {6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -6, 2};
    int N = 7;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1466676064;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> X = {0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -6, -6, -6, -6, -6, -6, -5, -4, -3, -2, -1, 0};
    vector<int> Y = {6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -6, -6, -6, -6, -6, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 0};
    int N = 7;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 406209421;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> X = {-1, -1, 0, 1, 1, 1, 0, -1, 4};
    vector<int> Y = {0, -1, -1, 0, 1, 2, 2, 1, 0};
    int N = 7;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1748808595;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> X = {-1, -1, 0, 1, 1, 0, 2, 3, 2, 3, -2, -3, -2, -3, 0, 0, 0, 0, 0};
    vector<int> Y = {0, -1, -1, 0, 1, 1, 2, 3, 0, 0, -2, -3, 0, 0, 2, 3, -2, -3, 0};
    int N = 7;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1628846618;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> X = {0, 1, 2, 2, 1, 0, -1, -2, -2, -1, 0};
    vector<int> Y = {6, 6, 6, 5, 4, 3, 3, 3, 4, 5, 0};
    int N = 7;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 360188106;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> X = {0};
    vector<int> Y = {0};
    int N = 6;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 406209421;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> X = {0, 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -5, -5, -5, -5, -5, -4, -3, -2, -1};
    vector<int> Y = {0, 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -5, -5, -5, -5, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
    int N = 6;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 683342244;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> X = {0, -1, -1, 0, 1, 1, 0};
    vector<int> Y = {0, 0, -1, -1, 0, 1, 1};
    int N = 6;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 960488277;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> X = {0, -1, -1, 0, 1, 1, 0, -1, -2, -2, -2, -1, 0, 1, 2, 2, 2, 1, 0};
    vector<int> Y = {0, 0, -1, -1, 0, 1, 1, 1, 0, -1, -2, -2, -2, -1, 0, 1, 2, 2, 2};
    int N = 6;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1073593597;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> X = {-1, -2, 2, 2, -1, 1, 4, 4, -5};
    vector<int> Y = {4, -1, 2, -1, -4, -4, 0, 4, 0};
    int N = 6;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1944139575;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {2, 1, 0, -1, -2, -3, -4, -5, 3, 4, 5};
    int N = 6;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 466156658;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> X = {0, 1, 2, 3, 4, 4, 4, 4, 4, 3, 2, 1, 0, -1, -2, -3, -4, -4, -4, -4, -4, -3, -2, -1, 0};
    vector<int> Y = {4, 4, 4, 4, 4, 3, 2, 1, 0, -1, -2, -3, -4, -4, -4, -4, -4, -3, -2, -1, 0, 1, 2, 3, 0};
    int N = 5;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 78408;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> X = {0};
    vector<int> Y = {0};
    int N = 5;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 683342244;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> X = {-1, -1, 0, 1, 2, 2, 2, 1, 0, -1, -2};
    vector<int> Y = {2, 1, 1, 1, 1, 0, -1, -2, -3, -3, -3};
    int N = 5;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 130410;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> X = {2, 1, 0, -1, -2, -2, -1, 0, 1, 2, 2, 1, 0, -1, -2};
    vector<int> Y = {3, 3, 3, 2, 1, 0, 0, 0, 0, 0, -1, -2, -3, -3, -3};
    int N = 5;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2552;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> X = {4, 3, 2, 2, 1};
    vector<int> Y = {4, 3, 2, 1, 2};
    int N = 5;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 26385328;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> X = {0, 0, 4, 4, 0, -4, -4};
    vector<int> Y = {0, 4, 4, 0, -4, -4, 0};
    int N = 5;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 25885744;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> X = {1, 1, -1, -1, -1, 1, 1, -1, 0};
    vector<int> Y = {4, 3, 3, 2, 1, 2, 1, 0, -1};
    int N = 5;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 631496;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> X = {-7};
    vector<int> Y = {-7};
    int N = 8;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 317493966;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> X = {-2, 1, 1, -2, 3, 3, -2, -3, 1, 1, -1, 1, 3, -1, -3, 0, 0, 0, 0, 3, 1, -2, -3, -3, 2, -1, 2, -1, 0, 0, -2, -1, 2, 2, 2, -1, 0};
    vector<int> Y = {1, 0, -2, -3, 2, 0, 0, -2, 2, 1, 2, 3, 1, -2, -1, -1, 0, 3, 1, 3, -1, -1, 0, -3, 1, 1, -1, -3, -2, -3, -2, 0, 2, 3, 0, -1, 2};
    int N = 4;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> X = {0, 2, -2, 1, 0, -1, 2, -2, 1, 1, 0, -1, -2, 2, 1, 0, 0, -1, -1};
    vector<int> Y = {2, 0, -1, 1, 0, -2, 2, 0, -1, 0, 1, -1, -2, 1, 2, -1, -2, 0, 1};
    int N = 3;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> X = {0};
    vector<int> Y = {0};
    int N = 1;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> X = {0, 1, 0, 0, 1, -1, -1};
    vector<int> Y = {0, 0, -1, 1, 1, 0, -1};
    int N = 2;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> X = {-4, 6, 3, 4, 2};
    vector<int> Y = {-4, 6, 3, 4, 2};
    int N = 8;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1520429571;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> X = {-1, 0, 0, 1, 2};
    vector<int> Y = {0, 0, 1, 0, 0};
    int N = 5;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 29452464;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> X = {0};
    vector<int> Y = {0};
    int N = 8;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1931935224;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> X = {7};
    vector<int> Y = {7};
    int N = 8;
    HexagonalBattlefield* pObj = new HexagonalBattlefield();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 317493966;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=13903&pm=10549
********************************************************************************
// unfortunately I have no ideas for a good line here 
 
#include <algorithm> 
#include <vector> 
#include <set> 
using namespace std; 
 
typedef long long ll; 
 
#define LS < 
#define Size(x) (int(x.size())) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
#line 3 "HexagonalBattlefield.cc" 
 
int RN; 
 
char mp[20][20]; 
 
#define P (1<<16) 
#define PRI 2000000011 
 
int lrow[P], nrow[P]; 
 
void propagate(int set, int qty, int nset) { 
//printf("prop %d\n", set); 
  if(set == 0) { 
    nrow[nset] = (nrow[nset] + ll(qty)) % PRI; 
    return; 
    } 
  int at = 1; 
  while((set & at) == 0) at <<= 1; 
  if(!(nset & at)) propagate(set &~ at, qty, nset | at); 
  propagate(set &~ at, qty, nset | (at<<1)); 
  int at2 = 3*at; 
  if((set & at2) == at2) propagate(set &~ at2, qty, nset); 
  } 
 
class HexagonalBattlefield { 
  public: 
  int countArrangements(vector <int> X, vector <int> Y, int N) { 
    // !FDI 
    RN = 2*N-1; 
     
    FOR(k,0,RN) FOR(l,0,RN)  
      if(k >= l + N || l >= k + N) mp[k][l] = '#'; 
      else mp[k][l] = '.'; 
     
    FOR(u,0,Size(X)) mp[X[u]+N-1][Y[u]+N-1] = '#'; 
 
    FOR(y,0,RN) { FOR(x,0,RN) printf("%c", mp[y][x]); printf("\n"); } 
     
    FOR(k,0,1<<RN) lrow[k] = nrow[k] = 0; lrow[0] = 1; 
     
    FOR(row,0,RN) { 
      int mask = 0; 
      FOR(q,0,RN) if(mp[q][row] == '#') mask |= (1<<q); 
       
      FOR(hi,0,1<<RN) { 
        if(hi & mask) continue; 
        propagate(((1<<RN)-1)^mask^hi, lrow[hi], 0); 
        } 
       
      FOR(k,0,1<<RN) lrow[k] = nrow[k], nrow[k] = 0; 
      // return 0; 
      } 
     
    return lrow[0]; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/