/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10085
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

class NimForK {
public:
    vector<int> winners(int n, int k, vector<string> moves);
};

vector<int> NimForK::winners(int n, int k, vector<string> moves) {
    vector<int> ret;
    return ret;
}


int test0() {
    int n = 8;
    int k = 2;
    vector<string> moves = {"1", "1 2", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 7;
    int k = 2;
    vector<string> moves = {"1", "1 2", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 5;
    int k = 3;
    vector<string> moves = {"1", "1 2", "1 2 3", "1 2 3", "1 2 3"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 6;
    int k = 3;
    vector<string> moves = {"1", "1 2", "1 2 3", "1 2 3", "1 2 3", "1 2 3"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 1;
    int k = 20;
    vector<string> moves = {""};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 10;
    int k = 3;
    vector<string> moves = {"", "", "1 2 3", "1 2", "4 5", "1 2 3 5", "2 4", "1 4 7", "4 6 7 9", "2 4 5 8 9"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 7;
    int k = 3;
    vector<string> moves = {"", "1 2", "1 2", "1", "", "3 4", "1 2 3 4"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 42;
    int k = 3;
    vector<string> moves = {"", "", "3", "2", "3 4", "5", "5 6 7", "2", "2 4 5 7 8", "1 9", "2 5 9 10 11", "1 3 5 8 9 11 12", "1 2 4 6 7 9 12", "2 3 6 7 8 9 10 13 14", "", "1 6 7 10 11 14 15 16", "2 3 4 7 8 10 13 16 17", "2 3 5 6 7 11 12 13 14 17 18", "2 3 4 5 6 9 10 13 18", "4 5 6 7 8 9 10 11 13 17 18 19 20", "3 7 9 10 11 12 14 16 17 19 20", "3 14 15 16", "2 4 10 14 19 21", "1 3 5 6 7 9 10 13 16 19 20 24", "", "4 7 10 21", "5 15 18 19 20 21 24 27", "4 5 6 8 9 10 11 13 15 16 19 20 22 23 24 26 27", "1 2 5 8 10 11 14 18 20 21 22 23 24 26 29", "1 4 6 13 16 17 22 23 24 28", "2 4 17 18 19 21 23 25 26 29", "3 6 8 11 13 14 16 20 24 30", "1 7 10 28", "24 30", "5 6 10 17 23 25 30 31 33", "2 3 5 7 12 23 25 26 31 33 35", "37", "1 2 7 8 11 12 20 24 25 28 29 31 33 34", "3 10 12 14 26 30 33 34 38", "2 7 8 11 12 15 22 25 30 31 33 35 36", "15 17 20 21 22 31 32 36 41", "5 6 12 14 20 21 26 27 29 30 32 33 34 36 37 40 41"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 29;
    int k = 3;
    vector<string> moves = {"", "", "2", "1", "4 5", "2 5", "1 4", "1 3 7 8", "1 2 3 5 6", "8 9", "2 3 5 6 9 10 11", "3 4 5 6 7 8 10 12", "4 6 7 9", "5 14", "4 6 8 9 10", "2 4 5 6 10 11 12 13 14 16", "15", "2 3 4 5 7 8 11 12 13 15 17", "2 4 12", "7 11 12", "1 2 3 4 5 6 9 11 13 14 15 17 18 20", "", "2 4 5 6 7 10 12 13 16 20 21", "1 2 3 5 6 7 11 12 13 15 16 18 19 22 23 24", "17", "2 6 10 11 12 19 22", "2 3 4 5 6 11 12 13 15 19 20 21 23 26 27", "1 11", "10 12 14 16 24 28"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 50;
    int k = 3;
    vector<string> moves = {"", "2", "", "3", "3", "4", "1 2 3 6", "4", "6", "2 3 4 7", "5 6 7", "1 4 6", "1 2 3 4 5 7 9 12 13", "2 3 6 10 14", "2 7", "2 9 14 15", "1 4 8 12 15", "3 8 10 14 15 16 18", "7 11 15", "4 7 12 20", "1 2 3 5 6 7 11 12 13 14 16 17 18 19 20", "1 3 4 7 11 12 13 15 18 19 20 21", "", "", "5 10 12 17 19 23 25", "10", "2 4 5 6 8 12 13 20", "1 2 3 5 8 11 12 15 17 18 19 20 21 23 24 26 27 28", "2 6 7 8 12 14 15 17 20 22 23 24 25 27 28 29", "", "1 4 6 7 9 10 14 17 18 23 26 27 30", "3 8 9 14 21 31 32", "1 2 4 6 7 8 11 12 13 14 19 20 23 27 31 32", "3 6 9 11 12 14 16 18 23 25 30 31", "3 4 8 14 15 19 22 30 32 35", "1 7 11 12 15 16 17 20 21 23 25 27 29 33 34 35", "1 5 6 11 12 13 14 17 21 25 27 28 29 31 32 33 35", "2 15 26 34 35 38", "1 4 11 12 14 15 16 19 20 21 23 26 28 33 34 38", "4 7 11 12 19 24 28 33 38", "2 5 8 10 11 12 13 18 20 25 33 36 38 39 40", "6 11 29 30 31 32", "6 15 16 18 21 22 25 26 32 37", "6 14 28", "4 32", "9 45", "4 12 16 22 23", "7 14 16 17 18 19 29 31 34 37 41 42", "1 7 12 15 20 22 30 45 47", "1 2 9 11 12 14 17 19 22 29 35 36 39 47"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 44;
    int k = 3;
    vector<string> moves = {"", "2", "", "2", "1 2 5", "1 3 6", "1 2 4 6", "8", "4 6", "1 2 6 9", "3 6 9", "1 3 4 6 8 9", "2 3 6 7 10 11 13", "3 5 10", "2 3 4 6 11 12 14 15", "3 9 12", "1 2 4 7 8 13 16 17", "5 7 8 14 15", "2 8 10 15 18", "3 5 8 9 12 13 14 17 19", "1 2 7 13 16 17 19 20 21", "1 3 9 10 11 20 21", "", "2 3 4 5 6 7 8 10 12 13 14 15 16 18 23 24", "2 6 7 14 17 20 21 24 25", "1 3 7 9 12 13 14 17 20 24 26", "8 10 18 22 24 25 26 27", "2 27", "1 2 4 12 13 15 18 19 22 23 24 25 26", "16 22 25 27", "2 3 7 8 9 15 20 23 26 29 30", "2 3 4 5 7 9 14 15 16 17 22 24 26 27 29 31 32", "6 8 14 15 18 22 25 26 32", "3 4 6 9 10 11 13 14 16 18 19 25 26 29 30 32 33 34", "1 3 4 5 6 7 8 11 13 14 19 21 23 24 25 28 31", "4 5 6 10 12 20 21 23 25 27 30", "1 3 5 6 7 8 9 13 18 29 30 31 37", "3 4 5 13 21 26 29 31 32 34 36 38", "1 8 11 14 18 22 23 24 26 28 29 31 32 34 39", "38", "1 9 28 33 37", "6 7 16 24 28 32 33 34 36 37 40", "3 6 7 19 22 23 24 29 31 32 33 41", "2 3 6 7 9 18 21 26 27 28 30 31 32 34 37 41"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 46;
    int k = 4;
    vector<string> moves = {"", "2", "1", "", "", "2 3 6", "2 5 6", "3 6 7", "2 4 5 6", "", "1 3 4 5 6 7 8 11", "1 3 5 6 11 12", "2 3 5 6 7 11 12", "5 9", "3 5 9 10 11 12 13 15", "10 11 12", "5", "1 2 6 7 8 9 10 14 16", "2 4 8 9 11 13 15 16 17", "12 20", "1 2 3 7 10 12 16 18 19", "2 3 5 8 12 14 20 21 22", "", "3 4 9 13 18 22 24", "4 7 10 11 14 15 16 19 21 23 24", "10 13 17 18 19 21 23 25", "1 5 7 14 18 22 26", "6 10 16 20", "4 8 10 11 15 17 19 22 23 29", "8 18 21 25 26", "7 17 23 24 31", "2 10 11 14 22 27", "5 7 8 10 11 17 18 20 23 29 30 32", "2 6 13 14 25", "4 7 8 10 11 12 15 16 18 19 21 22 24 29 31 32 35", "3 5 7 9 11 15 20 21 22 24 25 27 28 31 32 34", "3 7 8 11 14 15 16 19 20 23 25 27 29 30 33 37", "1 2 7 8 13 15 16 18 19 21 22 23 26 30 34 36 38", "9 11 14 15 22 24 35", "1 6 21 24 38", "3 7 12 15 18 23 33 34 38", "7 11 12 21 23 31 40", "1 2 20 23 27 31 32", "3 6 17 18 19 29 33 35 37 39 41 43", "11 13 19 20 23 24 26 35 37 38 41 43", "21"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 25;
    int k = 3;
    vector<string> moves = {"", "1", "2", "", "1 3", "6", "1 2 3 4 6", "2", "2 3 6 7 9", "1 5 6 7", "1 2 4 7 9 10", "1 2 3 6 7 8 11", "3 5 6 9 10", "7 9", "2 7 8 14", "1 3 9", "1 2 3 6 7 8 9 10 17", "11", "", "", "1 9 11 12 18", "", "1 2 3 5 6 7 8 9 11 16 17 18 19 20 21", "2 4 11 12 13 14 15 20", "1 4 12 13 16"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 46;
    int k = 3;
    vector<string> moves = {"", "2", "", "1 2", "1 5", "3 5", "1 3 4 6", "8", "", "3 6 7 9 10", "1 2 3 6 7 10 11", "4 6 9 10", "3 5 7 9 10 12 13", "2 3 10 13", "2 3 5 10 11 14", "1 2 3 4 9 10 14 15", "1 8 12 14", "1 3 6 10 11 12 13 17 18", "2 3 7 8 9 17", "1 3 5 7 9 15 17 18", "5 6 8 11 13 15 16 17", "3 4 5 8 10 20", "1 2 3 4 5 7 10 13 17 18 19 20 21", "4 6 7 8 9 10 11 12 13 15 19 20 21 22 23 24", "3 5 11 12 13 15 16 17 19 24 25", "2 3 4 7 11 12 19 21 25", "10 23", "5 8 9 12 13 18 21 22 24 26 27", "2 9 13 18 19 23 24 26 28", "1 4 7 9 10 11 13 17 19 20 23 27", "1 5 6 7 11 12 13 16 17 18 19 21 23 24 26 27 28 29", "1 2 4 8 13 14 18 19 21 22 23 29 30 32", "1 2 3 4 6 8 14 15 17 19 22 23 24 25 30 31", "1 3 6 8 9 12 14 15 17 20 21 22 23 26 27 28 29 31", "4 21 26 28 31 34", "1 2 3 6 7 10 12 13 15 19 20 21 26 29 33 34", "1 3 4 5 13 16 19 21 27 29 30 33 36", "6 7 17 36 38", "1 4 5 6 14 15 17 19 21 28 34 37 38 39", "3 4 35", "1 3 4 7 10 11 12 15 17 22 26 27 28 31 32 38", "4 9 10 12 17 21 22 23 26 27 30 38", "4 14 27 33 34 35 43", "2 3 5 11 13 16 22 25 30 31 32 35 37 39 41 44", "6 14 15 16 20 24 29 36 42", "5 39 43"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 30;
    int k = 3;
    vector<string> moves = {"", "", "", "1", "5", "1 3", "2 3 5", "1 4 5", "9", "", "1 3 6 9 10", "2 4 5 6 7 9 10 12", "", "", "2 3 6 7 8 9 12 13 15", "3 8 10 12 14 15 16", "1 2 4 6 8 13 14 16", "3 5 10 11 12 14 15 16 17 18", "1 2 5 7 9 14 17 18 19", "4 13", "4 6 8 13 14 18 20 21", "", "7 14 20", "2 3 7 8 9 13 15 16 17 18 20", "1 2 3 4 5 9 17 21 22 23", "3 5 16 17 21", "1 2 5 9 11 16 17 18 19 20 21 22 23 26 27", "1 2 3 5 15 21 23 24", "12 14 17 18 20", "1 2 3 4 5 6 7 9 10 12 17 21 22 23 26 29"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 45;
    int k = 3;
    vector<string> moves = {"", "", "2 3", "3 4", "2 3", "2", "", "6", "3 5 7 9", "7 10", "9", "12", "4", "1 6 8", "1 2 5 6 7 8 9 10 13 14", "", "5 10 16", "3 8 11 12 13 15 16", "2 4 5 6 7 8 11 12 13 15 16 19", "1 2 5 6 7 8 9 10 11 12 16 17 18 19", "4 9 10 14 17 18 19 20 21", "8", "1 2 4 12 14 19 20 23", "4 7 10 11 12 18 19 21 23 24", "9", "2 3 4 5 9 11 17 18 19 20 23 25", "4 7 13 17 20 26 27", "7 8 10 17 18 19 21 23 26", "1 3 4 6 7 9 14 16 18 20", "7 15 16 17 18 27", "2 3 5 6 11 13 15 17 24 26 28 29 30 31", "12", "2 3 5 6 13 16 17 18 20 23 24 27 28 32", "2 3 4 7 8 9 13 14 16 18 24 27 28 30", "1 4 5 6 9 12 14 17 18 19 21 23 26 27 29 30 34", "4 7 9 14 20", "1 6 7 8 10 12 13 17 19 21 23 24 25 27 28 30 31 32", "7 12 15 17 21 22 32 38", "1 3 4 6 9 10 14 19 20 21 23 24 31 33 35 39", "34", "4 8 11 15 21 22 26 30 32 39", "1 4 8 13 16 18 20 22 23 24 28 29 32 35 38 39 41", "4 6 11 12 13 23 24 26 28 29 32 34 36 37 38 40 41", "6 13 15 29 31 40 42", "7 12 13 16 22 23 27 28 29 30 31 35 40 41"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 39;
    int k = 3;
    vector<string> moves = {"", "", "3", "2", "1", "5", "1 2 4 5", "5", "2 3 4 5 6 9", "", "1 5", "3 8 9 10 11 12", "1 8 9 10 12", "2 4 7 8 12", "3 4 5 7 9 10 11 13", "2 4 6 7 8 11 12 14 15", "1 7 13 14 15", "3 4 5 7 9 10 12 14 15 17 18", "1 3 5 7 8 9 10 11 12 14 19", "1 2 3 4 5 7 10 14 15 18 19 20", "1 3 4 7 10 13 16 18 20 21", "1 2 5 6 12 16 17 18 19 20 21", "1 2 3 4 10 12 13 14 16 17 18 20 21 22 23", "", "10", "1 3 4 6 7 8 9 10 11 13 14 16 18 20 21 22 25", "19 23", "4 5 6 7 8 11 12 13 14 16 17 21 23 26 27 28", "5 8 9 10 11 12 14 23 25", "4 6 17 20 22 23 27 28 30", "6 10 25", "2 3 5 6 7 10 14 16 20 29", "2 4 5 7 9 20", "3 12 13 14 15 16 17 18 19 20 23 25 28 33 34", "5 10 11 13 20 27 31 35", "1 2 3 5 11 12 13 14 24 26 28 29 34 35 36", "7 8 9 11 12 17 20 21 23 24 27 30 31 32 33 35 37", "1 4 5 7 8 11 13 14 18 20 21 23 24 27 28 32 34 37", "3 6 12 13 15 16 19 20 21 22 23 25 27 29 31 32 38"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 26;
    int k = 4;
    vector<string> moves = {"", "", "1", "3", "3", "3 6", "1 3 6 7", "2", "5 7", "2 3 6 7 9 10", "1 2 4 8 10 11", "4 7 9 10", "3 6 10", "1", "1 12", "2 4 6 8 10 11 12 13 14", "", "2 3 5 8 10 11 13 15 16 17 18", "1 3 4 5 7 9 13 14 19", "2 3 5 9 10 14 15 16 17 18 19", "1 3 4 7 8 9 10 12 15 18 19 20 21", "2 5 6 7 8 9 11 13 14 16 17 18 20 22", "2 10 14 15 19 21 23", "1 4 5 7 9 11 16 17 18 19 21 22 24", "1 4 6 8 9 12 14 17 18 20", "1 2 3 5 6 7 9 10 11 14 15 20 24 25"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 49;
    int k = 4;
    vector<string> moves = {"", "", "", "3", "4 5", "", "2", "8", "", "2 6", "5 8", "1 3 5", "5 6 8 9 10 13", "3 5 6 7 8 9", "3 5 11 15", "2 4 5 6 10 11 12 13 15", "2 8 9 10 16 17", "6 15", "1 6 9 10 14 16 18 19", "4 7 8 9 13 17", "2 3 4 5 8 10 12 17 19 20 21", "1 4 7 10 12 13 14 15 16 20 21 22", "3 4 5 7 8 9 12 14 16 18 22 23", "8 9 13 17 23", "1 3 9 16 21 23 24", "14 18 24", "4 6 7 15 19 22 23 27", "2 4 5 7 8 9 10 11 12 14 15 19 20 21 23 25 26 27", "3 5 6 7 9 13 17 19 20 27 28", "1 9 15 18 21 22 23 29", "1 20", "2 4 5 6 7 12 13 14 19 23 25 27 30", "", "1 2 4 6 8 9 11 12 16 18 23 25 26 27 28 29 31 32", "1 6 7 13 17 21 23 26 27 30 32 35", "1 3 4 5 12 26 30 34 36", "12 30 32 36", "6 16 30 34 37", "7 10 11 14 17 19 31 32 33 39", "4 26 40", "1 3 4 6 7 8 9 10 12 15 20 22 23 24 26 35 37 38", "2 8 9 10 13 15 21 22 26 27 28 29 30 32 34 38 41", "18 20 29 42", "22 27 32", "4 8 15 18 22 26 34 43 45", "4 9 12 19 20 23 29 33 35 37 40 45", "23 27 30 36 41 42 43", "21 25", "11 16 20 22 30 31 33 36 37 43"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 40;
    int k = 4;
    vector<string> moves = {"", "", "1", "2 3", "4 5", "", "", "3 4 5", "1 3 7 8", "1 3", "4 6 8 9", "1 2 3 4 5 12", "1 2 4 9 11 13", "1 2 5 6 8 9 10 11 13 14", "", "2 6 9 14", "4 10 12 17", "3 8 13 14 17", "2 4 5 6 7 8 9 10 11 12 14 16 18", "1 3 4 5 6 8 9 11 12 13 14 15 17 19", "2 3 5 13 14 15 16 17", "2 3 4 5 6 8 10 14 15 18 19 20 21", "9 12 16 23", "1 4 7 17 24", "1 2 3 4 5 6 7 9 10 11 16 17 18 20 21 23", "2 14 26", "2 3 4 6 7 9 12 14 15 16 19 21 22 23 24 26 27", "2 9 10 11 12 16 17 19 24 25 26 27", "16 20 25", "1 9 11 13 14 15 17 23 24 27", "1 3 5 7 8 9 12 13 17 22 23 24 27 28 30", "2 5 6 15 17 23 28 30 31", "2 10 11 12 13 14 17 18 20 21 22 25 26 27 32", "4 11 12 18 19 21 23 27 29 30 33 34", "1 2 7 10 11 12 14 16 17 19 21 22 24 30 31 32 33 34", "5 10 12 15 18 23 24 29 32", "3 5 18 19", "12 13 17 24 35", "3 5 7 10 13 15 22 25 26 33 34 36 38 39", "1 2 3 7 9 10 11 25 26 27 29 30 31 34 37"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 39;
    int k = 4;
    vector<string> moves = {"", "", "3", "1 2", "", "4", "2 4 5 6", "1", "", "2 4 6 8 10", "2 4 8 9 10 11", "1 2 4 6", "2 3 4 5 10 11 12", "", "5 6 8 9 12", "", "2 4 5 7 9 11 12 13 15 17", "8 9", "5 6 11 12 13 14 15 16 17 18", "1 2 7 13 17 20", "17 20", "4 7 8 9 12 16 20 21", "14 20 21", "1 6 7 10 16 18 19 22 24", "3 10 14 20", "3 4 7 9 13 14 16 20 22", "6 25", "2 4 6 11 14 15 16 17 18 19 20 22 23 27", "5 13 14 20 24 28", "1 5 8 9 11 19 20 21 26 30", "2 3 4 6 9 16 18 21 24", "2 3 4 5 6 8 9 10 11 13 15 16 19 22 23 27 29 31", "3 5 6 8 10 11 14 17 20 23 24 27 28 33", "14 15 21 25 29 34", "2 3 5 13 14 16 19 27 29", "1 2 4 5 6 8 9 10 20 23 24 26 28 29 31 33 35 36", "1 8 9 14 15 18 21 22 23 24 26 27 28 32", "3 6 8 19 23 28 30 31", "2 5 8 10 11 12 19 20 21 22 24 25 28 29 34 36 37"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 23;
    int k = 4;
    vector<string> moves = {"", "2", "", "1 2 3", "1 2 5", "1", "4", "", "2 7", "3 6", "1 3 7 8 9", "1 2 6 8 10 11 12", "3 4 6 8", "4 5 6 8 9 11 12 14", "3 8 9 10 11 15", "1 2 7 9 10 12 14 16", "", "3 4 9 12 16", "4 7 9 14", "2 5 9 20", "2 4 8 9 12 14 15 17 18 19", "5 12", "1 2 4 6 7 8 9 10 11 13 18 20 22"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 33;
    int k = 5;
    vector<string> moves = {"", "", "", "", "", "", "1 7", "2 6 7", "3 4 5 7 8", "1 4", "2 4 10", "2 3 7 8 10", "3 4 5 7 13", "3 9 10", "2 3 5 7 10 15", "4 5 10 12 13", "6 8 9 10 11 12 13 15 16 17", "2 13", "2 3 4 5 9 11 14 17 18", "2 12", "2 5 7 9 10 11 14 15 17 19 21", "5 10 13 15 16 18 19 21 22", "5 6 11 12 13 15 20 23", "1 2 4 5 8 10 12 13 14 16 17 18 19 20 22 23", "2 3 4 5 6 12 14 15 16 21 24", "5 20", "8 12 13 16 17 18 23 24", "1 2 3 8 10 13 19 22 26", "4 6 7 15 21", "1 2 5 6 7 8 9 10 11 12 13 16 18 20 22 23 25 29", "6 7 9 10 11 15 17 18 20 21 24 25 26 29", "4 10 11 13 16 17 18 20 21 22 27 30", "6 12 13 14 26 31"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 25;
    int k = 4;
    vector<string> moves = {"", "", "3", "1", "3 4 5", "4 6", "2 3 4 5 6", "4", "1 2 3 6 8", "2 3 4 5 8", "2 3 5 7 9 11", "4 10", "2 3 7 10 13", "3 9", "", "2 7 10 12 13", "4 6 7 8 17", "4", "3 5 9 11 13 14 15 16 18", "5 7 8 9 10 15 16 17 18 19 20", "", "2 8 9 11 12 13 15 16 17 18 19 20 22", "2 16 18 21", "1 3 5 9 10 11 15 18 19", "1 2 5 6 8 11 13 15 18 19 20 21 22"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 46;
    int k = 4;
    vector<string> moves = {"", "1", "", "2", "2 3", "2", "3 4 6", "1 2 3 6 8", "3", "1 4 7 10", "6", "5", "1 2 5 7 9 10 11", "", "1 3 7 9 11 15", "2 4 8 9 11", "1 3 5 6 9 10 11 13 14", "10 12 13 14", "19", "6 10 13", "1 6 7 9 12 13 16 19", "3 11 12 16 21", "12 20", "2 15", "8 18 19 20 25", "1 7 10 13 14 15 16 17 18 20 22 26", "1 2 3 4 9 11 12 15 16 18 20 21 22 23 24 25", "7 8 10 12 17 24 25 27", "2 6 10", "1 6 8 13 27", "1 10 17", "1 2 6 9 16 17 20 22 26", "2 8 9 13 14 17 20 22 29 31", "4 5 6 8 9 10 11 14 15 18 19 23 24 25 26 27 29 32", "11 34", "2 24 25 29 30", "1 6 18 21 22 32 34 35 36", "1 8 15 16 17 22 23 25 28 29 38", "3 4 6 9 10 13 14 15 18 20 26 27 28 30 32 38 39", "4 6 7 16 17 18 20 25 30 31 34 35 36 39", "3 4 5 13 15 21 24 25 26 34 36 38", "16 24 27 29 40", "1 4 5 8 15 19 23 26 29 34 35 37 38 40", "8 17 28", "6 7 9 10 12 13 14 15 28 30 32 33 35 38 40 42 44 45", "5 9 11 12 21 22 24 27 30 33 40 41 45"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 43;
    int k = 4;
    vector<string> moves = {"", "2", "", "1 2", "1", "1 4 6", "3 4", "1 5", "4 6", "4 5 9", "6 9", "2 4 5 8 9 10 11", "4 5 10", "9", "2 4 5 9 11 13 14 15", "", "2 13 14 17", "4 9 12 13 15 16 17", "3 6 12 13", "1 4 5 6 8 9 10 11 15 19", "1 2 5 8 10 11", "3 5 6 10 11 12 13 15 21 22", "3 9 14 15 22", "19 20 21 22", "8 16 22", "20 25", "1 2 3 6 7 9 10 11 13 17 18 19 20 22 24", "1 2 7 9 10 13 14 15 18 24 26 28", "2 3 6 7 9 11 16 18 19 20 21 23 24 26 29", "1 3 6 9 10 11 12 14 15 17 19 23 24 26 28 29", "1 3 4 6 8 10 11 13 28", "1 2 5 9 10 13 14 15 16 17 18 19 21 22 23 24 28 29", "3 4 7 9 11 12 14 15 16 17 19 21 23 24 26 27 29 33", "1 2 5 9 12 13 19 22 26 28 29 34", "7 14 15 19 24 28 29 31", "2 13 14 15 16 17 23 27 34 36", "2 10 25 34 36 37", "", "13 34", "4 5 6 9 10 11 18 20 25 29 32 34 37 38 39", "3 9 16 18 19 21 33 34 35 36", "6 19 26 36 37 41", "5 7 8 9 13 16 17 22 23 29 32 40"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 39;
    int k = 4;
    vector<string> moves = {"", "", "1 2", "2 3", "", "", "", "1 2 6 7", "4 7 8 9", "5 9", "9 10", "3 4 7", "1 2 3 6 7 8 11 12", "1 2 3 5 6 8 9 11", "6 12 14", "", "1 6 7 10 13 14", "15 17", "2 4 8 9 12 13 14 18 19", "1 4 7 8 10 12 13 15 17 19", "7 11 14 16", "1 2 4 6 9 11 12 13 17 19", "2 3 4 5 6 8 11 13 15 16 18", "3 4 5 8 9 11 13 14 15 17 18 19 20 22 24", "12", "3 4 6 11 13 14 16 18 22 25", "7 8 9 10 11 13 14 17 18 19 22 25", "1 2 6 7 8 9 10 18 22 28", "2 3 8 10 12 13 14 16 18 19 20 21 24 25 26 27 28 29", "1 6 7 9 11 13 14 15 18 19 24 28", "4 5 7 9 12 13 15 19 20 21 22 24 28", "2 7 14 15", "5 10 11 18", "", "18 35", "3 4 7 21 27 28 29 31 32", "19 27", "3 5 10 12 18 19 21 23 26 27 28 35 37 38", "1 2 6 8 10 11 13 14 20 21 23 25 27 32 33 36 38"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 32;
    int k = 5;
    vector<string> moves = {"", "2", "2", "1 2", "", "2", "1 2 4 6", "1 2", "1 9", "6 9", "1 11", "2 6 7 9 10 11", "3 6 7 9 10 11 12", "", "1 2 3 4 6 7 11 12 14", "2 3 6 7 13 14", "12 17", "10 11", "12 15", "4 5 6 11 20", "3 4 7 9 10 11 13 14 15 16 17 20 21", "15", "1 8 14", "3 4 10 15 16 17 18 21", "4 5 11 13 15 18 20", "3 4 6 7 8 10 12 14 17 21 22 25", "4 8 9 11 13 15 17 18 21 23 25", "2 3 6 7 11 16 17 19", "2 3 6 13 14 16 17 19 22 23 25 26 28", "2 3 4 5 10 11 12 13 18 20 21 23 24 28 30", "1 3 6 7 9 10 11 12 15 20 21 23 24 26 27 28 29 31", "6"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 24;
    int k = 6;
    vector<string> moves = {"", "2", "1 2", "2 3", "2 4", "", "1 2", "1", "1 2 3 4 5", "1 3 4 5 8 9 10", "1 6 9 11", "4", "1 10 11", "2 4 5 10 12 14", "", "3 7", "2 4 5 8 9 11 14", "8 9 16", "2 3 4 8 9 10 12 14 18 19", "", "1 10 12 14 17 19 20 21", "3 6 16 18 19", "2 4 6 7 9 11 12 14 17 18 21 22 23", "1 2 3 4 5 6 7 9 10 11 12 13 18 21"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5, 6};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 45;
    int k = 3;
    vector<string> moves = {"", "", "", "3 4", "2 4", "2 3 4 6", "2 3 4", "1 3", "1 2 3 7 8", "3 6 7 8 10", "1 2 3 7 9 10 11", "1 3 4 8 9 10 11", "3 4 5 6 8 12 13", "1 2 4 5 10 12 14", "1 2 4 12 15", "4 5 6 9 10 11 16", "1 2 3 4 11 12 13 14 15", "3 9 10 11 13 14 15 16 17 18", "1 2 4 7 9 11 12 13 15 16 17", "4 7 16", "1 6 12 13 15 16 21", "1 3 5 6 10 11 12 16 20", "1 2 3 5 6 7 8 10 15 17 18 19 21 22 23", "2 3 4 5 7 8 9 11 15 16 18 20 22", "1 2 6 8 11 13 14", "2 3 6 7 8 10 11 22 23", "1 2 3 7 9 12 13 15 16 18 19 20 22 23 24 25", "1 3 6 10 12 14 17 18 19 22 24 27 28", "2 7 8 9 11 14 15 18 24 25 26 29", "1 2 4 5 8 9 10 11 15 17 19 20 21 23 24 25 28 29", "1 2 5 6 7 9 10 12 13 14 15 18 19 21 23 24 27 30", "", "1 7 13 14 16 19 20 21 26 31 32 33", "", "3 4 6 7 9 11 12 13 14 15 17 18 23 24 25 26 27 29", "1 2 4 9 11 13 16 20 23 29 30 31 33 34 35 36", "12 18 33", "17 22 30", "4", "2 3 4 5 6 8 10 11 13 16 19 23 26 29 30 32 36", "7 13 18 22 25 26 27 36 39 41", "3 10 14 18 22 38 41", "1 4 11 12 16 17 21 23 33 36 41 42 43", "", "4 18 39"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 48;
    int k = 3;
    vector<string> moves = {"", "1", "", "1 3 4", "1 5", "3 4 5", "3 7", "1 2 4", "2 3 4 5 8 9", "1 2 6 10", "1 4 6 7 10", "", "3 4 5 7 11 12", "3 6 8 13", "10 13", "6 8 11 12", "1 2 4 6 7 9 11 15 16 17", "4 5 7 8 9 15 16 18", "3 4 6 7 8 14 15 16 17", "3 8 11 12 13 15 16 17 20", "1 2 3 5 13 15 19 21", "1 2 4 7 9 10 11 12 13 14 15 20", "1 4 5 8 9 19", "2 5 7 9 13 14 16 17 19 21 23", "1 2 3 4 8 9 12 17 18 19 23 24 25", "4 5 6 7 11 12 16 17 18 19 20 21", "9 10 14 19 20 23 26", "8 16 17", "2 3 6 7 10 11 14 18 20 22 23 24 25 26 28", "4 5 6 10 12 15 16 18 19 20 23 27 30", "8", "3 5 6 7 8 14 15 17 19 20 24 25 27 28 29 30 31 32", "2 3 4 8 10 16 20 24 26 28 29 31", "1 2 4 6 7 13 17 18 20 27 29 30 31 32 34", "4 8 13 14 15 17 19 22 24 29 32 33 34", "6 17 19 25 28 31 33 36", "1 2 3 7 9 11 15 16 17 18 20 21 22 25 26 29 34 35", "1 3 6 10 11 13 16 22 26 32 34 36 38", "4 6 9 11 14 16 17 20 23 26 27 32 33 36 37", "2 4 5 6 12 15 16 18 20 24 26 29 31 33 34 37 40", "3 11 15 16 25", "7 23 26 34 42", "2 8 10 25 28 33 35 39", "4 6 11 12 13 15 22 25 26 27 29 33 35 40 42", "5 7 10 11 12 14 16 19 24 25 26 27 34 36 42", "8 23", "5 17 18 35 38 43 45", "22 23"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 23;
    int k = 3;
    vector<string> moves = {"", "", "2", "", "1 5", "1 2", "1 5", "6 7", "6 9", "2 4 5 6 7 8 10", "5 6", "", "6", "1 2 4 5 6 7 11 12 13", "1 2 5 6 10 11 12 14", "1 2 3 4 6 7 8 9 15 16", "1 2 3 6 7 10 11 15 16 17", "1 2 3 7 9 10 11 12 13 15 16 17", "7", "1 3 4 9 10 12 13 15 16 18", "6 7 10 12", "1 2 4 9 15 20", "1 22"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 44;
    int k = 3;
    vector<string> moves = {"", "1", "2", "1 4", "4 5", "1", "2 4", "2 3 7", "", "3 7 8 9", "1 2 4 5 8 9", "5 6", "2 5 6 7", "1 2 8", "2 3 4 6 7 8 10 11 12 15", "1 2 3 5 6 9 10 14 15", "5 7 14", "1 3 5 6 8 10 11 14 15 17 18", "5 6 7 8 9 10 12 13 14 15 18", "1 2 6 8 9 12 13 14 15 20", "1 5 6 7 8 9 10 12 14 16 17 18 20 21", "1 5 7 10 12 13 14 15 17", "1 4 5 6 7 8 11 12 15 17 22", "1 2 3 4 5 7 9 14 15 16 18 19 21", "1 5 6 7 9 11 12 13 14 15 16 21 22 23 24", "1 3 7 8 12 18 19 21 23 24 26", "3 6 14 15 17 18 20 26", "13 22 23 25 27", "3 6 12 15 19 22 25 28", "3 4 8 9 11 16 18 21 23 24 27 28", "10 11 12 13 17 18 19 20 21 24 26 27 30 31", "9 29", "2 6 20 21", "19 21 30", "3 9 10 22 29 32", "12 16 24", "3 9 10 11 12 13 14 22 23 29 30 31 32 33 35", "6 7 12 14 17 18 21 23 25 29 30 31 36 37 38", "4 7 11 13 15 16 17 21 22 27 31 32 36 37 38 39", "1 4 7 12 15 18 19 20 24 30 32 34 35 39", "7 12 21 22 24 27 38", "8 14 26 27 35 37 39 40", "1 9 10 12 13 18 21 34 41 42", "13 26 28 43"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 21;
    int k = 3;
    vector<string> moves = {"", "", "3", "", "2 4", "1", "", "8", "1 4 5 6 7", "3 5 10", "2 5 7 11", "1 3 4 5 9 11 12", "3 7 11", "1 4 5 6 7 8 11 12", "13", "5 8 9 11 12 13 15 16", "1 2 3 4 5 7 10 13 15 16", "1 2 3 4 5 7 14 17 18", "1 3 4 6 11 13 14 16 18 19", "4 8 9", "4 16"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 31;
    int k = 2;
    vector<string> moves = {"", "", "2 3", "1 2 4", "2", "3 4 5 6", "1 3 4 5", "8", "1 6 9", "2 4 5 6 8 9", "9", "3 4 6 7 9 10 11 12", "1 2 3 5 8 9 12 13", "1 2 6 7 9 10 11", "5", "1 3 12", "4 5 7 8 14 17", "2 3 4 8 10 13 14 15 16", "", "2 5 8 14 17 19 20", "3 15 17 19", "10", "4 6 14 20", "1 2 3 6 7 14 17 19 20 21 23", "2 5 8 9 14 18 23", "3 4 5 7 8 9 12 13 14 17 18 19 20 22 24 25", "1 2 4 5 6 7 9 11 12 13 14 15 16 17 21 22 25 26 27", "1 3 6 7 8 9 10 11 12 16 20 24 25 26", "1 3 4 5 6 7 8 10 13 15 16 18 21 22 23 25 26 27 29", "1 2 6 7 12 14 15 19 22 24 29", "3 4 5 6 8 9 10 12 13 14 20 22 23 25 30 31"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 7;
    int k = 2;
    vector<string> moves = {"", "", "", "3", "1 3 4", "", "2 3 5 6 7"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 47;
    int k = 2;
    vector<string> moves = {"", "", "2", "", "3", "2 3 4 6", "1 4 6 7", "4 6 7", "4 9", "3 5 6 9", "3 4 5 8 11", "4 6 9", "1 6 7 10 12", "1 4 6 8 9 10 11 13", "3 7 14", "3 4 6 11 13 14 15", "3 11 15 16", "1 4 6 7 8 9 10 11 13 14 16 17", "9 12 13 18", "7 12 13", "1 2 4 6 8", "1 11 13 14 20", "4 5 6 7 8 9 16 21 23", "4 5 6 7 8 9 10 11 14 16 17 18 20 22", "1 2 7 9 11 14 18 20 23", "3 6 7 18 26", "2 6 7 9 10 17 18 22 23", "1 3 5 6 10 11 12 16 18 19 20 22 23 26 27 28", "15 18", "", "16 21 31", "3 4 5 6 7 9 10 11 12 13 14 15 18 21 23 26 27 30", "2 3 5 7 9 10 14 17 18 19 21 23 25 29 31 32 33", "4 17 19 28", "4 7 14 16 19 21 27 28 29 31 32 34", "7 16 24 29 32", "4 9 15 16", "2 4 9 11 13 36", "3 4 7 11 14 15 17 18 32 34 35 39", "6 7 8 10 12 21 25 33", "2 11 12 14 15 16 19 23 27 40 41", "2 3 4 6 8 9 14 22 24 26 30 32 34 37 40 42", "7 10 13 18 23 29 36 41", "2 3 4 8 9 13 14 16 18 20 26 29 30 31 36 41", "4 6 8 17 36 44 45", "2 3 4 7 9 13 16 17 18 21 30 31 35 39 40 42 43", "2 8 20 31"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 19;
    int k = 2;
    vector<string> moves = {"", "", "", "1 4", "1 2 4", "", "", "1 7 8", "1 3 4 5 7 9", "1 2 3 5 7 8", "3 5 6 7 8 10 11", "1 2 3 4 5 6 11 12", "1 4 8 10 12 13", "4 8 11 13 14", "4 8 11", "1 4 5 6 7 8 9 11 15 16", "1 3 4 7 12 13 14 16", "2 4 6 7 8 10 11 13", "1 2 4 5 7 8 10 12 14 17"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 30;
    int k = 3;
    vector<string> moves = {"", "", "", "3", "1 3 4 5", "1", "6 7", "", "4 6 7 9", "1 4 6 7 8 9", "3 5 6", "5 8 9 10 12", "2 6 8 10 11 13", "4 8", "1 3 4 5 8 10 12 14", "", "7 10 13 14", "9 17", "1 4 6 9 10 12 13 15 18", "2 15", "15", "6 8 10 13 14 16 22", "4 6 8 9 12 13 14 16 19 23", "2 6 14", "2 5 6 7 9 10 11 12 14 16 17 18 23 24", "1 5 6 7 8 9 11 14 15 23 24", "1 2 3 4 6 8 10 11 12 13 14 16 19 20 22 23 24 26 27", "3 6 9 14 17 20 27", "15 18 23 24", "1 5 6 10 14 15 17 27"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 38;
    int k = 3;
    vector<string> moves = {"", "", "3", "", "", "1 3 6", "4 5", "7", "3 5 7", "1 5 9 10", "2 5 8 9", "7 11", "2 4 5 7 8 10", "7 13", "5 6 8 11 14", "2 7 8 11", "1 2 4 5 6 14 16 17", "2 3 6 8 9 11 12 16 17", "1 2 4 5 6 7 9 11 15 16 17 19", "1 2 3 8 10 12 13 16 18 19 20", "3 4 6 7 9 12 13 16 17 18 19 21", "4 10 12 16 17 21", "2 5 6 12 15 17 20 21 22", "12", "2 3 5 6 8 9 10 11 12 14 18 21 22 23", "1 2 3 4 11 12 13 14 15 16 19 21 22", "9 14", "1 4 7 8 11 12 13 17 18 20 23 24 26 27 28", "3 5 6 10 14 27", "4 9 29", "10 28", "4 6 11 15 16 17 18 19 22 23 25 28 31", "2 6 12 20 21 22 25 29 30", "1 3 4 6 8 9 11 12 14 15 17 21 24 26 27 30 31 32", "1 2 3 5 14 15 16 19 20 21 28 30 31 32", "1 2 5 9 12 13 14 15 17 20 21 22 23 24 28 30 34", "8 9 15 17 18 19 22 23 26 27 28 31 33 34", "3 20 30 32 38"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 28;
    int k = 3;
    vector<string> moves = {"", "1", "3", "1 3 4", "4 5", "5 6", "", "1 2", "1 2 7", "1 6", "3 4 10 11", "3 4 7 8 9 11", "1 3 4 5 6 11 12 13", "1 6 8 9 10 12 14", "9", "", "14 15", "", "3 4 6 7 9 12 13 14 15", "1", "", "1 5 6 10 12 20", "3 4 8 11 19 22", "1 15 19 22 24", "6 18 23 24", "5", "11 17 23", "1 3 4 5 6 8 12 13 14 17 21 22 23 24 27"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 46;
    int k = 3;
    vector<string> moves = {"", "", "", "", "", "2", "7", "1 2 4 6", "1 2 4 7 9", "5 6", "2 4 7 10 11", "1 5 10", "", "2 5 7 9 10 11", "1 4 6 7 8 10 11", "2 3 4 5 8 9 11 13 16", "3 4 7 16", "1 4 6 9 10 11 15 17 18", "2 4 6 7 13 14 15 18", "10", "3 4 5 8 9 11 12 13 15 18 20 21", "1 2 6 7 8 9 10 11 12 13 16 17 19 21", "7 8 11", "3 4 5 7 10 12 16 17 24", "5 7 8 9 10 16 22 23 24 25", "1 3 5 6 14 17 23", "3 4 5 7 14 16 18 26 27", "4 5 7 9 10 13 14 15 20 21 23 24", "4 9 10 20 23", "1 4 5 6 12 13 17 20 22 26 27 28 30", "1 3 5 6 7 15 18 19 23 26 29", "3 4 5 6 7 8 10 12 14 15 17 21 23 29 31 32", "1 3 4 5 8 9 10 11 12 14 16 19 26 27 28 30 32", "11 27 28", "4 5 6 7 8 11 14 16 19 23 35", "3 7 9 15 25 26 28", "1 6 7 13 15 20 22 28 32 34 36", "19 21 24 25 28 32 36", "2 9 10 16 17", "27", "2 5 6 7 9 11 13 18 19 26 27 30 31 33 41", "3 8 9 10 20 23 25 26 29 32 37 38 39", "9 11 14 15 26", "1 3 6 10 12 13 15 19 22 23 26 27 31 35 38 41 42 44", "3 6 17 23 33", "9 13 33"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 22;
    int k = 4;
    vector<string> moves = {"", "1", "", "1 4", "4 5", "5", "1 2 3 6", "5", "4 8", "2 5 6 7 8 9", "1 2 8 11", "4 6 8", "1 3 4 6 7 9 10 12 13", "14", "1 5", "5", "15", "8 12", "4 5 6 7 8 10 11 12 13 16 17 18", "4 10 13 17 18", "7 12 14 15", "1 2 4 6 10 12 13 17 19 20 22"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 35;
    int k = 4;
    vector<string> moves = {"", "", "", "4", "", "1 4 6", "7", "3 6 7 8", "2", "1 6 8", "5 8", "3", "1 2 8 12", "7 9 13 14", "1 2 4 5 7 8 10 11 14", "3 4 6 7 11 12", "4 8 12 15", "1 5 6 7 9 11 12 14 15 18", "2 9 11", "3 4 5 8 9 10 11 15 16 17 18 19", "1 3 4 5 6 9 10 14 18 19 21", "13 17 22", "2 4 5 6 7 8 12 14 15 16 21 22", "1 4 6 7 8 9 11 12 16 18 19 20 22", "", "1 3 4 6 8 12 13 14 15 16 18 20 21 24", "2 3 8 12 16 17 24 25 27", "2", "4 6 8 12 15 16 19 20 23 28", "1 3 5 7 8 12 16 17 21 22 24 25 26 27 30", "1 4 9 10 12 15 17 19 20 23 25 28 30", "3 7 8 17 21 29", "25", "3 5 7 11 12 20 22 29", "1 6 7 8 17 21 22 25 26 30 31"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 42;
    int k = 4;
    vector<string> moves = {"", "", "3", "", "1 2 3 5", "5", "1 5", "5", "3 5 6 8 9", "8", "3 4", "5 12", "11", "2 3 5 12 13", "2", "4 7 8 10 11 12 14", "1 8 9 10 15 17", "3 6 11 15 17 18", "3 4 6 9 10 11 15 17 18", "2 3 5 6 7 9 10 15 16 17 20", "1 2 7 11 14 15 16 17 19 20 21", "3 5 6 7 8 9 12 13 14 15 20", "1 2 3 4 6 9 11 13 14 16 17 19 20 22 23", "2 3 5 10 22 24", "3 4 7 8 10 11 13 14 15 16 21 22 23", "10 18", "3 10 13 17 23 24", "1 2 4 5 8 12 15 17", "1 6 7 9 12 14 18 20 24 25 28 29", "5 6", "1 3 5 12 14 16 17 20 21 23 25 26 27 28", "8 13 14 19 21 26 27 29", "2 4 5 6 7 12 13 17 18 21 22 23 26 28 33", "1 8 13 19 22 29", "", "10 24 33", "4 5 6 9 11 14 17 20 22 26 29 31 33 34 35 36 37", "4 15 16 18 19 20 21 25 28 29 34", "2 3 7 8 10 12 13 14 26 29 31 32 34 37", "", "3 6 7 9 13 20 21 22 26 28 33", "3 4 5 7 9 18 22 25 27 29 30 40"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 40;
    int k = 4;
    vector<string> moves = {"", "1", "1", "2 3", "1 2 5", "3 6", "", "4", "1 3 4 5 6", "2 4 6", "2 4 9 10", "8", "1 3 4 9 10 11 12 13", "1 4 8 9 14", "3 4 5 8 9 12 13", "1 3 4 7 9 13 14", "6 10 11 14 15", "3 7 9 13 18", "1 16", "1 2 4 8 9 11 13 15 16 20", "3 8 9 11 17 20 21", "1 2 3 4 5 10 11 17 21 22", "4 7 13 14 18", "2 3 6 8 9 11 12 13 16 19 21 22 23 24", "2 7 9 10 12 14 15 16 19 25", "1 3 6 7 8 10 12 14 17 20 21 24 25", "4 5 7 8 11 15 17 24 25 27", "5 10 12 16 18 19 20 21 26 27", "2 3 4 5 6 7 11 12 13 14 16 17 18 19 21 22 23 25 27", "1 15 18 20 26 27 28", "", "2 8 21 22 24 25 32", "1 2 4 5 8 9 10 12 13 16 17 21 23 24 25 26 31", "2 7 13 17 18 22 28 32", "1 2 3 11 15 17 23 24 25 26 29 31 33 34", "15", "3 12 17 18 19 23 26 28 31", "2 5 9 12 17 19 22 26 28 31 33 34 36", "4 8 13 28 29 31 39", "1 5 9 15 16 19 22 24 25 26 27 28 30 38"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 12;
    int k = 5;
    vector<string> moves = {"", "2", "2", "3 4", "", "1 5", "3 5 6", "1 2", "3 4 6 7 8 9", "2 3 4 5 10", "1 2 6", "1 2 4 6 8"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 10;
    int k = 5;
    vector<string> moves = {"", "2", "1", "1 3 4", "3", "", "1 2 3", "3 8", "5", "3 6 7 8 9"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 26;
    int k = 5;
    vector<string> moves = {"", "2", "", "2", "1 2 5", "1 2", "1 3 5 6 7", "4 7 8", "", "3 8 9 10", "1", "2 6 7 8 9 11", "5", "1 2 3 5 6 9 10 11 12 13", "2 4 12 13 15", "2 4 6 8 13 14 15", "3 4 6 7 9 11 12", "3 4 5 11 15 17", "2 3 4 6 7 11 13 17 18 19", "16 18", "1 3 4 8 9 10 11 13 14 15 16 17 18 19 21", "3 4 7 13 14 15 16 18", "1 5 6 7 8 10 17 18 19 21", "2 6 9 10 13 14 15 16 17 21 22 23 24", "1 2 15 21 23", "1 2 3 5 6 10 11 12 13 17 23 25"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 46;
    int k = 5;
    vector<string> moves = {"", "", "", "2", "1 2 5", "2 3 6", "3 7", "3 5", "2 3 4 5 8", "6 9 10", "4", "1 2 4 5 12", "4 9 11 12", "2 5 7 9 10 11 13", "1 4", "4 5 10 13 15", "1 3 6 9 12 16 17", "5 12 15 16 17 18", "1 3 6 7 11 14 16 18 19", "9 16 18", "", "1 2 3 5 6 9 11 12 13 15 18 19 21", "2 4 7 8 11 13 14 15 16 17 19 21 22", "5 6 8 10 14 18 22 24", "1 3 7 11 14 22", "10 11 15 16 18 25", "1 2 4 5 7 8 10 14 15 16 17 18", "3 5 8 12 13 15 16 18 25 26 28", "1 3 5 6 7 8 13 18 22 25", "4 5 10 13 14 16 18 19 20 24 25", "1 2 3 4 5 6 9 10 17 18 19 20 21 25 26 27 30 31", "", "6 7 13 29", "3 5 8 10 11 12 16 17 20 21 22 25 27 30 31 33 34", "7 10 11 25 29", "3 7 12 16 17 18 20 23 24 27 29 31 36", "1 4 7 10 17 22 29 32 35", "1 5 9 12 13 15 16 18 20 21 32 35 37", "1 5 7 14 19 25 35 38 39", "1 2 7 9 15 21 22 24 28 30 31 34 35 37 40", "1 10 19 22 23 25 30 32 38 41", "2 3 4 5 6 7 9 10 22 25 28 34 36 38 42", "1 2 5 6 8 14 20 21 23 25 27 28 33 38 41", "25 27", "2 4 10 22", "1 3 10 11 12 14 20 21 26 28 29 33 34 37 39 43"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 30;
    int k = 6;
    vector<string> moves = {"", "", "", "1 4", "3", "3", "1 3 4", "", "1 2 3 4 7 9", "1 7 9 10", "4 7 10", "1 2 9 11", "4 5 6 7 10 11", "13", "1 3 5 6 7 8 10 11 13", "5 7 9 14", "11", "4 5 6 7 8 9 10 12 18", "4", "3", "17 19", "4 6 8 10 11 12 13 16 18 22", "1 2 19 20", "1 4 5 8 16 17 22 24", "1 2 3 4 7 9 10 11 12 15 16 18 22 23 24", "4 5 7 10 21", "6 7 8 11 13 14 19 20 21 23 24 26 27", "8 10 15 17 21 26", "1 2 3 4 6 10 15 16 17 20 23 26 27 29", "2 15 16 19 20 21 22 24 26"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 36;
    int k = 6;
    vector<string> moves = {"", "", "2 3", "1", "1 2 4", "1 4 6", "1 2 3 4 6", "7", "1 4 8", "1 2 5 8 10", "3 4 9", "3 4 5", "1 3 7", "1 2 3 5 6 7 10 13", "8 14", "8", "1 2 3 5 6 8 10 11 12 13 14 15 17", "3 5 8 11 12 13 17 18", "1 5 6 7 8 9 10 12 13 17 18 19", "2 3 5 6 7 9 13 16 20", "5 10 12 18 20 21", "4 6 9 13 16 18 19 20 21 22", "1 4 7 8 9 11 13 16 19 20 21 22 23", "1 2 4 8 10 13 15 16 20 22 23 24", "1 2 5 7 8 12 13 14 15 17 18 20 21 23", "1 5 6 7 8 10 11 12 14 15 16 17 18 19 20 21 23", "2 3 6 10 11 12 15 16 17 18 22 24 25 26 27", "2 4 6 8 10 11 18 20 22 23 24 25", "6 8 14 16 18 22 23 24 25 26 29", "1 13 21 24", "3 4 10 12 16 26 31", "1 3 4 5 8 12 15 17 18 20 23 24 28 31", "28", "1 4 6 17 22", "5 7 15 16 18 27 31 32 35", "2 4 6 7 11 13 14 21 23 24 26 29 30 32 33 34 35"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 30;
    int k = 6;
    vector<string> moves = {"", "2", "2", "2", "3", "1 4 5 6", "2", "1 2 7 8", "5 9", "2", "1 6 8 9 11", "1 2 3 4 5 7 8 10", "6 7 9 10", "1 2 3 6 8 9 10 11 12", "2 3 4 5 6 9 12 14 15", "1 2 4 5 6 7 9 11 12 14", "4 10 13", "10", "1 2 3 4 5 10 12 13 14 15 16", "3 4 6 8 9 10 11 12 14 15 16 18 20", "5 9", "1 3 4 9 10 11 21 22", "2 3 4 8 10 11 14 15 17", "9 13 17 20 23 24", "1 3 4 6 7 8 9 10 11 14 16 21 22 24 25", "1 2 4 5 8 9 10 12 13 17 21 24 26", "1 3 5 7 8 9 10 12 13 15 17 20 21 25 27", "4 7 13 18 19 22", "4 6 8 9 10 11 12 14 15 16 17 18 19 23 25 27 28 29", "1 2 5 7 8 9 10 12 15 17 18 20 22 25 27 28"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 39;
    int k = 6;
    vector<string> moves = {"", "", "1", "", "2 4 5", "1 5", "2 4 5", "6", "2 5 9", "4 5 8 9", "2 3 8 11", "2 9 11", "3 7 9 10", "2 6 8 11 14", "6", "", "14", "1 4 6 7 12 16 17 18", "3 7 9 10 13 14 15 16 18", "1", "1 4 5 6 14 17 19 21", "1 3 9 10 11 18 20", "1 3 5 6 10 12 14 15 17 18 22", "1 8 13 15 16 17 18 19 21 22", "1 3 4 5 7 8 9 10 15 16 17 20 21 24", "2 6 7 15 16 17 21 23 25 26", "1 3 16 19 20 22 23", "", "", "28", "1 5 16 17 20 23 27 31", "12 17", "1 2 3 4 11 12 14 15 16 20 21 22 23 25 27 30", "2 3 6 11 12 15 20 21 22 24 25 28 29 30 33 34", "1 2 3 7 8 9 10 11 12 15 16 19 21 22 26 33 34 35", "2 3 4 7 12 16 17 19 20 22 29 31 33", "6 9 10 11 12 17 20 23 25 27", "1 2 4 5 9 11 14 21 24 27 28 30 32 34", "1 3 4 5 6 7 10 12 19 20 21 24 27 28 29 31 32 35"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 31;
    int k = 7;
    vector<string> moves = {"", "", "3", "4", "1 2 3", "2 5 6", "2 3 5", "1 3 5", "8 9", "2 3 6 7 10", "1 3 6 7 9", "2 3 6 10 12", "2 10 12", "4 11 12 13", "1 4 9 10 11 12 14", "6", "6 7 8 10 12 13 14 16 17", "4 5 6 8 9 11 12 14 15 17 18", "", "6 7 14 16 17 18 19 20", "", "", "2 5 6 15 19 22", "7 8 10 11 15 16 17 20 22 23 24", "4 6 11 14 15 16 17 20 22 24", "5 8 14 16 20 24", "1 4 6 8 10 11 12 13 14 15 19 20 26", "2 3 6 7 8 9 11 12 13 17 18 21 23 24", "1 4 6 8 11 16 17 19 24 26", "", "3 6 7 10 11 12 13 15 20 24 27 28"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 5, 6, 7};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 45;
    int k = 7;
    vector<string> moves = {"", "2", "", "2 3", "1", "3 4 5", "5 7", "8", "3 4 6 9", "1 2 5", "2 3 4 6 9 10", "4 6 7 10", "1 2 3 4 11 12 13", "7 8 11", "3 12 13 14", "9 14 15", "1 12 13 14", "7 11 12 14 16 17", "7 10 14 15 16", "1 2 4 7 9 11 13 15 17 18", "1 2 4 6 11 12 18", "1 2 4 5 7 9 10 11 17 20 21 22", "1 2 6 7 9 10 12 16 19 21 22 23", "1 2 3 4 5 11 12 13 14 15 16 19 20 22 23 24", "3 4 10 12 13 14 16 17 23 25", "1 3 7 8 9 11 13 14 15 16 20 22 23 26", "1 3 5 6 13 27", "", "2 5 6 7 8 10 14 15 16 17 20 21 22 23 24 25 26 27", "1 2 5 6 10 12 16 18 25 27", "2 3 5 10 16 17 20 22 23 24 27 28 29 30", "3 7 8 9 13 15 16 17 18 20 23 24 27 28 29 31", "1 3 4 6 9 10 11 12 17 26 27 29", "9 19 26 27 28", "3 4 5 7 8 9 10 11 14 15 16 20 22 28 29 31 33 34 35", "4 10 14 15 16 23 25 26 31 33", "3 7 10 14 15 17 19 20 22 26 27 28 37", "4 7 15 20 30 33 35 36", "2", "", "7 8 12 28 40", "3 4 5 9 12 17 20 25 27 33 34 36 37 39 40 42", "2 3 4 7 9 10 14 19 21 23 25 26 28 29 31 34 38 41", "6 11 16 22 23 44", "2"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 50;
    int k = 7;
    vector<string> moves = {"", "2", "2", "", "1 3 4 5", "2 3 4", "2 6 7", "3", "2 8", "2 3 4 7 8 10", "2 3 4 5 10", "3 5 7 8 12", "1 2 5 8 10", "4 7 10 13", "2 3 5", "1 6 10 11 12 14 15 16", "1 7 9 10 12 13 16", "5 6 10 12 14 15 18", "2 3 4 6 8 12 13 14 15", "1 3 4 5 6 8 9 10 11 12 13 15 18 19", "1 2 5 11 14 15 19", "11 21", "3 4 8 9 10 13 16", "16 19", "1 2 7 9 10 13 21 22", "1 9 14 17 19 22 23 24", "5 10 12 14 17 23", "2 3 5 8 9 11 16 19 20 24 25 26", "20 23", "1 4 7 8 24 26 29", "1 4 18 23 24 29", "2 3 9 11 12 15 18 20 22 23 24 26", "30 32 33", "14 15 22 25 31 34", "4 6 8 10 12 18 19 21 32 34 35", "1 2 3 5 10 12 16 17 23 33", "11 15 20 21 31 33", "3 8 12 15 17 23 24 27 28 36", "7 21", "3 4 6 7 8 11 16 17 18 21 22 26 29 31 32 36 40", "3 20 28", "6 8 16 19 23 24 25 38", "6 11 31 33 38 40", "3 4 5 8 10 24 25 26 27 31 33 35 37 38 40 44", "7 14 16 18 21 26 29 32 41", "7 24 31 35 37 39", "1 8 10 17 19 23 29 30 33 34 36 37 41 42 43 45 47", "1 21 26 27 39 44 45 47", "1 5 8 11 12 15 16 19 20 23 28 31 42 43 44 47 48", "6 14 19 29 49"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 40;
    int k = 7;
    vector<string> moves = {"", "", "", "1 2 4", "2 3", "3 4 6", "", "5", "2 3 5 9", "4 5 8 9", "1 2 4 5 6 7 8", "3 6 7 8", "1 2 4 7 8 9 13", "2 6 7", "2 4 6 7 8 11 12 13 14 15", "2 3 5 7 10 16", "8 9 10 13 17", "1 4", "6 18", "1 3 4 5 6 8 11 12 13 16 18 20", "1 3 4 5 8 9 10 13 14 17 18 20 21", "1 3 4 7 9 10 13 22", "1 2 4 5 6 7 8 9 15 17 20 21 22", "", "4 7 22", "5 6 7 10 13 14 17 19 20 21 23 24 25", "2 3 4 7 12 15 16 20 23 25", "7 26", "5 13 14 17 22 24 28", "5 7 12 13 14 15 18 22 25 26 28 30", "1 4 7 8 10 15 16 17 18 20 23 24 26 27 28 29 31", "1 3 4 5 6 11 16 21 23 25 27", "4 7 17 18 23 28 29", "10 11 19 22 25 26 28 29 30", "1 3 6 7 8 11 12 13 14 17 20 23 24 25 26 27 31", "1 9 11 12 15 16 17 19 21 24 25 26 28", "10 33", "3 4 7 9 10 20 23 26 30", "10 31", "1 5 6 8 15 17 19 20 21 22 25 27 33"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 42;
    int k = 8;
    vector<string> moves = {"", "2", "2", "2", "", "2 4 5", "", "1 5", "", "3 4 5 7 8 10", "2 6", "12", "", "2 5 7 9 10 11 14", "2 9 12 14", "3", "6 7 8", "2 4 15 18", "8 18", "2 5 8 10 11 13 16 17 19", "2 5 7 8 9 11 12 13 16 17 19 21", "2 19", "1 2 4 7 8 10 12 13 14 15 17 18 19 22", "10 15 17 22", "2 3 7 14 16 18 19 20 21 24", "25", "3 8 10 11 15 25", "4 5 8 11 15 17 19 21 23 26 27 28", "11 16 18 19 27", "1 9 10 13 17 24 26 29", "4 5 6 8 12 13 15 16 18 19 21 23 25 26 29 31", "5 7 10 12 19 27 30 31 32", "5 6 7 8 12 13 15 16 17 19 21 24 26 31 33", "3 6 7 11 12 13 14 18 23 24 27 28 30 32", "1 3 5 7 8 9 11 18 20 22 23 24 25 27 28 29 30 31 35", "4 9 10 13 14 15 19 21 23 31 32 33 34", "9 17 20 21 24 25 27 29 33 34 37", "1 2 4 7 8 9 13 15 16 20 24 26 28 31 33 34 36 37", "", "19 25 27 28 31", "12 13 24 25 27 28 30 38", "2 15 23 28 30"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 35;
    int k = 8;
    vector<string> moves = {"", "", "3", "1 3 4", "2", "3 4", "1 3 5 6 7", "1 6", "1 3 7 8", "", "4 5 6 7 8 9 11", "3 4 7 8", "3 12", "5 6 7 8 14", "3 5 6 8 9 10 14 15", "", "1 5 7 9 11 16", "4 6 7 8 15 16 18", "7", "5 8 9 11 12 17", "3 5 6 9 10 11 14 15", "1 5 7 11 13 15 16 18 20", "7 11 13 14 19 20 21", "2 7 10 15 16 19 21 23", "1 2 3 8 9 11 12 14 15 16 17 18 23 24 25", "2 3 4 5 6 11 15 16 19 20 22 24 25", "1 2 3 4 7 8 9 10 11 13 16 21 24 25 27", "4 8 9 17 23 26 27 28", "2 3 4 6 12 14 15 16 17 18 19 24 26 27 29", "1 4 9 11 17 20 21 24 29", "8 9 24 25", "5 22 25 29", "4 6 9 11 20 21 26", "1 2 3 8 9 12 13 14 15 16 17 21 22 24 25 27 30 34", "2 3 4 5 8 9 10 11 12 16 17 18 19 20 25 31 34"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 37;
    int k = 8;
    vector<string> moves = {"", "", "", "2 4", "1 2 5", "1 3 4 5", "2 4 5 6", "2 3 6 7", "2 4 5 8 9", "1 2 7 8", "11", "9 11", "2 3 5 6 8 9 10", "3 6 7 8 9 10 11 14", "1 3 4 5 10", "2 7 8 11 13 15", "2 3 6 8 9 11 16", "1 2 3 4 7 9 10 13 14 16 17 18", "2 3 5 9 11 12 15 17", "", "1 2 5 6 7 8 9 15 16 21", "3 4 5 6 8 10 11 12 14 15 16 18 20 21", "7 8 15", "6 22", "1 5 7 9 11 12 16 17 21 23 25", "2 3 10", "1 2 4 7 11 14 17 18 24 25", "6 8 9 17 18 24 25 28", "1 2 3 7 9 11 18 19 20 21 24 25 26 27 28", "1 2 4 5 7 8 9 10 12 17 18 20 22", "1 2 3 4 5 7 8 9 10 11 12 13 18 19 20 21 22 28 30", "2 4 10 13 15 23 26 27 28 29", "1 3 4 5 8 10 11 13 15 17 18 20 25 26 28 30 32 33", "2 4 6 7 12 19 23 33", "7 8 12 13 23 26", "8 9", "2 8 10 11 12 15 16 17 29 31"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 38;
    int k = 8;
    vector<string> moves = {"", "", "1 2", "1 4", "1 2 3", "2 6", "3 5 6", "3 5 7 8", "2 4 7 8", "1 3 7 9", "2 3 4 8 10 11", "2 3 5 6 8 9", "1 3 4 5 10 11 12", "2 8 13 14", "3 6 10", "1 6 8 11 12 14", "4 5 7 10 17", "1 2 3 4 7 11 12 13 15", "2 4 5 6 7 8 9 10 14 15 17 18", "3 7 9 10 11 15 16 17 18 19", "18 20", "1 2 7 8 14", "2 3 6 16 18 20", "2 3 6 8 9 10 11 12 14 15 16 20 21 22 23", "2 4 7 11 20 21 24", "1 2 5 11 14 15 20 25", "", "1 2 3 5 9 11 12 14 19 20 21 22 24 25 27", "6 8 10 11 14 16 17 22 25", "3 5 8 12 13 18 20 26 27", "1 4 9 11 12 13 17 18 19 21 23 24 25 26 29 30 31", "7 9", "2 4 5 8 10 14 15 17 18 21 24 25 28 29 30 32 33", "1 4 5 8 14 15 17 18 21 22 24 29 31 34", "3 5 15 18 19 20 22 23 24 26 28 31", "3 5 12 18", "10 13 27 31", "9 12 23 26 31"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 40;
    int k = 9;
    vector<string> moves = {"", "", "1 3", "", "", "5 6", "1 3 4 6 7", "3 5 6 7 8", "1 2 6 9", "1 2 4 6 7 9 10", "1 3 5 7 9", "2 3 4 6 9 10", "4 11 13", "1 4 5 8 9 11 12 14", "5 11", "11 16", "1 2 10 14 16 17", "4 5 7 8 9 10 12 13 15 17", "5", "2 3 6 12 14 16 17 19", "7 11 19", "3 5 12 15 17 18 19 21", "3 4 5 8 11 15 17 18 21 22", "1 2 3 4 7 9 12 13 14 19 20 21 23 24", "1 2 3 4 5 6 9 10 12 14 15 16 17 24", "2 5 6 11 15 17 19 20 23", "6 9 16 19", "1 7 8 10 14 15 17 20 21 22 24 25", "5 10 15 16 19 21", "6 11 12 13 16 17 18 19 20 22 25 28 29 30", "1 2 4 5 8 10 13 15 19 20 21 23 24 25 27 28 29 31", "3 7 10 11 12 17 18 21 26 27 28 29 30", "3 4 5 6 11 13 15 17 21 23 26 29 32 33", "1 6 7 13 15 16 18 27 32", "6 11 16 21 23 35", "5 9 28", "4 5 7 9 11 12 15 18 22 23 26 27 28 30 35 36", "1 2 3 4 5 14 15 16 17 18 25 27 30 31 32 33 35 38", "6 25 32 33", "1 2 4 6 8 9 11 12 15 16 17 20 22 27 29 31 32 34 38"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 48;
    int k = 9;
    vector<string> moves = {"", "2", "", "", "3 4", "3 4", "2 3 5", "1 3 5 8", "2 3 4 5 8", "", "5 6 8", "1 3 4 8 10", "1 5 6 8 9 10", "13", "1 3 6 7 8 9 11 12 13 14", "1 2 3 4 8 11 12 13 14 16", "8 9 10 12 14", "2 6 9 11 14", "2 5 6 11 14 18 19", "1 2 3 7 8 9 12 13 15 16 19", "1 2 4 6 8 10 11 12 14 16", "1 2 9 13 16 17 18 19 22", "16", "1 2 6 7 8 10 11 12 13 17 19 20 21 24", "3 5 7 11 13 18 22 24", "1 2 7 8 11 12 13 19 20", "3 7 8 13 18 20 22 24", "1 3 4 6 7 13 17 18 20 21 23 24 26 27", "1 3 6 8 15 19", "9 24 26 27", "1 2 3 4 7 19 20 25 28 29 30", "3 10 22 24 26 29", "", "2 3 4 5 10 12 14 15 16 19 20 24 29 30 32 33", "1 3 5 7 8 12 13 14 15 16 18 21 26 28 30 34", "24", "4 6 8 9 19 20 21 22 23 25 27 29 31 33 34 37", "3 6 8 18 21 22 29 31 35", "3 5 10 12 15 17 19 23 25 33 36 38", "2 7 11 15 16 20 21 25 26 27 29 30 31 33 35 37 40", "2 3 4 5 8 12 17 18 22 24 28", "2 4 7 14 18 20 29 31 36 40", "7 9 11 15 16 25 26 30 31 36 38 39 41", "2 4 8 22 33", "9 10 13 14 16 17 19 22 24 26 28 30 31 36 41 42 43", "3 32 36", "13 17 25 26 29 30 31 41", "1 2 3 7 15 23 26 28 30 32 35 37 41 46 47"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 41;
    int k = 9;
    vector<string> moves = {"", "2", "3", "1", "1 2 4", "2", "5 6", "1 4 6 8", "", "3 5 6 9", "2 4 5 6 7 8 10", "1 3 6 7 9 10", "1 2 7 8", "4 6", "", "1 3 5 7 9 10 14 16", "4 5 9 14 15 16 17", "15", "5 16 18", "10 11 12 14 17 18 20", "1 3 8 10 12 17 19", "2 7 8 11 12 14 18 19", "1 2 6 9 14 15 16 18 22", "1 2 3 4 6 9 15 17 18 20 22", "23 24", "1 6 7 8 9 10 13 16 17 22 23 24 25", "1 2 13 16 17 18 24 25 27", "1 4 7 8 10 13 14 15 16 26 27", "10 13 18 26", "24 25", "5 6 7 11 16 17 18 24", "2 6 7 10 16 17 19 24 25", "1 2 5 6 7 8 10 12 13 19 21 22 23 24 25 26 29 30", "2 5 6 9 10 11 14 16 19 34", "1 3 4 5 8 9 11 12 17 19 20 22 24 25 27 29 31 35", "2 3 4 7 15 17 21 22 23 31 36", "1 4 8 10 15 16 18 21 24 26 27 29 32 36", "3 22 23", "1 4 8 9 10 12 15 16 17 18 21 22 23 24 27 30 31", "4 8 9 14 15 17 21 23 25 27 29", "6 8 9 12 19 24 26 37 38 40"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 49;
    int k = 9;
    vector<string> moves = {"", "2", "", "4", "", "2 4 5", "1 3 4 6", "1 3 5 7", "1 4 5 7", "", "1 2 5 7 11", "5", "1 3 4 5 7 8 9 10 12 13", "9 12", "1 4 11", "9", "1 2 5 8 9 10 15 16 17", "4 8 13 17", "9 12 13 15", "1 2 10 12 16 19 20", "11 17 19 20", "3 6 8 10 11 13 14 22", "4 5 8 21 22", "5 8 9 10 12 15 20 24", "", "1 2 3 9 13 14 19 26", "6 11 13 26", "1 5 6 7 8 9 10 12 15 16 18 20 21 23 25 26", "1 9 10 11 13 15 16 18 21 23 24 29", "6", "11 12 26", "12 20", "2 3 4 6 9 10 12 16 19 20 21 24 25 27 28 29 30 33", "1 4 8 9 13 19 22 31 32 34", "2 15 26", "3 4 5 6 7 8 9 10 11 15 17 18 19 21 22 25 31 32 34", "7 12 16 18 23 28 32 35 37", "1 2 3 5 6 7 8 10 16 17 18 21 22 25 27 31 32 33 34", "2 3 5 7 9 14 15 22 26 28 29 33 35 36", "2 3 5 8 12 21 28 30 32 37 38", "5 9 21 22 26 28 30 40 41", "1 2 6 8 9 14 15 16 19 20 22 27 28 30 35 38 39", "14 17 35 39 40 41", "4 9 12 16 22 23 27 30 32 35 36 40 43", "1 8 9 13 17 18 24 28 29", "3 15 24 28 31 33 36 41 44", "1 2 3 7 8 15 16 18 19 27 29 33 36 38 39", "5 10 13 26 28 34 43 46 47", "4 7 9 11 18 21 22 24 35 36 43 45 46 47"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 33;
    int k = 10;
    vector<string> moves = {"", "1", "2 3", "", "1 2 4 5", "", "2 3", "5 6", "3 4 6 7 8 9", "1 5 9", "", "1 2 6 8 9 10 11 12", "1 2 5 8 10 11 12", "6", "2 3 4 6 7 8 9 10 11 14 15", "4 8 9 10 12 14 15 16", "4 5 10 17", "5", "1 7 9 12 13", "2 4 5 7 12 14 15", "4 5 6 7 9 12 14 15 19 20 21", "3 5 6 8 9 12 14 16 19 22", "2 3 5 7 9 10 12 13 15 16 17 21 22", "2 7 11 12 13 15 16 18 19 24", "", "1 3 6 10 11 16 19 21 23 24", "10 15 16 17 27", "3 4 8 10 13 16 17 20 22 26 27 28", "3 4 5 6 11 12 13 15 18 19 22 25 28", "1 2 3 6 8 13 17 18 19 22 24 25 28 29", "1 2 5 6 8 12 13 14 18 19 20 21 24 25 27 28 30 31", "2 5 8 10 12 13 14 15 16 17 19 21 23 26 28 29 31 32", "4 5 16 21 23"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 38;
    int k = 10;
    vector<string> moves = {"", "2", "1", "2", "1 3 5", "1", "1 3", "1 3 4 5 6 7 8", "3 4", "2", "2 6 7 11", "1 2 3 8 10 11 12", "3 4 6 7 9", "2 6 7 8 9 10 11 14", "1 2 4 5 9 10 12 15", "4 9 10 13", "1 3 4 6 8 9 16", "5 13 16", "7 9 10 13 15 17 18 19", "2 3 5 6 7 9 12 13 18", "1 3 5 6 8 10 12 14 16 17 20", "1 4 6 7 9 10 11 12 13 14 15 16 17 20 22", "2 3 4 6 9 10 12 13 17 19 20 22 23", "1 2 3 4 5 6 8 10 12 13 16 18 22", "6 9 14", "1 3 5 7 8 13 14 15 16 17 20 21", "6 8 14 15 19", "4 6 11 12 14 17 20 22 25 26", "2 5 6 11 17 20 21 22 28", "2 3 4 8 12 13 14 15 16 17 20 21 23 24 25 26 27 29", "4 5 12 13 26", "1 7 9 13 18 20 30", "1 5 6 15 16 30 31 32", "2 4 5 7 8 9 10 13 17 18 22 23 26 27 28 29 31 32 33", "1 3 9 15 17 18 19 21 22 23 24 26 28 29 32 34", "5 6 7 8 10 12 13 15 17 24 25 26 32 34 35 36", "12 30 34", "1 2 6 7 9 13 16 18 24 25 27 28 29 30 36"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 32;
    int k = 10;
    vector<string> moves = {"", "2", "2", "3", "3 4", "", "1 3 4 7", "3 4", "1 2 4 9", "2 3 4 5 7", "2 3 5", "4 11", "2 12", "1 3 4 5 7 12 13", "7 11 12 14", "2 6 11 15", "1 3 5 6 7 9 11 12 14 15 16", "1 2 3 5 6 8 9 10 11 14 15 16", "3 7 8 13 16 17 19", "3 4 7 9 18", "6 8 11 12 17 21", "15 16 20 22", "1 9 13 15 18 19 21", "1 5 8 22 24", "1 2 4 5 6 7 8 10 13 18 19 21 22 23", "2 3 4 5 8 11 12 14 16 17 18 24", "3 13 15 25", "1 2 5 7 10 12 14 15 16 17 21 22 23 24 27 28", "1 3 4 6 7 8 10 11 12 13 14 16 17 19 22 23 24 25 28", "7 10 11 12 18", "5 15 18 19 21 25 26 28 30", "1 5 9 10 14 19 25 27"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 43;
    int k = 10;
    vector<string> moves = {"", "", "", "", "", "1", "1 2", "4 7 8", "1 2 3 4 7 8", "", "2 3 4 9 10", "1 2 3 7 10", "1 2 4 9 11 13", "1 3 6 7 8 10 12", "4 5 8 9 10 13", "", "1 2 4 5 6 7 9 11 15 16", "1 2 4 12 15", "2 4 9 11 12 13", "2 4 7 9 10 11 12 17 18 19", "1 4 7 14", "2 4 6 8 9 11 13 16 17 20 22", "1 2 3 5 6 7 12 15 16 17 20 23", "3 4 9 10 11 13 16 19 20 21", "1 2 3 4 7 8 10 12 13 14 18 20 21 23 25", "6 7 9 10 12 14 15 16 20 22 23 25 26", "5 13 17", "1 3 6 8 9 11 13 14 16 18 20 21 24 25 27", "4 8 9 10 12 16 17 19 20 21 26 28", "1 2 3 5 11 14 15 16 18 21 23 24 25 27 28 29 30", "3 4 8 9 11 18 28 31", "1 5 6 8 13 15 17 19 21 22 23 24 27 28 29 30 31", "1 2 4 6 9 10 11 22 23 24 28 30", "1 2 9 10 13 17 18 19 20 26 31 32 33", "4 8 9 13 15 16 17 30 32", "1 2 19 20 22 23 24 32 34", "4 6 8 9 12 17 19 20 26 27 31 32 33 36", "3 6 7 9 19 20 26 27 29", "6 8 12 13 14 15 18 19 20 22 32 33 34", "2 10 11 30 34", "2 3 4 6 21 25 37 39 41", "1 3 10 12 18 19 20 21 22 25 29 30 35 36 37 40 41", "3 6 7 8 10 11 12 13 16 17 18 19 20 32 33 36 39 40"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 42;
    int k = 11;
    vector<string> moves = {"", "2", "1 2", "2 3", "3 5", "1 2 3 5", "6 7", "3 4 5 6", "6 7", "1 3 4 10", "5 6 7 8 10", "9 10", "1 5 7 8 13", "13 14", "1 2 5 12 13 14 15", "2 9 10 11 14", "3 10 11 12", "1 2 3 4 6 7 9 10 11 12 14 16 18", "2 3 4 7 8 9 14 16 17", "20", "3 4 7 8 11 18 21", "8 12 15 16 17 21", "2 6 8 14 16 17 19 20 21 22 23", "1 2 3 4 9 11 13 14 16 17 19 22 23", "1 6 7 13 14 16 17 18 19 20 22", "1 7 9 11 13 14 17 18 21 22 23 24", "6 7 13 14 18 22 23", "1 2 5 6 10 13 14 15 17 21 22 25", "8 11 13 14", "13 25", "1 4 5 6 7 8 10 11 14 15 16 17 18 20 23 26 30 31", "6 10 12 13 20 21 23 27 29 30", "2 14 15 16 18 20 21 24", "", "1 3 5 6 7 8 11 13 15 17 21 23 24 29 30 32 33 34", "1 2 9 13 15 16 17 20 21 22 25 27 28 29 31 32 33 34", "4 15 25 27 30 33 34", "1 4 6 13 15 19 26 27 31 32 35 37", "2 8 12 14 23 24 30 33 35", "1 4 13 15 19 22 26 28 31 33 34 35 36", "1 2 8 10 16 17 18 19 20 21 25 27 30 32 34 36 37 41", "4 17 27 28 33"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 32;
    int k = 11;
    vector<string> moves = {"", "2", "", "", "1 5", "", "", "1 4 7", "1 3 5 6 7", "2 6 9", "1 2 3 4 5 6 7 8 10", "1 2 4 5 9", "", "2 7 10 11 14", "10 12", "4 6 10 11 12 14", "1 3 6 10 12 13", "1 7 11 16", "3 5 18", "8 11 12 13 19", "3 5 6 7 10 11 14 15 17 21", "5 9 10 11 17 18 22", "1 2 5 6 9 12 15 16 17 18 21 22", "1 7 8 9 11 12 14 15 17 19 21", "1 2 3 4 5 8 9 12 16 17 18 23 24", "1 2 4 5 11 13 14 15 16 17 19 20 21 22", "", "26", "6 10 11 13 14 15 18 21 22 24 29", "1 3 6 8 10 11 12 15 17 18 19 20 21 22 24 25 28 29", "3 4 8 12 24 25 28", "1 6 11 22 24 26 27"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 43;
    int k = 11;
    vector<string> moves = {"", "", "", "", "1 3 4", "2 3 5 6", "2 5 6", "1 2 4 6 8", "1", "1 2 4 5 7 8 10", "", "1 2 5 6 8", "1 3 4 7 13", "6 7 8", "7 8 9 11 13 15", "2 4 5 6 7 8 11 13", "1 2 4 5 7 8 10 14 17", "1 2 3 5 6 7 8 9 10 11 12 18", "4 8 9 10 19", "14", "8 9 11 21", "4 5 6 9 13 18 20 21", "1 11 12 15 16 20", "1 2 4 5 7 9 12 13 14 15 17 19 20 21 22 24", "3 4 6 10 14 15 16 19 21 22", "6 14 15 16", "", "", "1 2 5 6 7 11 13 14 16 19 20 22 23 24 25 27", "5 10 11 13 18 24 26", "3 19 28", "1 2 3 7 8 9 10 11 12 13 14 16 18 19 20 23 26 27 29", "", "1 2 3 4 5 8 9 10 13 14 15 16 18 19 21 22 25 27 28", "1 4 7 8 9 10 14 17 20 21 22 24 27 28 29 31 32 34", "9 12 19 28 35", "29 37", "2 5 10 11 12 13 16 19 28 30 33 35 36 37 38", "3 7 16 17 22 24 27 35", "1 15 17 18 19 22 34 37", "1 7 13 18 27 34", "1 2 3 8 12 19 22 25 27 31 32 37 42", "1 2 3 7 8 14 16 23 38 40 42"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 47;
    int k = 11;
    vector<string> moves = {"", "2", "1 3", "2", "2", "", "1 2 3 5 6", "1 2 6 7 8", "4 6 8", "6 8 9 10", "1 3 5", "", "9", "4 5 6 7 8 9 11 12 13", "1 2 4 8 13 14 15", "1 2 4 6 7 8 9 12 14 16", "6 14", "2 6 8 9 12 14 16 17 18", "2 12", "4 8 9 10 12 18 19", "2 5 7 10 15 19 20", "1 6 9 13 14 20", "4 7 10 11 12 13 15 17 18 21", "2 3 4 9 10 11 13 18 24", "2 3 9 10 13 15 22", "5 6 7 9 10 11 18 22 23 24", "1 4 6 8 11 12 14 18 23 25 26 27", "2 8 25 27", "4 6 7 10 12 13 16 20 23", "4 5 6 12 14 15 16 17 18 23 24 25 29", "2 7 10 14 26 27 28 31", "2 4 5 6 7 10 11 12 14 16 17 18 22 26 28 31 32", "3 4 5 6 10 12 14 16 17 19 21 25 26 31", "13 18 22 27 28 29 32 33 34", "35", "3 4 5 7 11 12 19 20 21 25 27 29", "1 4 8 9 18 29 30 31 32 33 35", "1 2 3 11 12 17 18 22 23 26 29 31 33 34 36 37", "", "5 10 22 25", "2 4 6 7 8 11 17 20 24 25 30 31 32 36 38", "1 3 6 10 12 22 23 25 30 34 36 37", "2 3 6 10 12 13 14 19 20 22 23 25 30 33 37", "3 17", "3 8 9 15 17 28 29 37 39 43 44", "20 21 22 24 28 33 38", "2 7 9 18 22 24 29 31 36 43 45"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 43;
    int k = 12;
    vector<string> moves = {"", "2", "2 3", "4", "2 4", "1 2 3 6", "2 4 7", "", "2 3 5 7 8", "3 4 7", "6 9", "3 4 6 10 11", "3 5 9", "4 14", "2 3 7 8 9 10 15", "3 5 6 9 10 11 14 15", "4 8 9 14", "", "6 8 10 14 15", "1 4 6 8 9 11 12 15 16 17 18 19", "2 3 11 13 14 15 16 17 21", "3 4 5 8 13 14 15 16 17 19 20 22", "1 2 4 5 7 8 11 12 14 15 17 19 20 21 22", "7 8 23", "3 5 6 9 10 11 12 15 19 20", "3 13 21", "1 3 4 5 6 8 10 11 12 14 16 17 18 19 21 22 25 26", "1 5 9 13 20 23", "1 2 5 7 8 9 11 12 16 17 18 21 22 23 24 25 26 27 28", "2 3 4 5 6 8 10 14 17 19 20 24 25 26 27 28 29 30", "2 3 4 5 6 7 8 9 12 15 18 19 23 24 25 26 27 29 30", "3 7 11 19 22 26 27 29 30 32", "3 17 20", "1 10 15 22 30", "2 5 9 10 12 13 15 21 23 34", "5 9 13 16 18 20 21 23 24 27 30 32 33 34", "3 8 13 16 21 23 31 33 36", "3 6 7 8 11 12 18 20 21 27 30 33 35 36 37", "3", "2 3 6 11 12 17 18 33 34 35", "5 8 17 20 24 26 27 28 29 31 38 39 40 41", "", "2 4 5 7 11 12 13 15 16 19 23 25 29 36 38 40 41"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 40;
    int k = 12;
    vector<string> moves = {"", "1", "1", "1", "1 5", "6", "1 2 7", "1 2 3 4 8", "2 3 4 6 7", "2 5 6 7 8 9", "2 4 5 10", "1 3 5 8 10 12", "3 8 11", "3 4 6 8 11 13", "1 2 6 12 15", "4 6 10 11 13 14 15 16", "8 10 13 17", "", "1 2 4 5 7 8 10 12 13 15 18", "1 2 5 7 11 14 15", "", "2 5 18 19", "1 2 4 6 8 11 15 17 21", "1 3 4 5 6 8 9 11 13 14 17 19 22 24", "1 2 3 4 6 8 12 16 19 20 24 25", "1 3 14 25", "6 9 10 13 14 15 16 17 18 19 23", "2 3 4 6 9 13 15 17 24 28", "1 5 6 9 13 16 17 18 20 23 24 26 29", "4 5 15 25 28", "12 31", "2 6 7 8 11 12 16 17 24 25 26 29 30", "24 28 29", "1 3 5 11 12 13 14 18 19 20 22 24 26 27 28 29 31", "4 6 8 18 20 23 32 33", "2 3 5 6 10 11 14 15 18 19 21 25 29 32 33 34 36", "2 4 8 9 12 13 14 16 17 19 24 29 31 32 34", "24", "2 3 7 13 17 22 30 31 32 33 35 37", "8 9 13 19 35 37"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 41;
    int k = 12;
    vector<string> moves = {"", "2", "1", "2", "5", "2 5", "2 4 6", "1 5", "", "1 3 6 8 9", "", "2 8 11", "5 7 9 12", "2 4 5 7 10 12 13 14", "3 7 12", "1 4 7 9 10 12 13 14 15", "1 2 5 8 9 12 14 16", "8 11 15 16", "2 5 8 14 18", "8 13 20", "1 3 4 9 13 17", "1 2 3 5 17", "5 7 9 10 11 13 15 16 19 20 21 22", "2 3 5 7 8 12 15 19 21 22 23", "1 2 5 6 7 8 9 12 14 19 20 22", "3 5 6 8 10 12 14 16 17 20 21 22 23 24 26", "1 2 10 12 14 15 17 25 26 27", "1 2 3 5 6 8 9 12 13 15 19 20 21 23 24 27", "3 11 29", "3 6 9 10 12 18 23 25 27", "2 5 8 9 11 12 13 17 18 20 21 23 24 28 29 31", "4 5 6 7 12 13 14 15 16 18 22 23 24 26 29 30 31 32", "", "8 11 13 18 19 21 25 27 34", "1 4 6 7 9 14 18 21 23 25 26 27 29 30 32 33 35", "3 4 5 6 10 11 15 18 22 23 26 27 32 33 34 35", "5 6 8 9 13 14 16 17 19 21 24 26 27 28 29 32 34 36", "5 20 33", "7 9 12 13 15 23 25 27 28 31 35 37", "1 2 4 5 8 12 14 16 17 20 29 37 38", "1 2 5 6 7 9 10 11 12 13 15 16 17 28 33 38"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 42;
    int k = 12;
    vector<string> moves = {"", "2", "3", "3 4", "4", "2", "1 6 7", "1 3 4 7 8", "", "1 3 4", "1 2 3 7 10 11", "1 9 10", "1 3 5 7 10 11 12", "5 7 8 9 10 11 12 13", "2 3 7 8 9 10 12 13", "1 4 7 9 11 13 14 15", "10 14 15", "2 3 4 7 8 9 11 12 13 15 17", "10", "1 2 3 4 7 8 10 12 13 18 19", "6 15 17 19", "2 7 8 9 11 12 14 18 19 20 21", "1", "6 8 18", "1 5 6 7 9 18 20 22", "1 3 4 8 9 11 13 14 15 21 23", "3 4 6 13 14 17 23 25", "1 4 5 7 8 11 13 14 15 17 18 19 21 23", "1 3 5 6 8 10 14 15 16 20 22", "1 3 4 5 7 8 9 11 12 16 17 18 19 20 21 22 25 28", "1 2 3 6 7 10 11 13 14 15 16 17 18 22 23 24 25 30", "", "2 4 7 12 14 19 26 31", "4 10 16 19 20 21 22 25 31 32", "3 4 5 7 8 13 14 15 16 18 20 22 23 24 25 29 34 35", "11 16 18 21 22 30 32", "2 5 8 11 12 13 14 15 16 18 24 28 30 31 32 33 34 36", "10 17", "3 4 10 13 17 19 24 26 28 31 34 36", "3 4 6 13 14 16 18 19 20 22 31 32 38 39 40", "20 21 32 35 36 39", "8 14 24 27 31 33 34 40"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 45;
    int k = 13;
    vector<string> moves = {"", "", "", "", "4", "3 4 6", "2 5", "2 7", "3 4 8", "2 3 4 5 6 7 9", "10", "6 10", "1 3 6 9 10 12", "6 9", "3 4 8 9 15", "2 3 7 8", "1 9 12 13 16", "2 4 6 8 11", "1 2 5 6 8 10 11 15 17", "2 3 5 8 9 12 15 16 20", "1 2 18", "2 3 4 6 9 10 13 14 15 16 17 21", "1 4 5 6 7 8 9 12 13 15 17 22", "3 5 7 8 10 11 12 14 15 16 22 23", "3 6 12 14 15 18 23", "5 16 19 24", "2 3 4 6 9 11 14 17 18 20 21 23 24 26", "20", "2 4 5 8 9 10 11 12 13 17 18 19 20 21 22 27 28 29", "19 27", "1 5 7 13 14 16 17 19 20 22 24 25 26 27 29 30 31", "17 21", "1 11 23 28 29", "5 7 20 24 29", "1 5 14 19 20 23 26 28 32 34", "2 4 6 8 9 15 17 18 24 26 28 29 30 32 33 34 35 36", "3 4 5 6 9 17 19 23 27 29 32 33 34 37", "1 5 8 13 14 17 19 22 24 30 35 37", "7", "1 2 4 6 8 12 16 19 22 25 30 33 35 38 40", "2 3 4 6 7 8 9 10 11 12 13 17 18 19 20 31 33 36 39", "4 16", "", "34", "2 4 7 11 18 30 36"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 40;
    int k = 13;
    vector<string> moves = {"", "", "3", "1 3 4", "", "4 6", "2 3 5 6 7", "2 3 4 7", "5 9", "", "1 5 6 7 8", "10", "1 5 11", "4 11", "1 3 5 6 11 12", "2 3 6 7 8 9 12 13 14 16", "3 4 6 13 14 16", "2 8 9 11 18", "5 13", "2 3 5 6 8 11 12 13 14 15 16 18 20", "5 11 20", "2 3 4 5 6 13 18 19 21", "1 2 3 4 6 8 9 10 14 20 21", "3 21 23", "5 8 9 10 12 16 17 19 20 21 22", "1 4 6 11 12 13 14 15 16 18 20 22 23 25", "4 5 7 9 14 16 20 21 23 25 27", "2 16 23", "5 7", "3 4 8 9 11 13 18 20 22 23 24 27 28", "3 5 11 19 20 25 28 29", "1 2 3 6 7 9 11 12 13 14 18 19 20 21 24 25 28 29 30", "2 6 8 12 19 30", "3 6 7 13 17 19 26 27 28 30 32", "3 5 6 11 14 15 18 20 23 25 26 29 30 31 33", "1 3 7 9 10 13 14 15 17 18 19 21 25 26 31 32 33 35", "1 3 4 5 9 12 15 16 17 18 21 25 26 29 30 31 34 35", "5 25 33 37", "2 5 8 9 10 17 19 22 27 28 31 33 36 37", "2 3 4 6 7 9 10 11 15 18 22 25 26 32 33 34 37 38 39"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 46;
    int k = 13;
    vector<string> moves = {"", "1", "", "1 2 3", "3 4", "1 2 3 5 6", "1", "2 3 5 8", "2 4 7", "1 8 9", "5 8 10 11", "1 8 10 11", "2 3", "4 10", "1 2 3 7 8 10 13", "3 4 7", "2 4 6 8 11 16", "3 6 7 10 11 12 13 14 15 16 17 18", "3 5 9 13 14", "1 2 4 6 10 14", "1 2 3 12 14 15 19", "1 3 15 17", "18", "2 3 5 15 20 21 22 23", "2 3 4 5 6 11 12 13 14 15 16 18 20 21 22 23", "1 2 4 5 6 7 9 11 12 14 16 17 18 19 23", "2 3 4 8 9 11 12 15 16 18 19 20 21 22 24 26", "1 3 11 15 22 25 27", "2 3 4 5 6 7 8 10 13 14 19 20 22 23 26 27", "5 10 13 17 18 24 28", "1 8 9 10 11 15 16 19 20 26", "7 8 10 16 23 24 29 31", "4 8 13 14 22 23 24 31 33", "2 4 10 11 14 16 17 18 22 26 27 30", "2 13 15 22 27", "", "4 6 8 14 18 19 20 24 25 29 33 36 37", "6 9 12 13 23 25 26 29 35 36 37", "3 5 12 19 23 24 27 28 31 38", "15", "3 4 5 6 9 14 15 17 18 23 25 27 30 33 34 38 39 41", "2 3 11 17 20 21 26 30 34 39", "5 13", "7 8 15 16 18 19 24 26 29 39 41", "2 3 5 6 7 8 11 14 19 20 24 27 30 31 37 38 39 43 45", "5 13 14 16 18 27 33 36 40 42 43"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 50;
    int k = 13;
    vector<string> moves = {"", "1", "3", "3", "1", "1 2 5 6", "", "1 4 8", "3", "1 2 3 4 8", "1 6 7 8 10 11", "1 2 4 6 7", "5 8 11 13", "1 2 3 6 7", "3 4 5 6 7 10 11 15", "1 3 5 7 8 11 13 15", "1 2 3 4 7 8 9 11 12 16", "1 2 3 6 7 8 12 15 17 18", "2 8 9 10 11 16 17", "1", "1 3 6 9 10 11 14 19 20", "1 2 3 5 6 7 8 9 10 11 12 14 17 18 19 20", "4 20 23", "9", "1 2 3 7 9 10 12 13 14 16 17 22 23", "4 5 6 7 9 11 14 17 21 22 23 26", "1 4 5 11 12 13 14 16 17 18 21 22 24 27", "3 4 11 14 17 18 21 24 27", "2 17", "1 3 4 6 7 8 9 10 11 12 13 14 16 20 21 24 26 27 29", "2 6 11 12 14 18 19 23", "1 2 3 8 9 12 16 17 19 20 21 27 28 30 31", "2 3 4 5 9 11 15 21 23 25 30 31", "2 5 7 8 9 19 22 23 24 27 28 31 33 34", "17 27", "9 22 23 24 26 27 29 32", "1 2 9 17 20 24 30 36", "", "23 26", "21 25 27 28 29 32", "2 7 9 12 13 14 20 23 25 28 30 32 34 38 39", "1 2 3 5 9 11 18 21 23 24 25 29 33 42", "2 16 18 26 30 34 37 41", "3 4 7 9 10 11 13 15 19 22 30 32 39 40 43", "1 2 4 5 7 8 11 12 15 16 17 20 24 25 26 29 32 39 40", "5 9 22 29 31 32 34 36 38 42", "4 12 16 26 35 41", "10 11 15 16 19 23 25 26 30 31 32 33 37 38 44 45", "5 23 25 26 39 43 49", "5 7 10 11 13 14 16 17 18 22 30 31 36 39 43 45"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 46;
    int k = 14;
    vector<string> moves = {"", "", "", "3 4", "2 4", "1 2 4 5", "5 6", "3 6 7 8", "2 3 4", "1 4 8 9 10", "4 7 8 11", "1 3 6 7", "1 2 5 13", "12", "1 2 3 4 5 7 9 10 13", "2 3 4 12 15", "1 3 5 8 15", "", "1 2 3 8 10 11 19", "15", "3 4 5 8 10 11 13 19", "1 2 4 10 12 15 16 20", "16", "1 3 4 5 6 8 9 10 11 12 13 15 17 18 20 21 23 24", "2 3 4 5 7 9 11 12 14 16 17 19 22 23", "1 2 3 4 5 6 7 11 14 17 20 21 23 24 25", "1 2 4 5 7 8 9 10 11 12 16 18 20 22 24 26", "4 7 11 12 13 14 15 18 19 20 21 22 25 28", "9 10 12 16 24 25 26 28", "6 13", "2 3 8 14 15 16 17 19 21 23 24 28 31", "1 2 5 7 8 14 20 22 27 28 32", "", "", "5 6 9 12 16 19 20 21 22 23 27 29 30 33", "6 13 14 29 30 31 34", "1 2 5 6 10 12 13 17 19 21 22 23 24 28 29 30 33 36", "", "1 5 7 8 9 10 14 15 16 17 19 24 25 28 29 35 36 39", "2 3 5 7 8 9 13 20 22 23 28 29 30 32 35 38 39", "1 5 6 7 8 11 13 14 15 18 19 22 23 24 26 27 32 35", "3 6 10 11 14 16 19 21 22 26 27 30 32 34 39 40", "22 32", "8 13 15 17 18 21 22 24 25 27 28 33 36 37 42", "1 2 3 5 7 11 15 17 23 28 38 40 42", "3 4 7 11 15 16 18 20 28 32 39 42 44"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 46;
    int k = 14;
    vector<string> moves = {"", "", "1 3", "2", "4 5", "5 6", "1 2 3 7", "3 5", "1 3 5 7 9", "1 6 8", "2 3 9", "1 4 6 7 9 11", "1 2 5 8 9 10 12", "3", "1 2 5 8 10 11 13 14 15", "1 2 14", "3 7 8 12", "4 5 13 17", "1 3 4 5 7 8 10 11 12 14 17 18", "2 4 7 10 12 13", "3 4 14 21", "1 4 8 9 12 14 15 16 17 19 20", "1 2 3 5 6 10 13 14 15 17 19 20 22", "1 2 3 4 5 6 7 8 9 12 13 15 20 21 22", "2 3 8 12 13 16 17 19 20 22 24", "2 3 4 5 7 8 10 12 16 18 19 20 23 24 25 26", "1 3 4 8 9 13 14 15 16 17 24 25 26", "3 5 6 7 8 11 14 17 18 24 25 27", "11 12 14 21 24 29", "2 3 5 6 7 8 12 13 14 18 19 20 21 22 27 29", "1 4 8 9 10 12 13 14 15 19 20 22 24 25 26 27 28 29", "1 3 4 5 6 9 10 12 14 18 19 20 21 24 25 27 29 30", "6 23 28 31 32", "1 4 6 7 9 10 11 12 13 15 18 20 21 24 31", "17 34", "6 13 19 22 27 30 34", "5 6 8 9 10 12 13 21 23 24 26 27 28 30 34 35", "2 4 7 12 15 16 21 25 27 32", "6 8 13 15 18 29 35 37", "3 9 12 15 20 37 40", "2 3 8 9 10 15 17 18 30 33 34 35 36 37 39 40 41", "1 2 3 4 7 9 12 19 20 21 24 25 27 29 32 34 38 40", "1 2 4 7 10 12 15 26 27 29 32 33 35 38 40 41 42", "1 2 10 14 16 17 22 23 27 30 31 33 35 38 39 40 42", "11 13 43", "2 7 11 15 17 22 24 25 30 31 32 35 42 44"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 49;
    int k = 14;
    vector<string> moves = {"", "", "2", "4", "", "3 4 6", "2 3 5 7", "4 6 8", "2 5 6 7 8 9", "7 8 9 10", "1 4 5 6 8 9 10", "1 4 5 8 9 10 12", "1 2 6 7 8 10 11", "3 5 6 7 8 11 12 14", "1 2 3 4 7 9 12 13 14 15", "6 13", "7 14", "1 2 4 9 10 11 13 15 17", "1 2 4 7 9 10 11 13 15 16", "1 3 14", "10 11 12 13 14", "1 6 8 9 10 11 12 15 16 17 20 22", "2 3 8 13 21 22", "5 7 8 9 11 14 17 21 22", "1 2 4 5 7 9 24", "1 2 3 7 11 15 17 19 21 22 25 26", "1 2 12 15 16 22 23", "4 9 10 14 16 18 25 26 28", "", "2 7 9 10 11 13 14 19 23 24 27", "4 14 16 20 22 24 30", "1 4 5 8 21 30", "3 6 9 13 14 16 18 20 22 24 25 30 31 32", "4 5 6 7 9 10 11 12 13 14 15 18 24 25 26 27 29 32", "31", "1 3 4 12 13 16 21 24 25 30 31 35", "1 3 5 7 9 13 16 17 19 20 23 24 26 29 32 34 36", "", "1 2 3 4 5 6 9 11 12 15 17 18 19 27 28 30 33 36 38", "", "2 3 5 6 12 15 20 24 26 31 32 33 35 36 37 40", "3 6 12 14 15 21 33 34 39 41", "11 17 29 34 37", "5 18 27 31", "4 10 22 26 40", "2 4 5 7 9 14 16 19 21 22 25 26 29 30 31 38 39 42", "1 2 5 6 12 17 20 37 38 39 40 47", "3 8 12 13 16 47", "7 10 11 25 43"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 49;
    int k = 14;
    vector<string> moves = {"", "", "3", "1", "2 5", "", "2 4 6 7", "1 2 4 5 7", "6", "2 4 5 6 7 8 9 10", "5 6 9 10", "7", "3 5 8 9 11 13", "4 5 7 8", "1 2 6 9 11 12 13", "4 6 8 11 14 16", "3 5 9 11", "1 2 4 5 6 7 8 11 12 13 14 16", "1 5 16", "2 3 4 5 10 11 14 15 16 20", "1 2 4 5 9 14 18 19 20", "2 5 6 7 8 9 11 12 13 15 16 18 22", "7 13 20", "2 4 6 8 13 16 17 18 20 23 24", "17 22 23 24", "12 14 17", "4 5 11 24", "5 7 9 19", "2 3 5 8 9 10 12 13 14 17 19 24 25 26 27 28 29", "3 8 9 16 18 19 28", "1 2 3 5 6 8 9 11 12 13 14 17 18 20 21 26 29 30", "1 2 4 5 6 7 9 10 11 12 13 15 18 19 23 24 28 29 31", "7 14 15 26 27 30", "2 3 4 5 8 17 19 20 21 22 23 26 29 30 31 32 33", "3", "1 2 4 5 6 9 12 14 15 17 19 21 23 24 26 27 28 29", "4 13 35", "2 6 11 12 13 15 17 18 22 23 25 31 32 34 36", "1 14 18 19 21 22 25 28 29 30 32", "2 11 15 19 20 28 30 32 38", "1 3 6 7 8 14 16 18 21 22 24 26 32 34 38 40", "10 13 16 20 26 27 28 30 33 35 37 39 40 41 42", "3 5 10 11 14 15 19 20 24 26 29 33 36 38 39 40 42", "6 7 13 16 18 19 20 23 28 30 36 37 38 40 41 43", "3 9 10 11 12 14 16 19 22 25 26 27 33 34 35 39 44", "12 25 33", "2 18 21 34", "2 5 6 9 10 12 13 17 22 28 30 31 32 35 36 43 45 48", "2 3 4 6 12 14 18 23 26 28 31 40 45 48"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 46;
    int k = 15;
    vector<string> moves = {"", "", "2", "", "4", "5", "1 2 5 6", "2 4 6", "", "1 2 6 7 8 10", "5 8", "1 2 5 8 9", "4", "1 5 8 11", "1 3 6 7 9 12 13 14", "6 11 12 15", "1 2 3 4 6 8 9 11 12 13 16", "1 3 5 7 9 10 15 18", "10 11 13 15 18", "4 5 7 8 9 11 17", "3 4 6 9 14 17 18 20", "4 5 6 7 12 13 17 18 19 20 21", "6 7 10 13 14 15", "1 5 6 7 9 15 19 20", "2 3 4 5 6 10 11 12 13 15 18 20 22 23 25", "2 3 4 5 6 7 9 12 14 15 16 17 20 23 24 26", "2 3 7 8 9 10 13 14 16 17 20 23 26", "1 2 3 4 5 6 7 8 10 14 16 17 18 21 23 27 28", "3 4 12 28", "1 2 3 4 5 6 7 10 11 12 13 15 16 19 20 25 26", "6 7 8 12 13 16 18 21 24 27 28 29", "2 3 5 8 9 10 12 14 15 19 20 24 25 28 30", "1 9 12 28", "2 3 4 6 7 10 11 19 20 23 27", "2 4 8 9 10 11 12 13 15 16 22 23 24 27 28 29 30 35", "11 15 22 24 35", "4 5 7 9 10 14 15 19 20 23 24 25 26 31 32 34 35", "4 5 6 8 9 13 14 22 23 26 27 30 31 32 34 36", "1 5 7 8 9 10 11 13 17 20 27 28 29 33 34 35", "2 4 7 14 20 32", "7 8 18 19 26 27 28 29 34 37", "3 4 9 14 15 17 20 21 26 28 29 30 31 34 39", "1 2 4 5 8 18", "8 10 14 21 22 23 32 33 35 37", "7", "3 12 20 33 35"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 47;
    int k = 15;
    vector<string> moves = {"", "", "1 2", "3", "1 5", "1 3 4 5 6", "1 3 6", "1", "", "1 4 5 6 8 9 10", "3 11", "1 3 4 7 11 12", "3 4 5 7 10 11 12", "8 9 11", "4 5 9 12 15", "2 7 12 13 14 15 16", "1 6 8 16 17", "3 13", "1 2 3 4 5 6 8 9 10 13 17 19", "4 5 7 8 9 11 13 17", "1 5 7 9 10 13 18", "1 3 6 7 8 13 15 18 19 20 21", "1 2 3 5 14 16", "4 6 7 8 11 12 13 15 19 21 22 24", "1 3 4 7 8 9 10 13 16 18 19 20 21 22 24 25", "1 2 9 11 18", "3 4 7 8 10 12 14 15 16", "14 16 18 20 23 24 28", "1 2", "4 6 8 10 14 15 20 22 24 26 29 30", "1 3 9 11 14 16 17 19 21 24 25 27 28 29 31", "15 18", "1 7 8 12 15 26 27 33", "1 6 9 10 12 13 18 22 31 32", "11 13 14 17 33 35", "2 5 9 16 17 20 21 23 31 34", "10", "9", "3 8 9 29", "2 3 5 7 8 9 11 12 15 17 19 22 24 25 28 29 30 32 38", "1 5 6 8 11 15 17 19 23 25 26 27 39 40", "2 3 4 8 9 19 24 28 30 33 35 36 37 39 42", "2 6 10 12 17 19 21 28 29 36 39 41", "25 34 35 37 38 42 43", "8 11 43 45", "1 3 8 9 16 24 29 30 32 35 40 45 46", "2 5 6 9 10 17 21 25 26 27 28 30 36 41 42 43 46"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 46;
    int k = 15;
    vector<string> moves = {"", "1", "", "3", "1 3 4 5", "1 2 4 5", "3 4 5 6", "7", "1 2 3 5 7 8 9", "2 3 5", "1 3 6 8 10 11", "12", "1 2 4 7 9 12 13", "2 3 6 7 8 9 10 11 14", "1 5 12", "4 5 6 7 9", "4 5 8 11 13", "1 2 6 11 13 14 15 16 17", "2 7 9 10 11 12 14 15 16 17", "2 9", "1 2 3 4 7 9 10 12 13 15 16 17 18 19 20", "1 6 8 9 11 12 13 14 15 17 18 19 20", "3 4 5 6 8 10 11 13 14 16 17 20 22 23", "3 5 11 13 16 22 23", "3 6 7 8 9 10 11 12 14 16 17 19 21 22 23 25", "2 3 8 20 21", "2 3 4 7 8 10 11 15 21 25", "1 2 5 7 9 10 11 12 14 18 24 27 28", "9 22", "2 5 8 10 14 21 26 30", "3 4 5 6 7 9 10 11 16 20 22 23 29 30", "7 12 18 19 20 25 29 32", "1 2 3 5 8 9 11 13 16 20 25 26 30", "3 16 21 33", "2 3 4 5 12 14 16 18 19 20 21 22 23 25 26 29 33", "2 4 8 9 10 13 14 17 18 20 23 26 27 30 33 34 35", "4 5 13 23 31 32 34 37", "4 5 7 9 10 14 16 21 25 31 37 38", "3 10 11 12 15 21 22 23 24 27 29 30 34 35 36 37 38", "1 2 5 6 28 29 32 33 38", "11 17 18 20 22 27 30 31 38", "23 37 38", "2 4 5 8 9 17 18 19 21 25 30 31 32 33 36 38 41", "1 4 5 6 12 15 16 19 23 24 25 29 30 32 34 36 39", "14 17 22 32 33 35 39 41 45", "1 2 3 4 5 8 10 14 18 19 21 22 24 28 29 34 36 38 41"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 49;
    int k = 15;
    vector<string> moves = {"", "", "2", "", "1 2 4", "2 3 6", "1 2 7", "1 4 5", "2 4 8 9", "2 5 7", "1 6", "5 8 12", "", "1 3", "4 6 9 11 12 13", "1 2 5 8 10 11 12 13 15", "2 5 6 7 15 16", "6 8 13 15 17 18", "2 3 4 7 8 9 10 12 16 17 19", "1 2 4 5 6 9 11 12 14 16 19", "9 12 13 14 19", "2 4 10 19 20", "8 9 10 11 13 14 15 16 19 21 23", "1 2 3 4 5 9 10 11 12 16 18 19 20 22 23", "1 2 3 4 5 12 18 19 20 21 22 23 24", "2 3 5 6 8 15 17 20 21", "2 4 7 9 13 17 18 20 22 25 26 27", "2 3 6 17 26", "3 5 6 7 11 12 16 17 20", "15", "4 12", "6 16 20", "5 6 8 9 14 16 19 20 21 22 26 27 28 29 32 33", "1 6 9 12 14 15 18 21 23 24 26 27 29 30 31", "4 5 7 8 9 12 17 20 21 23 24 27 29 34", "1 2 3 5 7 8 9 11 12 14 15 23 24 26 27 30 31 33 36", "4 6 10 12 15 16 18 20 25 29 31 32", "7 9 10 12 13 22 23 24 28 31 35", "", "1 2 3 5 7 8 10 14 16 18 26 27 29 31 34 35 37 38 39", "1 6 7 18 32 33 36", "2 7 8 9 12 13 15 20 22 24 28 32 34 36 39", "6 13 14 32 34", "3 5 10 12 23 25 30 35 38 42", "2 8 9 11 12 16 18 20 22 27 28 29 31 35 36 38 39 40", "1 2 7 11 12 14 15 18 20 24 27 28 29 30 31 33 37 41", "1 2 7 9 12 18 20 23 27 30 43 46", "4 5 9 10 11 16 18 20 22 25 30 40 41 42 46", "1 2 35 46"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 45;
    int k = 16;
    vector<string> moves = {"", "2", "1 3", "3", "1 3 5", "", "4 5 7", "1 3 5 8", "7 8", "7", "2 9 10 11", "2 9 10 11 12", "5 9 11 13", "5 6 9 12 13 14", "1 2 5 9 10 11 12 13 14 15", "2 12", "1 3 4 6 11 12 13", "2 3 7 10 12 16 17 18", "1 2 3 4 8 10 11 13 16 17", "1 4 9 11 13 19", "1 2 3 5 7 14 15 17", "3 4 7 9 15 19 21 22", "3 4 8 11 12 19 20 21 22", "1 2 3 4 5 6 13 16 17 20 22", "2 10 15 17 19", "2 10 18", "1 2 4 7 9 10 11 16 17 20 22 23 27", "1 3 7 8 11 12 14 16 17 18 19 23 25 26 28", "", "2 4 5 6 9 10 11 12 13 16 20 25 26 29 30", "2 5 8 9 10 11 13 14 20 22 24 25 26 27 31", "24 28", "1 3 5 7 10 11 12 14 17 21 23 28 29 31 32", "6 8 12 13 15 17 20 23 32 33", "1 3 5 14 16 21 23 26", "1 5 6 7 11 12 13 18 21 23 24 32 33 36", "1 2 5 12 14 15 16 25 26 27 33 35 36", "3 7 10 11 12 14 16 18 19 28 33 37 38", "2 5 7 11 13 14 16 23 27 28 31 32 36 37", "1 8 10 15 23 28 30 32 37 38 40", "3 5 11 14 19 21 26 28 29 35", "15 19", "2 4 8 13 23 29 31 34 36", "4 6 7 8 12 15 17 18 26 29 30 32 37 40 41 42", "2 4 10 11 12 13 14 16 18 20 22 23 34 42 43 44"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 43;
    int k = 16;
    vector<string> moves = {"", "", "", "2 4", "", "5", "", "", "1 3 9", "2 3 4 6", "1 3 5 6 9", "2 5 6 8 11 12", "2 9 10", "1 6 7 8 13", "1 2 3 5 6 12 13 14", "4 8 9 10 12", "16", "2 3 9 11 15 17", "1 7 8 10 13 14 16 17 18", "1 4 8 14 17 18 19", "2 3 7 8 9 10 12 14 15 16 18", "1 13 21 22", "2 10 12 18 20", "4 18 20 23", "1 2 9 11 12 13 14 16 19 20", "3 4 5 6 7 9 11 16 17 18 20 22 23 24 25", "3 13 20 21", "4", "3 5 7 9 10 13 14 17 19 21 29", "2 9 11 16 19 22 27 28", "1 2 5 6 7 8 10 12 13 14 15 18 20 22 25 27 28", "3 4 5 8 10 12 13 14 17 19 21 22 23 24 26 27 28 32", "9 10 15 16 18 19 20 22 23 24 26 31", "2 3 7 17 18 22 26 27", "6 7 9 10 12 17 29 30 34", "2 4 6 7 8 15 16 17 18 19 20 27 28 32 34 35 36", "1 2 5 14 15 18 21 28 30", "2 3 4 5 6 8 11 13 14 16 18 21 23 24 29 33 34 36 37", "2 3 6 7 9 15 17 19 21 22 24 27 28 29 31 32 37", "1 2 4 10 11 14 17 21 24 25 26 28 30 31 33 34", "2 5 9 14 17 18 20 21 22 24 26 30 34 36 38 39 40 41", "1 10 12 13 15 16 23 25 33 35 37 41", "3 4 6 7 8 11 12 15 22 27 33 36 38 40 42"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 44;
    int k = 16;
    vector<string> moves = {"", "1", "", "1 4", "5", "2 6", "4", "2 4 6 7", "2 4 7 8 9", "2 8", "2 4 7 10", "1 3 4 5", "5 8 9 13", "", "1 2 4 5 7 9 11 13", "2 5 7 10 15 16", "3 5 10 11 12 13 14 15 17", "1 4 5 7 13 14 17 18", "1 3 6 7 8 11 12 15 16 17 18", "5 6 10 11", "", "2 9 15", "1 2 3 4 5 8 10 12 13 14 15 16 21 22", "2 5 11 12 18 19 23", "1 2 5 24", "5 7 8 9 12 14 15 16 18 19 23", "2 7 10 14 21 26", "1 4 14 24 27", "1 3 6 9 11 13 18 23 24 25", "6 8 10 12 14 15 17 19 20 22 25 29", "2 5 6 10 16 17 18 20 21 23 24 26 27 29 30", "3 7 12 13 19 26 32", "2 5 6 7 12 15 16 19 22 23 24 26 29 30 31 32", "1 2 5 6 9 11 12 15 18 25 27 30 32 33 34", "1 2 3 4 10 11 12 13 14 15 17 18 25 29 30 31 32 35", "1 3 4 8 11 12 14 15 18 19 20 23 24 25 33 34 35", "1 5 6 7 8 10 11 13 15 17 19 27 28 29 30 33", "2 4 6 8 10 12 16 17 20 27 28 29 33 34 36 37", "27 29 35", "3 17 33 38", "2 3 6 7 24", "1 3 5 8 13 14 19 22 27 41", "1 4 5 6 7 16 18 19 20 22 23 29 34 35 41", "7 12 14 15 20 21 26 28 35 41 42"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 50;
    int k = 16;
    vector<string> moves = {"", "1", "3", "4", "2 4", "", "1", "1 8", "1 4 7", "9 10", "7", "2 4 5 11", "2 3 6 8 9 11 13", "1 2 4 5 6 10 11 14", "1 2 4 9 12 13 14", "1 3 6 8 13", "2 5 8 9 10 12 13 14 16 17", "16", "1 2 3 10 11 16", "1 3 10 11 12 19", "1 2 12 18 20", "", "4 5 6 7 8 9 10 12 13 15 18 20 21 22", "3 17 18", "1 2 3 4 7 8 9 10 11 12 17 18 21 23", "1 2 3 5 8 14 15 16 22", "4 6 10 13 16 22 24 25", "", "2 3 5 6 10 11 13 14 16 17 21 25 27 28", "8 16 20 27", "1 3 4 5 6 8 11 12 14 26", "1 3 5 13 17 19 20 26 32", "1 2 3 5 7 9 14 15 16 17 19 21 22 24 25 26 28 30 31", "10 13 23 29 30", "2 4 6 11 12 13 15 20 23 24 29 31 32 34", "1 2 4 8 10 13 14 16 18 21 22 27 33 34 35 36", "1", "5 8 12 13 14 20 30 34", "1 2 5 7 8 10 12 15 16 20 24 25 26 29 31 34 36", "1 3 7 8 10 11 13 15 17 19 20 25 29 31 35 38 39", "25 27 31 33 37", "3 6 7 9 12 13 20 22 25 26 29 32 41 42", "6 7 12 18 20 26 28 29 33 37 41", "15 19 27 29 31 32 33 38 42", "2 8 9 13 15 20 26 28 30 31 32 34 35 38 41 44 45", "5 6 8 12 18 22 27 29 31 34 35 40 42", "1 2 6 7 8 12 19 20 22 23 27 30 35 46", "2 5 9 15 16 20 21 32 33 35 39 41", "3 4 5 6 7 8 9 11 14 16 21 26 27 29 31 37 45 46 49", "2 4 7 10 17 18 23 25 28 29 33 36 37 40 41 48"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 45;
    int k = 17;
    vector<string> moves = {"", "1", "3", "", "1 2 5", "1 5 6", "1", "1 4 7", "1", "1 2 5 6 7", "1 7", "2 4 7 8 10 12", "1 3 4 6 7 9", "1 3 4 10 12", "1 4 9 10 11 12 13 14", "3 4 5 6 7 10 12 13 14 15", "1 2 4 5 7 9 10 12 13 15 16", "2 4 6 9 10 11 12 13 15 16", "2 4 5 8 17", "", "1 3 7 8 9 10 11 13 18 19 20 21", "12 14 15 19 21", "3 6 8 12 14 15 16 17 20 21 23", "1 2 3 5 6 7 8 9 16 18 20 21 22 23", "", "2 4 9 11 12 13 14 16 20 23 24", "1 2 3 8 11 13 14 15 16 17 19 20 22 25 26", "2 3 4 5 7 9 10 11 12 13 18 20 21 26 27", "3 5 6 9 10 11 14 18 19 21 23 24 25 28 29", "1 2 3 6 12 13 17 18 19 21 25 26 27 28 29", "4 13 19 27", "8 11 17 18 21 23 24 30", "3 33", "2 15 20 23 25 30 31", "25", "1 3 4 9 10 11 12 17 18 19 20 21 27 29 32 34 35", "5", "1 3 8 10 11 12 15 20 22 24 25 29 32 38", "5 10 12 21 25 26 27 30 32 34 35 36", "22", "1 4 5 7 10 19 20 24 25 27 31 35 36 38 39 41", "2 5 7 11 12 18 22 26 30 31 32 41", "7 12 17 20 21 36", "6 7 8 10 16 20 22 24 25 26 27 29 33 43 44", "3 12 17 20 26 28 30"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 49;
    int k = 17;
    vector<string> moves = {"", "", "3", "", "3 5", "", "", "2 3 6", "1 2 3 7 9", "1", "1", "2 4 6 12", "3", "1 2 4 5 6 7 8 10 13", "2 3 4 7", "2 7 8 9 15", "1 4 6 7 12 13 14 16", "6", "6 9", "4 7 8 11 12 13 17", "5 13 14 15 17", "5 8 15 16 18 19 21", "2 4 6 9 13 14 17 18 20 21", "1 4 5 13 17 19 21", "1 2 4 5 8 9 10 12 13 16 17 18 19 20 21 22 24", "1 4 5 13 16 17 18 22", "1 3 6 13 20 22 23 24 26", "3 4 5 9 12 13 14 15 17 19 20 25 27", "14 17 18 19 24 26 27", "5 7 12 16 21 23 25 26 28 30", "28", "1 12 18 19 21 23 28 29 32", "1 7 11 13 21 24 26 32 33", "1 3 4 8 11 15 27 33", "4 12 17", "7 9 17 18 23 26 29 30", "1 2 3 4 6 9 14 15 16 18 19 22 23 24 25 26 28 32 35", "5 9 19 20 22 24 26 28 31 33", "", "1 2 6 11 12 16 17 21 22 31 35 36", "4 5 10 13 15 16 17 18 19 22 28 29 32 33 35 38 40", "1 7 11 12 13 17 20 23", "1 5 6 7 9 11 13 17 21 29 33 37 38 40 43", "12 20 41", "1 3 4 6 9 13 15 16 17 19 20 25 26 28 29 32", "2 5 6 7 10 17 19 21 27 33 35 40 42 43 45", "1 3 6 9 13 14 17 18 20 21 22 28 29 30 33 34 36", "1 4 10 15 28 33 35 43 44 45", "2 3 6 9 11 13 23 25 29 30 35 39 44"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 42;
    int k = 17;
    vector<string> moves = {"", "", "", "3", "2", "3 4 6", "6", "1 2 6 8", "", "3 4 5 10", "1 5 6 10", "2 3 5 7 8", "2 3 4 5 7 9 10 11", "1 7 10", "4 15", "2 4 6 7 9 15 16", "1 2 3 5 9 10 12 13 16", "7", "3 5 7 8 10 12 14 17", "3 6 19", "7 8 9 11 13", "2 9 10 16 17 20 21", "1 6 7 8 10 14 16 17 18 20 22", "3 6 8 9 10 14 15 16 17 18 20", "10 18 25", "5 7 14 15 16 22", "2 3 4 5 6 8 12 16 17 18 21 23 26", "6", "2 3 5 6 8 10 12 13 14 17 18 20 24 25 26 28 29", "1 3 7 9 10 11 15 17 19 21 22 26 28 29", "7 8 14 17 20 30", "3 4 5 6 10 15 18 21 24 27 30", "3 4 5 7 8 9 12 15 18 21 22 23 27 28 30", "1 5 7 9 10 15 16 17 22 23 26 28 29 30 31 33", "4 11 14 15 21 25 27 32 33", "1 2 5 13 14 16 17 19 20 23 24 26 29 30 32", "1 4 6 10 14 16 20 21 27 28 31 33", "1 4 5 7 13 14 18 27 35 37 38", "2 7 10 11 13 17 18 20 21 24 25 28 29 34 38", "6 7 8 9 14 17 21 22 23 24 25 27 32 33", "1 2 3 4 5 8 9 10 13 14 17 20 25 29 30 33 35 36 40", "1 2 3 4 13 14 20 24 29 31 32 34 36 37 40 41"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 49;
    int k = 17;
    vector<string> moves = {"", "", "3", "1", "4 5", "1 2 3 4", "2 3 4 5 7", "1 2 5 6 7", "3 4 5 8", "2 3 5 6 9", "2 7 9 10", "3 4 5 7 8 9", "", "1 3 4 5 6 10 11", "4 5 7 8 9 12 14 15", "2 3 4 5 6 9 12 13 14", "", "1 2 3 4 5 6 8 10 15 16 18", "3 4 6 8 9 11 12 13 16 17 19", "2 6 9 12 20", "1 2 4 5 6 7 9 13 14 16 18 19", "1 3 4 6 12 13 17 18 19 20 21", "", "4 14 15 21 22", "5 7 9 11 15 18 21 25", "2 6 10 12 15 19", "", "1 2 5 6 7 8 12 14 20 21 22 24 25 26 27", "1 2 3 6 7 14 15 19 20 21 23 24 26 27 28", "1 3 6 7 10 13 16 17 24", "1 2 3 4 9 10 11 14 15 16 19 20 21 23 24 25 26 29", "9 17 22 25 26 30", "4 6 8 9 12 13 15 16 18 19 21 26 28 29 30", "2 3 6 8 9 11 12 14 16 22 24 25 26 29 32 33", "3 5 7 8 9 12 13 15 18 20 23 24 25 26 31 32 35", "2 11 15 17 21 27 28 33 34 35", "1 2 4 5 7 8 12 16 19 23 24 27 29 30 32 33 34 35 36", "2 3 4 12 14 18 19 25 30", "1 2 4 5 7 8 17 23 25 26 27 28 29 31 34 36 37", "6 8 13 26 31 32", "3 4 6 8 13 15 16 20 21 24 31 33 34 36 38 39", "15 18 27 33 34", "4 5 6 7 8 9 10 18 20 21 22 24 29 30 31 35", "17 21 24 39", "8 10 11 12 15 16 18 19 20 21 23 25 30 32 33 42", "7 8 16 27 29 30 42", "2 4 7 13 14 19 21 23 26 37 39 42 47", "8 14 17 22 34 42", "3 7 8 10 16 19 21 22 24 26 28 30 34 44 46 48"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 49;
    int k = 18;
    vector<string> moves = {"", "", "", "3", "1 2 3", "5 6", "1 3 6", "1 5 7", "1 5 7 8 9", "3 8", "1 6 9 10 11", "2 7 8", "5 7 9", "3 4 5 6 7 9 11 13 14", "2", "2 3 4 5 8 9 14 16", "3 4 5 6 9 10 14 15 16", "", "4 7 8 10 11 12 13 15 16 17", "1 2 3 4 6 7 15 16 17", "1 2 5 8 10 12 14 16 17 19 21", "1 2 4 5 6 8 9 10 11 13 17 19 21", "9 13 14 15 16 18 19 20 21", "1 2 6 9 10 11 12 14 15 17 19 21 24", "3", "4 5", "2 5 7 10 22 26", "2 3 4 5 8 10 11 12 13 15 23 25 27", "1 3 4 5 6 8 9 11 19 21 22 27 28 29", "2 8 14 15 19 21 23", "1 5 6 9 10 11 16 18 19 20 22 30", "16", "4 18 22 31 32", "5 6 7 8 9 10 11 12 15 20 21 24 25 26 27 30 33", "4 5 6 7 8 13 14 15 20 21 23 24 26 30 31 32 34", "2 5 6 8 9 10 14 15 26 29 32 35", "12 15 18 22 23 35 36", "2 4 5 7 8 11 12 14 16 17 19 21 26 29 31 33 36", "2 4 6 7 9 12 13 17 19 27 28 31 33 35 36 38 39", "2 4 5 8 12 13 14 19 21 22 25 26 27 31 32 37 38 39", "3 15 18 24 38 39 40", "5 10 35 38", "3 6 8 9 10 11 21 29 33 36", "4 25 26 30 42", "1 13 14 17 31 37 39 40", "1 2 6 7 11 22 30 32 33 34 38 41", "10 12 24 40 44", "8 13 15 17 19 20 22 29 30 33 37 41 45", "2 5 8 11 13 15 25 29 32 33 39 41 42 44"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 48;
    int k = 18;
    vector<string> moves = {"", "", "2 3", "", "1 2 3", "1 5", "6 7", "2 3 6", "1 4 6 7 9", "2 4 8", "1 2 4 5 6 7 9", "3", "1 4 5 6 8 11 13", "1 2 7 8 9 10 14", "3 4 5 6 8 10 11 15", "11 14", "1 3 5 9 10 11", "2 6 8 14", "1 5 7 8 9 11 12 14 16 17 18", "8 9 15 19", "1 4 6 7 9 10 13 19 21", "1 3 8 14", "1 3 9 14 15 22", "1 4 17 18 21", "5 6 7 8 19 24 25", "5 6 7 8 9 10 11 12 13 15 17 18 21 22 24", "1 3 6 11 12 13 17 22 23 25 27", "2 4 6 7 12 13 14 15 16 17 18 22 24 28", "3 4 5 6 7 10 12 17 19 20 23 24 26 29", "1 4 6 7 17 19 21 23 25 26", "1 3 8 10 12 13 14 15 18 21 30", "15 19 24 26", "3 4 9 12 13 19 22 26 31", "1 9 12 18 26 29 32", "4 6 11 17 18 20 23 27 28 35", "4 16", "1 5 6 7 8 12 16 19 20 24 26 33 36", "1 23 25 29 32 34", "1 2 6 9 10 11 12 13 16 26 27 29 30 32 33 34 36", "3 9 10 21 29", "", "2 4 7 8 9 10 11 16 17 18 24 25 26 29 32 35 36 39", "1 10 16 22 32 40", "2 12 18 32 37 41 42 43", "6 23 27 41", "1 4 10 12 15 17 18 22 29 31 32 34 36 38 40 44", "30 32 36", "2 12 19 23 37"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 47;
    int k = 18;
    vector<string> moves = {"", "1", "2 3", "2", "2 4", "1 2 4 5 6", "3", "7", "", "1 3 6 8 9", "4 5 6 7 8", "2 3 4 6 8 9 10 12", "1 2 8", "2 3 6 11 13", "3 4 6 8 9 11 14 15", "2 3 7 11 12 13 14 15", "1 2 3 6 8 10 12 13 15 16", "1 2 4 7 9 10 13 14 18", "4 5 8 9 11 13 15 17 18 19", "2 3 4 5 6 7 10 11 15", "4 5 7 11 12 15 17 18 19 20 21", "8 19", "2 5 8 9 11 16 17 18 23", "1 2 3 4 11 12 15 18 19 21 22 24", "1 5 14 23", "1 5 7 12 13 15 18 25", "1 2 6 10 11 12 15 19", "1 5 6 7 13 15 19 20 24 25 26", "4 5 7 9 10 13 17 20 21 22 23 24 25 27 28", "2 3 4 21 23", "1 2 6 7 12 14 15 18 21 24 26 29 30 31", "1 5 9 14 16 23 31", "1 3 5 7 11 12 15 20 22 23 24 25 27 30 31", "1 3 13 17 25 26 31 33", "1 23", "4 6 7 8 20 22 33 34 36", "1 3 6 8 11 16 19 20 24 27 28 30 32 36 37", "1 2 4 5 7 9 12 14 16 17 25 27 30 31 34 35 36 37 38", "4 6 7 9 10 15 24 25 30 32 33 34 35 38", "12 16 19 20 22 24 25 30 31 33 38 39", "16 24 31 35", "", "5 6 8 10 12 14 19 20 22 23 25 31 33 34 35 40 41 42", "2 6 11 23 24 26 28 30 35 38", "2 5 7 8 11 12 15 16 27 30 44", "8 15 20 22 28 29", "2 3 6 10 11 12 13 21 29 32 33 34 35 37 40 42 43 44"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 48;
    int k = 18;
    vector<string> moves = {"", "1", "", "2 3 4", "1 4", "", "1 2", "5 6 7", "", "2 3 5", "2 3 4 7 8", "2 4 7 8 11 12", "1 2 7 8 10", "2 3 4 6 7 8 9 12 14", "2 4 7 10 11 15", "2 3 4 7 8 11 12 13", "2 4 5 9 10 12 13 15 16", "1 4 5 6 7 8 11 12 15", "1 4 7 9 11 12 13 14 16 18", "3 4 8 9 11 13 15 16 20", "5 15", "1 2 4 5 6 8 10 11 13 14 16 17 18 20 21", "1 5 8 13 18 19 21", "1 9 11 16 17 18 19", "1 7 8 9 11 17 19 20 21 23 24", "1 4 6 9 10 15 19", "1 2 3 4 12 14 16 17 19 21 22 24 25 26", "", "8 9 10 11 14 17", "2 4 6 7 8 10 11 12 14 16 18 19 21 27 28 29 30", "2 11 12 19 29", "5 7 8 9 10 11 12 18 21 22 29 31", "1 3 5 8 9 15 18 19 21 22 25 29 30 31", "2 3 6 7 8 9 13 14 16 17 18 20 21 24 26 28 29 31 34", "1 2 3 6 7 9 11 12 13 17 20 21 22 23 24 26 27 33", "1 2 6 7 9 10 11 12 13 19 22 24 30 32 33 34 35", "3 9 12 14 15 18 22 23 29 31 34", "29 33 37", "2 3 4 5 6 10 11 12 20 21 26 29 31 33 36", "1 2 3 4 6 7 8 9 10 18 19 20 21 22 23 28 33 35 39", "4 6 12 19 22 23 24 25 26 27 29 31 33 35 39 40", "33", "2 4 6 9 10 11 12 13 14 19 20 22 23 25 35 39 40 42", "3 5 13 16 23 32", "6 7 12 14 20 22 41 43", "4 8 11 15 16 17 18 26 30 34 36 37 38 39 45 46", "5 11 13 14 15 27 29 30 42 45", "1 3 4 5 7 9 15 16 19 22 23 24 32 36 44 45"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 47;
    int k = 19;
    vector<string> moves = {"", "", "1 3", "1 3", "2", "2 5 6", "2 3", "4", "4", "1", "1", "3 4 5 6 10 11", "4 5 7 8 9 10 11 13", "2 8 9", "5 8 10 13 15", "2 9 15", "4 6", "1 3 4 5 7 9 11 14 15 16", "1 4 6 7 8 9 10 11 13 19", "7 9 10", "3 4 5 7 9 10 11 12 13 18 19", "1 3 5 6 7 8 12 13 14 15 17 21", "11", "1 3 4 9 10 11 12 13 16 18 19 21 22 23", "4 9 15 16 19 23", "1 2 4 5 6 10 13 15 16 19 21 22 23 24 25 26", "1 2 3 11 12 13 15 16 17 19", "1 3 5 7 10 11 14 15 16 17 18 20 21 22 26", "3 4 8 9 11 12 14 19 21 23 24 25 26 28", "2 5 9 10 13 15 16 18 26 29", "1 2 3 4 5 6 7 8 12 15 17 19 21 24 25 30 31", "2 4 5 7 10 14 15 21 22 23 25 27 28 29 30 31", "1 3 5 9 11 12 14 17 22 25 30 32 33", "1 2 3 4 7 18 21 22 23 25 27 30 33", "16", "2 10 12 20 23 24 26 31 32 34 35", "9 36", "1 4 7 8 13 15 18 20 21 23 25 28 30 31 32 33 35 36", "8 17 23 25 32 38 39", "2 8 17 20 21 24 25 26 27 30 31 35 39", "2 4 6 7 8 9 14 17 20 23 24 33 34 35 37 38 39", "28 36 38", "1 2 4 7 8 9 14 25 34 37", "3 4 9 15 16 28 31 38", "1 2 7 9 10 19 22 24 26 29 33 35 38 45", "2 5 11 12 18 21 24 28 33 34 37 39 42 45", "3 5 11 14 17 23 29 33 34 46"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 50;
    int k = 19;
    vector<string> moves = {"", "2", "1 2", "2 3", "2 3", "6", "1 3 4", "3 4 5 6 7", "2 3 4 5 9", "2 6 9", "5 7 9 11", "2 3 9 10 12", "1 2 7 8 10 12", "1 4 8 11 12", "1 3 4 6 7 8 11 13 14", "1 4 8 12 13 16", "2 6 9 13 16", "1 2 3 4 10 11 12 13 14 15 17 18", "1 2 3 8 9 10 11 14 15 18", "1 3 4 5 7 8 11 13 14 16 17 18 20", "1 3 4 6 7 10 12 14 16 17 19 20", "1 3 4 7 10 16 17 21", "2 3 4 5 7 9 14 19 22", "2 3 4 5 6 7 10 14 16 20 21 22", "3 4 6 7 8 9 12 13 15 18 20 22 24 25", "2 4 6 7 8 9 10 11 12 13 14 15 16 21 22", "1 5 6 7 8 9 11 16 17 25", "2 3 4 7 8 9 11 12 18 19 20 21 22 24", "2 3 5 10 12 13 14 15 16 19 22 23 24 27", "7 9 10 13 15 16 17 18 21 22 23 28 29 30", "1 3 4 7 9 11 12 13 16 17 21 22 24 26 29 30", "8 9 12 14 18 20 25 28 31", "6 18", "4 7 16 17", "1 2 4 5 11 12 26 33", "10", "1 3 7 8 10 15 16 20 21 22 27 30 33 35 37", "1 3 5 6 9 11 12 13 15 18 22 23 28 30 31 32 34", "4 8 9 13 16 17 19 21 27 28 31 33 35 36 37", "1 3 4 6 8 9 15 21 22 24 26 27 29 31 34 35 36 40", "13 14 15 20 22 29 30 34 35 37 38 41", "2 8 11 13 22 24 25 29 35 36 42", "19 24 31 34 36", "3 6 7 10 14 17 18 21 31 33 37 40 41 44", "1 2 3 5 7 10 16 19 21 25 28 29 30 32 33 34 37 44", "1 6 9 10 13 14 16 18 20 25 29 38 40 41 42 46", "3 7 9 24 26 27 40 41 43 46", "1 3 5 6 13 16 41 42 44", "1 6 36 48", "3 17 21 27 42 44"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 45;
    int k = 19;
    vector<string> moves = {"", "1", "2 3", "1 2 3", "", "3 4 5", "1 2 4 5 6 7", "4 6", "1 3 5 6 8", "1 7 8 10", "1 3 7", "2 4 5 7 8 9 10 11 12", "2 5 8 9", "1 2 3 4 7 8 12", "3 5 14 15", "1 2 4 6 8 10 11 12 14", "3 5 6 9 14 15 17", "2 3 5 6 7 8 9 10 11 13 14 15", "1 4 5 6 12 13 16 17 18", "5 6 7 13 18 19", "2 3 5 6 7 10 11 13 16 18", "15 16 18", "1 3 7 9 11 12 17 18 19 20 23", "1 2 6 12 15 16 17 20 22", "11 22", "1 2 4 5 11 12 13 14 15 16 17 18 19 21 24", "1 2 4 7 8 11 13 21", "2 5 6 9 17 23 24 25 26", "1 2 3 4 5 8 10 12 13 14 15 16 22 24 25 26 27 28", "1 3 4 5 9 12 13 15 16 20 24 26 27", "1 3 5 9 12 14 15 16 20 21 22 23 25 26 27 28", "2 11 19 21 27", "2 5 7 15 19 24 26 27 32", "1 3 6 8 10 13 14 15 16 19 20 21 22 23 25 27 32 34", "1 3 4 5 6 7 8 9 12 13 14 16 19 21 23 24 26 30 33", "1 3 4 5 7 11 12 13 16 17 22 23 24 29 32 33 36", "1 4 5 6 7 11 12 13 14 18 19 20 25 26 27 33 35", "1 4 5 9 13 15 18 25 32 34 36", "2 4 5 7 11 12 15 16 18 22 23 25 30 32 34 35 36 38", "10 12 14 19 20 23 28 30 32 36 39 40", "5 6 18 19 20 25 35", "", "4 7 14 18 20 28", "1 8 11 23 26 32 36 42", "2 8 28 29 34 35 38"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 50;
    int k = 2;
    vector<string> moves = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 49;
    int k = 2;
    vector<string> moves = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 50;
    int k = 2;
    vector<string> moves = {"", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 50;
    int k = 2;
    vector<string> moves = {"1", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 50;
    int k = 3;
    vector<string> moves = {"1", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 50;
    int k = 20;
    vector<string> moves = {"1", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2", "1 2"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 6;
    int k = 3;
    vector<string> moves = {"1", "1 2", "1 2 3", "1 2 3", "1 2 3", "1 2 3"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 8;
    int k = 2;
    vector<string> moves = {"1", "1 2", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 50;
    int k = 20;
    vector<string> moves = {"", "1 2", "1 2 3", "1 2", "2 3 4", "3 4 6", "4 6 7", "1 3 7", "5 9", "1 2 5 8 9 10", "4 5 7 8 10", "1 2 4 5 7 10 11", "3 8 9 10", "2 5 8 9 10 11 12", "1 2 4 6 10 11 12 14", "1 2 3 7 9 10 14", "7 8 10 11 15 17", "4 5 7 8 9 10 12 13 15 16 17", "1 2 3 5 6 11 13 17", "3 6 8 9 11 12 13 14 15 20", "2 5 6 8 14 16 19 20", "3 4 5 7 9 11 13 15 16 17 19", "1 2 7 9 10 11 13 17 20", "1 3 7 8 11 12 13 15 17", "2 5 7 9 17 18 19 20", "2 4 5 6 7 8 12 13 14 15 16 17 20", "4 5 6 7 9 10 14 17 18", "3 4 5 6 8 10 11 13 15 16", "1 2 3 6 7 8 9 18 19", "3 4 7 10 12 15 16 17 20", "1 2 3 4 5 6 7 10 12 13 15 16 18 20", "1 4 7 9 10 13 14 15 16 17 18 19", "2 3 4 7 8 11 13 14 17 18", "2 4 5 8 10 11 12 14 15 16 18 20", "1 2 6 7 9 10 11 13 15 16 17 20", "2 4 5 7 12 13 16 17 18 20", "3 7 11 12 15 16 17 19 20", "3 4 5 6 8 9 11 12 16 17 18 19 20", "4 5 6 8 12 13 15 16 20", "2 5 6 11 12 18", "1 3 6 7 8 11 14 15 16 17 18", "2 3 5 6 10 15", "1 4 6 7 8 10 11 14 17", "5 6 7 8 12 13 15 18", "3 4 6 8 10 11 12 13 15 17 19", "2 4 6 12 13 15 16 18", "4 5 6 8 12 13 14 15 16 18 20", "1 4 9 12 15 16 19 20", "2 4 5 6 8 9 10 11 13 15 16 18", "1 5 7 8 10 12 15 16 18"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 49;
    int k = 19;
    vector<string> moves = {"1", "1 2", "1 2 3", "1 2 3 4", "1 2 3 4 5", "1 2 3 4 5 6", "1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8", "1 2 3 4 5 6 7 8 9", "1 2 3 4 5 6 7 8 9 10", "1 2 3 4 5 6 7 8 9 10 11", "1 2 3 4 5 6 7 8 9 10 11 12", "1 2 3 4 5 6 7 8 9 10 11 12 13", "1 2 3 4 5 6 7 8 9 10 11 12 13 14", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 50;
    int k = 20;
    vector<string> moves = {"1", "1 2", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 50;
    int k = 20;
    vector<string> moves = {"1", "1 2", "2 3", "1 4", "4 5", "1 2 3 4 5", "2 3", "1 3 5 6", "1 2 3", "1 10", "1", "1 2", "2 3", "1 4", "4 5", "1 2 3 4 5", "2 3", "1 3 5 6", "1 2 3", "1 10", "1", "1 2", "2 3", "1 4", "4 5", "1 2 3 4 5", "2 3", "1 3 5 6", "1 2 3", "1 27", "1", "1 2", "2 3", "1 4", "4 5", "1 2 3 4 5", "2 31", "1 3 5 6", "1 2 3", "1 19", "1", "1 2", "2 3", "1 4", "4 5", "1 2 3 4 5", "2 3", "1 3 5 36", "1 2 33", "1 10"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int n = 50;
    int k = 20;
    vector<string> moves = {"1", "2", "1 2", "1", "1 3", "2", "1", "1 2", "1 3", "2 3", "4", "1 4", "3 1", "4 1", "1 2 3 4 5 6", "5 3 6 7 1", "8 6 2", "1 5 9", "1 2", "3", "1 7 4", "9 12", "20 13", "1 2 3 4 5 6 7 8 9 11 22", "1 2 3 4 5 6 7 8 9 11 12 13 14 15 16 17 19 18 22 20", "7 8 9 11 22 21", "1", "1 3", "2", "1", "1 2", "1 3", "2 3", "4", "1 4", "3 1", "14 15 28 16 17 19 18 22 20", "7 8 9 11 22 21", "1", "8 6 2", "1 5 9", "1 2", "3", "1 7 4", "9 12", "37 28 36 12 1 4 44", "41 47 1 3 14 15 38 16 17 19 18 22 20", "19 18 22 20", "7 8 9 11 22 21 1 2 3 4 5 6 40 41 42 43 46 45", "1 2 3 4 5 6 7 8 9 11 22"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int n = 50;
    int k = 20;
    vector<string> moves = {"1", "2", "3", "4", "4", "6", "2", "", "", "", "3", "5 6 7 8 9", "5 6 7 8 9 10 11 13", "6 9 10 14", "1", "", "", "", "", "", "", "2", "", "", "", "3", "5 6 7 8 9", "5 6 7 8 9 10 11 13", "6 9 10 14", "", "1", "", "", "", "", "", "2", "", "", "", "3", "5 6 7 8 9", "5 6 7 8 9 10 11 13", "6 9 10 14", "1", "2", "3", "4", "5", "6"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int n = 50;
    int k = 20;
    vector<string> moves = {"1", "1 2", "2 3", "1 4 3", "1 3", "1 3", "4 3", "1 4", "4 3", "2 1", "4 2", "4", "3", "2 4", "2 3 1", "3 1", "3", "1", "2 3", "3 2", "1 2", "1 3", "1 4", "4", "4 2 3", "3 2", "4", "1 3 2", "2 3", "1", "2", "1 3", "2 1 4", "4 3 1", "3 2 1", "3 4", "2 4", "2 3", "1 3", "3 2", "1", "3 4", "2", "4", "2 3 4", "3", "1", "1 4", "1", "3 2"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int n = 7;
    int k = 3;
    vector<string> moves = {"1", "1", "", "", "3 4", "3 4", "1 2"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int n = 8;
    int k = 3;
    vector<string> moves = {"1", "1", "1 2", "4", "1", "", "1 2", "1 5"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int n = 50;
    int k = 20;
    vector<string> moves = {"1", "1", "1", "1", "1", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2", "3 2"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 19, 20};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int n = 6;
    int k = 3;
    vector<string> moves = {"1", "1", "1", "2 3", "3", "1 2"};
    NimForK* pObj = new NimForK();
    clock_t start = clock();
    vector<int> result = pObj->winners(n, k, moves);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=13510&pm=10085
********************************************************************************
#include<algorithm> 
#include<sstream> 
#include<string> 
#include<vector> 
#include<cmath> 
using namespace std; 
 
#define FOR(i,a,b) for(int i = (a); i < (b); ++i) 
#define REP(i,n) FOR(i,0,n) 
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it) 
#define pb push_back 
#define all(x) (x).begin(),(x).end() 
#define CLEAR(x,with) memset(x,with,sizeof(x)) 
#define sz size() 
typedef long long ll; 
 
int n, k; 
vector<vector<int> > m; 
double cache[51][21][21]; 
 
struct NimForK  
{ 
  double getAverage(const vector<int>& take, int here, int remaining, int whoWins) 
  { 
    double ret = 0; 
    REP(i,take.sz) 
      ret += go((here+1)%k, remaining-take[i], whoWins); 
    return ret / take.sz; 
  } 
  double go(int here, int remaining, int whoWins) 
  { 
    if(remaining == 0) return (whoWins == (here+k-1)%k) ? 1.0 : 0.0; 
    double& ret = cache[remaining][here][whoWins]; 
    if(ret >= 0.0) return ret; 
    ret = 0.0; 
    vector<int> winningMove, possibleMove, elseMove; 
    REP(i,m[remaining].sz) 
    { 
      int take = m[remaining][i]; 
      if(take <= remaining) 
      { 
        double p = go((here+1)%k, remaining-take, here); 
        if(p == 1.0) 
          winningMove.pb(take); 
        else if(p > 0.0) 
          possibleMove.pb(take); 
        else  
          elseMove.pb(take); 
      } 
    } 
    if(winningMove.sz > 0) 
      ret = getAverage(winningMove, here, remaining, whoWins); 
    else if(possibleMove.sz > 0) 
      ret = getAverage(possibleMove, here, remaining, whoWins); 
    else if(elseMove.sz > 0) 
      ret = getAverage(elseMove, here, remaining, whoWins); 
    else 
      ret = 0; // nobody wins 
    return ret; 
  } 
  vector <int> winners(int n, int k, vector <string> moves)  
  { 
    REP(i,51) REP(j,21) REP(k,21) cache[i][j][k] = -1; 
    ::n = n; ::k = k; 
    m.resize(moves.sz+1); 
    REP(i,moves.sz) 
    { 
      istringstream inp(moves[i]); 
      int x; 
      while(inp >> x) m[i+1].pb(x); 
    } 
 
    vector<int> ret; 
    REP(i,k) 
      if(go(0, n, i) > 0.0) 
        ret.pb(i+1); 
    return ret; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/