/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6533
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

class MatchNumbersEasy {
public:
    string maxNumber(vector<int> matches, int n);
};

string MatchNumbersEasy::maxNumber(vector<int> matches, int n) {
    string ret;
    return ret;
}


int test0() {
    vector<int> matches = {6, 7, 8};
    int n = 21;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "210";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> matches = {5, 23, 24};
    int n = 30;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "20";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> matches = {1, 5, 3, 2};
    int n = 1;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> matches = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999999999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> matches = {2, 20, 30};
    int n = 19;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> matches = {1, 5, 10};
    int n = 9;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "10000";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> matches = {1, 5, 10};
    int n = 10;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "100000";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> matches = {43, 46, 45, 47, 48, 50};
    int n = 44;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> matches = {1, 46, 43, 47, 36, 50, 49};
    int n = 42;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "4000000";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> matches = {40, 1, 40, 1, 40, 1, 40, 40, 1, 40};
    int n = 39;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "888888888888888888888888888888888888888";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> matches = {50, 50, 50, 1, 50, 50, 1, 50, 50, 1};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999999999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> matches = {10, 12, 14};
    int n = 49;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "2200";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> matches = {50, 49, 10, 47, 11, 45, 13, 15};
    int n = 49;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "7642";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> matches = {6, 8, 9, 10, 10, 11, 12, 14, 15, 15};
    int n = 40;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "400000";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> matches = {6, 7, 7, 9, 11, 11, 11, 13, 15, 15};
    int n = 41;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "600000";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> matches = {5, 5, 7, 8, 10, 10, 10, 11, 12, 13};
    int n = 41;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> matches = {7, 9, 11, 11, 12, 12, 13, 14, 15, 15};
    int n = 42;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "70000";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> matches = {5, 6, 6, 8, 9, 9, 9, 11, 11, 11};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "620000000";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> matches = {8, 10, 11, 11, 13, 15, 17, 18, 19, 20};
    int n = 40;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "5000";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> matches = {7, 7, 7, 7, 9, 11, 11, 13, 14, 16};
    int n = 46;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "633333";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> matches = {8, 9, 11, 12, 14, 14, 15, 15, 15, 17};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "110000";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> matches = {5, 6, 6, 7, 7, 9, 9, 11, 11, 12};
    int n = 48;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "420000000";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> matches = {6, 7, 9, 11, 11, 12, 12, 14, 15, 15};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "11000000";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> matches = {43, 46, 45, 47, 48, 50};
    int n = 44;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> matches = {1, 46, 43, 47, 36, 50, 49};
    int n = 42;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "4000000";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> matches = {40, 1, 40, 1, 40, 1, 40, 40, 1, 40};
    int n = 39;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "888888888888888888888888888888888888888";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> matches = {50, 50, 50, 1, 50, 50, 1, 50, 50, 1};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999999999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> matches = {10, 12, 14};
    int n = 49;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "2200";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> matches = {50, 49, 10, 47, 11, 45, 13, 15};
    int n = 49;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "7642";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> matches = {2, 4, 5, 12, 9, 7, 8, 16, 17, 23};
    int n = 47;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "2000000000000000000000";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> matches = {50, 7, 50, 8, 8, 50, 50, 10, 50, 50};
    int n = 48;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "771111";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> matches = {50, 5, 50, 6, 6, 50, 50, 7, 50, 50};
    int n = 48;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "741111111";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> matches = {50, 5, 50, 6, 6, 50, 50, 7, 50, 50};
    int n = 48;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "741111111";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> matches = {50, 50, 7, 8, 10, 50, 50, 11, 50, 50};
    int n = 48;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "733222";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> matches = {50, 50, 9, 10, 11, 50, 50, 12, 50, 50};
    int n = 49;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "73222";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> matches = {50, 50, 9, 14, 14, 50, 50, 14, 50, 50};
    int n = 49;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "22222";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> matches = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999999999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> matches = {2, 3, 4, 5, 6, 7, 8, 9, 4, 4};
    int n = 11;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "10000";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> matches = {6, 7, 8};
    int n = 21;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "210";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> matches = {1, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9000000000000000000000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> matches = {3, 2, 5};
    int n = 21;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> matches = {1, 9, 8};
    int n = 4;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> matches = {8, 7, 6};
    int n = 21;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "222";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> matches = {5, 2, 4};
    int n = 4;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "11";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> matches = {2, 3, 4, 5, 6, 7, 8, 9};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "200000000000000000000000";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> matches = {9, 7, 8};
    int n = 7;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> matches = {1, 1, 4, 4};
    int n = 6;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "111111";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> matches = {1, 2, 3};
    int n = 4;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "100";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> matches = {2, 6};
    int n = 4;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> matches = {1, 7, 3, 8, 9, 6, 2, 4, 9, 5};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "6000000000000000000000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> matches = {1, 2, 3, 4, 3, 23, 32};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000000000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> matches = {1, 2, 1, 3, 1, 4, 2, 6, 1, 3};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "88888888888888888888888888888888888888888888888888";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> matches = {1, 2, 1, 1, 1, 1, 1, 1, 2, 1};
    int n = 48;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "999999999999999999999999999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> matches = {1, 9, 10};
    int n = 19;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> matches = {2, 9, 6, 3, 7, 4};
    int n = 9;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "3000";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> matches = {1, 1, 1, 1, 2};
    int n = 45;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "333333333333333333333333333333333333333333333";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> matches = {3, 1, 3, 2};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> matches = {3, 1, 3, 2, 4, 5};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> matches = {2, 3, 5};
    int n = 5;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "10";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> matches = {6, 14, 22, 1, 2, 24, 21};
    int n = 47;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "33333333333333333333333333333333333333333333333";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> matches = {1, 1, 47};
    int n = 49;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111111111111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> matches = {5, 23, 24};
    int n = 30;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "20";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> matches = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 50;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000000000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> matches = {1};
    int n = 1;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> matches = {2, 3, 12};
    int n = 24;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "11000000000";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> matches = {1, 1, 1, 25};
    int n = 25;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "2222222222222222222222222";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> matches = {50, 5, 10};
    int n = 10;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "11";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> matches = {3, 20};
    int n = 40;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> matches = {40};
    int n = 45;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> matches = {5, 3, 1};
    int n = 5;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "22222";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> matches = {7, 1, 6};
    int n = 7;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> matches = {5, 11, 12};
    int n = 10;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> matches = {2, 2, 2, 2, 2, 2, 2, 2, 2};
    int n = 49;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "888888888888888888888888";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> matches = {2, 5, 23, 24};
    int n = 30;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> matches = {1, 1, 3, 2};
    int n = 1;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> matches = {1, 9, 49};
    int n = 49;
    MatchNumbersEasy* pObj = new MatchNumbersEasy();
    clock_t start = clock();
    string result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21052069&rd=9991&pm=6533
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
 
string dp[51];
 
class MatchNumbersEasy {
public:
  string maxNumber(vector <int>, int);
};
 
string MatchNumbersEasy::maxNumber(vector <int> matches, int n) {
  int n1 = matches.size();
  for (int i = 0; i < n1; ++i) {
    dp[matches[i]] = char(i + '0');
  }
  
  for (int i = 2; i <= n; ++i) {
    for (int j = 1; j <= i / 2; ++j) {
      string temp = dp[j] + dp[i - j];
      sort(temp.begin(), temp.end());
      reverse(temp.begin(), temp.end());
      if ((temp.size() > dp[i].size() && temp[0] != '0') || (temp.size() == dp[i].size() && temp > dp[i])) {
        dp[i] = temp;
      }
    }
  }
  
  string res = dp[n];
  
  if (count(res.begin(), res.end(), '0') == res.size()) return "0";
  else return res;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/