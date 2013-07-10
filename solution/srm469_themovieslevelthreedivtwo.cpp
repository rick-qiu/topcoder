/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10903
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

class TheMoviesLevelThreeDivTwo {
public:
    int find(vector<int> timeJ, vector<int> timeB);
};

int TheMoviesLevelThreeDivTwo::find(vector<int> timeJ, vector<int> timeB) {
    int ret;
    return ret;
}


int test0() {
    vector<int> timeJ = {4, 4};
    vector<int> timeB = {4, 4};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> timeJ = {1, 4};
    vector<int> timeB = {4, 2};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
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
    vector<int> timeJ = {10, 10, 10, 10};
    vector<int> timeB = {1, 1, 1, 10};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> timeJ = {1, 2, 3, 4, 5, 6, 7};
    vector<int> timeB = {7, 6, 5, 4, 3, 2, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> timeJ = {7, 7};
    vector<int> timeB = {9, 9};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
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
    vector<int> timeJ = {1, 9, 1, 6, 7, 2};
    vector<int> timeB = {4, 4, 9, 3, 1, 3};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> timeJ = {3, 5};
    vector<int> timeB = {1, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
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
    vector<int> timeJ = {7};
    vector<int> timeB = {7};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
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
    vector<int> timeJ = {20};
    vector<int> timeB = {20};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
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
    vector<int> timeJ = {1};
    vector<int> timeB = {17};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
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
    vector<int> timeJ = {1, 7, 5, 17, 13, 6, 12, 3};
    vector<int> timeB = {17, 5, 9, 11, 5, 8, 11, 19};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 193;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> timeJ = {10, 4, 9};
    vector<int> timeB = {5, 17, 10};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> timeJ = {15, 17, 17, 5, 1, 9, 5, 9, 13, 11};
    vector<int> timeB = {12, 1, 13, 1, 14, 9, 19, 11, 13, 11};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 903;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> timeJ = {17, 13, 1, 17, 16, 17, 5, 9, 6, 8, 20, 5, 20, 3, 1, 11, 11, 13, 11};
    vector<int> timeB = {13, 1, 5, 6, 1, 1, 1, 5, 9, 5, 6, 1, 20, 9, 18, 13, 11, 15, 2};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 375315;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> timeJ = {5};
    vector<int> timeB = {15};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
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
    vector<int> timeJ = {19, 5, 1, 17, 16, 3, 3, 1, 2, 1, 17, 13, 19};
    vector<int> timeB = {5, 17, 9, 19, 20, 11, 14, 19, 3, 5, 9, 16, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 6457;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> timeJ = {8};
    vector<int> timeB = {9};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
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
    vector<int> timeJ = {15, 5, 16, 11, 7, 14, 10, 6, 5, 13};
    vector<int> timeB = {18, 4, 7, 9, 10, 15, 5, 11, 17, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 954;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> timeJ = {20, 6, 3, 5, 11, 2, 17, 17, 9, 3, 16, 11, 7, 9, 5, 17, 8};
    vector<int> timeB = {16, 17, 17, 9, 7, 11, 17, 7, 3, 6, 11, 15, 11, 8, 19, 17, 17};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 126914;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> timeJ = {13, 1, 1, 5};
    vector<int> timeB = {5, 1, 6, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> timeJ = {9, 9, 12, 3, 11, 17, 1, 4, 1, 7, 13, 1, 7, 5, 5, 11, 6, 12, 1, 3};
    vector<int> timeB = {15, 14, 5, 19, 14, 11, 9, 4, 13, 5, 5, 7, 13, 8, 9, 11, 8, 11, 17, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 957134;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> timeJ = {11, 19, 9, 10, 15, 14, 1, 19, 16, 17, 5, 13, 1, 1, 13, 11, 5, 17, 11, 3};
    vector<int> timeB = {17, 7, 13, 12, 1, 2, 1, 17, 2, 6, 1, 11, 6, 3, 11, 5, 3, 11, 18, 11};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 928013;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> timeJ = {3, 17, 20, 15, 17, 1, 1, 3, 9, 19, 2, 13, 16, 1, 9, 19, 1, 1, 5, 19};
    vector<int> timeB = {14, 19, 13, 13, 9, 9, 5, 11, 10, 3, 3, 16, 20, 5, 1, 5, 19, 8, 17, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1042654;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> timeJ = {7, 9, 17, 11, 1, 11, 3, 13, 11, 16, 16, 17, 3, 8, 15, 17, 17, 19, 1, 17};
    vector<int> timeB = {20, 8, 9, 5, 11, 10, 18, 2, 3, 17, 17, 17, 5, 18, 3, 7, 6, 16, 1, 11};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1045575;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> timeJ = {1, 17, 1, 17, 16, 13, 3, 19, 13, 6, 16, 2, 5, 13, 16, 11, 1, 1, 15, 13};
    vector<int> timeB = {1, 7, 1, 13, 1, 9, 1, 16, 17, 16, 19, 17, 13, 11, 5, 11, 1, 12, 5, 15};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1030691;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> timeJ = {17, 1, 11, 5, 1, 17, 1, 1, 16, 17, 2, 11, 4, 1, 1, 16, 1, 5, 10, 1};
    vector<int> timeB = {3, 9, 1, 8, 3, 5, 13, 15, 9, 15, 12, 20, 2, 1, 18, 13, 13, 1, 20, 5};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 980138;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> timeJ = {5, 14, 5, 11, 5, 13, 1, 9, 9, 3, 11, 6, 5, 1, 5, 1, 20, 1, 8, 17};
    vector<int> timeB = {16, 6, 1, 14, 8, 17, 20, 1, 1, 19, 3, 1, 8, 5, 8, 1, 1, 13, 1, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1032747;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> timeJ = {5, 16, 1, 9, 1, 4, 9, 5, 13, 17, 3, 8, 11, 1, 19, 20, 17, 6, 19, 16};
    vector<int> timeB = {14, 13, 16, 13, 2, 10, 4, 11, 1, 1, 19, 9, 17, 5, 4, 1, 9, 1, 11, 18};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1034054;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> timeJ = {1, 11, 9, 9, 9, 13, 5, 2, 3, 16, 3, 1, 11, 13, 1, 17, 16, 13, 18, 17};
    vector<int> timeB = {9, 16, 13, 10, 16, 17, 1, 13, 1, 16, 3, 5, 6, 9, 13, 17, 1, 17, 3, 18};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1025268;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> timeJ = {6, 20, 19, 5, 1, 9, 1, 1, 1, 9, 15, 4, 1, 14, 13, 16, 16, 11, 11, 13};
    vector<int> timeB = {11, 16, 7, 13, 6, 11, 1, 15, 9, 17, 17, 12, 11, 3, 10, 5, 11, 1, 13, 18};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1031307;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> timeJ = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> timeB = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1048574;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> timeJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> timeB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1048574;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> timeJ = {13, 9, 12, 8, 10, 7, 16, 14, 17, 6, 5, 19, 11, 20, 2, 18, 3, 4, 1, 15};
    vector<int> timeB = {13, 9, 12, 8, 10, 7, 16, 14, 17, 6, 5, 19, 11, 20, 2, 18, 3, 4, 1, 15};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1047962;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> timeJ = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> timeB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> timeJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> timeB = {19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> timeJ = {19, 12, 15, 17, 17, 15, 17, 19, 19, 13, 18, 10, 15, 18, 11, 14, 12, 18, 13, 18};
    vector<int> timeB = {12, 19, 17, 15, 15, 17, 19, 17, 13, 19, 10, 18, 18, 15, 14, 11, 18, 12, 18, 13};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1048537;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> timeJ = {14, 18, 20, 10, 16, 15, 14, 20, 12, 14, 17, 11, 20, 18, 10, 10, 12, 14, 14, 12};
    vector<int> timeB = {18, 14, 10, 20, 15, 16, 20, 14, 14, 12, 11, 17, 18, 20, 10, 10, 14, 12, 12, 14};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1048536;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> timeJ = {16, 12, 16, 10, 16, 18, 11, 13, 11, 13, 19, 20, 14, 14, 11, 20, 16, 16, 14, 20};
    vector<int> timeB = {12, 16, 10, 16, 18, 16, 13, 11, 13, 11, 20, 19, 14, 14, 20, 11, 16, 16, 20, 14};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1048539;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> timeJ = {13, 16, 11, 12, 19, 12, 13, 13, 12, 18, 10, 15, 10, 20, 14, 20, 18, 18, 19, 10};
    vector<int> timeB = {16, 13, 12, 11, 12, 19, 13, 13, 18, 12, 15, 10, 20, 10, 20, 14, 18, 18, 10, 19};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1048535;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> timeJ = {19, 16, 15, 19, 17, 13, 17, 12, 19, 12, 18, 10, 15, 10, 11, 14, 12, 11, 13, 13};
    vector<int> timeB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> timeJ = {14, 12, 20, 19, 16, 10, 14, 18, 12, 11, 17, 12, 20, 14, 10, 14, 12, 13, 14, 18};
    vector<int> timeB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> timeJ = {16, 17, 16, 10, 16, 11, 11, 19, 11, 19, 19, 16, 14, 19, 11, 12, 16, 15, 14, 17};
    vector<int> timeB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> timeJ = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> timeB = {3, 1, 8, 11, 6, 10, 10, 3, 4, 7, 1, 10, 9, 1, 5, 10, 9, 5, 9, 9};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 60459;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> timeJ = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> timeB = {9, 1, 1, 8, 6, 6, 11, 1, 5, 8, 2, 3, 9, 1, 1, 2, 5, 8, 3, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 6195;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> timeJ = {1, 1, 2, 4, 1, 3, 1, 3, 1, 3, 3, 4, 1, 4, 3, 1, 1, 3, 1, 1};
    vector<int> timeB = {1, 1, 4, 3, 1, 1, 3, 3, 2, 2, 1, 1, 3, 4, 1, 1, 1, 3, 3, 4};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1046707;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> timeJ = {1, 1, 3, 1, 4, 1, 3, 1, 2, 1, 2, 1, 1, 2, 4, 2, 1};
    vector<int> timeB = {1, 1, 3, 2, 3, 3, 2, 3, 1, 1, 3, 1, 1, 4, 4, 3, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 127884;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> timeJ = {1, 3, 1, 4, 1, 1, 1, 4, 1, 1, 4, 3, 2, 1, 1, 3, 4};
    vector<int> timeB = {1, 3, 1, 1, 1, 1, 3, 1, 2, 1, 3, 1, 1, 3, 1, 4, 2};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 127799;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> timeJ = {4, 4};
    vector<int> timeB = {4, 4};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> timeJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> timeB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1048574;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> timeJ = {1, 2, 3, 4, 5, 6, 7};
    vector<int> timeB = {7, 6, 5, 4, 3, 2, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> timeJ = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> timeB = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1048574;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> timeJ = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> timeB = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 944024;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> timeJ = {10, 12, 3, 4, 5, 6, 7, 19, 17, 5, 4, 5, 3, 5, 3, 5, 3, 4, 5, 19};
    vector<int> timeB = {18, 17, 3, 3, 4, 5, 6, 17, 14, 15, 15, 18, 13, 14, 16, 19, 18, 17, 16, 2};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 604907;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> timeJ = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> timeB = {7, 6, 5, 4, 3, 2, 1, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1047962;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> timeJ = {1, 2, 3, 4, 5, 6, 7};
    vector<int> timeB = {7, 6, 5, 10, 3, 2, 1};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> timeJ = {1, 2, 3, 4, 5, 6, 7, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> timeB = {7, 6, 5, 4, 3, 2, 1, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1048458;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> timeJ = {11, 14, 12, 18, 13, 20, 20, 11, 13, 19, 13, 19, 15, 19, 12, 19, 16, 14, 11, 20};
    vector<int> timeB = {17, 12, 20, 19, 16, 16, 13, 17, 15, 16, 11, 19, 12, 13, 18, 18, 18, 17, 14, 17};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1048451;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> timeJ = {5, 12, 10, 19, 2, 18, 8, 7, 7, 9, 5, 10, 14, 2, 11, 13, 17, 6, 15, 5};
    vector<int> timeB = {17, 18, 9, 3, 7, 4, 2, 4, 7, 19, 7, 13, 7, 15, 9, 11, 13, 17, 17, 19};
    TheMoviesLevelThreeDivTwo* pObj = new TheMoviesLevelThreeDivTwo();
    clock_t start = clock();
    int result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    int expected = 1046299;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22775138&rd=14152&pm=10903
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cmath> 
#include <ctime> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <deque> 
#include <fstream> 
#include <iostream> 
#include <map> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <queue> 
#include <vector> 
#include <utility> 
using namespace std; 
 
bool x1[22],x2[22]; 
queue< pair<int,int> > q1,q2; 
 
class TheMoviesLevelThreeDivTwo 
{ 
  public: int find(vector<int>,vector<int>); 
}; 
 
int TheMoviesLevelThreeDivTwo::find(vector<int> a1,vector<int> a2) 
{ 
  int n = a1.size(); 
  int ret = 0; 
  for (int i = 0; i < (1 << n); i++) 
  { 
    for (int j = 0; j < n; j++) if (i & (1 << j)) q1.push(make_pair(j,0)); else q2.push(make_pair(j,0)); 
    int t1 = 0,t2 = 0; 
    memset(x1,true,sizeof(x1)); 
    memset(x2,true,sizeof(x2)); 
    int left1 = n,left2 = n; 
    while (!q1.empty() || !q2.empty()) 
    { 
      //Could not review 
      while (!q1.empty() && t1 < q1.front().second) q1.pop(); 
      pair<int,int> pp; 
      if (!q1.empty()) 
      { 
        pp = q1.front();  q1.pop(); 
        x1[pp.first] = false;  left1--;  t1 += a1[pp.first]; 
        if (x2[pp.first]) q2.push(make_pair(pp.first,t1)); 
      };       
      while (!q2.empty() && t2 < q2.front().second) q2.pop(); 
      if (!q2.empty()) 
      {   
        pp = q2.front();  q2.pop(); 
        x2[pp.first] = false;  left2--;  t2 += a2[pp.first]; 
        if (x1[pp.first]) q1.push(make_pair(pp.first,t2)); 
      }; 
    }; 
    if (!left1 && !left2) ret++; 
  }; 
  return ret; 
};

********************************************************************************
*******************************************************************************/