/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10898
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

class TheMoviesLevelOneDivOne {
public:
    long find(int n, int m, vector<int> row, vector<int> seat);
};

long TheMoviesLevelOneDivOne::find(int n, int m, vector<int> row, vector<int> seat) {
    long ret;
    return ret;
}


int test0() {
    int n = 2;
    int m = 3;
    vector<int> row = {1, 2};
    vector<int> seat = {2, 3};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 23;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 54;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 46;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 78;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 1012;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 549;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 260;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 423;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 38;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 2069;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 2071;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 2071;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 2073;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 2070;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 1965;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 1833;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 1923;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 1839;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 1967;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 1838;
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
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 1921;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 757148;
    int m = 167851001;
    vector<int> row = {40265, 477797, 51850, 226435, 597007, 347964, 496541};
    vector<int> seat = {156045366, 56587609, 56047386, 2576798, 3615545, 35766291, 137336163};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 127088048947986;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 683447134;
    int m = 950090227;
    vector<int> row = {549646417, 374079501, 36629217, 80835681, 21417563, 22774135, 116752252, 257655784, 40873981, 480572137, 86546365, 653352031};
    vector<int> seat = {278840199, 466701607, 366496749, 436291073, 37379061, 119818908, 194041605, 84970744, 8670529, 222071041, 247776868, 106923811};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 649336442001112260;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 138791611;
    int m = 73037939;
    vector<int> row = {64330753, 19482151, 97556908, 25455634, 52809583, 26156444, 36444399, 136135827, 14555683, 232948, 104482891, 89499443, 118473611, 17291523, 21416557, 81907379, 34644511, 101759865, 106697011, 26251201, 68665077, 130998233, 16382325, 136198441, 28813551, 70778345, 63960394, 62778795, 79972326, 11473443};
    vector<int> seat = {50548668, 11245629, 46334198, 42529995, 46696323, 32822508, 48849356, 71171022, 31472034, 1559874, 63360106, 35165087, 48711752, 6337643, 46521319, 13670293, 4877744, 18050299, 32383765, 27168831, 1740977, 67785513, 67836165, 789453, 29585139, 46989845, 250903, 37470445, 46543502, 50647921};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 10137053079138058;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 601621399;
    int m = 33763105;
    vector<int> row = {192515623, 101289133};
    vector<int> seat = {23346575, 4995889};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 20312605863062492;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 27851201;
    int m = 52717531;
    vector<int> row = {12434409, 19800257, 6244049, 27551834, 12189031, 5538790, 8394670, 4867266, 26445445, 18484671, 1875482, 22386079, 88071, 8227231, 21616906, 16027238, 4462427, 1189609, 20526461, 12425523, 17778440, 4906634, 13459343, 5678243, 10766785, 8773654, 10769217, 15530270, 5049295, 15731840, 8197603, 20771514, 7528249};
    vector<int> seat = {34411820, 37618255, 40728221, 27062279, 2499158, 50708288, 17706048, 44081425, 45096347, 34833260, 43896134, 34589889, 3119816, 23204364, 37192363, 18928767, 44639718, 45868257, 50123331, 41111997, 39894760, 11961136, 43406694, 20617443, 22685452, 19695112, 23520447, 36856117, 52486043, 52007498, 172789, 50311667, 18288337};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 1468246524253464;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 1757001;
    int m = 36905331;
    vector<int> row = {324555, 700578, 1532437, 668144, 884242, 180302, 1298902, 1202632, 488770, 173604, 1223338, 772219, 1400584, 756737, 332160, 43087, 1015181, 1615117, 551201, 1228942, 852196, 60929, 71783, 236875, 412458, 249969, 364858, 94813, 1208888};
    vector<int> seat = {15416989, 14323190, 7661741, 36440171, 16619265, 36693594, 17353261, 11938978, 23721058, 10009786, 25942713, 18939286, 14829018, 2511013, 20068053, 1875535, 15052549, 25378288, 24479903, 1088920, 5967121, 1840327, 31285287, 27920270, 36097622, 11773350, 3655076, 33069688, 1660016};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 64842701715272;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 106814401;
    int m = 28761175;
    vector<int> row = {57414326, 41252251};
    vector<int> seat = {295446, 1517701};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 3072107572866770;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 483260516;
    int m = 414942301;
    vector<int> row = {155265663};
    vector<int> seat = {43436159};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 200525230008226798;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 11073109;
    int m = 261574081;
    vector<int> row = {7656526, 2410170, 7603398, 3221932, 10988564, 3731179, 10165919, 5842943, 4764301, 6185298, 9480007, 8803444, 6279230, 5326704, 7818981, 80791, 4562955, 3388079, 10499355, 9567490, 4312622, 8371246, 3109456, 10383398, 4917649, 7933004, 10268448};
    vector<int> seat = {3460867, 199760711, 46166704, 70562761, 144267311, 189268951, 97021128, 18903751, 239846734, 132044470, 228381120, 144640225, 150633605, 219357443, 15185845, 191041648, 2934266, 175526846, 149926090, 257104164, 50890065, 237153660, 49118808, 24448489, 17563001, 26694220, 52256359};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 2896438299414666;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 517142305;
    int m = 681162225;
    vector<int> row = {108536848, 217268821, 429421777, 65909571, 37190692, 73937521, 603205, 312840401, 419315689, 66921358, 17123971, 102089008, 214125305, 54918913, 511396804, 252522538, 20246117, 503565833, 23634370, 27753111, 64053606, 19492481, 298342157};
    vector<int> seat = {9760741, 614902313, 184699117, 265636341, 593009368, 81942644, 52924537, 77993476, 144647476, 117714638, 631025356, 549036601, 176826761, 56976144, 50869922, 176755553, 94271689, 550280257, 18011097, 23767966, 106872031, 37306519, 639380218};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 352257802598286274;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 1646353;
    int m = 51891522;
    vector<int> row = {708713, 382727, 753325, 813322, 716826, 1392006, 711961, 1215131, 1408082, 595477, 1178281, 1411495, 485213, 434410, 950251, 1461912, 113773, 1115714, 245824, 588684, 416417, 1375222, 852601, 1185812, 135005, 197049, 542580, 889309, 171133, 1446332, 1039617, 1215357};
    vector<int> seat = {42283613, 36153787, 33708265, 48982576, 39717418, 7077958, 37171837, 48663825, 22541179, 9558836, 22311118, 11670607, 51585624, 40747177, 19290658, 36222760, 29143333, 25705788, 18181525, 705153, 45316468, 2693183, 3693691, 14809777, 47200337, 40453309, 21771219, 822529, 30415086, 48029713, 16204759, 23651715};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 85431761272849;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 638704829;
    int m = 30726209;
    vector<int> row = {1857769, 40086151, 207779481, 126247087, 495044047, 106258801, 41789476, 13777213, 158164553, 283859137, 191882695, 136402003};
    vector<int> seat = {8903855, 29331259, 26582989, 16314927, 12380423, 12988741, 10124463, 24693042, 16541925, 15290101, 3951759, 248299};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 19624977426458408;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 268248801;
    int m = 447745321;
    vector<int> row = {42851952, 16374601, 186996013, 250111751, 241744400, 46851736, 28882420, 211217254, 23434687, 8564921, 101314825, 52295920, 10534591, 47933176, 60282694, 205166830, 89313181, 175658497, 30752174, 235305577, 91485361, 146379172, 164001564, 168149697, 246287743, 101412625, 111299308, 152807210, 191494719, 141073900};
    vector<int> seat = {285780081, 262305874, 219593414, 322423633, 4213536, 28860926, 270164947, 325397655, 94632949, 118664514, 5472476, 166351381, 406340551, 133423349, 182463539, 112353176, 1192137, 62536848, 39380950, 215014513, 101280186, 238952995, 219218482, 234774489, 136605886, 271538083, 234807445, 2114041, 106185163, 188540236};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 120107145243361260;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 100757148;
    int m = 1;
    vector<int> row = {36629217, 4890852, 67787143, 59446065, 59810078, 43571498, 75705793, 21417563, 105948, 78522721, 15995104, 84161665, 76997146, 32230963, 15061833, 34699681, 9643369, 48809143, 86645104, 17584375, 63528349, 66131527, 37215529, 23779993, 597007, 71808057, 921233, 31051111, 56141488, 36547831, 26239573, 43275895, 12023979, 40873981, 10754248, 69967249, 47903381, 2631064, 31452501, 45860677, 77543545, 26137201, 86546365, 36826315, 80835681, 18498759};
    vector<int> seat = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 655958105;
    int m = 1;
    vector<int> row = {119602407, 238541448, 130119572, 278600081, 74187073, 103552571, 196833889, 346403443, 60569668, 407678041, 439816011, 52717531, 122674666, 60751697, 177873991, 186501223, 233578825, 466145677, 123774176, 330283357, 76473916, 36245871, 286739241, 92223251, 101563112, 95979126, 144162639, 394379241, 569458429, 82147847, 272277715, 480265849, 19800257, 212736847, 228487851, 523707697, 13459343, 20271344, 433795253, 55403035};
    vector<int> seat = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 607755361;
    int m = 1;
    vector<int> row = {57891720, 29386281, 49221667, 355800313, 36600877, 331592376, 483260516, 42860571, 110605386, 458799676, 57559271, 278514986, 50643601, 299487105, 595950717, 106566657, 477228097, 13772401, 59540376, 117308600, 93062349, 6473182, 1917161, 50335433, 258076799, 28976353, 333243725, 3025309, 452452851, 105690055, 230010817, 33084517, 289453753, 113881783, 455212561, 67270876, 49226084, 284942121, 178213201, 308315634, 285254784, 103093156};
    vector<int> seat = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 859808281;
    int m = 1;
    vector<int> row = {771876790, 194604499, 291145429, 755480917, 125394876, 430962301, 71313480, 98030729, 603649537, 5484811, 699041550, 6895937, 601013575, 40548209, 664463745, 589456561, 40913201, 238610876, 777507589, 129315079, 33041383, 374821406, 133611688, 213307873, 240981357, 267579871, 831600387, 52659133, 6144985, 131018593, 19163761, 155821, 395621666, 122443105, 293101186, 313747405, 740697557, 30135183, 347195044, 609458620, 69345415};
    vector<int> seat = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 109342301;
    int m = 1;
    vector<int> row = {26522014, 2362030, 77005618, 51229057, 22472357, 91814269, 36511201, 4867917, 50833050, 70132423, 96031400, 101471150, 57056170, 39435600, 12137644, 101449330, 9147915, 12014237, 28032919, 92322710, 34235407, 88916563, 71103259, 598165, 107959482, 105792989, 31430091, 20171228, 21991399, 90765220, 83421549, 74176049, 98263820, 12682143, 108967669, 39761141, 68387476, 10401647, 79093316, 2109889};
    vector<int> seat = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 1;
    int m = 167851001;
    vector<int> row = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> seat = {130893250, 2576798, 137336163, 139695685, 106923811, 99896433, 81296220, 130999605, 150378796, 37627775, 26190604, 56587609, 39202255, 37379061, 50113283, 29331901, 56047386, 33557677, 84970744, 12043130, 32324283, 8670529, 3612430, 82426873, 22701179, 54220040, 79925867, 114517947, 100589071, 87708701, 110710191, 9941526, 156045366, 30794747, 35766291, 150922940, 57599720, 110989198, 3615545, 48581613, 103301481, 22069159, 62803129, 133145006};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 167850912;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 1;
    int m = 136198441;
    vector<int> row = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> seat = {92223251, 36245871, 76538406, 122674666, 92289410, 37737419, 115112374, 135281159, 60569668, 60635448, 13459343, 14342359, 55403035, 6203199, 105085472, 52717531, 78518471, 102343007, 7964198, 31220688, 43381471, 71670526, 57550354, 82147847, 76473916, 19800257, 60751697, 57886475, 123774176, 56892011, 76529012, 95979126, 20271344, 121982359, 29309314, 97380384, 74187073, 74006561, 41675550, 25199930, 119602407, 50302782, 24664665, 136079274};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 136198352;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 1;
    int m = 576539745;
    vector<int> row = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> seat = {230010817, 124277965, 258076799, 316470400, 50643601, 316157737, 3025309, 113881783, 278514986, 308315634, 458799676, 103093156, 4764301, 477228097, 452452851, 333243725, 80441700, 89107336, 289453753, 6473182, 43436159, 36600877, 261574081, 483260516, 355800313, 106566657, 331592376, 13772401, 50335433, 105690055, 29386281, 57559271, 505755580, 28976353, 178213201, 493496026, 110605386, 455212561, 67270876, 299487105, 148524216, 42860571, 49221667, 33084517};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 576539656;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 1;
    int m = 603649537;
    vector<int> row = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> seat = {294301238, 138297331, 45679561, 427963876, 382282839, 81040272, 188486651, 118686008, 204531810, 283182534, 152779249, 108351264, 377970536, 28475326, 246676570, 221871361, 598521637, 10674164, 466318, 6924001, 265228584, 503780753, 15919872, 158750584, 295481649, 489351811, 546050422, 287659897, 122775913, 260924626, 122846556, 21290631, 348720691, 41146301, 275225491, 159222273, 156986391, 42076531, 176473665, 113086054, 7433429, 130016979, 498490546, 76695724, 409317833};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 603649446;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 1;
    int m = 26522014;
    vector<int> row = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> seat = {21138503, 283183, 8827619, 2205677, 19535941, 12547127, 26225931, 15848603, 23989553, 12544219, 25724693, 25655111, 1078379, 6539466, 11083579, 21582937, 10414391, 21389633, 20683149, 60975, 20537499, 2176493, 684157, 11759770, 1674403, 1466065, 3145375, 10395053, 15290101, 14002831, 14556344, 18893877, 5539847, 14243499, 3399901, 17312245, 14809640, 10638881, 19610931, 229747, 9836896, 6953651, 4590660, 8596783, 24930845, 14898977};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 26521921;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 757148;
    int m = 167851001;
    vector<int> row = {378575, 378580, 378589, 378585, 378576, 378592, 378578, 378588, 378594, 378585, 378577, 378587, 378575, 378574, 378591, 378590, 378576, 378579, 378574, 378583, 378594, 378593, 378579, 378576, 378592, 378593, 378589, 378580, 378589, 378580, 378588, 378584, 378582, 378584, 378594, 378586, 378592, 378584, 378575, 378578, 378591, 378579, 378582, 378581};
    vector<int> seat = {1, 1, 167851001, 2, 2, 2, 1, 167851000, 1, 1, 167851001, 167851000, 167851000, 167851001, 2, 2, 167851001, 2, 2, 167851001, 2, 167851001, 1, 167851000, 167851001, 2, 1, 167851001, 2, 2, 2, 2, 1, 167851001, 167851001, 2, 167851000, 1, 167851001, 2, 167851001, 167851000, 167851001, 2};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 127088048947944;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 119602407;
    int m = 52890320;
    vector<int> row = {59801216, 59801224, 59801205, 59801206, 59801219, 59801209, 59801218, 59801217, 59801207, 59801203, 59801214, 59801207, 59801221, 59801221, 59801213, 59801203, 59801216, 59801212, 59801221, 59801219, 59801219, 59801217, 59801223, 59801217, 59801219, 59801215, 59801212, 59801224, 59801209, 59801215, 59801215, 59801211, 59801214, 59801204, 59801223, 59801208, 59801208, 59801211, 59801211, 59801213, 59801211, 59801203, 59801218, 59801207};
    vector<int> seat = {2, 2, 2, 1, 52890320, 1, 2, 52890320, 1, 2, 52890319, 52890320, 52890320, 52890319, 52890320, 52890319, 52890320, 52890320, 2, 2, 52890319, 52890319, 52890320, 2, 1, 52890320, 2, 52890320, 2, 52890319, 2, 1, 2, 2, 2, 2, 52890320, 2, 52890319, 52890319, 52890320, 52890320, 52890320, 2};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 6325809459397775;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1, 1, 1, 1000000000, 1, 1000000000, 1000000000, 1, 1, 1, 1, 1000000000, 1, 1, 1, 1, 1, 1, 1000000000, 1, 1, 1, 1, 1, 1, 1, 1, 1000000000, 1000000000, 1, 1, 1000000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000000, 1, 1, 1000000000, 1};
    vector<int> seat = {8465310, 358403181, 683447134, 133145006, 553666286, 194041605, 513494529, 278840199, 69909135, 106923811, 225450721, 87708701, 39202255, 37379061, 466701607, 3615545, 29331901, 48581613, 391749388, 33557677, 436291073, 939151438, 473038165, 659598369, 634446253, 554160985, 392289611, 150378796, 189920160, 139695685, 366496749, 84970744, 110710191, 247776868, 416998222, 368026285, 170427799, 103301481, 318773941, 222071041, 8670529, 675016434, 738066085, 82426873, 450219949, 35766291, 709031779};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999906;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1, 1, 1, 1, 1, 1, 1, 1, 1000000000, 1, 1, 1000000000, 1, 1, 1, 1, 1000000000, 1, 1000000000, 1, 1, 1, 1000000000, 1, 1, 1, 1, 1, 1, 1, 1000000000, 1000000000, 1, 1, 1, 1, 1000000000, 1, 1, 1, 1, 1, 1, 1, 1, 1000000000, 1000000000};
    vector<int> seat = {80133376, 455546031, 491315149, 248711871, 211859640, 8980027, 345474073, 70778793, 601621399, 486774961, 240430121, 423188885, 186085236, 647333037, 226140876, 6526001, 9856897, 57109680, 625828105, 125370429, 222807552, 661662373, 113190751, 469069513, 119711629, 4476636, 679854070, 36982251, 240524737, 700148239, 250532866, 850474297, 105043116, 160403321, 538807493, 260860997, 262342369, 220504717, 573534711, 128804733, 320516971, 330381357, 81507655, 97979506, 680257989, 393186914, 296129476};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999906;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 20000000;
    int m = 3000000;
    vector<int> row = {1, 2};
    vector<int> seat = {2, 3};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 59999979999996;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1, 9, 6, 10, 6, 7, 9, 3, 9, 2};
    vector<int> seat = {7, 7, 3, 3, 7, 1, 5, 1, 6, 2};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999984;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999999;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 1234567;
    int m = 1234567;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 1524154442921;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 1;
    int m = 1;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 10000000;
    int m = 10000000;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 99999989999999;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 1000000000;
    int m = 999999999;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999997999999999;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 100000000;
    int m = 100000000;
    vector<int> row = {1, 2};
    vector<int> seat = {2, 3};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999899999996;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1, 2};
    vector<int> seat = {2, 3};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999996;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 100000000;
    int m = 100000000;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999899999999;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 10;
    int m = 1;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {599, 10000};
    vector<int> seat = {458, 465656};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999996;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 1000000;
    int m = 300000;
    vector<int> row = {1, 2};
    vector<int> seat = {2, 3};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 299998999996;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1, 1, 1, 2, 2, 2};
    vector<int> seat = {1, 2, 3, 1, 2, 3};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999994;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1000000000};
    vector<int> seat = {1000000000};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999999;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1000000000};
    vector<int> seat = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999989;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {2, 2, 2};
    vector<int> seat = {2, 3, 4};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999996;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 999999999;
    int m = 999999999;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999997000000001;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {201, 8612, 32761, 8161, 32240, 16180, 13202, 24628, 31298, 15477, 5713, 27133, 30230, 13047, 26433, 5548, 13932, 17, 27891, 8022, 8454, 19057, 3068, 28983, 23274, 3709, 28, 32299, 30, 18159, 13690, 11315, 13314, 7245, 18859, 20214, 19478, 10, 10, 12, 21, 18125, 19370, 134, 85, 31, 9};
    vector<int> seat = {3620, 13545, 1439, 28784, 83, 7267, 11584, 3664, 12814, 22988, 1174, 5653, 32164, 9974, 2299, 3307, 5786, 134, 12606, 23825, 24104, 7797, 10784, 30299, 1978, 15504, 25304, 16046, 3440, 13049, 27024, 21127, 29855, 24228, 6117, 5492, 25166, 23002, 3946, 4761, 32697, 1209, 1574, 11565, 11985, 23986, 25361};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999906;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1000000, 10000000};
    vector<int> seat = {1000000, 10000000};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999996;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 1000000000;
    int m = 1000000;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999998999999999;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12346, 12346, 12346, 12346, 12346, 12346, 12346, 12346, 12346, 12346, 1, 1000000000, 1000000000, 999999999, 123457, 123457, 123457, 123457, 2, 999999999};
    vector<int> seat = {1, 2, 4, 6, 8, 11, 15, 17, 21, 1000000, 10000001, 999999999, 1000000000, 1, 12312313, 1111, 331233, 4323423, 123, 111111, 111112, 111113, 111114, 1, 1000000000, 999999999, 1000000000, 1, 2, 3, 1000000000, 3, 3};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999950;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 3;
    int m = 1000000000;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 2999999996;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1, 2, 50000000};
    vector<int> seat = {2, 3, 1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999995;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 567654567;
    int m = 567865432;
    vector<int> row = {1, 1};
    vector<int> seat = {1, 3};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 322351405348573374;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 10000000;
    int m = 1;
    vector<int> row = {1, 2};
    vector<int> seat = {1, 1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 82000000;
    int m = 82000000;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 6723999917999999;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 3;
    int m = 1;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 10;
    int m = 1;
    vector<int> row = {1, 2};
    vector<int> seat = {1, 1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 13;
    int m = 13;
    vector<int> row = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> seat = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 132;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 713403336;
    int m = 318954366;
    vector<int> row = {512794898, 360519329, 268825125, 276664789, 466490653, 125738303, 371301887, 76598450, 190558411, 40568770, 158893420, 281491184, 199448906, 180347073, 109045547, 16187796, 265020909, 272525496, 30386744, 149440869, 219521310, 222894879, 270524378, 527088085, 215534775, 69059697, 251001302, 506303174, 341792966, 436283654, 37501777, 16182410, 445397203, 612309783, 193330897, 310245344, 383445872};
    vector<int> seat = {4345898, 309567910, 313153662, 167693921, 273429986, 33057983, 64784642, 196987977, 144896862, 318788617, 35744764, 219173963, 112146082, 174734802, 225694835, 309512564, 140212136, 119839333, 34735439, 69111110, 140826593, 25560569, 160132992, 190859945, 262432291, 110673067, 206011339, 129321213, 156017199, 304972823, 8725497, 137143564, 117433421, 45227839, 13075762, 277455893, 5754909};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 227543108022761566;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1, 2, 3};
    vector<int> seat = {1, 2, 3};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999995;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1, 2, 3, 4, 4, 4};
    vector<int> seat = {1, 2, 3, 4, 5, 6};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999991;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 13;
    int m = 13;
    vector<int> row = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> seat = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 12, 12, 13, 13, 11, 11, 9, 9, 10, 11, 12, 13, 7};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 114;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 3;
    int m = 1;
    vector<int> row = {2};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> seat = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999953;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {3};
    vector<int> seat = {3};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999998;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 100;
    int m = 100;
    vector<int> row = {5, 5};
    vector<int> seat = {7, 50};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 9896;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 1000;
    int m = 1;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1, 1000000000};
    vector<int> seat = {2, 3};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999996;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {1000000000};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999999;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 1;
    int m = 3;
    vector<int> row = {1};
    vector<int> seat = {1};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 1000000000;
    int m = 1000000000;
    vector<int> row = {13, 13, 13, 13, 13, 66, 66, 66, 66, 66, 66, 66};
    vector<int> seat = {3, 53, 23, 99, 999999999, 999999898, 1000000000, 1, 45353, 6456457, 45, 45645654};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998999999978;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int n = 1234567;
    int m = 1234567;
    vector<int> row = {1, 1234566, 3, 3, 3, 3};
    vector<int> seat = {1, 1234561, 11, 15, 18, 28};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 1524154442911;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int n = 10;
    int m = 10;
    vector<int> row = {2, 2};
    vector<int> seat = {3, 6};
    TheMoviesLevelOneDivOne* pObj = new TheMoviesLevelOneDivOne();
    clock_t start = clock();
    long result = pObj->find(n, m, row, seat);
    clock_t end = clock();
    delete pObj;
    long expected = 86;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22709180&rd=14152&pm=10898
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
 
class TheMoviesLevelOneDivOne {
public:
  long long find(int, int, vector <int>, vector <int>);
};
 
long long TheMoviesLevelOneDivOne::find(int n, int m, vector <int> row, vector <int> seat) {
  long long ans = (long long)n * (m - 1);
  for (int i = 0; i < seat.size (); i++) {
    ans -= int (seat[i] > 1) + int (seat[i] < m);
    for (int j = 0; j < seat.size (); j++)
      if (row[i] == row[j] && seat[i] + 1 == seat[j])
        ans++;  
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/