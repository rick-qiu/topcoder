/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10947
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

class TwoSidedCards {
public:
    int theCount(vector<int> taro, vector<int> hanako);
};

int TwoSidedCards::theCount(vector<int> taro, vector<int> hanako) {
    int ret;
    return ret;
}


int test0() {
    vector<int> taro = {1, 2, 3};
    vector<int> hanako = {1, 3, 2};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> taro = {1, 2, 3};
    vector<int> hanako = {1, 2, 3};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> taro = {1, 2};
    vector<int> hanako = {2, 1};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
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
    vector<int> taro = {5, 8, 1, 2, 3, 4, 6, 7};
    vector<int> hanako = {1, 2, 3, 4, 5, 6, 7, 8};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 2177280;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> taro = {41, 22, 17, 36, 26, 15, 10, 23, 33, 48, 49, 9, 34, 6, 21, 2, 46, 16, 25, 3, 24, 13, 40, 37, 35, 50, 44, 42, 31, 12, 29, 7, 43, 18, 30, 19, 45, 32, 39, 14, 8, 27, 1, 5, 38, 11, 4, 20, 47, 28};
    vector<int> hanako = {19, 6, 23, 35, 17, 7, 50, 2, 33, 36, 12, 31, 46, 21, 30, 13, 47, 22, 44, 4, 25, 24, 3, 15, 20, 48, 10, 28, 26, 18, 5, 45, 49, 16, 40, 42, 43, 14, 1, 37, 29, 8, 41, 38, 9, 11, 34, 32, 39, 27};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 529165844;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> taro = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> hanako = {2, 3, 4, 5, 6, 7, 8, 9, 1, 11, 12, 13, 10};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 561824079;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> taro = {1};
    vector<int> hanako = {1};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> taro = {1, 2};
    vector<int> hanako = {2, 1};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> taro = {3, 2, 1};
    vector<int> hanako = {2, 1, 3};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> taro = {2, 1, 4, 3};
    vector<int> hanako = {3, 2, 1, 4};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> taro = {3, 5, 1, 4, 2};
    vector<int> hanako = {5, 1, 4, 2, 3};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 1620;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> taro = {5, 1, 4, 3, 6, 2};
    vector<int> hanako = {6, 4, 2, 5, 1, 3};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 17100;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> taro = {2, 1, 5, 3, 7, 4, 6};
    vector<int> hanako = {4, 2, 1, 5, 3, 6, 7};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 207900;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> taro = {8, 3, 2, 4, 1, 6, 7, 5};
    vector<int> hanako = {1, 6, 8, 5, 3, 7, 4, 2};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 2867760;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> taro = {4, 7, 6, 8, 9, 2, 3, 1, 5};
    vector<int> hanako = {5, 2, 1, 7, 6, 3, 4, 8, 9};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 44316720;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> taro = {7, 10, 5, 1, 3, 9, 4, 6, 2, 8};
    vector<int> hanako = {4, 5, 3, 2, 9, 1, 8, 10, 7, 6};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 759099600;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> taro = {6, 1, 10, 3, 7, 4, 2, 9, 8, 5, 11};
    vector<int> hanako = {9, 10, 3, 7, 5, 8, 6, 1, 2, 11, 4};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 282729902;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> taro = {4, 7, 11, 12, 8, 5, 1, 10, 9, 3, 2, 6};
    vector<int> hanako = {11, 10, 7, 5, 9, 4, 2, 8, 6, 12, 3, 1};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 924445156;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> taro = {12, 8, 4, 13, 6, 10, 5, 11, 9, 1, 2, 3, 7};
    vector<int> hanako = {9, 4, 7, 10, 8, 1, 6, 3, 2, 5, 13, 12, 11};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 96152065;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> taro = {8, 14, 2, 13, 10, 5, 12, 6, 11, 1, 3, 7, 4, 9};
    vector<int> hanako = {9, 13, 10, 4, 1, 2, 3, 14, 6, 11, 8, 5, 12, 7};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 156894490;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> taro = {2, 10, 9, 14, 4, 13, 6, 3, 12, 8, 1, 7, 15, 11, 5};
    vector<int> hanako = {4, 2, 5, 9, 8, 12, 15, 6, 14, 13, 11, 3, 1, 10, 7};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 448047339;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> taro = {7, 13, 5, 1, 10, 16, 3, 2, 11, 12, 14, 9, 15, 6, 4, 8};
    vector<int> hanako = {13, 15, 16, 11, 2, 12, 5, 4, 6, 7, 3, 14, 8, 9, 1, 10};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 905046856;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> taro = {14, 8, 4, 5, 12, 10, 7, 6, 13, 17, 2, 1, 3, 9, 16, 11, 15};
    vector<int> hanako = {2, 10, 9, 12, 8, 14, 11, 5, 1, 3, 4, 6, 7, 17, 15, 16, 13};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 549958309;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> taro = {10, 15, 9, 8, 14, 6, 7, 12, 18, 4, 13, 1, 2, 17, 3, 16, 5, 11};
    vector<int> hanako = {4, 18, 10, 6, 8, 3, 16, 15, 17, 5, 9, 13, 7, 11, 1, 14, 12, 2};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 156786680;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> taro = {11, 10, 9, 3, 5, 19, 16, 14, 6, 12, 13, 1, 17, 7, 15, 2, 8, 18, 4};
    vector<int> hanako = {9, 6, 16, 15, 18, 8, 19, 5, 4, 7, 17, 12, 3, 14, 11, 13, 1, 10, 2};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 693681774;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> taro = {2, 16, 18, 4, 3, 15, 19, 12, 5, 9, 17, 13, 6, 1, 20, 11, 10, 14, 7, 8};
    vector<int> hanako = {17, 9, 7, 15, 18, 12, 20, 19, 11, 1, 8, 5, 2, 6, 10, 16, 14, 13, 4, 3};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 530964809;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> taro = {12, 15, 2, 20, 3, 18, 13, 16, 21, 14, 17, 4, 5, 7, 1, 10, 6, 11, 19, 9, 8};
    vector<int> hanako = {10, 14, 7, 17, 6, 4, 2, 18, 3, 13, 19, 11, 8, 20, 5, 21, 1, 15, 12, 16, 9};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 663773957;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> taro = {12, 17, 9, 6, 3, 21, 11, 7, 22, 10, 20, 14, 4, 15, 8, 13, 18, 19, 1, 16, 5, 2};
    vector<int> hanako = {17, 11, 18, 2, 9, 19, 1, 4, 8, 5, 15, 6, 16, 21, 13, 14, 7, 12, 3, 10, 22, 20};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 354504202;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> taro = {11, 19, 12, 5, 16, 9, 15, 2, 17, 22, 23, 1, 7, 4, 3, 14, 20, 18, 8, 13, 21, 6, 10};
    vector<int> hanako = {10, 3, 15, 18, 8, 7, 22, 16, 9, 19, 12, 5, 4, 20, 13, 1, 14, 6, 11, 2, 17, 23, 21};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 802750515;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> taro = {19, 12, 3, 1, 14, 5, 9, 13, 16, 4, 2, 22, 18, 15, 23, 7, 21, 17, 11, 8, 6, 24, 20, 10};
    vector<int> hanako = {20, 4, 5, 15, 22, 17, 23, 24, 6, 7, 21, 2, 10, 9, 8, 18, 13, 12, 3, 14, 1, 19, 11, 16};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 17680031;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> taro = {24, 2, 13, 10, 8, 22, 4, 7, 9, 11, 1, 14, 3, 20, 6, 25, 23, 19, 5, 17, 15, 12, 21, 16, 18};
    vector<int> hanako = {5, 11, 7, 17, 14, 6, 21, 1, 18, 9, 8, 25, 12, 10, 4, 2, 22, 3, 20, 19, 13, 16, 15, 23, 24};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 279214924;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> taro = {26, 9, 10, 6, 19, 15, 18, 12, 22, 24, 20, 16, 5, 4, 13, 1, 2, 8, 25, 14, 17, 21, 3, 11, 7, 23};
    vector<int> hanako = {24, 26, 11, 5, 6, 16, 7, 14, 17, 12, 10, 23, 1, 15, 2, 9, 20, 25, 22, 21, 18, 13, 4, 3, 19, 8};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 502686919;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> taro = {13, 25, 11, 12, 16, 18, 26, 19, 15, 1, 22, 8, 4, 5, 10, 27, 9, 23, 24, 20, 14, 21, 6, 7, 3, 2, 17};
    vector<int> hanako = {14, 24, 25, 23, 27, 17, 12, 4, 1, 10, 6, 13, 3, 8, 11, 22, 20, 7, 5, 21, 16, 18, 9, 2, 15, 19, 26};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 837722909;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> taro = {21, 23, 9, 15, 12, 5, 26, 11, 19, 16, 7, 8, 10, 1, 6, 3, 13, 4, 20, 14, 2, 17, 28, 22, 18, 24, 25, 27};
    vector<int> hanako = {24, 4, 26, 28, 23, 9, 25, 12, 7, 21, 16, 18, 8, 15, 27, 22, 20, 3, 6, 5, 13, 10, 14, 19, 2, 17, 11, 1};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 414707470;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> taro = {9, 2, 27, 1, 3, 4, 22, 21, 5, 28, 6, 10, 20, 18, 13, 19, 11, 29, 7, 14, 25, 24, 8, 16, 23, 15, 12, 26, 17};
    vector<int> hanako = {12, 28, 18, 14, 21, 24, 2, 23, 20, 5, 11, 19, 9, 16, 26, 4, 29, 8, 22, 25, 17, 15, 27, 10, 13, 7, 1, 6, 3};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 956023783;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> taro = {27, 19, 16, 30, 21, 15, 29, 22, 14, 1, 25, 9, 7, 8, 26, 10, 5, 24, 11, 28, 12, 13, 17, 18, 4, 23, 6, 20, 2, 3};
    vector<int> hanako = {30, 5, 18, 29, 17, 8, 19, 4, 16, 7, 1, 12, 13, 14, 10, 11, 28, 22, 21, 24, 20, 15, 27, 9, 25, 26, 3, 6, 23, 2};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 518359131;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> taro = {25, 11, 18, 5, 8, 29, 16, 3, 4, 13, 26, 21, 31, 12, 15, 6, 14, 24, 10, 28, 20, 17, 30, 19, 22, 27, 23, 1, 2, 9, 7};
    vector<int> hanako = {28, 14, 31, 20, 23, 4, 19, 7, 5, 12, 2, 25, 26, 24, 17, 8, 10, 9, 1, 15, 21, 6, 13, 29, 30, 3, 27, 16, 22, 11, 18};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 782312739;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> taro = {7, 12, 22, 14, 8, 3, 6, 11, 10, 1, 28, 27, 24, 30, 9, 18, 21, 31, 25, 19, 2, 32, 4, 16, 26, 15, 17, 5, 20, 29, 23, 13};
    vector<int> hanako = {21, 26, 18, 2, 20, 1, 17, 25, 13, 29, 23, 22, 28, 3, 30, 8, 10, 4, 27, 9, 11, 7, 6, 19, 16, 31, 14, 12, 32, 15, 5, 24};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 205177999;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> taro = {13, 19, 1, 24, 4, 8, 7, 18, 6, 2, 3, 33, 11, 14, 26, 21, 10, 29, 25, 31, 5, 28, 9, 22, 12, 17, 20, 30, 15, 27, 16, 32, 23};
    vector<int> hanako = {29, 14, 22, 18, 3, 2, 24, 23, 32, 7, 31, 15, 1, 5, 9, 12, 33, 21, 16, 10, 17, 4, 13, 30, 20, 6, 28, 26, 27, 19, 8, 25, 11};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 509202076;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> taro = {13, 33, 19, 28, 5, 30, 2, 7, 14, 11, 4, 31, 18, 25, 32, 16, 8, 12, 3, 26, 1, 23, 10, 20, 27, 24, 6, 15, 21, 22, 29, 34, 9, 17};
    vector<int> hanako = {25, 13, 23, 7, 29, 3, 9, 11, 5, 32, 26, 2, 8, 17, 10, 30, 33, 1, 21, 28, 16, 14, 22, 15, 18, 34, 12, 19, 31, 20, 27, 6, 4, 24};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 492520445;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> taro = {8, 12, 4, 17, 29, 18, 35, 30, 5, 14, 3, 2, 32, 6, 33, 24, 27, 7, 25, 11, 13, 21, 26, 10, 9, 15, 1, 23, 28, 34, 20, 31, 22, 19, 16};
    vector<int> hanako = {22, 26, 24, 9, 10, 16, 29, 12, 27, 5, 7, 23, 18, 19, 30, 20, 35, 33, 15, 8, 31, 14, 4, 6, 3, 13, 34, 17, 25, 32, 28, 21, 2, 1, 11};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 508463035;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> taro = {1, 17, 14, 8, 26, 5, 23, 18, 21, 6, 24, 9, 25, 15, 29, 16, 35, 30, 28, 11, 27, 12, 3, 36, 7, 22, 32, 19, 20, 34, 10, 4, 13, 31, 33, 2};
    vector<int> hanako = {33, 29, 2, 3, 21, 34, 24, 16, 36, 23, 30, 25, 18, 26, 4, 10, 17, 35, 31, 8, 11, 14, 20, 28, 22, 27, 19, 12, 9, 13, 15, 32, 7, 6, 5, 1};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 583008080;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> taro = {25, 21, 18, 33, 30, 16, 8, 4, 9, 22, 31, 1, 34, 2, 20, 14, 27, 29, 32, 23, 7, 12, 19, 37, 3, 36, 5, 13, 35, 11, 24, 17, 10, 26, 15, 28, 6};
    vector<int> hanako = {3, 5, 33, 11, 27, 4, 36, 29, 35, 14, 34, 18, 1, 31, 13, 20, 12, 22, 17, 19, 6, 16, 8, 24, 37, 7, 30, 9, 26, 21, 15, 10, 25, 28, 23, 32, 2};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 183494316;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> taro = {33, 11, 22, 13, 28, 23, 14, 37, 12, 21, 24, 9, 5, 4, 36, 38, 6, 26, 35, 27, 7, 34, 18, 30, 2, 17, 16, 19, 31, 1, 3, 32, 10, 15, 8, 25, 29, 20};
    vector<int> hanako = {34, 26, 9, 36, 33, 8, 19, 23, 16, 11, 21, 14, 6, 12, 24, 37, 18, 35, 3, 10, 25, 30, 38, 7, 17, 4, 15, 27, 13, 22, 1, 31, 20, 29, 28, 2, 32, 5};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 827364731;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> taro = {1, 6, 37, 19, 8, 26, 30, 33, 28, 2, 21, 14, 39, 23, 36, 35, 25, 18, 34, 29, 11, 5, 13, 20, 4, 7, 12, 38, 15, 31, 9, 17, 16, 27, 32, 24, 10, 3, 22};
    vector<int> hanako = {9, 25, 5, 34, 20, 22, 18, 12, 19, 36, 14, 13, 6, 16, 39, 32, 30, 31, 8, 24, 7, 10, 35, 33, 2, 1, 3, 26, 37, 11, 28, 21, 38, 15, 27, 23, 4, 29, 17};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 287654300;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> taro = {35, 37, 10, 6, 20, 11, 18, 22, 12, 32, 9, 25, 8, 4, 38, 39, 3, 30, 13, 7, 40, 26, 29, 2, 24, 31, 15, 36, 28, 1, 16, 19, 27, 17, 23, 21, 34, 33, 5, 14};
    vector<int> hanako = {25, 9, 20, 4, 34, 3, 10, 14, 33, 6, 1, 27, 13, 18, 37, 32, 17, 40, 35, 36, 31, 22, 30, 39, 2, 8, 21, 24, 15, 12, 28, 7, 38, 19, 11, 23, 29, 26, 16, 5};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 567575618;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> taro = {25, 27, 8, 26, 31, 10, 13, 41, 4, 12, 29, 19, 9, 24, 6, 14, 39, 21, 34, 15, 7, 40, 32, 3, 20, 36, 18, 35, 22, 2, 30, 17, 23, 11, 28, 38, 33, 5, 37, 16, 1};
    vector<int> hanako = {13, 8, 41, 1, 14, 20, 10, 19, 33, 5, 2, 21, 6, 27, 15, 7, 32, 40, 16, 30, 28, 25, 9, 12, 29, 37, 23, 26, 18, 38, 11, 22, 35, 31, 4, 34, 3, 36, 17, 39, 24};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 553090951;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> taro = {9, 16, 17, 26, 1, 28, 30, 31, 20, 8, 25, 2, 35, 19, 33, 15, 41, 10, 24, 29, 22, 4, 37, 23, 18, 34, 42, 40, 13, 6, 12, 27, 38, 21, 36, 5, 14, 3, 32, 39, 11, 7};
    vector<int> hanako = {25, 32, 26, 37, 27, 33, 1, 28, 9, 6, 4, 29, 30, 42, 41, 8, 16, 38, 35, 10, 21, 31, 11, 17, 40, 18, 2, 7, 22, 19, 24, 3, 34, 12, 20, 36, 39, 23, 14, 15, 5, 13};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 90463605;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> taro = {38, 37, 6, 19, 30, 26, 43, 33, 12, 13, 4, 3, 35, 29, 1, 39, 23, 8, 2, 11, 34, 28, 31, 25, 10, 9, 21, 17, 7, 27, 16, 24, 5, 22, 40, 41, 20, 32, 36, 15, 42, 14, 18};
    vector<int> hanako = {13, 23, 26, 31, 5, 7, 28, 15, 21, 6, 8, 35, 9, 20, 38, 19, 29, 2, 18, 16, 3, 17, 14, 42, 34, 11, 10, 27, 22, 37, 41, 30, 36, 33, 25, 32, 12, 39, 40, 4, 1, 24, 43};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 816136805;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> taro = {13, 44, 30, 10, 31, 2, 36, 34, 38, 23, 16, 7, 12, 35, 15, 5, 14, 39, 11, 28, 41, 3, 22, 43, 33, 37, 42, 21, 40, 24, 25, 18, 29, 6, 1, 27, 8, 19, 4, 17, 20, 32, 26, 9};
    vector<int> hanako = {38, 29, 9, 26, 34, 7, 8, 16, 18, 28, 40, 43, 2, 13, 10, 3, 32, 42, 6, 21, 23, 4, 37, 20, 36, 35, 11, 33, 1, 39, 14, 17, 27, 31, 30, 19, 12, 15, 41, 5, 24, 44, 22, 25};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 246720157;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> taro = {10, 33, 28, 2, 43, 44, 34, 39, 12, 19, 45, 31, 18, 16, 26, 7, 21, 40, 8, 35, 42, 32, 14, 4, 1, 5, 36, 20, 3, 6, 24, 22, 27, 9, 23, 38, 30, 11, 25, 17, 29, 37, 41, 13, 15};
    vector<int> hanako = {11, 35, 20, 23, 39, 28, 38, 3, 33, 42, 37, 1, 9, 26, 19, 8, 24, 30, 43, 4, 29, 36, 6, 15, 25, 16, 22, 12, 18, 21, 45, 17, 14, 5, 27, 13, 41, 40, 32, 2, 34, 44, 7, 31, 10};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 465702387;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> taro = {14, 31, 37, 13, 40, 33, 15, 39, 5, 43, 24, 4, 9, 26, 28, 19, 18, 46, 11, 42, 6, 36, 12, 17, 21, 20, 34, 27, 7, 30, 23, 8, 10, 2, 32, 35, 3, 41, 1, 16, 44, 29, 22, 45, 38, 25};
    vector<int> hanako = {12, 21, 8, 17, 24, 1, 25, 43, 41, 42, 28, 46, 35, 23, 44, 40, 15, 34, 3, 7, 39, 20, 27, 2, 14, 19, 16, 22, 4, 29, 5, 18, 33, 9, 30, 37, 31, 6, 26, 11, 13, 10, 38, 32, 36, 45};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 359964953;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> taro = {23, 27, 46, 7, 13, 32, 24, 6, 35, 8, 40, 5, 18, 41, 44, 17, 16, 4, 20, 10, 2, 42, 22, 14, 29, 3, 39, 15, 21, 28, 1, 45, 12, 34, 9, 30, 31, 26, 36, 38, 33, 25, 47, 37, 43, 11, 19};
    vector<int> hanako = {32, 21, 22, 46, 11, 42, 6, 36, 20, 9, 24, 4, 41, 25, 10, 39, 23, 40, 43, 47, 16, 26, 30, 37, 12, 19, 13, 27, 5, 14, 31, 29, 44, 33, 2, 1, 45, 34, 28, 3, 17, 15, 35, 8, 18, 38, 7};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 335627158;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> taro = {35, 40, 15, 17, 27, 29, 13, 37, 7, 39, 8, 6, 46, 3, 20, 10, 1, 9, 19, 41, 11, 22, 24, 31, 32, 33, 23, 14, 16, 2, 44, 34, 48, 26, 28, 47, 45, 42, 36, 4, 5, 25, 43, 12, 38, 21, 30, 18};
    vector<int> hanako = {34, 44, 20, 12, 9, 8, 33, 6, 45, 36, 42, 3, 38, 40, 13, 35, 26, 32, 28, 30, 14, 2, 23, 46, 22, 18, 27, 39, 11, 4, 41, 37, 24, 16, 43, 31, 1, 21, 10, 25, 48, 7, 15, 47, 5, 19, 29, 17};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 493277214;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> taro = {10, 11, 36, 14, 17, 49, 12, 27, 48, 6, 38, 25, 24, 35, 40, 47, 37, 28, 3, 44, 45, 13, 2, 16, 26, 34, 7, 20, 5, 41, 42, 39, 15, 19, 32, 30, 29, 23, 46, 8, 33, 4, 31, 9, 21, 22, 1, 18, 43};
    vector<int> hanako = {5, 1, 39, 16, 21, 3, 35, 23, 34, 4, 2, 14, 42, 11, 48, 27, 9, 31, 17, 36, 18, 32, 10, 47, 8, 15, 12, 44, 30, 49, 7, 28, 6, 25, 40, 13, 41, 26, 33, 45, 20, 22, 38, 43, 37, 24, 29, 46, 19};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 6817669;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> taro = {48, 26, 45, 38, 28, 1, 50, 23, 11, 3, 5, 36, 19, 31, 41, 49, 35, 40, 32, 14, 43, 30, 47, 44, 16, 20, 17, 39, 27, 21, 6, 10, 2, 15, 25, 13, 37, 4, 18, 12, 34, 46, 7, 8, 22, 9, 29, 33, 24, 42};
    vector<int> hanako = {46, 14, 36, 28, 9, 43, 8, 10, 13, 42, 49, 30, 38, 34, 40, 31, 47, 39, 35, 50, 20, 23, 44, 45, 26, 17, 5, 11, 12, 41, 4, 21, 18, 19, 2, 7, 22, 37, 32, 3, 25, 15, 24, 33, 48, 1, 27, 29, 16, 6};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 576488002;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> taro = {41, 22, 17, 36, 26, 15, 10, 23, 33, 48, 49, 9, 34, 6, 21, 2, 46, 16, 25, 3, 24, 13, 40, 37, 35, 50, 44, 42, 31, 12, 29, 7, 43, 18, 30, 19, 45, 32, 39, 14, 8, 27, 1, 5, 38, 11, 4, 20, 47, 28};
    vector<int> hanako = {19, 6, 23, 35, 17, 7, 50, 2, 33, 36, 12, 31, 46, 21, 30, 13, 47, 22, 44, 4, 25, 24, 3, 15, 20, 48, 10, 28, 26, 18, 5, 45, 49, 16, 40, 42, 43, 14, 1, 37, 29, 8, 41, 38, 9, 11, 34, 32, 39, 27};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 529165844;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> taro = {10, 36, 27, 45, 8, 23, 7, 3, 1, 42, 32, 19, 35, 48, 33, 24, 2, 34, 43, 6, 37, 11, 14, 49, 44, 26, 13, 39, 25, 47, 22, 12, 15, 4, 29, 17, 46, 30, 50, 21, 9, 41, 20, 31, 28, 38, 18, 5, 16, 40};
    vector<int> hanako = {22, 9, 48, 36, 11, 13, 40, 23, 45, 37, 41, 30, 49, 3, 1, 26, 15, 47, 43, 46, 35, 12, 18, 10, 38, 17, 34, 28, 8, 2, 50, 19, 33, 32, 24, 21, 14, 29, 20, 4, 39, 6, 27, 42, 16, 31, 25, 44, 5, 7};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 637657470;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> taro = {10, 32, 39, 15, 21, 48, 33, 41, 14, 12, 27, 3, 25, 49, 2, 9, 24, 11, 38, 34, 45, 28, 4, 35, 19, 29, 22, 46, 37, 47, 36, 42, 5, 16, 31, 40, 8, 6, 43, 18, 23, 44, 1, 20, 30, 7, 17, 13, 26, 50};
    vector<int> hanako = {45, 35, 4, 37, 15, 20, 42, 30, 44, 5, 21, 29, 12, 25, 8, 27, 33, 18, 46, 36, 49, 17, 39, 13, 6, 50, 48, 28, 43, 9, 2, 16, 19, 32, 10, 41, 26, 24, 23, 1, 7, 3, 31, 40, 38, 22, 14, 34, 47, 11};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 58331681;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> taro = {42, 14, 2, 13, 33, 6, 43, 46, 49, 5, 40, 27, 20, 19, 8, 30, 35, 18, 39, 1, 41, 45, 29, 47, 25, 21, 37, 36, 34, 3, 50, 17, 32, 7, 10, 15, 44, 38, 28, 11, 12, 48, 4, 24, 31, 26, 23, 22, 9, 16};
    vector<int> hanako = {32, 42, 37, 39, 40, 49, 21, 22, 18, 50, 16, 28, 47, 9, 3, 48, 6, 17, 2, 7, 29, 11, 31, 1, 30, 26, 14, 8, 45, 10, 13, 38, 24, 27, 41, 15, 36, 19, 34, 43, 23, 12, 25, 33, 44, 46, 35, 4, 5, 20};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 330045094;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> taro = {36, 1, 14, 7, 46, 2, 16, 31, 39, 24, 47, 43, 30, 23, 12, 22, 4, 28, 27, 17, 13, 10, 11, 44, 15, 29, 35, 25, 48, 8, 20, 18, 34, 45, 9, 6, 26, 33, 41, 49, 50, 42, 5, 32, 37, 19, 38, 3, 21, 40};
    vector<int> hanako = {21, 22, 4, 15, 37, 23, 1, 6, 45, 9, 44, 30, 7, 18, 34, 47, 5, 20, 49, 43, 41, 50, 19, 33, 36, 40, 13, 12, 25, 14, 16, 10, 17, 26, 28, 3, 46, 42, 11, 35, 32, 2, 8, 24, 39, 29, 48, 27, 38, 31};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 991796076;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> taro = {14, 10, 41, 35, 32, 28, 48, 6, 40, 30, 47, 25, 18, 15, 31, 4, 49, 45, 36, 27, 20, 26, 19, 1, 11, 50, 34, 22, 21, 8, 13, 23, 37, 12, 42, 39, 7, 5, 3, 29, 24, 33, 16, 44, 46, 9, 43, 2, 38, 17};
    vector<int> hanako = {5, 35, 32, 6, 41, 44, 2, 40, 43, 13, 27, 36, 19, 48, 28, 22, 9, 45, 21, 37, 20, 4, 17, 26, 38, 50, 34, 39, 7, 8, 31, 46, 23, 10, 33, 1, 12, 3, 42, 14, 49, 30, 11, 18, 29, 16, 15, 25, 47, 24};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 130411709;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> taro = {23, 46, 36, 16, 18, 33, 42, 8, 44, 35, 34, 21, 30, 15, 9, 3, 11, 5, 37, 27, 6, 38, 39, 17, 40, 14, 12, 48, 24, 32, 26, 50, 7, 47, 49, 13, 1, 41, 2, 22, 10, 19, 4, 45, 28, 43, 20, 25, 31, 29};
    vector<int> hanako = {37, 14, 32, 5, 50, 36, 26, 43, 49, 20, 41, 19, 7, 47, 28, 45, 21, 40, 42, 11, 18, 38, 24, 9, 10, 33, 3, 48, 1, 15, 6, 35, 27, 34, 17, 2, 30, 22, 39, 31, 46, 8, 4, 44, 23, 12, 16, 13, 29, 25};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 753504517;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> taro = {19, 38, 43, 30, 7, 9, 2, 18, 5, 22, 17, 13, 34, 47, 10, 11, 6, 39, 26, 25, 45, 49, 44, 23, 37, 16, 4, 33, 42, 36, 20, 32, 41, 50, 12, 27, 14, 24, 3, 40, 1, 8, 28, 29, 31, 35, 15, 46, 21, 48};
    vector<int> hanako = {25, 22, 34, 15, 29, 14, 20, 6, 43, 30, 11, 32, 50, 35, 16, 13, 18, 39, 36, 38, 27, 26, 2, 1, 10, 7, 46, 8, 49, 47, 31, 28, 9, 3, 5, 37, 44, 24, 42, 19, 40, 17, 41, 23, 12, 45, 48, 33, 21, 4};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 817553347;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> taro = {50, 32, 26, 13, 43, 2, 6, 40, 9, 8, 22, 29, 10, 27, 20, 1, 23, 47, 30, 14, 48, 31, 25, 28, 19, 36, 12, 21, 16, 42, 3, 39, 35, 41, 18, 4, 34, 44, 7, 45, 46, 37, 17, 24, 33, 5, 38, 49, 15, 11};
    vector<int> hanako = {47, 8, 46, 27, 33, 31, 2, 34, 16, 44, 20, 22, 10, 28, 43, 7, 15, 11, 32, 26, 12, 35, 50, 36, 49, 45, 19, 5, 1, 48, 37, 38, 40, 17, 41, 13, 9, 24, 29, 6, 39, 3, 42, 23, 18, 21, 14, 30, 25, 4};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 420656285;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> taro = {35, 8, 2, 14, 9, 48, 12, 43, 19, 31, 10, 11, 20, 38, 21, 50, 13, 33, 41, 3, 18, 27, 17, 37, 16, 34, 6, 15, 44, 4, 36, 46, 39, 7, 42, 28, 29, 1, 47, 49, 45, 24, 23, 25, 40, 30, 5, 22, 32, 26};
    vector<int> hanako = {47, 30, 31, 1, 45, 34, 18, 15, 23, 26, 20, 48, 43, 35, 14, 38, 29, 3, 32, 6, 21, 8, 19, 36, 13, 44, 9, 10, 33, 37, 24, 17, 28, 27, 49, 50, 40, 7, 39, 12, 4, 16, 41, 46, 5, 22, 42, 11, 25, 2};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 965797868;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> taro = {45, 2, 14, 24, 12, 21, 10, 25, 46, 48, 7, 4, 31, 47, 27, 18, 49, 50, 39, 30, 20, 9, 41, 44, 38, 5, 8, 33, 19, 16, 17, 6, 23, 40, 35, 36, 26, 42, 3, 32, 22, 34, 29, 15, 37, 43, 1, 13, 28, 11};
    vector<int> hanako = {11, 28, 7, 41, 38, 8, 14, 45, 47, 39, 9, 37, 30, 32, 43, 46, 12, 21, 42, 1, 35, 6, 2, 40, 36, 26, 4, 33, 25, 29, 22, 48, 27, 15, 49, 44, 31, 17, 20, 24, 19, 3, 16, 13, 50, 23, 18, 5, 34, 10};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 333978190;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> taro = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};
    vector<int> hanako = {23, 24, 25, 10, 36, 37, 38, 39, 40, 44, 45, 15, 16, 17, 18, 19, 33, 34, 35, 8, 9, 1, 2, 26, 27, 28, 31, 32, 14, 3, 29, 30, 4, 5, 6, 7, 11, 12, 13, 41, 42, 43, 20, 21, 22};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 397585050;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> taro = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> hanako = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 1, 41, 43, 44, 45, 42, 47, 46, 49, 50, 48};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 689618096;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> taro = {1};
    vector<int> hanako = {1};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> taro = {41, 22, 26, 36, 17, 15, 10, 23, 33, 48, 49, 9, 34, 6, 21, 2, 46, 16, 25, 3, 24, 13, 40, 37, 35, 50, 44, 42, 31, 12, 29, 7, 43, 18, 30, 19, 45, 32, 39, 14, 8, 27, 1, 5, 38, 11, 4, 20, 47, 28};
    vector<int> hanako = {19, 6, 23, 35, 17, 7, 50, 2, 33, 36, 12, 31, 46, 21, 30, 13, 47, 22, 44, 4, 25, 24, 3, 15, 20, 48, 10, 28, 26, 18, 5, 45, 49, 16, 40, 42, 43, 14, 1, 37, 29, 8, 41, 38, 9, 11, 34, 32, 39, 27};
    TwoSidedCards* pObj = new TwoSidedCards();
    clock_t start = clock();
    int result = pObj->theCount(taro, hanako);
    clock_t end = clock();
    delete pObj;
    int expected = 753504517;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22714443&rd=14154&pm=10947
