/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7323
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

class Squares {
public:
    int countSquares(vector<string> field);
};

int Squares::countSquares(vector<string> field) {
    int ret;
    return ret;
}


int test0() {
    vector<string> field = {"ABA", "BAB", "ABA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
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
    vector<string> field = {"AA", "AA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
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
    vector<string> field = {"ABC", "DEF", "GHI"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
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
    vector<string> field = {"AABCA", "AAAAA", "BAAAB", "AAAEA", "ADBFA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> field = {"A"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
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
    vector<string> field = {"AAA", "AAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> field = {"AA", "AA", "AA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
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
    vector<string> field = {"AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> field = {"AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 825;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> field = {"AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 4200;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 13300;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 32500;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 67425;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 124950;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 213200;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 341550;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 520625;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> field = {"AA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> field = {"AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 8470;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 12285;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> field = {"AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1380;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 14250;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 430;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 410;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> field = {"AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 41610;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> field = {"AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 24888;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> field = {"AQQQQ", "QQQQQ", "QQQQQ", "QQQQQ", "QQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> field = {"QQQQQQQQQQ", "QQQDQQPUQQ", "QQQQQQQQQQ", "QQQQQQQQQQ", "SQQQQQQQQQ", "QQQQQQQQQQ", "QQQQQQQQQQ", "QQQQQQQQQQ", "QQQQQQQQQQ", "QQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 701;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> field = {"QQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQI", "QQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQ", "QQQQQQQQQQQQEJQ", "QQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQ", "QQQQQFQQQQQQQQG", "QQQDQQQQQQQQQQQ", "QQQGQQEQQQQNQQQ", "QQQQQQQQQQZQBQQ", "QQQQQQPQQQQQQQQ", "QQQJQQQQQQXQQQQ", "QQQQQQQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 3202;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> field = {"QQQQQQQQQPQQQQQQQQQF", "QQQQQQQQQQQQQQVQQQQQ", "QQQQQQQQQQQPQQQQQQQQ", "QQQQQQQQJQQQQQQQQQQQ", "QQQQQQQQQQIQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQX", "QQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQZQQQ", "QQQQQQQQQQQQQQQQQQEQ", "QQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQMQQQQQQQQ", "QQQQQKQQQQQQQQQQQQQQ", "QQQQQQQQQYTQQQQQQQQQ", "QQQQQQAQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQSQ", "QQCQQQQQQQQRQQQQQQQQ", "QRQQQQQQQQQQQQQQQQQQ", "QQQQSQQQQQQQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 11051;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> field = {"QQQQTQQQQQQQQQQQQQIQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQWQ", "EQQQQQQQQQQQQQQQQQQQQQQQQ", "QQWQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQGQQQQQQQQQQQQQQQKQ", "QQQQQQQQQQQQQQQQQQHQQQQQR", "QQQQQQQQQQQQQQQRQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQYQQQQ", "QQQQQSQQQQQYCQQQBQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQTQQTQIQQQQQQQ", "QQQQQQSQQQQQQQQQQQQQQQQQQ", "QQQQQLQQCQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQBQQQQ", "QQQCQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQ", "QKQQQQQYQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQ", "QQFQQQQQQQCQOQQEQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQWQQQQQQQQQQQQQQQQQ", "QQQQCQQQQQQQQQQUQQQQQQAQQ", "QQQQFQQQQQQQQQQQQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 26013;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> field = {"QQQQQQQQQQQQQQQQRQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQRQQQQQQQQQQQQQQQVQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQT", "QQQKQQQQQQQQCQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQJGQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQNQQQQQQQQQQQQQQQQQQQ", "QQQQQQSQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQRQQQQQQQQQQQZQQQQQ", "QQQQQQQMQQQQQQQQQTQQQQQQQQQQQQ", "QQQQQQQQQQQLOQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQKQQQQQQQQQQQQ", "QQQQQQQQQQQQQQAQQWQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQWQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQIQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQBQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQYQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQVQQQQ", "QQQQQQQQQQHQQQQQQQQTQQQQQQQIQQ", "QQQQQQQQQQHQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQHQQQQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 58387;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> field = {"QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQVQQQQQQQQQQQQQQQQQQQCQQQQQQQQQ", "QTQQQQQQQQQQQQFQQQQQQQQPQPQQQQQQQQQ", "QQQQQQQQQQQQQQQQQPQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQZQQQQQQQQ", "QQQQQQQQQQQQQKDQQQQHPQQQQQQQQQQQQQQ", "TQQQQQQQQQQQQQQQQQQQQAQQJQQQQQHQQQQ", "QQQQQLQQQQQQQQQQQQQQQQQQQQQQWQQQQQQ", "QQQQRQQQQQQQQQQQQRQQQQQQQQQQQQQMQQQ", "QMQQQQQQQQQQQQNQQQQTQQQQQNQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQDQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQJQQQQQQQQWQKQQQQUQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQRQQQXQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQOQQQQQ", "QKQQQQQQQQQQQQQQQQQQQQQQQOQSQQQQQQQ", "QQQQQQQQQQQNQQQQQQQQQQQQQQQQQQQFQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "WQQQQQQQQQQQQQQQQQQQQMQQQQQQQQDQQQQ", "QQQQQVQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QRQQQQQQQQQUQQQQQQQQHQQHQQQQQQQQQQT", "QKQQQQQQQQQQQQQQQQQQQQQQQQBIQQQQQQQ", "QPQJQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "ZQQQQQTQQHQQQQQQQQWQQQQLQQQQQQQQQQQ", "QQQQQQAQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQBQQQQQQQQQQMQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQLQQQQQQQQ", "QQQQQQQQQQQQQQBQQQQQTEQQQQQLQQQQQOQ", "QQQQQQQQQQQQYQQQQQQSQSQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQKQQQQQQQQQ", "QQQQQQQQNQQQQQQQQQQQQQQQQQQQQQYQQQQ", "QQQQQQQQQQQQQQQQQPQQQQQQQCQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 96432;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> field = {"QQQQQQQQQQQQQQQQQSQQQQQQEQQQQQQQQQQQQQQC", "QQQQQQQQQQQQQQQQQQQQQQQJQQQQQDJQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQAQQQQQQQQQQQQQQQQQQQTQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQLQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQLQZQQQQQQQQQS", "QQQQQQJQQQQQQQQQWQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQCQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQAQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQOQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QSQQQQQQQBQQQQQQQQQQTQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQNQQ", "QQQQQQQQQQQQQQQYQQQQQQQQQQQQQQQQQQRQQQQQ", "QQQQQQQQQPQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQYQQQQQQQQQQQQQQQQQQQQNQQQQQQQ", "QQJQQQQQQQQQQQQQQQQQQCQQQQQQQQQQQQQQQQQQ", "QBQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQPQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQAQQQQQQQQQQQQQQQ", "QQEQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QVQQQQQQQQQQQQQQQQQSQMQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQSQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQHQQQQQQQQQQQQQQQQQQQQQQQQGQQQQQQ", "QQQQQQQQQJRQQQQQQQQQQQQQQQQQQQQQKQQOQQQQ", "QQQQQQQQQQQQQQQWQQQQQQQQQQQQQQMQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QPQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQLQQQQQQQQQQQQQQQQQQUQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQFQQQQQQQNQQQXQQQQQQQQQQQQQQQCQQQ", "QQQQCQQQQQQQQQQQQQQQQQQQCQQXQQQQDQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQDQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQOQQQQQQQQQQQ", "QQQQQQQQYTQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "AQQQHQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQGQQQQQQQQQBQQQHQQQQQQUQQGQQQQQQQQQQQ", "QQQQQQCQQQQQQQQQQQQQQQQQQRQQQQQQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 180282;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> field = {"QQQQXQQQHQHQQAQQQQVQQQQQQQQQQQQQQQQQQCQQQQHQQ", "QQQQQQQQQQQQQQQQQRQQQNQQQQQQQQQQBQQQQQQQHQCQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQJQQQQQQQQQ", "UQQQQQQQQQQQQQQQQIQQQQTQQQQQQQQQQQQQQQQQQQQQQ", "EXQQQQQQQQQQQQQQQQQQQQQQQQQQQYQQQQQQQQQQQQQQQ", "QQQQQQQQQQRQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQM", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "FQQQQJQQQQZQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQGQQQQQQQQQQBQQQQQQQQQQQQQQQQAQQ", "QQQQQQQQDQQQQQQQQQQQQONQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQFQQQQQQQBQQQQQQQQQQQQQQQQQQQQQQQFQQPQQQQ", "QQQQMQQQQQPQQQQQQQQQQQQQQQQQQQQQQQQNQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQMQOQQQQQQQ", "QQQQQQQQQQQQQQQQQQCQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQJQQQEQQQQQQQQQQQQQAQQQTQQQQFQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQUQQQQQQQQQQFQQRQQQQQQQRQQQQQQ", "QQQQQQIQQQQQQQQQQQSQQQQQQQQQQQQQQQQQQQQQNQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQMQQQQQQQQ", "QQQQQQQQQQQQQQQQQQJQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQHQQQOQQQQQQQHQQQQQNQQQQQQQQQQQQQU", "QQQVNQQQQQQQQQQQQQQQQQQQQQQQEQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQLQZQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQUQQQQQQQQVQQQQMQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QEQQQQQQQQQQQQQQQQBQQQQQQPQSQQQQSQQQVQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQXQQQQQQQQQQQQQQTQQQQ", "QQQQQQQQQQQQQQQQQHQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQYQQQQQQQRQQQQQQQQQQQQSQQQQQQQFQXQQCQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQDQQQQQQQQQQQGQQFQQQ", "QQQQQBQQQQQQCQQQQQQQQQQQQQQQQQQQQQQXQQQQQMQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQNQQQQQQQQQQQQQQRP", "QQQQQQQQQQQQQQQQQQQQAQQQQQQAQDQQQQQQQQQQQQQQQ", "DQQQOQQQQBQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQCQQQQQQQQQQRQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQBEQQQQQQQQQQQQQQQAQQQXQQQQQNQQQQQQQQQRQQQQ", "QQQQQQQQQQQQQQQQQQQQPQGQYQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQIQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQVGQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQEQQQQQQQMQQQQQQQQQQFQQQQQQQQQQQQQQ", "WQQQQQQQQQQQQQQQQQQQQQQQQQQQQFQQQQQQQQQQQQQQQ", "QQQQQQMQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQTQQQ", "QQRQQQQQQBQQQQQQQQQQQQOQUQQQQQQQQQQQQQQQQQQBQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQAQQQQQQQQQQQQQ", "QQXQQQQQQQQQWQQQQQQQEQQQQQEQQQQQSQQQQQQQQQQQQ", "QQQQQQQQQQQQQJQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 261878;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> field = {"QQQQQQQQQQQQQQQQQQQGQOQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQRQQQJQQQQQQQOQQQQQQQQZQQQ", "QQTQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQKQQQQQ", "QQQQQPQQQQQQQQQQQQQGQQQQQQKQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQOQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQAQQ", "QQQQQQQQQQQQQQQQQQQQQQQLQQQQQQQQQQQRQQQQQQQQQQQEQQ", "QCQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQPQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQPQQQQQQZQQQQQQQQQQQQQQQQQQQQQQJQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQTQQQQQQQQQQQQQQQQQQQQQCQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQGQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQUQQQQQQQQQQQQQQ", "QQQQQQQQQQQRQQQQQQQQQQQQQSQQQQEQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQTQQQQQQQQQQQQQQQLQQQQ", "QQQCQQQQQQQQQQQQQQUQMQQQQQQQQQQQQQQQQQQQQQQQQQQQDQ", "QQQQQQQQQQEQQQQQQQQQQQQQQQQQQTQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQPQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQDQQQQQQQQQQNQQQQQQQQQQQQQQQQ", "QUQQQQQQQQQQIQQQQQQIQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQBQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQXQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQXQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQJ", "QQQQQQQQIQQQBQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQSQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQWQQQQ", "QPQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQIQQQQQIQQQQQQQQQKNQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QZQPQQQQQQQQQQQQQQQQQQQQQQQQQQQWQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQIQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQHQQQQQQQQQQQQQQQ", "QQFQQQQQQQQQQQQQQQQQQQQQRQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQCQQQQQQQQQQQQMQGQQQQQQQQQQQQQQVQQQQQQQQQQQQQ", "QQQQQQQQQQZQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQCQQQQQKQQQDQQQQQQQ", "QQQQQQQYQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQLQQQQQQQQQQQQQQQQQQQQQQWQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQOQQQQNQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQVQQQQQQQWQQQQQQQYQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQOQQQQQQQQQQQQQQQQQGQQQQQQQQQQQQSQQQQ", "QQQQQQQQVQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQYQQQQTQQQRQJQQQQQQQQQQQQQAQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQFQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQTQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQLQQQQQQQQQQQQ", "QQQQQQQQQQQQQQSQQQQQQQQQQQQQQQQQQQQQEQQQQQQQQQQQQQ", "QQQZQRQQQQQUQQQQQQQQQQQQQQQQQQQQQQQQQQQQQVQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQDQQQQIQQQQQQQQEQQQAQQQQQFQQQQQYQQQQQQQQQQ", "QQQQQQQQQQQQQQQQYQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQMQQQQQQQQBQQQQFQQQQQQQQYQCQQQQQQQQQQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 437474;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> field = {"QXQQQQQQQ", "QQQQQQQQQ", "QQQQQQQQQ", "QQQQQQQQQ", "QQQQQQQQQ", "AQQDQQQQQ", "QQQQQQQQQ", "QQQQQQQQQ", "JQQQQKVQQ", "QQQQQQQQQ", "QQQQQQQQQ", "QQQQQQQQQ", "QQQQQQQQQ", "QQQQXQQQQ", "QQQQQQQQQ", "QQQQQQQQQ", "QQQQQUQQQ", "QQQQQQQQQ", "QQQQQQQQQ", "QUQQQQQQQ", "QQQQQQQQQ", "QQQKQQQQQ", "QQQQQQQQQ", "QQQQQQQQQ", "QQQQQQQPQ", "QQQAQRQQQ", "QQQQQQQQQ", "QQRQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 2233;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> field = {"QQQQQQQQQAQQQQQQNQQQQQQQQQQQQQ", "QQQQQQQQQQQQOQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQJQKLQQQXQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "XQQQQQPQQQQQQQQQQWXQQQQQQQQQQA", "QQQQQQQQQQQQQQQQQQQQQQQQQSQQQQ", "QQQQQWQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQZQQQQQQQQQQQQQDQDQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQUDQQQQQQQQQQQQQQQQ", "QQQQQQYQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQKQQQQQQQQQQQQQQQQQQQQQQQQQ", "QXNQQQQQQQQQQQQQQQMQQQQQQQQQQQ", "QQQQQQQQQQPFQQQQQQQQQQQQQTQQQQ", "QAQQQQQQQQFQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQFIQ", "QQQQQQQQQQQQQQQQQQQQQQIQQQQQQQ", "QQQQQQQQQQQQQQQQQQHQQQQQQQQQQQ", "QQQWQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQAQQQQLQQQQQQQQ", "QKQQQQQQQQQQQQQQQQQQQQQQQQQQQR", "SQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQZQQQQQQQQQKQQQTNQQQQQQQ", "QQQQQQQQQQQQQQQQQQQDQQQQQQFQQQ", "QXQQQQQQCQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQCQQQQQQQQQQQQQ", "QQQQQUQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQYQQQQQQQQQJKQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQZQQQQQQQQQ", "QQQAQQQQQPQQQQQQQQQQQQQQQQQQQQ", "RQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQSQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQTQNQQQQQQQQQQQQQQQ", "QQQJQQQQQQQQQQQQQQQBQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQFQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 86536;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> field = {"QQQQQQQQQQQQQQQQQQQQQQQQQQQQIQQ", "QQQJQQQQQQQQQQQQQADQQQQQQQQQQQQ", "QQQTQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQWQQQQQQQQQQQQQQQQQQQQQQRQQ", "QQHKQJQQQQQMQQQQQQQQQQQQQQQQMQQ", "QQQQQQQQIQEQQQQQQQQQQQQQQTQQPQQ", "QQQQQQQQHQQQQQQQQXQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQSQQQQQQQQQQQQQQQQ", "QQQQQQQQEQQTQQQQQQQQQQQQQQQQQIQ", "QQQQQQQQQQQQQQQQQQQQBQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQWQ", "QQQQQQQQQQQQQQQQQQQQQQVQQQIQQQQ", "QQQQQQQPQQIQQQQQQQQQQQQQQQQQQQQ", "VQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQRQQQQQXQQQQ", "QQQQQQQQQQQQQQQQQQQGQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQBQQQQQQQQQEQQQQ", "KQQQQQQQQQQQQQQQQQQQQQQQQQQUQQQ", "QQQQQQQQQQWQAQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQZQQQQQQQQQQQQQQQQQQQQQ", "QQQQQPQQQQQQZQQQQQQQQQQQZQVQQQQ", "QQQQQQQIQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQWQQQQQQQQNQQQQXQ", "QQQQQQQQQQQYQQQQQQQQQQQQQQIQQQQ", "QQQQQQQQQQQOQQTQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQEQQQQLQQQQQQQQQCQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QNQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "IXQQQQQQQQQQQQQQQQQQQQQQQQQDQQQ", "QQQPQQQQQQQQQQQQQQQQQQQQQEQQQQQ", "QQQQQQQQQQQQQQQJQQQQPQQQQQQQAQQ", "QQQQQQQQSQQQQTQQQQQQQQQQQQQQQQQ", "QWQQLQQQQQQQQQQQQQQQQQQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 75823;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> field = {"QQQQQQQQFQQQQQQQQQQQQYQQQQQQCQQQQQ", "QQDQQQQQQQQQQQQQQKQQQQQUCQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQZ", "QQQQQQQQQQQQQQQQQQQQQNQQQQQQQQQQQG", "QQQQQQQQQQQIQQQQQQQQQQGQQQQQQQQQQQ", "QQQQOQQQQQQOQQQQQQQQQQQQQKQQQQQQQJ", "QQQQQQQQQQOQQQQQQQQQQQQQQQQQQQQQQZ", "MQQQQQQQQQQQQQQQQQQQQQCQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQXQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQBQQQQQQQQQUQTQQQQQ", "QQTQQQHTQQQQQQQQQQQQQQQQQBQQQQQQQQ", "QQQQQQHQKQQQQQQQQQQQQQQQQQQQQQAQQQ", "QQQQQQQQQQQQQIQQQQQQQQQJQQQQXNQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQVQQQQQQQ", "QCQQQQQQYQQQQQQQQQQQQQQQQQQQQQQCQQ", "QQQQQQQQQQQQBQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQNQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 21547;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> field = {"QQQQQQQQQRQQQQQQQQQQQQQQQQQQSQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQOQQQQQQQQQQ", "QQQQQQQQQQQQQQOQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQYQQQQQQQQQQQQQQQQQQQQQQQLQQQQQQQQQQQQ", "QQQQQQQQQQQQJQQQQQQQQQQSQQQQQQQQQQQDQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 657;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> field = {"QQQQQQQQQQQQQQQQQQQQQIQ", "QQQQQQQQQQQOQQQWQQQQQQQ", "QQQQQQQKQQQQQQQQQQQQQQQ", "QQQQQQQQIQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQ", "QQQGQKQQQQQQQQQQQQQQQQQ", "QQQQQQQLQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQ", "QQKQQQQQQFQQQQQQQQQQQQQ", "QQQQQLQQQQQCQQQQQQQQQQQ", "QQQQQQQQQQMQQQQQQQQQQQQ", "QQQQQQQQQQYQQQQQQQQDUQQ", "QQQQQQQQQQQQQQQQQQRQQQQ", "QQQQQQQQQCQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQTQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQVQQQQ", "EQQQQQQQBQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQSQQQ", "QQOQQQQQQQQQQQQQQQQCQQQ", "QQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQMQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQAQQQQQQQQQEQQQQQ", "QQQQEQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQGQQQQQUQQQQQQCOQ", "QQQQQQQQQQIQQQQQQQQQQQQ", "QQQQOQQQQQQQBQQQQQQQPQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 33777;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> field = {"QQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> field = {"QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQRQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQNQQQQAQQQQQQQQQQQQ", "QQQQQQQQQQQQQQOQQQQQQQQQQQQQQQXQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQOQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQCYQQQQQ", "QQQQQQQQQQQQQQQQQLQQJQQQQQQQQQQQQQQQ", "MQQQQQQQQQQTQQQQQQQQQQQQDQQUQQQQQQQQ", "QQQQQQQQQQQQQQQSQQQQQQQQQQQQQQQQQQVQ", "QQQQQQQQQQQQSQQQQQQQQQQQQQQQQQQQPQQQ", "QQQQQQQQQQQQQQQQQXQQQQXQQQQQQQQTQQWQ", "QQQQQQQQQQQQQQQQQQYQQQQQQQQQQQQQQRQQ", "QQQQQQQQQQQQQQQQQQQQQPQQQQQWQQQQQQQQ", "QQQQRQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQWQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQYQQQQCLQQQQQQQQQQQQLQQQQQ", "QQQQQQQQQQQQQQQQUQQQQQQQQQQQQQQQQQQQ", "QQQVQQQQCQQQQQEQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQWQQHQQQQQQQQQQQQQQQQQQQQQQEQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 27196;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> field = {"QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQKQQQQQQQQQQQQQQQQQQSQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQCQQQQQQQQQQQQQQQQQQQQBQQQA", "QQQQNQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQBQQQQQQQ", "QQQQQAQQQQQQQQQQQQQQQQQQQQQQQQIQ", "QQQQXQQQYQQQQQQQQQANQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQJ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 5018;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> field = {"QQQQIQQQQQQ", "QQQQQQQQQQQ", "QQQQQQQQQQB", "QQQQQQQQQQQ", "QQQQQQQQQQV", "QQVQQQQQQQQ", "QQQQQQSKQQQ", "QQQQQQQQQQQ", "QQQQQYQQQQQ", "QQQQQOQQQQF", "QDAQQQQQQQQ", "QEQQQQQQQQQ", "QQQQQQQQQQQ", "QQQQQQQQQQQ", "QQQQQQQQQQQ", "QQNQQQQQQQQ", "QVQQQQQQQQQ", "QQQQQQQQQQQ", "QQQQQQQQQQQ", "QWQQQQQQQQQ", "QXQQQQQQQNQ", "QQBQQQQQCQH", "QQQYQQQQQQQ", "QQQQNQQQQQQ", "QQQQQQQQQQQ", "QZQQQQQQQQQ", "QQQQQQQQQQQ", "QQQQQQQQQQQ", "QQQNQQQQQQQ", "QQQQQQQQQQQ", "QQQQQQQQQQQ", "QQQQQQQQQQQ", "QQQQHQQZQQQ", "UQQQQQQQQQQ", "QQQQQQQQQQQ", "QQQQQVQQQQQ", "QQQQQQQQQQQ", "QQQQQQQQQQQ", "QQQQQQQQQQQ", "QQQQQQQQQQQ", "QQWQQQQQQQQ", "QQQQQQQQQQQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 6139;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> field = {"AAWFH", "RIEJL", "CMBVB", "HXJUI", "SVSHE"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
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
    vector<string> field = {"IMGVHMDWHU", "ZMXVADDNAP", "AUQUSOFRPY", "QZGRHCUMWN", "OYRIASZUTF", "DXUPWRHCQH", "WEHOYEEGEO", "MHEPTTCBBC", "UUJPLTMIVV", "DCBBFRFOGJ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
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
    vector<string> field = {"VIIRRXIMHTTOSKO", "PWRCMKCBORCXVRY", "HSTMREFYJDZHBCW", "OSCRAIXNILXJJMB", "WTEXMDXKFUPCQYO", "ILFERZQROCTDGWS", "LZEBEAJKJCLNLRV", "OGJPWPGSOWJJQUL", "FSVTXEUGHSLZEAF", "XIWTZHKVAGBNKAD", "SIKOGDHBSIUROXA", "GXRAEEKKDANTOGW", "BMBJRFUNKBZEBBC", "UYCFTZMAPUXNRZT", "SXZTUAJIBUGWXBX"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
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
    vector<string> field = {"YMRJKTSIQNZCZAQJNQVQ", "YMMZGFLRTAPUMEQBZUWL", "AFPWBMYWWSZFERVEAVOM", "LDUWCPUFMKNSUIAPHBMF", "CRWIHMXSKCVGAJXWLGKJ", "QLQTVLNQIGKSREYAIXMN", "WRKPDZMDIPVMDMDIRVWE", "ETHIGBXRCRAQPUEXVQMU", "TEJXNWSHPCIJKOXRTZJC", "KHXGKCNNNFFKZNPJJUXR", "ONYFAZMZFVCLBZJSWVKR", "HWEJKCZAECBQHUDSKMNC", "YIYHUWKNHSILLZJPSMEI", "KMJMBEZOLXVPKHVPHQWG", "QBMVWFZRSGXGMJVPAKFM", "NGOPIOTSEYLSOONTXOPV", "LAYATXGQYUBCJWFYPZUK", "AAPUMNTYHEDZDIEKMCJH", "HBHVGJPBGKBTKASNLSAC", "GNUQGVMLBRRLGPJCWPVA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> field = {"RRWJVUXCGNTULKEXMDYQPCLAS", "DFCJQLOHSKCSZFULSZLATCPPX", "PUIQWHGBJAIXEBWJEGMXKDDQH", "KOWVETTREJHYKFGAWVAENHQOO", "MUESGEWXCGXRDKLLUXKXOAWPK", "YXPQKDCZNZHKRMBCTDWFOEPQY", "ZGAGFZYVDNHPNIIUCRXBKXMKU", "CRWHDXVCGYKWUYCAHSGKCRARZ", "SSOIROJIKCHUNOARNIHOFNXLQ", "HOSFMRIPNLDNUSFLZTVKAYOMM", "OVCBQEASXVBDWAYACZHYABBGH", "UKVTZJUFYJYHJYOGKHSWNWBFM", "TETTURRRHIGGKSLFGRGNTVTZX", "TELEEYBDXVXGCRWVSATNHATKA", "ISZOJHYNZMKIDCASIQJGDDSXO", "BIYHQZBPTKWIPHBLNTACWPPVW", "EYCQQNBVDSEUPCKBXTXMVELOF", "GWLKRBBBCMYEBRYACCCGRORQJ", "JYLLTSJPYXKMGHKLNYYSHIRDF", "FKQBHZTDIXFZJNAKDDRWKAYIZ", "LKQCOKDUCCJGLCSMYPNXUEYZN", "HRTSLEUDZHOUZBIRKDNVMQNHM", "PWWCWCXNVJQUMMLVSAFLVGYGL", "SACNAOMHAEKZCCXUZCZOOTICC", "JWUUHLRCGBCXJZNEXDSNKHJXO"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> field = {"WAWJLMKNXYDLGNOVQEOIEYJXACQPQR", "BUKJTQAUUQQVJPAAQJYQQWAFSRCQTU", "HCDSPHWTOSEIUNMKMNOOGJINEPMOCO", "BRWNJKJNHYMUSZMTGBQTBMUMBRDKCK", "EONIDYOESXKHVLPRJULAQRQFTZVRDP", "DZZZDIHWIPQHDZNVFDRLSKARKDLDWX", "EBGPTRSQQAVKFRRZCZBVDEOQOKCXDE", "VPZNIIFDZSWMWMJCQIBTWYYAKRGWCG", "CLWACLHZPKNLWRWZGSCZMWJJVNOXKK", "LERJJHWGIZPCVGVJYGWRKWIUNQBWED", "ORTWDKFQHBQNOKHXEPVWIIKVHWKCLU", "JROQIRXDRCFWRMFDFRQUXMTZGRWHFQ", "GPBGLQEHGGIRFOYMWRTHDREDFDNFFB", "JAGEFCQHVKQLGLRTDTJWZXXHIYVGFC", "JZJPVBNVSPOCJOVISZCIZIUDNZPFUY", "QCBSUMTGPNOVEOWLWFGNTWPBCCSOYP", "FYPTUTMLKKBUJPFEOBOZWNGUOVOIMZ", "ZUIXGSXJJARSHPMXUPWNNKAZUFSUWT", "DQXTHSAMLTLJXZOLQATOHWRHWRUXNV", "NWHGORHHYOFVALAOEFTOMEFHLILGTJ", "VJWOSVLXOPHJTLIUKKEHBKCPEDPEJE", "JWCIGDOSRBJTUHMEYUAANMAWGHRTFM", "ESKGFIWKDPCWXUMTMLMKIOEBKOIXEN", "WUCZWDRMTQCLCINBWZPPRJFRVTEKHE", "GYNQEYUXLMWNIRTQMTWFOSLBGPETRP", "UFKRLNDJLNZRDFZXSDAISTSTWRIEUS", "KTCGFJKWOVFTHXFIMEJLNFBRHKCABV", "BRDUDSGSLBTTNZYQVYOSSJIXZDEIMP", "KNJEAYLFDPCLULDJXXLNCGIWSBWECY", "MRXXXGITGRLWGHNXTTSHMCJTNDCKPV"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> field = {"OLTDPAVISDIBUODWODIRNAHBVMDPWPJBTYZ", "RCRCIAIERVSLKFVZIUVAHHCUWJPUUSJCPMD", "QNJUYYEKGZSNWRSBUDRPQTAHWXGKDZJHFVE", "NIOOYZUXRKKVQPIIFMGHQZHVPHOVPMKCQUJ", "QOMUMMAVHCHDUPVNPTYQUKVTMCBACRILBRY", "CWZJATMRGXSUCKVWTEAFTOLJVIOQAPRBPGC", "GSJLIURUBMEBKHVLCKQTULHKBPZCTGQMOJT", "FVJNLCOJUKXKPEHYVOXRTMVYPMXTSJEEQQB", "ZQWJOJIFEDHQEBTUNMOQGVAKADXZHBBHAPC", "CFIUTIQNLNJLBATOBRNNNVYLJIMHCSYBEWE", "AAULAJSFODUAHKZOPYCEMPALLVMNSHCNMMD", "SBUZSVXOEHDAWELRRQPQBOIARRFLDBOWMCT", "DNARJIUYPKQPDCSDXAMZHXEBMTCPDOSCKXQ", "HPANTOFSATYOODRANKCBZWGHXXRPGOQGYUZ", "ZQTOOFQOGXCUUDXOWNDPRUYHRKZEDJVLEWC", "ORSRDZADWKONTSHZTTLRTWMKLPRVVXZJOYY", "MQAJCWHVGQLCAWJAKDKBFAUMDXNSPZTJKXW", "DGLTPJKMBWCUSDNNLFARWLWAXPGSGQNDGNS", "CXKPWLHSQOQSQPVEHIRDBSJXYZCAOHGMLEC", "AKRYZYQMGJGYTIVYMXLVOYTMRAOIASJPZIL", "MJDWZSIUXRPTUANPYZPVEQNBEGXXFXTOSJA", "FGILIQHRZVGKXSWCJMWGNSSTPNSGFHNVQCG", "RSQSAWDVWHCCDMICOIJJZTKODOBMDXEKEKT", "MBDWYRXEPSGMAVQDYDCYYHDSZYVVPEQMUZB", "PZJBXLISLARFKQRXOSIQBUPFFKCJVKAHCRB", "HJQTVMKVPFEATYAKXXVWSFHMDHRFYJDNHOJ", "FOSGEBBAIUZKJCBZYAPMAJVNNQTUDCRXITV", "NRLYCUOWQSKJJITSCOAZJSLUIATROBHNXNM", "LYLDBWPKRBALUBCWUJOTIUWRTTUYBAAKNQE", "XGQSUVGHPWDRIVCRQMQYJZXILPHOIUXVVMR", "NKSFXUPVPODVNJQPGPNQUNZYSYIZBHZDBKF", "HXINPGJIJOXKQLIOPUUVBGTSSMCGNABHXWR", "YRDINBAMRETSEKFXONZVCNPOCORXUPRCWDZ", "RGXDXPYCCPYLKJBXBBLSKOLBQTWOYCUOITL", "XJRYYCBBEUEFEATAEUYOTFALFKELVAOTJMO"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> field = {"NOKSSOOSKAYVJCJVSASRBSRMPYBYNHMFKSBVWCBJ", "TYTLINGCZSLPMNYCPBNOCLVWPWERSRTLKKEICJZU", "UJZXRLHXSPDOGMPAKDFLJOXXDEORQMOJYFANNTSN", "YBKRLXGKOGRLDMUNRBYEKPLKNZNNECHICDNDRDSC", "BPJZIMRVOACBLHNVXFOZRKXMYPHSOLKIEFHJJASC", "DFODJBEVWXOXHEOYXJJPGBCSPTPYTZBLNXLPJHEV", "LWZLGEBJKPYQLADBJMTZCOUQUMQHGHVNBLQQZOFG", "OLBBNIGKSKHXZLZHUMTLJEWXLQKQWYUVKGKSIWQE", "HCAAEPPUCOCYRBKFRCNOMGOATPJXJJYYDSYULMOF", "GPPBQWDYBDGNJXERFCALSMGPMFHOTWWLONZQKLCW", "KSFSFQGFIMDSYTDIYALUAZHEFKQBPNVASJDIUPJA", "JTGOIOPMOJAWHKQVDORFMSHRIJZNYHBBNYOJPHCU", "NZWGRDSODJXMXOYKYMYNNQWFSGZBECOEMHYLJMFH", "VHUTHKSBQHJNPYEBSACBZDJXKKNWRGVVSBPLOQXS", "TXVVDZJXFTFGNIHJMAABYODOBLFNHIHSXDDPJTWX", "PBKCXPQJKLAOPZTVZKGKRQETEIFEMVXYETHOVSDX", "ASKVDLEOKBBCJMFRWQHVUATQBRJCNIYHPMELEFXP", "DPPBRTQPRRSVQPQKEXSTWZSZTYOYJBKLTJQHNEYB", "NVDNMHRLHRFZFDNVIBAYMCZKRYPIIKHQVCGFYBAR", "ZGIWQCYXQKFZHTAPEYPECZEIEBDHNJTUSDIWPCXO", "EDZSSZVWIDMKMGNJNBYCYCWIRYDCIHYKWCJSUAQT", "ANUBQPUFGXBZAJIMYKKCNQWGYUPQMNQRACTSJFWR", "YFEKOXBGMLMZNBBHXHDDZOZUXDIMZEBRPDZSNPZL", "ZCKIDHIXRJRXNPVZBYEYKLDPLMPJWXWOZMWGXCYT", "LKAPJKDXSBPHDXJXEUEURQOYXZKJUZPUTMHXWHAA", "WCRBGIKLRCCMDWTQZAEXLKLELGTOMWJMMVEMLJKI", "GEBVMGDLFFYLCSEKSAVHUBDIFEOFXOZWNKWKASKA", "MGIEMETECUGWIJFGQEZLLJDRJWNRDODRNCQWYXUN", "KDVZUNJTBBGWMBLQCEGDIOWPVRTQLXFRVGSMZSLB", "SEBSYXTWGRMKDWCQTEKGLDLDWCDDSNDHQZOSLZOV", "UHXYDYHMNYYYBILUJEQTXXCEQBUCAHREYQHIDTWO", "CJKMZGLOMQWDNEAGKGKQLSLVGXSFVNEBJBRDKLHX", "QGSDREMXMKUQZBQZRAKCDAOXYSDSDJGHTNGQNYZF", "DOBWLYKDJMVRZGGWJEAMQKZQWNWMHBCZPXYRIZNZ", "YLQOJTNLZNFHVVPCNYZOGKEXUUZVQPAPHSQJKIMW", "XVHLHTUYMEIUUHSJOQITYDNFOSYTHGIDCKOVEFOY", "WFVBLLALOCYGLUBIIMVLFDCBLRAUDEKYESOIRXLD", "HWJRWTDUNURBPCVFNFKGMLHDDYWODFECZWXZOAQQ", "FAFJTMOWUSBNCRRAXXHROEMUVCPOJLZFACHBFCED", "PACPLNJFXBMQRBNKTTDHWWACUSAXPFOXADJXMLTT"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> field = {"WSKNINLYOCXQBYBDRCPPLJQSADJIWWNXYQEHMQGEWQBOP", "GVNFGOYOODZJJHKUZZDNJEZDUAOCYLNRHNOEQPTSDVWSF", "CAYBTFJBWQKVTKOSMMEJVZUOOUTYLGLEKTSAAFOKAHKYI", "UHVNZJUVROUOXRCQVVZNOZYILMXOBKTRMHIJAGQDWGVVX", "NCABZMMAHOTLXORAUGQBGJTDJZRYCUZPKYDCVQACQPSCW", "CQGWVYWUEZJUSARMMPYMYNZBNOJSTGLUUBXDFLAHGBHGQ", "AAGGQSAVRKIKGYTLSXJRQCFQTKACTYZMBHNEFXKSZXZSY", "JOCZCQJKARPOQBNMYVVZYVYOIBBVTGZEUMAHXACLTGCLC", "GHLKGDBTWXHZLUOZFVFTNJMOETEPTKZAJMLZEUBVUYBUE", "EMJUDZLEESKEXCQAISHYDATGCDKCTTSWWUMQUDMPMSEIS", "AEBXBQJPMKPDXDMOOSIZRRIYBBLBNWKAYKVSMNWHUCYZN", "VCGUTJZIBGUUWARSQIGZOLPHEKSOOQONQIIXWUQVNOTCB", "EZJBMNOYDWWOXQEYNTWWZZSCRFFPIILJIMYVOOFUCFMMB", "VSZCEBFDBCLAJMTKEAZMOJZOUUKSRIMJHXYJNYOFYFYYC", "PELCRSGOZVUEECKUPVFEHNAGYCXUKSRUMSABZUTQRYXKR", "FRIMOTSAAGTVGJHEUMGADKBGYTXTDXVPBBOANYIZFUHWT", "XWIHTRZWVKLNOIWLCIPAFCGIRNTKABVNIMTIXRDDFLGHC", "TIHDMKLXAFIQAPJWDUWQUQAMEGXLQBPVYRGZOCTXSUQGP", "NMWKMFGDINANZZEQYGUOCFYKVHCZZCWHGODUYJWKJZHNZ", "VWHTQQDCIQNAMMAOLPDDZHYRJNFNPZHTUWLXPPCSBACHV", "CLIBMKIPPORMPSTNXJXXGFRMKTKAJWMSAEDDHMOVXBKIT", "WGAAQXYATYHLHBFHGNQMPQPQXKOPYSRBCJHILFOYMIIRV", "BUSKTBTNMFZHBFQLARWORNVNEBRVCPQJFHYYMMEAIKQNJ", "SRUBQVBYASXFORLIMKUVLOGLLFRTMRNBNTZBFZZEBECOY", "FCRAQVPFMIKKJLGKCIJQQBUIQKNXOAMWJRPPQETYYUKZF", "PIZQFINPWKBMAJWFWFTBGEHFKVDOYRRLWKTXOREODLXMF", "JGOIXTDAHOUXAOFRRCTIXAHWWCXMANZXFJFMRVCHMLIBU", "JDNAVANCWCUZISMRWQTYQSTPSLOXMLAEWXSPLCIICKCWL", "PNIEKZUIUXQUIKOSHZQQKBLQAZWKCSCMSYKYQOCXFGVKX", "QCSNXZOWAUYUEWCYTWAVWVWXAMSVIBMBCUONSRUWTCCPY", "MIMKEDHMWAENUENFGWNVSXDDLSFABTQTVZDBPMBSIQUXA", "SIFEAVZQUVXOZDEMOELZTCDODPLLHIQITIERIJYAXPPUN", "EHMGPGXCMIATYLYVTUEUSFMTKDZJDPFPEAHNITQECKVNV", "JXHIEFGQYGGYCKWPINOJRJDZZBYRHKBMTYAREFRNIRIWR", "VOTASGGGLUBIAFTAXPRACRRUFNRRHJWQNEZTJPQIIGHPJ", "JSUFVUNXBRRLJPSSNMCMWEPMWTEEIMZWUSZXZVMHJEEJR", "VOKSBDIKVLKPBPFUJAGKUAFTIYRZDGOABUVNUCMACBCOK", "FYMYRGBVNDLKYXPULXAXHKLRKAMOFVVXDBEEILIMIITTK", "HESBKEFHNRPRRANLLTCELTESKNFGFARBPWUXJDUPLCEOY", "MUFEWUTFAAYTSKJWAAOBDHOEMQEMNXZBDTXRBDZRXAOYT", "FWBBGNIUSCNXTOVKEYWUJUEKOPHGLLKHQBGZIJOTZJGZF", "PRACNYVFYEJWYTARZPTLLSDWLHJHVKJGOEIQCQBLMVNFA", "BBEUUFIOHIBZPCFNGVAAJEQAXXSIOUBNFIMZJPTFPARBY", "TODGYYCHDSWMEIFJKDRQUGBPRAGXAYTGLOCBMKDZLIJSH", "FYSUPLTJDVQVFSHUWYYMTIPEWAIGUJUFSCJRWJICZPRGJ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> field = {"TKFXKVLYOWSXXGJGVLHYCSZTSHYOAVAGSRTCWGFKZFXEKPLPXG", "OLKNZGGTYWDFULAEJDWXXNPBMKMEVQWJKKGAFXOBBWJVCKGVME", "WAWGXCGJOSSZCUWPUWKJSTKRMQHKDBDAFHWRCFZZJYYBECJJBF", "RUMNAMUPIOODUBFTSICONDBNGETPYPBQFNIJZMUPATOZMHYARZ", "IIRYFABIRIEVPESIGJJAOLAUFFTEMDDWXBIMSCPNYBABJHXHZX", "GMLZPFWFPVSMXKQMHYYEUMQFBZAAZTVOVKGXXMYYQZLBXKWLNP", "QULTAWJVBRGMUAEHCZTUAEXWKEKASBVUVIZUNZOKWDJNLHMUOU", "WGVKAJDSXRVQEYBFTTPZRBSSGFCMWPPYPRESCVEYFGNSLOGTTU", "ZEJTUEBGPAOONBCXBYTIWPJTTZQFQFVSMOUBESETOKTNBQJKRS", "DKLVSRFJRPXWMHAROCUAJZBMQKJCBOGGWFDITVBZNKDXCATZVN", "ODOSZDMGXWQQEMDMXEKGFEEMTLSIVMHQDTZXUPMEPIIQBCQNTX", "ULFKQSQPHJSYEHFUDXOFYJTVEKPLPHLOFCFLYCAKKFXWEWGTUK", "APDCAQXQQQRDTNJIAGCQMXKRAKMLSPYKPMIQMYBXCKEFGTDPDX", "EMCAOLXLWOXSXFHXVMQZYNEFUCKOSOPUGVFRSBMNOKZWGNTAAC", "GWPQBHVZRVNIEKJZSSPWVYJSALTHHGEAQSWHEMARHTHIFORHRZ", "QAESPUACNVWERZKNHICKSNLDYGSDGFTGCMWMZOWCYVBPWQPHHJ", "MHSLEBUEKHFGXFYDLQXLGAPEBNEVPAZYEEIZLFGMMLTZNOYPMI", "FOXBJGUEZMFOFICSKGCQEWZBZDGXQJWGEMHRLQSXSMRURSJIHV", "VWNKKZCKJXGUKATMVYFHZJVXOOTBGDWBIXQKACHRHZXXGSGIXH", "INKJSWVNRDDYOTBFBQQQUUZSJTOJPJRQUXKXWPVNJQNFGHLPQB", "UYTVUMGDSMGNGJUJAGTIJCOYCEIQTMLBQOMUKTWQEKBKQGUFAU", "XLOZSKQSUKEQWIXIFVWUKSPENARQOBSEVJZSCCDNASVINWAEFE", "TYRRSLPCEFCTCFZPNURZQVBHQGHZCHTCVMIPMSTWUDRQUXATOS", "IVKSJKLNIJUCDBLOVLWBZFBCVFCPKMSXMGVXXYBUCAMDSKGKHX", "EITMKDKKXPTOEUOQIUGJBDGGCFUTGBSRQBESFUKMUQRTKRNGRN", "JSZATSHISSYQUCULSLRBFZXNSZGWIFOYWOGMVKJRVXCEZMEKLW", "XLLUDINHBPMKYPUDFWYODQOEYONVQRYRXTYEYIUQKBLOYRREAD", "WXGWGIDVKCANHEOKWQKXBFLLHHTERAUNQJVDJHQTLAIZCGSEOA", "ITCGOVYYRSJPMWNFSLGCWGECUVMJZITQCTOZPHBTGRWKZKABJB", "LUOBWUROBOYOJXSYCVUVDTDBVOBVAXYIJOYZPHMGZMBBOTXPNF", "TKHWBRKQJGOZDXLPNPFQUUYGSLVJZFLRMYNUYYHYLGAXIPFHHR", "IRJSBRBUWGWLSVKHPBXBQGRYZPPMEZPSGDAJCDIPSFFDAIIIZA", "BWEZMTHIPSVDEHEOUQGNMVPNFLEYJUXXUXDCASERPTSIDYYHWF", "EJLYCOTOZODKMRPNECKDZOPHKFZDGMOMFTAWXGKBFAPWLGAQQD", "PYJFFBLLQFNFGNBHXVESHOSJBVJFXYGYOMIGPEKVKPYGPCAIRS", "EKFAIRIWOEDVHUAKBNSWXFZOMIGSWOUSMFQMXBNNDKSJNMRBZG", "APOOLLWXCNXMQNZFQGIUDHYBWIINBAWBRZZXGKOIDLYBLIUXYW", "MDCQQEXFMXQLSTMWVHGPVTNAIUJSHCXZFNTYONGGJETYVPWJTY", "SGSDOQYWMSDXNONKSOWUOIVPPMRDYSLCGJAHQFCYRVFTMRHIDV", "NKOAFVIPBEJJPBYZFWIMSITCTLARNWMZESEPLHZFCZOYWHEDSI", "IVFYLVEDDACUPGHVIDXUKTCAMKAGUTNZNKLDJZEFINBVUUBSHI", "NWLZQFVUVMZROXVYVAZVTLWZJVQTNCIPTOTHPRUIZRIUJCMBKD", "QDDXOQBTGEJSXZOOXJCYIOGNUYKIQXORREWCXUEQACDWOKJAKK", "NWBDLUVVTFUKHKFORSAYSMTNCYCHEUOCNPCYKLDDJDLECRIMQV", "TVTOSJHZIYMEQOBQICWJXPXLHPZJYNBXKLKALMNYHGIFTIHUFW", "SQRUUDEQLAWRNPCWSGZTKNCWFJZKRFXSUJJGHEBAOQWMUANMUQ", "SZGJDCFUEIYKEJYSIOHIBGWXOWBOAVTRJWFWSAWDFYBDKTAYGE", "QDLLLBKGRYNRTWDECHMIHRURIOQYZLHLTBOKVWVLFERYYXPMOQ", "EMAGLIFDOGSPYWYGASFTDTQSTVMMRLAVOQEIREMRNFDYBRGUKP", "DRLZCEQROKRQQQSRLWWZGHMMFBYGMPPATCWIARVBJNKNJOSCWL"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> field = {"UJAAWOHSEKOQSGJLDMOSCUXOWZWDFFCPSTLYBGDJRRIVFT", "TKIJQQBFSGRDPVOXIEVNOPVXXHBWEPWWVWXHMZKYTWYBMU", "QVXEGDZLDKNQGDMTYNDUIQGELEGUTPDKQYQOJHVGATEJWN", "TTCBHRIBRTMCYHULMTHPHVVDXYNALOGXRTOOPMZOCMTCXP", "PDLOUYKXNBSQRGLEQXAQCOLNOMOKPOOWNAEIYOOBQUHSOT", "NBXCSAZFARPMTRHAUGPGXGAQCFPKKSFTMDTUXCYIJGYNYS", "GBVWQWCETZGNDILIVPNFQETXHDLYSXCCUGHTFRFSLYHUFH", "KOLTFBUFPDVQEZEITPHKFXSIADYLEEAIXNETNJFUAEWFHA", "ASFHDIAFHIGMNAYHDVHPGFVWQMQCHYLDCKHHSWNRTAYJCT", "JEHMMITSVDQWFSJMDWPZNBLZXBVODFYIFLNJBMWCTTKDRN", "ABUHXKAFUTTFXVDDAYCACVFZVEBHCOBSQKUUSZPOEGBXES", "IYRNNJPPVBUWSGMZREBXHIYIRCBSDWOVEEUJXJXQKAACZA", "DHTOUNKGVJIBYLVTVQKYVONIBJCNSAQAKBVDRUCKVIGXIS", "FDLJUGSOODKKQGDSSQKTNYEUHBTWVFSAXQQFHQXPDYQVMF", "PKSCBQQRIETXNXAUPWTUKCZMJJENOXSQJLNSZVBUNGCEMQ", "LTOVCBPTDUPCNAKJZVSEKROGUKTVXLCRKHDPSXRUCHOTYA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
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
    vector<string> field = {"QLYAADAR", "CHPIQVGY", "VVYWPRAR", "JKUTBPUP", "SGLPKEHS", "GBASPWZR", "FBNNISRQ", "OGHCLGYJ", "UGOLZYBT", "UWOPAOQK", "UTMKUJLS", "ORRLMZGL", "DPPHQKVB", "GSICAJVA", "KBLOFUAX", "GGYYMFHC", "QTYXNOUS", "LEVZPDKU", "NDCZGGSX", "RDSKQUSA", "XHBCHHAP", "FREMRGMF", "GMBWAXRH", "CJBDBBPC", "BAHVYNGL", "QEYOZNMF", "ITZJYVVK", "VNQASUER", "YZCCVBAW", "WLHPGECY"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
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
    vector<string> field = {"OVVCVOKYMQNGBJBIXZUSPEFZVRAZGZVSMPXSCTLTH", "ADCADMNEQZEDQEXSLSBCEZTMCVQVXSRFVILEFYDJI", "YFKGHCQAUADRYJHXPUBQEDXIOYVFXBZIQJAYIBSGJ", "ZBBRGQPPBLPUJOHIQPBIHNBKIIKDDRLQKXDTGHWPG", "MCWEXCXZJBXANYZQMCUFTNPIYCKMAMVENHRDDTNYH", "TYTMPNTJMKAPAFDQKPGQGVNMGRNATIZTBKBAQNDRR", "HXOAFSVYTZYCOZGVOITHGXLGWUPTWGUSXZHEILOVC", "JTBKFIRBFDBFAIWPZWSWKYKUYDTCBDOLJYEBUBIBP", "KGZCOVKYLKGYBMRJWNBWEYEAHPSGNCPNLVGKQIWBW"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> field = {"DXJ", "MKU", "XOM", "NDL", "RTO", "VDP", "DXU", "MFO", "OHZ", "DZV", "VTE", "XLD", "YSW", "VCG", "QXT", "EJJ", "VXL", "GWK", "JJS", "NQY", "OYQ", "FHJ", "WUO", "ZAA", "IVE", "ZAL", "KPT", "VVD", "ZNX", "AKP", "NVX", "XLS", "OIO", "UOL", "KFF", "VXR", "KNE", "GHN", "ZDA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> field = {"S", "T", "B", "D", "T", "G", "I", "L", "V", "C", "N", "K", "N", "Y", "L", "V", "G", "G", "F", "H", "P", "Y", "H", "E", "K", "T", "W", "H", "Z", "P", "H", "K", "P", "D"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> field = {"NAZZQYNZNKXMAKEDBATA", "NJQDPZFMROOMLXNMOBQU", "OJFIECCMADVKMJFQAFXB", "WKAXOURKKJACLYHSJFTW", "ZZMENXVSJZFSZNQOMTEI", "JVKBDXNTBACYEMUCIDLF", "ZRQLQEHOMAUYBGMPUUWZ", "QJJXNVSEYDWRIMDWLDCL", "NDHXLLQNSVVPJLBDKHGK", "TWOPYDCHXQLCCTLAYEZK", "GYJJKXAJAKNVPJVFPFPK", "IHAQMTBFGCLSZSZQVXFS", "DYNQSPRQCYBRZFSOLFZJ", "PYSRPMQHNAZPDVICRJZV", "OFOAAYSROLAPLHFKYIWW", "JIWRCEBNMOGMBRPYKONE", "WXZZVRDVYYTJCHTCTJUI", "NZWGXRFPDNUMEJUSASNR", "TTUMHWSFJYRYOIYMNGAQ", "ZSOMWRIBTTANQXCKMKDS", "XQVZUJILMDAJQNBFZXLI", "DIFTXGGABVQSBLKBTSRF", "NTWORUVFGLBAQTIRFJJP", "GKCOBMPWJYJRMHQSQTPF", "ZTCPFJLHDLAFIXTYUDNG", "ZRPOJOZUWFLJCONQCMIM", "NLIHHOYXUZMAIKHKIDAJ", "QISDHTHVZINYJAAADZLU", "FTPEOOEPOGKPBTYHSMJW", "YBLHRPFCSHEJXKDSDPQI", "PWIFFOAWIBSOKXCWUDOU", "SCJNJEITZWARXSMOAHAK", "QAJWGWLWAMIXULOSQKML", "JTGMFBAMHZIOVBJSQBAI", "XAEXNTLOLSVCZLCLJATM"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> field = {"PMS", "ERE", "HMH", "BCA", "HUF", "YBB", "GUR", "BXF", "CBI", "KUO", "BKS", "PRL", "KID", "BKU", "KHN", "EGL", "TPA", "SIR", "PFO", "SFQ", "ZKR", "LWP", "XFP", "LRS", "GBT", "KAE", "UCA", "TKQ", "CMX", "QNO", "IWO", "EYY", "MOC", "BIT", "QIO", "EGR", "QOX", "ESO", "TZJ", "BCO"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> field = {"ABIRFEHYPRSRFSUHBBQQPKXIYHLBTZB", "SXSNFPVGKMBWPZQEKQGUITZZRQKSFYZ", "PMOEAVEDPBIHXBZUQJKQMCBPNPAIPIC", "KNLWLCXXSVFMVZRMXAVBIMZEHKJZFLG", "YGTYVEQQQQSRWDGCHOUGICEQSRVQZOR", "ZTHXBMTARBJHLCAXCMJHZFLLGZSEJFW", "UPBKMVCIAGVZWVIKCMRWMDSPQQKXDVL", "BEDWHPABRDELXZQLNBETNGRAKQCDDQP", "DCHWOSFGWHGWIYMVYSZDAUEKOOYRHUY", "RHERBWJBAGKSIUOLTZMEMFBPXTHKVVR", "MHRUTAZUPOZXODYMGCHSVJKSQSGQMSQ", "CZAPNCFJPCBZLEJXYOWJIGYBZDAVIEY", "NSNVCFEDAIOJJIOURSELFNSNBEUZKUX", "UDUIZTXPLGLUJKOESAWIKOQNOSMANZD", "RCAXYZXUWSTKIOKWBYUCKWTIYKQBYKV", "EBIPDFVJJPSQOLKXSRAOKDATJJRWBOF", "EMZJFBERUGJHKHFENECXWJLPESDZWMN", "JOGBXCRDDIHTIXVOYCCWFEWNOHPPYMK", "JCPKIZJKTBVOKWMMZQOBAESKYFBLDKY", "UHOAQHKBCXTTGYWSLYYYHENSVJEYUDD", "UNIOSGDLZFRRFWANSWNMMSJQILWLEMZ", "EBNFWSHKZZMMSZBIAXVRQOZGJLCSGPN", "EKEPNBFNGLTEADLRNRDKAPPLYGZYLHQ", "DCZXOOMNJGYUAEKQUIWQPZMHDCKSSWL", "LTGAJDJKCAPBQDFKFRLAAJVCLWWLGNC", "ASYBVEATWNIYZOFMIOUPRHRMFXAWPEA", "LPWOAQHVKROVMLWHVSPVOKWISITVJRY", "ENDYQRWAFPPBUWXRWEJYRBYNFZVEDAC", "UOGWQKMADRMDBFJEYXVMUJWAKBNXOMB", "UACSKEGBQTTAQSTRWRXHOBFVMDQLOIF", "FISEJQPWWIKXUHITAZPSILHRRFRPMQD", "FSWVRWVLBNVYNGDHIEFLRAGPMIHIPFW", "TEJAIYDOYWPWSYQAGGKUUORNVNNSXFZ", "SAOLEXRJSAOSJJOVOXZNPCPYAKWFRMZ", "VMBJSCHDCMEOLGAOPHDSVYSNPXKWEJP", "LRKZKNHBZAMNNLNDFLNXJDWYMUQOYJD", "FACKDERSOIDPWIIHORPKJMTWXBXBGWR", "IOCNIAXNZGUSZRZUSOCCZVKODQIPGMN", "ZLJABVFKXIHJGGAUMBTOSYSCYIBTURX", "AHATERKLJGKVOQEPFDQFCABOGTUZIQC", "TRMRDTAHPAKOWHWBTXKXHRHRBIJIDMP", "RAANCLZORTLUTHYGJOSAIWGREDKTLCB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> field = {"GTLBXANLZGHLYKMYOTTMDSZQSGICJJZIRUFKDAVMSY", "KRMYIACHJZRYVAYLZZIFQGCHWDFBIJHPBCMIYBCTON", "MSODBEGEGVWABPJEPDLMIBSYKSSXBXEZXTKONJCMHV", "KKRFVRBGNEPVJZPVITGOZFSUGRVRYGNLILRWGTVION", "YCNPISRBNWVDCNSWSIXJVEYQONTSNGJKJVDSTYZQHB", "OVPNICZMKICCVPHHKVCWORARVYVPRRSRYKDJFKQTOF", "BSUMPOINYYLVFYPIOCMROJYZBOKLTRWRGYYRWVPGWH", "DHIRAORIJJFCJYCPPVPIKYHFRVZXKPAONJAQDYYSQY", "TXDNHXJYOOVUMJPBQSXFZKGAYFPHYCTVVEDFFWXBEY", "DPDRQSALFUQLRGZPMZCSNVVIINSUHFDRAJLYYNCKND", "JFASCPKCVJZBQDQADYIHGUOQLJYMJECBWGEYLVNEKD", "LZYNAIBQPZLWLMDPIYAOBPHAWKHNNJZTNJYOLFQAKW", "VHVPJUCRWNSSDYPGCPNLOHBINPXNGFVIRCKHVMLPJE", "GOHKNNJUFQCHDGGDKCUJUOICIKFRWDQZZHBRRCUJVX", "LTCYGZYYMMXOITJJYXCXKLEECBVQGNBSGCRLKZPCYQ", "NFHFREOBGXBKCNNUNSSXECFHSFCHKRFRWEBIALGNNN", "PVBUTBAQIBXQTRKZLGKXRPVZOTSHHDNJSXKLRAKPHE", "NPHAFUELSBCGCZWRMLSFBLSALCMSMPACUTDQUCROJN", "TLEIFCPHMMFBMUPKVFWLCKZLJGDPYPOSDXFBYUXSNC", "JVRADAUNXWDKZPDZMIRQKDGLHXPARDNUCUNROVSPSH"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> field = {"BSJNJ", "SCCZL", "MRCQT"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> field = {"REPHEVYERLHEBTDCYWXMLEMNGOGEQGKPXZCDRDILN", "ENYHIZLXJRXONPEIPSVHAVZCKHAEPIULMBMABRYXO", "VZLIKCNEQBRCKGZTQQZZWROIRYZHBASWUETLBOTEN", "TVRCJZEBYSSWNBCBHWPPOTTLJOJXTZYULLEMSZWYC", "IXPWENYFCQOZAMDREGOXGDVNGZWGOTBQBFMEIVXFY", "EUGBGRLIWTHTXAAQUGKTSTINAEZXMNNOFYUBEHHZR", "MESSPYWIKDIORCQILULLIEXUIPQDSCNQYVKLWVCOS", "XLXAGQSIDNAUYREZDFACBOONOFIBDGMHTAIMJDNCQ", "VYJKNTQLOQAODTTROBHBBIZDLGCFAPFUBHKUWZRYE", "NPHNENOBRRMDJICRBKWNOGFCOHGYNGUCHHGLLTMGQ", "HEXDNEIXKSEODNUQIOWEFKXIDPUWRVWSDPQFNLNYN", "HYKVIEVRKNXCYUXMXXJQAREGZIJZLZFSMAQRGGTQC", "RTCZOHFVLKILMQMIYMGGANHLXIBAEMHVWXGNNNSLJ", "FMLGBTKGPINNSBOOHQFEMULNUCHPQSAXQDNZWWTSW", "ZIYLGNCVINOPEQVVCIHLMCTDNBSVRRUQRHIHQFDBE", "SRZLVWSEIRTRNVUAORCVGRIOPHTJWMQKLYIPHNEFK", "KELIKJHMBHCIKPMXBCAYIWOLXPNXMEPGTHKWBGDIF", "HBLWCAJIPREFSGMFGBLHSMAMNPUTNOOMNIBTUKSMK", "XNYUJINADJHBUMZEMYTTUSKRMFPQQDMNQHTIASOCL", "ZSMBVGMCMQIIILWAVTUKIVWIZCFLMFBSIONOTUOTU", "HFSZIPKPKPAPOFVJUYELJWRERTGOUKIOAXWFRWAXO", "MQRJHNOBTXJAWYBTYVZXXFTITUPIWGZBAYUNRDVIJ", "MDGVCIHARILVCNEOSTCIJUPYMVUVZTKGBPGWSCPAW", "JGVFKSVCGZISARBLZQCSGMNWQEMGFWCFLTMGBPUQU", "ZJMEOLSEZUMJAWLCKQEGBPEIYGIOQEDYEGVNLFVQJ", "ZXOURMXGQXRBYZKMLACBLQLSGXBIQDIZUALXYYZGC", "TPLVMNNIIHKRLXYAUPZERNMBJXWIWHXFBXRXHCTAV", "WOOZACPNRBIBEFRWELCQSVJCJDDTYOMJYSMYOQJBQ", "BWSQAHYQSFRGTNBJWMVNWSJVKLFEAEJNFQUWHOMCD", "FUXLVDDXDGTCKRCLBVQWGJFSOBGDXULNIXRTAKRZL", "KBIHPQBQCRTDWILVBSCTRZXJCMPDZSTULKFYWPSBL", "CLVRFFRZUJKHFSWSMZOWUPUEFZWRHHYPRTSOAQOTK", "SYKWSZHQACCDWECNKISLXMLENNGSDYABMLBAAKOZX", "BNVPULVWQCZCLBMRMIYZPDUOWXZZPMRVYCSSSDDIY", "IBSKTJICMCHIABLBZIJPFTDUQHBAWYIFMDULZROIG", "MYCNZFSTWFDAIFZXYCBXIYLAYXILIOMEZRAABNLDT", "YNOOPHSUIFHWXJVMWMCDOGRKCIQJOUQHHSMMTWSRY", "CUQKTHZTXZBZVGFPMHMEDZEGIVJKHOGBJVFJDHZAI", "LZFQFRKYLOTSOGFRRIFNXXMZOREABGNBZUSPYWPKJ", "DFTCSXPMNAVGWBVVSVUIUICHMDZROASAKCIVZJQSF", "QZDZFCFLXRHAYZIYCMSJMVCAOJJUYAFOADAALBYMO", "WQKBBEGJDFOKUXCGTXBIMXUGTHLWDZBNJKXVDEISL", "HGGWNJMEYBNOZFKSJLOVAVDEDNRTVDCFCIELRZCHN", "FWIVAQJPBKYJZGAWSJCXUKRRLGAXRMQEJBNANFIEA", "BFDHJSACZAHHUMAYHHIRSPTMCNIANSKWBRCYMVNOX", "XEQHPBAZZVRIMRWHJTVYZKXTLSSHVTHYWWYDMTOWD", "ZANMUCIRMFYZJFITDVYDMTDRWIQYXIHTCKZSJYDVX", "OEYJOTAHCGAZPWQAUDDKSJCCECCDOCRPGFNLPXUTV", "NQAVWVENBQYZDNSDSNIHWXKPWSPQLUUVTBSSFXNQZ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> field = {"CLNINISPSIQHAWZTV", "UTLKKGSRHCKGLVEWW", "TBHZJASVVMXCBWAJR", "ILQBBOUKKNDRDTZZQ", "RIADMZYKRPFTYGSWG", "BEIJUKGRVBUBADPQO", "BZLUCPUJZFYKBFSZF", "NJPGYXJMRWEHDNMUZ", "FMEYQNIAGRCCGETAE", "YWQIPXHYKQEFLMCUR", "MLTGSXUSJCTBDTPWS", "RGORAXMNIDKESJIEI", "PVUNHXOJQPRBSSYQX", "HLICAMWGWXOKRYZQR", "TNGOLVVKOSYEJIMYH", "OQMCVYZNZSIDCKDEL", "XVZCVPWAVFJRIUTYK", "ECXGJUSFGSLKTYVFP", "GNOXOPIFZXRARVBEM", "OOHJXGQJBFEJDBSNC", "NPNROUZKWDIJZKGXY"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> field = {"EICIFJZEVXSDOSOLVZZRTEMJSJRPSWSRQHNMJLYNGCAO", "HQFZDHDASZRWZDOWPIQCVEEMCBXUVRYNNIRRDJVRIOIF", "HBLMTYXLSIPKGUUZUONUZJMYSNBWTJBHQNPDCRRTUJRE", "YGMHJGRHHUVCKEEOKSRHYWCNHESBYDQFJCEKUFDBPDMI", "ZCUHXZBVEAVORNGHMTAQAZWJFOMJYPVSVIWEARCXFTOG", "HGGEFRSGOOWRTDDOYRSHSDRCVCUXXRVUWNCKMOYKUNLC", "LSHCXPSWXCVNLUGPAAANXYXOXHFDVOZXHQAQXXVFAZHO", "JEPFGWJWMSFBRCJEYKWSHEDYTUUBGWJYERCGJBXKOMGI", "KLQUPUSNIFLYVZUVFDQBSWBRZFNYPKVOFBNZLKBSIPLS", "IPQBWJZZAEWWRRWHYEFWOYWHJCPCASLLDJTAULTHGEAN", "APNMNALILHVAMPDWHXSLUMCYYNLKYKAUNVVRZQXUITXZ", "ARLOUEGFOSEXRABFQJOEQCYFSIUBBZZUNENDGHXJLHDZ", "WPUHGQHPTTXMVURWYDEOQYHZHVIRDARZVEEYTVAJGBPC", "CIWUWMYBGTVWMDBBZCDSJZFZLNPDMYPTYSEHZQDUMMIV", "KHKMBKHVRMBYSIZZQDMIPHYSALXURBAMOEOFEFPXJKGZ", "HXFKZCOUZVFICBSVGHERIJLOVJCKRUTXZVIHSDYJQRNI", "WUIGYDFUEGZYFEJQCVSDVVNUYFQGWSZRJIXCRMOLLASZ", "FNPWRDRSCOCQTELXRHHICPXYNHVTLPELKVNEYLNLHRHV", "EOBXTGUCATCDWLOFLQRFDXLQUWMPBYQUERWZNBISOHOO", "EAMRQPIHKEIBQSAFGBNJTOFXCPHSOWUVEWJKFSBVXPPI", "HOAYYSNSTDFSGHURJMNDUCCAGYRFAPJCCHRBLTIKAAUN", "OCJXTKWHEQOPXBVVYCFXTBMMEWQNKNTPEMFTXDGWPPVP", "COXGLPKHMFGTWXGJQVSJBJDHOKKYRYXTXSFGABTOZKEC", "JQBSKWBJVIJPVHKHCTBJFOWSYAOYIPUIVVZSKICHVIXQ", "GCRIUCLZYZTPDMVQBYVZMKCYFPXYAWFFYKYCXDLPXLQB", "FYCPFYMCVENIKXKIFBJCJBHIVWLPWJCKMMLUHGGNOYJF", "NGJOUJAWMCCIBMYUQWOCBQPBEYXQQSZHZJIWXYJAQZBC", "JCLIWTGRPNUAGEQMCGSRHSRRKHGZSGGFSWPTGSGWQRWH", "INVTGOYWUQSMWPAABXBZGYEZJCMNFHGKTUHTRNEUVDLZ", "MKRIJBEGINXKTDPPGXYREYFLZBBRQZTAFXSYWCPOOVSS"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> field = {"FHHSNKVJYMEEEGNUKMTSHVGVTDQAMBLQRWOIDS", "JQIBIVHNQXXMLABWPCHTPKHYQGFRBZNRWOLDUZ", "FZCJQIILITNFGXPDGFWVVJLIAEVGSEBRWMCCUI", "EGXDAQYRZOMGMJLPBOMCIDXJXXEFPRKAMDGOOE", "BUJXHQUQREZKKDUVCNFSGVQOIBJHKJBTPQNLAN", "ZEDDYCUXDFSDDDDJEWGGTMXYYTWGMOCIGGCPNJ", "IWSMMFAHDECNSNEYXLBSPIINZXSYTTUNELHCNO", "JEMDHFAZYNEYQKSCORGNNCDBSICWFSFOZYNJPL", "IUAKAKLZNOSKPUQGBBUBNJDIFDUSSLTLSKCMJS", "RURGPASTDVFLJOHZHFRBYPPKLDXGPARQAKELGZ", "KUXWAZLDAQFVYNUTTOLIPAOWYVNSHZVQOTXIWR", "RQSFCYTOWIVQHNHMUJXTUXRKTKEVYWWQLLCLJP", "BRZMQVQZGNVLSXTKGURUHOVWACXJLWCCJCAKYQ", "YVQGVKDOYVHZJDYZJNCLVWMCQZGRGJSATULWSE", "PZGELKVZLKGTSETVSMYDUZZNXGNOLSCFZFBRQD", "JUAQCJKAWQCJJPIBUDPBPJGGHJWGESCVHBAVQT", "JSBHDWQTOTLLXNILIEHDIAWDMXIHWLIFTHYFBC", "CFMLYTCCBOYEVMAGWXSHGACNUSNTWJNZJWLGLH", "LTALFFIVGPJIZRCUHILCLJWGWLQYCUJLIRKMBH", "XGVQZXXHDDDOTWCNQVYFNTLMHLENJVGRJFDUUL", "KBUQIICIXSQREWBBUGZQPJCMKQHSFKJARNRYTD", "VPCPYTQAUVUULLDROCXQWIQSRAIYROGXFLWYLR", "YASFLHXDNFVDZIBCNUEZFBVFWVNOZSQMFGEUBS", "SDMGWXULNOORTVOKKLPQYGHYUSHVCFFONVXJPJ", "DXNWDGTRYCVZPJQSIWVNMXVOYADQSPYIVREPCI", "AWFWTLCLSUMWKMTKCCMZNYXHRGKAEVXOUEPDBN", "JSFFYJXSNGEKMVYGNGPNFEBGPNTLPXVYVLDJVC", "IWXFTGWTTZUQLEORWZTQCXCXHKWFMMZTLCOXYS", "XLQQXAXAJAORQHLAHKYQAAENDHTCTWIEGHJREK", "RRPAQOYTWNRKLJXHBEUUIAGOAGUIAPABHNYOKG", "CBVKCLRJGUYAIJDPLIMUUGUXXTIRXPUAAIKXSW", "SLSSQGYLRAIIQXWJCFJPHBVJMOEKYOCLWJGQWY", "RMHBKSYCWQQZBCPHYCWEQDJEZUQYRNIWIBWXWM", "GYDPEVRFTUGGZNDEAUPAQZBSQOQZDKJMWLDOTI", "ZFAVOKQZWDRTKXVJLZJKACLTFONTVISBWUUHOI", "IGRMOPFZGXZKDLXNYVFHMKLLKRGZHXTVFSYOKG", "EGGMWOIOKKIWWHJCNCMTEITFMYECQQITTMIAMI", "MKOBETDAJVYAWZTQILWTVVIWYOSAEJEAZHCYQV", "RUBWXSOZCFFPXQMSDGIHGWRMKJELSRQXPWKUAF", "VLMPLLKYCDTUYWUSAHTKISXZSKRIYIBFECHYBQ", "ZHJYNGULBUKSTQUWYUFFGFPPHDFPWOAJDITPHI", "GMGBLTEYSHYCDRFKTXFYVRTJIVEYIYLQGSUCVJ", "UNHFXBFUATHVRGCCMMWUEDXMCRACKCMNLDPRPA", "VZUWLGWKIPROLXCZACUUKXFXOHBSUIQJDEDJAI", "HHYXCOWNTVVGSHQPQZISRSVTLTWWGREKULRXOW", "YVSZIZRIIZKOJTIATFIXQAZFPEOCJHXFITLBBS", "XZRDQIKMFTKTJQQCQFKNACDZBURXETLMKCGHSS", "JBPPUELZUFGTEQAXGSDDQUAWLUQQBBJTKMUMQB", "KDSVHYVBTRFKFFUOWJUTRFQGREXXFVVTUIUZWQ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> field = {"RDTWMHPFNKZVDNXABIJK", "HKBJZBAHSRKROSSZEEON", "MFCDIZHSEDNEQJATGVDU", "BTOEPMGSSXCYGEZGYCPY", "CGKIVGKPRJPBTLGKEBQX", "LZQUZVFGLBEQFYCBQBUG", "DPOGFHUDEVKMYILBTWAU", "UCTYGBZNVBTWJKVZLOWK", "QSGKSGVPLBIAMGOHEDRY", "HBUMXAAJAQSOBJCQMJBY", "UKWNQNGKKLWNZCKRCRJC", "COYDEABDYTHLIAXNZRYF", "PSPMWSYZGUVHLLRACNMX", "YWRELBORUNFZUKZCCVVQ", "HYARHFKHHMWYKOHAIZPD", "WRCDIRLPWSKQEUKMPRFJ", "MAYGFCGPAHMSRRANWFNG", "KBWSNFYJVNLWUYQXMBMI", "IPINFWZDKLBKBXNLXEMP", "ALCRPTDXHLAJZTBJCQIF", "IIZIHTOBQUMYTWNZQMSI", "XSSQNRGNLCXKFPNINLBR", "XHDPHEMGAWXHOQLVFLFS", "ZJALBNAUJFDBTEGKJSHD", "CINWRLAKHHWGCLJMGBDB", "MRVWYWMRKPQRRWMEQQGO", "SOXYREDWJUPMOWELFDCE", "GWSBSCXIZGVIIUTCDHBE", "JXMLMGBXZTCGNNDURJFN", "HPLLTPMPOLEHPIZJBOLC", "PSESFJZQGPWVHLRLNTWS", "QFAKRNLRHBDSGCSZBETR", "LISNRZEPXFLJMZRYNQNU", "FGZFVEUXHNNDRVRSIRLZ", "BAKYYBNNLMBDYFSSFHGW", "SYQQPYYQCMZJZJRHJSNE", "BMAGRFBEZAPUUVAZHDVN", "ARFJJRUWSZBAHSRNSCRI", "PZABLMAHBPZPEAOJYIDP", "MWXPKWKNJYFRJBLQHCLW", "OBCDQPJKDASYVGJRZHWS", "DJGLKCLZKTNKWZGKRVWK", "ENEVIXDEZAWQMFGQRHKB", "OJZTHKNRPRKBFSATJNLL", "QPLVZWTBWUIJAWYCMAJG", "UIEREQJRRPXZOKWWIAFG", "RZYWSYBVMFJLQNHNUNZE", "SQOQPGNIGTYNLKQCAGIR"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> field = {"HPTGXMSRLFLXALATCUPPIXNROCAJIPJVDATYBIIOYIMRGUJ", "CLWHKRHXQOJHPATXCCDGMULWVMPYARFPDODFMEHNDEBAJVR", "MTPHBBBELEQPPAEPWHSHNMCGEIQRAUPDSGFXBGULYNUJRME", "DSSKZILOIJKXIPARCPUUICCWBBXZPCFLDBDGVVVQKMRPQQA", "VWJGHBGZEOLNYHIYFJCADNILLEVSBSSQIASBYMPSKFKQDEK", "EGRIICVEOZBJCKFWQUIMIFCGKIDETRJYKQHRTKKVUEGAPIH", "TSLXBVQIMRRDULMNDZCRGROZVCZSNEIPPJVBZXCSOLCVELC", "VTDPOQZGHUYGFJWNIFBALEPPSYBCOZQUZDZTYRHHEJBVGXV", "VFACNXYQJXBHIMTAMEGOLBMWUIIRMBJMULYSFPVGVTMFGLV", "UXDOUELPOBONIYQUGQTOAPYUMQWVJIEKGKDEKVYVYNSWAWW", "ZTLKZZMPBVQUVRYANUBXTFSNJDYOJBYGQUUEYNFNEOVCFKN", "GZBQTNRPOSYEZBFTCGFCHRJNWAPNJXHIVMSPKIJUQPVIVCP", "UODCMQBGQDXJCGVJRKNQFGOPYPGWRYTSPKNPRLNRGCJCGJY", "CSNJVHAEQEOCTSGIOQJICFOCDLSFOUJLJSKGMMDTQDXYXFQ", "EJGTLZGJJYWGSFVXLLSDDUAJKPXIXIAZUWVTLXSRMIMGLCP", "QEXWKUHYDWMXRMQGHRDSHVPEWFLUNEXPGBWEWXLYHKCEEKD", "HMMRCAXXZXYHTDFBKMKSQUXZKGWDCGUSOMYHGKUYCCMSTKZ", "OZBTFEGCUMYTGNQCAVITHIRMVFKIPQXKZISRQSCPWZUBWVH", "CFAZVHLVSWVGPPRORRUEUOBZJGJSJKSLWDGMCKRODMZQXGQ", "LFNUFVYCGFHXEWCLQVHVVNZBKEINZMBSYYBAQPFMBRJMEID", "SRTVJBGWORCBYHCJPTZOKGZBYHGBSFCOQNRNNGKHCJBPNBD", "LJTVUZWXSFREZZGBIVNBTGMHVPIXYDINKPEIHCHLRVQOBHW", "SGGGQOTWEMXDKGLOVGIMQEEJSXKJHFIBCBMOKSHLMQTCEUT", "WEYYIEEZAVTKWCNPKYJLNVMLJRCYIQADUFHMTUSJBDXJWQI", "EYKRNNPVZUIZESZMIKFZFAQWLKZLRWGYZHHKOEULWVCXBXI", "YTHAPAPDHOZSYSDEYMOAVWLSOGSQSFHNEOPBPFICHESYGUS", "MZZIOCFKDALOUVGBIGPXILLFRXBNEQHKBXJTJHVOCKCOKZQ", "CHHLKKHZOFRBJBVIUQQJMRKIOXXXALFVETOISMJKZPWIFKV"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> field = {"THIRBFWKG", "HXCYDGRZL", "GZFRWIWJF", "CZCYRTCGA", "XOAHFBEAZ", "OHXYNVYZE", "WRMSFYRNT", "DVLYRZZUS", "BIFDTVHVP"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> field = {"UQRKKECAWMIQGBVWKSAQM", "NUMQNOLFOGDFRXZFBHQVM", "CPIHYFKECOOPWWVQXCPJS", "SNCMLYNUEXSXPPEOVKXNV", "GOPHBMHIHJARJPVFUJQYE", "LCNZHQHSCMKEDOZQOOJHT", "KDBHLAFOPNRYNHDWFXBMB", "MBHDHXMZGMNHAKBNFXPBQ", "OPJSNEOPTIFWBHGVFWDAL", "NFWREGMVEZFXVENKEADOP", "VSMWMKXLCRNKWAQPSZFJC", "LVDXLTSCVWTRSZXAAKBHE", "VQBMSXVJONQRNDZEHJLVL", "VIXLTUXCOMLHOTWRCMSRJ", "OLDNDIPSVWRMKXZZHKLXW", "HNHCQYWJNOXLNUALMXAEN", "KXHRBQQFUEBOZWGWINCUN", "PMWTLNFILOYBWHSHYRBRL", "AAVARIGWFZCBOQETGYQYE", "ANUQXSMTAMYDIAKXPPGDY", "DJFGHYZEKHKLEPLQMGZHT", "YDGGNNWVSCBTVNFJAIHAC", "RKZTRTBMBHYUEHBPKZWUI", "CIDGIQDMPPWRAJLFLGUJR", "PXVCQUMQDQXIKIXPIOXLZ", "WDYIIVNACWHGVZFAZVDQZ", "TLYSMEUOLCVEZQHPEDQQF"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> field = {"EABZASMVCTPCZRLINJRPS", "GFGEVYRARJQNODCMMJTWR", "LGCWZFWJLKHEMTKEZXDDO", "NSUTQTQHXTDZDJAQUFLLF", "MAZVIQULEDIRMDIRCVIHU"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> field = {"RNTJKCCUTSHYYNJKPUYLQUNCCQVJLNQSCLIJKG", "CMMFOIGBNGZUIBCQGIMHQXNFLIXNRAGKSMQBRS", "FTBGLLVIQAXFETHEZQGLWIIYFLMSFELNAVXSDI", "MUYCPYJPZDABDJYVMZVHMBZHXSEGVMMFCBSBUO", "YGBLELCXMJYCKXBKNXHCXKOTCKBZOHGEOXBLPI", "ZIYNFNMKALDNWDTKPIYKKRFBHURPQEYSOGGFIR", "LZOZVGDXWULIFBUJKVLILHMKIHNVKUDEUUESME", "PJZUKIJPPNVEUUXPPPMIJSTUYVAFWGRECZFETM", "DLSVGRSYSDZXNPNXZEUSQQYEUYMCIIQGNOUFLA", "YSKFWEFMJXWEKZDMECYASQLDAQUBAREZTUHAOA", "TZCRQKBCCJSMATAGICWBKKJNGJQZIPOSVPUQQU", "SSAXZUSIRJGIYKGNGGLCPYIVNEUNLPPOYQMTZK", "LTDAXMYZIMXOQEZHVIDDHKZYKGZYCTZTKWYAQV", "MRYVDIPRNPFQJYSNEKGVTWKSQDNJWVFDZPSIIR", "FTJMOBFSUTQESMSWCQBUOSSQXVWONEPWKRAJSV", "WEWOAZKTAOTMSYAGOJOWJQKUSKZRKTHVQXSXRX", "KONUAKLUCDLNNVPLVZZBWEVARZBATKANYDPRON", "NMWITMQVQBKXLQZRZNAVQMUGHXOYJLADPACQWF", "GPKZBASIHQZOHYFVGENNBXNOEORNITJKGKREZB", "CLSTHKDOPKYMUHMFLRQFEYWCYNBDFAODOLFRTH", "ZVVEJDAPFJCQFNYGWYLPOFPLPTPCUFQJBTCXJO", "YIVGDPODDHCMWMFQHSAPMHLFPUKASZLVHTDAVU", "NRKYGPHRYBSQBVBFDQROSJDNMPQQIFDRTVRAQC", "BJGRCKGWTDYKHTMDXHACKDUQPYDLKGLPOOAEQS", "KKUQWSHIBPTXZCAZDMKMLJGJNOIVWXJTMOWLAQ", "WGLYPOXZQFIGKKMNMZQDALRVGAVTLLLMQKKALD", "VSMLNSBZCAOTFONOBKCPASNVFOOQPPKHFUNQFB", "ORCYMGKQUUARPZXMWZMGBRJHUKDJSICTPGKMNY", "FEYQCJLCPMTJIBXISMALECWKDQQOWWLJKSFFKQ", "CJKKFTWOFHQKREKGRGRURSJMJYMSAKMHYQZHUE", "IIPERENBLRRRCRKBVUTARJVRMTHFHOVSVDZQIQ", "IGIVLZIDFAEFMXBSKJZYIVLXDSOTSFRNDOTQGX", "HGZKJJXYKROIDLBSWIHVSBMLSJCNVSLPJMJBIY"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> field = {"BWBWB", "WBWBW", "BWBWB", "WBWBW", "BWBWB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> field = {"BWBWBWBWBW", "WBWBWBWBWB", "BWBWBWBWBW", "WBWBWBWBWB", "BWBWBWBWBW", "WBWBWBWBWB", "BWBWBWBWBW", "WBWBWBWBWB", "BWBWBWBWBW", "WBWBWBWBWB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> field = {"BWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 2072;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> field = {"BWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 6600;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> field = {"BWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 16172;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> field = {"BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 33600;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> field = {"BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 62322;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> field = {"BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 106400;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> field = {"BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 170522;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> field = {"BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 260000;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> field = {"BW"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> field = {"BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW", "BWBWBWBWBWB", "WBWBWBWBWBW"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 4220;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> field = {"BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 6048;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> field = {"BWBWBWBWB", "WBWBWBWBW", "BWBWBWBWB", "WBWBWBWBW", "BWBWBWBWB", "WBWBWBWBW", "BWBWBWBWB", "WBWBWBWBW", "BWBWBWBWB", "WBWBWBWBW", "BWBWBWBWB", "WBWBWBWBW", "BWBWBWBWB", "WBWBWBWBW", "BWBWBWBWB", "WBWBWBWBW"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 680;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> field = {"BWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBW"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 7080;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> field = {"BWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBW", "WBWBWBWBWBWBWBWBWBWBWBWB", "BWBWBWBWBWBWBWBWBWBWBWBW"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> field = {"BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBWBW"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 164;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> field = {"BWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> field = {"BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBWBW"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 20760;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> field = {"BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB", "WBWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBWB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 12408;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 520625;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 12584;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> field = {"BABBB", "ZZZZA", "XXXXX", "AYYYY", "CCCAC"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> field = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 380;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> field = {"AXBC", "CDEX", "XFGH", "IJXL"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> field = {"AAAA", "AAAA", "AAAA", "AAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> field = {"AABAAAA", "AAAAAAA", "AAAAAAB", "BAAAAAA", "AAAAAAA", "AAAABAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> field = {"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 520625;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> field = {"AABCA", "AAAAA", "BAAAB", "AAAEA", "ADBAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> field = {"AAAAA", "AAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> field = {"ABCDBABCDEAAAAAAAAAAABCDBABCDEAAAAAAAAAAABCDBABCD", "BCDEDBCDEABBBBBBBBBBBCDEDBCDEABBBBBBBBBBBCDEDBCDE", "ZZZZZZZZZZAAAAAAAAAAABCCCCCCCBCCCCCCCCCCCCCCCCCCC", "ABCCCCCCCBCCCCCCCCCCBCCCCCCCBCCCCCCCCCCCCCCCCCCCC", "XXXXXBXXXXABCDEEEABCCBCCCCCCCBCCCCCCCCCCCCCCCCCCC", "YBYYYYYYYBCCCCEEEDDDCBCCCCCCCBCCCCCCCCCCCCCCCCCCC", "ABCDBABCDEAAAAAAAAAACBCCCCCCCBCCCCCCCCCCCCCCCCCCC", "BCDEDBCDEABBBBBBBBBBBCCCCCCCBCCCCCCCCCCCCCCCCCCCB", "ZZZZZZZZZZAAAAAAAAAABCCCCCCCBCCCCCCCCCCCCCCCCCCCB", "ABCCCCCCCBCCCCCCCCCCBCCCCCCCBCCCCCCCCCCCCCCCCCCCB", "XXXXXBXXXXABCDEEEABCBCCCCCCCBCCCCCCCCCCCCCCCCCCCC", "ABCDBABCDEAAAAAAAAAAABCDBABCDEAAAAAAAAAAABCDBABCD", "BCDEDBCDEABBBBBBBBBBBCDEDBCDEABBBBBBBBBBBCDEDBCDE", "ZZZZZZZZZZAAAAAAAAAAABCCCCCCCBCCCCCCCCCCCCCCCCCCC", "ABCCCCCCCBCCCCCCCCCCBCCCCCCCBCCCCCCCCCCCCCCCCCCCC", "XXXXXBXXXXABCDEEEABCCBCCCCCCCBCCCCCCCCCCCCCCCCCCC", "YBYYYYYYYBCCCCEEEDDDCBCCCCCCCBCCCCCCCCCCCCCCCCCCC", "ABCDBABCDEAAAAAAAAAACBCCCCCCCBCCCCCCCCCCCCCCCCCCC", "BCDEDBCDEABBBBBBBBBBBCCCCCCCBCCCCCCCCCCCCCCCCCCCB", "ZZZZZZZZZZAAAAAAAAAABCCCCCCCBCCCCCCCCCCCCCCCCCCCB", "ABCCCCCCCBCCCCCCCCCCBCCCCCCCBCCCCCCCCCCCCCCCCCCCB", "XXXXXBXXXXABCDEEEABCBCCCCCCCBCCCCCCCCCCCCCCCCCCCC", "ABCDBABCDEAAAAAAAAAAABCDBABCDEAAAAAAAAAAABCDBABCD", "BCDEDBCDEABBBBBBBBBBBCDEDBCDEABBBBBBBBBBBCDEDBCDE", "ZZZZZZZZZZAAAAAAAAAAABCCCCCCCBCCCCCCCCCCCCCCCCCCC", "ABCCCCCCCBCCCCCCCCCCBCCCCCCCBCCCCCCCCCCCCCCCCCCCC", "XXXXXBXXXXABCDEEEABCCBCCCCCCCBCCCCCCCCCCCCCCCCCCC", "YBYYYYYYYBCCCCEEEDDDCBCCCCCCCBCCCCCCCCCCCCCCCCCCC", "ABCDBABCDEAAAAAAAAAACBCCCCCCCBCCCCCCCCCCCCCCCCCCC", "BCDEDBCDEABBBBBBBBBBBCCCCCCCBCCCCCCCCCCCCCCCCCCCB", "ZZZZZZZZZZAAAAAAAAAABCCCCCCCBCCCCCCCCCCCCCCCCCCCB", "ABCCCCCCCBCCCCCCCCCCBCCCCCCCBCCCCCCCCCCCCCCCCCCCB", "XXXXXBXXXXABCDEEEABCBCCCCCCCBCCCCCCCCCCCCCCCCCCCC", "ABCDBABCDEAAAAAAAAAAABCDBABCDEAAAAAAAAAAABCDBABCD", "BCDEDBCDEABBBBBBBBBBBCDEDBCDEABBBBBBBBBBBCDEDBCDE", "ZZZZZZZZZZAAAAAAAAAAABCCCCCCCBCCCCCCCCCCCCCCCCCCC", "ABCCCCCCCBCCCCCCCCCCBCCCCCCCBCCCCCCCCCCCCCCCCCCCC"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 39534;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> field = {"AABCA", "AAAAA", "BAAAB", "AAAEA", "ADBFA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> field = {"ABCZD", "ZEFGH", "IJKLM", "NOPQZ", "RZSTU"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> field = {"ABCZE", "ZFGHI", "JKLMN", "OPQRZ", "SZTUV"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> field = {"ABZC", "ZDEF", "GHIZ", "JZKL"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> field = {"AABCA", "AAAAA", "BAAAB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> field = {"ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 520625;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> field = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 7425;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> field = {"ABAA", "AAAB", "BAAA", "AAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> field = {"ABA", "BAB", "ABA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> field = {"ZZ", "ZZ"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> field = {"AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 825;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> field = {"AXBCD", "EFGXH", "XIJKL", "MNXOP"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> field = {"ABABA", "BABAB", "ABABA", "BABAB", "ABABA"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> field = {"CABC", "BDDA", "ADDB", "CBAC"};
    Squares* pObj = new Squares();
    clock_t start = clock();
    int result = pObj->countSquares(field);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22663872&rd=10012&pm=7323
********************************************************************************
#include <string> 
#include <algorithm> 
#include <vector> 
 
using namespace std; 
 
struct Squares 
{ 
  int countSquares(vector <string> field); 
}; 
 
int Squares :: countSquares(vector <string> field) 
{ 
  int n = field.size(); 
  int m = field[0].size(); 
  int i, j, k, l; 
  int ret = 0; 
  int p1, p2; 
  int t1, t2; 
  for (i = 0;i < n;i++) 
  { 
    for (j = 0;j < m;j++) 
    { 
      for (k = i;k < n;k++) 
      { 
        for (l = j + 1;l < m;l++) 
        { 
          if (field[i][j] == field[k][l]) 
          { 
            p1 = k - i; 
            p2 = l - j; 
            t1 = i + p2; 
            t2 = j - p1; 
            if (0 <= t1 && t1 < n && 0 <= t2 && t2 < m && field[t1][t2] == field[i][j]) 
            { 
              t1 += p1; 
              t2 += p2; 
              if (0 <= t1 && t1 < n && 0 <= t2 && t2 < m && field[t1][t2] == field[i][j]) 
              { 
                ret++; 
              } 
            } 
          } 
        } 
      } 
    } 
  } 
  return ret; 
}

********************************************************************************
*******************************************************************************/