/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10550
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

class HexagonalBattlefieldEasy {
public:
    int countArrangements(vector<int> X, vector<int> Y, int N);
};

int HexagonalBattlefieldEasy::countArrangements(vector<int> X, vector<int> Y, int N) {
    int ret;
    return ret;
}


int test0() {
    vector<int> X = {-2, 0, 1, 1, 0};
    vector<int> Y = {-2, 0, 1, 0, 2};
    int N = 3;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
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
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
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
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
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
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
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
    vector<int> X = {0, 0};
    vector<int> Y = {0, -1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
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
    vector<int> X = {0, 0};
    vector<int> Y = {0, 1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
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
    vector<int> X = {0, -1};
    vector<int> Y = {0, 0};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
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
    vector<int> X = {0, 1};
    vector<int> Y = {0, 0};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> X = {-1, 0, 1};
    vector<int> Y = {-1, 0, 1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> X = {0, 0, 0};
    vector<int> Y = {-1, 0, 1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
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
    vector<int> X = {1, 0, -1};
    vector<int> Y = {0, 0, 0};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> X = {-1, 0, 1};
    vector<int> Y = {-1, 0, 1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> X = {-1, 1, 0};
    vector<int> Y = {0, 1, -1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> X = {-1, 1, 0};
    vector<int> Y = {-1, 0, 1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> X = {-1, 0, 0};
    vector<int> Y = {-1, -1, 1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
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
    vector<int> X = {1, 1, -1};
    vector<int> Y = {1, 0, 0};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
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
    vector<int> X = {0, 1, 1, 0, -1};
    vector<int> Y = {1, 1, 0, -1, -1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> X = {-1, 0, 1};
    vector<int> Y = {0, 1, 1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
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
    vector<int> X = {1, 1, 0};
    vector<int> Y = {1, 0, -1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> X = {0, -1, -1};
    vector<int> Y = {-1, -1, 0};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> X = {0, -1, -1, 0, 1, 1};
    vector<int> Y = {1, 0, -1, -1, 0, 1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> X = {0, 0, 1, 1, 0, -1, -1};
    vector<int> Y = {0, -1, 0, 1, 1, 0, -1};
    int N = 3;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> X = {-2, -1, 0, 1, 2};
    vector<int> Y = {0, 0, 0, 0, 0};
    int N = 3;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> X = {-2, -1, 0, 1, 2, -2, 2};
    vector<int> Y = {0, 0, 0, 0, 0, -1, 1};
    int N = 3;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> X = {0, 0, 0, 0, 0, -1, 1};
    vector<int> Y = {-2, -1, 0, 1, 2, -1, 1};
    int N = 3;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> X = {-1, 0, 1};
    vector<int> Y = {-1, 0, 1};
    int N = 3;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> X = {1, 0, -1, -1, 0, 1, 1, 0, -1, 0, 0};
    vector<int> Y = {2, 2, 1, 0, 0, 0, -1, -2, -2, -1, 1};
    int N = 3;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> X = {-2, -1, 0, 1, 2, 1, -1, -2, 2, 2, -2};
    vector<int> Y = {-1, 0, 0, 0, 1, -1, 1, 0, 0, 2, -2};
    int N = 3;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> X = {-2, -1, 0, 1, 2, 2, 2, 1, 0, -1, -2, -2, 0};
    vector<int> Y = {0, 1, 2, 2, 2, 1, 0, -1, -2, -2, -2, -1, 0};
    int N = 3;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> X = {0, 1, 2, -2, -1, 0, 0};
    vector<int> Y = {2, 2, 2, -2, -2, -2, 0};
    int N = 3;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> X = {0, 0, 0, -1, -2, 1, 2};
    vector<int> Y = {-2, -1, 0, 0, 0, 1, 2};
    int N = 3;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> X = {0};
    vector<int> Y = {0};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 78408;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> X = {0, -1, 0, 1, 1, 0, -1};
    vector<int> Y = {0, -1, -1, 0, 1, 1, 0};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1940;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> X = {0, 0, 0, 0, -1, -2, -3, 1, 2, 3, 1, 0, -1};
    vector<int> Y = {0, -1, -2, -3, 0, 0, 0, 1, 2, 3, 0, 1, -1};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> X = {1, 0, -1, -1, 0, 1, 1, 0, -1};
    vector<int> Y = {2, 2, 1, 0, 0, 0, -1, -2, -2};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> X = {0, 0, 0, 0, 0};
    vector<int> Y = {3, 2, 1, 0, -1};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3500;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> X = {0, 0, 0, 0, 0};
    vector<int> Y = {-3, -2, -1, 0, 1};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3500;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> X = {-1, -1, -1, -1, 2, 2, 2, 2, 0};
    vector<int> Y = {0, -1, -2, -3, 3, 2, 1, 0, 1};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> X = {3, 3, 3, 3, 2, 1, 0, -1, -2, -3, -3, -3, -3, -2, -1, 0, 1, 2, -1, -1, 0, 1, 1, 0};
    vector<int> Y = {3, 2, 1, 0, -1, -2, -3, -3, -3, -3, -2, -1, 0, 1, 2, 3, 3, 3, 0, -1, -1, 0, 1, 1};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> X = {0, -1, -1, 0, 1, 1, 0, 0, -1, -2, -3, -3, -3, -3, -2, -1, 0, 1, 2, 3, 3, 3, 3, 2, 1};
    vector<int> Y = {1, 0, -1, -1, 0, 1, 0, 3, 2, 1, 0, -1, -2, -3, -3, -3, -3, -2, -1, 0, 1, 2, 3, 3, 3};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> X = {3, -3, 0, 3, 0, -3, 0};
    vector<int> Y = {0, 0, 3, 3, -3, -3, 0};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4732;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> X = {0, 0, 2, -2, 2};
    vector<int> Y = {-1, 2, 2, -1, -1};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1625;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> X = {-1, -1, 2};
    vector<int> Y = {1, -1, -1};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 12900;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> X = {1, 2, -2};
    vector<int> Y = {3, 1, -1};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 13715;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> X = {3, 3, 0};
    vector<int> Y = {0, 2, 2};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 15295;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> X = {0, -2, -2};
    vector<int> Y = {-3, -1, 1};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 17372;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> X = {-2, -2, -2, -3, -3, -3, -2};
    vector<int> Y = {1, 0, -1, -2, -3, 0, -2};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> X = {-2, -2, -1, 0, 0, -1, 0};
    vector<int> Y = {0, -1, -1, 0, 1, 1, -1};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> X = {2, 0, 0, -2, 0};
    vector<int> Y = {2, 2, 0, -1, -2};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1296;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> X = {1, 1, 1, 1, 1, 1, 2};
    vector<int> Y = {3, 2, 1, 0, -1, -2, -1};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1930;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> X = {2, 1, 0, -1, -2};
    vector<int> Y = {2, 1, 0, -1, -2};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2450;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> X = {2, 1, 0, -1, -2};
    vector<int> Y = {0, 0, 0, 0, 0};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2450;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> X = {-3, -3, -3, -3, -2, -1, 0, 1, 2, 3, 3, 3, 3, 2, 1, 0, -2, -2, -1, 0, 1, 1, 2, 1, 0, -1, -2, -2, -1, -1, 0, 0, 2, 2, 1};
    vector<int> Y = {0, -1, -2, -3, -3, -3, -3, -2, -1, 0, 1, 2, 3, 3, 3, 3, 0, 1, 1, 1, 2, 1, 0, -1, -2, -2, -2, -1, 0, -1, 0, -1, 1, 2, 0};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
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
    vector<int> X = {-2, -3, -3, -3, -3, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -2, -1, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 2};
    vector<int> Y = {0, 0, -1, -2, -3, -3, -2, -1, 0, -1, -2, -3, -3, -2, -1, 0, 1, 1, 1, 2, 2, 3, 3, 2, 1, 0, -1, -2, 0, 1, 2, 3, 3, 2, 1, 0, -1};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
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
    vector<int> X = {-3};
    vector<int> Y = {-3};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 117600;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> X = {-2, 1, 1, -2, 3, 3, -2, -3, 1, 1, -1, 1, 3, -1, -3, 0, 0, 0, 0, 3, 1, -2, -3, -3, 2, -1, 2, -1, 0, 0, -2, -1, 2, 2, 2, -1, 0};
    vector<int> Y = {1, 0, -2, -3, 2, 0, 0, -2, 2, 1, 2, 3, 1, -2, -1, -1, 0, 3, 1, 3, -1, -1, 0, -3, 1, 1, -1, -3, -2, -3, -2, 0, 2, 3, 0, -1, 2};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> X = {0, 2, -2, 1, 0, -1, 2, -2, 1, 1, 0, -1, -2, 2, 1, 0, 0, -1, -1};
    vector<int> Y = {2, 0, -1, 1, 0, -2, 2, 0, -1, 0, 1, -1, -2, 1, 2, -1, -2, 0, 1};
    int N = 3;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
    int N = 1;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> X = {0, 1, 0, 0, 1, -1, -1};
    vector<int> Y = {0, 0, -1, 1, 1, 0, -1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> X = {0, 1, 0, 0, 1, -1, -1};
    vector<int> Y = {0, 0, -1, 1, 1, 0, -1};
    int N = 2;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> X = {-1, 0, 0, 1, 2};
    vector<int> Y = {0, 0, 1, 0, 0};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3180;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> X = {0};
    vector<int> Y = {0};
    int N = 4;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 78408;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> X = {0};
    vector<int> Y = {0};
    int N = 3;
    HexagonalBattlefieldEasy* pObj = new HexagonalBattlefieldEasy();
    clock_t start = clock();
    int result = pObj->countArrangements(X, Y, N);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22837087&rd=13903&pm=10550
********************************************************************************
// This is more complicated than it needs to be because I misread the problem
// and I thought we had to handle boards up to one size bigger. Oops!
 
#include <vector>
#include <string>
#include <cmath>
#include <map>
 
using std::vector;
 
std::string code(char a[100]) {
  std::string s;
  for (int j = 0; j < 100; ++j) {
    if (a[j]) s += char(j);
  }
  return s;
}
 
long narr(char a[100]) {
  static std::map<std::string, long> cache;
  std::string s = code(a);
  if (s.length() == 0) return 1;
  if (cache.count(s) == 0) {
    long total = 0;
    char b[100];
    for (int j = 0; j < 100; ++j) b[j] = a[j];
    int k = int(s[0]);
    b[k] = 0;
    if (b[k+1]) {
      b[k+1] = 0;
      total += narr(b);
      b[k+1] = 1;
    }
    if (b[k+10]) {
      b[k+10] = 0;
      total += narr(b);
      b[k+10] = 1;
    }
    if (b[k+11]) {
      b[k+11] = 0;
      total += narr(b);
      b[k+11] = 1;
    }
    cache[s] = total;
  }
  return cache[s];
}
 
 
class HexagonalBattlefieldEasy {
  public:
  static int countArrangements(vector<int> X, vector<int> Y, int N) {
    char a[100];
    N -= 1;
    for (int x = -4; x <= 5; ++x) {
      for (int y = -4; y <= 5; ++y) {
        int n = (4+y) * 10 + (4+x);
        a[n] = 1;
        if (x > N or x < -N or y > N or y < -N) a[n] = 0;
        if (x-y > N or y-x > N) a[n] = 0;
      }
    }
    for (int j = 0; j < X.size(); ++j) {
      a[(4+Y[j]) * 10 + (4+X[j])] = 0;
    }
 
    return narr(a);
  }
};

********************************************************************************
*******************************************************************************/