********************************************************************************
//  SRM 472 (B) 
 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <cassert> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <utility> 
#include <numeric> 
#include <algorithm> 
#include <bitset> 
#include <complex> 
 
using namespace std; 
 
typedef unsigned uint; 
typedef long long Int; 
typedef vector<int> vint; 
typedef vector<string> vstr; 
typedef pair<int,int> pint; 
#define mp make_pair 
 
template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; } 
 
const Int MO = 1000000007; 
const Int H = (MO + 1) / 2; 
void pl(Int &t, Int f) { (t += f) %= MO; } 
 
int uf[60]; 
int root(int x) { return (uf[x] < 0) ? x : (uf[x] = root(uf[x])); } 
bool conn(int x, int y) { 
  x = root(x); y = root(y); 
  if (x == y) return 0; 
  if (uf[x] > uf[y]) swap(x, y); 
  uf[x] += uf[y]; uf[y] = x; 
  return 1; 
} 
 
Int dp[60][60][2][2][60]; 
Int CC[60][60]; 
Int C[60]; 
 
Int bn[60][60]; 
 
struct TwoSidedCards { 
   
  int theCount(vector <int> A, vector <int> B) { 
    int N = A.size(); 
    int i, j, k, kk; 
    int a, b, bb; 
     
    for (i = 0; i <= N; ++i) { 
      bn[i][0] = bn[i][i] = 1; 
      for (j = 1; j < i; ++j) { 
        pl(bn[i][j], bn[i - 1][j - 1] + bn[i - 1][j]); 
      } 
    } 
     
    for (i = 1; i <= N; ++i) { 
      dp[i][1][0][0][0] = 1; 
      dp[i][1][1][1][0] = 1; 
      for (j = 1; j < i; ++j) for (a = 0; a < 2; ++a) for (b = 0; b < 2; ++b) { 
        for (k = 0; k <= i; ++k) { 
          for (bb = 0; bb < 2; ++bb) { 
            kk = k + ((b == 1 && bb == 0) ? 1 : 0); 
            pl(dp[i][j + 1][a][bb][kk], dp[i][j][a][b][k]); 
          } 
        } 
      } 
      for (a = 0; a < 2; ++a) for (b = 0; b < 2; ++b) { 
        for (k = 0; k <= i; ++k) { 
          kk = k + ((b == 1 && a == 0) ? 1 : 0); 
          pl(CC[i][kk], dp[i][i][a][b][k]); 
        } 
      } 
      --CC[i][0]; 
//cout<<"i = "<<i<<endl;pv(CC[i],CC[i]+10); 
      for (k = 0; k <= i; ++k) { 
        Int tmp = 1; 
        for (j = 1; j <= i; ++j) { 
          tmp *= j; 
          tmp %= MO; 
        } 
        for (j = 0; j < k; ++j) { 
          tmp *= H; 
          tmp %= MO; 
        } 
        pl(C[i], CC[i][k] * tmp); 
      } 
    } 
     
    memset(uf, ~0, sizeof(uf)); 
    for (i = 0; i < N; ++i) { 
      conn(A[i] - 1, B[i] - 1); 
    } 
     
    Int ans = 1; 
    int lot = N; 
    for (i = 0; i < N; ++i) if (uf[i] < 0) { 
      ans *= C[-uf[i]]; 
      ans %= MO; 
      ans *= bn[lot][-uf[i]]; 
      ans %= MO; 
      lot -= -uf[i]; 
    } 
     
    return ans; 
     
  } 
   
};

********************************************************************************
*******************************************************************************/