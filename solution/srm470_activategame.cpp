/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10750
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

class ActivateGame {
public:
    int findMaxScore(vector<string> grid);
};

int ActivateGame::findMaxScore(vector<string> grid) {
    int ret;
    return ret;
}


int test0() {
    vector<string> grid = {"05", "aB"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> grid = {"03", "21"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> grid = {"John", "Brus", "Gogo"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> grid = {"AAA", "AAA", "AAA"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
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
    vector<string> grid = {"0", "Z"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> grid = {"abcdefghij", "klmnopqrst", "uvwxyzzzzz", "ABCDEFGHIJ", "KLMNOPQRST", "UVWXYZZZZZ", "0123456789"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1009;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> grid = {"53"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
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
    vector<string> grid = {"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
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
    vector<string> grid = {"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
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
    vector<string> grid = {"Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0", "Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 149450;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> grid = {"0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z", "0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z0Z"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 149450;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> grid = {"mD"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> grid = {"5P"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> grid = {"5435"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> grid = {"do44"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> grid = {"96466p71"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> grid = {"nCznFB4y"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> grid = {"bYZRUTbDnQDWKFUW"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 245;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> grid = {"czJZZboJbRZI4Gno"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 332;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> grid = {"3166573f07Xj87462n27572325427762"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> grid = {"K68nfsn3RMxcySoAp409NkCgDi6cyIqz"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 553;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> grid = {"UlgcvrktpgtnwPaghaxvbkjgjgrpbznelrzsatjlyyurgiKvbz"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 531;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> grid = {"2RwoMtfbe4V2QBzccuWSaKFVqmmLwdxkAwOomoR0AB96wwXEfc"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 948;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> grid = {"N", "o"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> grid = {"R", "g"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> grid = {"Us", "QO"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> grid = {"kq", "xD"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> grid = {"mggd", "fdnr"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> grid = {"E3X9", "c0Q7"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 280;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> grid = {"Qifw4bLx", "KiIi0byi"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 327;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> grid = {"ZNVz3lWP", "bwvDoEl1"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 393;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> grid = {"AI0dukhhvslr7yzZ", "sAb8wzeUozcxRbon"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 645;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> grid = {"ShyH8ACoTewLuqRM", "MA0P173JRoiCFtmz"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 751;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> grid = {"433s9M909RX1f45A017G2959F881c2Dn", "51H9N1331489699j1zs033r363N03486"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1460;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> grid = {"imLEgrU9m2EbBKixSs0S6uXzPVqSaeTU", "WUYmbN7nMfoLrJI0DdpBBJfKTTda9KPA"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1746;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> grid = {"JRYJQWIVEGGRUEMGlOVXQOjUegjQQDSUZVFZ1TVUAQsKGCSU5Z", "X8IVV1MWERkgUONsVXZNEVQKIUGZwWGuAAEyGITWERHZA19NQD"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2204;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> grid = {"waqnJDpJDYkobYrTYHrtvmbD7X8BeCl5j0bP4V5FYyOAFl4mrQ", "GWTba02o2rJaKEZVhYanrv67Ohb6yrjFaWPorvYLxwjv86A30D"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2714;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> grid = {"5", "4", "1", "2"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
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
    vector<string> grid = {"g", "e", "p", "O"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> grid = {"44", "59", "x6", "N9"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> grid = {"KU", "R5", "Rg", "iH"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 219;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> grid = {"8LXV", "EN0E", "UHJA", "CRIA"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 381;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> grid = {"a4KC", "642w", "3LYU", "l2uI"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 439;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> grid = {"oigpsjFu", "HlCf53un", "cghhymhx", "wbspprj0"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 536;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> grid = {"tJwYjaIu", "ovpwL8QT", "wjYh0vtY", "VK3R5t5H"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 938;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> grid = {"ACWQIUTZaERDBNOu", "CEtGSYCASRWQPSDI", "zOHVXJOCQgHOpc1Z", "LaESD8FPcXLNQZMF"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1438;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> grid = {"JxoJIDzYQIO4NmQE", "DsRT2jpaUcsb0mYR", "dUOMDODwFCy69Nrm", "Fr7roRlzh9y90Fyo"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1645;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> grid = {"9Li947T98P796y164156759323158562", "68902605xLc0654631Czt62ym73QI288", "7YR479960127834G9130683945S38A23", "k54Z16G00603g2514l119585CY612h82"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2766;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> grid = {"gB8SpzQCaiDlsQy04LvnrapE8BPgQoOQ", "5eqE4voKIZb9V32jo0vLVauYJORy3c0H", "FSHj3H4NQkjSMMJBe7ihjjjTartjhIxI", "7n3N8nJUNBFFz567EvduW3GkWAl6q0zB"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 3679;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> grid = {"A25672v23075e288620A062cD0950n60b2nH12699o47v78715", "27S95G37644w31851f9604A413067297742T73o6C4v88rpy23", "c48f5b4037039eP074uZ65326681D22r345O94X2236375169w", "9752q95AK7eK373514C1559251374G299987281889960q1392"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 3952;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> grid = {"GK4apkbSkXKcXo7L0Yyn2aOGlfCDmP3V4h0atA2W5NfseUlBsO", "mngCpcG3yrkKERa5U2GpXEGNaK2AXC3fufqFH2ChsdMZvuztrX", "1TeoyL9iLPjzFcdltcHU98PbiuSGY1pxja0HJkvK79DkMqqZ8B", "NGjBiReb1m8CThJpuMLlNCGXBUqpjRvkoQKVhgPB58To6xJOeq"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 5989;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> grid = {"d", "7", "T", "H", "5", "4", "h", "8"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> grid = {"m", "I", "7", "I", "d", "K", "7", "c"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 204;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> grid = {"jr", "bu", "yA", "dd", "ny", "yy", "Xw", "eO"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 290;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> grid = {"7M", "eq", "Ff", "vr", "Ty", "LB", "9h", "VA"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 349;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> grid = {"61G5", "8403", "19QL", "883J", "p76t", "9811", "7A69", "27Y4"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 785;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> grid = {"ov8a", "1b0H", "ICub", "ks9w", "qlzO", "9YBY", "2PgJ", "L2pe"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 875;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> grid = {"zwSeyzhd", "syzMzrux", "upvmkfbl", "rswnhbvu", "ThWsbtcc", "ivadrdbm", "fppizzzt", "uythidvl"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1071;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> grid = {"m8x4Ilwm", "CcejHRn0", "vpH7Y5qg", "sWk5Ti4F", "O983qQ0g", "729JyLuP", "LV1hDriH", "RDvkTiEM"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1842;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> grid = {"CWQNYGGNRuWZSARQ", "KOWELKeUJWJMuENX", "LY0ANoDOWJBYEFLT", "ZQQANMEPPCXHUVGM", "RaZAOJQGALBNFBJL", "ZOOMKQRVYAOGS8RG", "CIQBHTFOUSRPNSGS", "LVrTDMFXEJWHQLAd"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2272;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> grid = {"leiiPqkuJvJfaflN", "ML5akAdzOOPyyy5a", "a0AexD99H66xeXft", "NZ3RR4R0qGzTNwfq", "mEfsaaaXLpKKskBL", "2wqhIl7lDSaWdb7x", "ZExNRmYEPO8URYnW", "WMClsLSXYU4YzrJC"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 3667;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> grid = {"dcjyglzqTebppqtikptygraozkvybcif", "bobVrcjaQYmqtvlhgvbvdeSf9ewevmqt", "jqjjywbklefsb9zfoj0gfeinc6bhUmox", "DyerevjvexgyijqeMzj21wbpHoytwhmp", "vxudth7TAgpvwkyJabiJqxhkwlf5uhkc", "zohvVur6bapdxbgvacjlod0ab3ufpdjx", "zdzoFnmjqkfghljcikltdyzlXrcJbdij", "s2riSf2faj11jvreevvipjjuByjbuxxx"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 4649;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> grid = {"yrIhEX0dugWuf0AFNzaUzIjBue5FkVB6", "qVQyQdMvJSbaMz904pyv6qtehGpGc2e0", "J0YsDj9xbzDlQvdm5ZjDWQM48EZBaU4n", "jkKHKJ61qGoosnLuPt50BbLw4e9CMsrR", "MBMvWjjYoAvjI0XsDvZY9nKkY1azcUSw", "asDm58ESOCXKiXFM7QyyGDIEW9fT8bCi", "IEmhzyg5ifGZt50OfEKPuWmwYOzLRyA1", "7QotVaoPIj4Y52dmRG3Dhy4oq8KmMYUT"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 7762;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> grid = {"b57j4403St702l062569355546834872409927110XF337441S", "27n41o19H49B36396962O57Vk810309860197429506a510788", "6v27731Y641247b9Nw31540246610G80y850795339165a1878", "9S1b0878eIk6430764T665142370q900466628q31342884R76", "DR42U726m59cDA5133399647670C120362690U7PP25924053C", "J1456259037O77X993K7505504729Pw333r7ZJ3603326A217W", "7256401KP0386s44284Z7497333975u17Fi840235672088I7u", "7q02826v37U9h82940127642N09575728O07905rw81L397842"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 8163;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> grid = {"gCrGR7z4H5nwNHKF5NQa708KYyFA08Fup64cIUkgp8Syp7ExKm", "UQU05OvhhqJ1dhAhpQj2AHX1YoiRCK4iVXlL8AmjP5yPMHUofo", "SBihPMeTEttv8pvXI439Q2tMv6krrSWtM1HQx3R7Rvn0sLKxwx", "xE8nSYOiaccPoTBGmMyCDVthMWBXUGqM4eqYqSqJVdaqChFiGw", "fTQTOD01sLJ7Q9t4PzpvWD5Gf1IvsvVuYYrsPIExX75nT2TlW3", "kCf6WSQCQJFPDByzqef3bHryYKm8PgLWdePE6xLiHOIbckewlC", "rCqiJipdJx3wOpaFYa0uPUFtbRPEIjQjvKqCAbXDfLImvMSs8q", "rZJhA8V45ybBaKeFaXIFl3Ncfwew6VqC1lH0ttVTQvJ8C88ZVE"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 12367;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> grid = {"3", "9", "8", "7", "c", "I", "0", "m", "8", "T", "i", "9", "0", "8", "8", "6"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 237;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> grid = {"d", "v", "b", "F", "v", "S", "a", "x", "6", "4", "y", "q", "E", "w", "k", "o"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 273;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> grid = {"CL", "AM", "ZM", "aA", "CL", "TQ", "IX", "SN", "VQ", "AO", "DD", "VO", "TA", "YK", "LA", "LL"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 429;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> grid = {"Uy", "Le", "CJ", "v7", "Do", "Ji", "cw", "5g", "kO", "Wm", "VC", "r6", "zl", "AK", "fX", "Bv"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 745;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> grid = {"AL29", "1mG6", "8666", "5571", "0376", "9Z40", "15f8", "7856", "4841", "1q77", "HZE0", "9QI2", "Q39o", "OY35", "6X37", "x803"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1504;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> grid = {"wi78", "UCYF", "MgRD", "6s6S", "4qML", "lWJh", "p4pX", "VnAy", "tBLG", "6mU2", "sSii", "6yVS", "DLkr", "NUbi", "e1bx", "kRtg"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1875;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> grid = {"GgwyeKhw", "tzyaxsrs", "suxmjxD0", "qjcnvjbe", "v8yfhhx5", "uhoourCK", "ofB3bsal", "loiqbrkn", "mbe7mPbg", "oc9hwdbl", "lsGh9wSr", "olidcpjq", "wrkr2jfz", "bazgXTui", "gebwvFpl", "wcrumsks"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2305;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> grid = {"JfyfSlOi", "urG3posQ", "8Pxn10MC", "26kjXIYD", "CO1OZiLr", "yiqRkz7Z", "t4fhTYZP", "PNTTTn8X", "el5yKpFJ", "fVkWKPjj", "6GDHBZ9c", "yv6RMi3n", "9ehuCmtk", "d1RXf31S", "iTfB0fUU", "iyc1PzCe"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 3954;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> grid = {"tgcyBfCprkvlzp7x", "heuPwcemppq2daaX", "glh0eiTdudfippsr", "civxxtewzRdllzzf", "jzhsajprx3kltidm", "kxcguskvjsvrerga", "QnUCbtmisbcqkelm", "hrjpnBhevszjXAT5", "lnbBxHskxodzqmbr", "oynudpjznkaefewJ", "ilzxtfwjruoehply", "tfdbwyyfbhaswonu", "bkyiAjnycswrqnbe", "zlxlvpvonzQtSbqP", "stovwafoNjtxwz8J", "7StmisfgQblGcnhb"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 4709;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> grid = {"gQtkWz1nxxTFLHVr", "EjX4rsc8tgTw2H85", "lTSGPY3WVgpYo9MR", "HLBb3KgpfnOoAP2F", "P6WaIL2LYQIvvOL7", "vVafZ6BDUCv7aeDX", "PlGhdodSGKWYeBJJ", "euvIY0RTN6HzI62h", "wfQqEmdXGJrspXxl", "2xHY2pcrNImwy9M5", "7cmVhcEhFRLoOjre", "Ki2K2RdFWD8Fm2ot", "ZnnZAn4QXTbGt9HO", "HP2cITp3MKp0y2OI", "ZbLGsu0IQSExKWZ8", "lrTPy3NhXgcuYksa"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 8137;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> grid = {"wupjjruatvottcwpeYwiecGjs1ieifSq", "quj5pbdmsyForkufhdmrtsclhpIpvxyg", "ldbopafbfkatcyagoqquyiXgSxnCgCol", "Kjdugefkc5udjvbvHwantkxohqUtcrM5", "mhNjt9cawrbuodyskjksObjpwtuecbnu", "qetEcWbxhbywcxvtfncnjaawk5B8qovA", "DufupkqfQwVuBeItqhvUmpoovdRlwyho", "ov3HVdljqmmjLeedsiTrfmgtzldYxghn", "bciPxujlvtPhnfkt84dvdOu9zomotfib", "XnevtphnzsckkjWRyakyunuhs6Czhtp3", "wqhyfWdlrvzxy7ccyyetlapqwc5zaspp", "zTwikptdhx5dg2ukvkzcoawOXoudqhxj", "mwuHxOuFfzwwouswyzyBdx4yqskohnih", "z7xiataqPBppaeavfkesixlwGiraauct", "wfvcj7w0vxCUA9cvivtttvdslgjxmgal", "bkjtzsjsranDmjL6asfgu2ylngpongjk"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 9898;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> grid = {"YZJoKGxrnPO5xobCMUHPYOWyqQciUDLk", "IWDmaJS7MislPtUZDvFImg5fRZv4H0y9", "ScvUYOx1f6kEazp7IysavepgVT4NH4pT", "6T0DZAHOB37A5OTR28TMcWknvx3MCh5M", "hzE8wj8jLRRb1teSOeFGGNU39RmlDI0l", "sah4JtCJW6ovSri2WKhvFJfDD8gjSAAm", "p1wym64svNTFxiA23rwpksy8u2l1YNQT", "BipL3qt9wgnfhHGgYrz5KdynR7xQUOUg", "dDeoQNpNNiHSouItdkpH1VFW9R6FIjq1", "BwCDPJu5lyZG47U70wjWGGL9r65mj4b3", "olzbXRsujzJlwcxpinsxaHRExApQC11r", "PQQLJV5f7ghulvumIzMKTizMVrixsKk6", "ofD6wTKTlvLk8oKdBg5ihs1IObQo9VBE", "OzQvGgSGQtExTVi1tVZVDPWP7eonXrW0", "WLgb2Mx9ALglFLhA6srsKHcQrpcVBgsR", "UFxtONPDLVJtjcoVW8JbnW9D4mMxe1UC"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 14821;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> grid = {"667P3hmB3HM8189194z7764t0k71701dm5545W80765zE99081", "wm1G4K488239KAJ427o75R916179u4Jf7957911989g27441y9", "04u685aP66257809D9F244S931Vk3393551814903045M5B2e9", "050252160n468548B1c62708897628t6H5335189t386I5M754", "3451hDdEw117K8164h673A45n01850g69763734630089882G7", "566R5905Xn26195113eY4131I29qC2H08457L3851O9e959724", "37s23O17420598D876355144wc8178D085P2L4821M11832955", "6955o78273Y8393849ZeFS783s3879190147998559994M2315", "a22p22451Y4874181w63968961ak3245h6394h3FC96QA47697", "8091057109298297284x12535479715y9UY8897sB2e5i03193", "N88oq321Q008L9736C06329Vl983617597A4390e36c8901281", "645E888764t4I02965I213je2B0LU036eI799N2V590833709R", "739874680603708563585aDZ234945n546no7O8o843791E318", "0x37151898907Zs303P96177S11772k811W0o5910849J53588", "I3Q1314013r7388231231254561C4516990C2310807a591M37", "32E166436933030715D03P5027034265a5668WO2188X179935"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 17447;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> grid = {"mZCdl72HJRRb6ukibxvHxM9O3IvskuJb9bjiBUS0w8MIiq7e9X", "SJAi1mR1zzSBknhzJAWZUwGfeCppvN7zMCCXlsXyJRJaz7Ah9v", "avOPAf7ljlnmC2rOJ2qlzED6jXJbIZI9GSvqqfNUxTSHsZy1C4", "dHk9TD9AeiEPAcXLyFGlzv7tjXN7GZ2Tq6DXZsRiOzd0Q2B7Jk", "H8frdkII65pan4pwKotfBeju3a1EcFxxDNZI1oiSHCLB1rjhJS", "Kg8INrE4DF0SbS0rvVmoZhcVdZv7nDwOfrQQAciWDnhtxf5Lol", "6lX96JHcT0EcjEMmzvar6tUHqZI04UKOb0wBFN3JRHMwGNbJmn", "HH3YOFQc1Qp7CnDoJDxTFGCDH0xIeULl5WpG9vDDWnpzXe6jO8", "DgMl2uxWySASV4V0iUc3lBH7I1ecLkHTgeb6Xbz1lgrLA12Aas", "ahH9dpfdNbRJB40DuxoUPmITpQyTTQK7KOVaB5QowifEjLjepP", "RavnnMz2cacMGJ0UpHaNBldiRqpSrWwivbxuUsqTuznMSFys09", "r5XR4yHGGNtzSpyW4W8ZY7t63DzNqxMDEqGJRxON3JPZtjMeUQ", "Ko8xLyvxRY5hL4H8ojIXUWGjf7Le24zgfhMDyXM297t3C6Lu0U", "JBb1t5kRbAgLjDvgLu764DGEsO4GDyiSYnYcZWW6xRwmxLGqSq", "O4lExsoFXZRROCYS9ZvaOjehlcqQfqlMzbHR4vAP9ucQvuckHx", "uX2VX9tTN0ASn8n2Wm1MMICU5LAp3AamDTsVuVCgcdNX78lZEH"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 24519;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> grid = {"0", "o", "0", "7", "5", "0", "6", "9", "8", "1", "9", "3", "a", "2", "2", "1", "2", "6", "8", "4", "4", "4", "7", "5", "6", "7", "1", "7", "2", "4", "3", "6"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> grid = {"x", "F", "V", "r", "Y", "z", "B", "C", "X", "T", "G", "g", "l", "K", "l", "4", "N", "M", "u", "9", "z", "X", "N", "d", "R", "3", "f", "D", "Q", "j", "Z", "6"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 701;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> grid = {"32", "67", "PZ", "97", "85", "76", "Nf", "7U", "e6", "t2", "PJ", "38", "96", "76", "27", "33", "3d", "q7", "46", "67", "l7", "57", "14", "3F", "68", "4x", "3T", "81", "U2", "06", "85", "J1"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1380;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> grid = {"Hj", "YC", "2p", "47", "O3", "cE", "PG", "bF", "oF", "oC", "dB", "SZ", "ZT", "tM", "6m", "Ym", "ry", "eO", "fO", "rX", "3h", "Ws", "IG", "3N", "bl", "6P", "Eu", "re", "ay", "eG", "En", "i7"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1615;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> grid = {"AF5T", "MFJR", "UXCO", "rXKW", "Q5SS", "EEXU", "FDyX", "SKtE", "NPDC", "TWzX", "sgXP", "YZNL", "2RLY", "KBFL", "XCLZ", "WUBH", "JWQs", "bUTO", "OOTE", "OWOU", "fSYV", "SXPg", "WkKU", "VRSE", "ZXST", "GMJO", "OKhT", "UQKJ", "VZdC", "CIQW", "JTTA", "VVJK"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2587;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> grid = {"iwXM", "kgDV", "d9BC", "vtcG", "wVrw", "OCjY", "H6o0", "LsQq", "rtWV", "a3ux", "ZxSl", "pEkY", "HiBR", "SNGV", "p3aq", "Mon1", "EO4q", "fm9P", "eIv6", "eTZr", "YzHL", "ignx", "nnNi", "99vE", "EwtY", "ZZfQ", "SXe9", "aD6Z", "8UJf", "Hazh", "VMLr", "zHpr"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 3435;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> grid = {"BjPZAYHA", "KNRWBVZQ", "DAIVXb4U", "KrPFUbJS", "QsPaDAFF", "GCZXZBQL", "TUnGnFH6", "YEFBITYM", "XTpPZOrX", "MAIPFRFD", "DfCYVVXs", "Zr1BEJ6V", "KLJ6OEHG", "HDVKXPLF", "THYKLTBM", "MTNVVVNR", "TCZIKMSV", "FL0GWLSY", "iBEHZLUE", "GoJAIRAB", "GEMNCQJn", "HFLIXVIC", "OKMAVMmU", "HSR0ENCW", "YAAMNAO0", "KoL5UCBW", "OAWKFxDA", "XLTSCFPE", "XKA2ZJFL", "uGGZBMGZ", "FwvCNUYB", "lESKGQx3"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 5394;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> grid = {"LLKQ9kdU", "oKjvcjY7", "DRCpNHc4", "01mJicpa", "BA14wr0O", "45v9PHu9", "kB8F2jGY", "ybYu1BAu", "3hSNhnNQ", "ZNtNLYnF", "c6oAtT11", "7kPTRWo9", "kViBbvB8", "WvZEWU3E", "Qd6ATbyf", "dBFeCzin", "q1gi4YBF", "6OPyWxzZ", "HIULGLl7", "cBLW4HsL", "deGfkGJM", "0Tbxj6Iu", "3sYmMmGV", "b1gzEcNL", "m4ovZiBL", "WoddiGXO", "Ygndc32m", "GYkRkhQg", "p9Ii2eyN", "yYxU85u1", "U1alyDyz", "1b29DRVx"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 7660;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> grid = {"fwBspnm5qq8xtjzs", "egtmjpHghlnklovg", "wtjolzdixhixfxdq", "zfjsijoZbkbobssg", "tmtqfhLbwlfz8eha", "lomCbVkjnsepnn4m", "czfcagtdyCpectsa", "qeSsunn3thvnchnq", "ekisoyrqgvueljCe", "zooHrHjwpdznUfqy", "OyCmsiydothpKgNy", "rsrnhqrwrqwcsGoj", "ixqiSkyoceiisvzu", "upDmbibsrrn5ughH", "okdfmcNxpeEeo1nq", "ppApvimghdlswdck", "lgpsaxc8wqaDkuyx", "dkrtlLvAgaazjYpv", "dlsLuUmnygjiemse", "ynNkufzrefudqgcr", "rdugEFhkuzupnBml", "clcfzGryeylScfqq", "mooopmkytuawjibc", "nynnelsfnVotabQd", "wjRwllhxaXaqtujE", "ysmq1EdiheuppNog", "fb8mhomsfgeiylol", "ycxqjbkowjLukwwb", "yiRq9rwkznwuIaqw", "nrtvjyjyusyopqtk", "kzkrvdov6qvydkYg", "iffqBzvaoyxedfen"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 8994;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> grid = {"hprawCCvWjM1n7jJ", "4d3sCnGFMqznR0bx", "hkm3XEaozWWyAQum", "jit28ea3MJyIV0E8", "PpckJlpbVCaI5X8q", "i18tTyMLx5vvyAf7", "woLsXqlBqH2njyXR", "ksrCpYA2Ynihi3aJ", "XF2gYXKTtGIa0ax6", "JOq7iA4DqbmOv9l6", "CKzIltKPnHWwzdg9", "Lp7W0PwjIbLBarBu", "xQWCMmgGWuv46wPp", "9gGGC3xnBdzuuZA6", "EJQxJV6foZkhUJNp", "yvQmXsyDhhv3oCJI", "QSyPnimlWKnRws29", "yrqCYaRSq0N5YEQ3", "Vorx3zXNdWIfCFg8", "MUMspd2Wb6Nf4fxU", "JXS2jGaqNpXIbKvo", "d2o7EtwIBwqRbrfy", "vvoXWv5DhCPJMp6u", "PuOBkKz2fMcz4JKQ", "Wx4FQL6f8I55LQL0", "557bgIfh159M8Vax", "cGxlK40blT7N94ut", "QP2nWsXmrJYavKS2", "ng4SZrPRMBnaHvC2", "Wjmx7UtHRIT81lb9", "ycXuFiZaPkRfjZkM", "FPoFGXPHB7bTKIah"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 15196;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> grid = {"CVENIDAILOYFMQdUJW5vYIGKGZSKUFYN", "DLrKPVROCDGNONPXRG2OgRJJGNUNSGYE", "VNEYAMMHWICMX4W9RHTJDWGGSNFmZWzF", "XVMPNxYLXmrQI9LTYDWMmPT7LQkNXySX", "C0UFUgMICPLK2JXNVNLVZWSTDEHEBUQT", "OGAMHVOnMEP3XWJFQOGHCBDUVJKTaINR", "RAKPSkYBXKDJKTDWDWrQHKABNhXCGVNX", "WBtNUFDSTFNMWQFHUHSVCALVPBGEDCQW", "XVXYZYNOHTQBHRKJLGKFBQAEIUfLEJLO", "EUPd7EhgWFXOLGIQOEBSBSKIXCFVQIN0", "FMMLPPpDSWUFUTKMJZgUlQIXFAMNJsAH", "QSYeGFDNNUDAvGVNBYLCNFYSCSLURkJP", "ZJNuWJTHOZnRLoLUTP6XJVRWwCJKBK8O", "dWODaUF5aOLGApSOdGLDIRLaXYKRWMNN", "YJGYIS1LFUASZIJVGUWIIKeWQEWCmLNH", "LKXOCY4ILLIFHZPOSCBJOWVkUKGYJYRM", "FMTJPAQpfDJOkQMVHWXZLlFLRxMlGFCG", "YZDWCUUKEJTOOLQUSSWCPWUNCTVWsQUQ", "MGOSGLvNGSHPDQELYeEGE4WLRPUFFENB", "DYCTWEXZJQKXGTPWhKQOLDcLOFOMzIDN", "U7DZLMULUTkFWJ5TXINVUrJJTRGQH6RE", "UD0OSVWDDW7ZHISPBFXDYJrDGEREUAUR", "OYAFDLUFAGMSOZBWIfLcGTWDXzMF6RAU", "YNZBVuJM5RCNMb8SWKEVFXFJRNHQzGns", "oLPCMNRJOFBfLKFQFLS3AHDGOaEASMGW", "ZLPFCZJR3HLLRG8DEHVUORaSSgOOYECT", "r9UBQUQBLNVEAVFPI4DQCLSOUNFUFXJU", "JLECLTEEDAyXLCY9BQvAEUMBRSQHNYCY", "PCZALKFXLPGmZISDSQYJIBHHR0CFBPKW", "NUOzDFHWDTQVkR4VTLQPLY1gPVZESQGC", "JUKSTTPAuVWDVUOHCBOCPRMONIXROEXy", "TVFILNOPBWSYDMK9WQBVVPPINNKHHSsD"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 21405;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> grid = {"z1fGjgH1Wlrbg6p6qSTCrCT0IKP2xRn8", "WDVEIRZ2caODRiDAt5sY1xuVgUSfTwoc", "EL6KllWix1FMsL7GlSyoOprEWANuz3cK", "O7FXSIKSM2fY2FpcdorQbgRkQxYkZnBW", "aJaFmZ10n91vrJ67Pvv5S3SjbhYcRXUy", "smWAGGoyfrDyg9bvvoqlRRy2fB10KfQu", "A3Wp2iQy1TrDx8C7CsxF2ao6m35X2I5l", "rDpCsTUaQFweurOQcqp57ylHvYOdqmiN", "5GHbh3ZcUJ7DMODcLJhW54SIaWBisIyb", "A1sSHjZ41MG6R0qQsBz0NkNbrjv8uiTw", "7hsVIOgT5kWdvNWBZ1ZqqpYetbg1J7mp", "VhdUbCDlx6IwjwpUafSIuVFG4tpGHMm7", "SIXPgRjQU9ASetwQOONPjy6VuN5FKPjy", "krBzrcwQlImA2ZoDqux5wSZzG6avxR6L", "jFKS3hX10mvQjT7EuQwdF5si6xLxCs0q", "ROfqffbDaVdHt4JTEFYh0m30j28xhhNm", "CzAfvlM8HWQBMpJwy5fjISSaZniFHWdz", "OVvN7Ihzvh2qhL4jXTpFLTppiuqrR4pE", "fztoL799Bxyopz9cJJM9q4y1xBUlBSwm", "N25gRfOKzCo8oLNfKYjqnHhVCfTa31D3", "ozcvHT8jzDhGigkGxMJZwwpFWH77JcLM", "Bdk9rNu0RvAV1xulE2TSaiLr5vDkT9od", "ZJgz0K73ITsbK12feXTmrOz77W8iF3sb", "iJp1b1MU3KFF2L5YxW4HLU6Df62T3Gm6", "Kurf3Xa7SMfVhILPlITvTRtadPWpOjrB", "ICbJARpRHWqXbpFfxKyMsvQUTdH03cZT", "CZJZw47WasABKUiKBNZqmegOE6NKf8hm", "sGjPqtRnsST9lIC2yRPfRRfoyFZ5Equw", "hCUvfp6LUpEeFp6s2blq3jkR7iaSRqM2", "NXcEKOOQQComJB5Xdk3vQrovw8ujkVMc", "cA1gW1q2eNmvmlVHo5IXVIlkZ8i3hN0p", "jHXLi0hl60YqLiVpT1JFpwwpPsABPpxN"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 32341;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> grid = {"NvHbdlzceGmermiQqyXptfgKkYriwmfvhkgwhypbopCqlrFzen", "OngwYfgA9snwlvtlnouhgtnaVllahvjcguinjygntnbrjgjtma", "kduezdfgtxtujkcrjiuhfmstsszpujlrcygFShagjtjefjrghf", "Uwue0p5xvfkVmipxustlvtd6lkadvgztptqzkQnIxrmhjjdbmu", "dfhkpbjbuyaiYtwyalwcgNBntwxvx0viatzk9fzRrxfNQtOgwn", "gxi8YplPswjgopqhxnUyl2odtmfnHhvnhyeJfa0ebwbn3awvzp", "cwonioySmatnvluuhlGkgleAoeOcxhokiscfHhmijrjhFzurvw", "F0sfzhhacgxswxytXiaZeC0sraplynmmridrufavYqua0tilgz", "haDk7bfarvrnviwtxdblfc6MbNPoqmiuyEnnyxxatgeijpvq3v", "wfyoahridtkftdchmhbntxhiZimbzowkivnbvmkywdolAbewlt", "hdvmxorlsvuccXlkOh6lajZyrouTwidylzeyypcgmbcFlwtBuZ", "Vygpmynwmn8fmmxlsqmfgKz1mxwpxTdbkeppdfnkntFoKvFXqy", "ZgsppzTdrpAhRdhJvsqkhcagurMqIPdTajhxoljwffyGXnyoo4", "Vwj03riunpmDrxkqLzhBscd969kh5izuqP7etjarjtukGtfmnc", "hefrkzfqSpqrgqQcxmSxzYqLttuhmUdKqcHwtufuaukrKocwni", "mKoxpanoulcrnXopgltpercqgbwtgvabgTvzHhuwxujyayuqIm", "muivYis0byqpUqlkpwald7rnfeZsfAgdfnKhlqdqGrfombNeeb", "ejnx5f6gehnd0shbvgimltoaxzginpkssPctsaHyjzywjluohk", "oyayadlpgmap6BjfoomihoizxnqvktrqputycaayeHwrPqromq", "tpkzr2pEmualoQXunLapivoSlstjuGuliepjCgMwWhEiAuqvwh", "pXx1e8zuemhskqbKafErostZdaxrrNcnuewuzlZxfywxiEexte", "dK2b6ccqdkxpmyPmzolBgyjdwxirpMcaForntuqxHigyF8wwsj", "xjiUggqewpOlvbpdfq2t6neznEnfwrhyccmpGjmjbt7ga3Wbqk", "4uhmqbwdyuqligsiwdeumxIwzBaxALbKasbTakvbdneklnfrmd", "rgdaVwwkhujezba4jvfzzfdVEtrongjuxsqQgppfxhauulmisa", "rhBmwrpfowTxguFhVbo2bbtuKjsdzguKyijCsymgdfk8gSj5ws", "pwsgerbIepfbfsouhaozJhhTgnnElomYgdcoshoSjxlpet6svf", "tFmSeAkadIwi0amLvikmfBreYhffvpzxlzKvEtlXCznuqGdpsr", "dbCVqtoqcyFltcjjfdudrfbyizuqx6wrfjwhbdlilrtBwtrdoh", "Yowfrjnx5bralvoqyebqyponqlguFaiNjharkCczmHjZikmejg", "ccq13o6drnelhxqfqpfqlqrdik6symErjvhrd8ryu4dgbjuIhs", "skmcimbatlpmugEsFGosrh2pqflxmkngfewbXcdjdbhsmqhspm"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 31032;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> grid = {"91XItn1IBG80DolT0FRm7BH2BBugTJiENXV0AlPpJkNApQVIHL", "YryILwhBTBM0ClXrlAiHajkHMx1u5kQEaSa5wJKsBsZ6PZjyHY", "B7G7qiPEVdkoZOCdpYVsFjilagXciHmJuqAhjp78vvHTpBSvHJ", "ukScvfUPAftc0si0GwtiAi1yQwxjKmXojatz7HLLTjGf9dUulk", "y2woNEtiy4Xos63BJaQeee8HqXC6A4zWqEuJ3fSXNqXau7Yv5e", "GpMtCAUh7MCDQpa2t8rWUwQNCnirm3LltjhRMRy7AnI9jY5ZKU", "7UwMX25634a7Cwq1B0BdsKS20OEc8FQqa5KMBjQ4nMQVJz19B3", "7yZO8qCm8oZEe1DWcltfdVpnXSVNCOuQu58RmKEfDDznFCZD2y", "VRPlEp9J8Rm91lsh8PkH423NWfGycW2Ky0az6t8VAhJhRahRWy", "IuSVTXrrIMENvzDX1PIRHJH14VCxRQ8KWQvgfuv8ZIcMoSEo2k", "pseDvowImoEX61P2k0h3SO5h95biOSFn1SEVS64nadFLnUsOEl", "J3XpSWg5qgYOFbmixChg07Zc1xcLltNwoDkKzaKKiXg6c5H2r4", "rSWGMGqQvRcLtWHMQXJsLd1Osranf75iLPShTz80XVa4T9AaYc", "IhVhnwBrkQF7JFnp5ccZYCpXbacQ9KsnKcjONAQCjQ5jHg3gad", "1EoxTttpZRuiJUlIsqHd8myK5BUsoZ4B4WomIM9EMFihovmpOf", "8X30KUb2Sp30Bb3n1wjBCgDSoZLQvijFexsGwbliFuZEOhaBZ8", "Q6FEYJ8sTsgvmDb0OtNuxdWRkFFIXrY7GiOIH9sWuh0CNhgFnm", "gf9JpuUcUQ2jPHq3XRcFS41BmemQP5yFwntYT0LdC4ohqhOdS2", "NUvCBESulKiBZGrOlbOW7aJKw5e6kWBGIK1GAwm2V0GOvZh1vJ", "4tsjthPzjDFO2iJ8E9vdXvLO547E4u7ag8omU6bfN7ejRjZ8LD", "D5FBVv9w539GnDu9hmrCUfR54jCMD0KxoWivwZD2l2h8SYryFi", "hiNRjiZ3dHe86uWVuVvpQN2MulbBV8P206BZvOZ9lzOwTsF4Gy", "SvId0RCmM8MXIj0ZYemqiaZtTkLA5QdbwEbwNhReahrQtLXt5g", "VcexyWomrk0AHwPml6FSKzeUqmuqUzvVgvt2G5I4JVSu4m6PMK", "zq7SSyPSPIeNid5XjTUXIwuRlc8X8jeqa5EjTRN1frEctKCnId", "AHaXInjds8DOvmiTkuzA69fN7PXibssXQVmdT0QU2Hims83g10", "9eyVuTygELH4V1HgukGvI5AZKdwXd3Q2ON4fkb6AXc9SdatSGU", "LrVrdl3eIscWOfG38lT4gp9h7OG2kqALT78wQChVGSexgiSlh6", "tjTk0QdBPHeCMNW6gMfdVW4mbQiTp8Fh0w91KlFHVBYEK6OMo5", "sZUzDeBfSfhA0NejwByUMPQ2dIYn2IiFon9eIAi0m5XY5X3zPf", "1hVuhKp5psGjYEjjZvLPgNlCjIif17eEgm4r1RmtUlUcFzLceA", "eB9Hg9KSyVYdFZi9JJEmcEiEsMKO81ClHjTBqpv8r2VqtwBQ28"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 50288;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> grid = {"K", "n", "D", "D", "B", "U", "C", "J", "F", "q", "R", "P", "E", "F", "A", "O", "y", "V", "Q", "H", "Z", "J", "O", "I", "K", "Y", "J", "V", "1", "R", "l", "K", "M", "D", "V", "V", "B", "P", "I", "7", "B", "R", "N", "H", "G", "S", "Z", "I", "X", "G"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 702;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> grid = {"o", "3", "F", "8", "y", "f", "T", "3", "O", "2", "c", "J", "E", "W", "M", "8", "b", "w", "L", "o", "n", "t", "6", "s", "t", "3", "S", "x", "u", "o", "B", "u", "T", "x", "o", "q", "R", "6", "Q", "n", "6", "T", "7", "I", "g", "4", "m", "R", "c", "K"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1204;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> grid = {"BS", "Ir", "JE", "TF", "VA", "CX", "dE", "8T", "SV", "YG", "UH", "VA", "zE", "HP", "DA", "DH", "IP", "XJ", "WC", "TG", "Gf", "TE", "TO", "S8", "cC", "EC", "PT", "Pq", "0T", "QE", "xU", "FI", "AH", "PU", "PM", "dm", "HX", "DF", "LU", "HZ", "SI", "QG", "oB", "K2", "GT", "l1", "CI", "Uh", "BN", "NV"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1991;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> grid = {"rz", "8A", "u3", "Pq", "sX", "EB", "SZ", "SK", "uL", "rx", "qT", "WN", "Sf", "yH", "bt", "sI", "Nh", "Da", "zC", "KO", "yU", "jx", "s7", "G1", "qC", "ci", "cI", "aF", "lo", "GF", "NX", "N3", "E6", "fe", "wu", "yO", "sP", "Qj", "eP", "F6", "ya", "cG", "aV", "fb", "mk", "Xd", "iA", "YF", "y5", "Dw"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2312;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> grid = {"3uM0", "3255", "512r", "8T63", "O494", "4t41", "3427", "0k06", "M686", "X158", "u363", "4554", "F44Z", "v265", "56k6", "F626", "IOx2", "5X18", "8167", "0K44", "73c3", "f49N", "9648", "5c01", "5420", "3585", "BN69", "9G8v", "11Z9", "4386", "7745", "t442", "vC23", "P906", "g14J", "9d23", "3609", "C790", "0706", "81YU", "633Z", "4116", "858u", "d0i0", "9TI7", "2095", "329p", "0mM5", "X98D", "44A1"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 4673;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> grid = {"t04z", "WYvf", "Nz0W", "UdZ3", "rypV", "DEV7", "P03z", "03QL", "4L3d", "kpw4", "vmfV", "cZdT", "T8TB", "hJgG", "gHhA", "lzzp", "JEX1", "9pS2", "LI3U", "xWLG", "Px48", "1qzZ", "hYPO", "w3AH", "txT9", "Zkvs", "qMc8", "Qzjv", "sN0Z", "GVme", "3UbW", "SzOT", "EDSN", "nHWQ", "uwOl", "qY5j", "9P46", "14bj", "ZpDh", "INjy", "gwGc", "iIgu", "fPkQ", "zrUf", "yV0W", "Iobn", "FkL7", "j59u", "ZHt4", "abJX"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 6462;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> grid = {"59308100", "35319810", "81SmX826", "K41J1l12", "04x9192I", "19788935", "60819041", "35682731", "9W4U31h9", "63231682", "2985bir5", "2Vf73Q4f", "602pi149", "492F4695", "91032P32", "437n9569", "D6c57305", "89t73559", "DgF70818", "5d64209A", "94R2901W", "54294R64", "59412542", "59e46161", "6L912082", "77854RI3", "81675269", "94338Ycd", "92232456", "4852r627", "kI715831", "0A425595", "257665I8", "t7557684", "90v1Y28M", "2480x079", "921y911A", "823233c4", "ubQc21I9", "fN5564b2", "64WI1C42", "9929224Y", "26304015", "M3Y875Uq", "78224614", "e0054248", "501L5g1i", "6k060961", "68039012", "50752960"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 8247;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> grid = {"f27Co2a3", "1vsvNVOu", "b4dLJgZM", "AjzeYsgf", "W5yl4C8C", "vkn8oZdN", "c2NnEl7C", "OEbF12Su", "N6wgUugO", "FW4i5Pw2", "goW99Bdi", "qduSctA8", "jOVIuz4i", "edlxPQdV", "wnxuAvoD", "2H3hVsgg", "MuEbuYfw", "gE3y1GZv", "VgrYolok", "bMUnKAXS", "NmxkC8cr", "aFVJkKII", "hiZiDGi1", "7c3QhBSR", "QJnTdGyR", "Efb2ldxU", "aMoiTifH", "0aWvbAZw", "FonNE5zt", "gTY8jwdM", "y2UtRgHe", "iWpjgRXv", "T8hAV2jl", "n5WLxSgu", "GlFTjVfU", "gLRQkvBq", "WOar6wut", "HQ8RpLny", "G3klzSKp", "2WxmkUvF", "AfGchL0I", "gcBsnqZk", "s2Wfy0Eh", "4IIbfaqC", "SOSQFgZN", "pIhgvPa7", "L7x8MVgY", "Bs7Tb9Pw", "iSJZ3iKU", "Ps98ShMB"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 12548;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> grid = {"mpngiMakpvoyoihl", "wgRprbsxxvmucN0k", "xrtmggwfgpyflsff", "erxsazuFwjnxcew4", "qmkxegkbyEjlytyf", "dm1vtkzdjrvAmDgc", "mwuihqmcpusMrdkz", "uaoh4nwiLpalhbay", "djujr4bS5lqnWjdn", "vfwKv6dm4oedrbsv", "xouwwgiaFszkTskf", "qNdrlrkfwyyoq5gz", "dwgazczxkMtvfGop", "ypmklxlilhbpZnas", "izgdxiuhmdvzuati", "8ccvjecggitotgsx", "ww2iiHkVpnwDlskm", "r6jbllvxgguzkulJ", "zweuffsccpsplmzm", "wxvvqkvpfznecsm8", "bxxdxkrkq3rdoqyn", "yqhwsMsrsvhhur3O", "zxxlitgzvjsgWodd", "qswokQBakdyyxxWq", "uodzwbqvl3nlbqeS", "ebabdnzqdkNohmij", "jnrqtwurbtygwXjv", "lrxjfmyjXakxihct", "sdliOkgmu3B1wvji", "btiXmsggcgteVfQV", "fqvdkgnieqghjsSz", "qamyhJwmvwmkpgef", "nlhiRfnezqnxupsW", "pgfibgkjPizlqipp", "ghBlojukmgrF8psj", "nnxE6sStoygrJekw", "NueglqracPvjjahM", "eiBsqvalzsuygv7d", "dgibsdzcjHzqfjjk", "xekwEtkdQY5lbdaw", "ohuesliolebzdf1l", "sjyhcnkox5xfbQwJ", "Awqp2yyefF6yhryi", "rbroffhbGFlazfhs", "Ciwjnquxcrsjfmii", "f1sgiblCxswbpxqj", "ypatvKpviuonfprj", "rcgwmbvhszubdukm", "mkydqjPxryxxpOzf", "TgzBmxmrqxq8kalk"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 14578;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> grid = {"aUGMKzjIUqjeo0tl", "k8sTxaZrBKqYXlXl", "f6duB1mZRPxhSTPL", "VzsC4g0M5PKM5Ipm", "cM9adHWQeCfJvHrm", "kIW6oBJ8WYT2sTOq", "1xajLB1qEVgNhMqP", "0Moqgq6WyBcmn9Xj", "8Hz9FHqUh0rYNPLU", "TBqYbRjCii69O7wf", "t9eb0OjXFdgvqYJm", "RGGqlpq5XL53snpt", "nZAH5D8Mn6fXEctp", "J9U8H0nOiRbXIori", "FnHeqOI7mS0ChppS", "kgTMitQK1464EYIY", "z99AHOb95hIvJol3", "RryPYWTUjvwj6R9N", "QPDQR1YEqiFYENRJ", "vInsKzSNLZMT3b4C", "DZpP1JVnJybCoeoL", "WkUEkgvUXoKhcqvh", "4Wj8YCC6iJbNxBHs", "KxhFDVkMqOoIuur5", "e2gaLIuCRfG6jiUb", "YSFsiicZCogeubAr", "7QM16wleE5MscwnQ", "DqTO73MyZZrywbyc", "K3pCpOLMiU5vRpTi", "FrNgaHBBq5bLCzfh", "2XO5PnF5WwSEbY0r", "vlR7Ea1ILjcCvhS5", "RyJpHOlZ7Sr5HDEf", "0CzV0MGuKTnIAaw3", "ArXKx7lnlwGfdb15", "Y01vnf54bfDmZ15D", "YlUzCK697G5obkGs", "cgUX6F66dT0bzqNK", "NawBRVlGjI9Xk6wO", "TnZaJ2PdxxyxPrGo", "KrmmUUEpm84dv2L7", "Jr4K0IhBHZWx1XD5", "XkwzCdpJx4Y9jWro", "kbB4ovftOHq66ili", "z7JgyQS9EOH415W9", "hZ1jw2pvlhkRbDS4", "BiLKWEz5qh5w97Vp", "DTsSgnHWgt2hC44r", "BVs3hnS2z15Mn5YI", "n1wYbtrv0axvX67V"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 25096;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> grid = {"DVHMEWBKC2PBAP2CcFJIFJnESGwUHJRC", "BSLPAIrZDZBSIIWHPGMUBEVINRCPTSGI", "2QAMNFVEQPXIzSSPA40NIYQVREX6HPSq", "CZWYGQKMYBMDJ3AHAAYECLZSDYER3XFU", "RZ3PeC1XXNOZH1RRnVPJNKDKHPAKVQUF", "IBYPvkOQbTILWFCRpBWCKGWFDCdF9IEK", "KSUHbSRHFRVAITMeYxLBGRLN9ABQTJKE", "RAHMeWZYMPPUbQkaHUEYNDGZNXzDAaOK", "VNOUPdJJAdAVYZFGXgYBNHRYLLS9UE6J", "JIJBHZDWOIYQSSET0ZYfZMKIovIMVDVG", "GYWYABNLOOUwXRBDJZaYMUJnKvPpMYBX", "MBHXFCWLCDTbFSF8FBiyCL6IOIOIWKNX", "VZ2rHWlOKS9TXVEJyCZOTEAYRP2y7GM0", "AjHFYJIJOWPFYISUKGRHYKJRJL9YEBKK", "MELKIFZUSXCGAHKQTEXhWVKRCNTVOCZ2", "DACDWVZJREoABLXQOXUPPGV5DAJK1R4L", "5GGH8KELDVFFSLVREVYhMZIQPtAuRLTP", "FUIHSBhNYSTSWNSINATXjGZKK4IPWYKT", "UYVRQINYNoFWXVHYSUA5QQIJAZHCBNTH", "kTZBYZM8J2SFLQjQgAOVQCFWEPQSB2EP", "fMTSYPsF8PBCDLoUHPBXUSvOQSA5MFHC", "CB9LPO6PLDc9XSX2ZJTWUoSTAVPHDILL", "OEZWBVBJuQBWKDGJLRTKQWTVSHfJYPGS", "BMJNBLHQTOZYHpFTFGLDJKILOGFRLA3X", "FOLhSKOSrEWaDHHDBKRM0GLYCC0BXWZE", "XCZO2MXWFFXOZ7ZIRZJYTFNYhAMLfTAB", "EAwTXtDRJHUWKLK6LQPHCXjNCZJNUHSU", "WzUTZkoJpELDLOPXPTBCSWMYXNqRYLYY", "HKPWzIUCZDWMYWVOCGC3WrAPEQEYXWQh", "mXQOYIGWDXPfRYZNErJaZJPVEXVYVKYV", "WKAOJEPAVUAQDHNOQEWZGexPHOCMJEOx", "LADPIaHVUNAkl9WPaPFEOYPPGFXUUHOE", "XWUJBRMVSAPMTqYWWTJNYCgDKOKJGDgS", "VYvsFHXXf1A0DDTTKmQNoz8YJRWOSmFP", "UEezuLJA4IAMMFYDYPJGHbO3HIUKYAZI", "YPAH1EOCMTXINEWKUEPiJOV2tIKQUcTE", "HEUKLUanPKHAKYJJRBCSANVTPw6FOVMP", "GVTIAHILmQWEPKXLJAKBTDIFJWDvQTIY", "OWXS0PPLLjLCPTJIZ7IBBUYtXCALKVNF", "NAkQrjPICPH9MLUUJWTnKPUDTZTCZVSE", "9MOWKWGCETUADUKOHqTNQODZBhMS9NKW", "HQGyOVZIKSTNPPuXJDkDCNBakFWRMVLI", "OSDCJWFPeGhPKpQFDSPZLLNVRKWUPxDH", "YJJYWf6LIEmKQUWQFnEDb3X4AmUH1RYA", "nSHHOFKEQIIQSOFOAIIFYBFJHFUASMX6", "WjRIJCMICwVOJYKCiNSKhXXlB6FFxQDS", "EOPHZxBGUPEJ1NHhWEZCRADRUEuATVPA", "FCWKP1XBXKCFUJ2GEDUXQ7TSDHnVEuTR", "HKVG1YGFDSmGZMBBQJAm93ATVRuTSUPT", "PEZFTiDRITMNBZEMMICGCFAZMONEXBQG"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 36377;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> grid = {"usoAydUxxcRMK8oClfNTY6j5svE9nwUx", "oEDVYRdsrnk4cZJgILr2WXRmy1Alaoj8", "8zvoO3EK3VaPQgbPFkWKfukH4jozp5ti", "cmFPyp05tMdfO8TxsPZ5R8e6CIgpSiXT", "7wOwxw3kN7YmEOpmqMt1tf4eSj4RIHQp", "5Iu7r31phVcA6XJl03ZoIbNTBXpjpvAv", "MXRGeDzsGpiNQkRcJMjsZpOv8M2xgWar", "ZsmBdrQJpAUFOCcgCiXjuPsCo7rcTgt6", "CKyg6EpAUdSQiC9xUM81Nm1XR9klgclC", "5BLQNXh6dPLisy1EiBdZksNSBLAWEzC8", "Vyvt95sTqdMsdJCn5YQtf9tROEOOFB3u", "fUW7MLoOeqn4kWEDINOIaQI3EfjHK8Rd", "fewbEfsOVOJQquQq7M8NTC8IZL4HHZHn", "bRmXwgZtPqFOrcPtSU2EarQgFFjQ4ubf", "Toh7x7N1R9LsCpIC7Vrb1Rjf8cUwOuVJ", "NILb959Qw6M45u1k1OWDNVxTuow1FlVU", "SWA8CZIsqa9sIPMHTQT9HHXvNYq2JXDo", "JZaO2Cawbv4dghruC2PLIgW2NvFDUI3z", "016sQRCj3voRjgUC5dXUIJQaIgrfp01R", "VrKaO2ChmTHiLd36nUJURbW6rQchPiTU", "NuEXu2d1sBMOmycB3YhtELtgTyyryvXr", "wzxgjIkdRk477J5XMvsFVDDcA1jTO7tj", "4tml1vpfz5NhXIY7RQhwiq4y6BxBDzB6", "sDfUFOP7MBOMA00FA83UiiTa6TuzUT3t", "QQywa2rXCndY25QnngbAcYF0kj22QzSc", "U8m9LGXypIjBHX35JnjeGaSaC3nIZ8bf", "pMp8YbbOvE5QKF9PIoPRdzvpSYQdbBqc", "ePDLcwhORueFJhEhYwiY2WrzxPuY848N", "j6e98HoLsiE4uOZdeHXRk05eGyyTP4GU", "aIxkQH6tVVrNcn35MEMgvydutl0eabsy", "RY9cG5XYUZVCSydZZRsNmS9HAJYDLxhR", "AxOBPSuQblA3orJ8n6Qsxf5hjWR7Fdp8", "4gwePD5T38aambTSUQ0EqwdQxvIEbo7O", "EkX9wrJusM4ijUpJJUeFiY9BbIiwZFyX", "e7YRzRJcmqVd3hTP2j1ELu0Tk7zY3fmj", "ikbLvxVHku2zKrvY5UzHJVPMZwJAJMEH", "TUQzayykudrqSBP4JJIhXEznVvaSBsrC", "byYtc3n35xQcesjHpEAe1ycYnrUcb0Je", "QfKZBH1YVHIJXJZ48hsMj46ZEVLmhaZi", "He45H98lQcaL19K1rtQAA6awFQKvtDzI", "Cw347AM4jhzSeXv2xoXEo59isQ0GNcUA", "3ptDmdw9ovTAarzf9WGR60QB3OYRXCf4", "1onqIejNE8WiimIWAN84YMrs7Xcn6cmw", "7OUWjoCgjfagqucZLoBrwsC2UI1WFeuq", "zc2xDph4BEcG6HIu8T73DZZ3aMpGq1LS", "Brmvr4cLptSAjhp5LPqpvq6WQD77tpQG", "zAd2QD9ADvgYgySFMUoQFi1MQwuDdLMd", "pyzalpmWNrCaBVD8mDb7v9cegpGwWrC1", "4WHlDb3OXDrocde9QL6o9w39F70ZIkOi", "F90WnjTRgdRjkR7tzPGGaxuvMasyWNOk"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 49889;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> grid = {"EYFXY3aIISZRJIEPqDYScBVGQXYASEQRCFWFYGKIhUXHFJGKFG", "SVBXTRHNBrFDNCA0GGFNGKLwrgTVgYTCJC1IAFKAfULH4UZCCQ", "KAAAMJZKKxpyEEZWwVBQGABqVwEXNNVAOKDHeBKTMWPUJFCJSG", "KPTWABFHYJO7TElG3PSYLWFARKXHNkQPNNtPSRJWT1XRkELMPM", "XXWUMOCIZILTHIZADXJEDXWSRG7WXSLRdOwTAkOGV9OQPZz8GE", "t1VSTSICDWNXJVMzNLBiHCZFNGCkDISLHPBBDHSOSKKXJMFWBD", "PjSPKAYODSnEjt6OMUUSGCGDV7JJXJzMDmHvEW7GNVGpWERTQW", "0QVKKFJKXGKMQKODNnS2dIWQBELAGAYTU5LIZBVAWTXS4PQOD5", "AIHVTFQsASNLMgVBS6XCCFsFGTPQJXGREHS8EWHYTHpSKQLZJK", "yAOA7XPEKRWIPVYYKBPJZTSJUXgJLQPTNRMYEYOZOWCFJTYOBU", "JMNWHV5KYR7UoPWCHNWBVKZBTVFFSqRNDTLBZVYQuJRfMEPjNZ", "PZSNZOFuvSDxJQRRBQNHrFTBMCuJEIGRQdQ2DVPEJAjOARVMAU", "HOSHBQpKFDVVLOWHVHIBLOC2FHIZYMRZLBJFWHYVVSCWKQNMTX", "SJQHUUFGEAvGGEC6CoBPZJEXQHZTXiJIxVBXcGVIUQUbbUGvOU", "HVSFJUOtKIODoLYPEEPU3TOWRBrLMLVGAUNSFTsOHUDSUHKWPR", "jQXCXREDDrJXEJHtOEMAEPMFDGYSZfVLUODCoJdOVNXXOGPSqB", "SLzPQTObECRIBALnMFWEIGJHYZ3QILBOIIZYFhHCORJ5UMETUJ", "XXMp4wNwTOAVJGVGzCOWPPZUKPZCVFCJBLXBSVBHUAHUBZZBYL", "IGMEWIQIDFOJYYQOZPYjGOBVaHaBYTYYTNMYARUVdBLtGMTYDU", "ZJ4TPPIVYZFb3OHAvMHAQRZLUTCZPCM2LKBLTBNOLCXASWNYAT", "RCsyPBYNqYONIOoHWTFTOEuUOKQwL3WOYBjCEtLDKYP3NDVs8H", "HPNDiNCAPGhXNEBxEQdOA4TJACgh1FONUGWCTS6IT7LVUW9BPB", "QvOQPVDXUSUVGVYp1EQQRSLJTYSAGZG9XLBONSATHSCYENOVeK", "BXFrUNVETLU9YOhDTAGZVMNASFRHEMJWoZSCUZEDXNEVCHPIBU", "CzSvBDFJNFImF6UHXQFIWMAUFpMBJZUEPLMUuFFQNSMZKHYYRN", "UFOSDfDTEE5KACZXPJUNSYCTAIAJZkKPXJPNHNTUrGYKZELvPH", "GnBM2UQYGtvtQW5JFTIEPEUYTVRJGSPVGRPIPZVLLSuGMFLUSX", "NZVGEPOLRPWJKJKPGNKZVAVKIATPsWrTPUZWUBTN8LAKWFVDUK", "Wt7F3RqHXMHYYUUfHOJY3SnBfVMUEJiIVDEG6AHBCPDNTHMRXS", "mDK2MXBZ4RXQzSH2UvOBTDLGRXOIDpkUVCRHrLK0OZCQLNVWRC", "ZIYqVNDwNJEKOGDUBQJJCTmFBQSWRNZJTLPAWNTBEPSPlPCGSS", "0HQRsIMONDMCHtLkxHQBCQoHJFWpCVOBBSvAIPPENSTAKWA1Yy", "UQTLjYoHEXA6CCLWDALWHIAQFFXI0TBYBWGIMTVZXUNEzRWEVQ", "7OEWCNbVKYGYCDR5VNCRKKMSDULOWYCFkVEcAIOVJXUBzBNNTQ", "NHFQLJWsIIqYSJFDuJNWJIPbSBTPNDW2XXQVYZFMJuIC3EvPRL", "VZkGAROQVWJCVTLBDSGHBFVNA6JdOCPUYPZLTOKSZOSOTQFKRM", "MCAMMEEOXGFKALNXBEQAg8TXVYUKDFAVdEOBmI6NIjEDZRvZUS", "NVXSlMAEYDHCPQLAgKSY2LUUTSPkCOTNeVDmDkPMGPZNWPOJPS", "JELT0LISWJGHXXDZUYf3XHBWDPJCGBNBJzTZRKTFYFGNCFGeLA", "UvNYPjUNCW8MIIQFBXDCMVEAFNSGCKB2MLLYEHYXVWLMPMRKGD", "WUAz32JKWG1MOxNYZXDRGRIHtERX9TKN7EVYNTUVXDQEZDCSKJ", "P5B6ACSXEVsLNJOWTUDC7sPO0AVNMzDmWZZVPALMAFOkGKXH1U", "VEJPYYFZMETCUPCM0SYCXZIKCQA8MRSQVZ0FHfNOCWXOJNQUFB", "ZMYQNQCyFWDLOAKGGAOdAULDTNXYGIMN6TTQr7LNR0CECjLRGP", "J5BLSOOJNMYXFHVPGRLGIXEMEQAMWO3HSyRVGZMXXSGVCRESZI", "ROWF3YNbANFBxgJ0N4zLUIZXKYZXLR6hRLKPXYUMEMLQEEC9HH", "UDYMUjGuAIJVDAGHJZZKN8GAntXCAYRLhYYHXvzSCDWIMJD7Kq", "TTKZCMaXPtwOKKQNJUIYEJHkVL2SUkPtNNPnXWJG6JUPU7PZSO", "RtJhWhKUVVZGYSSDQLTENzCUqIG2EZ8TZVQXETDvVLVBAP4D3L", "kDjCYMTFAPPbVJVNOQzOSXZILQKMEZFC7ANTLGZOYIXHVXNNCM"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 54902;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> grid = {"z49HlcZx2CRhLQ1zEPTkhDN8Oi5s3xInaTKOhspO5qgT2iB1a2", "OsE4KaRvYwizxv1L5pWzgPIRDcvDRJS40z3wr9j09QstYLkNXR", "gMUEYrsNAnuJPto4TP0fgZyJ8weAVxUBc0iz4C6MABhndeemyV", "blA7V3nc78pSQ23gVCYFIgO5AasbySVsLajpnFJy1S36uAbdVa", "MQOmvdOZIALAfFGF9diZ9Oq1kpULRHshnfIIlxZqh35pMTmzAT", "WUxQS2VTuXMbLkMkzvvJHjd8zPIIQng6TjNCvGewrc8JcVg0TR", "x77jJeBmehimZTuFLiZYN9jtxB90J1s23DtOiERtqoSwRMwpcb", "9bt0Yi6EDFU3Wb3pBXxAqJkvREBA1vk9iQHgBcQXIm4FgyYcTH", "MDC80I8ic3RWlhqidsfdgB0MlLLnKQkHCh8gRf7OjRgaUi15oY", "grNrMmYJxUdTrsMSwalskfMufK60ayRaOTjTilTfyoeZoaIG6s", "loluboHctrzkoIreGxrdPX6DyYpO4l3HEFmDjRPxwFYgwKWwdC", "dH6PgWTKKEfVT2zAAy7B6QGuavYd1T9s6kPju7srgdMRq4M6Sq", "iIrHTj7WCuauc7JnLEyZRKXNVVQuxf89Ibt909LKDnGZ1bOpU2", "1pd2jVHS6VWhkUXmdkOeHnivfvJYBeV3ke1PXWJNx4zxvEPx0R", "5n309WihUorpJDflNgwUVGhAu0l4ikwS32wCU6Hu3xiiT8k7YD", "kGmrOLGQ2F4Pf0Tjsq2l2RC6CudiYvtmbmNiWeCiRa3UYseubr", "8ROB6VwpHLVTDx0letghbOI6jXTnDVGUzhNZiu9821LKKRhNSZ", "LadW3daFsYCEZSlBAN6rLC9xmvAE6z6idFymR4D8stbScDKcHg", "Lwa0Czp7mrBo0KK2rWNXrSz5inuIcTQd2bLLiOZ7JRZbT2MC7E", "vYXLcyO6EtlkaXBq0zEnZuNaB9fkAHJ6hUN5Fa5G2Zzz5jDZZp", "qc4JbLPhi8M7oyXUkuAaTjy8U4RCbaO0xHhqmfBiWiKgcrXk04", "on1Tcv6HzfPYaR65Y4OhZIi9hrFLeM7LnyDV4v9bFA4XTervRJ", "uG4OaRq5MdpbzTDAWyhMcBlYSrNbB1qxhY5BA0D3sE8dtf3hZ6", "CL83Il8Mluj2wxteMoL3CiBv7hbnXto0n60oa8JwydvoPSUKxK", "CQXI4nb5dkT38OWM6qqLXkybNhkajogwh9wfC2eBQ1gVIMNvTl", "4b71t04NQxRItN5y1SvncxZJPs1eXg3JsRnzA1PsAGfUJrzD4z", "rRETi7azXG5i0yPhu3fmn6YfwgJzthZjzecqBj9dOMn6OHHs1J", "QXBykVggd6Ih07uh4avg2PpiBtgmXmAXmTHqOUZuvbXn90NqZU", "KNlntFDXQeNycLT9vhSYEdYe2ChvXhQaKGsQbVoRgkJ6Sj3T6A", "miENEXZ05Gsz5jH4DcFNWJr4E1wT53J9kFRLxOBp76caIVYtmZ", "x8jtWMcqyXNoSIel8Mi1N3FlAzjmCjxclSeC58pSk62ocnUAcE", "Dzg8s0pWyHVpkqzHoBpM60D0Og4arJNPPIPasdXAGQlXMFHQbv", "BFtqd4Bz4seA8oMtAA1BtpwWA2Ix6IZhzE0hih4yY3AsO2oDhI", "iN8vur18QB9Rh3r30IxhnihA5IpHeJTLNvyA4YI8aYbYDhyvCU", "xSO5FHFd0kSCBQiQm0hZXivMqTHbpySxmtIw0Nxkx50lLrs25g", "PKLM187yHGL82l2D1pUKjX1Mnh0WfOHtmbj6eIU5o2x5guy4dT", "EMnvNjRw37YSbrd2ZeWGYKHJRD0ekDpmKyYSJMktq8LXqzKQTt", "MIQTy33n3kckIVpyD38RNek44QgVpQm2fY46vZGjw24fWZwHOY", "gXPK5lGgxHd8S39fDw8RZQT7FaRfcOcAQ0AdoNHy0JjrD16HtX", "FIqLUng1S8J3Oq19gxsa5umvmTzO47tmPoCcGa1QtQFxxrUHJq", "l45Ti9BkhckeumZYsh9JCQGQeJBG5wjnI1OBUUpk6n1OODzjsU", "5vDjFSM0ZbAIY6wTbXjcHJwnzHG7z2pX3M7K5sZ57ZmVi7P0rl", "Y2WekbgFPh4wgFYs4MMjG8D9mxmIZ2HCV9JHT7cwnMdqb77UsD", "4wSIygtvno04Qd5PeNRoj7XWLFzT24cJqlOdeVvrCuBw5wk29X", "5FkQ8GwXrm7PDylQUtlJhBr1Gh3svpkRzqm0UAQH7k8EBQXSPc", "SlwSgST6AXU9CvABP1fmLDxZBsQSo1nuFmqk67zzWwiG0B3sXP", "AShLqpWe77X8Fjmt7DyCIg9Bkv278dNLi8yM9ylXAFslm5WQgB", "hw7AAHIOkQGUNkIggfNPkCRLj4YyfamH0HFOsjvTAhdxDWAycU", "8WPLyhZU8SmEWv4k2GjWOczgyro3HqHjc2vTaf6Qc8jvsNoQ3f", "1F6jEM6SWacXLNFaRzINKwJKmYkWTUhvKvRuibxYYhfjQqVeik"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 79039;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> grid = {"00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "00000000000000000000000000000000000000000000000000", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 149450;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> grid = {"05", "aB"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> grid = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1750;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> grid = {"05adrgGFFSGRadffdf999Radffd45fG5adffdfdfGRadffdDFR", "05adrgGFFFGHJdff3f999Radffd45fAAadffdfdfGRaFRRdDFR"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1198;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> grid = {"05aBgBgG8ttiTu787lhof", "051sf2a3t4awWHSHKlTSb", "05aBgBgG8ttiTu78STRo8", "05aBgBgG8wetysw4KlTo6", "05aBgBgG8t3y434yKlTo5", "05a8TRSWG12h2tAS5g22y", "0saBgBgG8ttiTu78KlTog", "d25BgBgG8aYTTuYeE6Toe", "gh12s44y1sh1fhw4srTTT", "qwerty456xcfvgbhn10fg", "051sf2a3t4awWHSHKlTSb"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 6122;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> grid = {"123", "456", "789", "ABC"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> grid = {"John", "Brus", "Gogo"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> grid = {"123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a", "123456789a123456789a123456789a123456789a123456789a"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 4050;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> grid = {"0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM", "0123456789abcdefghijklmnoprstqvzyABCDEFGHIJKLM"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2632;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> grid = {"dantu", "posua", "letit"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> grid = {"093", "929", "A97", "919"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> grid = {"John", "0000", "aaaa"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 183;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> grid = {"0A1a1E5Tae", "0A1a1E5Tae", "0A1a1E5Tae", "0A1a1E5Tae", "0A1a1E5Tae", "0A1a1E5Tae", "0A1a1E5Tae", "0A1a1E5Tae", "0A1a1E5Tae", "0A1a1E5Tae"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2620;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> grid = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> grid = {"JoHn", "bRuS", "Go0o"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 324;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> grid = {"CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "abEFGHIiJKLMNOPPNIJLKABDCFGHPd", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "xyEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "abEFGHIiJKLMNOPPNIJLKABDCFGHPd", "CDEFGHIiJKLMNOPPNIJLKAB01FGHPD", "xyEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "abEFGHIiJKLMNOPPNIJLKABDCFGHPd", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "xyEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "abEFGHIiJKLMNOPPNIJLKABDCFGHPd", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "xyEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "abEFGHIiJKLMNOPPNIJLKABDCFGHPd", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "xyEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "abEFGHIiJKLMNOPPNIJLKABDCFGHPd", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "xyEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "abEFGHIiJKLMNOPPNIJLKABDCFGHPd", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "xyEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHxD", "abEFGHIiJKLMNOPPNIJLKABDCFGHPd", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "xyEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "abEFGHIiJKLMNOPPNIJLKABDCFGHPd", "CDEFGHIiJKLMNOPPNIJLKABDCFGHPD", "xyEFGHIiJKLMNOPPNIJLKABDCFGHPD"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 7564;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> grid = {"10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2499;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> grid = {"AA3", "AAB", "cAZ"};
    ActivateGame* pObj = new ActivateGame();
    clock_t start = clock();
    int result = pObj->findMaxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 165;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22761052&rd=14153&pm=10750
********************************************************************************
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <numeric>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
 
using namespace std;
 
#define fors(i,s,n) for(int i = (s), _n = n; i < _n; ++i)
#define forn(i,n) fors(i,0,n)
#define fore(i,s,n) fors(i,s,n+1)
#define all(c) (c).begin(), (c).end()
typedef long long int64;
 
bool valpos(int i, int j , int n, int m) {
  return i >= 0 && i < n && j >= 0 && j < m;
}
int dr[4] = {-1, 0, 1, 0};
int dc[4] = { 0, 1, 0,-1};
int calc(char c) {
  if(c <= '9')
    return c - '0';
  if(c >= 'a' && c <= 'z')
    return 10 + c - 'a';
  return 36 + c - 'A';
}
class ActivateGame {
public:
  int findMaxScore(vector <string> grid) {
    bool active[51][51] = {0};
    int h, w, cnt, dif, res = 0;
    h = grid.size();
    w = grid[0].size();
    cnt = 0;
    active[0][0] = 1;
    while(cnt < h * w) {
      int best = -1, ar, ac;
      forn(i,h)
        forn(j,w) if(active[i][j] == 1) {
          forn(k,4) {
            int r = i + dr[k];
            int c = j + dc[k];
            if(valpos(r,c,h,w) && active[r][c] == 0) {
              dif = abs(calc(grid[i][j]) - calc(grid[r][c]));
              if(best == -1 || dif > best) {
                ar = r;
                ac = c;
                best = dif;
              }
            }
          }
        }
      ++cnt;
      if(best != -1) {
        res += best;
        active[ar][ac] = 1;
      }
    }
    return res;
  }
};
 
 
//Powered by [KawigiEdit] 2.0 modified by mbr1!

********************************************************************************
*******************************************************************************/