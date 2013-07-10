/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11865
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

class AliceBobShuffle {
public:
    int countWays(vector<int> AliceStart, vector<int> BobStart, vector<int> AliceEnd, vector<int> BobEnd);
};

int AliceBobShuffle::countWays(vector<int> AliceStart, vector<int> BobStart, vector<int> AliceEnd, vector<int> BobEnd) {
    int ret;
    return ret;
}


int test0() {
    vector<int> AliceStart = {1, 3};
    vector<int> BobStart = {2, 4};
    vector<int> AliceEnd = {2, 3};
    vector<int> BobEnd = {1, 4};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> AliceStart = {1, 2, 1};
    vector<int> BobStart = {1, 2};
    vector<int> AliceEnd = {1, 2, 1};
    vector<int> BobEnd = {2, 1};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> AliceStart = {1};
    vector<int> BobStart = {2};
    vector<int> AliceEnd = {3};
    vector<int> BobEnd = {4};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> AliceStart = {1, 2};
    vector<int> BobStart = {3};
    vector<int> AliceEnd = {3};
    vector<int> BobEnd = {2, 1};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> AliceStart = {3, 3, 2, 4, 1, 3, 1, 2, 1, 1, 5, 5, 1, 2, 3, 1, 2, 1, 2, 1, 1, 1, 2};
    vector<int> BobStart = {4, 1, 4, 3, 4, 4, 4, 3, 2, 1, 6, 2, 2, 3, 2, 2, 1, 3, 2, 3};
    vector<int> AliceEnd = {4, 1, 4, 3, 4, 4, 4, 1, 3, 1, 2, 2, 2, 3, 2, 1, 2, 1, 2, 2, 2};
    vector<int> BobEnd = {3, 3, 2, 3, 4, 2, 1, 2, 1, 1, 5, 6, 5, 1, 3, 1, 2, 3, 1, 1, 1, 3};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 314159265;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> AliceStart = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> BobStart = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> AliceEnd = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> BobEnd = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 383726909;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> AliceStart = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> BobStart = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> AliceEnd = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> BobEnd = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 538992043;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> AliceStart = {1, 2, 1, 2, 1, 4, 10, 1, 1, 1, 1, 1, 1, 1, 2, 1, 4, 5, 1, 2, 4, 3, 1, 2, 1, 2, 2, 1, 1, 3, 2, 5, 3, 1, 2, 1, 2, 1, 3, 2, 3, 1, 3, 2, 2, 1, 1, 3, 1, 2};
    vector<int> BobStart = {1, 1, 2, 3, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 6, 1, 2, 1, 1, 1, 1, 1, 7, 3, 1, 3, 2, 4, 3, 1, 1, 3, 1, 1, 2, 1, 1, 2, 3, 1, 6, 2, 3, 1, 2, 2, 1};
    vector<int> AliceEnd = {1, 2, 1, 1, 2, 1, 4, 1, 10, 2, 3, 1, 1, 1, 2, 2, 1, 4, 5, 1, 2, 3, 1, 2, 2, 1, 3, 1, 2, 1, 5, 3, 2, 1, 1, 3, 1, 1, 3, 1, 2, 1, 2, 1, 3, 1, 2, 1, 1, 6};
    vector<int> BobEnd = {1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 6, 1, 4, 1, 2, 2, 1, 1, 1, 1, 3, 7, 1, 1, 3, 2, 4, 2, 3, 2, 3, 1, 3, 2, 1, 1, 3, 2, 2, 3, 1, 2, 2, 1};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 239177234;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> AliceStart = {5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 8, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 8, 5, 5, 5, 5, 5, 8};
    vector<int> BobStart = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5};
    vector<int> AliceEnd = {5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 8, 8, 5, 5, 5, 5};
    vector<int> BobEnd = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 8, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 8};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 33929884;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> AliceStart = {2, 2, 2, 4};
    vector<int> BobStart = {1, 1, 2, 1, 2, 3, 2, 1, 2, 1, 3, 1, 2};
    vector<int> AliceEnd = {2, 2, 2, 3, 4, 2, 1, 2, 1};
    vector<int> BobEnd = {1, 1, 2, 2, 1, 1, 3, 2};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> AliceStart = {1, 1, 3, 8, 2, 1, 1, 4, 3, 1, 1, 1, 3, 2};
    vector<int> BobStart = {1, 3, 2, 1, 1, 2, 4, 1, 5, 1, 1, 2, 1, 3, 2, 2, 1, 3, 1, 2, 1, 7, 1};
    vector<int> AliceEnd = {3, 1, 1, 1, 2, 2, 3, 3, 2, 1, 3, 2, 7, 2, 1};
    vector<int> BobEnd = {1, 1, 3, 1, 2, 8, 2, 1, 4, 1, 5, 1, 4, 1, 1, 1, 1, 2, 1, 1, 3, 1};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 152830;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> AliceStart = {1, 2, 1, 2, 1, 4, 10, 1, 1, 1, 1, 1, 1, 1, 2, 1, 4, 5, 1, 2, 4, 3, 1, 2, 1, 2, 2, 1, 1, 3, 2, 5, 3, 1, 2, 1, 2, 1, 3, 2, 3, 1, 3, 2, 2, 1, 1, 3, 1, 2};
    vector<int> BobStart = {1, 1, 2, 3, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 6, 1, 2, 1, 1, 1, 1, 1, 7, 3, 1, 3, 2, 4, 3, 1, 1, 3, 1, 1, 2, 1, 1, 2, 3, 1, 6, 2, 3, 1, 2, 2, 1};
    vector<int> AliceEnd = {1, 2, 1, 1, 2, 1, 4, 1, 10, 2, 3, 1, 1, 1, 2, 2, 1, 4, 5, 1, 2, 3, 1, 2, 2, 1, 3, 1, 2, 1, 5, 3, 2, 1, 1, 3, 1, 1, 3, 1, 2, 1, 2, 1, 3, 1, 2, 1, 1, 6};
    vector<int> BobEnd = {1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 6, 1, 4, 1, 2, 2, 1, 1, 1, 1, 3, 7, 1, 1, 3, 2, 4, 2, 3, 2, 3, 1, 3, 2, 1, 1, 3, 2, 2, 3, 1, 2, 2, 1};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 239177234;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> AliceStart = {1, 2, 6, 1, 1, 8, 2, 4, 4, 2, 2, 2, 4, 3, 4, 3, 8, 2, 1, 1, 1};
    vector<int> BobStart = {1, 1, 6, 1, 1, 1, 1, 2, 2, 3, 5, 1, 2, 1, 1, 3, 1, 2, 2, 4};
    vector<int> AliceEnd = {1, 1, 2, 6, 2, 1, 2, 3, 4, 3, 4, 2, 2, 1, 4};
    vector<int> BobEnd = {1, 6, 1, 1, 1, 1, 2, 1, 3, 5, 1, 1, 2, 8, 1, 4, 2, 2, 1, 2, 4, 2, 3, 8, 1, 1};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 5472900;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> AliceStart = {1, 2, 1, 2, 1, 1, 4, 3, 1, 1, 1, 1, 1, 2, 1, 2, 2, 3, 2, 9, 3, 3, 1, 1, 3, 1, 1, 8, 1, 1, 5, 1, 2, 2, 1, 1, 3, 2, 1, 4, 2, 2};
    vector<int> BobStart = {1, 1, 1, 1, 1, 3, 2, 2, 1, 3, 2, 4, 1, 4, 1, 3, 3, 1, 1, 1, 1, 2, 1, 2, 1, 1, 3, 4};
    vector<int> AliceEnd = {2, 2, 1, 1, 1, 1, 1, 2, 3, 3, 2, 1, 2, 2, 3, 3, 2, 3, 1, 3, 1, 8, 5, 1, 2, 1, 2, 2, 1, 2, 2, 1, 4};
    vector<int> BobEnd = {1, 1, 1, 1, 3, 4, 1, 1, 2, 1, 1, 1, 1, 2, 4, 1, 4, 1, 9, 3, 1, 3, 1, 1, 1, 1, 1, 1, 1, 2, 1, 3, 4, 1, 1, 3, 2};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 209212508;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> AliceStart = {57, 54, 56, 53, 56, 54, 57, 55, 55, 56, 53, 56, 57, 55, 57, 54, 53, 57, 53, 53, 57, 53, 57};
    vector<int> BobStart = {54, 54, 56, 53, 55, 55, 57, 55, 55};
    vector<int> AliceEnd = {57, 54, 54, 53, 56, 56, 53, 54, 55, 55, 55, 57, 53, 57, 53, 57};
    vector<int> BobEnd = {54, 56, 57, 55, 56, 53, 56, 55, 57, 57, 54, 55, 57, 53, 53, 55};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 88536;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> AliceStart = {8, 9, 2, 6, 6, 11, 9, 6, 6, 2, 8, 4, 2, 7, 11, 9, 9, 6, 11, 5, 7, 9, 8, 11, 4, 7, 3, 2, 9, 8, 5, 4, 4, 3, 2, 10, 3, 3, 6, 9, 6, 7, 10, 9, 3, 7, 2, 2, 6, 5};
    vector<int> BobStart = {8, 3, 11, 7, 3, 7, 2, 8, 5, 11, 2, 4, 5, 11, 11, 7, 11, 8, 8, 6, 6, 5, 10, 2, 7, 3, 9, 8, 10, 2, 9, 3, 10, 9, 5, 11, 5, 4, 9, 3, 2, 2, 9, 10, 8, 5, 9};
    vector<int> AliceEnd = {8, 3, 7, 2, 6, 7, 11, 9, 5, 2, 5, 11, 11, 7, 9, 9, 6, 8, 11, 8, 11, 6, 4, 10, 3, 2, 9, 7, 8, 9, 4, 8, 10, 3, 2, 2, 10, 9, 7, 3, 10, 9, 9, 5, 11, 7, 9, 8, 5, 9};
    vector<int> BobEnd = {8, 11, 9, 3, 6, 2, 8, 6, 6, 11, 2, 8, 4, 4, 2, 7, 11, 11, 8, 6, 5, 7, 9, 7, 5, 2, 5, 3, 4, 3, 3, 6, 9, 6, 10, 3, 2, 2, 5, 4, 6, 5, 3, 2, 2, 9, 10};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 658865024;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> AliceStart = {48, 87, 88, 79, 70, 81, 51, 81, 53, 71, 74, 55, 79, 64, 83, 60, 86, 61, 60, 53, 85, 58, 78, 51, 66, 74, 69, 64, 61, 52, 57, 62, 52, 66, 54, 64, 55, 56, 74, 72, 78, 66};
    vector<int> BobStart = {55, 72, 50, 53, 64, 48, 81, 50, 83, 85, 53, 72, 88, 71, 81, 69, 72, 81, 49, 74, 67, 52, 67, 65, 58, 83, 58, 82, 87, 78, 62, 83, 86, 51, 51, 83, 74, 62, 84, 77, 52, 83, 49, 86, 74, 62, 62, 64, 77, 52};
    vector<int> AliceEnd = {55, 72, 48, 50, 88, 53, 79, 70, 51, 48, 81, 53, 85, 72, 74, 88, 71, 86, 81, 81, 60, 53, 85, 52, 67, 78, 83, 58, 51, 82, 66, 74, 83, 64, 86, 61, 52, 51, 83, 57, 62, 66, 54, 56, 74, 62, 72, 49, 86, 74};
    vector<int> BobEnd = {87, 64, 81, 81, 50, 83, 53, 71, 55, 79, 64, 83, 60, 69, 72, 61, 49, 74, 58, 67, 65, 58, 87, 78, 62, 69, 51, 74, 52, 64, 55, 84, 77, 52, 83, 78, 62, 62, 64, 66, 77, 52};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 378943993;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> AliceStart = {21, 27, 26, 28, 24, 27, 28, 20, 24, 20, 25, 28, 21, 21, 22, 27, 24, 25, 25, 22, 28, 24, 25, 29};
    vector<int> BobStart = {20, 23, 20, 24, 29, 29, 21, 22, 21, 23, 28, 26, 27, 22, 27, 23, 27, 26, 22, 27};
    vector<int> AliceEnd = {23, 24, 20, 27, 24, 29, 25, 21, 29, 21, 22, 24, 25, 28, 26, 22, 28, 24, 22, 27};
    vector<int> BobEnd = {21, 27, 26, 20, 28, 28, 20, 24, 20, 28, 21, 27, 22, 25, 21, 23, 27, 22, 27, 23, 25, 29, 27, 26};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 112518;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> AliceStart = {17, 15, 19, 22, 18, 17, 29, 22, 19, 24, 25, 17, 20, 17, 19, 30, 21, 30, 27, 17, 19, 24, 14, 30, 19, 25};
    vector<int> BobStart = {10, 24, 31, 17, 31, 10, 10, 10, 29, 24, 23, 10, 29, 21, 27, 13, 11, 13, 24, 19, 28, 11, 10, 28, 18, 15, 16, 19, 23};
    vector<int> AliceEnd = {24, 31, 10, 10, 15, 24, 19, 22, 23, 17, 24, 25, 13, 17, 19, 19, 30, 28, 21, 30, 11, 10, 28, 18, 17, 24, 15, 25, 19, 23};
    vector<int> BobEnd = {10, 17, 31, 17, 10, 29, 10, 18, 29, 29, 21, 27, 22, 19, 13, 11, 17, 20, 24, 27, 19, 14, 30, 16, 19};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 117450;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> AliceStart = {81, 82, 82, 83, 80, 85, 81, 81, 78, 85, 85, 82, 82, 83, 84, 84, 85, 78, 85, 78, 82, 85};
    vector<int> BobStart = {84, 84, 80, 79, 78, 78, 80, 80, 78, 84, 84, 84};
    vector<int> AliceEnd = {82, 84, 80, 81, 82, 79, 78, 82, 80, 78, 85, 78, 84, 82, 85};
    vector<int> BobEnd = {81, 82, 83, 85, 84, 81, 78, 85, 80, 85, 78, 83, 84, 84, 85, 80, 78, 84, 84};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 69210;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> AliceStart = {60, 64, 68, 67, 66, 60, 68, 57, 61, 66, 56, 71, 59, 58, 63, 65, 72, 68, 57, 61, 71, 61, 63, 60, 68, 70, 59, 61, 70, 68, 65, 65, 58, 65};
    vector<int> BobStart = {63, 59, 71, 56, 70, 67, 72, 70, 60, 56, 68, 57, 63, 58, 67, 70, 61, 67, 67, 60, 59, 58, 64, 71, 61, 71, 61, 71, 69, 66, 61, 66, 66, 58, 66, 70, 69, 70, 72, 64, 58, 66, 63, 72, 65, 64, 59};
    vector<int> AliceEnd = {63, 60, 64, 56, 68, 67, 66, 72, 70, 60, 61, 63, 70, 59, 61, 67, 60, 58, 57, 61, 71, 61, 63, 60, 71, 61, 59, 61, 66, 70, 65, 58, 65, 58};
    vector<int> BobEnd = {59, 71, 70, 67, 60, 68, 57, 56, 68, 57, 66, 56, 71, 58, 67, 58, 67, 59, 63, 65, 72, 64, 68, 71, 61, 71, 61, 68, 69, 70, 66, 66, 66, 58, 68, 70, 69, 70, 72, 64, 66, 63, 72, 65, 65, 64, 59};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 908112969;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> AliceStart = {28, 29, 27, 26, 27, 27, 26, 26, 29, 29, 26, 28, 27, 26, 26, 28, 29, 27, 27, 29, 27, 29, 26};
    vector<int> BobStart = {26, 27, 26, 26, 28, 27, 28, 27, 28, 27, 29, 29, 27, 26, 28, 29, 28, 28, 29, 26, 27, 29, 28, 28, 27, 28, 27, 28, 28, 26, 29, 26, 29, 26, 26};
    vector<int> AliceEnd = {28, 28, 26, 28, 29, 29, 29, 26, 28, 28, 27, 29, 28, 26, 26, 28, 26, 27, 29, 28, 28, 28, 27, 27, 28, 26, 29, 29, 26, 26};
    vector<int> BobEnd = {26, 27, 29, 26, 26, 27, 26, 27, 27, 27, 26, 27, 28, 27, 29, 27, 26, 28, 29, 29, 27, 27, 29, 28, 27, 26, 29, 26};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 293446258;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> AliceStart = {40, 21, 35, 33, 10, 11, 12, 36, 10, 15, 26, 25, 19, 12, 32, 7, 30, 18, 28, 26, 32, 34, 37, 7, 27, 38, 45, 19, 16, 10, 39, 19, 24, 45, 21, 16, 11, 24, 17, 17, 38, 39, 44, 38, 11, 15};
    vector<int> BobStart = {46, 14, 7, 14, 21, 45, 43, 46, 11, 44, 38, 11, 8, 31, 23, 25, 17, 13, 39, 8, 14, 11, 18, 25, 42, 23, 39, 42, 12, 36, 46, 17, 40, 29, 10, 19, 13, 12, 42, 8, 12, 46, 8, 25};
    vector<int> AliceEnd = {40, 21, 46, 7, 14, 12, 10, 15, 46, 19, 11, 32, 31, 23, 13, 39, 18, 28, 11, 37, 18, 42, 45, 19, 16, 10, 39, 12, 24, 36, 16, 11, 38, 29, 10, 13, 12, 38, 8, 12, 46, 25};
    vector<int> BobEnd = {35, 14, 33, 21, 45, 10, 11, 36, 43, 26, 25, 44, 38, 12, 11, 8, 7, 30, 25, 17, 8, 26, 14, 32, 34, 7, 25, 27, 23, 38, 39, 42, 19, 45, 21, 46, 24, 17, 17, 17, 40, 39, 19, 44, 42, 11, 8, 15};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 602581406;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> AliceStart = {48, 45, 48, 47, 44, 53, 52, 52, 44, 45, 50, 45, 43, 46, 48, 52, 53, 45, 47, 44, 43, 50, 46, 46, 46, 49, 54, 52, 43, 45, 53, 54};
    vector<int> BobStart = {52, 50, 45, 51, 43, 50, 45, 47, 46, 49, 43, 47, 51, 43, 45, 53, 48, 46, 48, 50, 46, 49, 54, 47, 48, 51, 52, 45, 52, 47, 53, 50, 45};
    vector<int> AliceEnd = {52, 47, 44, 53, 52, 43, 44, 45, 47, 46, 43, 48, 52, 53, 45, 46, 46, 49, 46, 47, 49, 45, 45, 53, 53, 50};
    vector<int> BobEnd = {48, 45, 48, 50, 45, 51, 52, 50, 45, 50, 45, 49, 43, 46, 47, 51, 43, 45, 53, 47, 44, 43, 50, 48, 48, 50, 46, 54, 46, 54, 52, 48, 51, 52, 52, 43, 47, 45, 54};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 58657544;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> AliceStart = {17, 22, 17, 24, 23, 26, 19, 40, 29, 41, 35, 23, 23, 28, 45, 18, 39, 31, 42, 33, 26, 28, 18, 16, 45, 39, 41, 26, 18, 17, 35, 32, 18};
    vector<int> BobStart = {34, 36, 41, 23, 23, 24, 29, 25, 29, 25, 32, 36, 22, 23, 29, 36, 27, 23, 36, 25, 33, 40, 22, 21, 41, 17, 32, 33, 17, 41, 34, 43, 22, 30, 42, 35};
    vector<int> AliceEnd = {22, 36, 17, 41, 24, 23, 24, 29, 25, 32, 36, 26, 23, 40, 41, 23, 36, 25, 23, 41, 18, 17, 39, 42, 33, 26, 28, 18, 33, 41, 34, 43, 26, 30, 17, 35, 32};
    vector<int> BobEnd = {17, 34, 23, 23, 25, 29, 22, 19, 29, 29, 36, 27, 35, 33, 40, 23, 22, 21, 28, 45, 31, 32, 16, 45, 39, 41, 17, 18, 22, 42, 18, 35};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 13824000;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> AliceStart = {54, 52, 53, 51, 52, 51, 52, 54, 50, 53, 50, 50, 54, 53, 51};
    vector<int> BobStart = {54, 54, 53, 54, 54, 53, 54, 53, 50, 52, 52, 51, 52, 53, 50, 52, 54, 51, 54, 53, 54, 53};
    vector<int> AliceEnd = {54, 52, 53, 54, 51, 54, 51, 52, 50, 51, 54, 51, 53};
    vector<int> BobEnd = {54, 54, 53, 51, 52, 54, 52, 53, 53, 54, 50, 50, 52, 52, 53, 53, 50, 50, 52, 54, 54, 53, 54, 53};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 1989960;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> AliceStart = {11, 7, 11, 10, 12, 8, 13, 14, 9, 14};
    vector<int> BobStart = {10, 10, 13, 12, 7, 9, 9, 8, 13, 7, 10, 10};
    vector<int> AliceEnd = {10, 13, 7, 11, 10, 12, 8, 12, 7, 9, 14};
    vector<int> BobEnd = {11, 10, 9, 9, 13, 14, 8, 13, 7, 10, 10};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> AliceStart = {20, 16, 19, 22, 12, 15, 18, 17, 24, 15, 12, 15, 15, 13, 24, 18, 23, 15};
    vector<int> BobStart = {13, 14, 13, 25, 23, 20, 12, 11, 19, 25, 25, 15, 26, 13, 22, 13, 24, 17, 13, 14, 25, 18, 12, 13, 18, 17, 16, 16, 18, 22, 22, 26};
    vector<int> AliceEnd = {20, 13, 19, 23, 12, 11, 15, 19, 25, 18, 24, 22, 24, 13, 15, 15, 16, 26, 15};
    vector<int> BobEnd = {13, 14, 16, 25, 20, 12, 22, 25, 15, 26, 13, 17, 15, 13, 17, 12, 14, 25, 18, 12, 13, 18, 17, 13, 16, 18, 22, 22, 24, 18, 23};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 186624;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> AliceStart = {59, 56, 63, 62, 56, 59, 64, 64, 61, 66, 57, 64, 68, 59, 64, 56, 65, 62, 67, 63};
    vector<int> BobStart = {62, 56, 59, 62, 66, 67, 67, 68, 59, 67, 65, 65, 60, 66, 68, 59};
    vector<int> AliceEnd = {59, 56, 56, 62, 56, 59, 64, 67, 66, 67, 68, 59, 59, 65, 67, 66, 63};
    vector<int> BobEnd = {62, 63, 59, 62, 64, 61, 66, 57, 68, 64, 67, 64, 56, 65, 65, 60, 62, 68, 59};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 70560;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> AliceStart = {34, 37, 52, 37, 47, 54, 100, 40, 100, 100, 39, 34, 44, 48, 35, 46, 46, 42, 100, 100, 54, 100, 55, 100, 39, 100, 100, 44, 38, 45, 100, 100, 35, 100, 44, 100, 40, 100, 45, 36, 54, 49, 41, 43};
    vector<int> BobStart = {100, 100, 50, 48, 100, 39, 100, 36, 40, 100, 52, 38, 47, 43, 44, 43, 50, 48, 37, 100, 100, 100, 100, 42, 100, 100, 42, 34, 100, 34, 100, 44, 40, 100, 53, 44};
    vector<int> AliceEnd = {100, 50, 48, 52, 37, 100, 39, 52, 47, 44, 48, 44, 46, 42, 43, 50, 100, 48, 100, 39, 100, 100, 44, 42, 38, 100, 42, 100, 45, 34, 54, 49, 34, 40, 100, 53};
    vector<int> BobEnd = {34, 100, 37, 100, 39, 47, 54, 100, 100, 40, 100, 36, 40, 100, 34, 38, 43, 35, 46, 100, 54, 100, 37, 55, 100, 100, 100, 100, 100, 45, 100, 100, 35, 100, 44, 40, 100, 36, 100, 41, 100, 44, 43, 44};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 852742579;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> AliceStart = {60, 61, 6, 6, 59, 6, 56, 6, 6, 58, 61, 6, 6, 6, 57, 6, 6, 61, 61, 6};
    vector<int> BobStart = {59, 6, 6, 6, 6, 6, 6, 61, 59, 58, 6, 6, 56, 57, 61, 59, 60, 58, 6, 56, 57, 60, 6, 6, 61, 60, 6, 6, 57, 59, 6};
    vector<int> AliceEnd = {59, 6, 6, 6, 6, 6, 6, 59, 6, 6, 56, 6, 56, 57, 61, 6, 6, 6, 58, 56, 57, 60, 6, 6, 61, 60, 6, 6, 6, 61, 61, 6};
    vector<int> BobEnd = {6, 60, 61, 61, 6, 59, 58, 6, 6, 58, 61, 59, 60, 6, 57, 57, 59, 6, 6};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 400356060;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> AliceStart = {58, 58, 45, 45, 46, 46, 58, 58, 48, 58, 58, 58, 47};
    vector<int> BobStart = {44, 45, 58, 45, 58, 58, 58, 58, 58};
    vector<int> AliceEnd = {58, 58, 45, 58, 45, 58, 58, 58, 58, 58};
    vector<int> BobEnd = {44, 45, 45, 46, 46, 58, 58, 58, 48, 58, 47, 58};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 3563836;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> AliceStart = {48, 26, 20, 19, 48, 48, 20, 25, 20, 48, 48, 25, 48, 48, 22, 22, 48, 48, 48, 48};
    vector<int> BobStart = {48, 23, 48, 48, 18, 24, 48, 48};
    vector<int> AliceEnd = {20, 23, 48, 18, 20, 25, 48, 48, 22, 48, 48, 48};
    vector<int> BobEnd = {48, 48, 26, 19, 48, 48, 48, 20, 48, 24, 25, 48, 48, 22, 48, 48};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 704168;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> AliceStart = {29, 29, 29, 65, 59, 29, 29, 59, 29, 67, 29, 58, 29, 29, 57, 58, 58};
    vector<int> BobStart = {67, 29, 29, 29, 58, 29, 29, 29, 66, 62, 59, 29, 29, 29, 29, 67, 29, 29, 29, 64, 58, 29, 60, 29};
    vector<int> AliceEnd = {29, 29, 29, 29, 29, 29, 29, 29, 66, 62, 67, 29, 29, 29, 67, 58, 60, 29, 58};
    vector<int> BobEnd = {67, 29, 29, 58, 65, 59, 29, 59, 29, 29, 59, 29, 58, 29, 29, 29, 29, 29, 57, 64, 58, 29};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 79007343;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> AliceStart = {32, 32, 32, 32, 54, 32, 56, 29, 32, 49, 54, 55, 28, 29, 54, 27, 55, 32, 32, 32, 32};
    vector<int> BobStart = {43, 37, 32, 32, 32, 27, 38, 32, 45, 32, 32, 50, 56, 27, 39, 32, 32, 28, 32, 46, 32, 48, 32, 32, 34, 32, 38, 32, 37, 32, 47, 32, 56, 35, 36, 32, 32, 32, 55, 33, 34, 50, 32, 32, 32, 32, 45, 32, 32, 32};
    vector<int> AliceEnd = {43, 32, 27, 38, 32, 32, 50, 32, 39, 32, 32, 32, 32, 28, 32, 56, 32, 29, 48, 32, 49, 34, 38, 32, 28, 37, 29, 32, 33, 55, 32, 32, 32, 32};
    vector<int> BobEnd = {37, 32, 32, 32, 45, 56, 27, 32, 46, 54, 32, 32, 32, 54, 32, 55, 32, 47, 54, 56, 35, 36, 32, 32, 27, 32, 55, 32, 34, 50, 32, 32, 32, 45, 32, 32, 32};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 651481640;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> AliceStart = {24, 15, 18, 24, 24, 18, 19, 24, 29, 24, 24, 24, 29, 25, 24, 27, 23, 24, 24, 13, 24};
    vector<int> BobStart = {26, 24, 24, 24, 19, 24, 26, 14, 24, 14, 24, 24, 25, 16, 24, 24, 24, 13, 24, 24, 16, 24};
    vector<int> AliceEnd = {24, 26, 24, 26, 18, 24, 24, 24, 18, 14, 24, 24, 25, 24, 24, 13, 24, 25, 24, 27, 23, 24, 24, 16, 13, 24};
    vector<int> BobEnd = {15, 24, 24, 19, 24, 14, 19, 24, 29, 24, 24, 16, 24, 24, 29, 24, 24};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 280964313;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> AliceStart = {16, 70, 70, 70, 70, 70, 10, 70, 70, 70, 16, 70, 9, 70, 70, 21, 70, 12, 70, 70, 70, 70, 70, 70, 70, 70, 17, 70, 70, 18, 19, 70, 70, 15, 70, 70, 16, 21, 20, 70, 70, 15, 70, 70, 70, 70, 13, 70};
    vector<int> BobStart = {20, 70, 11, 70, 9, 70, 11, 4, 16, 70, 70, 70, 6, 9, 22, 21, 12, 70, 20, 70, 70, 16, 70, 70, 19, 70, 5, 70, 70, 70, 70, 17, 19, 70, 70, 7, 12, 70, 5, 70, 70, 18, 13, 18, 70, 15, 11, 12, 15, 70};
    vector<int> AliceEnd = {20, 70, 16, 70, 70, 70, 70, 4, 70, 70, 70, 70, 6, 9, 22, 21, 12, 16, 70, 70, 20, 9, 21, 12, 70, 70, 16, 70, 70, 70, 70, 5, 70, 70, 70, 17, 17, 19, 70, 70, 18, 7, 19, 12, 70, 70, 13, 21, 15, 20};
    vector<int> BobEnd = {11, 70, 70, 70, 9, 11, 10, 16, 70, 70, 70, 70, 70, 70, 70, 70, 19, 70, 70, 70, 70, 70, 70, 70, 70, 70, 15, 70, 70, 5, 70, 16, 18, 18, 70, 11, 70, 70, 15, 70, 70, 70, 12, 15, 70, 13, 70, 70};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 830398983;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> AliceStart = {2, 6, 5, 8, 2, 5, 8, 8, 7, 2, 3, 8, 7, 3, 4, 1, 5, 8, 1, 7, 6, 8, 8, 5, 10, 6, 5, 7, 2, 4, 3, 7, 1, 9, 1, 2, 5, 2, 6, 9, 7, 2, 7, 1, 4, 8};
    vector<int> BobStart = {2, 5, 2, 2, 5, 10, 6, 1, 5, 3, 10, 1, 6, 5, 2, 5, 9, 3, 4, 7, 1, 7, 4, 5, 9, 1, 1, 3, 8, 10, 3, 6, 9, 9, 9, 3, 3, 8, 6, 4, 5, 8, 4, 5, 1, 6};
    vector<int> AliceEnd = {2, 5, 2, 2, 5, 10, 6, 1, 5, 3, 10, 1, 6, 5, 2, 5, 9, 3, 4, 7, 1, 7, 4, 5, 9, 1, 1, 3, 8, 10, 3, 6, 9, 9, 9, 3, 3, 8, 6, 4, 5, 8, 4, 5, 1, 6};
    vector<int> BobEnd = {2, 6, 5, 8, 2, 5, 8, 8, 7, 2, 3, 8, 7, 3, 4, 1, 5, 8, 1, 7, 6, 8, 8, 5, 10, 6, 5, 7, 2, 4, 3, 7, 1, 9, 1, 2, 5, 2, 6, 9, 7, 2, 7, 1, 4, 8};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 594321323;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> AliceStart = {1, 3, 5, 9, 3, 2, 5, 7, 1, 10, 2, 10, 8, 1, 10, 8, 7};
    vector<int> BobStart = {4, 2, 4, 3, 4, 8, 7, 3, 8, 7, 3, 9, 9, 4, 4, 9, 4};
    vector<int> AliceEnd = {4, 2, 4, 3, 4, 8, 7, 3, 8, 7, 3, 9, 9, 4, 4, 9, 4};
    vector<int> BobEnd = {1, 3, 5, 9, 3, 2, 5, 7, 1, 10, 2, 10, 8, 1, 10, 8, 7};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 495914208;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> AliceStart = {4, 2, 7, 2, 4, 4, 3, 3, 1, 4, 9, 5, 2, 7, 5, 1, 2, 4, 1, 5, 8, 7, 5, 1, 1, 2, 4, 10, 2, 9, 1};
    vector<int> BobStart = {2, 8, 5, 4, 3, 1, 1, 9, 5, 4, 6, 7, 9, 9, 10, 7, 5, 2, 4, 4, 6, 8, 3, 2, 7, 8, 4, 5, 3, 4, 10};
    vector<int> AliceEnd = {4, 2, 7, 2, 4, 4, 3, 3, 1, 4, 9, 5, 2, 7, 5, 1, 2, 4, 1, 5, 8, 7, 5, 1, 1, 2, 4, 10, 2, 9, 1};
    vector<int> BobEnd = {2, 8, 5, 4, 3, 1, 1, 9, 5, 4, 6, 7, 9, 9, 10, 7, 5, 2, 4, 4, 6, 8, 3, 2, 7, 8, 4, 5, 3, 4, 10};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 295648772;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> AliceStart = {10, 6, 8, 10, 6, 7, 6, 9, 2, 7, 10, 9, 6, 6, 7, 7, 9, 8, 10, 7, 4, 1, 6};
    vector<int> BobStart = {3, 10, 3, 4, 5, 1, 10, 8, 4, 6, 5, 3, 7, 8, 5, 7, 6, 10, 2, 3, 10, 3, 7};
    vector<int> AliceEnd = {10, 6, 8, 10, 6, 7, 6, 9, 2, 7, 10, 9, 6, 6, 7, 7, 9, 8, 10, 7, 4, 1, 6};
    vector<int> BobEnd = {3, 10, 3, 4, 5, 1, 10, 8, 4, 6, 5, 3, 7, 8, 5, 7, 6, 10, 2, 3, 10, 3, 7};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 487004663;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> AliceStart = {2, 2, 4, 3, 1, 5, 1, 5, 4, 8, 6, 4, 2, 1, 7, 2, 8, 3, 3, 10, 9, 8, 7, 5, 7, 4, 8, 6, 7, 10, 2, 4, 2, 10, 2, 3, 3, 3, 10, 2, 4, 7, 7, 7, 5};
    vector<int> BobStart = {2, 9, 10, 2, 7, 3, 3, 10, 4, 4, 5, 3, 10, 7, 7, 9, 1, 5, 2, 3, 5, 10, 8, 8, 4, 8, 8, 8, 8, 2, 7, 3, 10, 5, 6, 7, 3, 7, 1, 1, 7, 2, 8, 2, 5};
    vector<int> AliceEnd = {2, 2, 4, 3, 1, 5, 1, 5, 4, 8, 6, 4, 2, 1, 7, 2, 8, 3, 3, 10, 9, 8, 7, 5, 7, 4, 8, 6, 7, 10, 2, 4, 2, 10, 2, 3, 3, 3, 10, 2, 4, 7, 7, 7, 5};
    vector<int> BobEnd = {2, 9, 10, 2, 7, 3, 3, 10, 4, 4, 5, 3, 10, 7, 7, 9, 1, 5, 2, 3, 5, 10, 8, 8, 4, 8, 8, 8, 8, 2, 7, 3, 10, 5, 6, 7, 3, 7, 1, 1, 7, 2, 8, 2, 5};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 458732731;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> AliceStart = {5, 8, 5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 8, 5, 5, 8, 8, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 8, 5, 5, 5, 5, 5};
    vector<int> BobStart = {5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 8, 5, 5, 5, 5, 5, 8, 5, 8, 5, 5, 5, 5, 5, 5};
    vector<int> AliceEnd = {8, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8};
    vector<int> BobEnd = {8, 5, 8, 5, 5, 5, 5, 8, 8, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> AliceStart = {5, 4, 8, 3, 2, 10, 1, 4, 10, 3, 6, 10, 10, 2, 1, 3, 5, 8, 2, 5, 5, 9, 6, 6, 1, 7, 2, 7, 7, 7, 6, 3, 3};
    vector<int> BobStart = {3, 4, 8, 7, 2, 2, 7, 6, 5, 1, 3, 6, 9, 10, 4, 1, 5, 5, 5, 2, 5, 6, 9, 4, 5, 1, 10, 3, 1, 8, 2, 5, 6};
    vector<int> AliceEnd = {1, 4, 3, 1, 9, 1, 7, 1, 5, 2, 2, 6, 9, 6, 1, 10, 10, 3, 8, 1, 6, 9, 3, 7, 9, 5, 8, 1, 5, 4, 6, 7, 8};
    vector<int> BobEnd = {10, 3, 6, 8, 8, 1, 5, 8, 1, 4, 1, 1, 2, 6, 1, 7, 8, 8, 10, 6, 7, 6, 8, 6, 3, 5, 4, 8, 5, 6, 10, 10, 6};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> AliceStart = {2, 8, 2, 10, 9, 7, 5, 3, 5, 2, 1, 3, 6, 7, 8, 5, 2, 6, 4, 3, 1, 2, 2, 2, 2, 4, 7, 4, 6, 1, 9, 2, 8, 5, 2, 2, 6, 2, 6, 7};
    vector<int> BobStart = {10, 5, 4, 2, 1, 1, 4, 4, 2, 9, 9, 8, 10, 4, 7, 8, 3, 8, 7, 10, 10, 9, 9, 7, 5, 6, 1, 7, 10, 7, 6, 4, 10, 10, 8, 2, 10, 3, 4, 9};
    vector<int> AliceEnd = {5, 4, 7, 8, 2, 10, 2, 8, 6, 4, 3, 6, 6, 5, 9, 6, 6, 4, 7, 7, 3, 6, 4, 8, 4, 6, 2, 4, 7, 10, 9, 3, 3, 7, 3, 3, 10, 2, 5, 2};
    vector<int> BobEnd = {9, 9, 3, 5, 4, 10, 8, 3, 8, 10, 2, 10, 7, 4, 7, 6, 2, 6, 1, 7, 6, 2, 5, 3, 7, 3, 4, 9, 9, 10, 1, 1, 5, 10, 1, 10, 4, 4, 2, 10};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> AliceStart = {2, 1, 10, 1, 8, 10, 4, 7, 6, 2, 9, 2, 8, 8, 3, 6, 2, 8, 4, 6, 5, 3, 1, 1, 9, 1, 1, 5, 10, 7, 8, 2, 10, 1, 6, 8, 8, 5};
    vector<int> BobStart = {7, 1, 5, 10, 4, 8, 3, 7, 10, 3, 9, 7, 10, 1, 8, 7, 6, 5, 2, 6, 4, 3, 3, 6, 7, 7, 4, 3, 4, 6, 9, 10, 1, 10, 9, 1, 5, 7};
    vector<int> AliceEnd = {4, 5, 9, 1, 9, 6, 7, 8, 8, 6, 9, 7, 8, 5, 2, 8, 3, 8, 6, 2, 5, 5, 8, 1, 4, 4, 8, 3, 8, 4, 8, 10, 6, 10, 1, 1, 9, 3};
    vector<int> BobEnd = {4, 9, 9, 9, 10, 1, 10, 2, 7, 3, 4, 6, 9, 1, 9, 8, 5, 2, 3, 9, 6, 6, 6, 7, 10, 6, 2, 2, 10, 9, 1, 2, 1, 6, 3, 5, 4, 3};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> AliceStart = {10, 9, 10, 6, 8, 7, 4, 6, 3, 9, 6, 7, 4, 7, 9, 3, 9, 9, 6, 9, 7, 4, 3, 9, 5, 9, 10, 9, 7, 3, 5, 2, 6, 9, 4};
    vector<int> BobStart = {9, 3, 1, 9, 2, 8, 7, 5, 5, 7, 9, 3, 5, 8, 3, 2, 9, 5, 6, 7, 6, 5, 2, 7, 9, 6, 2, 10, 7, 10, 10, 7, 5, 10, 8};
    vector<int> AliceEnd = {9, 6, 7, 2, 6, 10, 2, 4, 8, 7, 1, 3, 4, 4, 1, 2, 5, 8, 4, 1, 6, 5, 9, 8, 3, 2, 8, 1, 9, 1, 3, 5, 1, 5, 5};
    vector<int> BobEnd = {8, 8, 7, 3, 5, 5, 3, 7, 9, 3, 2, 6, 3, 7, 10, 2, 5, 9, 4, 5, 5, 5, 5, 4, 2, 6, 8, 9, 1, 9, 5, 6, 8, 4, 8};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
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
    vector<int> AliceStart = {4, 4, 9, 6, 3, 6, 10, 8, 3, 10, 6, 4, 5, 8, 4, 10, 4, 1, 10, 5, 9, 6, 3, 5, 6, 8, 7, 2, 3, 2, 3, 9, 2, 4, 10, 9, 8, 5, 5, 1, 4, 5, 9, 6, 10, 2};
    vector<int> BobStart = {2, 2, 1, 6, 3, 1, 8, 6, 4, 2, 9, 6, 8, 1, 10, 4, 3, 5, 1, 8, 2, 8, 2, 9, 5, 5, 8, 9, 4, 9, 1, 7, 6, 6, 4, 1, 3, 6, 2, 1, 10, 3, 2, 3, 7, 3};
    vector<int> AliceEnd = {2, 9, 4, 4, 3, 4, 4, 8, 9, 8, 5, 7, 1, 8, 7, 9, 9, 5, 5, 2, 1, 2, 8, 10, 1, 8, 10, 3, 7, 9, 8, 4, 7, 2, 1, 1, 4, 3, 6, 6, 10, 10, 8, 8, 4, 6};
    vector<int> BobEnd = {6, 6, 4, 10, 7, 2, 2, 7, 2, 5, 6, 6, 5, 5, 4, 10, 8, 1, 7, 3, 6, 10, 6, 1, 5, 1, 4, 10, 3, 7, 5, 8, 1, 3, 10, 10, 1, 6, 9, 8, 8, 2, 1, 10, 7, 8};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
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
    vector<int> AliceStart = {4, 1, 1, 1, 1, 5, 2, 1, 2, 1, 4, 2, 1, 1, 2, 4, 5, 5, 2, 2, 3, 4, 1, 4};
    vector<int> BobStart = {4, 3, 4, 1, 3, 4, 1, 2, 5, 5, 4, 4, 4};
    vector<int> AliceEnd = {4, 2, 1, 4, 2, 4, 2, 1, 1, 2, 4, 3, 4, 1, 4, 4, 5};
    vector<int> BobEnd = {3, 4, 4, 5, 5, 4, 3, 1, 5, 5, 1, 1, 1, 2, 2, 2, 1, 4, 1, 1};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> AliceStart = {4, 2, 4, 4, 2, 5, 5, 4, 1, 4, 3, 3, 5, 2, 5, 1, 3, 2, 4, 1, 2, 4, 4};
    vector<int> BobStart = {4, 1, 2, 1, 1, 1, 5, 4, 5, 1, 4, 5, 3, 4};
    vector<int> AliceEnd = {1, 2, 4, 4, 4, 4, 1, 1, 4, 4, 5, 3, 5, 3, 3, 2, 4, 2};
    vector<int> BobEnd = {2, 1, 4, 5, 2, 5, 4, 5, 1, 4, 1, 1, 1, 3, 2, 5, 4, 4, 5};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
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
    vector<int> AliceStart = {3, 4, 3, 1, 3, 3, 3, 2, 5, 5, 1, 3, 3, 3, 4, 4, 5, 4, 5, 1, 5, 1, 5, 3, 3, 1, 2, 3, 1, 1, 3, 4, 4, 5, 2, 1};
    vector<int> BobStart = {2, 2, 3, 3, 2, 2, 4, 2, 3, 1, 2, 3, 1, 5, 4, 3, 1, 2, 1, 2, 5, 1, 4, 5, 1, 2, 4, 1, 4, 4, 3, 3, 4, 3, 4, 5, 3, 2};
    vector<int> AliceEnd = {1, 5, 3, 2, 5, 4, 4, 3, 5, 5, 4, 4, 4, 3, 3, 3, 4, 2, 2, 1, 3, 3, 5, 4, 2, 3, 3, 5, 1, 4, 2, 1, 1, 1, 3, 1, 1, 3, 5, 5, 2, 4, 1, 1};
    vector<int> BobEnd = {3, 1, 2, 3, 5, 3, 3, 5, 2, 4, 3, 5, 4, 2, 1, 4, 3, 2, 3, 1, 4, 1, 3, 4, 2, 1, 2, 3, 3, 2};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> AliceStart = {5, 2, 4, 1, 4, 5, 2, 4, 2, 5, 3, 3, 5, 4, 2, 5, 2, 3, 4, 4, 2, 4, 4, 1, 4, 4, 5, 4, 3, 4, 1, 1, 1, 1, 3, 1};
    vector<int> BobStart = {2, 5, 4, 1, 1, 1, 4, 3, 3, 3, 2, 4, 1, 4, 3, 4, 2, 3, 1, 5, 4, 2, 5, 4, 5, 2, 4, 4, 4, 5, 4, 3, 4, 4, 5};
    vector<int> AliceEnd = {2, 4, 5, 3, 4, 5, 5, 4, 3, 2, 1, 3, 1, 2, 4, 4, 2, 4, 4, 4, 2, 4, 4, 1, 4, 3, 4, 2, 1, 2, 1, 1, 5, 1};
    vector<int> BobEnd = {5, 4, 4, 1, 1, 1, 1, 4, 3, 4, 5, 4, 1, 4, 4, 3, 5, 3, 5, 5, 4, 3, 4, 5, 2, 3, 2, 5, 4, 2, 4, 4, 4, 5, 3, 3, 2};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> AliceStart = {3, 2, 1, 5, 4, 3, 5, 3, 4, 1, 5, 5, 2, 1, 5, 5, 1};
    vector<int> BobStart = {1, 3, 2, 2, 4, 3, 2, 4, 5, 1, 5, 4, 5, 5, 2};
    vector<int> AliceEnd = {2, 1, 5, 4, 5, 2, 3, 5, 1, 5, 3, 5, 4, 2, 5, 5, 2, 1, 4, 5};
    vector<int> BobEnd = {4, 2, 4, 3, 1, 1, 3, 5, 1, 3, 2, 5};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
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
    vector<int> AliceStart = {1, 2};
    vector<int> BobStart = {3, 4};
    vector<int> AliceEnd = {4, 1};
    vector<int> BobEnd = {2, 3};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> AliceStart = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    vector<int> BobStart = {2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1};
    vector<int> AliceEnd = {2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1};
    vector<int> BobEnd = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 429519049;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> AliceStart = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> BobStart = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> AliceEnd = {1};
    vector<int> BobEnd = {1};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> AliceStart = {1};
    vector<int> BobStart = {1};
    vector<int> AliceEnd = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> BobEnd = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> AliceStart = {1};
    vector<int> BobStart = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> AliceEnd = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> BobEnd = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
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
    vector<int> AliceStart = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> BobStart = {1};
    vector<int> AliceEnd = {1};
    vector<int> BobEnd = {1};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> AliceStart = {3, 3, 2, 4, 1, 3, 1, 2, 1, 1, 5, 5, 1, 2, 3, 1, 2, 1, 2, 1, 1, 1, 2};
    vector<int> BobStart = {4, 1, 4, 3, 4, 4, 4, 3, 2, 1, 6, 2, 2, 3, 2, 2, 1, 3, 2, 3};
    vector<int> AliceEnd = {4, 1, 4, 3, 4, 4, 4, 1, 3, 1, 2, 2, 2, 3, 2, 1, 2, 1, 2, 2, 2};
    vector<int> BobEnd = {3, 3, 2, 3, 4, 2, 1, 2, 1, 1, 5, 6, 5, 1, 3, 1, 2, 3, 1, 1, 1, 3};
    AliceBobShuffle* pObj = new AliceBobShuffle();
    clock_t start = clock();
    int result = pObj->countWays(AliceStart, BobStart, AliceEnd, BobEnd);
    clock_t end = clock();
    delete pObj;
    int expected = 314159265;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23074397&rd=14736&pm=11865
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
 
class AliceBobShuffle {
public:
  int countWays(vector <int>, vector <int>, vector <int>, vector <int>);
};
long long dp[55][55][55],x,mod=1000000007;
int AliceBobShuffle::countWays(vector <int> v1, vector <int> v2, vector <int> v3, vector <int> v4) {
  dp[0][0][0]=1;
  int i,j,a,b;
  int s1=v1.size(),s2=v2.size(),s3=v3.size(),s4=v4.size();
  if(s1+s2!=s3+s4) return 0;
  for(i=0; i<=s1;++i)
  {
    for(j=0;j<=s2;++j)
    {
      for(a=0;a<=s3;++a)
      {
        b=i+j-a;
          long long &x=dp[i][j][a];
          x%=mod;
          if(i<s1)
          {
            if(a<s3&& v1[i]==v3[a]) dp[i+1][j][a+1] +=x;
            if(b<s4&& v1[i]==v4[b]) dp[i+1][j][a] +=x;
          }
          if(j<s2)
          {
            if(a<s3 && v2[j]==v3[a]) dp[i][j+1][a+1] +=x;
            if(b<s4 && v2[j]==v4[b]) dp[i][j+1][a] +=x;
          }
      }
    }
  }
  return int(dp[s1][s2][s3]%mod);
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/