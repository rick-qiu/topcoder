/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6482
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

class CheapestIsland {
public:
    int minCost(vector<string> cells);
};

int CheapestIsland::minCost(vector<string> cells) {
    int ret;
    return ret;
}


int test0() {
    vector<string> cells = {"-10 1", "2 -10"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -19;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> cells = {"1 2 3", "4 5 6", "7 8 9"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
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
    vector<string> cells = {"-5 100 -5", "-5 100 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -10;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> cells = {"1 -1 1 -1 1 -1 1 -1 1", "-1 1 -1 1 -1 1 -1 1 -1", "1 -1 1 -1 1 -1 1 -1 1", "-1 1 -1 1 -1 1 -1 1 -1", "1 -1 1 -1 1 -1 1 -1 1", "-1 1 -1 1 -1 1 -1 1 -1", "1 -1 1 -1 1 -1 1 -1 1", "-1 1 -1 1 -1 1 -1 1 -1", "1 -1 1 -1 1 -1 1 -1 1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -26;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> cells = {"-1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> cells = {"-1 -1 -1 3 -1", "-1 2 -1 3 -1", "-1 2 -1 3 -1", "-1 1 -1 2 -1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -11;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> cells = {"0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
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
    vector<string> cells = {"1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
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
    vector<string> cells = {"0"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
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
    vector<string> cells = {"-5 -5 -5 -5 -5 -5 -5 -5 -5", "-5 99 99 99 99 99 99 99 -5", "-5 99 -5 -5 -5 -5 -5 99 -5", "-5 99 -5 99 99 99 -5 99 -5", "-5 99 -5 99 -5 99 -5 99 -5", "-5 99 -5 99 -5 99 -5 99 -5", "-5 99 -5 99 -5 -5 -5 99 -5", "-5 99 -5 99 99 99 99 99 -5", "-5 99 -5 -5 -5 -5 -5 -5 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -245;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> cells = {"-5 2 -5 2 -5 2 -5 2 -5", "2 99 99 99 99 99 99 99 2", "-5 99 -5 2 -5 2 -5 99 -5", "2 99 2 99 99 99 2 99 2", "-5 99 -5 99 -5 2 -5 99 -5", "2 99 2 99 99 99 99 99 2", "-5 99 -5 2 -5 2 -5 2 -5", "2 99 99 99 99 99 99 99 99", "-5 2 -5 2 -5 2 -5 2 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -77;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> cells = {"-25 15 -5 2 -5 2 -5 10 -5", "15 10 10 10 10 10 2 10 2", "-5 10 -5 2 -5 10 -5 10 -5", "2 10 2 10 2 10 2 10 2", "-5 10 -5 10 -5 10 -5 10 -5", "2 10 2 10 10 10 2 10 2", "-5 10 -5 2 -5 2 -5 10 -5", "15 10 10 10 10 10 10 10 2", "-25 15 -5 2 -5 2 -5 2 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -75;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> cells = {"-22 9 -5 2 -5 2 -5 15 -5", "9 10 15 10 15 10 2 10 2", "-5 15 -5 2 -5 15 -5 15 -5", "2 10 2 10 2 10 2 10 2", "-5 15 -5 15 -5 15 -5 15 -5", "2 10 2 10 15 10 2 10 2", "-5 15 -5 2 -5 2 -5 15 -5", "9 10 15 10 15 10 15 10 2", "-22 9 -5 2 -5 2 -5 2 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -83;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> cells = {"-5 2 -5 2 -5 2 -5 2 -5", "15 10 15 10 15 10 15 10 2", "-5 2 -5 2 -5 9 -22 15 -5", "2 10 15 10 15 10 9 10 2", "-5 15 -5 2 -5 15 -5 15 -5", "2 10 9 10 15 10 9 10 2", "-5 15 -22 9 -5 9 -22 15 -5", "9 10 15 10 15 10 15 10 9", "-22 9 -5 2 -5 2 -5 9 -22"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -96;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> cells = {"-5 2 -5 2 -5 2 -5 2 -5", "15 10 15 10 15 10 15 10 2", "-5 2 -5 2 -5 9 -22 15 -5", "2 10 15 10 15 10 9 10 2", "-5 15 -5 2 -10 15 -10 15 -5", "2 10 9 10 15 10 9 10 2", "-5 15 -22 9 -10 9 -22 15 -5", "9 10 15 10 15 10 15 10 9", "-22 9 -5 2 -5 2 -5 9 -22"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -107;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> cells = {"-1 -1 -1 -1 -1 -1 -1 99 -1", "-1 99 99 99 99 99 -1 99 -1", "-1 99 -1 -1 -1 99 -1 99 -1", "-1 99 -1 99 99 99 -1 99 -1", "-1 99 -1 99 99 99 -1 99 -1", "-1 99 -1 99 -1 99 -1 99 -1", "-1 99 -1 99 -1 -1 -1 99 -1", "-1 99 -1 99 99 99 99 99 -1", "-1 99 -1 -1 -1 -1 -1 -1 -1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -24;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> cells = {"-1 -1 -1 -1 -1 -1 -1 -1 -1", "99 99 99 99 99 99 99 99 -1", "-1 -1 -1 -1 -1 -1 -1 99 -1", "-1 99 99 99 99 99 -1 99 -1", "-1 99 -1 99 99 -1 -1 99 -1", "-1 99 -1 99 99 99 99 99 -1", "-1 99 -1 -1 -1 -1 -1 -1 -1", "-1 99 99 99 99 99 99 99 99", "-1 -1 -1 -1 -1 -1 -1 -1 -1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -24;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> cells = {"-2 1 -2 1 -2 1 -2 1 -2", "1 -2 1 -2 1 -2 1 -2 1", "-2 1 -2 1 -2 1 -2 1 -2", "1 -2 1 -2 1 -2 1 -2 1", "99 99 99 99 99 99 99 99 99", "-1 -1 -1 -1 -1 -1 -1 -1 -1", "99 99 99 99 99 99 99 99 99", "-1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -29;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> cells = {"-1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1", "99 99 99 99 99 99 99 99 99", "-1 -1 -1 -1 -1 -1 -1 -1 -1", "99 99 99 99 99 99 99 99 99", "1 -2 1 -2 1 -2 1 -2 1", "-2 1 -2 1 -2 1 -2 1 -2", "1 -2 1 -2 1 -2 1 -2 1", "-2 1 -2 1 -2 1 -2 1 -2"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -29;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> cells = {"5 1 1 1 1 1 1 1 5", "1 99 99 99 1 99 99 99 1", "1 99 99 99 -19 99 99 99 1", "1 99 99 99 3 99 99 99 1", "1 1 -19 3 20 3 -19 1 1", "1 99 99 99 3 99 99 99 1", "1 99 99 99 -19 99 99 99 1", "1 99 99 99 1 99 99 99 1", "5 1 1 1 1 1 1 1 5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -44;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> cells = {"5 1 1 1 1 1 1 1 5", "1 99 99 99 1 99 99 99 1", "1 99 99 99 -19 99 99 99 1", "1 99 99 99 3 99 99 99 1", "1 1 -19 3 41 3 -19 1 1", "1 99 99 99 3 99 99 99 1", "1 99 99 99 -19 99 99 99 1", "1 99 99 99 1 99 99 99 1", "5 1 1 1 1 1 1 1 5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -35;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> cells = {"-1000 1 1 1 1 1 1 1 -1000", "1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1", "-1000 1 1 1 1 1 1 1 -1000"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -3979;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> cells = {"1 1 1 -1000 1 -1000 1 1 1", "1 1 1 1 1 1 1 1 1", "-1000 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 -1000", "-1000 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 -1000", "1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1", "1 1 1 1 1 -1000 1 -1000 1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -7984;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> cells = {"9 2 1 9 6 7 5 3 8", "7 0 0 8 6 0 8 8 4", "4 6 8 -990 8 9 2 5 9", "8 1 4 8 8 5 8 7 4", "1 1 2 9 1 6 7 7 2", "7 1 7 8 3 6 7 3 5", "4 8 8 7 9 7 -958 5 1", "2 5 0 9 5 7 5 9 4", "4 6 1 3 8 4 3 5 9"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -1915;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> cells = {"5 5 6 9 3 8 4 7 4", "8 9 9 -966 4 8 2 1 5", "8 0 9 2 5 7 8 9 6", "8 9 7 4 4 2 9 1 1", "0 8 3 1 6 7 2 3 1", "9 2 6 5 7 0 4 3 6", "2 6 4 7 7 2 2 2 3", "4 0 5 0 5 8 1 4 -910", "3 0 2 3 8 3 6 4 0"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -1848;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> cells = {"3 1 9 3 8 7 9 6", "0 8 2 6 7 6 5 3", "8 4 3 2 2 9 2 -990", "4 3 1 9 8 5 6 -984", "5 3 6 9 -922 6 4 5", "3 4 1 4 0 6 4 2", "3 5 4 7 9 1 0 1", "4 9 7 8 0 0 3 5", "2 0 3 1 9 7 0 4"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -2881;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> cells = {"-939 2 8 0 7 3 0 -921", "6 6 0 0 3 7 2 9", "1 2 8 1 9 6 3 9", "-992 8 3 3 1 5 3 3", "0 1 0 4 8 9 0 3", "2 8 8 6 8 6 8 7", "8 6 0 2 4 2 4 4", "2 0 5 2 5 0 7 4", "0 3 0 5 6 5 7 7"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -2831;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> cells = {"2 9 2 -906 0 5 2 8 6", "2 4 8 -986 3 6 0 5 9", "-973 4 0 0 4 3 7 2 8", "9 6 8 2 2 5 2 9 7", "9 4 7 7 3 1 1 2 1", "6 0 1 8 8 9 8 1 4", "8 1 2 9 5 3 5 5 5", "0 1 3 8 4 1 3 0 6", "0 0 4 7 3 6 -928 0 3"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -3772;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> cells = {"9 0 8 1 2 5 6 8 3", "2 5 3 1 5 1 9 2 1", "7 4 8 1 9 9 5 9 0", "6 2 8 3 2 3 4 1 8", "2 2 5 -965 8 5 8 7 3", "1 0 3 8 4 6 8 2 7", "6 -987 2 6 2 3 1 9 6", "4 1 0 8 0 -997 9 8 5", "-925 2 8 1 3 6 2 7 5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -3856;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> cells = {"-958 2 0 4 2 8 0 3 6", "9 6 2 0 4 9 0 1 5", "2 1 0 -1000 4 3 4 0 8", "8 5 4 7 9 3 -945 8 2", "7 5 9 4 -948 8 4 8 6", "5 8 7 3 3 1 -974 8 6"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -4803;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> cells = {"1 5 4 7 0 -960 3 3", "5 5 6 6 4 1 8 0", "9 4 1 3 7 3 5 9", "1 0 2 9 -964 3 5 5", "-1000 1 4 -938 7 8 8 4", "-900 3 3 -944 9 8 3 -988", "7 0 8 3 3 6 0 0", "5 1 1 4 9 7 2 9"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -6663;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> cells = {"0 5 5 1 0 5 1 7 -913", "8 5 6 9 9 2 -936 0 5", "7 7 1 3 0 6 7 0 4", "6 3 9 4 0 0 4 6 4", "2 7 -912 3 1 9 4 9 8", "1 5 9 -974 8 -949 -972 7 -919", "-984 1 2 6 0 4 7 5 4", "0 8 3 4 8 4 6 4 5", "4 -986 0 3 7 9 2 -975 0"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -9471;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> cells = {"-953 2 1 -982 0 -929 -964", "4 -921 -951 -999 7 0 3", "1 9 9 1 3 -998 -981", "6 5 3 4 0 -976 6", "2 0 -944 2 3 9 5", "2 5 -915 -962 0 -933 1", "0 2 4 7 5 -942 7", "1 2 6 -971 7 -959 9", "7 5 8 -981 -934 -963 8"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -19153;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> cells = {"3 6 -927 4 9 -969 5 2 5", "-900 -957 1 8 0 -952 9 -956 0", "7 -914 -925 -976 -927 9 -915 -948 1", "-979 1 3 3 2 -984 3 9 5", "0 7 2 0 -952 -905 4 8 6", "-915 -964 -976 8 4 -929 8 -917 -993", "-921 3 9 -926 -925 -989 7 5 1", "6 -940 0 9 4 5 7 4 4", "-957 1 2 0 3 4 -949 -972 7"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -28332;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> cells = {"8 -916 8 -929 5 -925 -994 0 9", "2 -974 4 2 -908 -901 8 -935 -956", "3 -970 -903 -994 -993 -976 9 9 -974", "-933 5 -972 -907 7 9 -928 1 8", "-995 9 -929 -998 -913 2 -997 -907 -943", "4 1 3 -942 9 9 9 -902 8", "-903 -964 -947 -974 2 5 -945 -948 -911", "6 2 1 0 -970 1 0 -956 2", "1 -967 8 -968 5 -945 4 9 3"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -37904;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> cells = {"-975 -957 7 4 -983 5 2 -909 3", "0 -927 -953 -972 6 -910 -989 2 -966", "-982 -908 -919 -954 -979 -962 -944 9 -924", "-912 4 -906 -983 -990 8 -962 2 9", "-949 -929 -977 -953 8 -933 3 7 2", "7 -997 -967 -977 -986 3 -920 2 -982", "-960 -990 -900 -915 2 -909 1 0 -959", "-958 -953 0 -902 -978 9 9 -915 -969", "-964 6 -956 -984 4 -990 0 1 6"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -47627;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> cells = {"-1000 -1000 -1000 -1000 -1000 -1000 -1000 -1000", "-1000 -1000 -1000 -1000 -1000 -1000 -1000 -1000", "-1000 -1000 -1000 -1000 -1000 -1000 -1000 -1000", "-1000 -1000 -1000 -1000 -1000 -1000 -1000 -1000", "-1000 -1000 -1000 -1000 -1000 -1000 -1000 -1000", "-1000 -1000 -1000 -1000 -1000 -1000 -1000 -1000", "-1000 -1000 -1000 -1000 -1000 -1000 -1000 -1000", "-1000 -1000 -1000 -1000 -1000 -1000 -1000 -1000", "-1000 -1000 -1000 -1000 -1000 -1000 -1000 -1000"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -72000;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> cells = {"1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> cells = {"1 3 9 4 9 6 5 3 3", "8 8 -37 3 6 2 4 6 2", "5 3 6 3 8 3 5 9 2", "4 3 2 3 9 5 6 3 1", "4 4 7 1 4 4 8 8 3", "7 6 2 2 3 1 6 6 2", "1 2 1 6 7 2 1 8 4", "-40 3 5 6 7 4 9 1 1", "4 6 5 2 7 2 3 1 6"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -59;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> cells = {"5 1 4 7 4 1 1 1 7", "9 3 7 6 4 4 5 1 6", "2 5 3 5 7 3 7 3 1", "7 1 4 9 3 9 2 4 2", "9 3 9 6 4 6 4 7 2", "5 1 1 5 1 4 2 2 5", "9 1 6 1 5 7 1 3 3", "7 7 -34 6 5 9 2 7 -40", "1 9 7 6 5 6 2 4 5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -48;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> cells = {"8 7 9 -18 7 9 9 5 6", "5 9 6 8 -22 7 8 5 8", "9 7 7 9 -19 6 6 6 5", "6 8 8 6 -24 5 5 8 8", "6 7 7 8 8 9 5 6 7", "8 7 7 6 5 5 9 9 7", "8 9 5 5 5 6 7 5 8", "8 8 9 9 7 7 5 6 6", "6 8 6 9 7 -24 7 7 7"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -76;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> cells = {"8 5 5 6 6 6 8 5 6", "9 9 9 6 5 5 7 8 5", "8 9 6 -17 9 5 5 8 8", "8 9 6 5 9 6 9 8 7", "9 -22 5 7 8 7 9 7 8", "6 9 9 9 7 9 7 7 6", "8 -16 5 9 5 7 5 8 9", "5 8 8 7 8 9 6 9 7", "7 5 9 6 8 7 7 5 9"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -30;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> cells = {"5 9 7 7 9 9 5 9 9", "8 6 9 6 5 7 8 6 9", "5 -17 7 9 6 6 9 8 6", "8 9 5 8 9 7 9 5 7", "8 5 8 -18 5 9 5 8 6", "9 -22 5 6 8 6 7 7 5", "7 6 5 8 9 9 7 7 6", "7 7 7 5 6 6 6 5 7", "8 9 7 7 9 8 7 5 5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -35;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> cells = {"7 8 7 9 9 5 5 7 5", "6 9 8 8 5 8 6 8 8", "5 6 5 9 5 5 7 6 9", "9 9 7 -24 6 7 9 9 9", "9 -25 6 7 5 8 5 8 8", "6 9 9 5 6 7 9 7 6", "7 6 9 9 5 6 9 7 9", "7 7 6 6 8 8 9 6 7", "9 7 6 5 -22 8 8 5 7"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -36;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> cells = {"14 6 -23 20 17 17 14 17 7", "-42 15 10 7 18 15 5 5 12", "14 18 7 18 15 18 17 20 -40", "15 20 13 14 5 17 13 17 16", "19 18 11 7 14 8 19 18 -20", "11 20 9 5 18 5 7 8 15", "12 19 6 7 8 15 17 5 7", "14 14 19 19 14 13 13 20 -39", "17 13 20 20 7 20 16 16 5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -61;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> cells = {"-15 11 -15 -15 -15 19 13 20 19", "11 14 -15 -15 19 16 14 -15 16", "-15 11 11 16 12 12 15 15 18", "19 16 13 18 20 -15 -15 11 20", "18 12 17 13 11 18 11 18 10"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -83;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> cells = {"-15 15 10 10 -15", "-15 10 -15 -15 13", "-15 19 -15 14 -15", "-15 13 17 14 20", "17 -15 14 19 18", "16 16 -15 17 17", "-15 16 -15 15 11", "20 -15 -15 13 14"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -160;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> cells = {"-1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 1 1 1 1 1 1 1 -1", "-1 1 -1 -1 -1 -1 -1 1 -1", "-1 1 -1 1 1 1 -1 1 -1", "-1 1 -1 1 -1 1 -1 1 -1", "-1 1 -1 1 1 1 -1 1 -1", "-1 1 -1 -1 -1 -1 -1 1 -1", "-1 1 1 1 1 1 1 1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -47;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> cells = {"-5 2 -5 2 -5 2 -5 2 -5", "-1 4 9 9 9 9 9 5 2", "-5 9 -1 -1 -1 -1 -1 9 -5", "2 9 -1 9 9 9 -1 9 2", "-5 9 -1 8 -15 9 -1 7 -5", "2 9 -1 9 9 9 -1 9 2", "-5 9 -1 -1 -1 -1 -1 9 -5", "2 3 9 9 9 9 9 6 2", "-5 2 -5 2 -5 2 -5 2 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -69;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> cells = {"-5 2 -5 2 -5 2 -5 2 -5", "2 5 9 9 7 9 9 6 2", "-5 9 -1 -1 -1 -1 -1 9 -5", "2 9 -1 9 9 9 -1 9 2", "-5 9 -1 9 -15 9 -1 9 -5", "2 9 -1 9 8 9 -1 9 2", "-5 9 -1 -1 -1 -1 -1 9 -5", "2 4 9 9 9 9 9 3 2", "-5 -1 -5 2 -5 2 -5 2 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -69;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> cells = {"-5 2 -5 2 -5 2 -5 2 -5", "-1 4 99 99 99 99 99 5 2", "-5 99 -1 -1 -1 -1 -1 99 -5", "2 99 -1 99 99 99 -1 99 2", "-5 99 -1 8 -15 99 -1 17 -5", "2 99 -1 99 99 99 -1 99 2", "-5 99 -1 -1 -1 -1 -1 99 -5", "2 3 99 99 99 99 99 6 2", "-5 2 -5 2 -5 2 -5 2 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -59;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> cells = {"-5 2 -5 2 -5 2 -5 2 -5", "2 5 99 99 17 99 99 6 2", "-5 99 -1 -1 -1 -1 -1 99 -5", "2 99 -1 99 99 99 -1 99 2", "-5 99 -1 99 -15 99 -1 99 -5", "2 99 -1 99 8 99 -1 99 2", "-5 99 -1 -1 -1 -1 -1 99 -5", "2 4 99 99 99 99 99 3 2", "-5 -1 -5 2 -5 2 -5 2 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -59;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> cells = {"-5 2 -5 2 -5 2 -5 2 -5", "-1 4 99 99 99 99 99 5 2", "-5 99 -1 -1 -1 -1 -1 99 -5", "2 99 -1 99 99 99 -1 99 2", "-5 99 -1 18 -15 99 -1 17 -5", "2 99 -1 99 99 99 -1 99 2", "-5 99 -1 -1 -1 -1 -1 99 -5", "2 3 99 99 99 99 99 6 2", "-5 2 -5 2 -5 2 -5 2 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -53;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> cells = {"-5 2 -5 2 -5 2 -5 2 -5", "2 5 99 99 17 99 99 6 2", "-5 99 -1 -1 -1 -1 -1 99 -5", "2 99 -1 99 99 99 -1 99 2", "-5 99 -1 99 -15 99 -1 99 -5", "2 99 -1 99 18 99 -1 99 2", "-5 99 -1 -1 -1 -1 -1 99 -5", "2 4 99 99 99 99 99 3 2", "-5 -1 -5 2 -5 2 -5 2 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -53;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> cells = {"-1 -1 -1 1 -1 -1 -1 1 -1", "-1 1 -1 1 -1 1 -1 1 -1", "-1 1 -1 1 -1 1 -1 1 -1", "-1 1 -1 1 -1 1 -1 1 -1", "-1 1 -1 1 -1 1 -1 1 -1", "-1 1 -1 1 -1 1 -1 1 -1", "-1 1 -1 1 -1 1 -1 1 -1", "-1 1 -1 1 -1 1 -1 1 -1", "-1 1 -1 -1 -1 1 -1 -1 -1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -49;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> cells = {"-1 -1 -1 -1 -1 -1 -1 -1 -1", "1 1 1 1 1 1 1 1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 1 1 1 1 1 1 1 1", "-1 -1 -1 -1 -1 -1 -1 -1 -1", "1 1 1 1 1 1 1 1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 1 1 1 1 1 1 1 1", "-1 -1 -1 -1 -1 -1 -1 -1 -1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -49;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> cells = {"-5 4 -5 99 -5 4 -5 99 -5", "4 99 6 99 4 99 4 99 4", "-5 99 -5 99 -5 99 -5 99 -5", "4 99 4 99 11 99 4 99 4", "-5 99 -5 99 -5 99 -5 99 -5", "4 99 4 99 4 99 6 99 4", "-5 99 -5 99 -5 99 -5 99 -5", "4 99 4 99 4 99 6 99 4", "-5 99 -5 4 -5 99 -5 4 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -16;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> cells = {"-5 4 -5 4 -5 4 -5 4 -5", "99 99 99 99 99 99 99 99 4", "-5 4 -5 4 -5 6 -5 6 -5", "4 99 99 99 99 99 99 99 99", "-5 4 -5 11 -5 4 -5 4 -5", "99 99 99 99 99 99 99 99 4", "-5 6 -5 4 -5 4 -5 4 -5", "4 99 99 99 99 99 99 99 99", "-5 4 -5 4 -5 4 -5 4 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -16;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> cells = {"0 -1 -1 0 0 2 3 4 4", "-2 4 1 5 3 2 1 1 1", "4 7 4 0 -2 -2 4 1 4", "1 -1 1 0 0 0 2 1 2", "5 -1 0 4 1 2 -1 2 -1", "4 -2 6 7 -2 -2 -1 5 3", "6 6 5 7 6 2 2 5 -1", "4 4 7 -2 6 4 7 7 -2", "-1 4 3 -2 0 0 3 1 1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -13;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> cells = {"58 -27 41 15 14 0 12 -8 5", "-23 32 -12 16 5 -9 -18 2 54", "20 30 58 -12 -18 34 4 11 72", "54 67 66 -5 10 68 58 18 -23", "36 72 57 26 69 55 -22 61 3", "40 50 -22 5 45 66 43 -12 14"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -77;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> cells = {"-163 456 687 263 379 433 610 675", "-24 500 142 -188 431 62 76 746", "270 34 573 119 36 365 486 369", "-82 -221 348 607 -229 166 525 -66", "-130 478 -139 741 729 186 -237 560", "632 651 10 -66 -189 -145 546 509", "67 60 572 462 -2 -129 459 396", "662 333 386 -142 -248 693 90 282", "256 -154 102 190 356 99 408 348"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -1282;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> cells = {"394 820 60 -237 872 -273 919 646 133", "-224 925 799 945 7 516 956 146 772", "69 287 817 469 850 -133 -207 53 -277", "935 52 103 -134 633 151 923 166 -119", "832 505 671 497 -276 832 197 794 621", "148 124 225 722 -228 455 205 251 574", "372 383 -83 -176 -117 776 206 928 -112", "925 371 809 -20 988 -152 358 910 551", "-84 776 75 919 63 -65 -289 719 807"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -933;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> cells = {"-908 162 408 48 957 -206 43 293 170", "606 -190 235 -787 -956 -45 626 -531 935", "389 -116 -375 952 476 -574 -529 -706 26", "347 990 994 956 729 -555 -737 764 -972", "-971 588 -749 985 -905 120 418 52 -731", "68 -795 -948 899 226 793 -442 280 186", "755 388 395 936 777 502 -359 -560 -749", "-72 91 529 349 -668 832 408 -796 -538", "-791 -63 -782 263 -781 -698 -735 -670 -909"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -21360;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> cells = {"-240 863 601 49 774 641 -206", "-527 -109 -232 762 915 -400 241", "908 -277 585 839 31 -532 -287", "909 152 -534 -569 138 -448 -470", "616 525 -101 647 970 373 604", "158 -589 63 -421 373 -246 502", "776 822 -588 667 662 -153 -346"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -6343;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> cells = {"327 -6 436 223 -96 913 748 -73 869", "242 570 37 314 333 666 838 223 165", "60 699 751 969 878 698 -53 932 257", "653 883 779 -61 743 700 650 -88 727"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -96;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> cells = {"726 829 935 829 248 644 357 842 830", "606 390 853 300 545 376 476 683 739", "747 102 270 503 896 440 -2 749 845", "982 -12 -37 219 774 672 1 274 529", "97 929 -46 -96 297 700 162 -68 197", "-35 913 266 968 586 972 112 259 35", "289 83 98 102 638 443 760 212 670", "-14 502 35 222 95 933 468 -79 742", "835 447 448 686 155 954 815 -4 258"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -191;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> cells = {"788 205 253 513 820 -27 620 832 -9", "-55 350 466 -89 87 133 570 376 732", "213 170 465 79 60 20 136 624 581", "767 611 842 -30 195 527 388 797 -68", "-73 -86 305 562 305 567 452 -14 418", "65 849 405 146 -93 402 659 409 810", "304 140 381 747 271 908 877 881 713", "768 722 310 66 712 183 508 502 658", "500 585 882 162 411 -76 991 466 309"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -159;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> cells = {"54 626 372 746 518 940 -289 104 180"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -289;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> cells = {"89", "965", "5", "-28", "473", "-204", "902", "539", "252"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -204;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> cells = {"210", "-644", "54", "-545", "644", "83", "652", "-955", "176"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -1135;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> cells = {"655 601 353 185 -219 -354 -133 120 62", "361 956 6 379 -60 717 -39 334 554"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -805;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> cells = {"75 701", "537 653", "-406 787", "577 905", "155 -263", "419 697", "-396 160", "885 -376", "740 444"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -612;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> cells = {"329 720 556 514 294 402 -163 59 467", "989 558 508 598 69 -177 -277 397 561", "-187 944 842 170 554 126 -68 -38 768", "-104 14 593 432 284 743 553 914 953", "213 -173 -119 323 210 944 491 -276 902", "-128 928 496 46 105 595 340 713 75", "-193 276 225 163 746 845 971 155 815", "33 -240 -72 438 -60 591 -40 611 864", "996 588 -272 460 113 358 -215 972 920"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -1242;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> cells = {"653 -255 955 901 961 130 73 533 627", "76 -295 718 305 776 474 306 244 824", "104 718 -181 -223 924 -79 393 651 50", "405 675 443 607 -178 277 161 -51 -60", "807 1000 -82 -180 894 -216 140 751 450", "549 260 351 562 -209 985 -235 648 99", "844 982 309 816 616 688 683 293 115", "351 205 -29 901 709 666 909 610 414", "951 -108 2 -104 918 109 104 935 19"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -550;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> cells = {"179 -244 831 819 64 997 82 -152 299", "561 278 -95 668 617 519 -202 576 325", "311 163 586 -9 413 373 991 -128 985", "601 154 263 618 -30 500 380 -246 216", "426 607 677 907 446 -254 980 286 -75", "-127 845 456 58 291 36 35 504 371", "-43 862 -82 -37 502 451 251 391 -207", "974 930 648 32 -189 -289 294 752 490", "995 681 81 93 822 78 735 -262 -233"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -565;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> cells = {"988 570 796 709 606 349 462 -182 58", "703 93 550 -38 598 -200 302 338 274", "497 -12 479 -64 943 728 821 -20 601", "89 158 148 204 -112 294 73 772 689", "-265 105 696 -164 949 643 379 404 640", "389 -181 689 301 635 838 -103 -229 451", "851 -23 132 921 -111 184 246 379 497", "-46 902 957 -12 105 -13 750 7 -56", "851 898 410 343 538 789 565 873 -209"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -364;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> cells = {"590 710 818 893 447 553 447 452 -208", "131 -159 28 296 6 177 31 279 917", "302 219 14 160 423 960 294 609 6", "962 277 682 993 970 364 169 -254 845", "148 451 651 628 -71 969 427 579 -30", "506 962 255 126 220 -106 638 -298 969", "287 772 873 857 -12 451 497 -151 976", "906 206 381 40 309 643 335 689 664", "420 478 -267 -189 -275 275 472 927 -286"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -731;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> cells = {"175 -433 863 936 518 -432 148 886 -875", "355 713 285 367 -999 -547 28 -860 313", "430 293 -686 930 -285 706 -551 -502 -605", "698 951 885 -670 616 -49 144 547 -402", "-896 -940 831 -490 122 -742 -430 153 333", "100 -663 -949 -124 -561 -849 257 285 -217", "-559 -481 24 -625 107 -978 -575 841 -869", "283 91 561 763 -72 364 281 -164 298", "-252 144 -973 -85 706 683 -540 7 -882"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -19356;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> cells = {"-273 277 908 -448 63 820 -971 -97 -707", "-360 963 15 -206 -341 -158 -106 704 -683", "-38 -965 -802 -680 -656 -475 -911 -168 -165", "-284 -566 857 995 -113 681 898 916 620", "542 -390 759 679 -359 -214 558 -161 986", "-557 358 -581 682 -162 484 963 -660 434", "-152 -265 -284 673 741 211 322 17 -621", "-688 -624 -772 987 509 606 387 471 144", "973 -326 -290 -358 684 -181 -728 451 -326"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -17344;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> cells = {"737 730 -862 177 351 46 -918 538 452", "-571 -955 -667 197 -81 917 -251 -838 -803", "-345 -229 561 -729 484 626 -803 -297 476", "4 329 -951 -134 -42 905 555 -567 -834", "803 905 483 -852 372 599 370 304 424", "-867 -978 339 870 -810 -980 -85 505 -504", "770 -789 -40 966 5 -57 -702 473 824", "454 -619 46 824 499 459 948 -429 4", "-35 115 249 -491 -804 -619 916 166 167"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -17942;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> cells = {"-94 9 -90 1 -100 7 -99 5 -93", "2 999 5 999 1 999 9 999 6", "-99 8 -95 7 -96 4 -96 9 -99", "1 999 2 999 5 999 7 999 4", "-92 4 -95 6 -100 3 -90 6 -98", "9 999 2 999 9 999 3 999 7", "-90 9 -92 6 -97 5 -99 3 -94", "4 999 4 999 8 999 8 999 9", "-93 7 -91 4 -95 7 -97 8 -93"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -2281;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> cells = {"-91 9 -91 9 -98 8 -94 7 -98", "4 999 9 999 6 999 3 999 7", "-95 6 -92 4 -99 8 -99 6 -91", "6 999 2 999 6 999 8 999 2", "-98 6 -94 2 -99 8 -99 6 -95", "5 999 5 999 9 999 1 999 3"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -1362;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> cells = {"-90 2 -93 2 -97 5 -92 3", "8 999 5 999 8 999 5 999", "-97 7 -90 3 -92 8 -93 9", "4 999 1 999 9 999 1 999", "-99 6 -93 1 -90 3 -91 5", "5 999 5 999 7 999 8 999", "-91 6 -90 1 -100 8 -95 3"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -1441;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> cells = {"-5 7 -7 6 -9 5 -2 1 -4", "7 999 7 999 5 999 8 999 6", "-9 3 -7 4 -1 7 -2 6 -8", "8 999 6 999 7 999 3 999 8", "-1 6 -8 3 -6 6 -7 4 -4", "5 999 4 999 1 999 3 999 6", "-9 2 -6 1 -2 7 -6 7 -8", "6 999 2 999 4 999 3 999 8", "-6 7 -1 4 -6 9 -7 1 -3"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -50;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> cells = {"-4 9 -9 9 -1 6 -7 2", "4 999 7 999 8 999 1 999", "-4 5 -6 4 -6 2 -4 2", "9 999 1 999 9 999 1 999", "-7 4 -1 8 -3 4 -8 5", "1 999 4 999 1 999 3 999", "-5 5 -8 8 -3 4 -1 7", "9 999 6 999 3 999 9 999", "-3 6 -4 9 -1 6 -2 4"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -37;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> cells = {"-5 8 -3 5 -1 7 -4 4 -2", "6 999 2 999 4 999 4 999 9", "-5 8 -2 9 -5 1 -1 8 -5", "8 999 3 999 7 999 5 999 8", "-2 8 -3 1 -2 9 -4 6 -2", "6 999 1 999 8 999 1 999 5", "-1 8 -3 8 -3 2 -2 4 -2", "4 999 4 999 9 999 1 999 3"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -6;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> cells = {"-13 74 -95 38 -92 12 -57 26 -53", "71 999 93 999 69 999 89 999 41", "-41 50 -58 69 -28 34 -71 34 -45", "55 999 79 999 64 999 10 999 23", "-69 86 -83 13 -61 33 -58 94 -82", "39 999 60 999 15 999 75 999 15", "-92 30 -12 82 -37 17 -68 33 -29", "81 999 56 999 88 999 71 999 21", "-60 37 -38 95 -37 99 -32 98 -78"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -661;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> cells = {"-22 95 -49 28 -43 27", "34 999 66 999 45 999", "-50 21 -82 59 -79 13", "13 999 56 999 14 999", "-58 14 -89 14 -19 12"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -320;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> cells = {"-68 25 -95 88 -23 64 -51 76", "77 999 47 999 92 999 52 999", "-93 61 -84 88 -28 17 -61 78", "50 999 25 999 61 999 76 999", "-46 34 -42 85 -87 28 -70 82", "59 999 70 999 28 999 77 999", "-42 27 -72 69 -25 85 -27 86"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -343;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> cells = {"-80 43 -63 20", "68 999 61 999", "-87 32 -42 15"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -136;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> cells = {"-90 80 -35 44 -61 50 -12 55 -96", "79 999 44 999 88 999 74 999 53", "-80 95 -40 94 -20 69 -30 50 -17", "77 999 82 999 70 999 43 999 81", "-56 47 -93 44 -91 90 -33 94 -61", "66 999 93 999 43 999 60 999 75", "-28 62 -85 90 -20 43 -55 63 -85", "92 999 91 999 78 999 73 999 82", "-49 59 -96 54 -68 65 -48 90 -70"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -206;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> cells = {"-1 3 -6 3 -6 7 -7 9 -4", "6 -9 8 -6 8 -1 1 -7 2", "-6 3 -5 5 -3 8 -7 9 -2", "5 -3 1 -8 8 -2 7 -7 1", "-5 8 -4 2 -8 7 -5 1 -7", "1 -8 6 -8 9 -9 1 -4 3", "-1 4 -9 5 -5 8 -2 3 -9", "8 -9 4 -8 1 -4 3 -4 6", "-4 1 -1 1 -4 5 -7 8 -1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -176;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> cells = {"-598 622 -466 430 -276 713 -486 288", "645 -47 425 -605 716 -806 439 -955", "-348 378 -121 851 -999 565 -324 325", "891 -525 821 -398 12 -986 566 -508", "-438 348 -960 526 -686 471 -836 531", "596 -699 712 -72 462 -99 756 -909", "-75 767 -51 61 -388 706 -730 43", "816 -383 198 -951 398 -552 411 -819", "-785 364 -636 425 -967 496 -408 503"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -14922;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> cells = {"-361 723 -303 805 -30 798 -247 988", "987 -177 744 -464 738 -167 715 -97", "-319 745 -24 748 -62 538 -304 807", "710 -485 620 -354 603 -231 717 -224", "-384 780 -391 913 -329 724 -479 860", "992 -50 871 -277 671 -319 863 -9", "-284 775 -41 807 -24 867 -399 565"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -1143;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> cells = {"-342 757 -218 865 -133 655 -260 776 -199", "599 -158 793 -29 697 -310 952 -239 793", "-36 613 -445 535 -235 815 -350 984 -145", "573 -204 518 -108 543 -204 543 -279 699", "-160 995 -341 622 -149 564 -128 889 -266", "559 -425 870 -410 586 -208 700 -490 720", "-394 716 -193 914 -152 540 -431 532 -149", "610 -440 591 -326 679 -45 790 -436 722", "-372 703 -107 889 -307 714 -310 923 -399"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -1917;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> cells = {"-635 757 -270 624 -494 956 -121 86 -904", "337 -590 633 -412 214 -873 186 -524 792", "-963 706 -268 959 -322 301 -363 811 -284", "795 -236 551 -192 950 -466 744 -37 154", "-338 303 -219 912 -219 916 -66 75 -442", "384 -727 39 -630 427 -957 299 -890 830", "-86 637 -525 104 -265 820 -923 555 -182", "458 -215 762 -383 7 -490 762 -876 35", "-128 588 -198 335 -91 150 -63 698 -559"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -12539;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> cells = {"-1 -1 1 -1 -1", "-1 -1 1 -1 -1", "-1 -1 1 -1 -1", "99 99 99 99 99", "-1 -1 -1 -1 -1", "-1 -1 -1 -1 -1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -11;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> cells = {"-5 10 -5 10 -5 10 -5 10 -5", "2 -5 2 -5 2 -5 2 -5 2", "-5 10 -5 10 -5 10 -5 10 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -60;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> cells = {"-5 2 -5", "10 -5 10", "-5 2 -5", "10 -5 10", "-5 2 -5", "10 -5 10", "-5 2 -5", "10 -5 10", "-5 2 -5"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -60;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> cells = {"666 666 667 667 667 667 667 666 666", "-999 1000 1000 1000 1000 1000 1000 1000 -999", "-999 1000 1000 1000 1000 1000 1000 -999 -999", "-999 1000 1000 1000 1000 1000 1000 -999 -999", "-999 1000 1000 1000 1000 1000 1000 -999 -999", "-999 -999 1000 1000 1000 1000 1000 1000 -999", "-999 -999 1000 1000 1000 1000 1000 1000 -999", "-999 -999 1000 1000 1000 1000 1000 1000 -999", "-999 -999 1000 1000 1000 1000 1000 1000 -999"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -16978;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> cells = {"666 -999 -999 -999 -999 -999 -999 -999 -999", "666 1000 -999 -999 -999 1000 1000 1000 1000", "667 1000 1000 1000 1000 1000 1000 1000 1000", "667 1000 1000 1000 1000 1000 1000 1000 1000", "667 1000 1000 1000 1000 1000 1000 1000 1000", "667 1000 1000 1000 1000 1000 1000 1000 1000", "667 1000 1000 1000 1000 1000 1000 1000 1000", "666 1000 1000 1000 1000 -999 -999 -999 -999", "666 -999 -999 -999 -999 -999 -999 -999 -999"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -16978;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> cells = {"-999 1000 1000 1000 1000 1000 1000 -999 -999", "-999 1000 1000 1000 1000 1000 1000 -999 -999", "-999 1000 1000 1000 1000 1000 1000 -999 -999", "-999 1000 1000 1000 1000 1000 1000 -999 -999", "-999 -999 1000 1000 1000 1000 1000 1000 -999", "-999 -999 1000 1000 1000 1000 1000 1000 -999", "-999 -999 1000 1000 1000 1000 1000 1000 -999", "-999 1000 1000 1000 1000 1000 1000 1000 -999", "666 666 667 667 667 667 667 666 666"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -16978;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> cells = {"-999 -999 -999 -999 -999 -999 -999 -999 666", "-999 -999 -999 -999 1000 1000 1000 1000 666", "1000 1000 1000 1000 1000 1000 1000 1000 667", "1000 1000 1000 1000 1000 1000 1000 1000 667", "1000 1000 1000 1000 1000 1000 1000 1000 667", "1000 1000 1000 1000 1000 1000 1000 1000 667", "1000 1000 1000 1000 1000 1000 1000 1000 667", "1000 1000 1000 1000 -999 -999 -999 1000 666", "-999 -999 -999 -999 -999 -999 -999 -999 666"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -16978;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> cells = {"-10 4 3 2 0 0 0 0 0", "10 5 2 1 0 0 0 0 0", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0", "-10 0 0 0 0 0 0 0 0"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -11;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> cells = {"-959 -533 -666 -500 169 724 478 358 -38", "-536 705 -855 281 -173 961 -509 -5 942", "-173 436 -609 -396 902 -847 -708 -618 421", "-284 718 895 447 726 -229 538 869 912", "667 -701 35 894 -297 811 322 -667 673", "-336 141 711 -747 -132 547 644 -338 -243", "-963 -141 -277 741 529 -222 -684 35 -810", "842 -712 -894 40 -58 264 -352 446 805", "890 -271 -630 350 6 101 -607 548 629"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -16595;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> cells = {"-500 1 -500 2 -500 3 -500 4 -500", "5 -500 6 -500 7 -500 8 -500 9", "-500 10 -500 11 -500 12 -500 13 -500", "14 -500 15 -500 16 -500 17 -500 18", "-500 19 -500 20 -500 21 -500 22 -500", "23 -500 24 -500 25 -500 26 -500 27", "-500 28 -500 29 -500 30 -500 31 -500", "32 -500 33 -500 34 -500 35 -500 36", "-500 37 -500 38 -500 39 -500 40 -500"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -20208;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> cells = {"10 10 10 10 10", "-5 1 4 1 -5", "10 10 1 10 10", "-5 1 4 1 -5", "10 10 10 10 10"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -7;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> cells = {"99 99 99 -10 99 99 99", "99 99 99 1 99 99 99", "99 1 1 1 1 1 99", "-20 -20 99 99 99 -20 -20", "-20 -20 1 2 1 -20 -20"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -164;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> cells = {"-2 2 -1 1 -1", "1 2 1 2 1", "-1 2 -1 2 -1", "1 2 1 2 1", "-1 1 -1 2 -2"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -3;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> cells = {"-108 68 -115 1 -80 25 -71 59 -87", "95 6 96 82 98 92 92 96 93", "-122 37 -58 5 -147 54 -57 83 -128", "17 19 96 48 27 72 39 70 13", "-82 100 -114 95 -146 12 -127 34 -76", "65 42 12 54 69 48 45 63 58", "-112 60 -126 42 -120 79 -133 36 -59", "43 89 7 41 43 65 49 47 6", "-59 30 -79 51 -143 2 -56 49 -120"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -1868;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> cells = {"-1 -3 -1 10 -1 1 -1 1 -1", "1 -3 1 -1 10 -1 2 -3 1", "-1 1 -1 1 10 1 -1 -3 -1", "1 -2 1 -1 10 -1 1 -2 1", "-1 1 -1 1 -1 1 -1 1 -1", "1 -1 1 -1 10 -1 1 -1 1", "-1 -3 -2 10 -1 1 -3 1 -1", "1 -3 1 -1 10 -3 1 -3 1", "-1 1 -1 1 -10 -3 -3 -3 -1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -69;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> cells = {"-1 -1 6 -1 -1", "-1 -1 1 -1 -1", "-1 -1 6 -1 -1", "8 99 99 99 99", "-1 -1 -1 -1 -1", "-1 -1 -1 -1 -1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -13;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> cells = {"15 -32 -65 62 67 -15 86 -24 -47", "36 93 76 12 -31 -29 98 87 7", "-37 -46 50 40 -33 -46 -13 46 -23", "-88 -58 46 51 39 -8 60 -24 -65", "-15 -65 26 56 8 38 36 47 43", "-101 59 21 47 -9 49 20 21 86", "-62 -92 54 -84 27 61 88 9 -33", "21 -96 -71 -28 52 67 -89 -90 94", "-80 83 90 0 -7 97 14 87 98"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -1341;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> cells = {"-1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1", "99 99 99 99 99 99 99 99 99", "-3 -3 -3 -3 -4 -3 -3 -3 -3", "-3 -3 -3 -3 -3 -3 -3 -3 -3"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -55;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> cells = {"-59 -93 -6 10 -41 24 -62 8 -48", "-76 15 -35 -89 -43 -19 1 -95 12", "-83 6 -79 -56 -98 -77 -68 -68 -99", "26 -12 -95 17 -84 -19 -2 -51 -78", "-43 -61 -95 -86 3 -79 22 -57 23", "14 -39 -59 -57 8 -33 -16 -68 27", "-83 19 -87 21 -1 28 -4 -55 -10", "-78 -72 -24 -30 2 -76 -72 -84 -85", "-70 -1 -40 -90 -44 -69 -17 -62 29"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -3473;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> cells = {"1 1 1 1 1 1 1 1", "1 -4 10 -4 10 -4 10 -4", "1 3 -4 3 -4 3 -4 3", "1 -4 10 -4 10 -4 10 -4", "1 3 -4 3 -4 3 -4 3", "1 -4 10 -4 10 -4 10 -4", "1 3 -4 3 -4 3 -4 3", "1 1 1 1 1 1 1 1"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -57;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> cells = {"574 -327 -528 -651 -147 -591 -192 -116 -758", "-659 -622 265 844 892 789 860 -351 -655", "-923 -448 -279 210 975 880 -974 -2 403", "793 -589 -302 -485 17 -930 -770 -564 312", "-289 -653 474 -2 538 192 -944 -650 -460", "334 208 537 240 584 840 558 -403 127", "-394 152 -786 301 414 -96 810 -88 -647", "229 677 170 0 898 575 958 361 -737", "-533 -51 129 74 467 -838 -629 807 -582"};
    CheapestIsland* pObj = new CheapestIsland();
    clock_t start = clock();
    int result = pObj->minCost(cells);
    clock_t end = clock();
    delete pObj;
    int expected = -19349;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=9992&pm=6482
********************************************************************************
#include <map> 
#include <set> 
#include <cmath> 
#include <queue> 
#include <vector> 
#include <string> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cassert> 
#include <numeric> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <ctime> 
using namespace std; 
 
typedef vector<int> vi; 
typedef vector<string> vs; 
 
#define For(i, a, b) for (int i = int(a); i <= int(b); ++i) 
#define Rep(i, n) for (int i = 0; i < int(n); ++i) 
#define Repd(i, n) for (int i = int(n)-1; i >= 0; --i) 
#define Fill(a, c) memset(&a, c, sizeof(a)) 
#define All(v) (v).begin(), (v).end() 
#define Size(v) (int(v.size())) 
 
int n, m; 
int a[9][9]; 
int k; 
vector<vi> states; 
map<vi,int> state2id; 
vector<vi> next; 
int dp1[100000], dp2[100000]; 
 
void rec(vi& cur, int pos, int gr) { 
    if (pos == m) { 
        states.push_back(cur); 
        state2id[cur] = k; 
        ++k; 
        return; 
    } 
    For(i, -1, gr) { 
        if (pos > 0 && cur[pos-1] != -1 && i != -1 && i != cur[pos-1]) 
            continue; 
        cur[pos] = i; 
        rec(cur, pos+1, max(gr, i+1)); 
    } 
} 
 
void findStates() { 
    vi cur(m); 
    k = 0; 
    rec(cur, 0, 0); 
    states.push_back(states[0]); 
    ++k; 
} 
 
void dfs(int mask, vi& prev, vi& next, int p, int value) { 
    if (next[p] != -1) 
        return; 
    next[p] = value; 
    if (p > 0 && (mask&(1<<(p-1)))) 
        dfs(mask, prev, next, p-1, value); 
    if (mask&(1<<(p+1))) 
        dfs(mask, prev, next, p+1, value); 
    if (prev[p] != -1) 
        Rep(i, m) 
            if (prev[i] == prev[p] && (mask&(1<<i))) 
                dfs(mask, prev, next, i, value); 
} 
 
int findNextState(int st, int mask) { 
    vi color = states[st]; 
    int gr = (*max_element(All(color)))+1; 
    if (gr == 0) { 
        assert(st == 0); 
        vi v(m, -1); 
        int q = 0; 
        Rep(i, m) 
            if (mask&(1<<i)) 
                if (i > 0 && (mask&(1<<(i-1)))) 
                    v[i] = q-1; 
                else 
                    v[i] = q++; 
        assert(state2id.count(v)); 
        return state2id[v]; 
    }  
    if (mask == 0) { 
        if (gr == 1) 
            return k-1; 
        else 
            return -1; 
    } 
    Rep(i, gr) { 
        bool ex = false; 
        Rep(j, m) 
            if (color[j] == i && (mask&(1<<j))) { 
                ex = true; 
                break; 
            } 
        if (!ex) 
            return -1; 
    } 
    vi v(m, -1); 
    int q = 0; 
    Rep(i, m) 
        if ((mask&(1<<i)) && v[i] == -1)  
            dfs(mask, color, v, i, q++); 
    assert(state2id.count(v)); 
    return state2id[v]; 
} 
 
struct CheapestIsland { 
 
    int minCost(vs cells) { 
        n = Size(cells); 
        Rep(i, n) { 
            int k = 0; 
            Rep(j, Size(cells[i])) 
                if (cells[i][j] != ' ' && (j == 0 || cells[i][j-1] == ' ')) { 
                    sscanf(&cells[i][j], "%d", &a[i][k++]); 
                } 
            m = k; 
        } 
        findStates(); 
        Rep(i, k) { 
            vi v(1<<m); 
            if (i < k-1) { 
                v.assign(1<<m, -1); 
                Repd(j, 1<<m) 
                    v[j] = findNextState(i, j); 
            } else { 
                v.assign(1<<m, -1); 
                v[0] = k-1; 
            } 
            next.push_back(v); 
        } 
        printf("n = %d m = %d k = %d\n", n, m, k); 
        const int inf = 100000000; 
        fill(dp1, dp1+k, inf); 
        dp1[0] = 0; 
        For(i, 0, n) { 
            fill(dp2, dp2+k, inf); 
            int add[1<<9]; 
            Repd(mask, 1<<m) { 
                add[mask] = 0; 
                if (i < n) 
                    Repd(q, m) 
                        if (mask&(1<<q)) 
                            add[mask] += a[i][q]; 
            } 
            Repd(j, k) 
                if (dp1[j] < inf)  
                    Repd(mask, 1<<m) { 
                        int t = next[j][mask]; 
                        if (t == -1) 
                            continue; 
                        dp2[t] = min(dp2[t], dp1[j]+add[mask]); 
                    } 
            Repd(j, k) 
                dp1[j] = dp2[j]; 
        } 
        return min(dp1[k-1], 0); 
    } 
};

********************************************************************************
*******************************************************************************/