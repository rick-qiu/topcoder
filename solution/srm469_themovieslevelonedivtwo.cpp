/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10899
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

class TheMoviesLevelOneDivTwo {
public:
    int find(int n, int m, vector<int> row, vector<int> seat);
};

int TheMoviesLevelOneDivTwo::find(int n, int m, vector<int> row, vector<int> seat) {
    int ret;
    return ret;
}


int test0() {
    int n = 2;
    int m = 3;
    vector<int> row = {1, 2};
    vector<int> seat = {2, 3};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    int m = 3;
    vector<int> row = {1, 1, 1, 2, 2, 2};
    vector<int> seat = {1, 2, 3, 1, 2, 3};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 4;
    int m = 7;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 10;
    int m = 8;
    vector<int> row = {1, 9, 6, 10, 6, 7, 9, 3, 9, 2};
    vector<int> seat = {7, 7, 3, 3, 7, 1, 5, 1, 6, 2};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 7;
    int m = 9;
    vector<int> row = {5, 4, 6, 5, 4, 3, 6};
    vector<int> seat = {9, 3, 4, 4, 4, 9, 3};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
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
    int m = 1;
    vector<int> row = {3, 5, 4, 1, 2};
    vector<int> seat = {1, 1, 1, 1, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
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
    int n = 1;
    int m = 5;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 5;
    int m = 1;
    vector<int> row = {4, 1, 3, 2, 5};
    vector<int> seat = {1, 1, 1, 1, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
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
    int n = 4;
    int m = 2;
    vector<int> row = {3, 2, 1, 4, 2, 3, 4, 1};
    vector<int> seat = {2, 2, 1, 2, 1, 1, 1, 2};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 7;
    int m = 1;
    vector<int> row = {2, 5, 4, 3, 6, 1, 7};
    vector<int> seat = {1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 5;
    int m = 2;
    vector<int> row = {1, 4, 2, 3, 5, 2, 1, 5, 3, 4};
    vector<int> seat = {1, 1, 1, 2, 2, 2, 2, 1, 1, 2};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 9;
    int m = 1;
    vector<int> row = {6, 7, 4, 1, 2, 5, 3, 9, 8};
    vector<int> seat = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 1;
    int m = 5;
    vector<int> row = {1, 1, 1, 1, 1};
    vector<int> seat = {1, 5, 3, 2, 4};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
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
    int n = 7;
    int m = 2;
    vector<int> row = {5, 7, 2, 1, 7, 2, 6, 4, 5, 4, 6, 3, 1, 3};
    vector<int> seat = {1, 2, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 2, 2};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
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
    int n = 3;
    int m = 5;
    vector<int> row = {2, 2, 2, 1, 3, 2, 3, 1, 2, 3, 1, 1, 3, 3, 1};
    vector<int> seat = {1, 3, 5, 3, 1, 2, 4, 2, 4, 3, 1, 5, 2, 5, 4};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 25;
    int m = 1;
    vector<int> row = {6, 13, 7, 12, 21, 4, 3};
    vector<int> seat = {1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 29;
    int m = 1;
    vector<int> row = {3, 14, 11};
    vector<int> seat = {1, 1, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
    int m = 1;
    vector<int> row = {6, 4, 12};
    vector<int> seat = {1, 1, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 45;
    int m = 1;
    vector<int> row = {6, 32, 19};
    vector<int> seat = {1, 1, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 37;
    int m = 1;
    vector<int> row = {25};
    vector<int> seat = {1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 25;
    int m = 2;
    vector<int> row = {6, 13, 7, 12, 21, 4, 3};
    vector<int> seat = {2, 1, 2, 2, 1, 1, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 29;
    int m = 2;
    vector<int> row = {8, 11, 26, 9, 13, 6, 18, 13, 20, 29, 15, 1, 23, 28, 12, 21, 9, 23, 5, 7, 24, 6, 4, 3, 22, 24, 14, 27, 11, 4, 21, 1, 14, 5, 28};
    vector<int> seat = {1, 2, 2, 2, 2, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 2};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 21;
    int m = 2;
    vector<int> row = {20, 17, 1, 17, 19, 18, 13, 16, 12, 15, 21, 9, 5, 12, 10, 18, 10, 14, 4, 15, 7, 14, 11, 8, 21};
    vector<int> seat = {2, 2, 1, 1, 1, 2, 1, 2, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 2};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 11;
    int m = 2;
    vector<int> row = {1, 3, 1, 4, 4, 5, 6, 9};
    vector<int> seat = {2, 2, 1, 1, 2, 2, 1, 2};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 1;
    int m = 2;
    vector<int> row = {1, 1};
    vector<int> seat = {2, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
    int m = 4;
    vector<int> row = {20, 16, 23, 15, 20, 12, 3, 13, 4, 22, 25, 3, 22, 7, 9, 24, 13, 3, 4, 18, 15, 17, 21, 23, 5, 2, 13, 24, 5, 10, 13, 16, 7, 5, 23, 22, 4, 6, 18, 11, 24, 19, 7, 14, 19, 19, 17};
    vector<int> seat = {4, 2, 3, 1, 1, 4, 2, 1, 4, 3, 1, 3, 1, 4, 4, 2, 4, 1, 1, 3, 3, 1, 3, 1, 3, 4, 3, 1, 4, 3, 2, 3, 2, 2, 2, 2, 3, 2, 4, 3, 3, 3, 1, 3, 1, 4, 4};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 46;
    int m = 4;
    vector<int> row = {3, 1, 25, 19, 16, 16, 39, 12, 6, 26, 11, 4, 17, 5, 21, 21, 22, 43, 34, 33, 16, 27, 27, 42, 37, 5, 19, 15, 13, 40, 30, 31, 2, 43, 44, 32, 29, 39, 3, 6, 36, 40, 15, 43, 4, 8, 1};
    vector<int> seat = {3, 1, 4, 4, 3, 1, 2, 4, 1, 4, 3, 1, 1, 2, 4, 2, 2, 1, 1, 2, 2, 3, 1, 2, 1, 3, 1, 1, 4, 3, 4, 4, 3, 2, 3, 3, 4, 4, 2, 2, 1, 4, 3, 3, 4, 4, 4};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 8;
    int m = 4;
    vector<int> row = {8, 8, 4, 3, 1, 3, 4, 6, 5, 5, 7, 5, 7, 4, 7, 6, 8, 1, 7, 6, 1, 2, 8, 3, 2, 6, 2, 3, 5, 4, 1, 2};
    vector<int> seat = {4, 1, 1, 3, 1, 1, 4, 4, 4, 1, 1, 3, 3, 3, 4, 3, 3, 4, 2, 1, 2, 2, 2, 4, 3, 2, 1, 2, 2, 2, 3, 4};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 24;
    int m = 4;
    vector<int> row = {21, 20, 17, 12, 1, 24, 6, 23, 4, 2, 12, 9, 13, 15, 20, 17, 15, 14, 23, 22, 18, 22, 8, 24, 16, 5, 9, 17, 10, 19, 4, 22, 5, 16, 2, 12, 2, 11, 17, 7, 11, 3, 19, 7, 15, 10, 14};
    vector<int> seat = {3, 4, 1, 1, 1, 2, 4, 3, 4, 4, 3, 3, 2, 2, 2, 2, 1, 4, 4, 2, 2, 1, 3, 1, 1, 1, 2, 4, 4, 4, 1, 3, 4, 3, 1, 2, 2, 4, 3, 4, 2, 4, 3, 2, 4, 1, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 16;
    int m = 4;
    vector<int> row = {9, 10, 1, 7, 5, 13, 14, 12, 3, 14, 12, 13, 7, 2, 5, 6, 3, 2, 11, 16, 14, 15, 8, 4, 9, 12, 15, 5, 1, 4, 8, 11, 2, 5, 6, 11, 10, 14, 10, 13, 9, 11, 2, 6, 12, 1, 15};
    vector<int> seat = {3, 4, 3, 4, 1, 1, 1, 3, 2, 4, 4, 3, 3, 3, 2, 1, 3, 4, 1, 1, 2, 2, 3, 2, 2, 2, 1, 3, 1, 1, 4, 3, 1, 4, 3, 2, 3, 3, 2, 4, 1, 4, 2, 2, 1, 4, 4};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 25;
    int m = 42;
    vector<int> row = {6, 13, 7, 12, 21, 4, 3};
    vector<int> seat = {6, 21, 28, 30, 15, 1, 19};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 1012;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 29;
    int m = 22;
    vector<int> row = {20, 9, 9, 6, 13, 3, 14, 14, 28, 11, 24, 5, 9, 28, 4, 21, 24, 12, 28, 3, 9, 15, 23, 13, 8, 6, 20, 8, 26, 28, 22, 28, 11, 13, 23};
    vector<int> seat = {8, 11, 22, 16, 17, 10, 16, 3, 12, 17, 15, 7, 9, 1, 12, 22, 18, 19, 20, 18, 12, 1, 5, 1, 5, 17, 20, 7, 18, 11, 11, 13, 11, 2, 8};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 549;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 23;
    int m = 14;
    vector<int> row = {2, 2, 22, 3, 11, 14, 21, 15, 16, 4, 18, 10, 4, 23, 15, 6, 19, 2, 19, 15, 8, 20};
    vector<int> seat = {3, 14, 11, 11, 9, 3, 2, 5, 10, 13, 4, 1, 14, 4, 7, 13, 10, 2, 6, 9, 12, 12};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 260;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 11;
    int m = 43;
    vector<int> row = {10, 8, 2, 11, 6, 4, 6, 9, 10, 11, 8, 9, 3, 11, 6, 4, 6, 2, 11, 6};
    vector<int> seat = {5, 27, 2, 43, 35, 32, 26, 17, 36, 10, 7, 22, 25, 14, 6, 41, 21, 4, 37, 19};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 423;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 11;
    int m = 5;
    vector<int> row = {9, 4, 10, 5};
    vector<int> seat = {4, 5, 4, 5};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 47;
    int m = 47;
    vector<int> row = {35, 20, 14, 11, 34, 21, 7, 4, 35, 5, 9, 7, 21, 43, 6, 22, 32, 45, 2, 27, 17, 32, 42, 31, 25, 8, 41, 2, 46, 16, 34, 11, 25, 39, 14, 17, 19, 3, 26, 37, 29, 45, 32, 45, 46, 7, 1};
    vector<int> seat = {5, 36, 24, 22, 32, 27, 7, 44, 27, 9, 35, 27, 19, 13, 27, 25, 25, 46, 13, 9, 2, 45, 42, 28, 29, 4, 45, 12, 24, 29, 30, 31, 10, 13, 35, 13, 40, 28, 15, 32, 13, 15, 11, 22, 44, 10, 24};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 2069;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 47;
    int m = 47;
    vector<int> row = {36, 21, 19, 39, 22, 21, 28, 11, 42, 5, 21, 23, 16, 7, 42, 23, 38, 2, 46, 38, 23, 22, 45, 44, 41, 42, 33, 23, 10, 8, 39, 15, 42, 47, 29, 28, 23, 34, 21, 10, 21, 12, 16, 31, 17, 4, 7};
    vector<int> seat = {46, 18, 21, 9, 3, 37, 44, 29, 25, 21, 15, 45, 42, 47, 15, 38, 25, 1, 5, 5, 20, 23, 39, 38, 7, 29, 45, 9, 11, 21, 29, 33, 10, 41, 47, 29, 22, 10, 11, 35, 26, 12, 35, 5, 39, 36, 26};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 2071;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 47;
    int m = 47;
    vector<int> row = {40, 19, 9, 37, 2, 25, 20, 12, 35, 8, 37, 5, 4, 37, 15, 47, 19, 33, 13, 4, 27, 1, 15, 19, 20, 17, 26, 18, 33, 37, 5, 7, 35, 3, 6, 10, 37, 16, 23, 6, 28, 46, 5, 7, 6, 27, 41};
    vector<int> seat = {32, 16, 22, 10, 21, 32, 26, 9, 36, 19, 6, 41, 6, 27, 4, 31, 13, 47, 40, 7, 44, 26, 39, 23, 46, 44, 13, 6, 25, 1, 13, 13, 33, 28, 18, 11, 12, 19, 42, 25, 7, 17, 3, 25, 44, 42, 28};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 2071;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 47;
    int m = 47;
    vector<int> row = {13, 25, 22, 20, 30, 40, 8, 47, 23, 1, 29, 15, 22, 32, 15, 41, 21, 17, 41, 34, 41, 2, 41, 28, 21, 44, 44, 26, 23, 11, 39, 6, 4, 18, 5, 46, 10, 4, 32, 3, 37, 15, 36, 43, 34, 22, 12};
    vector<int> seat = {34, 8, 31, 27, 16, 26, 11, 36, 11, 24, 1, 3, 42, 30, 9, 13, 34, 29, 22, 11, 47, 23, 17, 40, 1, 39, 2, 34, 12, 36, 33, 31, 42, 1, 30, 33, 26, 12, 10, 10, 16, 46, 7, 36, 26, 28, 11};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 2073;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 47;
    int m = 47;
    vector<int> row = {47, 32, 2, 37, 40, 30, 40, 7, 29, 19, 23, 43, 7, 30, 37, 10, 15, 25, 40, 12, 3, 22, 7, 26, 25, 27, 41, 11, 26, 20, 45, 41, 14, 22, 19, 30, 23, 29, 28, 41, 2, 21, 7, 35, 16, 22, 31};
    vector<int> seat = {12, 4, 1, 45, 5, 8, 27, 18, 22, 28, 14, 19, 39, 4, 35, 3, 6, 12, 45, 29, 31, 40, 5, 11, 44, 14, 13, 20, 9, 26, 33, 23, 20, 9, 41, 42, 46, 26, 13, 44, 26, 45, 21, 47, 9, 23, 34};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 2070;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 47;
    int m = 44;
    vector<int> row = {45, 3, 25, 9, 19, 26, 39, 7, 6, 21, 8, 42, 17, 34, 27, 46, 2, 2, 22, 14, 40, 20, 14, 37, 1, 16, 20, 29, 17, 31, 35, 11, 43, 32, 21, 41, 25, 19, 45, 35, 34, 4, 5, 41};
    vector<int> seat = {44, 44, 44, 43, 44, 44, 43, 43, 44, 43, 44, 43, 43, 44, 43, 44, 43, 44, 43, 44, 44, 44, 43, 43, 43, 44, 43, 44, 44, 44, 44, 43, 43, 43, 44, 44, 43, 43, 43, 43, 43, 43, 44, 43};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 1965;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 44;
    int m = 44;
    vector<int> row = {37, 3, 27, 39, 19, 6, 20, 24, 28, 14, 32, 24, 32, 41, 21, 9, 10, 26, 44, 17, 36, 22, 19, 5, 12, 43, 22, 31, 44, 30, 9, 4, 42, 35, 38, 11, 33, 18, 21, 37, 11, 2, 40, 31, 10};
    vector<int> seat = {44, 44, 44, 43, 44, 44, 43, 43, 43, 44, 44, 44, 43, 43, 43, 44, 44, 44, 44, 43, 43, 43, 43, 44, 43, 43, 44, 43, 43, 44, 43, 43, 43, 43, 43, 44, 43, 44, 44, 43, 43, 43, 44, 44, 43};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 1833;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 44;
    int m = 46;
    vector<int> row = {40, 8, 21, 25, 14, 38, 34, 1, 44, 19, 41, 31, 9, 39, 6, 15, 43, 18, 36, 4, 5, 23, 27, 42, 11, 38, 34, 24, 33, 37, 9, 30, 8, 21, 35, 32, 12, 14, 6, 2, 29, 43, 3, 16};
    vector<int> seat = {46, 45, 45, 46, 45, 45, 45, 46, 45, 46, 45, 46, 46, 45, 45, 45, 45, 46, 45, 46, 45, 45, 46, 45, 45, 46, 46, 46, 46, 46, 45, 46, 46, 46, 46, 46, 45, 46, 46, 46, 45, 46, 45, 45};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 1923;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 44;
    int m = 44;
    vector<int> row = {43, 16, 12, 6, 12, 6, 38, 30, 34, 15, 10, 5, 4, 5, 14, 42, 11, 42, 32, 2, 11, 9, 22, 32, 34, 24, 33, 1, 3, 13, 43, 7, 16, 36, 36, 21, 14, 39, 29, 39, 33, 4, 35, 38};
    vector<int> seat = {43, 43, 43, 43, 44, 44, 43, 44, 43, 43, 43, 43, 44, 44, 43, 44, 43, 43, 44, 43, 44, 43, 44, 43, 44, 43, 43, 43, 43, 44, 44, 44, 44, 44, 43, 43, 44, 43, 43, 44, 44, 43, 44, 44};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 1839;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 47;
    int m = 44;
    vector<int> row = {45, 3, 25, 9, 19, 26, 39, 7, 6, 21, 8, 42, 17, 34, 27, 46, 2, 2, 22, 14, 40, 20, 14, 37, 1, 16, 20, 29, 17, 31, 35, 11, 43, 32, 21, 41, 25, 19, 45, 35, 34, 4, 5, 41};
    vector<int> seat = {2, 2, 2, 1, 2, 2, 1, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 1967;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 44;
    int m = 44;
    vector<int> row = {37, 3, 27, 39, 19, 6, 20, 24, 28, 14, 32, 24, 32, 41, 21, 9, 10, 26, 44, 17, 36, 22, 19, 5, 12, 43, 22, 31, 44, 30, 9, 4, 42, 35, 38, 11, 33, 18, 21, 37, 11, 2, 40, 31, 10};
    vector<int> seat = {2, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 1838;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 44;
    int m = 46;
    vector<int> row = {40, 8, 21, 25, 14, 38, 34, 1, 44, 19, 41, 31, 9, 39, 6, 15, 43, 18, 36, 4, 5, 23, 27, 42, 11, 38, 34, 24, 33, 37, 9, 30, 8, 21, 35, 32, 12, 14, 6, 2, 29, 43, 3, 16};
    vector<int> seat = {2, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 1921;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 1;
    int m = 3;
    vector<int> row = {1};
    vector<int> seat = {2};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
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
    int n = 10;
    int m = 8;
    vector<int> row = {1, 9, 6, 10, 6, 7, 9, 3, 9, 2};
    vector<int> seat = {7, 7, 3, 3, 7, 1, 5, 1, 6, 2};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 5;
    int m = 1;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 2;
    int m = 3;
    vector<int> row = {1, 2};
    vector<int> seat = {2, 3};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 4;
    int m = 7;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 1;
    int m = 3;
    vector<int> row = {1, 1, 1};
    vector<int> seat = {1, 2, 3};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 1;
    int m = 3;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
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
    int n = 10;
    int m = 45;
    vector<int> row = {1, 9, 6, 10, 6, 7, 9, 3, 9, 2, 9};
    vector<int> seat = {7, 7, 3, 3, 7, 1, 5, 1, 6, 2, 23};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 422;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 3;
    int m = 3;
    vector<int> row = {2, 3};
    vector<int> seat = {2, 1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 2;
    int m = 7;
    vector<int> row = {1, 2};
    vector<int> seat = {2, 3};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 1;
    int m = 10;
    vector<int> row = {1, 1, 1, 1, 1};
    vector<int> seat = {1, 3, 5, 7, 9};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 40;
    int m = 40;
    vector<int> row = {15};
    vector<int> seat = {15};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 1558;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 1;
    int m = 10;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 47;
    int m = 47;
    vector<int> row = {5};
    vector<int> seat = {3};
    TheMoviesLevelOneDivTwo* pObj = new TheMoviesLevelOneDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    int expected = 2160;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22848664&rd=14152&pm=10899
********************************************************************************
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
class TheMoviesLevelOneDivTwo {
public:
int find(int, int, vector <int>, vector <int>);
};
 
int TheMoviesLevelOneDivTwo::find(int n, int m, vector <int> row, vector <int> seat) {
int answer[n][m],j,count=0,i;
int l=row.size();
for(i=0;i<n;i++)
{
  for(j=0;j<m;j++)
  {
    answer[i][j]=0;
  }
}
for(i=0;i<l;i++)
  answer[row[i]-1][seat[i]-1]=1;
for(i=0;i<n;i++)
{
  for(j=0;j<m;j++)
  {
  if((j+1)<m)
  {
    if(answer[i][j+1]==0&&answer[i][j]==0){
    count++;
    }
  }
}
}
return count;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/