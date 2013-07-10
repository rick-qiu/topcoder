/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10902
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

class TheMoviesLevelThreeDivOne {
public:
    long find(vector<int> timeJ, vector<int> timeB);
};

long TheMoviesLevelThreeDivOne::find(vector<int> timeJ, vector<int> timeB) {
    long ret;
    return ret;
}


int test0() {
    vector<int> timeJ = {4, 4};
    vector<int> timeB = {4, 4};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 98;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 38;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
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
    vector<int> timeJ = {20};
    vector<int> timeB = {20};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
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
    vector<int> timeJ = {1};
    vector<int> timeB = {17};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
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
    vector<int> timeJ = {1, 7, 5, 17, 13, 6, 12, 3};
    vector<int> timeB = {17, 5, 9, 11, 5, 8, 11, 19};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 193;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 903;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 375315;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
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
    vector<int> timeJ = {19, 5, 1, 17, 16, 3, 3, 1, 2, 1, 17, 13, 19};
    vector<int> timeB = {5, 17, 9, 19, 20, 11, 14, 19, 3, 5, 9, 16, 1};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 6457;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
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
    vector<int> timeJ = {15, 5, 16, 11, 7, 14, 10, 6, 5, 13};
    vector<int> timeB = {18, 4, 7, 9, 10, 15, 5, 11, 17, 1};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 954;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 126914;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 957134;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 928013;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1042654;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1045575;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1030691;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 980138;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1032747;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1034054;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1025268;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1031307;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1048574;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1048574;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1047962;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1048537;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1048536;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1048539;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1048535;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 60459;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 6195;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1046707;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 127884;
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
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 127799;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> timeJ = {1, 5, 6, 12, 13, 7, 17, 3, 9, 11, 7, 12, 9, 4, 3, 1, 1, 11, 1, 5, 17, 17, 17, 7, 10, 3, 3, 6, 11, 5, 17, 11, 1, 1};
    vector<int> timeB = {17, 9, 8, 11, 5, 5, 11, 19, 14, 14, 13, 5, 15, 4, 1, 9, 13, 11, 7, 8, 1, 9, 19, 17, 16, 1, 19, 9, 2, 1, 6, 13, 5, 18};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 17125656989;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> timeJ = {20, 6, 9, 1, 1, 11, 5, 1, 1, 13, 15, 5, 10, 5, 11, 5, 1, 15, 17, 16, 2, 1, 1, 3, 5, 3, 19};
    vector<int> timeB = {20, 3, 13, 5, 11, 9, 16, 17, 17, 13, 8, 1, 5, 8, 3, 6, 5, 13, 19, 20, 3, 5, 19, 14, 17, 11, 1};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 124691632;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> timeJ = {9, 9, 16, 5, 3, 13, 1, 8, 10, 11, 9, 5, 10, 17, 7, 1, 18, 4, 15, 13, 17, 15, 19, 6, 1, 19, 5, 10, 19, 9};
    vector<int> timeB = {1, 13, 19, 19, 20, 9, 1, 9, 6, 11, 10, 7, 5, 16, 13, 15, 5, 14, 16, 11, 11, 17, 16, 17, 9, 13, 13, 11, 17, 13};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1073043536;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> timeJ = {6, 9, 16, 11, 17, 9, 20, 11, 1, 12, 16, 17, 17, 16, 13, 1, 1, 1, 11, 1, 5, 7, 5, 9, 1, 11, 15, 13, 19, 13};
    vector<int> timeB = {19, 5, 19, 19, 17, 11, 7, 5, 1, 19, 13, 2, 6, 5, 1, 3, 16, 13, 1, 16, 17, 15, 13, 1, 11, 13, 17, 16, 16, 1};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1073532382;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> timeJ = {9, 16, 13, 2, 1, 5, 19, 5, 1, 1, 17, 11, 13, 5, 1, 17, 3, 10, 5, 6, 6, 1, 17, 14, 2, 17, 7, 16, 11, 16, 20, 19, 1, 1, 6};
    vector<int> timeB = {18, 1, 1, 18, 1, 1, 1, 16, 3, 9, 12, 1, 1, 1, 16, 3, 8, 13, 13, 8, 9, 7, 9, 17, 6, 11, 15, 16, 5, 1, 3, 9, 17, 14, 5};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 34343656773;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> timeJ = {13, 9, 1, 5, 20, 11, 11, 1, 6, 5, 1, 5, 8, 3, 6, 5, 1, 11, 10, 4, 11, 9, 5};
    vector<int> timeB = {17, 1, 1, 1, 1, 14, 3, 13, 1, 8, 5, 8, 1, 18, 17, 9, 9, 1, 13, 19, 1, 8, 17};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 8312709;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> timeJ = {6, 7, 5, 1, 19, 17, 1, 4, 5, 4, 1, 5, 12, 10, 1, 13, 8, 17, 11, 18, 18, 1, 16, 5, 9, 13, 17, 1, 16, 17, 13, 11, 11, 3, 9, 13, 3, 9, 2, 1, 11, 9, 3, 7, 7};
    vector<int> timeB = {7, 13, 16, 9, 16, 1, 1, 5, 11, 2, 16, 17, 8, 17, 19, 1, 1, 9, 11, 13, 3, 9, 16, 1, 16, 17, 18, 13, 1, 17, 9, 6, 16, 1, 10, 17, 3, 13, 13, 5, 5, 8, 13, 1, 20};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 35184084150972;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> timeJ = {13, 6, 6, 17, 15, 8, 14, 5, 6, 17, 11, 1, 6, 5, 5, 11, 13, 16, 12, 1, 1, 1, 17, 6, 17, 5, 3, 16, 5, 14, 17, 13, 7, 11, 11, 13, 3, 1, 15};
    vector<int> timeB = {14, 9, 3, 11, 9, 16, 1, 16, 11, 9, 17, 12, 1, 5, 5, 10, 1, 15, 16, 5, 18, 5, 17, 17, 3, 1, 5, 7, 11, 9, 10, 1, 5, 13, 5, 15, 9, 12, 9};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 549755318831;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> timeJ = {17, 17, 6, 15, 1, 17, 6, 13, 9, 6, 1, 11, 15, 5, 15, 16, 1, 15, 2, 11, 13, 9, 20, 9, 1, 6, 9, 13, 7, 10, 6, 16, 3, 16, 17, 9, 7, 3};
    vector<int> timeB = {7, 13, 7, 1, 3, 1, 15, 7, 1, 3, 1, 1, 9, 13, 6, 1, 1, 5, 11, 11, 7, 17, 16, 12, 5, 17, 17, 1, 14, 16, 1, 5, 1, 10, 19, 1, 1, 1};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 271489895696;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> timeJ = {11, 13, 14, 1, 13, 17, 1, 7, 3, 1, 5, 8, 17, 7, 1, 11, 14, 17, 9, 7, 2, 1, 20, 9, 9, 16};
    vector<int> timeB = {1, 15, 16, 3, 9, 15, 5, 5, 11, 5, 5, 7, 5, 9, 13, 5, 3, 9, 17, 5, 1, 7, 11, 11, 10, 10};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 67076565;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> timeJ = {1, 10, 5, 12, 4, 17, 1, 1, 1, 15, 16, 11, 19, 7, 16, 1, 17, 11, 5, 9, 17, 1, 8, 1, 14, 1, 4, 5, 16, 17, 1, 6, 13, 3, 10, 17, 3, 12};
    vector<int> timeB = {3, 1, 11, 6, 1, 3, 19, 19, 17, 15, 19, 13, 9, 16, 17, 1, 1, 11, 17, 17, 5, 9, 16, 17, 3, 1, 1, 1, 15, 13, 1, 1, 11, 8, 1, 1, 3, 9};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 274842653660;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> timeJ = {17, 11, 3, 1, 13, 3, 1, 1, 9, 1, 8, 16, 5, 11, 16, 8, 5, 7, 4, 7, 10, 15, 19, 14, 17, 11, 1, 14, 1, 11, 11, 9, 13, 11, 16, 18};
    vector<int> timeB = {12, 5, 20, 10, 13, 13, 17, 17, 1, 3, 11, 17, 3, 4, 9, 1, 17, 1, 17, 5, 5, 9, 6, 1, 3, 3, 6, 5, 18, 16, 6, 5, 5, 18, 19, 9};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 68708969474;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> timeJ = {19, 1, 2, 12, 3, 17, 9, 5, 3, 5, 1, 11, 6, 6, 11, 11, 9, 17, 16, 1, 15, 9};
    vector<int> timeB = {17, 1, 5, 11, 13, 16, 11, 3, 11, 17, 9, 20, 9, 3, 8, 16, 13, 11, 5, 16, 9, 7};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 4093469;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> timeJ = {1, 5, 6, 12, 13, 7, 17, 3, 9, 11, 7, 12, 9, 4, 3, 1, 1, 11, 1, 5, 17, 17, 17, 7, 10, 3, 3, 6, 11, 5, 17, 11, 1, 1, 20, 20, 3, 13, 5, 11, 9, 16, 17, 17, 13, 8, 1};
    vector<int> timeB = {17, 9, 8, 11, 5, 5, 11, 19, 14, 14, 13, 5, 15, 4, 1, 9, 13, 11, 7, 8, 1, 9, 19, 17, 16, 1, 19, 9, 2, 1, 6, 13, 5, 18, 20, 6, 9, 1, 1, 11, 5, 1, 1, 13, 15, 5, 10};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140731434725119;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> timeJ = {5, 11, 5, 1, 15, 17, 16, 2, 1, 1, 3, 5, 3, 19, 17, 1, 13, 19, 19, 20, 9, 1, 9, 6, 11, 10, 7, 5, 16, 13, 15, 5, 14, 16, 11, 11, 17, 16, 17, 9, 13, 13, 11, 17, 13, 6, 9};
    vector<int> timeB = {8, 3, 6, 5, 13, 19, 20, 3, 5, 19, 14, 17, 11, 1, 9, 9, 16, 5, 3, 13, 1, 8, 10, 11, 9, 5, 10, 17, 7, 1, 18, 4, 15, 13, 17, 15, 19, 6, 1, 19, 5, 10, 19, 9, 1, 19, 5};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140737473121289;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> timeJ = {19, 19, 17, 11, 7, 5, 1, 19, 13, 2, 6, 5, 1, 3, 16, 13, 1, 16, 17, 15, 13, 1, 11, 13, 17, 16, 16, 1, 9, 16, 13, 2, 1, 5, 19, 5, 1, 1, 17, 11, 13, 5, 1, 17, 3, 10, 5};
    vector<int> timeB = {11, 17, 9, 20, 11, 1, 12, 16, 17, 17, 16, 13, 1, 1, 1, 11, 1, 5, 7, 5, 9, 1, 11, 15, 13, 19, 13, 5, 18, 1, 1, 18, 1, 1, 1, 16, 3, 9, 12, 1, 1, 1, 16, 3, 8, 13, 13};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140737251031529;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> timeJ = {8, 9, 7, 9, 17, 6, 11, 15, 16, 5, 1, 3, 9, 17, 14, 5, 13, 9, 1, 5, 20, 11, 11, 1, 6, 5, 1, 5, 8, 3, 6, 5, 1, 11, 10, 4, 11, 9, 5, 11, 7, 13, 16, 9, 16, 1, 1};
    vector<int> timeB = {6, 1, 17, 14, 2, 17, 7, 16, 11, 16, 20, 19, 1, 1, 6, 8, 17, 1, 1, 1, 1, 14, 3, 13, 1, 8, 5, 8, 1, 18, 17, 9, 9, 1, 13, 19, 1, 8, 17, 6, 7, 5, 1, 19, 17, 1, 4};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140737373605367;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> timeJ = {5, 4, 1, 5, 12, 10, 1, 13, 8, 17, 11, 18, 18, 1, 16, 5, 9, 13, 17, 1, 16, 17, 13, 11, 11, 3, 9, 13, 3, 9, 2, 1, 11, 9, 3, 7, 7, 3, 14, 9, 3, 11, 9, 16, 1, 16, 11};
    vector<int> timeB = {11, 2, 16, 17, 8, 17, 19, 1, 1, 9, 11, 13, 3, 9, 16, 1, 16, 17, 18, 13, 1, 17, 9, 6, 16, 1, 10, 17, 3, 13, 13, 5, 5, 8, 13, 1, 20, 13, 6, 6, 17, 15, 8, 14, 5, 6, 17};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140736222733291;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> timeJ = {11, 1, 6, 5, 5, 11, 13, 16, 12, 1, 1, 1, 17, 6, 17, 5, 3, 16, 5, 14, 17, 13, 7, 11, 11, 13, 3, 1, 15, 3, 7, 13, 7, 1, 3, 1, 15, 7, 1, 3, 1, 1, 9, 13, 6, 1, 1};
    vector<int> timeB = {17, 12, 1, 5, 5, 10, 1, 15, 16, 5, 18, 5, 17, 17, 3, 1, 5, 7, 11, 9, 10, 1, 5, 13, 5, 15, 9, 12, 9, 17, 17, 6, 15, 1, 17, 6, 13, 9, 6, 1, 11, 15, 5, 15, 16, 1, 15};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140695055181937;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> timeJ = {2, 11, 13, 9, 20, 9, 1, 6, 9, 13, 7, 10, 6, 16, 3, 16, 17, 9, 7, 3, 17, 1, 15, 16, 3, 9, 15, 5, 5, 11, 5, 5, 7, 5, 9, 13, 5, 3, 9, 17, 5, 1, 7, 11, 11, 10, 10};
    vector<int> timeB = {11, 11, 7, 17, 16, 12, 5, 17, 17, 1, 14, 16, 1, 5, 1, 10, 19, 1, 1, 1, 11, 13, 14, 1, 13, 17, 1, 7, 3, 1, 5, 8, 17, 7, 1, 11, 14, 17, 9, 7, 2, 1, 20, 9, 9, 16, 9};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140737480794923;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> timeJ = {3, 1, 11, 6, 1, 3, 19, 19, 17, 15, 19, 13, 9, 16, 17, 1, 1, 11, 17, 17, 5, 9, 16, 17, 3, 1, 1, 1, 15, 13, 1, 1, 11, 8, 1, 1, 3, 9, 17, 11, 3, 1, 13, 3, 1, 1, 9};
    vector<int> timeB = {10, 5, 12, 4, 17, 1, 1, 1, 15, 16, 11, 19, 7, 16, 1, 17, 11, 5, 9, 17, 1, 8, 1, 14, 1, 4, 5, 16, 17, 1, 6, 13, 3, 10, 17, 3, 12, 1, 12, 5, 20, 10, 13, 13, 17, 17, 1};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140737139470697;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> timeJ = {3, 11, 17, 3, 4, 9, 1, 17, 1, 17, 5, 5, 9, 6, 1, 3, 3, 6, 5, 18, 16, 6, 5, 5, 18, 19, 9, 19, 1, 2, 12, 3, 17, 9, 5, 3, 5, 1, 11, 6, 6, 11, 11, 9, 17, 16, 1};
    vector<int> timeB = {8, 16, 5, 11, 16, 8, 5, 7, 4, 7, 10, 15, 19, 14, 17, 11, 1, 14, 1, 11, 11, 9, 13, 11, 16, 18, 5, 17, 1, 5, 11, 13, 16, 11, 3, 11, 17, 9, 20, 9, 3, 8, 16, 13, 11, 5, 16};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140630036552760;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> timeJ = {9, 7, 1, 17, 16, 9, 1, 15, 4, 1, 9, 1, 13, 6, 3, 1, 5, 8, 8, 3, 13, 6, 13, 1, 4, 5, 4, 8, 11, 1, 9, 5, 11, 1, 1, 15, 3, 1, 11, 9, 6, 11, 3, 5, 1, 16, 2};
    vector<int> timeB = {9, 13, 13, 3, 5, 17, 16, 1, 16, 18, 3, 15, 5, 5, 17, 15, 16, 13, 2, 16, 1, 5, 9, 1, 9, 1, 18, 1, 1, 16, 5, 1, 11, 15, 1, 1, 1, 1, 9, 1, 13, 7, 17, 19, 6, 1, 16};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140424404392565;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> timeJ = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> timeB = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140737488355326;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> timeJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> timeB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140737488355326;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> timeJ = {17, 17, 18, 20, 17, 19, 17, 19, 17, 19, 19, 20, 17, 20, 19, 17, 17, 19, 17, 17, 17, 17, 17, 19, 18, 19, 19, 18, 19, 17, 17, 19, 17, 17, 20, 20, 19, 17, 17, 19, 17, 20, 17, 17, 17, 20, 17};
    vector<int> timeB = {17, 17, 20, 19, 17, 17, 19, 19, 18, 18, 17, 17, 19, 20, 17, 17, 17, 19, 19, 20, 17, 17, 19, 17, 20, 17, 19, 17, 18, 17, 18, 17, 17, 18, 20, 18, 17, 17, 17, 19, 17, 17, 17, 17, 19, 17, 18};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140737488355232;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> timeJ = {17, 19, 17, 17, 19, 17, 20, 18, 17, 17, 19, 17, 19, 19, 17, 17, 17, 19, 19, 20, 17, 17, 17, 18, 19, 18, 19, 17, 20, 17, 19, 17, 18, 20, 19, 19, 17, 20, 17, 17, 17, 17, 19, 17, 17, 18, 17};
    vector<int> timeB = {20, 19, 18, 17, 17, 19, 20, 19, 17, 19, 18, 17, 19, 17, 17, 17, 20, 17, 19, 17, 17, 20, 18, 19, 17, 17, 18, 17, 19, 17, 18, 20, 19, 17, 17, 19, 19, 18, 17, 19, 17, 18, 19, 17, 17, 19, 17};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140737488355251;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> timeJ = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> timeB = {19, 19, 19, 19, 19, 20, 18, 18, 19, 19, 20, 20, 19, 18, 20, 19, 18, 19, 18, 20, 20, 18, 19, 19, 20, 18, 19, 19, 20, 20, 20, 19, 20, 20, 20, 18, 19, 19, 18, 19, 18, 20, 19, 18, 18, 18, 18};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140737488337983;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> timeJ = {17, 18, 19, 18, 17, 18, 18, 19, 20, 20, 20, 17, 17, 18, 19, 17, 19, 19, 17, 18, 17, 20, 17, 17, 19, 17, 17, 17, 18, 17, 20, 20, 19, 18, 20, 19, 18, 20, 20, 20, 20, 18, 19, 19, 20, 19, 17};
    vector<int> timeB = {19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140737488354198;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> timeJ = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> timeB = {14, 16, 14, 15, 12, 16, 14, 17, 17, 18, 16, 15, 12, 16, 16, 14, 17, 15, 12, 17, 13, 14, 15, 19, 19, 18, 15, 15, 18, 15, 14, 18, 16, 17, 13, 15, 14, 18, 12, 19, 14, 13, 18, 17, 15, 19, 14};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140713140689599;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> timeJ = {1, 2, 3, 4, 5, 6, 7};
    vector<int> timeB = {7, 6, 5, 4, 3, 2, 1};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 98;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> timeJ = {9, 9, 4, 15, 16, 14, 1, 9, 3, 14, 1, 12, 6, 19, 8, 3, 4, 2, 8, 13, 16, 1, 12, 6, 5, 18, 8, 12, 18, 10, 11, 8, 20, 18, 4, 5, 7, 15, 5, 10, 16, 8, 7, 4, 12, 19, 14};
    vector<int> timeB = {4, 1, 3, 11, 3, 11, 14, 7, 20, 2, 18, 14, 19, 11, 3, 9, 9, 18, 16, 2, 2, 2, 11, 14, 12, 3, 19, 2, 15, 7, 20, 19, 1, 3, 11, 19, 18, 13, 7, 9, 14, 2, 10, 20, 17, 9, 7};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140737455932949;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> timeJ = {20, 15, 14, 1, 5, 7, 4, 8, 9, 3, 2, 10, 14, 7, 19, 16, 17, 18, 4, 1, 20, 15, 14, 1, 5, 7, 4, 8, 9, 3, 2, 10, 14, 7, 19, 16, 17, 18, 4, 1, 8, 5, 1, 13, 5, 7, 8};
    vector<int> timeB = {14, 1, 5, 7, 4, 8, 9, 3, 2, 10, 14, 7, 19, 16, 17, 18, 4, 1, 8, 5, 1, 13, 5, 7, 8, 20, 15, 14, 1, 5, 7, 4, 8, 9, 3, 2, 10, 14, 7, 19, 16, 17, 18, 4, 1, 20, 15};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140736029941081;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> timeJ = {1, 12, 3, 4, 2, 1, 2, 3, 5, 2, 7, 8, 17, 18, 9, 14, 13, 12, 1, 4, 18, 9, 19, 8, 7, 6, 5, 4};
    vector<int> timeB = {1, 13, 8, 9, 1, 8, 9, 7, 1, 7, 6, 9, 19, 11, 2, 10, 19, 19, 2, 3, 10, 2, 10, 9, 9, 9, 9, 1};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 267900634;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> timeJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> timeB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 140737488355326;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> timeJ = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> timeB = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741822;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> timeJ = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> timeB = {6, 6, 6, 6, 5, 5, 4, 4, 9, 7, 6, 8, 8, 6, 7, 6, 6, 6, 6, 7, 7, 4, 4, 4, 5, 5, 9, 4, 4, 9, 5, 5, 5, 4, 9, 4, 4, 4, 4, 4, 4, 4};
    TheMoviesLevelThreeDivOne* pObj = new TheMoviesLevelThreeDivOne();
    clock_t start = clock();
    long result = pObj->find(timeJ, timeB);
    clock_t end = clock();
    delete pObj;
    long expected = 3428169181221;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=14152&pm=10902
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define SIZE(X) ((int)(X.size())) 
typedef long long int64; 
#define twoL(X) (((int64)(1))<<(X)) 
 
const int M=1002; 
 
class TheMoviesLevelThreeDivOne 
{ 
public: 
  int n,A[60],B[60]; 
  int64 F0[2005][2005],F1[2005][2005]; 
  int64 solve() 
  { 
    F0[M][M]=1; 
    int minc=M,maxc=M; 
    for (int i=0;i<n;i++) 
    { 
      int a=A[i],b=B[i]; 
      minc-=b; 
      maxc+=a; 
      for (int c1=minc;c1<=maxc;c1++) memset(F1[c1]+minc,0,(maxc-minc+1)*sizeof(int64)); 
      minc+=b; 
      maxc-=a; 
      for (int c1=minc;c1<=maxc;c1++) 
      { 
        for (int c2=min(maxc,c1+a-1);c2>=c1;c2--) if (F0[c1][c2]) 
        { 
          F1[c1-b][c2-b]+=F0[c1][c2]; 
          F1[c1+a-b][c1+a]+=F0[c1][c2]; 
        } 
        for (int c2=max(c1+a,c1);c2<=maxc;c2++) if (F0[c1][c2]) 
        { 
          F1[c1-b][c2-b]+=F0[c1][c2]; 
          F1[c1+a-b][c2]+=F0[c1][c2]; 
        } 
      } 
      minc-=b; 
      maxc+=a; 
      for (int c1=minc;c1<=maxc;c1++) memcpy(F0[c1]+minc,F1[c1]+minc,(maxc-minc+1)*sizeof(int64)); 
    } 
    int64 R=twoL(n); 
    for (int c1=minc;c1<=M;c1++) for (int c2=minc;c2<=M;c2++) R-=F0[c1][c2]; 
    return R; 
  } 
  int64 find(vector <int> _A, vector <int> _B) 
  { 
    n=SIZE(_A); 
    if (n<2) return 0; 
    for (int i=0;i<n;i++) 
    { 
      A[i]=_A[i]; 
      B[i]=_B[i]; 
    } 
    int64 R=twoL(n); 
    R-=solve(); 
    for (int i=0;i<n;i++) swap(A[i],B[i]); 
    R-=solve(); 
    return R; 
  } 
};

********************************************************************************
*******************************************************************************/