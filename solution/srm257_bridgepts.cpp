/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3494
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

class BridgePts {
public:
    int pointValue(vector<int> hand);
};

int BridgePts::pointValue(vector<int> hand) {
    int ret;
    return ret;
}


int test0() {
    vector<int> hand = {25, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 26};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> hand = {2, 3, 4, 15, 18, 28, 29, 30, 41, 42, 43, 16, 17};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
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
    vector<int> hand = {14, 15, 16, 17, 18, 19, 20, 8, 9, 10, 11, 12, 13};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> hand = {1, 14, 27, 52, 51, 50, 49, 48, 47, 46, 45, 44, 41};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> hand = {2, 15, 28, 52, 51, 50, 49, 48, 47, 46, 45, 44, 41};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> hand = {9, 10, 8, 27, 47, 33, 23, 51, 38, 11, 31, 14, 37};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> hand = {41, 24, 37, 35, 21, 15, 20, 19, 23, 29, 30, 46, 28};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> hand = {7, 26, 34, 37, 49, 9, 18, 21, 32, 43, 28, 14, 39};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> hand = {37, 34, 22, 47, 2, 35, 32, 24, 46, 31, 28, 9, 18};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> hand = {37, 34, 22, 47, 2, 35, 32, 24, 46, 31, 28, 9, 18};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> hand = {44, 34, 52, 48, 24, 41, 19, 14, 47, 38, 45, 16, 25};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> hand = {35, 42, 41, 9, 39, 33, 4, 16, 8, 14, 31, 12, 26};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> hand = {24, 17, 28, 44, 39, 23, 25, 52, 20, 18, 13, 49, 45};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> hand = {27, 32, 19, 6, 14, 16, 50, 28, 15, 52, 21, 44, 40};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> hand = {36, 5, 2, 10, 33, 38, 6, 42, 27, 3, 51, 49, 13};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> hand = {42, 29, 49, 43, 19, 38, 18, 48, 36, 44, 5, 11, 22};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> hand = {21, 34, 41, 17, 37, 35, 12, 28, 8, 47, 32, 22, 33};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> hand = {39, 31, 27, 22, 19, 2, 25, 14, 35, 38, 21, 41, 30};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> hand = {5, 31, 40, 47, 10, 45, 50, 23, 9, 32, 2, 28, 42};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> hand = {4, 6, 9, 11, 12, 8, 2, 7, 10, 14, 5, 15, 16};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> hand = {5, 13, 12, 4, 8, 3, 14, 11, 9, 10, 7, 6, 28};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> hand = {5, 3, 11, 2, 4, 7, 14, 13, 15, 10, 9, 6, 44};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> hand = {8, 9, 5, 4, 12, 14, 11, 2, 13, 15, 6, 3, 10};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> hand = {15, 3, 13, 8, 6, 12, 4, 14, 9, 10, 5, 7, 11};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> hand = {29, 12, 2, 13, 11, 7, 3, 8, 4, 15, 9, 5, 6};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> hand = {47, 7, 11, 12, 9, 14, 6, 3, 10, 15, 8, 4, 5};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> hand = {1, 14, 27, 40, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> hand = {1, 40, 4, 15, 18, 28, 29, 30, 41, 42, 43, 16, 17};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> hand = {12, 13, 15, 16, 17, 18, 19, 20, 21, 22, 23, 28, 29};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> hand = {1, 14, 27, 28, 38, 2, 3, 4, 5, 6, 7, 8, 9};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> hand = {1, 2, 3, 4, 5, 6, 7, 8, 9, 14, 15, 16, 13};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> hand = {1, 14, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> hand = {1, 14, 27, 40, 2, 3, 4, 5, 6, 7, 8, 16, 17};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> hand = {12, 25, 38, 51, 3, 4, 5, 6, 7, 8, 9, 27, 28};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> hand = {13, 12, 11, 10, 26, 25, 24, 23, 39, 38, 37, 36, 52};
    BridgePts* pObj = new BridgePts();
    clock_t start = clock();
    int result = pObj->pointValue(hand);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9953218&rd=8005&pm=3494
********************************************************************************
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
 
using namespace std;
 
/*
Class:
BridgePts
Method:
pointValue
Parameters:
vector <int>
Returns:
int
Method signature:
int pointValue(vector <int> hand)
(be sure your method is public)
*/
 
class BridgePts
{
public:
int pointValue(vector <int> hand);
};
 
 
int BridgePts::pointValue(vector <int> hand)
{
    int points=0;
int a=0,b=0,c=0,d=0;
for(int k=0;k<13;k++)
{
if(hand[k]%13==1)
points+=4;
if(hand[k]%13==11)
points+=1;
if(hand[k]%13==12)
points+=2;
if(hand[k]%13==0)
points+=3;
 
 
if(hand[k]>0 && hand[k]<14)
a++;
if(hand[k]>13 && hand[k]<27)
b++;
if(hand[k]>26 && hand[k]<40)
c++;
if(hand[k]>39 && hand[k]<53)
d++;
}
 
 
 
if(a==2)
points++;
if(b==2)
points++;
if(c==2)
points++;
if(d==2)
points++;
 
if(a==1)
points+=2;
if(b==1)
points+=2;
if(c==1)
points+=2;
if(d==1)
points+=2;
 
if(a==0)
points+=3;
if(b==0)
points+=3;
if(c==0)
points+=3;
if(d==0)
points+=3;
 
 
return points;
}

********************************************************************************
*******************************************************************************/