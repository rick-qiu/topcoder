/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11326
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

class ImpossibleGame {
public:
    long getMinimum(int k, vector<string> before, vector<string> after);
};

long ImpossibleGame::getMinimum(int k, vector<string> before, vector<string> after) {
    long ret;
    return ret;
}


int test0() {
    int k = 1;
    vector<string> before = {"A"};
    vector<string> after = {"B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
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
    int k = 2;
    vector<string> before = {"A", "A", "D"};
    vector<string> after = {"B", "C", "D"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int k = 2;
    vector<string> before = {"B", "C", "D"};
    vector<string> after = {"C", "D", "B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int k = 6;
    vector<string> before = {"AABBC", "AAAADA", "AAACA", "CABAA", "AAAAAA", "BAAAA"};
    vector<string> after = {"AACCB", "DAAABC", "AAAAD", "ABCBA", "AABAAA", "AACAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 499;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int k = 1;
    vector<string> before = {"B", "A", "D", "D", "B", "C", "B", "A", "D", "D", "B", "D", "A", "C", "B", "B", "A", "B", "B", "C", "D", "A", "A", "A", "B", "C", "D", "D", "C", "B", "C", "A", "B", "A", "D", "C", "D", "A", "C", "B", "C", "B", "A", "D", "C", "C", "A", "C", "B", "D"};
    vector<string> after = {"D", "B", "B", "C", "C", "B", "B", "A", "D", "D", "B", "B", "C", "B", "A", "D", "B", "D", "B", "B", "C", "B", "D", "D", "C", "A", "A", "B", "A", "D", "D", "A", "C", "C", "A", "A", "C", "C", "C", "A", "D", "A", "D", "D", "C", "D", "A", "C", "C", "A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int k = 2;
    vector<string> before = {"D", "D", "B", "C", "A", "D", "D", "C", "C", "B", "D", "B", "C", "A", "D", "B", "B", "C", "C", "B", "C", "C", "C", "B", "D", "A", "A", "B", "D", "B", "B", "C", "D", "D", "D", "D", "A", "B", "A", "A", "A", "A", "A", "B", "A", "A", "B", "C", "B", "C"};
    vector<string> after = {"A", "D", "B", "B", "A", "D", "B", "C", "C", "B", "C", "D", "D", "B", "A", "C", "C", "A", "A", "A", "B", "B", "D", "D", "A", "C", "C", "C", "C", "D", "A", "D", "B", "C", "D", "B", "D", "B", "D", "A", "B", "C", "B", "A", "D", "A", "C", "A", "B", "C"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int k = 3;
    vector<string> before = {"A", "B", "D", "A", "D", "C", "A", "C", "C", "D", "D", "A", "D", "B", "A", "C", "B", "A", "A", "C", "B", "B", "D", "D", "C", "A", "D", "C", "A", "C", "A", "B", "A", "B", "B", "D", "B", "D", "C", "A", "B", "B", "D", "C", "C", "C", "B", "D", "A", "A"};
    vector<string> after = {"B", "C", "B", "A", "A", "A", "B", "C", "B", "A", "D", "C", "C", "C", "D", "B", "D", "D", "D", "A", "D", "B", "C", "B", "A", "C", "D", "B", "C", "D", "C", "C", "A", "A", "B", "D", "B", "B", "C", "D", "A", "A", "C", "C", "D", "D", "D", "A", "B", "A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int k = 28;
    vector<string> before = {"D", "D", "A", "A", "D", "C", "C", "D", "C", "A", "B", "D", "B", "D", "A", "A", "B", "D", "D", "B", "D", "C", "B", "B", "B", "A", "A", "D", "A", "A", "A", "B", "B", "C", "C", "C", "C", "D", "C", "A", "A", "C", "B", "B", "B", "A", "C", "A", "D", "C"};
    vector<string> after = {"C", "B", "B", "C", "B", "C", "D", "D", "D", "B", "A", "A", "A", "B", "B", "A", "A", "A", "A", "C", "C", "A", "D", "B", "C", "B", "C", "C", "A", "D", "A", "D", "C", "C", "C", "B", "A", "D", "A", "C", "D", "B", "B", "B", "D", "D", "D", "C", "D", "B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 72057594037927936;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int k = 29;
    vector<string> before = {"D", "D", "B", "B", "D", "A", "A", "B", "C", "D", "C", "C", "B", "C", "B", "B", "A", "B", "A", "B", "A", "A", "C", "B", "C", "C", "D", "C", "A", "A", "A", "C", "B", "A", "D", "A", "C", "D", "B", "A", "B", "A", "C", "A", "C", "D", "D", "D", "D", "D"};
    vector<string> after = {"C", "C", "D", "C", "A", "A", "C", "A", "D", "C", "B", "B", "D", "C", "B", "B", "B", "C", "B", "D", "D", "B", "C", "B", "A", "C", "B", "A", "C", "D", "C", "D", "A", "A", "D", "A", "B", "D", "C", "B", "A", "C", "A", "D", "D", "B", "A", "D", "A", "B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 288230376151711744;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int k = 30;
    vector<string> before = {"B", "D", "D", "C", "D", "C", "C", "A", "D", "A", "D", "B", "D", "B", "C", "A", "A", "C", "C", "D", "B", "C", "C", "D", "B", "A", "A", "B", "B", "A", "B", "A", "B", "D", "A", "A", "D", "D", "B", "A", "C", "D", "D", "C", "A", "C", "C", "C", "B", "B"};
    vector<string> after = {"B", "D", "A", "B", "D", "C", "B", "D", "D", "C", "B", "C", "A", "D", "D", "B", "C", "D", "A", "B", "C", "B", "C", "A", "B", "B", "A", "B", "D", "A", "C", "D", "D", "C", "C", "B", "A", "C", "A", "D", "A", "C", "B", "A", "A", "C", "D", "D", "A", "A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846976;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int k = 1;
    vector<string> before = {"A"};
    vector<string> after = {"A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int k = 30;
    vector<string> before = {"A", "A", "A", "A", "B", "B", "B", "C", "C", "C", "D", "D", "D", "AA", "AA", "AA", "AA", "AA", "AA", "AB", "AB", "AB", "AC", "AC", "AC", "AD", "AD", "AD", "BB", "BB", "BB", "BB", "BB", "BB", "BC", "BC", "BC", "BD", "BD", "BD", "CC", "CC", "CC", "CC", "CC", "CC", "CD", "CD", "CD", "DD"};
    vector<string> after = {"A", "B", "C", "D", "A", "C", "D", "A", "B", "D", "A", "B", "C", "BB", "BC", "BD", "CC", "CD", "DD", "CC", "CD", "DD", "BB", "BD", "DD", "BB", "BC", "CC", "AA", "AC", "AD", "CC", "CD", "DD", "AA", "AD", "DD", "AA", "AC", "CC", "AA", "AB", "AD", "BB", "BD", "DD", "AA", "AB", "BB", "AA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846976;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int k = 1;
    vector<string> before = {"B", "B"};
    vector<string> after = {"A", "C"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int k = 1;
    vector<string> before = {"B", "B", "B"};
    vector<string> after = {"A", "D", "C"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int k = 1;
    vector<string> before = {"A", "A", "D"};
    vector<string> after = {"D", "B", "B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int k = 1;
    vector<string> before = {"B", "B", "C"};
    vector<string> after = {"C", "D", "A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int k = 1;
    vector<string> before = {"C", "C", "D"};
    vector<string> after = {"A", "D", "B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int k = 1;
    vector<string> before = {"B", "D"};
    vector<string> after = {"D", "A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int k = 1;
    vector<string> before = {"A", "B", "A"};
    vector<string> after = {"B", "D", "D"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int k = 1;
    vector<string> before = {"C", "B", "C"};
    vector<string> after = {"B", "D", "A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int k = 1;
    vector<string> before = {"C", "D", "D"};
    vector<string> after = {"D", "B", "A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int k = 1;
    vector<string> before = {"D", "B", "C"};
    vector<string> after = {"B", "C", "A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int k = 1;
    vector<string> before = {"B", "A"};
    vector<string> after = {"C", "D"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int k = 1;
    vector<string> before = {"A", "D", "A"};
    vector<string> after = {"C", "B", "D"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int k = 1;
    vector<string> before = {"C", "A", "C"};
    vector<string> after = {"B", "D", "D"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int k = 1;
    vector<string> before = {"B", "C", "D"};
    vector<string> after = {"D", "A", "C"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int k = 1;
    vector<string> before = {"C", "A", "B"};
    vector<string> after = {"B", "D", "D"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int k = 3;
    vector<string> before = {"CCB", "ACC", "BAC", "CDC", "CAD", "CCC", "CCC", "CCC", "DCA"};
    vector<string> after = {"BCB", "DCC", "CCC", "DCB", "CCC", "CCC", "ACC", "CCA", "CDC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int k = 3;
    vector<string> before = {"ADA", "ADA", "ABA", "ADC"};
    vector<string> after = {"CAA", "AAA", "AAA", "AAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int k = 4;
    vector<string> before = {"B"};
    vector<string> after = {"B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int k = 4;
    vector<string> before = {"D", "C"};
    vector<string> after = {"D", "A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int k = 5;
    vector<string> before = {"A", "DB", "C", "D"};
    vector<string> after = {"B", "CD", "D", "D"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 421;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int k = 5;
    vector<string> before = {"AAC", "DAAA", "CD", "BA"};
    vector<string> after = {"ABC", "AAAA", "AB", "DA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 450;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int k = 6;
    vector<string> before = {"ACADA", "BABACA", "DAAAA", "AAAADA", "AADA", "BDA", "ABA", "AAB", "ABDA", "DAA", "BAAA", "AAAB", "DACB", "AAAD"};
    vector<string> after = {"ACDDA", "AACAAA", "DABAA", "BADAAA", "CADA", "CAB", "ABA", "DAA", "AAAA", "ACD", "DAAA", "ADAA", "AAAD", "AAAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 2177;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int k = 6;
    vector<string> before = {"DCD", "BBCCD", "CDD", "ADCCB", "BDCC", "CCBCDB", "CBCCC", "CCCC", "BC", "CACCCC"};
    vector<string> after = {"DAC", "CABCC", "DCC", "CCDCC", "DCCD", "CDCCCC", "ADCDC", "CCCB", "CC", "CCDCCA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1487;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int k = 7;
    vector<string> before = {"BDBBAAA", "CABADDA", "ADBABB", "DDDAABB", "DBAAAB", "DAABAAD", "DACAAA", "CDADAAB", "AAACAAC", "AAAAAAA", "AAAAACD", "ADACAAA", "AAAADCA", "ABAAAAA", "DAADABA", "ACACAAB", "ABDAAD", "CAABDBA", "BADDAA", "AADBDAB", "AADAACA", "BAABDAC", "DBABADB", "CDCCAAA", "AACCCAA", "AADBCAA", "BADCABA", "BAABDA", "BAABAAB", "AADBAAA", "DDBAACA", "ACDAAAC", "AAAAAA", "AAAAAAB", "AADAAAA", "DDAAAAA", "AAAACAA", "DCABAAA", "ADBDAAD", "AAABAAA", "AACABAD", "AAAAAAA", "AADAAA", "AADBDAD", "AADBBAA", "DAABADB", "AAAACAA", "CDDDDAA", "BAAAAAA"};
    vector<string> after = {"AAAACAD", "AAAADCC", "DADABA", "DADAABD", "AAADCA", "BDDAAAA", "ACADAA", "DAADADC", "AAAAAAA", "BAAABAA", "ABAAAAA", "ADDDAAC", "AABAABB", "DAAACAC", "BAAAABA", "BABACAA", "AAAABB", "AADADAA", "AAAABA", "BDAAAAA", "AADADAA", "DDAACCD", "ABAADAA", "DABAAAB", "BDCAADB", "ABDDBAB", "ABAAADA", "AAABAB", "ADABAAA", "DAACAAA", "AABADAB", "ADAACAB", "AAAAAA", "AABACAB", "ABACCBA", "ADAAADA", "AABABAA", "ADAAADD", "AAADAAD", "AADADBA", "BAAAAAB", "ABDCAAB", "AAADBA", "CADBABD", "BAADDBD", "AABADAC", "AAAAAAD", "DBADDAA", "ADAAACD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 2702;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int k = 7;
    vector<string> before = {"BDBBB", "ACBBBBC", "BBBBC", "CCACCCB", "CC", "BBBBBBD", "BBDBBAB", "DBBCBB", "DBABABB", "BBBBABB", "BBBBB", "BBABB", "BBBBBDB", "ABDC", "BDBBDCB", "BBBBBAC", "BBBDBC", "BBBBBBA", "BBBBBBB", "BACCBB", "ABBDABB", "DC", "ABBDBB", "ACBCABB"};
    vector<string> after = {"BADBC", "ACDBCBB", "BADCB", "BBBDBBC", "BD", "BBACCBD", "BBADBDB", "BBBBCC", "BBBCBBB", "BCBDCBD", "ABBBA", "DDBAB", "BCBDBDB", "BBCB", "BBCBBBB", "BABCBDB", "BBCCBD", "BBBBBCB", "DBCBADC", "BBBACA", "ABBABBC", "DB", "DBBCBB", "BBDBBBB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 7112;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int k = 8;
    vector<string> before = {"A"};
    vector<string> after = {"C"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 6720;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int k = 8;
    vector<string> before = {"A"};
    vector<string> after = {"C"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 6720;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int k = 9;
    vector<string> before = {"B", "ADBA", "BDB", "DBBA"};
    vector<string> after = {"C", "ABBB", "BAC", "BCBA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 35898;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int k = 9;
    vector<string> before = {"CACCC", "CCCB", "DBC", "CCCC", "CC", "D", "BCC", "CCCDC", "CAAC"};
    vector<string> after = {"CCCCC", "CCCC", "CAC", "CCCC", "CB", "C", "DCB", "CCCBC", "CCCB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 240052;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int k = 10;
    vector<string> before = {"DDAADD", "ADDDCDDB", "DCBDBA", "DDAD", "DDDCDAC", "DBDDBD", "DCDCD", "DDDDDDD", "DDDDA", "DADDD", "BDBDDAA", "DDADDDD", "DAACD", "DDDDCDD", "DDDABAB", "DDBAC", "DDADACD", "DAD", "ADDDA", "DDDBDDB", "DCDDDBDD", "CDDD", "DDBDCDBD", "CDBDAAD", "DDDDCDD", "DDACDDC", "DDDDDC", "AAADDD", "DDADDA", "DDADDD", "DDDADDAD", "DADADBD", "DDDDDBD", "BDDCCBD", "ADDDDDA", "DBDDDDCD", "DDAADDA", "CDDDDDBD", "DDDADBD", "CCDCC", "DDDDDDDCDD"};
    vector<string> after = {"DDDDAD", "DCDDDDDD", "DADDCA", "DBDD", "ADCDADD", "DDDDDD", "DCDDD", "ABDDBBB", "DBCBD", "DCDBD", "DDDAAAA", "ACBADDD", "ADDAD", "AADDBCD", "DDADDDB", "CDADD", "DAADDDD", "DDD", "DDABC", "DDDDAAD", "ABDDDDDD", "ADDD", "DDDDDDBD", "DDDDBCC", "DABADCD", "ADADACA", "DAADDD", "DCCDAD", "DDDCCC", "DDBDAD", "DDDDDCDD", "ADDDDDD", "ABBBDAA", "DDDDDDD", "DBDCCDC", "DADDADDD", "DCDDCAD", "ADDDADBD", "CCDDDDD", "CDDBD", "BDADCBBBDA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 811222;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int k = 10;
    vector<string> before = {"BAB", "BBBBBBDC", "BBBBBCBBB", "BBBDA", "BBBB", "BABBBB", "BCB", "BBABB", "BCBBABB", "ADBD", "CAAACAB", "BBBBBB", "BBAAB", "DDBDDCB", "ABB", "CBABBBBBBB", "CBDBABCBB", "BB", "DBDBBB", "BCCBCBBCBB", "BDBBCCCBC", "BCCBCB", "BDBBBAA", "BBB", "BABBACCCA", "ABCB", "ABABB", "ABBBDBD", "CBDBBCBBBA", "DABBBBD", "BBABA", "BBBDBC", "CD", "BBBCCBB", "DBDDBBBBBB", "DBCBBB", "BBBB", "DBCBCBB", "A"};
    vector<string> after = {"DDC", "BCBDBCDD", "BBDDBBCBB", "DBDBA", "BBDB", "BBBBBC", "BBB", "BBDDC", "BBDBBBB", "BCDA", "ACABCCB", "BBBDDB", "CBACD", "BBCCBBC", "BBB", "BACABDBBBD", "DBDBBDBDB", "AB", "BBBBBB", "BBCCCDBCBC", "BABBCBBBB", "DBBCBB", "BBBBBCB", "BBB", "BBBDBBCBC", "BBBB", "BCBBC", "BBBBABB", "ABBBBBBBCD", "BBBCBBC", "CCCBB", "CBCBCB", "BB", "BBBBBBB", "BBBBDABBBB", "BBABBB", "BBBB", "BBBBBBC", "C"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1046529;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int k = 11;
    vector<string> before = {"BBAAAACDD", "BABACCDCAAA", "BAACBDBBAAB", "AAAABDADAAA", "ABABAAADCAB", "BABCAAAABAC", "ADADAAAAAAD", "CBAABACAACB", "ADAAABAAAAA", "ABAAAAABA", "AADAACACAA", "ABAADBAAAA", "AAACAABDAA", "CBABBCAAAAA", "CBBACDDDACB", "AAAAAAAAABA", "CDABABAAAAC"};
    vector<string> after = {"AABDBAAAA", "CCAAAAAAAAA", "ACCCDCAAADB", "AACAACDDDAB", "AAADAAAABDA", "ADDAADABABA", "ABAAAAAAAAA", "AAAAAAABAAB", "AAAAADDAAAA", "BADADADAA", "AADDAACAAC", "BBBCADCAAA", "ACAAADACBA", "AADAAAAADBA", "AAAAAAACAAA", "AACCAADAAAA", "AABAABBAAAB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 137775;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int k = 11;
    vector<string> before = {"CCBBD", "CBDAACCCCCC", "BBBDCCCCC"};
    vector<string> after = {"DCCCD", "BCCABCACDCA", "ACBCCBCCC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 173250;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int k = 12;
    vector<string> before = {"D"};
    vector<string> after = {"B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1182720;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int k = 12;
    vector<string> before = {"A"};
    vector<string> after = {"C"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1182720;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int k = 13;
    vector<string> before = {"A", "BAAA", "ACBAABAAB", "AAC", "ACDCBA", "BAAA", "ACAAA", "BCA", "DDC", "AAABAB", "ACABA"};
    vector<string> after = {"D", "AACA", "AADAAAAAA", "CAA", "ABAAAB", "BDAA", "ABAAB", "AAA", "ACA", "ABCAAA", "ABACA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 66317875;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int k = 13;
    vector<string> before = {"C", "CCCCBCCDCCCB", "BCCCA", "CBCBBDC", "CCCCC", "CCDA", "CCCCC", "CADBCCCCCC", "CBCCCCDCCC", "CCCCCB"};
    vector<string> after = {"C", "BDCABCCCCCCC", "CCCCD", "BAADCCA", "BCBBC", "CCCC", "CCCBC", "CCCCCCBCCB", "DCCDBCCAAC", "BCDCCC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 57261660;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int k = 14;
    vector<string> before = {"ABCCBABBB", "ABBBBDCBBD", "BBBBBDABAB", "BBCBBABBC", "CBAABBBB", "BBBABCABB", "ADBDADBDB"};
    vector<string> after = {"BBBBBCABB", "BBDCBBCDAB", "BAABBDBBAB", "BBBBBBDAB", "BBBDBDAA", "AABABADBA", "ADBBDBBBB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 63885822;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int k = 14;
    vector<string> before = {"DDACCCACCBC", "CAACDCCDCAC", "CCC", "CCCCDAACDABCC", "BBCCACCCCCCDCC"};
    vector<string> after = {"DACDACACCCC", "BCCDCCCAACC", "DAD", "CACCDABCBCCCC", "CBDBCADCACCCCC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 13355524;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int k = 15;
    vector<string> before = {"CACCCCCCBCCCBBC", "BAACCBCCCDCBCBD", "CCDCCCCCCBCCCA", "CBBCCCCCDCBDCCC"};
    vector<string> after = {"DBCCCBCCDCDBDCC", "ABCCCCCBCBBBDBC", "CCADBCCCCCBBCC", "CCACCCBCBCCCCDC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 15765750;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int k = 15;
    vector<string> before = {"BADABBBBA", "BDCBACBBBBBCBBB", "CBBDBBCBDACBBB", "BCBBBABBBBCBBBB", "BCBBBDCBABBCBCC", "BBBADCBBDBBBBBB", "BBDBBDBCCBCBDBC", "CBBCBDBBBCACBBB", "ABBBCBBCCBBCBCB", "DBDBBBBABB", "BBBBCBCDBAB", "DBBBBBBADBBB", "BBBBDBBBCBCA", "BBBBDBBDBA", "CBDBCBCCBCBA", "BBBCBBDBCBCBBBB", "CCBBBBBCBBB", "BBCBBBBBBDBABBA", "CBBBBBBBCAABCBB", "BDBBBBBABBABBBB"};
    vector<string> after = {"BBBBABBBB", "BBBBABBDBBBBCCA", "BABABDBCBBBBBD", "CBCCBBABDBBBBBD", "BBDBBCBBBCBBBCB", "DCCDDBDBBBBABBC", "BBBABABCCBBBCBD", "BBDBCBBABDBBCCB", "BABBCAABDABBBBD", "CAABBCABAB", "ABBCBBBDCAA", "BBBBBBBBBBBB", "BBBCBCBBCBBB", "BBCBDAABDB", "DBBBBBDBBABB", "BDBCAABCBABABBB", "BABBBBBCDBB", "BBDACBBCBBBBBAB", "DDDBBBBBBAACBBC", "BBCBBBBCBBCBBBA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 190355438;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int k = 16;
    vector<string> before = {"B", "A"};
    vector<string> after = {"A", "D"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 436523360;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int k = 16;
    vector<string> before = {"DCDDBD", "DDC"};
    vector<string> after = {"DDCDDB", "ADC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229729500;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int k = 17;
    vector<string> before = {"CADCACB", "DDADDDAD", "DDDDD", "DDCAD", "BBAD", "DADDDC", "DCCDDAB", "DDDDD", "DADDD", "BCCDDDADBAD", "DDBCB", "DCDDD", "DCBDDDDAC", "BDD", "DD", "DDACD", "DDDADDDDD", "BADDD", "BDDB", "BDBDB", "DBA", "DCDDCB", "DDDD", "BDBDDDD"};
    vector<string> after = {"BDABDDD", "DDDCDACD", "ADDDD", "CAAAB", "ACCD", "CDDAAC", "AADDDDD", "BDDAD", "CDBBD", "ABABBDDADBD", "ACDCD", "BDDDB", "DBDDBDDAD", "ADA", "BA", "DDDDD", "DDDDDDDBA", "DDDDD", "BDDD", "DDCAC", "ADD", "BCDADD", "DDAD", "DCBDDBD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 17049717470;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int k = 17;
    vector<string> before = {"A", "CAABBA", "BB", "AAA", "AACAAAA", "AAAABAAACCB", "AA", "A", "A", "AAACBABBCAD", "DABAAAACCAA", "D", "ABAAAAAAD", "DCAADDB", "CAACAC", "ADAAA", "ADAAAABC", "A", "A", "CABACAACAAA", "AAAAAA", "AAADADA", "AAACAA", "A", "AAAABDAABAAA", "CCDAAD", "AAAAACABB", "BAAAA", "BACBABC", "AACDADADCAA", "ADCABCA", "DAAADAAAAABA", "AAAABBCADADDA", "BAAABA", "BAA", "AAAA", "BBAAA", "DABBBBAB", "ADAADCAC"};
    vector<string> after = {"C", "ABABAC", "AA", "AAA", "AACBCAA", "CBAAAAAAAAA", "AD", "A", "A", "AAAACACBAAA", "AAABAAAAAAA", "A", "ABAAAADDA", "AAAABAA", "AAABBA", "AAAAA", "ACAAAAAA", "B", "D", "AACBDDAAABB", "BAAAAC", "BAAAAAA", "BABBAD", "C", "CDDCCBAAAABB", "AAACCA", "CDABABAAD", "ADABA", "BAAAABB", "CAAAABCBABA", "AAAACAD", "CCAAAACABDAC", "DAAAAADADAAAC", "ABAACA", "BAB", "ACAA", "AACBA", "DABDAAAA", "ABACCAAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 17179869183;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int k = 18;
    vector<string> before = {"BDCDDABADAD", "CBDDDDDDDDB", "ADDDBDDBDDAD", "DDDDDAA", "ADDCDDDACDDCCDA", "BBDADDBBDD", "DDDDABDDDDD", "DDBDCCDDDCBDA", "DDCDDDDDD", "DACCBCAAB", "ADDDADDDDBDD", "CDDDDDCDDCADBDA", "DADDDDCADD", "DDCDDDDDDDABA", "DAADDAADDDDDDC", "DDDCDBDDDADACC", "DADDDDCDDDAB", "BADDDDDAD", "DDCDADDCB", "DDDBDDBDDADDDDD", "ADADDBBDDDD", "ACDBCADDBDDCC", "DDDACDDDDDCADDA", "CDBDDBDBDCDD", "DADDDDDBDDADB", "CDDDDDCDAAADDD", "DDDDADDDBDDD", "CADDBCDADDD", "DAADCDABDDD", "ACCDADDDDACA", "DBDDBDCDDDD", "BDDDDDADCDDDAD", "CADDDDDDADCAD", "CCCDDDDADB", "DDDDDDDDDADDDCDD", "CDBDDBDCDBDDAC", "DBADADCDA", "DCDDDCDCDAAAA", "DDADDDDDDDD", "DDDDDDADDDA", "DDDCCABDDDC", "DDDDDABCBD", "DDDAADCBBDD", "DADBDDDDDDBD", "DDDDDCDBDDDDDA", "ADDDBDDDDDD", "DDDACDDADCCAD", "ADBDBDDADBBDD", "CDDDDADDDDDAD"};
    vector<string> after = {"DDADDBDBCAD", "ADCBDDCDDDC", "DACDDADDDAAD", "DCDDDDD", "ADAADDDABDDDDDA", "DDDDDAADDD", "DDDBACBDCDD", "CDACDCDDBDDDD", "CDDDDBCAD", "DDDADDDDD", "DDDCBADCDDDB", "CDDDCCADCBBBCAC", "DDDDDDADCD", "DDDDDCDDCDADD", "DCDDDDCDDABDAA", "CBCDACDDBDADBD", "DDDBDDDDDDAD", "CDACDDADA", "DDCDDBCCA", "DDDCCAAADCDDDDD", "DDDDDADDBDD", "CBDDDDADDDCDA", "DAAADDDDDDCDBBD", "DBDDDDDDDDDA", "DDDADCBADADCA", "BCDDDADDDBADDD", "DDCDDACDDDDD", "DDDDDDAABDD", "DDAADDADDBD", "DADCCDDDDDDD", "DAADBDDDCDC", "DBCDDBDDDDDCAD", "ACADDDDDDADDD", "DADCDADADA", "CBABDDADDBDDDDDD", "DDDDDDDDDDDBAD", "CDDDBDCDC", "DCDADDDCDCCDA", "CDDADDDDBDB", "ADDDDDDBCDD", "BDDCADDDBDD", "BDDDDDBDBB", "ADDDDCADCDC", "CCDBDBDDDDDD", "DDCDDDCDDDDDDD", "BDDDDDDDBDC", "CDDADDDCDDDDD", "DDAAADADDDBDD", "DDDBDDCBDDBDB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 46236969718;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int k = 18;
    vector<string> before = {"CCBBACACCAACAD", "DCDAABCACA", "BDCCDCDCDCDBCAAC", "CCBCCBCBCCC", "CDDACCCCCC", "CACCACCCBBACDDC", "ADCACCDD", "CCCBBBCCCCCCDCD", "CBDBACBADCCCCCCC", "CACACCC", "ACCCCC", "BCCCCCCDCCCCCCCCC", "ACAACCCCCCA", "CACACCCCCCCCCCDA", "CCCCCACCCC", "CBACCCBCDCBA", "CCCACCCCABCABDCCD", "CCCCCCCCCCCADCCC", "CCBCCBDCCCBD", "CACDCCCDCCCCBCC", "CCACCACCDCACDACACA", "CCCCCDCCCCCCCCDA", "CCCCCCDBCCCCABCAC", "CCBDCCCCAAC", "BACCCCACBCAA", "CACCCCCCBDDCAC", "CACCCBACAC", "CCACCCDCCBCBCC", "ACCCCDDCACCAAC", "BCDCAC", "CCA", "CCADCCCDBACACCDACB", "DC", "ACCCCADC", "CCCCC", "DDCCCDCCBCCBCCCA", "CACBCCCCCDACCDCCCC", "CCCCCACCCCAACBA", "CCCDBCCCBDCDCCCBCA", "CBCDDCACCCCCDCABCC", "CDBCADACCDCBCCCC", "BCCCCACCCCCCCBBCCC", "CDCCCCACDDCCACCC", "CACCBCCACACDD", "ACCBCCDCAADDCCBC"};
    vector<string> after = {"ACCCAAACCCACCA", "CBACCCCCCC", "CCBACCDACCDCACAA", "CDAAACAAADB", "CDBCCCCCCC", "BACCCCAAAADCADC", "CBBCCCCC", "ACCBCBBACCCAACA", "CCBBCBCDCCDDCCDC", "ACCBBCB", "DCCCBB", "CCCCDAACCCCACCDCC", "DCCCCCCDCAC", "ACCCCACBACCCCCCC", "ACCCDDCCAC", "BCCCDCBDDCCC", "CCCDCCCCCDCCCBCCC", "CDDCCCCDCBCCCCBA", "CACCDCACCCBC", "CCCBACBCACCBCCC", "CCCDDCCCCCCDCDDCCC", "BCBDDACCCACCCACB", "CBCCDACCBCBCCCBCC", "BAACCCCCCCC", "CCCCBBBCCCCC", "CACCBCCCBACCCC", "ACCCCCCCCC", "CBCCCCCCCCCCCC", "CCCADCCADCCCCB", "CACDDA", "BCB", "CBCCCCCCCCCCCCCACC", "CB", "CACCBCCA", "DCCAB", "CCCACCCDCCCACDDC", "CCAACCACCDACCBABCC", "CAACCBDCDCCDCCC", "CADCBACCCCACACBCCC", "CCBDBACACDCCBACACC", "CCCCCBCCCCADCCCD", "CCBCCACACCCABACAAC", "CACCBCBCCACCBCDC", "CDCCCABACCABC", "ACCAACCCCBACCCCC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 58827948046;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int k = 19;
    vector<string> before = {"BAAAAAACAAAADCDAB", "BCACAACAADCCACAADDA", "DAACAADDABADCAAAA", "AABAAADACAAADACAAAD", "DDAAAAAAADAAAAAA", "DACAAAAAAAADAACAAAD", "AADCCADADAACAAAAA", "BAADCAACAAACAABADAA", "DCCAAADABADAACABAAA", "DADBADBCAAABADCDDA", "AABAACDAAAAAACABAAA", "AAABADACABAAAAACAAB", "AAADAAAACDADAACDACC", "CAADBCDADAABADBA", "AAAAABACDDDAAAAAAA", "CDDDAAAAADADACDAAA", "AADDADAAADADABAAAAC", "ADADAAADDAAAAADAAAA", "DDADBABAAAACCDCA", "AAAADBAADDCAABBDCAC", "DAAACDBABABAAAAAAD", "CCDAACAAADABAACAADA", "AAACAAADADAAABAAADA", "BAAAAADACAABADAAADC", "ADBADAAAAAAADAABCCA", "AAAAAAAACADAADAAA", "DADAAAADDDAAACAAA", "CBBCDDDCAABABCBAAAA", "AAADBCAACAACAAACA", "ACDAADACAAAABACBADD", "DDCAAAAADCDCADCAD", "AAAAAACDDABDDAAADC", "AABAAACACAAADACDDAD"};
    vector<string> after = {"AAAACCAAAAAAAAADA", "AAAABBDDDACDAABCCAA", "ACCADAABCAADAABDA", "AAAADDDAAAAACDAAAAA", "AAAAABAAADCAAACC", "ABBCAADADADADACAAAA", "ADAAABABAAABADAAC", "ADAAADAAADABAAAAAAA", "AAAAAAACCAAACAACACA", "CDDACAAADADABBAADB", "AABACBADCDAADAACCDA", "BABBDAAAAAADAABAACC", "CCAAADAADAADAAAAADA", "CCDAAACBDAACBAAA", "AAAADAAACABCABACAA", "ADADAACABDACCADBAA", "ADACCDAAAACAACBCAAA", "AAAAAADAADAACDCAADA", "AADDAAAAAAAAAABA", "AAAAABBACCAACCAAADA", "ACDAAAAAACAAAABAAA", "AADAABADAAAAAACACAC", "ADDABADBDCADCBDAAAA", "AADAADAAADAAAAAAADA", "CDAAAAADAAACBABAAAA", "ADAACABAADDABDACB", "BDABAAACACAAABAAA", "ACCACAAAAAAAACAABAC", "AADCADDAAAAAACAAA", "CAAACAAAAABAAAAAAAC", "ACCABAAABAADAAAAC", "AACAADCACDCADACAAB", "CCAAAAABAAADAAAAACA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 2933186256;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int k = 19;
    vector<string> before = {"BCBABBDCCBBCBBBB", "BBCCBBBDBBACDBCAB", "BDBBBBBCBBBDBBCCBBC", "BDCBBBADBBBCBBBDBBB", "BBBBBBBCBACCB", "BCBCABBBBBBBDCBBCBD", "ABBDBBBDABBBABBBDBB", "DABBBCBBBBBBBBABBAD", "BABBBBDDCBCBBCB", "DBBBBCBABBBBBBBCBC", "ACBBDCCBBBDBBBBC", "DBBCBBBBBBBBCCABBBB"};
    vector<string> after = {"BCABBBABBCCAABBD", "BBBBBBCACBCBBBDBB", "ADBDCBBCCBCBBBBCBDD", "BCBBBBABBBDBDCBBDCB", "BBBBBBBBCDCBC", "BBACBBBBBDDBDBBBBAB", "CBBBBCCBDBBCCBBBBBB", "ABBABBBCBBBBCCABCBB", "BBBBBBBCBBBACBB", "BDDBCABCBBBBBDCABB", "CBBDBBBDBBCAABDB", "BBCBBABCBBBBAABDBBB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 2933186256;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int k = 20;
    vector<string> before = {"AAA"};
    vector<string> after = {"BAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 47163772656;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int k = 20;
    vector<string> before = {"B"};
    vector<string> after = {"A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 47675916288;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int k = 21;
    vector<string> before = {"BDDABB", "BBBBDBBB", "ABBBBAB", "BCBBCBD", "ABDBB", "BBBCB", "BBCCBAB", "AACCBB", "BBBCBBBB", "BBCBCA", "BBDBDB", "CACBCB", "BBBBBB", "BBBBBDBBB", "BBBBBACB", "DCBBABDBABC", "AAACBB", "BB", "CBBBADDBBA", "BABCBDDC", "BBBCB", "DCAABB", "CBABBAB", "CBCBAADBBBA", "AB", "C", "BBBBADAD", "BBBBBB", "BCADDD", "BBBBBB", "BCBBBBBB", "BBBBBAD", "BCABABBBB", "BBCCB", "BBBBBBBD", "BADBCBCB"};
    vector<string> after = {"BBADCB", "BBACBBBC", "BBBBACB", "BBBBDCB", "BBBBB", "CBCBB", "BDBBBBB", "ABBCBC", "CBDBBBBB", "DBCCBC", "ABBBBB", "BBBDBB", "BBCBBD", "BBCBBBABC", "BBBBDBBA", "BCBCABCCBCB", "BBBBBA", "BB", "AABCDBBBAB", "BBBBBBBB", "BBDBD", "BDBBBB", "BABCBAB", "BCBCBBDBBCB", "BA", "A", "ABBBBBBB", "BBDBAA", "BBCCAD", "ABBBBB", "BBBBCBAB", "DCCBDBD", "CBBBDBBCB", "BBBAD", "CBCDBBBB", "BCBCBBBB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 4327497978155;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int k = 21;
    vector<string> before = {"BBDBB", "B", "ADBBBBB", "BA", "BABB", "BBBDAA", "BCBBBBBDABABCABBBABD", "B", "BDBABBBDABAA", "BABBDACA", "BBB", "BCBB", "B", "BBBBBBBCB", "DBBBBB", "ACCBA", "AABDDBBDACBDB", "CBBB", "BDBBBC", "B", "CABBBBBBBCBAB", "BB"};
    vector<string> after = {"BAABB", "D", "DBBBCBB", "BB", "BBBB", "CDBBBA", "DCBBBBABBCCCCABDBACB", "D", "ACBBBBDCBBAB", "BBBDBBBC", "BBB", "DABD", "D", "BABABABCC", "BBDBBD", "BBABB", "BAABBBACACBBB", "CDBA", "ABBABB", "B", "DBABBBABBCACB", "CB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 4386238221030;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int k = 22;
    vector<string> before = {"DDDDDBDADBDDDBCBD", "DCCDDDCDCAADDDDBD", "DDDBADDDADDC", "ADDCDCDADDDCDDDDDCA", "DDDADDDDDDDDD", "ABDABBDDCBDADDDD", "BDDDBDCBDADDDDABBBDDC", "DDDDDDDDBBD", "DACADDCDBDDDDDDBD", "DDCBDDDBADB", "DDDADDBDDBDABDDDBBDD", "ADDDDDDCBDDADAA", "DDADADDDABD", "CDDDDDBDCDDDD", "DDDDDCDBDDDABDD", "DDDDDBBDAADBCABDD"};
    vector<string> after = {"DDDDADDCADDDDCCDD", "DDDDBBDDDADDCDDDA", "DCDDCDDDDDCD", "DDBBDBBDCDBBDBDBDAC", "DDDDDDDCDBDBD", "DADCDDDDCBDBDDDD", "DDDBBDDDDDADDDDDBDDDD", "DBABBDBBDDD", "DDADDDADDADDBCDDD", "DDBDDDADDDA", "BABDDDDDDCDDDDDDDDAD", "DBDDADBDDDCDDAB", "ACDABCDCDDB", "CDDDBDDDDDDBD", "DDADDABAADAADBD", "DADBABDDDBDDDDDDD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 7626749511535;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int k = 22;
    vector<string> before = {"DCCCCB", "CDCCACBDDCCCCCCADCACCC", "DCCCDCCCCCD", "CACADBDDBC", "DCAAACC", "CDCCBCDCBCDDDADB", "ADDCAADACCDC", "BCDCCCCACCBBCCCBCCCB"};
    vector<string> after = {"CCACAD", "CCBCCCCDCCCCCCCABDBCCC", "CDBCCCCCCCC", "ACDBCCCCCC", "CACCCCA", "BCCDCCCCCDCCABCC", "CACCAAABCCCC", "BDCCCDCDCACCCBCCCAAC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 866654368580;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int k = 23;
    vector<string> before = {"DBBAAACAADADAAAABACADAB", "ADAACAACACCAABBDAACA", "AAACCBBDCAAACAADA", "AAAADAAAAACBCAAACCACA", "CABACAAAAAAAACABADDDCBA", "AAACCAACAAABDADBCABAAA", "ACAAAACADABAAAAACCCBAAA"};
    vector<string> after = {"AAAABAADAACADAACBCACCBC", "CACCCCCAAADAAAAAAADA", "CAABAABCADACAAAAC", "AACAAAAAAAAAAADADACAC", "AAAAAAAABABCAACAAABADCA", "AAAAABAACAABABCAAADDDB", "CADCACAAAAABCDACAAABABC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 577185873264;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int k = 23;
    vector<string> before = {"BBDDBCCABAABBBBACBBBDAB", "BBABAABAABABBBBABCABAC", "BABBBDCABBBBABCDA", "BBBBBBBABABCCBBBBBABBB", "BCBBBBDBDCCBBDBABBDBCAB", "ACBBBBCBCBBABBBBBBBCBCB", "BDBCDBBADDAABBBBBBBAAAB", "BACBDBCBBABBBBBDABB", "BABDBBAAABBBBBDBAABA", "ABBAABAABBDCCBBBBBBAABD"};
    vector<string> after = {"ABBBBBBBBBBBABABBADBABB", "BBBBBABACBBBBAABBBABBB", "ABABDBBABDCBBBDDB", "BCBDADBBDBBBDBDBBBBBAA", "CBBBBBBBBBADABBBDBBBBBB", "BCBABADBDBBBABBBBBBBDBB", "BBCBBABCCBBBBBBDBBABBCB", "BACBAABBCADCABDADAC", "CBABBBCBCBBCABBDBDBB", "BCDBBBBBDBABBCBAAAABCBC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 577185873264;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int k = 24;
    vector<string> before = {"C"};
    vector<string> after = {"A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 10234430029824;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int k = 24;
    vector<string> before = {"C"};
    vector<string> after = {"A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 10234430029824;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int k = 25;
    vector<string> before = {"BDCCCCBCC", "ACCCCCB", "CABCCCBCAA", "BBACAB", "BCACCCCB", "CCCCCCBAC", "CCCACCC", "BCBBABBC", "CBCCCCC", "CCCBBB", "CACACCCCDBCCABA", "BCBB", "CCBAAACCCCBCDC", "CCCCCCCCCCC", "BCCBDC", "AADABC", "CCB", "CCDBCCBCBBC", "CCCADACB", "ACCCDA", "CCCCC", "CDBCC", "CACACCCC", "CDCBCAAACACDA", "CCBBCCCA", "ACDCCCC", "CBCDCCCB", "CCCCBCCCADDA", "BACDCCBC", "CCBCCBC", "ACCACC", "CABCCCCCCBBBC", "BDCCCCCC", "BCBACDC", "CCCCBBBCCCCB"};
    vector<string> after = {"ACDCBACCC", "CCABCCC", "CBCCCCBBCC", "CBACBC", "CBCCBCCC", "BCDADCCCC", "BDCCDCC", "CCCCCBBC", "CCCCCCB", "BACCCC", "CCDCCBCCCCCDABB", "DCCC", "BBCCCBDCCCCCCC", "CCCACABACCC", "BCBCCB", "CCDDDC", "DCA", "CCCCCCCCCDC", "CCADBBDC", "BDCCCC", "CACDC", "ABBCC", "ACBCCACA", "CCCCABCCDDCCC", "CCCDCCCC", "BCCCCCC", "ACACCCCB", "CCCBCCCCCACC", "CCCCCCBC", "BADCCBC", "CDCCCB", "BBCCCADCCCDCC", "CCCCBCDC", "CCCBBAC", "CCDCCCCACABB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1125042720596420;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int k = 25;
    vector<string> before = {"D", "BBBB", "BAABBA", "DBBBDBDCB", "BBA", "BCBDB", "ABBB", "BBDBAB", "DBABBBBBBBB", "BBDABB", "ABBBCCADBA", "AABCABBBBB", "BBBBABABBA", "BBCDACBCBBABABBB", "D", "BBBBBBADDCC", "BBBBCBBAB", "BBDA", "BBABABBDA", "AADCDBBBBCDC", "BBBBCDCBCADABBB"};
    vector<string> after = {"A", "BBAC", "BBCBBA", "ADBBBBABB", "BAB", "DBDDA", "BBDD", "AAABDB", "ACBDBBBBCBA", "BBCBBD", "BCBCBBBBBB", "AAABCBBBBB", "BBBBBAABBA", "CBBBDBCBBDBDBCBA", "B", "DBBBABBDBBA", "DABDDCBBB", "DBAB", "ABBBBBBBB", "BADBACDBBBAD", "BDBCBBBBACBBAAB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1125187043958206;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int k = 26;
    vector<string> before = {"ABADAAAAAAABABDC", "AAAAAACAAAAABD", "AAAAAADAADAAAACDBBBA", "ABDAAAACABCD", "AAAAAAAAAABBBDACCDDA", "DCAAADCAAADAAAA", "ACBABDAAAABDABAABDAB", "DADAACAAABBCACAC", "AADDAAAACAABAADADDA", "AADBDCABABAAAADAB", "BCDBAAABAAAAABAAC", "DDAADAAAABAAAAAADBAADA", "ABADAAADAACDA", "AAAAAAAADAD", "ADABCACDACAACDAAA", "AAAAAAADBAAAAAADCBAAAAA", "ABDAAAADAABBCADA", "DABADAAAAAAAADDAAACA", "AAADAAACCCAA", "ADBAADAAAAAAAAAAA", "ABAADACAAAAAABAAAAA", "ADCBDDAAAAADBCAABAAAADBA", "AADACACAAAAABAACAAA", "DAABCAAADADABADBAA", "DAAABAAAACCABBACDAAAAA", "AAADAAAAAAAADAADA", "AABACDAABABAADA", "AACAAAADAAAABA", "BDAACADAAAAAADBBA", "BDACDCBAADDDAADAD", "BDABDBAACAAACDAAAAAAABD"};
    vector<string> after = {"AACBAAACACAAAAAA", "DAACDACDDAAAAA", "BAAAABDACAAAAAAABAAA", "ACAAADAADAAD", "BADDABAAAADABADDADAA", "BAADBACADAAACAA", "DADBDDACAADCDCAADADA", "CACDCADAAAAAADBD", "ABAAAAAABAADCAAAAAA", "DAAAAACAADBDDDABA", "DAAAAAAABAAAAAAAA", "DAAAACADBAADAABAABAAAA", "ADABADAACAAAD", "ADDAADABAAD", "ABACAAAAAAADBBAAA", "AAAAADBABAAAACAADAAABAA", "DCAACDCCBBACCDCB", "ACAABAADADDDADBAABAB", "AAAAAAAADAAA", "AADAABADAAAAAAAAA", "AAAADAACAAAAAADAADA", "AAAABCAAABADAAADADAAACDA", "AADBAADADDCABCBAAAA", "AADAADBADBAAAAAABB", "AAADAACAABAAAAADDADACA", "DAAADBBDABDAADBAB", "AADAADDABBAAAAA", "DAAAAAABACADAA", "AADAAAACDBAAAAAAC", "AAADDCDAADAABABBA", "CCAAADAAADAAAAAABBABAAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 2893120340774300;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int k = 26;
    vector<string> before = {"CACCABBABCCA", "ACBAAA", "AACAACDDCACACCAAA", "AAACCADDBAAAAAABAAAAAAC", "A", "DADBABAACAAAAACAAAACA", "DAABAAACABBAAAAAA", "CCDAAADAAACCBBABCAACCAADAA", "ACACAAADACCABAAD", "ADBDAADAAAABACCCA", "ABAABABAABCCADAAAAACA", "AAAAACACA", "DAABAAABACADA", "CCAADAAAADBAAACBAAA", "ADAAACAAACBADABAABA", "DADAAAAA", "AAAAAABAAAAADABCACCCA", "AAAAABACBDACADA", "AAACACBADAB", "ADAAAADAACCDACAAAAAAAA", "BAAABAADCAADACDCAACA", "AAABAACACAADA", "ACABACAB", "ABABABADBAAAADAAAAAAACACCA", "AADACABCAA", "AAABAACDACAAA", "AAAABCDCCDAAAACAA", "ACADAAAAACAAAACCCA", "AAAAABAD", "AACAAADACBAAA", "AAAADABAACAAACCDCAA", "ABACAAAAAACBAAADAAAA", "AACAAAAAACCBBABCAAAC", "A", "B", "CACBBDAABABAAAABCA", "ADCABCACAACAAADBA", "AABDADAAAAABAAAA", "A", "AADAAAABBDAADAAADAAABC", "DAAADAAAAADACDACADAAAAAB", "AAAAAAABAAAD", "AADADBCAA", "CCAACAABBAB", "AACCDABADAAAA"};
    vector<string> after = {"DDCACCBDACBC", "ACCDCB", "AAAAAABAAACAAAADA", "AAAAAABAAAAACAAACCDDCAB", "C", "ADCBBACCAADAAAAAAAACA", "AADACDADAAACCAAAD", "AABCAABAAAAAADDCCAAAAADAAB", "AAADDABAAAAACAAA", "AAADDCCAAAAAABACA", "AACAAADDAAACAAACAAAAD", "ACCCACAAA", "AACAAADABCACA", "ACACACCDBACDAAADACA", "DAAAAACAAABCCABAADA", "ACAAAABC", "ABCACABBAAABACAAADAAC", "ADACBBCAADACCAD", "DCDAAABAAAC", "BDCAADAADCCACCAAACAAAB", "DCAAAAAAADAADAACCBAC", "AACBAAABDCAAA", "CCADACAA", "BDBBABCAAACAAAABDBAAAACDCA", "ACADABDCDC", "DACAAAACAACAB", "CAAAAABDAAACAAACA", "DDCAACACBBAADAACAA", "AAADAADA", "ACAAADDADADAA", "ABDAACAACADAAACACDC", "AAAACCDAAACBAADAAACB", "ACAAAACDADAAAAAAAABA", "B", "A", "CADACCAACADAACCDBC", "ADAAAACCAABAAAABB", "ACACAAAACAAABACD", "A", "AACAADCAACAAABAAACCAAA", "AAAADABADACCDADABAAABAAC", "ACADACAAAAAA", "ABBACCADA", "AAAAABCAADA", "AACADAACAAABD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 4483157081369637;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int k = 27;
    vector<string> before = {"CCABBBBBBDBBBBBBBCBABCBDCBB", "BACCBBCDBABBBCBCBBBBDBDD", "AACBBDBCBBDCDBBCDABBDABABBB", "BBDCBBCBDBABBDBBBBBBBABBABB", "CBCBCCBBCBCDBBABCACBDBBBCBC", "DDBBBCCBCADDBBBBDBBDBBBBC", "BCCBABBABBBABDBBBCBBBBCBDBB", "CBBDCCBBBABBBADDBBBBCBBBAAB", "DBBBBBCBBDBDBCDCBDBBBCBBBBB", "CBCBBDBBBBBBBBACBDCBBB", "CBABBCDDBBDBBCBBBBBABBCBBBB", "ABBBDBBCBDBCDCBBCCDBBDCDBBB", "BBBBBDCBBABBCBBDBBBBBDBBBBD", "BBBDCCBBDDDBBBBBABBBBBBBBBA", "BBBABBBDABDBBBDBBBBBBACDBCB", "DADBBBBBCDBBBBBBBBBBBAACCBA", "BBABBDBBBCBDDBBBCBABBBDCABC", "BBBABBABBBBBBCBBDBBADBBCABB", "BBCBBBBBCBBBBBBBCABBBB", "ABCBACBCCBABBABBACBABBBBD", "BBBCBAABADCBCCBBBDDB", "BCCBBBBABDBBCDDBDBBBBBBBC", "AACBABBCBABBBDBBBBCBBCBDBD", "CABBDBBABBBCBDBBBCBBBBCBB", "DBBCBDCABBACCBABBBCACBABCBC"};
    vector<string> after = {"BCBBBBBBDBCBDCAAABBBCBBABCA", "DABDBBBBACBDCBBBBABABBDA", "BCCBCBBBBCBBBBBCCBCCBBBBABA", "CCBCCDBBBBCBCBCDBADBBBBBCCC", "BBBBABCCCBDABBBBBBCAABBBBBB", "DBDBBBDBBCAABCBBBABBBDACB", "BCBBDBBABAABDDDDBBBBBBBBBBB", "BBCBCDBBBBBACBBBDBCBDCBBDCB", "BBBABCBCBCBCBBBBBBBBACBBCBD", "BBBBDCCBBBBDBBBACBBBBB", "DACBBABBBBCBBBBBBCBBCBBDBCC", "BBBABBBBBCDBBBBACDBDBBDBCBC", "BDABBBCBBCBBBBBCBCABBBDBBDB", "DABBBBBBABBBDABCBBBBBABBBCA", "BBBBCBDBABBBBBBBCCBBBBCBBBB", "BCCDBCBCBBBBBABBBCCBBBCBBAB", "BBBDBACBBBDBBBBBCBDBBCDBCBB", "BBABADCBBBCCCBCBBBBBBDBBBBC", "BBBBBBDADBBBAABACBCABB", "DBBBBBDBBBBBABBCBADADACCB", "CBBBBCDBBDBDBBBBBBCC", "CBBDBBDBBBBBBBBBBBBDBCACA", "BBBBBBABBBABDCBBBBADACBBAB", "BBBBCAABBBBBBBBBDDCBDBBAB", "BBBCBBDBBBBBBBABBBBBBDBCBDB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 118129586889600;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int k = 27;
    vector<string> before = {"AACABAAAAAAABADADCAAAAAADAA", "DAAAAADBAAADCACAAAAADDBAAA"};
    vector<string> after = {"BADAAACBBACADDAAACBACBAABAA", "DAAABAAAAAACACDDCAAAAAAAAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 118129586889600;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int k = 28;
    vector<string> before = {"B", "A"};
    vector<string> after = {"B", "B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 2255751924940800;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int k = 28;
    vector<string> before = {"DBADBADAA"};
    vector<string> after = {"CDDDBADAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1608661378490400;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int k = 29;
    vector<string> before = {"CDCADDDDB", "DADBCDDBBD", "ABDDCDBDDD", "CDDDBB", "BDDBDDACDADD", "DBDBDDDADD", "CADDDDBDDDD", "DCDDDDDC", "BADADDCBD", "BDABBDDD", "DBDBADBD", "DDBCDBBCDDDAD", "DDBBDDDADDDDDDD", "DDADADDDDCDDCDBD", "BD"};
    vector<string> after = {"DBDDDDDDD", "DBDDDDBDDC", "DBDDDDADDD", "DBADBB", "DDCDBDBBDBDD", "DDCDBDDDDD", "DDCADCDDDDC", "DDDDBADA", "DDABDDDCD", "BDDBDDDD", "DDDBDDDB", "AADDBDADDDCDD", "DCADDAAADADDDDB", "ABDDDBBBDDCCDDDD", "DD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 286997871720131550;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int k = 29;
    vector<string> before = {"DCCCCCCCDCC", "DCCD", "DBCCCDDCCCCCBC", "CCBCDCCDBACC", "BCCBCCCCCBD", "CCBCDACDCC", "DDABBCCCCDCCCCBC", "BCDCCCCCACCC", "CCCACCDC", "CCCBCDBCC", "DCCCCCADBCBBCB", "CBDDC", "CBCBC", "DCBDDBCACCCCCD", "BCCCCDCCC", "CCCDCDACC", "CBCCACCCDCCBDCCCC", "C", "CBCC", "CBCCBBD", "CCCCCCBBA", "CDBBD", "ABCDCBC", "CCCCDCCCBCBBCDBCC", "CABCCCCACCDACCCCCCCCCC", "CDCCBAABDBCC", "ACDCCCCCCCCC", "CCCCCCCCBCC", "CCCBDCCCACAC", "ACCCBCCC", "C", "BACADACDBDDBBCBCBC", "CCCDCBCCBACBCCCBB", "CCCCACACCC", "BCBCBCACDCCCDCDBCCBCCAC", "ACBCBCCCBCAD", "CCCBCDCCCCABAC"};
    vector<string> after = {"CBCCCDDCCAC", "CCDC", "CBDDDBCCACCCCC", "CCCCABCCCBCD", "BCACBDCCCCC", "CCCCACCBCB", "CBCCACCCCDCCCCCC", "BDCACCCDCCAC", "CCCBBCCB", "BCCCCBCBC", "CCDDCCCDDCCCCC", "CABCC", "CBCCC", "DDCBCACCCCCCCA", "BCCADDDDC", "CCCCCCCDC", "CCCCDCCBCCCCCBBCC", "B", "BCAC", "DCCBBDD", "CCCAADCCB", "CCCCC", "CBCCDCC", "CCCACDCCCCBCABCBD", "BDADACCCAADCDACCCCCCCC", "CDCDCDCCBBCA", "BBCCBADDCCCC", "BCDCCCCCCCC", "CBCCBCCBCABC", "BCBCBCBC", "C", "CCACCDCCBCCCDCCBCC", "CCCCCCCBBBDCCCBCC", "CACCCCCBBA", "CCCDCCBCACBCACBCCCCDCDB", "CACCCCCCBCBC", "DCBBACCCCCCCCC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 288161645364717223;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int k = 30;
    vector<string> before = {"C"};
    vector<string> after = {"B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 32708402911641600;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int k = 30;
    vector<string> before = {"C", "A"};
    vector<string> after = {"A", "A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 32708402911641600;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int k = 30;
    vector<string> before = {"BCBABB", "DABBBBBBBBABB", "BADCCAD"};
    vector<string> after = {"BBBBAC", "BBBBDBBBBDABA", "ABBCBAD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 60008085148050000;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int k = 30;
    vector<string> before = {"CADDDDCDBDD", "DDDADDCDDDDCDDDDADDA", "DBCDBDCCDD", "BDDDC", "DCBADDADDCADD", "DBDDDDDDDDD", "C", "DDCDDDCCDDD", "DDCCDDDDDBACDA", "CDCDADD", "DDDDCADDDDBCD", "D", "DDABBDDBDBDCDDDDDA", "CCDACDBDCADCD", "ADDBCDDDDADDD", "DADC", "DDDDCDCADD", "DDDCD", "CDDC", "DBDDADD", "DABDDDDCACDD", "DDBDDBDDCBDDABDBDDD", "DDD", "DDDDADCDDADD", "CBBBDDDBDD", "ADADDDDDCDC", "CDDDDDDBDDDD", "DDDDDD", "B", "DBC", "A", "DADADC", "CBDCDDCCABADDDDDD", "CCDDDBBDADDDDDDCDADDDDCD", "DDDD", "CDCBDDDBDDACD", "DBDBDDDDDDC", "BDD", "CCCDDBDBDDBCDADD", "DCACDDDBDDDADDDDABDDDB", "DDADACACBA", "DD", "DDDDCDABADDDD", "DDDDDDD", "DABD", "DDCDDDDBDBBDDDDD", "A"};
    vector<string> after = {"DADDCDADDCC", "CDADCDDDBDBDADDDDDDC", "DCBBDDCDDD", "DDADD", "DBADDDCCDADAD", "DDBDDADDDDD", "C", "CDCDDBADDDD", "CDBDDADDDDCDDD", "DDDDDBA", "DBACDCADDCBDC", "A", "DCDDDDDDDDDDADDDCD", "CDDDDDCDADDDA", "DDDADDBDDBDCD", "DCCD", "DDACDDADBD", "DCCDD", "DBDA", "DDDCBBC", "DDDDDADADDBD", "CDDDDCBDDCCCDDDDDBB", "DDD", "BDDDDDDDDCBD", "DDCDDDCDBD", "CDDDDDDDDDC", "DDDABDBDCBDC", "DDDDAD", "A", "DDA", "D", "DDADDD", "DADDADDDADDCCDDDB", "DDADBDBCBDDDBCDCDDCDBCCD", "DCAD", "CCDDDCDDDADAD", "DDBCDABDDDD", "DDC", "ADDDBDCDADCDDDAD", "ABDDBDABCDDDCABDDDCDDD", "DDCCDADDDB", "AB", "DCCDDDDDCADCA", "DBCCDDD", "BDBD", "DDCDCBDDAADDDDDB", "B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846885;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int k = 30;
    vector<string> before = {"CBADBBACDBCBBBBCBABBBBBB", "BBBBADDBCCBBDBBBBB", "BABBBCBDDADDBDDABBBCD", "BBBBBBCABDABDDBBBDABBBBAB", "BBBBABBBBBBCDCBBBBBCA", "DBDBCBBBABBBBBBBBCBDDABBCAAAB", "DBBDCBABBBCCBDBBDDDCADBA", "ADBBBBBBBBABBBBBBBBCBBD", "BDABBBBBCBBBDBABBDBBBBACAAB", "BBADBADABABBB", "BBABBDBBBBAABABDCBBBBBBB", "BBDBBBBBCCCCBBBBBBDBBB", "BBABBABBBBBDDBDBBBCBDBBBB", "BABBBAABBCABDBBBBCABBBABBBBDB", "BBDDDDBABABBDBBBCBBBAB", "BBBBBBDABBABBBBAB", "BBBDCBBABBBBBADDC", "BBBBABBBBDBCBBBBCBB", "BBBBBDABBBBBBBBBBBB", "BADBABCDDBBBBDBBDA", "DABADDABBABC", "BBBBBBBBBBBBBDDBBCABBBBDAD", "BBBBBBBDDBCBDBBBBBBB", "BBDDBCBDACDBBDBDBCBA", "ABDDABDBCCDBBBBBBBCDBABBBBA"};
    vector<string> after = {"BBBBDBBDBCDBDBBBDCCBDDCB", "DCBBBBBBABDBBBDCDB", "BBBBCBBAABBBDBBBCBBAB", "CAADBBBCBCABBBBBBDBDCBBDD", "BBBDBBBBBABBBDBBBBDBB", "CCBBBCBBCBBACABBBAACDBBBBABBD", "BBCBBBBBDBDCDBBBBCBABDBB", "DDACBBBCBABBDDBBBBBABBB", "BBBCBDBBDBBBBBBBCBADCBBABBD", "ABBBCBBBBBCDD", "BBBBBBBBBCABBBBBDBABDBCD", "DBBBBBABBBBBBBADBBBDDB", "CDBABBDCDBBBBBBDBBBBADCDB", "BDABBBABDDBBBCBBDDDABBBBBBBAB", "BBDBBBBABACBBBBBBBBBDB", "DBBABCBBBBBBBBDBB", "BDDBCCBBBBBABBBBB", "DBDBBBBBBBDDDDABBAB", "BBBDDABDBBDABDBBDDD", "BBDBDBCDBBBBBBBBBB", "BACBDBBBABCB", "BBBBBCDBDDBACBBBBDBBBBBDBB", "BABBBDBDBCDDDBADBADA", "BBBABDBBCBDABDBCADAD", "BABDBBBBDBBDBABDDADBBBBBBAB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 453770116227318825;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int k = 30;
    vector<string> before = {"CAAABCBAACAD", "AAACCAACAAAAABBCAAAADAD", "ACCAABBDDAAAAAAAACCAAAADAA", "ADAAADAAAACAACAADADDCA", "CAACAAAA", "AAAAADAADBAAAACAAABA", "AABBCADBAAAAADAADADDAAAADCAAAA", "CAADABACADAADBAAAAA", "AAAAAAAADACC", "DCADACAAADADD", "DABCAAAAADDCAAAAAACCAAABA", "CABBAADAACAABBACAAAAAADAD", "AAAAACADBAAAAAA", "BAAADCAAAAAACAABAAAAADADBCDADA", "AADBADAADAACACDACA", "CAAAAAAADAAAAAAAAAAACCADCAABDA", "AAAACAAAAACAA", "AADAADDAAADAACAADAAAAAA", "CCABCDCAABDBDACAAABAAA", "ABAAAAC", "AAADCCCBAAADAAAC", "ABAAABAAADDDABAAACCCDAAACAAACA", "AAAACADDCAAAADCADAB", "ADAAAABADADACCAACDCAAA"};
    vector<string> after = {"ADCDAAADBAAB", "BADBAAAABCDAACCDADAAAAD", "ACAAAAADCDBAACADCAAAAAAAAA", "ACAACBBABABABAAAAACAAA", "AAAAAADB", "CABAAABDCADAAAABDDCC", "ABABAABAAADACBDCBBDBACACBDADBA", "AACDAAADAAAAAAAABBA", "AADAAAABDBBA", "DADAAACAAAAAA", "DADAAAAAAAAAAAAAADDACAADA", "DADADCAAAAAADAAABCAAADCDA", "ADAAAAACDABCAAC", "ACBAAAABABADAAAAABAADBBCAAAACB", "CAAADCBAAAAAAAAAAA", "BAAACDDAAAAADAADAAAAADABADAAAA", "AAAAAACDAADAD", "ACAABBAAAAAAAAAAAAAAAAB", "ACAADAADBBABDAAACDDCAA", "ACACABB", "AABCCCAACCAAAAAD", "AAAABAAABACCDAAABACCABBAADACAB", "BACCAABADAABADAADAA", "DACADACBACAAABABAACDBA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 909946791340491525;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int k = 30;
    vector<string> before = {"DBDCCBBDBBDDDACBCBCCABCBBBBCD", "DBCDBBBBBCDDBBDBBCDBBDBCCBBBBB", "BABBBBCAACBCBBBBBBBBBBBBA", "BCBBBBBBBBBBBBADDBBCBBBADBBB", "BBBBCBBBBBCBCBCBBDCBBBBBACCCC", "BBDBBABBDCBBCDBBBBBBBBCADDBDBA", "ABDBBBBDCCBCBBBBCCCDBBC", "BDCBBDBACABBCBDBBBCCBBAABBDBB", "BCBBBDBDDBCBBBDBDBCCBBBABDBB", "ADBBBBBDDCBCBABCCBADBDCB", "BCCBBCBACAABBDBBBBCABBBBBBDB", "BBCBADBBCABBBDDCBCABBBCDBC", "CACBBBBBBBBDAADCBBBBBBBBB", "BBBCCBBBDBBBCABCCACBBDDCBBCBBB", "BBBBBBDCCDDAAABCBBABBBBABBDD", "BCBBCCBABBBCBBBBCBBCBBBBBCCBBB", "BCBBBCBBBBBBDBCADBBCCBBBBCBAD", "DCDBBABBCDBCBDBDCBBBBBBDCBBDCD", "BBCBBCBCBBBBBBABBBBBBBBBBBBBBB", "BDCDDBBCBDBBBCBBBBBBBBABBBBBBB", "BBDBBABBABCBBBBBCDDBDBBBA", "BBBDBBBCBBBBBCCABBBBBBABCBBBAB", "BDBBBDDBBBDBBABCBBAABBCDCBBBBB", "CBBBABABBBBCCBDBABBAABBBABCDBB", "BCCBBBBCBBBBBBBBBBBBDBDBBDBBBB", "BBBBBBDABBABBBBCABCBCBBBACBBBC", "BBBDBBBBBABBBBCCDBAABBBABBBBDB", "BBDBBABCBABABBBCBCCDBDBBBADCBB", "BBBBDBBABCBBCBDDBBBBDDBBDBDCB", "BDBBBBBBCBDDBBBABBBABBBDB", "BBBBCBBCBABBBAABBABBBBCDBBBDBB", "BBBDBADDCBBBCBBBDBDBDBDBABBBBB", "BCCBBCBBBCCCBACBBDBCCCABBDABBB", "ABCBBBBBBBBDBBBBBBDCBCBBC", "BBBBBBABCBABCCBBBBBCBCBBABBBBB", "BDDBBBBBCBCBCBABBDBBBBBCDBBBB", "BBBBBABBBBCBDBBCBBBBBBBB", "DBCBBCABBCABBBCBBABCBBBBBC", "CABDCBDBACBBCBBACABBCCDBBBBACB", "DACBBABCCBBCBBBBBBDCCBADBBB", "BCBBBCABCBBDDBBBCDBBBBBBBCBAB", "CDBBDABCBBDDBBBBBBDDBDCDADBADB", "BBBBBBBBBABBBDBBBBBBBDBBBBBCBB", "BBDBBBBBCABABBCBCDBBBBABBADBB", "CABBBBBADBDBCBAABCBDDBBDABABCA", "DBBADABBDCBBCBCBDDBCDBABBBCDBC"};
    vector<string> after = {"BBBBBCAADBABBCBBBCDBBBBCBBCAA", "CBBABBBBACBBAABBCACBBCCBBCBBBC", "BDABBDBBBBABBBBBBBBCBBBCB", "CBCCBBBBBDBBADBBBCBBBBBBDBDB", "BBBBBBBABCBBCDBBBBBBCCBBBBCBB", "CBCDDBBBDBBADBBBBDBBCBABBDBBCC", "BDBBBBABBCCBBBCBBDBBDBA", "DBABBABBBBBBDBBDBDDBBBDBBABBD", "BCBBABCBBBBBBCBCBBCAADCBCBBD", "DBBDDBBDDABBBBBBBBBDDBDA", "BBBBBBCBCABBBBBBBCADBBCCBDCB", "BBBCCDBBBBBDBBCCDBBBBBBDDB", "ABBBBCBDCDBBABBDCBABABBBC", "DBCCBBDACBABDDBCBBBABBBBABBBDB", "BBBBBABBBCDCBABBDBBBDBBBBBBA", "CBBBDBBCBCBCBBBBBDBABCBBABBABA", "BBBDBBBBCBDBABBBBBBBBBCBABDBB", "BBBBBBBBBBBBCBBBBBBBDBBBDABDBB", "CABBCBABBBBBADBDBABBCCBBBABBBC", "BBBDBBBBABBBCBBBDBBBBBBBBCBBCB", "BBBBBBCBDBBBBBBBBBBCBBBBC", "BCDBDBBDBBBBBABBBBBCCBBAABBBBB", "CBABBBCBBBDBBBBBDDBDCBBBBACBBB", "DBBDBBDBCDBABBBDBBCBBABBCCBDBB", "DBBABBBBBDCCDBDBBBBDBBBBBABCBB", "BBDBBCBBDACBBADCCCDBBDBBBCDBBB", "CBBBDABBBBBBCABDBDBBDABCBCABBC", "BBBBBBDABBDDBBBBBDBBBBBDABBBDB", "BBCBBBBBBDCBBBCBBCBDBDBDBBBBB", "BCCBBCBCCBBBACCBBBCBDDBBA", "BBBDCBBBDADBBBBBBBCBBBBBBBABCB", "ABDBBABABCADBDDBABBBADBBBBBCCA", "ADBBBCCBBCCBBBBABCBBCBADBBCBBC", "BBBBBADCCACBDCDBCABBBBCCD", "BBCCBBBCBBCBBABBBBDDBBBBDBBBBB", "CCABBABDBBBBBBBBCBBBBCBDCBBBC", "BBBDDCDBBBCBDBABDBCABBCB", "BBCBBBCBBCBBBBBDBDBBBCCBBB", "BDCDBBCDBBBBCBBDBBBDBBBBBBDBCB", "BBABBBBBBDBBCBABDCBCBBBBBAB", "CBBABBCBBBBBBCCCCBBBCDBBDDCBD", "BBBBBBAABCBBBCACBBBBCCDBBBBCCB", "BCBBABBBACCBBBBCBBBBBBBDBCBBBC", "CBBBBCCACBCBBBBBBBCBBBCBBBBAC", "BBCBCBDBCCBBCCBBCBBBBACDBBBBDA", "BDBABBCBBBCBBCBBBBBADBBBBBBBBB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 16689855492504090;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int k = 30;
    vector<string> before = {"CDDDDBDDDDDDADDDCDDDDDDDCADD", "ADDCCCACBBDCDDABCDCDBDDCCBDBDD", "DDDADCDDDDBDDDDDDBDABDDDBDBABD", "BBDDDDBDDDADDDDDD", "CDBCDDDDDDBCDADDBACDDDCDADBDDB", "DCDDDDBACBDDDBDDDDBDABBBCB", "CAADDDDDDDDDDDADCADDDDDDDCDCB", "DCDADABADADDABDDDDBDDBDDBDDD", "BDDDDDDDDDDBDBCDDBCDDCDDDD", "CDADDBDDABDDDADDDDDBDDDADBDAD", "DBDDADBBDADDDDADBDDDDDDDBDDDDD", "BDCDDDDDDDDDAADDDDBDDABDDDDBDD", "DBBDBBDDDADDADADDD", "DDDDCDDDDDADBDDDADDDCDDBBCDDDA", "DDDDABDAADDBDADCCDBBABCBDDDDDD", "DDBACDCADDDDDDDCDDDDCDDBBAADDD", "DDCDADDBDDDCDCDDDABDCDDBCDDBBD", "DCDDDBDBDDDBDDDCDCADBDDDDDDCBD", "DDDDDDDDADDCABDDADADDDDDDDBDDD", "ADDDDADBBACBADADDABCDDDDBDBBDC", "DBDBDDDDDDACBDAAABDBDDCCDB", "ABDDDADDDBDDDCDDBDDBBDDBBDDDBD", "ADDDBBADDDCDCACDD", "DDADBDDDDDAACDDCADDDBDDBDDCBC", "DDBCDDDDBCDDABDDBBBBDACDADCDDD", "BDCDDBBADDBDBDDABDDDDCDDACDCAD", "DDBDDDDDDDDDDADABABDBABADDBBDB", "DDDDDDBCDBCDACDDDDDCDBDDDADD", "DDDCDDBDDCCDCDBDBDCDBDBCDADDBD", "DDDDDADDDADDDCDDDDDDDBCCADCADB", "DBBBADDBDDBDDDDDDDDDD", "DDDDDDDDDDDADDDDDDCDDDADDDCDBD"};
    vector<string> after = {"BBDDADDDBBDCADDBADDBADDDDBDD", "DDDADDBBDBDDDDCBDADDCDDBDDDDDB", "BDDDDDBDBDDBDDDDBDDDADDADDADDD", "DBDDDDBDBDDADADBD", "DDCDDCDDDDADDDBDDDDDBBDACDDDDD", "ABDBBDDDDCDDDBDDADBDADADBB", "ADBDDBDCCDCBDBDBDCDDDDABDDDDB", "DABADBDDADABBDBCDDDDAADDABCA", "CCDDBCDDDABADDCDDDDCDADDDD", "BDBDDADCDDBDBDBCDAADCBBABDDDD", "CBADDDDBCCCDAADDDDDCCDDDADDDDD", "DADADBABDDBDDADADDADABDBDDDCAD", "ADBDDAABDCBDDDCDDD", "DBDDDDADDDBDDDADDDBCDDAAADCDDC", "DDDADABDBCDDCACDBBDDADDDDACDBD", "DDBDDADBDADBADDDDDDBDDDBDBDBDD", "BDDDDBBDADDBCBDDBDDDDDDBDDDDCD", "DDDDDADDDDDDDDCDDBDDDDDDAADDDD", "DDADDDDBDDDDDDDDDDDDBDDDABDDDD", "DDDADADADADBDDDDBADBBDDADDDDDA", "DDDDDDDDDADDDBDDDDBDABBADB", "ABDCDBCDDDDDCBCDDDDDDDBDDCDDBC", "DAADDDADDDDBBADAC", "DCBDDDDDDDDDDDDDBDBADCBDDACCB", "CDCDADDDDCBDDBDDDDDDAABDDBDDDD", "DDDDDCAADDDBDDBBDDDDDDBDDADABD", "DCDBDADBBADADDCADDBDDABBDBDBBD", "DCADBDDDDDDDBDABDDBBDDABADDB", "DDDDDDDDDDDBDBADDDBBDDADDDDDDD", "ABDBDDDDDDDBDDBDDDBABADCBDDDDD", "DDDCDADDDCDADDDDDDDDA", "BDCBDDCDDBDDDDBBDADDADDBDDDADA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 21841203794495085;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int k = 17;
    vector<string> before = {"CDCABCC", "CAACBBAAADADA", "CA", "CBCAABBBBA", "DACBCCCDCB", "DCBDBBABCBCBBADB", "CCACB", "CDCBDBCCACDDBAABC", "BDACAAACAD", "DAAADABB", "ABCBABCDCDD", "BACD", "ABCDCBCCDADBDDADA", "CBDACBDABCC", "DAABBBBDADBABABC", "CDACDBDCCBBABB", "DDCCAAAACAABCCB", "CAABABAA", "DDDCDCBACACADB", "CB", "BCCCB", "CDCB", "BABBDDBCADD", "BBCAAADC", "DDCDADBDCDCBB", "BAAADAACCD", "BDCC", "BDCACCDBABCBBD", "CCADCBACBB", "BDCBCADAAACACABBA", "DDCBABAAABDBCAC", "DCCBCCDBCACBCCBB", "B", "DADDACADBACADBDDB", "ADBDC", "CBDCBADADADA", "ABCBAACBADB", "DDACDCACBCBCBBD", "DB", "CADDDB", "ADBABAABADBC", "DABDB", "CBAACCBADCBDDC"};
    vector<string> after = {"DDBCBDD", "DCAAACBDDACCD", "AC", "CDABAABBCC", "ADBACDBBCD", "ACCBDCCDBACDCDDC", "BACCD", "ACDBAAACBCBBADAAC", "ADBCBBCACC", "DDBADBDB", "DABDDBBDCCC", "DDCA", "ABCADBDADBAABABAD", "CBDBBDBADAA", "DBABDCCDDAAAABAB", "BACCDBBAADBADA", "ACDBBCCCBAACCDB", "CDCACDDC", "BBABCDCABBCDDB", "DA", "DCCBB", "DCAA", "DDBABABADAB", "AABBCCDD", "BABDBDDBCBCBD", "CABDABADBC", "CCDA", "DABBCBACCDBBAD", "CBCADADCAB", "CCDBDDCCCBAACABDC", "BBDDABDADADCCCC", "DCCAAACACDADABCD", "B", "DDDDBBDBBDCCACBCB", "DABCB", "BACADBADBBAA", "DCDABDDBAAB", "ABBBABBDADBCCDB", "BB", "CAAACC", "BCCDCABBCADB", "CCABD", "DCDCDDABADDACB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 17053877352;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int k = 9;
    vector<string> before = {"DDCADDDC", "DAABB", "CDBDCCDC", "DB", "DAAADDABD", "CDCBB", "CA", "AACADCD", "A", "DBBCA", "ADCAADDD", "DBCAAACD", "DDDDBCADC", "AC", "BBABCABDD", "CBACDAC", "AAABBAADD", "ABDDBBB", "CBA", "DD", "DBDCCA", "CDDCDDD", "ACDBAAABC"};
    vector<string> after = {"DBCCCCBA", "DADDD", "BDBDCBDA", "DB", "CCDCDCAAA", "DDBBA", "AA", "DBACAAC", "A", "CCCDA", "DDDBCDAD", "ABACCAAA", "CBCACBCCD", "DB", "BDBBDABBD", "DAADACD", "BBBBCCBCB", "DDAABAC", "CAA", "CB", "CCCCCA", "CDDBCAD", "DABBACCAC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 260085;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int k = 26;
    vector<string> before = {"ABCDBBB", "ADABDDBADDDDCDBBBC", "AADACACDBBDBABBBBAC", "DADCDAB", "ADABABBABCCC", "CDBCADCAD", "ADBDDAA", "CCABCCD", "DDBBADABDCDBACA", "CCACCCDDACCCCCABCDBCCBC", "ACDACCCACBDDADDACBBDABBB", "BCCABBACBACCBCBDDDBA", "AABCBCBCDADBBABADD"};
    vector<string> after = {"BDDDCAD", "DBDCBBDDDCBBAADBAD", "DCADCBCDCCADBCACBDD", "CAABACC", "CDADDCDCDDBB", "CCDBCBCDD", "BDACDAB", "CBCCADC", "DCBACDDDBAABBBB", "DDDDDBAADDCBDCAADBADACC", "ABDAADDABBACDBAAAADCBACB", "DDDCBBBDCBBBADDDDBDA", "DBAAABAABCBAADCAAD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 4447664472437160;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int k = 16;
    vector<string> before = {"BDBACAADBB", "DDBCBBCAAD", "DBCBDCDDDABCAB", "BCCBCCA", "D"};
    vector<string> after = {"CCCBAAADDB", "ACCBDDCBCB", "CBBBBDABABDDDB", "DABCDAA", "A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1037357736;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int k = 5;
    vector<string> before = {"ACCBC", "AADB", "C", "ACAD", "CAA", "ADDA", "AA", "BCADB", "BD", "AC", "ACDBC", "AAB", "CADCA", "DCC", "BCAAA", "DC", "ACCAD", "C", "C", "A", "B", "C", "DAACA", "CBBBC", "ADBA", "D", "CA", "AC", "DD", "A", "BDBB", "CCAC", "CCCB", "CC", "DCBD", "BABA"};
    vector<string> after = {"CBABC", "BDDD", "C", "BBBB", "BBB", "ACCD", "DD", "ADDCB", "CB", "DB", "DACDB", "DDD", "DACDA", "AAB", "DBBDD", "BA", "CABBA", "C", "D", "A", "D", "D", "BADCD", "AACCD", "DBAA", "B", "AA", "DC", "DC", "A", "CDDB", "BCAA", "CAAC", "DC", "BDBA", "DBBA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1023;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int k = 4;
    vector<string> before = {"C", "DDC", "D", "D", "CBA", "AB", "C", "D", "C", "D", "A", "DB", "DACB", "AA", "CAAB", "A", "D", "CCBA", "A", "DBBD", "BBCB", "CBD", "AADC", "BA", "DAA", "BDBC", "AAA", "CCA", "DA", "AD", "BBC", "CBCA"};
    vector<string> after = {"D", "DCA", "A", "A", "CDD", "CA", "C", "B", "B", "D", "D", "CD", "DDDC", "BB", "CDBC", "B", "A", "BCDC", "D", "CDAA", "CBBA", "CBD", "ACAA", "DC", "DBA", "DBAB", "ADD", "CDB", "AB", "CC", "CCA", "DBBD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int k = 26;
    vector<string> before = {"ADCCABDADCDADCBBBADBDCBDBD", "DDCCCABDAABCDDBDDACBDC", "ACCBDD", "CCACDDBACBADDDBDACDCAABBDC", "CCBCCCBDCBDCADCDCDBABAAD", "D", "CBDCBBBDBADDDDADCADA", "DCCDDCBC", "CCCCCBBCCADCACABBDCDCA", "ADADBBC", "BCBBBBCCDDAADBCBA", "B", "ABDCADADDBDCDADABCDCADCDAA", "DCBDABACCBD", "DDBCDDDDADBCA", "ACCAACCCBAAC", "AADBAADBCBADDBAAD", "ABCCDABADDDDDACB", "DBBDDDCAADCAAAAACDA", "CCBADAAAD", "ABDABCBBACAADADBDDBDC", "AAADAADBCBDCDBBDB", "BBAABAABBDADA", "DCBBDC", "BADBAAAAABCAADABBCDD"};
    vector<string> after = {"ABBCCBDCBBBDCCCBCDBBAAACDB", "DACBBDBCBBBDADADDDDBDD", "CBBCAC", "CBBDCCBCDDBCACBDABBDDCCCBD", "DABCDBBABCDBDCDBBACCDACC", "D", "BBAADCBCCDADCCBCCDBD", "DDDCAAAB", "BADABACACAABBBBCCADCAA", "BADABCD", "CCDDDBCCBBDCACCCD", "A", "BABADDCBBCBCCCCBDCBBABDCBA", "ACABBDBBBBC", "CDDADAABCBBDA", "DDDBABBBDACA", "CBACBAACCBDAADCDD", "CACADBADDDAABBBD", "CCABDCBDCDDAAADADCA", "BBABDABAC", "CDCADDCCBADDAABCDDDAB", "ADDACBADDACDBCACD", "BCDCDCDCCAADB", "DDABBB", "ADDADDADDDABCDADCDCA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 4488900561877550;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int k = 14;
    vector<string> before = {"ABDADDCDABBC", "ABDBADBABDADCB", "CCDADDABD", "DDABAAD", "DACAD", "CDBBBBDDCCCCC", "CCCDBC", "DCB", "DAB", "CAACCCCADDACAD", "AADBADCDA", "DCCCDCCCABDCDB", "CBCDDABADAD", "ADCDCAA", "CCCAADCCC", "BDB", "DCBDC", "ADABCDABDACAA", "C", "D", "CDABACAAD", "ADBADBA"};
    vector<string> after = {"ACBCBDABCDCC", "ACACDCCCCBADBA", "BABABCBAC", "DDABADC", "ADDBB", "ABAACDCBBCDCA", "DDBBCB", "CAB", "CCC", "CDADCDCBBCDCCC", "BDBBDDDBC", "DBADCDACDDAADC", "ABDCDCBBDAB", "CBCBDDA", "BCAAAABBB", "CAB", "CCDDB", "DCBCADACDDACD", "C", "D", "CBCCBABDB", "BDBCAAC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 146477331;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int k = 18;
    vector<string> before = {"CDACADCADBAAD", "CCBDACDADDD", "ADDDDCDDDCAADCD", "BCDBCD", "DBABDCCBCCDC", "DDCABDDBBAADADBBDC", "ACBBBBD", "BAADC", "C", "AADACBADD", "AAAACADDDCCBCDD", "ADABBAACDBDCDB", "AACCACCDABBBADAD", "CDBCA", "ABCCCADBDCACA", "CBB", "BDDABBCABBBBAACAAB", "CBD", "AADAAACDACDADACBA", "C", "CAACDBDADBCDADB", "AADBDAD", "ACBABCDBBD", "BCBACBBCB", "A", "BCCCABD", "CCCDBDBBD", "DDA", "BBA", "ACBBBBAAACCABCDCD", "BDBBDADDACCD", "DDCBCABAACBAAAABA", "ACAA", "A", "ABBADCCDCBDDD", "DDCDBBBDBBCDDD", "DAAABCCB", "BADDABDD", "BBACCDCAC", "ADABDDADBDDBAACCD", "ABCADCACCAADADBCAC", "BBAD", "DABCBBBCA", "AB", "BABC", "CBAB", "DCBCABABBBAAACAB", "CABBDCDADDBCACCACD", "ABABBCAD"};
    vector<string> after = {"BBAABBABADCDC", "CBCBDBACDAB", "BABAABDACCADAAA", "ABADCB", "CACACBBBCDBC", "ADDBDCDDABDBBDCCCD", "ADDBCDD", "BDCCD", "D", "CBADBABCC", "DDBCDCBBBABABAB", "CCDACBBDDCBCDA", "ADBDBCDBDDCBCBDD", "BBDBD", "AABBBADBBBBBC", "AAA", "BBBBABDBCABAAAADAA", "CDB", "DCABBACDABCBDCBCC", "D", "ABBBDDBBAACACAD", "CCAAABA", "AABCDADDAA", "ADBADBDDC", "B", "AABABBA", "CCBADCDAA", "AAA", "BCD", "CABBDBBAAAACBDDBC", "DCCAADCBCCDC", "CCDAACABCBBABDBCD", "ACBB", "A", "AAADDCBBADCAC", "ACDCACCCBDCDDD", "CAADBABB", "DCAADDBD", "BCADDBAAD", "CDDACAABABDCCBBAD", "DDCCBCDCCBABABABAC", "CBCA", "BACCDBDDA", "DA", "DBCD", "CAAB", "CBBBBCBBAACBCCAD", "CADDDDACCBCCCADBDC", "DCDABCBD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 68718952431;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int k = 6;
    vector<string> before = {"D", "BDA", "DBDB", "AADDB", "D", "CC", "BAB", "A", "DAADAC", "ACC", "CDBBBA", "CADAAB", "ADACC", "BBACDA", "CD", "DDDBD", "DC", "DAA", "CADB", "DBCAB", "C", "CDCBA", "CBDDBB", "ACCA", "B", "ABAC", "B", "C", "A", "ADCDA", "C", "BCCACC", "C", "DDDDD", "CCAD", "DABB", "CC", "DCABDB", "BDBD", "C", "D", "DDBAA", "C", "DCA", "ACADDD", "CDDDA", "A", "C", "DD"};
    vector<string> after = {"C", "ADB", "CDDC", "BDCBB", "B", "BC", "AAA", "B", "ABBBCB", "DDC", "BDAABD", "CCBCAB", "CCCBB", "DAACCD", "AD", "DBCCC", "CD", "BCB", "AACB", "DDAAD", "A", "DACAB", "DDABBB", "CDAA", "B", "DDDB", "B", "D", "C", "DDCAD", "B", "ACAADA", "C", "DBACD", "ACAB", "BDBB", "CA", "ABABCB", "CBAB", "C", "D", "BCADB", "D", "BBB", "CADBBB", "DCDBC", "C", "A", "BB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 4096;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int k = 19;
    vector<string> before = {"CDCDCCD", "ADBCCDCBACCCDAC", "DCDDADACBADB", "DBBD", "ABBCCBDAADDB", "BC", "B", "BDCAAAABDABBB", "DABAABCBC", "BCBC", "AABCDBADDCBCC", "DBAAB", "A", "ADAABDDA", "DDAADDBDBBCDACBCCDA", "ADDABC", "AD", "CDCCBBDADDDDACABCBD", "AABCBAADDB", "BBBDDBABACABDD", "ABDADDBCCCDDC", "DDDAACADAABADABCBA", "CACBBDDCB", "DBABBBDABCBBDDCC", "DBCBDD", "AD", "DACDDAAAA", "CDAAADBCBABBD", "DCAACCAABBBCAADDDBD", "CBBDB", "DDACABABB", "BDADCCCCCCBAADB"};
    vector<string> after = {"BDABACD", "ACADABCBBDAACAB", "BCBCAACBCBDA", "BBAB", "BABADABBDACA", "DC", "A", "ACADBACDDCACA", "BCAABBAAB", "CDBC", "CCBDACDCDDDBB", "CDBDC", "B", "BCACCCCB", "ACAADBACDDDBAACCBCC", "CBCCCD", "CA", "AAABABCBACCACDAADAA", "DCDBBDBDBC", "DBAABACABACCAB", "BAACBBBADADAD", "ADBACBCCCDBAACCBCA", "DDADDADBB", "BCBDBCDDABCCBABD", "ADACAA", "DB", "DBBCCBCAD", "ABDDCDCBDDCDB", "ADBBAACBAACDACBCABD", "BADAB", "DBCCDDDDD", "BDBBCCCBABBBDAD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 274877903465;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int k = 22;
    vector<string> before = {"CCABDBBCBADBCACDADBB", "DBBDCCBCDBC", "ACBBAAACBCABAAAABCDAAD", "CCD", "DACAABADACBADCD", "AAADADAAD", "BABCDABCDCAC", "BAADAACABAD", "AABABBD", "ACCDA", "CCBBCCBBACDCB", "ACBBDADBCAC", "AACBBB", "ADCABACCDBBBBD", "DBDAB"};
    vector<string> after = {"CBDABBBDCBBBCDDDACBB", "ACACBDDCBDC", "CCACCACDABDBABBDDAADAC", "DCC", "DDBDCBDABBDACDA", "CDDDDADDD", "ADDBCAAADBBC", "DCBBCBCBDCA", "BCBDBAC", "DBBAC", "AACCBCADDDADB", "CCAACADBABA", "DBACAA", "DDACBCDACDBABC", "DBDAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 17470441611480;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int k = 14;
    vector<string> before = {"BAABCBBCBACAC", "DBBACCBCBCCD", "DDADCBCAAAA", "AD", "ADA", "BCADCBABDAAABD", "DAACCDDCBBA", "ACCADBCAAB", "D", "ABCDBADCBACD", "CDDDAACBDBCBCC", "CABDBBAADB", "CABABCACBBCAB", "DACCC", "CCBCBDA", "CCBDCBAB", "ABCCDDCBA", "CCCD", "CDBDDACCAC", "BC", "BABBBB", "BBCCDDDBDBADD", "BBA", "DAACB", "CD", "DBCDDBCBABA", "CAADDBCADCC", "BCAACBDBDDDB", "BADADDA", "DCACCCCCD", "DBBDDCDCAAADC", "CCCDDDCBAD", "ACCCCDCD", "CCDCBCCDBACA", "DCCD", "DA", "D"};
    vector<string> after = {"BCACABBCCDBAA", "BDBCCDDDADDB", "DDAADCCCCDB", "AD", "ADA", "BBBAAAACAADDAB", "DCBAADDBDDA", "BAADBAACDD", "B", "DDDBDAABBABD", "ABCCDDDDBCABCC", "DDADADDACB", "CAACABDCBACDC", "DBBDB", "DBDBDAA", "BDCCABCA", "ABCBCBBCD", "BCCA", "AAABBBCADC", "CC", "DBCBCA", "AABAAACCDABBD", "CAA", "AABAA", "AC", "BBCCCBCDBBA", "BBCBAAADCAD", "ADCDDBDBAACC", "BCDDBDB", "BACBAADCB", "DBADBDDDDCADC", "BCDADDBBDB", "ADDCDBBB", "ABBADBADACDC", "BDBC", "DC", "B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 266611762;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int k = 2;
    vector<string> before = {"C", "CC", "AD", "DB", "BB", "B", "DB", "AB", "BB", "B", "BD", "A", "CA", "BB", "AC", "C", "A", "AC", "D", "B", "C", "B", "B", "DC", "BC", "D", "AA", "C", "DB", "CB", "AA", "DB", "C", "D", "CB", "D", "A", "BB", "DC"};
    vector<string> after = {"B", "BA", "DD", "DA", "DA", "C", "AC", "CD", "AC", "D", "BB", "C", "BC", "BB", "DA", "C", "C", "CD", "C", "B", "B", "B", "D", "DA", "DB", "B", "CA", "C", "BC", "BB", "BD", "DD", "A", "D", "BC", "B", "B", "AA", "BB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int k = 24;
    vector<string> before = {"ABADCCCADACDACAABC", "B", "BBDBAAADABCBDADDADCCAADC", "CBCBA", "DBDDABBBDBDDCBCCB", "ABADABDBDDABAAADB", "BABCDBBDABBDCB", "BBCAAADCCCBDCD", "ACADBACCDBACBCC", "DBDCCAAACACDACDBACA", "DDADD", "BBABAABDADACCBDA", "DCCD", "BADADABCDCCACCCAACAACDD", "BDB", "DBBCACCBDAABAAACCADACA", "AAAADCBACCBADAADDCADADAB", "BDCDCCCCA", "ADBBABCBBAADBCA", "CDDBBDAACACBBC", "BAAA", "CDD", "CBB", "BCDCCB", "ABBACDCBAABBDCDA", "ADCDDCCABBB", "CCBABDABBDBCBBAAA", "BBCCAAAACDCD", "ADABDBADBBBCAD", "ABCAADBCBBACBDDDC", "CDADDCBBACACCD", "ADB", "DBDBDBBADADDD", "CBCADDCDBCDDDDCAD", "ACACBDADCDBBBADCBCAA", "CDDCACCCDBBDDCADDBAC", "BCDDCABBA", "DBCCCBBCDDDBDDCCCADC", "AABBDBBBADCBBAADDCACDACA", "DA", "CBBAACDCBBAAC", "CDADDABCAA", "ADDBCDBBABDCAADDBDCAADAB", "DA"};
    vector<string> after = {"BDCDCBDCBDDABAABDA", "D", "ADDADDBAACBBACBBCCBDAACC", "ADDCA", "BAADACAABABCBCBBC", "DCCDCAAAAAACDDBBA", "DAACCDDBBDBBBB", "AABCDDDCBCDCDA", "CADDDDDDCBCAACD", "ACACBBCCCAADBDCDBCB", "CCDAC", "CBABCBACCAADDAAC", "BBCA", "ADBDBBBCABBADDDACCCAABB", "ACC", "ACCBCCADDBACDABBBBDBBB", "BBDACDCDDDADBAAABCBDCABA", "DBDDBCCCB", "BCBCDBCCBDBBADD", "DDCBCDADAABDBD", "ACAC", "DDC", "DBB", "CCACCA", "BDDDCAABCBAAAAAA", "DCAABDCDBDD", "DBBCDACDCCDDCBDAB", "BCCCDABADDCA", "CCCBBBDADBBABC", "ACCBCADCCDACDBCAD", "ADDABCCDDDBADA", "BCA", "ADCDBACADCDDB", "BDAAABBCCDDBCABAD", "DADCAABDBDBDABACDDBA", "CCCDDCACADCABBBBACDA", "CDCBBDDAC", "ADAAADBBBDDACCACBCCA", "ADCACDDDCACADBDDBBCBBCAC", "CA", "DAADABBDCCACD", "BDBCDADDBA", "BDCBCACDBAABDAACAACBCBDD", "BC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 281474945857824;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int k = 2;
    vector<string> before = {"B"};
    vector<string> after = {"A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int k = 2;
    vector<string> before = {"B", "AA", "AC", "AD"};
    vector<string> after = {"A", "BB", "BC", "BD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int k = 2;
    vector<string> before = {"B", "AA", "AC", "AD", "BB", "BA", "DD", "DD", "AC", "AD", "BC"};
    vector<string> after = {"A", "BB", "BC", "BD", "BD", "DB", "AA", "AC", "CC", "CC", "DC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int k = 30;
    vector<string> before = {"B", "B", "B", "D", "D", "A", "BB", "BB", "BB", "BB", "BB", "BB", "BD", "BD", "BD", "BA", "BA", "DD", "DD", "DD", "DD", "DD", "DA", "DA", "AA", "AA", "AA", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBD", "BBD", "BBD", "BBD", "BBA", "BBA", "BBA", "BDD", "BDD", "BDD", "BDD", "BDA", "BAA"};
    vector<string> after = {"D", "A", "C", "A", "C", "C", "DD", "DA", "DC", "AA", "AC", "CC", "AA", "AC", "CC", "DC", "CC", "BA", "BC", "AA", "AC", "CC", "BC", "CC", "BC", "DC", "CC", "DDD", "DDA", "DDC", "DAA", "DAC", "DCC", "AAA", "AAC", "ACC", "CCC", "AAA", "AAC", "ACC", "CCC", "DDC", "DCC", "CCC", "AAA", "AAC", "ACC", "CCC", "CCC", "DDC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229940597509476418;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int k = 30;
    vector<string> before = {"AABAAAAAAAAAAAA", "AAAAAAACAAAAAAA", "AAAAAAAAAAAADAA"};
    vector<string> after = {"AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 6423296287122000;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int k = 30;
    vector<string> before = {"A", "A", "A", "B", "B", "C", "AA", "AA", "AA", "AA", "AA", "AA", "AB", "AB", "AB", "AC", "AC", "BB", "BB", "BB", "BB", "BB", "BC", "BC", "CC", "CC", "CC", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAB", "AAB", "AAB", "AAB", "AAC", "AAC", "AAC", "ABB", "ABB", "ABB", "ABB", "ABC", "ACC"};
    vector<string> after = {"B", "C", "D", "C", "D", "D", "BB", "BC", "BD", "CC", "CD", "DD", "CC", "CD", "DD", "BD", "DD", "AC", "AD", "CC", "CD", "DD", "AD", "DD", "AD", "BD", "DD", "BBB", "BBC", "BBD", "BCC", "BCD", "BDD", "CCC", "CCD", "CDD", "DDD", "CCC", "CCD", "CDD", "DDD", "BBD", "BDD", "DDD", "CCC", "CCD", "CDD", "DDD", "DDD", "BBD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229940597509476418;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int k = 30;
    vector<string> before = {"ACC", "ABC", "ABB", "ABB", "ABB", "ABB", "AAC", "AAC", "AAC", "AAB", "AAB", "AAB", "AAB", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "CC", "CC", "CC", "BC", "BC", "BB", "BB", "BB", "BB", "BB", "AC", "AC", "AB", "AB", "AB", "AA", "AA", "AA", "AA", "AA", "AA", "C", "B", "B", "A", "A", "A"};
    vector<string> after = {"BBD", "DDD", "DDD", "CDD", "CCD", "CCC", "DDD", "BDD", "BBD", "DDD", "CDD", "CCD", "CCC", "DDD", "CDD", "CCD", "CCC", "BDD", "BCD", "BCC", "BBD", "BBC", "BBB", "DD", "BD", "AD", "DD", "AD", "DD", "CD", "CC", "AD", "AC", "DD", "BD", "DD", "CD", "CC", "DD", "CD", "CC", "BD", "BC", "BB", "D", "D", "C", "D", "C", "B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229940597509476418;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int k = 30;
    vector<string> before = {"ABB", "AA", "AAA", "AAB", "C", "AB", "AA", "ACC", "AC", "BB", "ABC", "BC", "BB", "AA", "AA", "AAA", "AA", "AB", "ABB", "B", "AAC", "AAA", "B", "AC", "AAA", "CC", "CC", "ABB", "AAA", "BB", "AAA", "BB", "A", "CC", "AAB", "AA", "AAA", "AB", "A", "AAC", "AAB", "AAC", "AAA", "A", "BB", "AAA", "ABB", "AAB", "AAA", "BC"};
    vector<string> after = {"DDD", "DD", "BBD", "CCD", "D", "CD", "CD", "BBD", "BD", "CC", "DDD", "DD", "DD", "BC", "BB", "CDD", "BD", "DD", "CCD", "C", "BBD", "BBB", "D", "DD", "BBC", "DD", "BD", "CCC", "CCC", "CD", "BDD", "AC", "C", "AD", "DDD", "CC", "CCD", "CC", "D", "BDD", "CDD", "DDD", "BCD", "B", "AD", "DDD", "CDD", "CCC", "BCC", "AD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229940597509476418;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int k = 30;
    vector<string> before = {"D", "D", "D", "C", "C", "B", "DD", "DD", "DD", "DD", "DD", "DD", "DC", "DC", "DC", "DB", "DB", "CC", "CC", "CC", "CC", "CC", "CB", "CB", "BB", "BB", "BB", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDC", "DDC", "DDC", "DDC", "DDB", "DDB", "DDB", "DCC", "DCC", "DCC", "DCC", "DCB", "DBB"};
    vector<string> after = {"C", "B", "A", "B", "A", "A", "CC", "CB", "CA", "BB", "BA", "AA", "BB", "BA", "AA", "CA", "AA", "DB", "DA", "BB", "BA", "AA", "DA", "AA", "DA", "CA", "AA", "CCC", "CCB", "CCA", "CBB", "CBA", "CAA", "BBB", "BBA", "BAA", "AAA", "BBB", "BBA", "BAA", "AAA", "CCA", "CAA", "AAA", "BBB", "BBA", "BAA", "AAA", "AAA", "CCA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229940597509476418;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int k = 30;
    vector<string> before = {"DBB", "B", "DD", "DDC", "DD", "DCB", "DB", "CC", "DCC", "DC", "DDC", "DD", "D", "DC", "CC", "DDD", "DDB", "DDD", "DDB", "DDD", "DDD", "DC", "DDC", "BB", "BB", "DCC", "DD", "DDD", "CB", "DDD", "DDD", "DDC", "DDD", "BB", "DD", "DB", "DD", "D", "DDD", "CB", "DDB", "D", "DDD", "CC", "DCC", "C", "CC", "CC", "DCC", "C"};
    vector<string> after = {"CCA", "A", "CA", "AAA", "BB", "AAA", "AA", "BA", "BBB", "BA", "BAA", "CB", "B", "AA", "DA", "BBA", "AAA", "CCA", "CCA", "CBB", "CCB", "BB", "BBA", "CA", "AA", "AAA", "AA", "AAA", "DA", "BAA", "CBA", "BBB", "CAA", "DA", "BA", "CA", "CC", "A", "BBB", "AA", "CAA", "C", "CCC", "AA", "BAA", "A", "BB", "DB", "BBA", "B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229940597509476418;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int k = 30;
    vector<string> before = {"B", "B", "B", "D", "D", "A", "BB", "BB", "BB", "BB", "BB", "BB", "BD", "BD", "BD", "BA", "BA", "DD", "DD", "DD", "DD", "DD", "DA", "DA", "AA", "AA", "AA", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBD", "BBD", "BBD", "BBD", "BBA", "BBA", "BBA", "BDD", "BDD", "BDD", "BDD", "BDA", "BAA"};
    vector<string> after = {"D", "A", "C", "A", "C", "C", "DD", "DA", "DC", "AA", "AC", "CC", "AA", "AC", "CC", "DC", "CC", "BA", "BC", "AA", "AC", "CC", "BC", "CC", "BC", "DC", "CC", "DDD", "DDA", "DDC", "DAA", "DAC", "DCC", "AAA", "AAC", "ACC", "CCC", "AAA", "AAC", "ACC", "CCC", "DDC", "DCC", "CCC", "AAA", "AAC", "ACC", "CCC", "CCC", "DDC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229940597509476418;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int k = 30;
    vector<string> before = {"BAA", "BDA", "BDD", "BDD", "BDD", "BDD", "BBA", "BBA", "BBA", "BBD", "BBD", "BBD", "BBD", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "AA", "AA", "AA", "DA", "DA", "DD", "DD", "DD", "DD", "DD", "BA", "BA", "BD", "BD", "BD", "BB", "BB", "BB", "BB", "BB", "BB", "A", "D", "D", "B", "B", "B"};
    vector<string> after = {"DDC", "CCC", "CCC", "ACC", "AAC", "AAA", "CCC", "DCC", "DDC", "CCC", "ACC", "AAC", "AAA", "CCC", "ACC", "AAC", "AAA", "DCC", "DAC", "DAA", "DDC", "DDA", "DDD", "CC", "DC", "BC", "CC", "BC", "CC", "AC", "AA", "BC", "BA", "CC", "DC", "CC", "AC", "AA", "CC", "AC", "AA", "DC", "DA", "DD", "C", "C", "A", "C", "A", "D"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229940597509476418;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int k = 30;
    vector<string> before = {"BBD", "BBB", "BB", "BB", "BBD", "BBB", "BB", "BDD", "BBA", "DD", "B", "BBD", "BDD", "BAA", "BBB", "BD", "AA", "BDA", "BB", "BA", "A", "DD", "AA", "BDD", "DD", "BBA", "BBB", "DA", "BBB", "BBB", "B", "DD", "BB", "BBB", "DD", "B", "BBD", "BDD", "BBA", "D", "DA", "BBB", "BB", "AA", "BBB", "BD", "BD", "BBB", "BA", "D"};
    vector<string> after = {"AAC", "DAA", "AC", "DD", "CCC", "AAC", "DC", "CCC", "DDC", "AA", "A", "AAA", "AAC", "DDC", "DDA", "AA", "BC", "CCC", "AA", "CC", "C", "BC", "DC", "AAA", "AC", "DCC", "DCC", "BC", "ACC", "DDC", "D", "CC", "DA", "AAA", "BA", "C", "ACC", "ACC", "CCC", "A", "CC", "CCC", "CC", "CC", "DDD", "CC", "AC", "DAC", "DC", "C"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229940597509476418;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int k = 30;
    vector<string> before = {"A", "B", "C", "AD", "BA", "BB", "BC", "BD", "CA", "CB", "CC", "CD", "DA", "DB", "DC", "ADD", "BAA", "BAB", "BAC", "BAD", "BBA", "BBB", "BBC", "BBD", "BCA", "BCB", "BCC", "BCD", "BDA", "BDB", "BDC", "BDD", "CAA", "CAB", "CAC", "CAD", "CBA", "CBB", "CBC", "CBD", "CCA", "CCB", "CCC", "CCD", "CDA", "CDB", "CDC", "CDD", "DAA", "DAB"};
    vector<string> after = {"B", "C", "D", "BA", "BB", "BC", "BD", "CA", "CB", "CC", "CD", "DA", "DB", "DC", "DD", "BAA", "BAB", "BAC", "BAD", "BBA", "BBB", "BBC", "BBD", "BCA", "BCB", "BCC", "BCD", "BDA", "BDB", "BDC", "BDD", "CAA", "CAB", "CAC", "CAD", "CBA", "CBB", "CBC", "CBD", "CCA", "CCB", "CCC", "CCD", "CDA", "CDB", "CDC", "CDD", "DAA", "DAB", "DAC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846976;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int k = 30;
    vector<string> before = {"DAB", "DAA", "CDD", "CDC", "CDB", "CDA", "CCD", "CCC", "CCB", "CCA", "CBD", "CBC", "CBB", "CBA", "CAD", "CAC", "CAB", "CAA", "BDD", "BDC", "BDB", "BDA", "BCD", "BCC", "BCB", "BCA", "BBD", "BBC", "BBB", "BBA", "BAD", "BAC", "BAB", "BAA", "ADD", "DC", "DB", "DA", "CD", "CC", "CB", "CA", "BD", "BC", "BB", "BA", "AD", "C", "B", "A"};
    vector<string> after = {"DAC", "DAB", "DAA", "CDD", "CDC", "CDB", "CDA", "CCD", "CCC", "CCB", "CCA", "CBD", "CBC", "CBB", "CBA", "CAD", "CAC", "CAB", "CAA", "BDD", "BDC", "BDB", "BDA", "BCD", "BCC", "BCB", "BCA", "BBD", "BBC", "BBB", "BBA", "BAD", "BAC", "BAB", "BAA", "DD", "DC", "DB", "DA", "CD", "CC", "CB", "CA", "BD", "BC", "BB", "BA", "D", "C", "B"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846976;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int k = 30;
    vector<string> before = {"CDD", "CD", "BDB", "CBC", "BB", "DB", "CC", "DAB", "ADD", "BAD", "DAA", "BBD", "BBB", "BD", "BC", "CAD", "CA", "DC", "CDB", "AD", "CCB", "BCD", "BA", "BAA", "BDA", "BCC", "BCB", "CDA", "CAB", "BBA", "CAA", "BAB", "B", "BCA", "CCA", "CB", "CAC", "DA", "C", "CCC", "CBD", "CCD", "BDD", "A", "BAC", "CBA", "CDC", "CBB", "BDC", "BBC"};
    vector<string> after = {"DAA", "DA", "BDC", "CBD", "BC", "DC", "CD", "DAC", "BAA", "BBA", "DAB", "BCA", "BBC", "CA", "BD", "CBA", "CB", "DD", "CDC", "BA", "CCC", "BDA", "BB", "BAB", "BDB", "BCD", "BCC", "CDB", "CAC", "BBB", "CAB", "BAC", "C", "BCB", "CCB", "CC", "CAD", "DB", "D", "CCD", "CCA", "CDA", "CAA", "B", "BAD", "CBB", "CDD", "CBC", "BDD", "BBD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846976;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int k = 30;
    vector<string> before = {"D", "C", "B", "DA", "CD", "CC", "CB", "CA", "BD", "BC", "BB", "BA", "AD", "AC", "AB", "DAA", "CDD", "CDC", "CDB", "CDA", "CCD", "CCC", "CCB", "CCA", "CBD", "CBC", "CBB", "CBA", "CAD", "CAC", "CAB", "CAA", "BDD", "BDC", "BDB", "BDA", "BCD", "BCC", "BCB", "BCA", "BBD", "BBC", "BBB", "BBA", "BAD", "BAC", "BAB", "BAA", "ADD", "ADC"};
    vector<string> after = {"C", "B", "A", "CD", "CC", "CB", "CA", "BD", "BC", "BB", "BA", "AD", "AC", "AB", "AA", "CDD", "CDC", "CDB", "CDA", "CCD", "CCC", "CCB", "CCA", "CBD", "CBC", "CBB", "CBA", "CAD", "CAC", "CAB", "CAA", "BDD", "BDC", "BDB", "BDA", "BCD", "BCC", "BCB", "BCA", "BBD", "BBC", "BBB", "BBA", "BAD", "BAC", "BAB", "BAA", "ADD", "ADC", "ADB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846976;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int k = 30;
    vector<string> before = {"ADC", "ADD", "BAA", "BAB", "BAC", "BAD", "BBA", "BBB", "BBC", "BBD", "BCA", "BCB", "BCC", "BCD", "BDA", "BDB", "BDC", "BDD", "CAA", "CAB", "CAC", "CAD", "CBA", "CBB", "CBC", "CBD", "CCA", "CCB", "CCC", "CCD", "CDA", "CDB", "CDC", "CDD", "DAA", "AB", "AC", "AD", "BA", "BB", "BC", "BD", "CA", "CB", "CC", "CD", "DA", "B", "C", "D"};
    vector<string> after = {"ADB", "ADC", "ADD", "BAA", "BAB", "BAC", "BAD", "BBA", "BBB", "BBC", "BBD", "BCA", "BCB", "BCC", "BCD", "BDA", "BDB", "BDC", "BDD", "CAA", "CAB", "CAC", "CAD", "CBA", "CBB", "CBC", "CBD", "CCA", "CCB", "CCC", "CCD", "CDA", "CDB", "CDC", "CDD", "AA", "AB", "AC", "AD", "BA", "BB", "BC", "BD", "CA", "CB", "CC", "CD", "A", "B", "C"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846976;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int k = 30;
    vector<string> before = {"ADC", "CC", "BD", "BBD", "BC", "ADD", "CDD", "CCD", "BAD", "AC", "BCA", "CA", "C", "AB", "CDB", "BDB", "BBA", "CAC", "BBC", "CAB", "CAD", "AD", "BCB", "CBC", "CBB", "BAA", "BA", "BCD", "CCB", "BDA", "CAA", "BCC", "BDD", "CBD", "BB", "DAA", "CB", "B", "BDC", "CCA", "BBB", "D", "CBA", "CCC", "BAB", "CD", "CDA", "CDC", "BAC", "DA"};
    vector<string> after = {"ADB", "CB", "BC", "BBC", "BB", "ADC", "CDC", "CCC", "BAC", "AB", "BBD", "BD", "B", "AA", "CDA", "BDA", "BAD", "CAB", "BBB", "CAA", "CAC", "AC", "BCA", "CBB", "CBA", "ADD", "AD", "BCC", "CCA", "BCD", "BDD", "BCB", "BDC", "CBC", "BA", "CDD", "CA", "A", "BDB", "CBD", "BBA", "C", "CAD", "CCB", "BAA", "CC", "CCD", "CDB", "BAB", "CD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846976;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int k = 30;
    vector<string> before = {"B", "D", "A", "BC", "DB", "DD", "DA", "DC", "AB", "AD", "AA", "AC", "CB", "CD", "CA", "BCC", "DBB", "DBD", "DBA", "DBC", "DDB", "DDD", "DDA", "DDC", "DAB", "DAD", "DAA", "DAC", "DCB", "DCD", "DCA", "DCC", "ABB", "ABD", "ABA", "ABC", "ADB", "ADD", "ADA", "ADC", "AAB", "AAD", "AAA", "AAC", "ACB", "ACD", "ACA", "ACC", "CBB", "CBD"};
    vector<string> after = {"D", "A", "C", "DB", "DD", "DA", "DC", "AB", "AD", "AA", "AC", "CB", "CD", "CA", "CC", "DBB", "DBD", "DBA", "DBC", "DDB", "DDD", "DDA", "DDC", "DAB", "DAD", "DAA", "DAC", "DCB", "DCD", "DCA", "DCC", "ABB", "ABD", "ABA", "ABC", "ADB", "ADD", "ADA", "ADC", "AAB", "AAD", "AAA", "AAC", "ACB", "ACD", "ACA", "ACC", "CBB", "CBD", "CBA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846976;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int k = 30;
    vector<string> before = {"CBD", "CBB", "ACC", "ACA", "ACD", "ACB", "AAC", "AAA", "AAD", "AAB", "ADC", "ADA", "ADD", "ADB", "ABC", "ABA", "ABD", "ABB", "DCC", "DCA", "DCD", "DCB", "DAC", "DAA", "DAD", "DAB", "DDC", "DDA", "DDD", "DDB", "DBC", "DBA", "DBD", "DBB", "BCC", "CA", "CD", "CB", "AC", "AA", "AD", "AB", "DC", "DA", "DD", "DB", "BC", "A", "D", "B"};
    vector<string> after = {"CBA", "CBD", "CBB", "ACC", "ACA", "ACD", "ACB", "AAC", "AAA", "AAD", "AAB", "ADC", "ADA", "ADD", "ADB", "ABC", "ABA", "ABD", "ABB", "DCC", "DCA", "DCD", "DCB", "DAC", "DAA", "DAD", "DAB", "DDC", "DDA", "DDD", "DDB", "DBC", "DBA", "DBD", "DBB", "CC", "CA", "CD", "CB", "AC", "AA", "AD", "AB", "DC", "DA", "DD", "DB", "C", "A", "D"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846976;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int k = 30;
    vector<string> before = {"ADA", "DCA", "AA", "DA", "AAB", "ABA", "AB", "ACC", "AAD", "DBC", "D", "ADD", "ACD", "CBD", "DCB", "CB", "DAB", "CBB", "AD", "DBB", "DD", "DBA", "DAD", "ACB", "DDB", "AAA", "ABB", "DDA", "ABC", "DCD", "B", "DDD", "DC", "ABD", "DBD", "A", "ADC", "ACA", "AAC", "BC", "DDC", "ADB", "AC", "DAA", "DAC", "CA", "CD", "DCC", "BCC", "DB"};
    vector<string> after = {"ADC", "DCC", "AC", "DC", "AAD", "ABC", "AD", "CBB", "AAA", "DDB", "A", "ADA", "ACA", "CBA", "DCD", "CD", "DAD", "CBD", "AA", "DBD", "DA", "DBC", "DAA", "ACD", "DDD", "AAC", "ABD", "DDC", "ADB", "DCA", "D", "DDA", "AB", "ABA", "DBA", "C", "AAB", "ACC", "ACB", "DB", "DAB", "ADD", "CB", "DAC", "DCB", "CC", "CA", "ABB", "DBB", "DD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846976;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int k = 30;
    vector<string> before = {"A", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    vector<string> after = {"D", "AAAAAAAAAAAAAAAAAAAACAAAAAAAAA", "AAAAAAAABAAAAAAAAAAAAAAAAAAAAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 32708402911641600;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int k = 30;
    vector<string> before = {"CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "A"};
    vector<string> after = {"AAAAAAAABAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAACAAAAAAAAA", "D"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 32708402911641600;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int k = 30;
    vector<string> before = {"D", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    vector<string> after = {"A", "DDDDDDDDDDDDDDDDDDDDDDDDDDDBDD", "DDDDDDDDDCDDDDDDDDDDDDDDDDDDDD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 32708402911641600;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int k = 30;
    vector<string> before = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "D"};
    vector<string> after = {"DDDDDDDDDCDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDBDD", "A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 32708402911641600;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int k = 30;
    vector<string> before = {"CABBAADAAAAAAAAAAAAAAAAAAAA", "CDCAABAAAAAAAAAAAAAAAAAAAAA", "CAADABDAAAAAAAAAAAAAAAAAAAA", "A", "A", "A", "B", "B", "C", "AA", "AA", "AA", "AA", "AA", "AA", "AB", "AB", "AB", "AC", "AC", "BB", "BB", "BB", "BB", "BB", "BC", "BC", "CC", "CC", "CC", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAB", "AAB", "AAB", "AAB", "AAC", "AAC", "AAC", "ABB", "ABB", "ABB"};
    vector<string> after = {"BCADAAAAACAAAAAAAAAAAAAAAAA", "DCDBAAAAAAAAAAAAAAAAAAAAAAA", "ACDBAABAAAAAAAAAAAAAAAAAAAA", "B", "C", "D", "C", "D", "D", "BB", "BC", "BD", "CC", "CD", "DD", "CC", "CD", "DD", "BD", "DD", "AC", "AD", "CC", "CD", "DD", "AD", "DD", "AD", "BD", "DD", "BBB", "BBC", "BBD", "BCC", "BCD", "BDD", "CCC", "CCD", "CDD", "DDD", "CCC", "CCD", "CDD", "DDD", "BBD", "BDD", "DDD", "CCC", "CCD", "CDD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229989216177645794;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int k = 30;
    vector<string> before = {"ABB", "ABB", "ABB", "AAC", "AAC", "AAC", "AAB", "AAB", "AAB", "AAB", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "CC", "CC", "CC", "BC", "BC", "BB", "BB", "BB", "BB", "BB", "AC", "AC", "AB", "AB", "AB", "AA", "AA", "AA", "AA", "AA", "AA", "C", "B", "B", "A", "A", "A", "ABCADAADAAAAAAAAAAAAAAAAAAA", "BCACADAAAAAAAAAAAAAAAAAAAAA", "BDAACABAAAAAAAAAAAAAAAAAAAA"};
    vector<string> after = {"CDD", "CCD", "CCC", "DDD", "BDD", "BBD", "DDD", "CDD", "CCD", "CCC", "DDD", "CDD", "CCD", "CCC", "BDD", "BCD", "BCC", "BBD", "BBC", "BBB", "DD", "BD", "AD", "DD", "AD", "DD", "CD", "CC", "AD", "AC", "DD", "BD", "DD", "CD", "CC", "DD", "CD", "CC", "BD", "BC", "BB", "D", "D", "C", "D", "C", "B", "CDAABBAAAAAAAAAAAAAAAAAAAAA", "BCDDAAAAAAAAAAAAAAAAAAAAAAA", "DBCCAAAAAAAAAAAAAAAAAAAAAAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229989216177645794;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int k = 30;
    vector<string> before = {"AAA", "CC", "CC", "AAA", "AAA", "AAB", "BB", "BC", "B", "AB", "AA", "AB", "AAA", "AAC", "ADBCABAAAAAAAAAAAAAAAAAAAAA", "BB", "AC", "CC", "BB", "AAB", "AAB", "AAA", "AAA", "AAA", "AA", "AAB", "A", "AC", "C", "BB", "BB", "A", "ABB", "CAAAADADBAAAAAAAAAAAAAAAAAA", "BC", "AB", "AAC", "AA", "AAA", "DACBACAAAAAAAAAAAAAAAAAAAAA", "AAC", "A", "AAA", "B", "AAA", "ABB", "AA", "AA", "AA", "ABB"};
    vector<string> after = {"BCD", "AD", "BD", "BBC", "CCD", "CCC", "CD", "DD", "D", "CD", "BD", "CC", "CCC", "BDD", "ADBCAACAAAAAAAAAAAAAAAAAAAA", "AD", "BD", "DD", "DD", "CDD", "DDD", "DDD", "BDD", "BBB", "CD", "CCD", "C", "DD", "D", "AC", "CC", "B", "CDD", "DCBBAAAAAAAAAAAAAAAAAAAAAAA", "AD", "DD", "DDD", "BC", "BBD", "ACBDDAAAAAAAAAAAAAAAAAAAAAA", "BBD", "D", "CDD", "C", "BCC", "CCD", "CC", "DD", "BB", "CCC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229989216177645794;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int k = 30;
    vector<string> before = {"DACDDBDCDDDDDDDDDDDDDDDDDDD", "CABDBDDDDDDDDDDDDDDDDDDDDDD", "CBDAADDDDDDDDDDDDDDDDDDDDDD", "D", "D", "D", "C", "C", "B", "DD", "DD", "DD", "DD", "DD", "DD", "DC", "DC", "DC", "DB", "DB", "CC", "CC", "CC", "CC", "CC", "CB", "CB", "BB", "BB", "BB", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDC", "DDC", "DDC", "DDC", "DDB", "DDB", "DDB", "DCC", "DCC", "DCC"};
    vector<string> after = {"ABCDDBDDDDDDDDDDDDDDDDDDDDD", "CDBADADDDDDDDDDDDDDDDDDDDDD", "CABDDDCDDDDDDDDDDDDDDDDDDDD", "C", "B", "A", "B", "A", "A", "CC", "CB", "CA", "BB", "BA", "AA", "BB", "BA", "AA", "CA", "AA", "DB", "DA", "BB", "BA", "AA", "DA", "AA", "DA", "CA", "AA", "CCC", "CCB", "CCA", "CBB", "CBA", "CAA", "BBB", "BBA", "BAA", "AAA", "BBB", "BBA", "BAA", "AAA", "CCA", "CAA", "AAA", "BBB", "BBA", "BAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229989216177645794;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int k = 30;
    vector<string> before = {"DCC", "DCC", "DCC", "DDB", "DDB", "DDB", "DDC", "DDC", "DDC", "DDC", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "DDD", "BB", "BB", "BB", "CB", "CB", "CC", "CC", "CC", "CC", "CC", "DB", "DB", "DC", "DC", "DC", "DD", "DD", "DD", "DD", "DD", "DD", "B", "C", "C", "D", "D", "D", "BCAADDDDDDDDDDDDDDDDDDDDDDD", "BCADBDDDDDDDDDDDDDDDDDDDDDD", "ABCCDDDDDDDDDDDDDDDDDDDDDDD"};
    vector<string> after = {"BAA", "BBA", "BBB", "AAA", "CAA", "CCA", "AAA", "BAA", "BBA", "BBB", "AAA", "BAA", "BBA", "BBB", "CAA", "CBA", "CBB", "CCA", "CCB", "CCC", "AA", "CA", "DA", "AA", "DA", "AA", "BA", "BB", "DA", "DB", "AA", "CA", "AA", "BA", "BB", "AA", "BA", "BB", "CA", "CB", "CC", "A", "A", "B", "A", "B", "C", "DABCCDDDDDDDDDDDDDDDDDDDDDD", "BDADDDACDDDDDDDDDDDDDDDDDDD", "ADBBDDDCDDDDDDDDDDDDDDDDDDD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229989216177645794;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int k = 30;
    vector<string> before = {"DDB", "DB", "DDC", "CC", "C", "DDB", "D", "DDD", "DDD", "DDD", "BB", "DDD", "CC", "DDD", "DDD", "CDAADDDDBDDDDDDDDDDDDDDDDDD", "CB", "DCC", "D", "C", "DD", "DDD", "BB", "CB", "BADCCDDDDDDDDDDDDDDDDDDDDDD", "CC", "DDD", "CC", "DDD", "DD", "DC", "CC", "DDC", "BB", "D", "BDACDDBDDDDDDDDDDDDDDDDDDDD", "DDC", "DDC", "DD", "DCC", "DCC", "DDD", "DB", "DC", "DD", "B", "DD", "DC", "DD", "DDB"};
    vector<string> after = {"CCA", "AA", "AAA", "BA", "A", "CAA", "C", "BBB", "CBB", "CCC", "DA", "BAA", "AA", "CBA", "CCB", "ADBCCDDDDDDDDDDDDDDDDDDDDDD", "DA", "BBB", "A", "B", "CB", "AAA", "CA", "AA", "DABBCDDDDDDDDDDDDDDDDDDDDDD", "DB", "CCA", "BB", "BBA", "BB", "BB", "DA", "BAA", "AA", "B", "BCADDDDADDDDDDDDDDDDDDDDDDD", "BBB", "BBA", "CA", "BAA", "BBA", "CAA", "CA", "BA", "BA", "A", "CC", "AA", "AA", "AAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229989216177645794;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int k = 30;
    vector<string> before = {"DABCDBBBBBBBBBBBBBBBBBBBBBB", "ABCABDBBBBBBBBBBBBBBBBBBBBB", "ACCDBBBBBBBBBBBBBBBBBBBBBBB", "B", "B", "B", "D", "D", "A", "BB", "BB", "BB", "BB", "BB", "BB", "BD", "BD", "BD", "BA", "BA", "DD", "DD", "DD", "DD", "DD", "DA", "DA", "AA", "AA", "AA", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBD", "BBD", "BBD", "BBD", "BBA", "BBA", "BBA", "BDD", "BDD", "BDD"};
    vector<string> after = {"BCAADBBBBBBBBBBBBBBBBBBBBBB", "DBBABBBBBBCBBCBBBBBBBBBBBBB", "DDCABBBBBBBBBBBBBBBBBBBBBBB", "D", "A", "C", "A", "C", "C", "DD", "DA", "DC", "AA", "AC", "CC", "AA", "AC", "CC", "DC", "CC", "BA", "BC", "AA", "AC", "CC", "BC", "CC", "BC", "DC", "CC", "DDD", "DDA", "DDC", "DAA", "DAC", "DCC", "AAA", "AAC", "ACC", "CCC", "AAA", "AAC", "ACC", "CCC", "DDC", "DCC", "CCC", "AAA", "AAC", "ACC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229989216177645794;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int k = 30;
    vector<string> before = {"BDD", "BDD", "BDD", "BBA", "BBA", "BBA", "BBD", "BBD", "BBD", "BBD", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "BBB", "AA", "AA", "AA", "DA", "DA", "DD", "DD", "DD", "DD", "DD", "BA", "BA", "BD", "BD", "BD", "BB", "BB", "BB", "BB", "BB", "BB", "A", "D", "D", "B", "B", "B", "BCCABBDBBBBBBBBBBBBBBBBBBBB", "DABACBBBBBBBBBBBBBBBBBBBBBB", "BDADCBBBBBBBBBBBBBBBBBBBBBB"};
    vector<string> after = {"ACC", "AAC", "AAA", "CCC", "DCC", "DDC", "CCC", "ACC", "AAC", "AAA", "CCC", "ACC", "AAC", "AAA", "DCC", "DAC", "DAA", "DDC", "DDA", "DDD", "CC", "DC", "BC", "CC", "BC", "CC", "AC", "AA", "BC", "BA", "CC", "DC", "CC", "AC", "AA", "CC", "AC", "AA", "DC", "DA", "DD", "C", "C", "A", "C", "A", "D", "CDABBBDBBBBBBBBBBBBBBBBBBBB", "CADBBBCBBBBBBBBBBBBBBBBBBBB", "CABBABDBBBBBBBBBBBBBBBBBBBB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229989216177645794;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int k = 30;
    vector<string> before = {"BA", "DA", "BB", "AA", "BBA", "BBB", "DD", "DD", "BD", "BDD", "BBB", "BBB", "BBB", "BBB", "BBD", "BB", "BBD", "BBD", "BBA", "B", "BBA", "A", "BD", "BBB", "BDD", "BB", "BBD", "BA", "DD", "BBB", "B", "AA", "BBB", "D", "DA", "AA", "DD", "B", "BDD", "DD", "D", "DCABABBBBBBBBBBBBBBBBBBBBBB", "BBB", "BBBCADBDBBBBBBBBBBBBBBBBBBB", "BBB", "CDBBBBACBBBBBBBBBBBBBBBBBBB", "BD", "BB", "BB", "BB"};
    vector<string> after = {"DC", "BC", "DA", "DC", "DDC", "DDA", "AC", "AA", "AC", "AAC", "CCC", "DDC", "AAC", "AAA", "ACC", "DD", "AAC", "AAA", "CCC", "D", "DCC", "C", "CC", "DCC", "ACC", "CC", "CCC", "CC", "BA", "DDD", "A", "BC", "ACC", "C", "CC", "CC", "CC", "C", "AAA", "BC", "A", "DCBBACBBBBBBBBBBBBBBBBBBBBB", "DAA", "DACABBBBBBBBBBBBBBBBBBBBBBB", "DAC", "DBDBCABBBBBBBBBBBBBBBBBBBBB", "AA", "DC", "AC", "AA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 229989216177645794;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int k = 30;
    vector<string> before = {"ADDDDDDDDD", "ADDDDDDDDD", "ADDDDDDDDD", "BDDDDDDDDD", "BDDDDDDDDD", "CDDDDDDDDD", "AADDDDDDDDD", "AADDDDDDDDD", "AADDDDDDDDD", "AADDDDDDDDD", "AADDDDDDDDD", "AADDDDDDDDD", "ABDDDDDDDDD", "ABDDDDDDDDD", "ABDDDDDDDDD", "ACDDDDDDDDD", "ACDDDDDDDDD", "BBDDDDDDDDD", "BBDDDDDDDDD", "BBDDDDDDDDD", "BBDDDDDDDDD", "BBDDDDDDDDD", "BCDDDDDDDDD", "BCDDDDDDDDD", "CCDDDDDDDDD", "CCDDDDDDDDD", "CCDDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AABDDDDDDDDD", "AABDDDDDDDDD", "AABDDDDDDDDD", "AABDDDDDDDDD", "AACDDDDDDDDD", "AACDDDDDDDDD", "AACDDDDDDDDD", "ABBDDDDDDDDD", "ABBDDDDDDDDD", "ABBDDDDDDDDD", "A", "BBBBBBBBBBB", "CCCCCCCCCCC"};
    vector<string> after = {"BDDDDDDDDD", "CDDDDDDDDD", "DDDDDDDDDD", "CDDDDDDDDD", "DDDDDDDDDD", "DDDDDDDDDD", "BBDDDDDDDDD", "BCDDDDDDDDD", "BDDDDDDDDDD", "CCDDDDDDDDD", "CDDDDDDDDDD", "DDDDDDDDDDD", "CCDDDDDDDDD", "CDDDDDDDDDD", "DDDDDDDDDDD", "BDDDDDDDDDD", "DDDDDDDDDDD", "ACDDDDDDDDD", "ADDDDDDDDDD", "CCDDDDDDDDD", "CDDDDDDDDDD", "DDDDDDDDDDD", "ADDDDDDDDDD", "DDDDDDDDDDD", "ADDDDDDDDDD", "BDDDDDDDDDD", "DDDDDDDDDDD", "BBBDDDDDDDDD", "BBCDDDDDDDDD", "BBDDDDDDDDDD", "BCCDDDDDDDDD", "BCDDDDDDDDDD", "BDDDDDDDDDDD", "CCCDDDDDDDDD", "CCDDDDDDDDDD", "CDDDDDDDDDDD", "DDDDDDDDDDDD", "CCCDDDDDDDDD", "CCDDDDDDDDDD", "CDDDDDDDDDDD", "DDDDDDDDDDDD", "BBDDDDDDDDDD", "BDDDDDDDDDDD", "DDDDDDDDDDDD", "CCCDDDDDDDDD", "CCDDDDDDDDDD", "CDDDDDDDDDDD", "B", "CAAAAAAAAAA", "DAAAAAAAAAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1127139735692137048;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int k = 30;
    vector<string> before = {"CCCCCCCCCCC", "BBBBBBBBBBB", "A", "ABBDDDDDDDDD", "ABBDDDDDDDDD", "ABBDDDDDDDDD", "AACDDDDDDDDD", "AACDDDDDDDDD", "AACDDDDDDDDD", "AABDDDDDDDDD", "AABDDDDDDDDD", "AABDDDDDDDDD", "AABDDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "AAADDDDDDDDD", "CCDDDDDDDDD", "CCDDDDDDDDD", "CCDDDDDDDDD", "BCDDDDDDDDD", "BCDDDDDDDDD", "BBDDDDDDDDD", "BBDDDDDDDDD", "BBDDDDDDDDD", "BBDDDDDDDDD", "BBDDDDDDDDD", "ACDDDDDDDDD", "ACDDDDDDDDD", "ABDDDDDDDDD", "ABDDDDDDDDD", "ABDDDDDDDDD", "AADDDDDDDDD", "AADDDDDDDDD", "AADDDDDDDDD", "AADDDDDDDDD", "AADDDDDDDDD", "AADDDDDDDDD", "CDDDDDDDDD", "BDDDDDDDDD", "BDDDDDDDDD", "ADDDDDDDDD", "ADDDDDDDDD", "ADDDDDDDDD"};
    vector<string> after = {"DAAAAAAAAAA", "CAAAAAAAAAA", "B", "CDDDDDDDDDDD", "CCDDDDDDDDDD", "CCCDDDDDDDDD", "DDDDDDDDDDDD", "BDDDDDDDDDDD", "BBDDDDDDDDDD", "DDDDDDDDDDDD", "CDDDDDDDDDDD", "CCDDDDDDDDDD", "CCCDDDDDDDDD", "DDDDDDDDDDDD", "CDDDDDDDDDDD", "CCDDDDDDDDDD", "CCCDDDDDDDDD", "BDDDDDDDDDDD", "BCDDDDDDDDDD", "BCCDDDDDDDDD", "BBDDDDDDDDDD", "BBCDDDDDDDDD", "BBBDDDDDDDDD", "DDDDDDDDDDD", "BDDDDDDDDDD", "ADDDDDDDDDD", "DDDDDDDDDDD", "ADDDDDDDDDD", "DDDDDDDDDDD", "CDDDDDDDDDD", "CCDDDDDDDDD", "ADDDDDDDDDD", "ACDDDDDDDDD", "DDDDDDDDDDD", "BDDDDDDDDDD", "DDDDDDDDDDD", "CDDDDDDDDDD", "CCDDDDDDDDD", "DDDDDDDDDDD", "CDDDDDDDDDD", "CCDDDDDDDDD", "BDDDDDDDDDD", "BCDDDDDDDDD", "BBDDDDDDDDD", "DDDDDDDDDD", "DDDDDDDDDD", "CDDDDDDDDD", "DDDDDDDDDD", "CDDDDDDDDD", "BDDDDDDDDD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1127139735692137048;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int k = 30;
    vector<string> before = {"A", "AADDDDDDDDD", "AAADDDDDDDDD", "AABDDDDDDDDD", "CDDDDDDDDD", "ABDDDDDDDDD", "AADDDDDDDDD", "CCCCCCCCCCC", "ACDDDDDDDDD", "BBDDDDDDDDD", "BBBBBBBBBBB", "BCDDDDDDDDD", "BBDDDDDDDDD", "AADDDDDDDDD", "AADDDDDDDDD", "AAADDDDDDDDD", "AADDDDDDDDD", "ABDDDDDDDDD", "ABBDDDDDDDDD", "BDDDDDDDDD", "AACDDDDDDDDD", "AAADDDDDDDDD", "BDDDDDDDDD", "ACDDDDDDDDD", "AAADDDDDDDDD", "CCDDDDDDDDD", "CCDDDDDDDDD", "ABBDDDDDDDDD", "AAADDDDDDDDD", "BBDDDDDDDDD", "AAADDDDDDDDD", "BBDDDDDDDDD", "ADDDDDDDDD", "CCDDDDDDDDD", "AABDDDDDDDDD", "AADDDDDDDDD", "AAADDDDDDDDD", "ABDDDDDDDDD", "ADDDDDDDDD", "AACDDDDDDDDD", "AABDDDDDDDDD", "AACDDDDDDDDD", "AAADDDDDDDDD", "ADDDDDDDDD", "BBDDDDDDDDD", "AAADDDDDDDDD", "ABBDDDDDDDDD", "AABDDDDDDDDD", "AAADDDDDDDDD", "BCDDDDDDDDD"};
    vector<string> after = {"B", "DDDDDDDDDDD", "BBDDDDDDDDDD", "CCDDDDDDDDDD", "DDDDDDDDDD", "CDDDDDDDDDD", "CDDDDDDDDDD", "DAAAAAAAAAA", "BDDDDDDDDDD", "CCDDDDDDDDD", "CAAAAAAAAAA", "DDDDDDDDDDD", "DDDDDDDDDDD", "BCDDDDDDDDD", "BBDDDDDDDDD", "CDDDDDDDDDDD", "BDDDDDDDDDD", "DDDDDDDDDDD", "CCDDDDDDDDDD", "CDDDDDDDDD", "BBDDDDDDDDDD", "BBBDDDDDDDDD", "DDDDDDDDDD", "DDDDDDDDDDD", "BBCDDDDDDDDD", "DDDDDDDDDDD", "BDDDDDDDDDD", "CCCDDDDDDDDD", "CCCDDDDDDDDD", "CDDDDDDDDDD", "BDDDDDDDDDDD", "ACDDDDDDDDD", "CDDDDDDDDD", "ADDDDDDDDDD", "DDDDDDDDDDDD", "CCDDDDDDDDD", "CCDDDDDDDDDD", "CCDDDDDDDDD", "DDDDDDDDDD", "BDDDDDDDDDDD", "CDDDDDDDDDDD", "DDDDDDDDDDDD", "BCDDDDDDDDDD", "BDDDDDDDDD", "ADDDDDDDDDD", "DDDDDDDDDDDD", "CDDDDDDDDDDD", "CCCDDDDDDDDD", "BCCDDDDDDDDD", "ADDDDDDDDDD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1127139735692137048;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int k = 30;
    vector<string> before = {"ADDDDDDDDDD", "ADDDDDDDDDD", "ADDDDDDDDDD", "BDDDDDDDDDD", "BDDDDDDDDDD", "CDDDDDDDDDD", "AADDDDDDDDDD", "AADDDDDDDDDD", "AADDDDDDDDDD", "AADDDDDDDDDD", "AADDDDDDDDDD", "AADDDDDDDDDD", "ABDDDDDDDDDD", "ABDDDDDDDDDD", "ABDDDDDDDDDD", "ACDDDDDDDDDD", "ACDDDDDDDDDD", "BBDDDDDDDDDD", "BBDDDDDDDDDD", "BBDDDDDDDDDD", "BBDDDDDDDDDD", "BBDDDDDDDDDD", "BCDDDDDDDDDD", "BCDDDDDDDDDD", "CCDDDDDDDDDD", "CCDDDDDDDDDD", "CCDDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AABDDDDDDDDDD", "AABDDDDDDDDDD", "AABDDDDDDDDDD", "AABDDDDDDDDDD", "AACDDDDDDDDDD", "AACDDDDDDDDDD", "AACDDDDDDDDDD", "ABBDDDDDDDDDD", "ABBDDDDDDDDDD", "ABBDDDDDDDDDD", "A", "BBBBBBBBBBB", "CCCCCCCCCCC"};
    vector<string> after = {"BDDDDDDDDDD", "CDDDDDDDDDD", "DDDDDDDDDDD", "CDDDDDDDDDD", "DDDDDDDDDDD", "DDDDDDDDDDD", "BBDDDDDDDDDD", "BCDDDDDDDDDD", "BDDDDDDDDDDD", "CCDDDDDDDDDD", "CDDDDDDDDDDD", "DDDDDDDDDDDD", "CCDDDDDDDDDD", "CDDDDDDDDDDD", "DDDDDDDDDDDD", "BDDDDDDDDDDD", "DDDDDDDDDDDD", "ACDDDDDDDDDD", "ADDDDDDDDDDD", "CCDDDDDDDDDD", "CDDDDDDDDDDD", "DDDDDDDDDDDD", "ADDDDDDDDDDD", "DDDDDDDDDDDD", "ADDDDDDDDDDD", "BDDDDDDDDDDD", "DDDDDDDDDDDD", "BBBDDDDDDDDDD", "BBCDDDDDDDDDD", "BBDDDDDDDDDDD", "BCCDDDDDDDDDD", "BCDDDDDDDDDDD", "BDDDDDDDDDDDD", "CCCDDDDDDDDDD", "CCDDDDDDDDDDD", "CDDDDDDDDDDDD", "DDDDDDDDDDDDD", "CCCDDDDDDDDDD", "CCDDDDDDDDDDD", "CDDDDDDDDDDDD", "DDDDDDDDDDDDD", "BBDDDDDDDDDDD", "BDDDDDDDDDDDD", "DDDDDDDDDDDDD", "CCCDDDDDDDDDD", "CCDDDDDDDDDDD", "CDDDDDDDDDDDD", "B", "CAAAAAAAAAA", "DAAAAAAAAAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1126424336423843338;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int k = 30;
    vector<string> before = {"CCCCCCCCCCC", "BBBBBBBBBBB", "A", "ABBDDDDDDDDDD", "ABBDDDDDDDDDD", "ABBDDDDDDDDDD", "AACDDDDDDDDDD", "AACDDDDDDDDDD", "AACDDDDDDDDDD", "AABDDDDDDDDDD", "AABDDDDDDDDDD", "AABDDDDDDDDDD", "AABDDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "CCDDDDDDDDDD", "CCDDDDDDDDDD", "CCDDDDDDDDDD", "BCDDDDDDDDDD", "BCDDDDDDDDDD", "BBDDDDDDDDDD", "BBDDDDDDDDDD", "BBDDDDDDDDDD", "BBDDDDDDDDDD", "BBDDDDDDDDDD", "ACDDDDDDDDDD", "ACDDDDDDDDDD", "ABDDDDDDDDDD", "ABDDDDDDDDDD", "ABDDDDDDDDDD", "AADDDDDDDDDD", "AADDDDDDDDDD", "AADDDDDDDDDD", "AADDDDDDDDDD", "AADDDDDDDDDD", "AADDDDDDDDDD", "CDDDDDDDDDD", "BDDDDDDDDDD", "BDDDDDDDDDD", "ADDDDDDDDDD", "ADDDDDDDDDD", "ADDDDDDDDDD"};
    vector<string> after = {"DAAAAAAAAAA", "CAAAAAAAAAA", "B", "CDDDDDDDDDDDD", "CCDDDDDDDDDDD", "CCCDDDDDDDDDD", "DDDDDDDDDDDDD", "BDDDDDDDDDDDD", "BBDDDDDDDDDDD", "DDDDDDDDDDDDD", "CDDDDDDDDDDDD", "CCDDDDDDDDDDD", "CCCDDDDDDDDDD", "DDDDDDDDDDDDD", "CDDDDDDDDDDDD", "CCDDDDDDDDDDD", "CCCDDDDDDDDDD", "BDDDDDDDDDDDD", "BCDDDDDDDDDDD", "BCCDDDDDDDDDD", "BBDDDDDDDDDDD", "BBCDDDDDDDDDD", "BBBDDDDDDDDDD", "DDDDDDDDDDDD", "BDDDDDDDDDDD", "ADDDDDDDDDDD", "DDDDDDDDDDDD", "ADDDDDDDDDDD", "DDDDDDDDDDDD", "CDDDDDDDDDDD", "CCDDDDDDDDDD", "ADDDDDDDDDDD", "ACDDDDDDDDDD", "DDDDDDDDDDDD", "BDDDDDDDDDDD", "DDDDDDDDDDDD", "CDDDDDDDDDDD", "CCDDDDDDDDDD", "DDDDDDDDDDDD", "CDDDDDDDDDDD", "CCDDDDDDDDDD", "BDDDDDDDDDDD", "BCDDDDDDDDDD", "BBDDDDDDDDDD", "DDDDDDDDDDD", "DDDDDDDDDDD", "CDDDDDDDDDD", "DDDDDDDDDDD", "CDDDDDDDDDD", "BDDDDDDDDDD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1126424336423843338;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int k = 30;
    vector<string> before = {"CCCCCCCCCCC", "CDDDDDDDDDD", "AADDDDDDDDDD", "AABDDDDDDDDDD", "AADDDDDDDDDD", "BBBBBBBBBBB", "ACDDDDDDDDDD", "BBDDDDDDDDDD", "ABBDDDDDDDDDD", "ABDDDDDDDDDD", "AABDDDDDDDDDD", "AADDDDDDDDDD", "ADDDDDDDDDD", "ABDDDDDDDDDD", "BBDDDDDDDDDD", "AAADDDDDDDDDD", "AACDDDDDDDDDD", "AAADDDDDDDDDD", "AACDDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "ABDDDDDDDDDD", "AABDDDDDDDDDD", "CCDDDDDDDDDD", "CCDDDDDDDDDD", "A", "AADDDDDDDDDD", "AAADDDDDDDDDD", "BCDDDDDDDDDD", "AAADDDDDDDDDD", "AAADDDDDDDDDD", "AABDDDDDDDDDD", "AAADDDDDDDDDD", "CCDDDDDDDDDD", "AADDDDDDDDDD", "ACDDDDDDDDDD", "AADDDDDDDDDD", "ADDDDDDDDDD", "AAADDDDDDDDDD", "BCDDDDDDDDDD", "AACDDDDDDDDDD", "ADDDDDDDDDD", "AAADDDDDDDDDD", "BBDDDDDDDDDD", "ABBDDDDDDDDDD", "BDDDDDDDDDD", "BBDDDDDDDDDD", "BBDDDDDDDDDD", "ABBDDDDDDDDDD", "BDDDDDDDDDD"};
    vector<string> after = {"DAAAAAAAAAA", "DDDDDDDDDDD", "BDDDDDDDDDDD", "DDDDDDDDDDDDD", "CCDDDDDDDDDD", "CAAAAAAAAAA", "DDDDDDDDDDDD", "CDDDDDDDDDDD", "CCCDDDDDDDDDD", "CDDDDDDDDDDD", "CDDDDDDDDDDDD", "BCDDDDDDDDDD", "CDDDDDDDDDD", "DDDDDDDDDDDD", "ADDDDDDDDDDD", "CCDDDDDDDDDDD", "DDDDDDDDDDDDD", "BBDDDDDDDDDDD", "BBDDDDDDDDDDD", "BCCDDDDDDDDDD", "BBCDDDDDDDDDD", "CCDDDDDDDDDD", "CCDDDDDDDDDDD", "BDDDDDDDDDDD", "DDDDDDDDDDDD", "B", "DDDDDDDDDDDD", "DDDDDDDDDDDDD", "ADDDDDDDDDDD", "CDDDDDDDDDDDD", "BCDDDDDDDDDDD", "CCCDDDDDDDDDD", "BDDDDDDDDDDDD", "ADDDDDDDDDDD", "CDDDDDDDDDDD", "BDDDDDDDDDDD", "BBDDDDDDDDDD", "DDDDDDDDDDD", "CCCDDDDDDDDDD", "DDDDDDDDDDDD", "BDDDDDDDDDDDD", "BDDDDDDDDDD", "BBBDDDDDDDDDD", "DDDDDDDDDDDD", "CDDDDDDDDDDDD", "DDDDDDDDDDD", "CCDDDDDDDDDD", "ACDDDDDDDDDD", "CCDDDDDDDDDDD", "CDDDDDDDDDD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1126424336423843338;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int k = 30;
    vector<string> before = {"ADDDDDDDDDDD", "ADDDDDDDDDDD", "ADDDDDDDDDDD", "BDDDDDDDDDDD", "BDDDDDDDDDDD", "CDDDDDDDDDDD", "AADDDDDDDDDDD", "AADDDDDDDDDDD", "AADDDDDDDDDDD", "AADDDDDDDDDDD", "AADDDDDDDDDDD", "AADDDDDDDDDDD", "ABDDDDDDDDDDD", "ABDDDDDDDDDDD", "ABDDDDDDDDDDD", "ACDDDDDDDDDDD", "ACDDDDDDDDDDD", "BBDDDDDDDDDDD", "BBDDDDDDDDDDD", "BBDDDDDDDDDDD", "BBDDDDDDDDDDD", "BBDDDDDDDDDDD", "BCDDDDDDDDDDD", "BCDDDDDDDDDDD", "CCDDDDDDDDDDD", "CCDDDDDDDDDDD", "CCDDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AABDDDDDDDDDDD", "AABDDDDDDDDDDD", "AABDDDDDDDDDDD", "AABDDDDDDDDDDD", "AACDDDDDDDDDDD", "AACDDDDDDDDDDD", "AACDDDDDDDDDDD", "ABBDDDDDDDDDDD", "ABBDDDDDDDDDDD", "ABBDDDDDDDDDDD", "A", "BBBBBBBBBBB", "CCCCCCCCCCC"};
    vector<string> after = {"BDDDDDDDDDDD", "CDDDDDDDDDDD", "DDDDDDDDDDDD", "CDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "BBDDDDDDDDDDD", "BCDDDDDDDDDDD", "BDDDDDDDDDDDD", "CCDDDDDDDDDDD", "CDDDDDDDDDDDD", "DDDDDDDDDDDDD", "CCDDDDDDDDDDD", "CDDDDDDDDDDDD", "DDDDDDDDDDDDD", "BDDDDDDDDDDDD", "DDDDDDDDDDDDD", "ACDDDDDDDDDDD", "ADDDDDDDDDDDD", "CCDDDDDDDDDDD", "CDDDDDDDDDDDD", "DDDDDDDDDDDDD", "ADDDDDDDDDDDD", "DDDDDDDDDDDDD", "ADDDDDDDDDDDD", "BDDDDDDDDDDDD", "DDDDDDDDDDDDD", "BBBDDDDDDDDDDD", "BBCDDDDDDDDDDD", "BBDDDDDDDDDDDD", "BCCDDDDDDDDDDD", "BCDDDDDDDDDDDD", "BDDDDDDDDDDDDD", "CCCDDDDDDDDDDD", "CCDDDDDDDDDDDD", "CDDDDDDDDDDDDD", "DDDDDDDDDDDDDD", "CCCDDDDDDDDDDD", "CCDDDDDDDDDDDD", "CDDDDDDDDDDDDD", "DDDDDDDDDDDDDD", "BBDDDDDDDDDDDD", "BDDDDDDDDDDDDD", "DDDDDDDDDDDDDD", "CCCDDDDDDDDDDD", "CCDDDDDDDDDDDD", "CDDDDDDDDDDDDD", "B", "CAAAAAAAAAA", "DAAAAAAAAAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1010862704111587067;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int k = 30;
    vector<string> before = {"CCCCCCCCCCC", "BBBBBBBBBBB", "A", "ABBDDDDDDDDDDD", "ABBDDDDDDDDDDD", "ABBDDDDDDDDDDD", "AACDDDDDDDDDDD", "AACDDDDDDDDDDD", "AACDDDDDDDDDDD", "AABDDDDDDDDDDD", "AABDDDDDDDDDDD", "AABDDDDDDDDDDD", "AABDDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "CCDDDDDDDDDDD", "CCDDDDDDDDDDD", "CCDDDDDDDDDDD", "BCDDDDDDDDDDD", "BCDDDDDDDDDDD", "BBDDDDDDDDDDD", "BBDDDDDDDDDDD", "BBDDDDDDDDDDD", "BBDDDDDDDDDDD", "BBDDDDDDDDDDD", "ACDDDDDDDDDDD", "ACDDDDDDDDDDD", "ABDDDDDDDDDDD", "ABDDDDDDDDDDD", "ABDDDDDDDDDDD", "AADDDDDDDDDDD", "AADDDDDDDDDDD", "AADDDDDDDDDDD", "AADDDDDDDDDDD", "AADDDDDDDDDDD", "AADDDDDDDDDDD", "CDDDDDDDDDDD", "BDDDDDDDDDDD", "BDDDDDDDDDDD", "ADDDDDDDDDDD", "ADDDDDDDDDDD", "ADDDDDDDDDDD"};
    vector<string> after = {"DAAAAAAAAAA", "CAAAAAAAAAA", "B", "CDDDDDDDDDDDDD", "CCDDDDDDDDDDDD", "CCCDDDDDDDDDDD", "DDDDDDDDDDDDDD", "BDDDDDDDDDDDDD", "BBDDDDDDDDDDDD", "DDDDDDDDDDDDDD", "CDDDDDDDDDDDDD", "CCDDDDDDDDDDDD", "CCCDDDDDDDDDDD", "DDDDDDDDDDDDDD", "CDDDDDDDDDDDDD", "CCDDDDDDDDDDDD", "CCCDDDDDDDDDDD", "BDDDDDDDDDDDDD", "BCDDDDDDDDDDDD", "BCCDDDDDDDDDDD", "BBDDDDDDDDDDDD", "BBCDDDDDDDDDDD", "BBBDDDDDDDDDDD", "DDDDDDDDDDDDD", "BDDDDDDDDDDDD", "ADDDDDDDDDDDD", "DDDDDDDDDDDDD", "ADDDDDDDDDDDD", "DDDDDDDDDDDDD", "CDDDDDDDDDDDD", "CCDDDDDDDDDDD", "ADDDDDDDDDDDD", "ACDDDDDDDDDDD", "DDDDDDDDDDDDD", "BDDDDDDDDDDDD", "DDDDDDDDDDDDD", "CDDDDDDDDDDDD", "CCDDDDDDDDDDD", "DDDDDDDDDDDDD", "CDDDDDDDDDDDD", "CCDDDDDDDDDDD", "BDDDDDDDDDDDD", "BCDDDDDDDDDDD", "BBDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "CDDDDDDDDDDD", "DDDDDDDDDDDD", "CDDDDDDDDDDD", "BDDDDDDDDDDD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1010862704111587067;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int k = 30;
    vector<string> before = {"AABDDDDDDDDDDD", "AAADDDDDDDDDDD", "AADDDDDDDDDDD", "AADDDDDDDDDDD", "AABDDDDDDDDDDD", "AAADDDDDDDDDDD", "AADDDDDDDDDDD", "A", "AACDDDDDDDDDDD", "BBDDDDDDDDDDD", "ADDDDDDDDDDD", "AABDDDDDDDDDDD", "ABBDDDDDDDDDDD", "CCCCCCCCCCC", "AAADDDDDDDDDDD", "ABDDDDDDDDDDD", "CCDDDDDDDDDDD", "BBBBBBBBBBB", "AADDDDDDDDDDD", "ACDDDDDDDDDDD", "CDDDDDDDDDDD", "BBDDDDDDDDDDD", "CCDDDDDDDDDDD", "ABBDDDDDDDDDDD", "BBDDDDDDDDDDD", "AACDDDDDDDDDDD", "AAADDDDDDDDDDD", "BCDDDDDDDDDDD", "AAADDDDDDDDDDD", "AAADDDDDDDDDDD", "ADDDDDDDDDDD", "BBDDDDDDDDDDD", "AADDDDDDDDDDD", "AAADDDDDDDDDDD", "BBDDDDDDDDDDD", "ADDDDDDDDDDD", "AABDDDDDDDDDDD", "ABBDDDDDDDDDDD", "AACDDDDDDDDDDD", "BDDDDDDDDDDD", "BCDDDDDDDDDDD", "AAADDDDDDDDDDD", "AADDDDDDDDDDD", "CCDDDDDDDDDDD", "AAADDDDDDDDDDD", "ABDDDDDDDDDDD", "ABDDDDDDDDDDD", "AAADDDDDDDDDDD", "ACDDDDDDDDDDD", "BDDDDDDDDDDD"};
    vector<string> after = {"CCDDDDDDDDDDDD", "BCCDDDDDDDDDDD", "CDDDDDDDDDDDD", "BBDDDDDDDDDDD", "DDDDDDDDDDDDDD", "CCDDDDDDDDDDDD", "BDDDDDDDDDDDD", "B", "BBDDDDDDDDDDDD", "CCDDDDDDDDDDD", "CDDDDDDDDDDD", "CCCDDDDDDDDDDD", "CCDDDDDDDDDDDD", "DAAAAAAAAAA", "BBCDDDDDDDDDDD", "CCDDDDDDDDDDD", "ADDDDDDDDDDDD", "CAAAAAAAAAA", "CCDDDDDDDDDDD", "DDDDDDDDDDDDD", "DDDDDDDDDDDD", "ADDDDDDDDDDDD", "BDDDDDDDDDDDD", "CCCDDDDDDDDDDD", "CDDDDDDDDDDDD", "BDDDDDDDDDDDDD", "BDDDDDDDDDDDDD", "ADDDDDDDDDDDD", "CDDDDDDDDDDDDD", "BBDDDDDDDDDDDD", "BDDDDDDDDDDD", "DDDDDDDDDDDDD", "BCDDDDDDDDDDD", "CCCDDDDDDDDDDD", "ACDDDDDDDDDDD", "DDDDDDDDDDDD", "CDDDDDDDDDDDDD", "CDDDDDDDDDDDDD", "DDDDDDDDDDDDDD", "CDDDDDDDDDDD", "DDDDDDDDDDDDD", "DDDDDDDDDDDDDD", "DDDDDDDDDDDDD", "DDDDDDDDDDDDD", "BBBDDDDDDDDDDD", "DDDDDDDDDDDDD", "CDDDDDDDDDDDD", "BCDDDDDDDDDDDD", "BDDDDDDDDDDDD", "DDDDDDDDDDDD"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1010862704111587067;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int k = 6;
    vector<string> before = {"AABBC", "AAAADA", "AAACA", "CABAA", "AAAAAA", "BAAAA"};
    vector<string> after = {"AACCB", "DAAABC", "AAAAD", "ABCBA", "AABAAA", "AACAA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 499;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int k = 30;
    vector<string> before = {"AAA", "AAA", "AAA", "AAB", "AAC", "AAD", "AAAA", "AAAAA"};
    vector<string> after = {"AAB", "AAC", "AAD", "AAA", "AAA", "AAA", "AAAB", "AAAAC"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1150656702153805837;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int k = 30;
    vector<string> before = {"CCDBCACDCADBCABCBDC", "BDCBACADCDBAA", "DABBAAA", "DBCCADBDCDBB", "BBCCCABDCDDDCDBCDCBDCDBBAA", "CBDDCDAD", "DADDADDADCDADDBDCBACCBBBBCDCBC", "ABACBBBACDCBCBACBCAABCBDAB", "ADACDDBDC", "BACDBBBADBDCADBACA", "CDBC", "CBAD", "CDBBAB", "DDDDADCACBCB", "BCCCCAD", "CBCDBABABBBDCDCADCBADDBDBD", "CDDADCDCCBCBBDA", "DDBCCCDBACBCABAABACB", "CADAD", "BCB", "DCDDDDCBBC", "ADB", "CBACDCBCDBDABABCCAD", "ABBDDABDAABBBADC", "BABD", "C", "BCCCCCCBABACBADBACCCAD", "ABBABBCABCCABADCDBDDCDABADD", "BBDBDADBACDADCBADCBDCAD", "CBBAAACCBA", "ACCDDADBCBDACCBCADAACCBADAAADA", "BCCBDADBBCDB", "CCBBDCCDDBBACDDD", "DAACCDDDBDDAAABCCBCB", "A", "CCDBDCBDADCBBBBCBDCBDBC", "BABACCDDCBBDBBADDCBCBAA", "CDBDDCABBBBADADDCADDACAC", "CCCCBDDBADCDDAB", "BADBAADBBBCCAABBDBDBBACB", "DDDC", "CBCCCCDDADDAABDACCDDBCCB", "ACBA", "CDADCDCCBDBCAA", "DBBCAADBABBBDDBDDBACA", "DCBCBDBADD", "AACBDACADBCDD", "BABBAADABCDBBBCAA", "BCDADABABDACDABC", "DCCBDAADBBCBBCBDA"};
    vector<string> after = {"CCDBBACBCDDBBCAABCA", "DDDDABCBADBBD", "DDACDCA", "DBDBADDDACDD", "CCDCCBCABBCDCDCACADBDBDBCD", "CACDABDC", "DDCCBCDACDCDCCACDDABCCDACCBBDB", "CDDDBCCDADBDCADCCCADADABAA", "CCACCBBCA", "ADDABCCBDADDABBBCC", "CDBD", "CDBD", "BDCCBD", "AADCCACDBCDB", "BDAACBD", "CBADDDDCBCBDABACBADAADABCD", "CADCBDCAACADBCD", "CDBBABCBDADBCDDACBBC", "BCBCB", "CBA", "DBADCABACB", "BCB", "AABDBAADBCDABDBBDAD", "AACBBCCCBABCDBAA", "DBAA", "D", "CCADAAACCDDCADCABCCCBA", "DCCADDADBBCBCBADABACADBCDDA", "DCDCDBBCDAACDCCDABBDDCD", "DDCDACCABD", "DDBBBBACABDACAABCDACCBBCDADADB", "ADABBBBDBADD", "ADBBBDAACDACBCCA", "CAACCBCBDADBBACBBCBB", "C", "DACBCABDDBAABCBACBABCAA", "ADCDDBACDBBACAACACDCDDB", "CADBAACADDABAACCCBBDAADD", "ACBDBCDBBCDADAA", "ABBAACBBABAACACBCDADDBDA", "DDCA", "ABCDCABDCADBDDADACABDCBB", "DCCC", "CBBCBBABDDCBDD", "CAACDBADCCBACDCBDAADD", "ABBACAAABA", "ADBCDDDCBDCAA", "DDDBACCDCBCBCCBBC", "BDCCCDCCBABDDCCB", "AABDDCCACDDBCCDCA"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921502614467335;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int k = 1;
    vector<string> before = {"A", "B", "A", "A", "A"};
    vector<string> after = {"B", "A", "A", "A", "A"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int k = 29;
    vector<string> before = {"ABCDABCDACBDACBD"};
    vector<string> after = {"DBCADDDCCCCBABBB"};
    ImpossibleGame* pObj = new ImpossibleGame();
    clock_t start = clock();
    long result = pObj->getMinimum(k, before, after);
    clock_t end = clock();
    delete pObj;
    long expected = 5055200168835960;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22777271&rd=14428&pm=11326
********************************************************************************
#include <algorithm> 
#include <vector> 
#include <string> 
#include <map> 
using namespace std; 
class Node{ 
public: 
  int a, b, c, d; 
  Node(){ 
  } 
  Node(int _a,int _b,int _c,int _d){ 
    a=_a;b=_b;c=_c;d=_d; 
  } 
  const bool operator < (const Node &t) const{ 
    if(a != t.a) return a< t.a; 
    if(b != t.b) return b< t.b; 
    if(c != t.c) return c< t.c; 
    return d< t.d; 
  } 
}; 
 
class ImpossibleGame{ 
public: 
  long long num[31][31][31][31]; 
  bool Check[10000]; 
  int Res[10000], Cc[10000], head; 
  long long cnum[10000], cmax[10000]; 
  int cdeg[10000], cQ[10000], chead; 
  vector< vector<int> > List1, List2; 
  vector< vector<int> > cList; 
  void dfs(int x){ 
    Check[x] = true; 
    int i; 
    for(i=0;i<List1[x].size();i++){ 
      if(!Check[ List1[x][i] ])  dfs(List1[x][i]); 
    } 
    Res[head++] = x; 
  } 
  void dfs2(int x, int c){ 
    Check[x] = true; 
    Cc[x] = c; 
    int i; 
    for(i=0;i<List2[x].size();i++){ 
      if(!Check[ List2[x][i] ])  dfs2(List2[x][i], c); 
    } 
  } 
  long long getMinimum(int K, vector <string> Bef, vector <string> Aft){ 
    int i, j, k, l, N; 
    int a, b, c, d; 
    N = Bef.size(); 
    vector<Node> node; 
    vector<Node> Es, Ee; 
    map<Node, int> ping; 
    for(i=0;i<=K;i++) for(j=0;j<=K;j++) for(k=0;k<=K;k++) for(l=0;l<=K;l++){ 
      if(i==0 && j==0 && k==0 && l==0) num[i][j][k][l] = 1; 
      else{ 
        if(i > 0) num[i][j][k][l] = num[i-1][j][k][l] * (i+j+k+l) / i; 
        else if(j > 0) num[i][j][k][l] = num[i][j-1][k][l] * (i+j+k+l) / j; 
        else if(k > 0) num[i][j][k][l] = num[i][j][k-1][l] * (i+j+k+l) / k; 
        else if(l > 0) num[i][j][k][l] = num[i][j][k][l-1] * (i+j+k+l) / l; 
      } 
      if(i+j+k+l == K){ 
        node.push_back( Node(i,j,k,l) ); 
      } 
    } 
    for(i=0;i<node.size();i++){ 
      ping[ node[i] ] = i; 
    } 
    for(i=0;i<N;i++){ 
      a= b=c=d=0; 
      for(j=0;j<Bef[i].length();j++){ 
        if(Bef[i][j] == 'A') a++; 
        if(Bef[i][j] == 'B') b++; 
        if(Bef[i][j] == 'C') c++; 
        if(Bef[i][j] == 'D') d++; 
      } 
      Es.push_back( Node(a,b,c,d) ); 
      a= b=c=d=0; 
      for(j=0;j<Aft[i].length();j++){ 
        if(Aft[i][j] == 'A') a++; 
        if(Aft[i][j] == 'B') b++; 
        if(Aft[i][j] == 'C') c++; 
        if(Aft[i][j] == 'D') d++; 
      } 
      Ee.push_back( Node(a,b,c,d) ); 
    } 
    List1 = vector< vector<int> >(node.size(), vector<int>()); 
    List2 = vector< vector<int> >(node.size(), vector<int>()); 
     
    for(i=0;i<node.size();i++){ 
      for(j=0;j<N;j++){ 
        if(node[i].a >= Es[j].a && node[i].b >= Es[j].b && node[i].c >= Es[j].c && node[i].d >= Es[j].d){ 
          a = node[i].a - Es[j].a + Ee[j].a; 
          b = node[i].b - Es[j].b + Ee[j].b; 
          c = node[i].c - Es[j].c + Ee[j].c; 
          d = node[i].d - Es[j].d + Ee[j].d; 
          List1[i].push_back( ping[ Node(a,b,c,d) ] ); 
          List2[ ping[ Node(a,b,c,d) ] ].push_back( i ); 
//          printf("%d %d %d %d => %d %d %d %d\n",node[i].a,node[i].b,node[i].c,node[i].d, a,b,c,d); 
        } 
      } 
    } 
    for(i=0;i<node.size();i++) Check[i] = false; 
    head = 0; 
    for(i=0;i<node.size();i++){ 
      if(!Check[i]) dfs(i); 
    } 
    for(i=0;i<node.size();i++) Check[i] = false; 
    int color = 0; 
    for(i=head-1;i>=0;i--){ 
      if(!Check[ Res[i] ]){ 
        dfs2( Res[i], color ); 
        color ++; 
      } 
    } 
    cList = vector< vector<int> >(color, vector<int>()); 
    for(i=0;i<color;i++){ 
      cdeg[i] = cnum[i] = cmax[i] = 0; 
    } 
    for(i=0;i<node.size();i++){ 
      cnum[ Cc[i] ] += num[node[i].a][node[i].b][node[i].c][node[i].d]; 
      for(j=0;j<List1[i].size();j++){ 
        int x = Cc[i], y = Cc[List1[i][j]]; 
        if(x == y) continue; 
        cList[x].push_back(y); cdeg[y] ++; 
      } 
    } 
    chead = 0; 
    for(i=0;i<color;i++){ 
      if(cdeg[i] == 0)    cQ[chead ++] = i; 
    } 
    long long sol = 0; 
    for(i=0;i<chead;i++){ 
      int x = cQ[i], y; 
      long long tr; 
      tr = cmax[x] + cnum[x]; 
      sol = max(sol, tr); 
      for(j=0;j<cList[x].size();j++){ 
        y = cList[x][j]; 
        cmax[y] = max(cmax[y], tr); 
        cdeg[y] --; 
        if(cdeg[y] == 0)  cQ[chead ++] = y; 
      } 
    } 
    return sol; 
  } 
};

********************************************************************************
*******************************************************************************/