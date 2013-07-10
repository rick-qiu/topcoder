/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7726
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

class ChessMatchup {
public:
    int maximumScore(vector<int> us, vector<int> them);
};

int ChessMatchup::maximumScore(vector<int> us, vector<int> them) {
    int ret;
    return ret;
}


int test0() {
    vector<int> us = {5, 8};
    vector<int> them = {7, 3};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
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
    vector<int> us = {7, 3};
    vector<int> them = {5, 8};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
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
    vector<int> us = {10, 5, 1};
    vector<int> them = {10, 5, 1};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> us = {1, 10, 7, 4};
    vector<int> them = {15, 3, 8, 7};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> us = {1};
    vector<int> them = {1};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> us = {1};
    vector<int> them = {2};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
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
    vector<int> us = {2};
    vector<int> them = {1};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> us = {4, 7};
    vector<int> them = {4, 6};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> us = {4, 6};
    vector<int> them = {4, 7};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
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
    vector<int> us = {5, 9};
    vector<int> them = {4, 9};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> us = {4, 9};
    vector<int> them = {5, 9};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
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
    vector<int> us = {6, 6};
    vector<int> them = {5, 6};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
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
    vector<int> us = {5, 6};
    vector<int> them = {6, 6};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
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
    vector<int> us = {6, 6};
    vector<int> them = {5, 7};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> us = {5, 7};
    vector<int> them = {6, 6};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> us = {6, 6};
    vector<int> them = {7, 8};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
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
    vector<int> us = {7, 8};
    vector<int> them = {6, 6};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
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
    vector<int> us = {6, 6};
    vector<int> them = {1, 2};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> us = {1, 2};
    vector<int> them = {6, 6};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
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
    vector<int> us = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> them = {5, 5, 5, 5, 5, 5, 5, 5, 5};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> us = {5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> them = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> us = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> them = {3, 3, 4, 4, 5, 5, 6, 6};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> us = {3, 3, 4, 4, 5, 5, 6, 6};
    vector<int> them = {1, 2, 3, 4, 5, 6, 7, 8};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> us = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    vector<int> them = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> us = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> them = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> us = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> them = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> us = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> them = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> us = {31, 54, 78, 89, 55, 18, 87, 49, 55, 19, 2, 32, 71, 76, 89, 5, 8, 68, 49, 5, 25, 24, 74, 38, 29, 13, 83, 83, 83, 23, 16, 47, 12, 2, 43, 77, 67, 49, 60, 50, 48, 26, 81, 23, 30, 97, 29, 40, 11, 96};
    vector<int> them = {66, 43, 63, 11, 18, 13, 7, 80, 2, 41, 63, 93, 85, 92, 19, 25, 25, 6, 15, 21, 44, 36, 57, 58, 91, 81, 28, 16, 9, 49, 58, 57, 7, 47, 42, 9, 92, 26, 39, 48, 82, 61, 30, 64, 22, 48, 71, 52, 69, 87};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> us = {1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 1, 2, 1, 2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 1};
    vector<int> them = {2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> us = {83, 91, 100, 5, 31, 58, 6, 54, 89, 91, 11, 22, 62, 41, 70, 11, 56, 64, 46, 40, 83, 70, 92, 85, 87, 85, 10, 86, 54, 4, 15, 19, 47, 15, 20, 75, 64, 98, 41, 34, 89, 26, 1, 59, 1, 32, 85, 48, 41, 94};
    vector<int> them = {162, 192, 156, 155, 171, 189, 152, 135, 191, 129, 104, 111, 144, 166, 149, 185, 192, 112, 195, 132, 111, 108, 157, 101, 128, 181, 119, 174, 161, 146, 141, 119, 125, 101, 145, 108, 109, 111, 175, 121, 191, 190, 137, 184, 170, 123, 135, 129, 122, 149};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> us = {146, 121, 187, 113, 138, 117, 175, 115, 197, 163, 189, 102, 126, 189, 134, 147, 103, 138, 115, 139, 179, 129, 194, 108, 195, 150, 156, 164, 141, 124, 103, 151, 173, 142, 128, 153, 165, 123, 180, 139, 102, 181, 129, 139, 197, 194, 169, 128, 145, 171};
    vector<int> them = {51, 83, 41, 27, 52, 51, 60, 38, 83, 87, 39, 55, 46, 66, 87, 60, 23, 7, 69, 91, 3, 8, 41, 7, 55, 19, 39, 16, 54, 20, 50, 42, 25, 25, 40, 18, 38, 70, 46, 53, 54, 69, 72, 54, 18, 77, 25, 97, 32, 27};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> us = {1000, 10, 993, 9, 8, 7, 993, 1, 1, 1, 2, 989, 12, 23, 54, 2, 46, 464, 346, 8, 6, 787, 343, 667, 97, 56, 867, 5, 98, 1, 345, 3, 4, 56, 325, 756, 672, 834, 741, 23, 6, 4, 737, 644, 34, 32, 75, 57, 222, 44};
    vector<int> them = {1000, 10, 994, 8, 8, 993, 8, 1, 2, 1, 1, 988, 23, 456, 74, 47, 457, 856, 325, 8, 47, 97, 32, 64, 86, 9, 7, 87, 7, 879, 9, 34, 23, 43, 54, 675, 345, 335, 57, 57, 346, 46, 325, 35, 665, 12, 1, 43, 765, 7};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> us = {1, 1, 1, 1, 1, 1, 10, 10, 10};
    vector<int> them = {5, 5, 5, 5, 30, 30, 30, 30, 30};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> us = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 2, 3, 23, 24, 24, 25};
    vector<int> them = {3, 10, 25, 8, 22, 2, 6, 5, 10, 8, 17, 11, 11, 25, 24, 6, 18, 9, 7, 4, 25, 1, 15, 10, 11, 20, 10, 12, 6, 12, 21, 10, 23, 20, 17, 20, 23, 23, 24, 8, 7, 17, 20, 19, 17, 21, 24, 11, 4, 5};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> us = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> them = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> us = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> them = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> us = {42, 468, 335, 501, 170, 725, 479, 359, 963, 465, 706, 146, 282, 828, 962, 492, 996, 943, 828, 437, 392, 605, 903, 154, 293, 383, 422, 717, 719, 896, 448, 727, 772, 539, 870, 913, 668, 300, 36, 895, 704, 812, 323, 334, 674, 665, 142, 712, 254, 869};
    vector<int> them = {548, 645, 663, 758, 38, 860, 724, 742, 530, 779, 317, 36, 191, 843, 289, 107, 41, 943, 265, 649, 447, 806, 891, 730, 371, 351, 7, 102, 394, 549, 630, 624, 85, 955, 757, 841, 967, 377, 932, 309, 945, 440, 627, 324, 538, 539, 119, 83, 930, 542};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> us = {10, 8, 10};
    vector<int> them = {9, 7, 10};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> us = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7};
    vector<int> them = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> us = {655, 623, 956, 539, 359, 666, 637, 69, 496, 979, 620, 659, 158, 120, 142, 706, 860, 231, 900, 520, 259, 790, 324, 625, 944, 527, 927, 796, 843, 523, 681, 250, 734, 954, 715, 817, 628, 463, 898, 333, 315, 399, 395, 845, 423, 166, 943, 93, 491, 484};
    vector<int> them = {965, 58, 604, 794, 653, 833, 101, 437, 327, 619, 78, 825, 26, 78, 232, 436, 222, 666, 342, 652, 808, 591, 336, 65, 677, 578, 855, 685, 396, 714, 646, 864, 148, 962, 305, 761, 812, 589, 293, 387, 752, 727, 366, 39, 805, 486, 916, 352, 616, 61};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> us = {860, 860, 860, 463, 281, 586, 636, 540, 103, 573, 893, 890, 639, 45, 320, 23, 667, 305, 556, 775, 716, 630, 529, 1000, 173, 741, 174, 276, 6, 51, 724, 763, 291, 663, 401, 334, 250, 511, 710, 373, 696, 467, 449, 265, 317, 432, 92, 955, 707, 14};
    vector<int> them = {860, 860, 860, 643, 251, 874, 705, 190, 310, 9, 539, 285, 408, 615, 861, 951, 413, 319, 368, 714, 264, 688, 670, 271, 317, 43, 639, 353, 792, 872, 240, 770, 348, 2, 687, 325, 253, 750, 464, 509, 543, 704, 963, 989, 4, 998, 148, 198, 698, 899};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> us = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> them = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> us = {5, 1, 4, 3, 2, 10, 6, 9, 7, 8};
    vector<int> them = {10, 6, 2, 8, 7, 1, 4, 5, 3, 9};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> us = {49, 28, 70, 84, 88, 24, 6, 7, 52, 73, 87, 71, 39, 76, 6, 74, 43, 5, 71, 2, 36, 44, 45, 12, 79, 26, 83, 27, 20, 92, 31, 74, 73, 35, 96, 6, 73, 14, 41, 97, 74, 47, 3, 92, 35, 62, 27, 53, 43, 69};
    vector<int> them = {17, 89, 34, 62, 86, 98, 8, 92, 51, 86, 87, 58, 73, 58, 74, 11, 8, 75, 26, 74, 34, 97, 88, 42, 84, 35, 98, 22, 72, 20, 9, 53, 77, 76, 90, 79, 57, 81, 76, 22, 58, 99, 91, 83, 22, 36, 28, 34, 92, 29};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> us = {1, 2, 3};
    vector<int> them = {2, 1, 3};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> us = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    vector<int> them = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> us = {2, 3, 4, 7};
    vector<int> them = {2, 3, 4, 6};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> us = {5, 4, 3, 2, 1};
    vector<int> them = {6, 5, 4, 3, 2};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> us = {38, 89, 20, 64, 24};
    vector<int> them = {93, 50, 74, 47, 89};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> us = {2, 2, 2};
    vector<int> them = {1, 1, 1};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> us = {1, 10, 9};
    vector<int> them = {1, 8, 20};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> us = {11, 2, 4, 10, 14, 4, 3, 3, 7, 14, 5, 5, 1, 12, 1, 11, 10, 2, 12, 6, 6, 9, 2, 3, 7, 7, 6, 11, 8, 5, 2, 6, 11, 3, 9, 7, 2, 4, 10, 9, 8, 6, 2, 3, 3, 14, 6, 1, 8, 13};
    vector<int> them = {2, 14, 7, 12, 12, 4, 8, 6, 4, 13, 1, 5, 5, 12, 3, 1, 10, 2, 4, 13, 11, 1, 5, 9, 10, 5, 6, 6, 3, 8, 9, 8, 9, 4, 6, 5, 1, 11, 11, 13, 9, 9, 11, 13, 2, 13, 8, 12, 9, 11};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> us = {1, 1, 2, 2};
    vector<int> them = {1, 1, 3, 3};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> us = {1, 2, 3, 4, 5};
    vector<int> them = {6, 7, 8, 9, 10};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
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
    vector<int> us = {1, 1, 1, 1};
    vector<int> them = {1, 1, 1, 1};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> us = {16, 15, 19, 14, 18, 22, 13, 18, 13, 20, 18, 16, 15, 18, 20, 21, 22, 21, 17, 22, 13, 16, 19, 18, 20, 16, 16, 15, 20, 22, 19, 13, 13, 19, 13, 13, 15, 13, 21, 19, 20, 21, 15, 21, 21, 19, 14, 13, 13, 21};
    vector<int> them = {22, 20, 16, 13, 15, 21, 19, 16, 19, 21, 16, 20, 15, 15, 18, 14, 14, 18, 21, 17, 16, 18, 19, 21, 19, 19, 21, 19, 14, 17, 20, 20, 14, 13, 22, 17, 22, 19, 17, 17, 19, 14, 15, 21, 20, 16, 21, 18, 17, 21};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> us = {5, 4, 2, 1};
    vector<int> them = {5, 3, 2, 1};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> us = {19, 20, 21};
    vector<int> them = {19, 20, 21};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> us = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> them = {11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> us = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> them = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> us = {1, 2, 3};
    vector<int> them = {1, 2, 3};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> us = {1, 34, 235, 23, 34, 23, 5, 235, 23, 235, 23, 5, 23, 23, 23, 3, 235, 25, 23, 235, 532, 23, 353, 23, 33, 5, 235, 325, 235, 235};
    vector<int> them = {234, 234, 5, 2, 325, 23, 235, 23, 235, 532, 235, 235, 23, 3, 235, 325, 235, 235, 325, 235, 345, 34, 345, 34, 345, 345, 23, 235, 325, 35};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> us = {1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> them = {1, 1, 1, 1, 1, 1, 1, 1};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> us = {361, 201};
    vector<int> them = {361, 201};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> us = {1, 34, 235, 23, 34, 23, 5, 235, 23, 235, 23, 5, 23, 23, 23, 3, 235, 25, 23, 235, 532, 23, 353, 23, 33, 5, 235, 325, 235, 235};
    vector<int> them = {234, 234, 5, 1, 325, 23, 235, 23, 235, 532, 235, 235, 23, 3, 235, 325, 235, 235, 325, 235, 345, 34, 345, 34, 345, 345, 23, 235, 325, 35};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> us = {1, 1, 1, 1, 1};
    vector<int> them = {1, 1, 1, 1, 1};
    ChessMatchup* pObj = new ChessMatchup();
    clock_t start = clock();
    int result = pObj->maximumScore(us, them);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7340263&rd=10787&pm=7726
********************************************************************************
#include<iostream> 
#include<sstream> 
#include<cstdlib> 
#include<cmath> 
#include<vector> 
#include<string> 
#include<algorithm> 
using namespace std; 
typedef vector<int>VI;typedef vector<VI>VVI; 
typedef vector<string>VS; 
typedef pair<int,int>PII; 
#define FOR(i,n) for((i)=0;(i)<(n);(i)++) 
#define FORN(i,n) for((i)=(n)-1;(i)>=0;(i)--) 
#define BE(a) ((a).begin()),((a).end()) 
#define SI(a) ((a).size()) 
#define PB push_back 
#define MP make_pair 
#define FORIT(i,a) for((i)=(a).begin();(i)!=(a).end();(i)++) 
#define CLR(a,v) memset((a),(v),sizeof(a)) 
 
#define MAXN 110 
int cap[MAXN][MAXN], flow[MAXN][MAXN], cost[MAXN][MAXN]; 
int n, sink, source, total_cost; 
 
inline int cf(int i, int j) { 
    if (flow[j][i]) return flow[j][i]; 
    else return cap[i][j] - flow[i][j]; 
} 
 
inline int costf(int i, int j) { 
    if (flow[j][i]) return -cost[j][i]; 
    else return cost[i][j]; 
} 
 
inline void pushf(int i, int j, int x) { 
    total_cost += costf(i, j) * x; 
    if (flow[j][i]) flow[j][i] -= x; 
    else flow[i][j] += x; 
} 
 
int augment(void) { 
    int dist[MAXN], prev[MAXN]; 
    bool reach[MAXN]; 
    bool changed; 
    int i, j; 
    CLR(reach,0); 
    reach[source] = changed = true; 
    dist[source] = 0; 
    while (changed) { 
        changed = false; 
        FOR (i,n) if (reach[i]) FOR (j,n) if (cf(i, j)) 
            if (!reach[j] || dist[i] + costf(i, j) < dist[j]) { 
                reach[j] = changed = true; 
                dist[j] = dist[i] + costf(i, j); 
                prev[j] = i; 
            } 
    } 
    if (!reach[sink]) return 0; 
    for (i = sink; i != source; i = prev[i]) pushf(prev[i], i, 1); 
    return 1; 
} 
 
int mcmf(void) { 
    int ret, x; 
    CLR(flow,0); 
    ret = total_cost = 0; 
    while (x = augment()) ret += x; 
    return ret; 
} 
 
struct ChessMatchup { 
    int maximumScore(VI a, VI b) { 
        int i, j; 
        n = SI(a) + SI(b) + 2; 
        source = n - 2; 
        sink = n - 1; 
        CLR(cap,0); 
        CLR(cost,0); 
        FOR (i,SI(a)) cap[source][i] = 1; 
        FOR (i,SI(b)) cap[SI(a) + i][sink] = 1; 
        FOR (i,SI(a)) FOR (j,SI(b)) { 
            cap[i][SI(a) + j] = 1; 
            cost[i][SI(a) + j] = -((a[i] >= b[j]) + (a[i] > b[j])); 
        } 
        cout << mcmf() << endl; 
        return -total_cost; 
    } 
 
 
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]                    
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/