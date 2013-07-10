/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7250
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

class LightsCube {
public:
    vector<int> count(int N, vector<string> lights);
};

vector<int> LightsCube::count(int N, vector<string> lights) {
    vector<int> ret;
    return ret;
}


int test0() {
    int N = 2;
    vector<string> lights = {"0 0 0", "0 0 1", "0 1 0", "0 1 1", "1 0 0", "1 0 1", "1 1 0", "1 1 1"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 3;
    vector<string> lights = {"1 1 1"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 4;
    vector<string> lights = {"0 0 0", "3 3 3"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 32};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 5;
    vector<string> lights = {"0 2 4", "2 0 0", "3 4 4", "4 1 2"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 28, 32, 27};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 3;
    vector<string> lights = {"1 1 1", "0 1 1", "2 1 1", "1 0 1", "1 2 1", "1 1 0", "1 1 2"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 9, 9, 3, 3, 1, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 1;
    vector<string> lights = {"0 0 0"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 2;
    vector<string> lights = {"1 1 0", "0 0 1"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 3;
    vector<string> lights = {"0 2 0", "2 2 0", "0 0 1", "0 2 1", "1 0 1", "2 2 2", "1 1 2", "0 1 1"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 3, 3, 6, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 4;
    vector<string> lights = {"1 3 0", "3 2 1"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {40, 24};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 5;
    vector<string> lights = {"3 4 0", "1 4 2", "1 3 0", "2 0 0", "1 0 3", "3 2 1", "4 4 2", "2 2 1", "2 4 0", "2 2 0", "4 1 3", "1 3 2", "1 0 4", "1 1 0", "4 2 2", "2 0 2", "0 1 3", "3 1 2", "3 1 0", "0 4 4", "2 3 3", "3 4 3", "2 3 4", "2 4 1", "1 2 1", "4 3 4", "4 3 3", "4 0 0", "3 3 0", "0 2 4", "1 2 4", "3 0 3", "4 1 2", "3 3 4", "2 4 3"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6, 9, 9, 8, 10, 5, 4, 1, 1, 7, 7, 5, 4, 1, 3, 4, 1, 2, 4, 3, 2, 4, 1, 2, 3, 1, 2, 2, 1, 2, 2, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 6;
    vector<string> lights = {"3 1 3", "1 3 1", "2 5 5", "4 2 4", "0 3 2", "4 4 0", "0 2 4", "5 3 3", "5 5 5", "1 5 3", "2 5 4", "2 2 0", "5 1 3", "2 3 0", "5 2 0", "0 1 4", "3 1 5", "5 5 4", "1 3 2", "1 3 5", "2 3 4", "3 3 3", "2 1 2", "5 0 2", "0 1 1", "0 2 0", "5 1 0", "5 4 0", "3 0 3"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 14, 6, 12, 6, 12, 7, 12, 4, 12, 4, 11, 7, 4, 5, 10, 9, 6, 6, 7, 4, 4, 7, 4, 9, 4, 6, 4, 8};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 7;
    vector<string> lights = {"1 2 3", "4 4 2", "0 1 6", "4 2 6", "2 4 5", "1 1 3", "3 3 3", "3 5 2", "0 2 4", "1 0 4", "3 5 4", "5 3 1", "0 0 0", "3 0 4", "0 3 5", "2 3 5", "2 4 0", "6 0 2", "0 4 6", "5 4 5", "6 3 2", "1 5 2", "3 4 5", "5 2 6", "6 1 2", "1 1 2", "1 4 3", "5 5 6", "6 2 6", "1 2 0", "4 4 1", "2 5 6", "6 3 1", "2 6 4", "2 4 1", "5 6 5", "3 0 2", "0 0 4", "2 2 0", "0 2 3", "2 1 3"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 15, 10, 14, 6, 4, 15, 11, 6, 4, 12, 18, 8, 13, 7, 6, 12, 10, 4, 12, 10, 14, 2, 7, 8, 6, 4, 6, 7, 9, 7, 6, 10, 6, 7, 7, 10, 3, 8, 4, 5};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 8;
    vector<string> lights = {"0 0 7", "5 1 4", "5 0 0", "6 1 4", "0 6 6"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 132, 108, 86, 137};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 9;
    vector<string> lights = {"6 3 4", "2 6 1"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {485, 244};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 10;
    vector<string> lights = {"5 0 1", "9 5 0", "1 0 6", "6 9 7", "0 9 3", "8 6 0", "8 2 9", "3 3 1", "5 4 3", "0 2 6", "5 9 5", "5 8 0", "0 7 8", "7 5 9", "7 1 7", "8 5 9", "5 5 3", "2 0 9", "8 4 6", "9 1 2", "5 1 7", "8 1 7", "4 3 0", "3 2 3", "8 7 0", "6 8 2", "1 5 9", "9 9 8", "1 2 6", "8 2 2", "9 4 2", "6 8 8", "2 9 1", "8 3 6", "0 9 0", "2 8 0", "8 0 1", "0 3 7", "9 5 9", "0 2 5", "7 6 9", "6 4 0", "9 6 5", "5 9 2", "8 9 6", "2 0 2", "6 9 6", "5 7 7", "7 2 6", "6 5 3"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 13, 27, 18, 40, 9, 28, 51, 37, 10, 40, 18, 49, 18, 23, 11, 33, 23, 21, 19, 32, 16, 7, 30, 17, 36, 24, 11, 21, 15, 16, 14, 19, 16, 10, 11, 15, 15, 8, 15, 7, 12, 21, 5, 19, 23, 4, 26, 6, 11};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 11;
    vector<string> lights = {"8 9 2", "8 2 1", "2 1 1", "10 8 5", "4 4 9", "6 7 3", "9 4 4", "6 2 10", "5 1 6", "10 1 5", "1 6 6", "10 5 5", "5 6 9", "2 0 10", "0 2 2", "1 0 1", "5 10 4", "10 9 4", "7 5 3", "1 10 1", "9 4 0", "6 7 6", "8 4 4", "7 1 10", "7 7 0"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {62, 75, 96, 58, 72, 54, 24, 58, 94, 46, 145, 37, 100, 40, 45, 8, 56, 6, 43, 62, 20, 47, 28, 18, 37};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 12;
    vector<string> lights = {"4 7 6", "8 0 0", "3 2 3", "7 7 2", "7 5 1", "10 11 5", "4 9 7", "6 1 0", "10 1 1", "9 7 11", "11 3 11", "9 0 3", "10 2 0"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {264, 18, 303, 236, 105, 124, 216, 44, 53, 146, 126, 80, 13};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 13;
    vector<string> lights = {"3 10 0", "2 5 12", "5 10 9", "4 9 3", "9 10 11", "10 2 9", "2 5 9", "5 12 12", "3 7 0", "6 5 5", "1 2 5", "5 4 12", "10 6 6", "4 10 10", "3 8 10", "4 11 1", "11 1 12", "3 4 7", "3 7 7"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {46, 74, 141, 218, 164, 227, 95, 36, 150, 213, 150, 82, 233, 33, 58, 79, 53, 45, 100};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 14;
    vector<string> lights = {"11 1 1", "10 8 12", "13 3 2", "2 0 7", "10 8 11", "11 9 10", "13 0 5", "6 11 7", "1 3 9", "2 2 7", "8 6 9", "3 7 5", "8 8 1", "9 13 8", "10 10 12", "6 9 2", "6 5 8", "13 11 3", "7 6 7", "6 10 8", "9 9 3", "5 2 6", "4 11 9", "8 2 12", "9 3 4", "6 2 4", "3 12 8", "9 7 10", "11 9 0", "6 5 10", "4 7 2", "4 10 10", "11 3 6", "1 13 10", "0 9 4", "7 8 9", "5 8 13", "8 1 4", "12 2 6", "6 10 9", "0 8 9", "2 6 12", "5 1 1", "4 9 7", "12 12 13", "13 9 2", "10 7 4", "11 1 12", "4 10 1"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {61, 59, 55, 95, 26, 92, 34, 75, 106, 47, 48, 93, 91, 69, 33, 64, 39, 75, 57, 11, 53, 40, 46, 113, 58, 45, 64, 23, 55, 42, 92, 37, 67, 48, 80, 17, 47, 41, 16, 35, 48, 69, 88, 33, 43, 25, 60, 63, 66};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 15;
    vector<string> lights = {"13 11 2", "11 14 8", "10 3 4", "5 2 8", "3 4 3", "7 9 12", "4 1 13", "3 3 5", "9 12 12", "12 6 5", "3 9 11", "12 6 11"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {334, 280, 416, 264, 450, 209, 205, 167, 181, 189, 384, 296};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 16;
    vector<string> lights = {"12 14 1", "12 15 12", "6 4 5", "6 8 3", "14 10 12", "7 15 12", "12 9 10", "15 5 15", "14 10 8", "11 14 13", "9 13 9", "8 7 7", "11 5 2", "14 1 0", "8 3 12", "7 1 2", "4 15 12", "10 14 7", "9 14 1", "1 8 12", "5 14 2", "12 13 9", "7 11 7", "7 7 9", "2 14 5", "15 15 3", "9 5 11", "8 5 3", "12 6 10", "6 9 7", "11 6 15"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {118, 41, 321, 238, 114, 93, 85, 88, 155, 74, 89, 114, 224, 129, 330, 202, 170, 77, 85, 336, 148, 53, 85, 85, 131, 48, 45, 71, 157, 82, 108};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 17;
    vector<string> lights = {"2 15 9", "13 16 2", "8 15 12", "9 9 1", "9 0 16", "1 12 15", "12 4 2", "14 1 16", "16 8 16", "11 13 10", "6 10 3", "11 7 1", "5 13 5", "8 15 14", "15 13 0", "16 11 6", "2 12 1", "4 8 10", "2 10 12", "15 5 1", "12 9 4", "4 12 1", "4 12 7", "0 10 11", "5 2 4", "4 11 14", "1 9 11", "2 6 4", "5 14 0", "7 15 10", "15 4 5", "13 13 6", "5 1 2", "13 13 2", "13 13 9", "13 8 4", "13 11 3"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {135, 88, 106, 159, 334, 122, 239, 163, 227, 204, 136, 65, 134, 158, 60, 109, 124, 318, 58, 83, 89, 36, 93, 98, 289, 155, 74, 236, 45, 78, 193, 93, 137, 41, 157, 41, 36};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 18;
    vector<string> lights = {"6 6 11", "7 7 11", "7 15 16", "17 2 16", "15 7 17", "8 16 2", "12 13 9", "3 12 2", "4 0 17", "10 2 2", "5 15 14", "3 14 12", "6 0 17", "10 14 15", "12 0 10", "16 10 3", "16 0 10", "3 3 0", "17 10 7", "14 17 1", "17 3 4", "15 10 13", "0 14 15", "17 17 0", "13 4 7", "10 7 0", "5 13 0", "6 11 12", "17 17 3"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {643, 157, 135, 140, 160, 277, 388, 413, 186, 308, 79, 282, 91, 245, 210, 220, 103, 327, 128, 93, 138, 249, 128, 16, 199, 194, 95, 161, 67};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 19;
    vector<string> lights = {"15 4 15", "5 7 0", "9 10 7", "17 8 13", "1 2 14", "4 5 12", "0 14 0", "10 7 6", "3 9 9", "6 8 9", "13 17 4", "14 9 10", "10 5 7", "11 9 14", "0 13 15", "14 13 16", "0 12 15", "0 17 13", "17 10 2", "15 13 3", "14 8 18"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {524, 531, 375, 196, 439, 405, 293, 195, 353, 166, 440, 298, 554, 321, 176, 448, 151, 278, 387, 233, 96};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 20;
    vector<string> lights = {"2 18 4", "18 8 8", "9 4 9", "16 7 7", "8 0 17", "5 9 0", "9 13 9", "4 10 14", "11 6 16", "2 13 2", "7 11 14", "16 0 8", "6 18 3", "11 19 15", "13 14 13", "3 12 15", "0 16 5", "8 4 8", "13 15 2", "8 12 18", "17 4 1", "15 7 16", "14 10 9", "3 2 19", "8 5 12", "1 6 6", "11 19 17", "5 10 7", "17 14 7", "12 4 12", "11 4 13", "14 4 9", "17 4 9", "11 14 1", "4 19 13", "18 5 11", "11 1 15", "13 14 15", "1 12 5", "10 15 1", "5 4 1", "7 9 0"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {119, 190, 271, 158, 172, 115, 316, 324, 181, 147, 168, 189, 182, 167, 264, 252, 104, 153, 392, 198, 299, 355, 198, 259, 199, 322, 134, 218, 297, 103, 29, 121, 64, 118, 236, 82, 144, 205, 103, 65, 288, 99};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 21;
    vector<string> lights = {"4 12 10", "3 5 1", "18 20 4", "0 11 10", "14 3 11", "19 5 7", "2 11 12", "4 14 19", "16 15 7", "6 16 3", "8 11 14", "17 5 16", "4 20 4", "6 15 17", "12 17 16", "18 6 16", "19 0 7", "11 11 16", "14 8 4", "9 3 11", "8 10 19", "17 4 1", "13 9 13", "9 19 11", "0 20 16", "8 3 19", "7 1 20", "12 7 8", "18 17 11", "20 18 12", "18 2 6", "19 6 20", "7 2 16", "20 20 0", "13 11 13", "7 0 9", "4 6 6", "9 18 13", "19 18 7", "8 0 18", "3 6 8", "9 15 19", "8 7 4", "16 9 17", "3 3 11", "6 0 9", "2 6 1", "10 3 16"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {284, 303, 234, 226, 255, 216, 229, 222, 432, 537, 215, 235, 235, 181, 307, 97, 120, 132, 370, 206, 138, 275, 170, 232, 154, 184, 64, 213, 259, 105, 86, 144, 196, 79, 146, 106, 176, 136, 49, 54, 158, 123, 288, 195, 184, 83, 94, 134};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 22;
    vector<string> lights = {"8 2 6", "0 15 4", "16 15 20", "4 0 0", "14 16 14", "10 6 6", "12 1 21", "9 1 1", "6 19 13", "15 4 12", "21 4 0", "19 8 12", "1 17 2", "2 0 9"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {423, 575, 838, 227, 1617, 1081, 776, 273, 1395, 891, 603, 674, 574, 701};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 23;
    vector<string> lights = {"14 18 14", "3 8 6", "10 7 22", "5 6 11", "2 14 3", "15 10 14", "16 19 9", "20 12 19", "22 6 2", "5 14 0", "3 20 13", "4 16 20", "0 10 18", "0 6 0", "22 20 6", "4 12 5", "2 9 12", "5 19 7", "21 12 9", "19 15 20", "7 21 20", "19 10 8", "12 0 14", "18 2 0", "10 15 16", "12 13 7", "22 9 21", "19 11 5", "22 21 5", "1 3 14", "1 17 7", "15 10 0", "22 17 7", "13 19 21", "3 8 11", "20 2 22", "19 16 14", "19 19 21", "10 3 14", "0 9 16", "11 21 16", "7 10 14", "0 1 13", "17 21 8", "0 13 16", "21 21 7", "16 11 6"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {270, 507, 514, 380, 296, 579, 341, 208, 268, 275, 356, 340, 171, 284, 106, 191, 142, 439, 190, 162, 182, 290, 425, 372, 348, 478, 171, 235, 60, 297, 164, 346, 127, 200, 65, 312, 279, 184, 468, 70, 157, 264, 95, 174, 136, 68, 181};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 24;
    vector<string> lights = {"22 4 9", "17 8 9", "3 17 1", "21 17 20"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1214, 5942, 3585, 3083};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 25;
    vector<string> lights = {"23 17 9", "20 24 22", "19 18 5", "22 22 6", "9 5 14", "20 12 4", "12 5 16", "23 13 8", "16 4 3", "8 7 0", "6 10 2", "14 16 18", "0 22 23", "12 17 21", "16 6 10", "21 6 14", "1 21 0", "11 20 4", "0 22 7", "19 14 23", "22 17 12", "11 3 3", "0 4 9", "8 14 15", "17 0 7", "21 23 18", "9 11 20", "6 4 9", "16 6 24", "13 18 17", "3 8 9", "13 1 4", "23 16 8", "15 17 9", "15 21 22", "3 23 20", "12 15 2", "20 21 22", "24 24 20", "1 24 0", "5 10 22", "16 0 13", "20 1 5", "1 24 2", "6 4 12", "15 16 23", "24 14 14", "0 8 4", "1 17 17", "16 6 21"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {124, 73, 396, 311, 424, 512, 425, 187, 348, 254, 469, 349, 164, 313, 459, 650, 192, 739, 427, 365, 265, 264, 301, 658, 136, 291, 290, 249, 297, 337, 469, 152, 63, 494, 199, 370, 364, 173, 54, 36, 722, 227, 287, 62, 292, 79, 225, 256, 411, 421};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 26;
    vector<string> lights = {"9 15 13", "8 5 13", "18 17 17", "15 8 16", "1 25 13", "8 6 9"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3687, 1860, 4309, 3355, 1518, 2847};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 27;
    vector<string> lights = {"11 5 22", "15 0 23", "0 0 1", "21 6 24", "15 8 22", "19 10 22", "11 26 24"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3572, 758, 3283, 1831, 1883, 3699, 4657};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 28;
    vector<string> lights = {"11 8 20", "22 6 26", "7 13 6", "23 23 23", "25 16 2", "1 2 12", "6 23 3", "3 16 8", "1 10 4", "7 18 17", "9 1 14", "19 16 8", "21 4 25", "3 27 17", "26 3 22", "4 10 1", "16 22 21", "14 21 25", "18 15 19", "5 18 17", "10 5 27", "7 23 6", "7 25 7", "0 6 5", "1 14 25", "8 0 27", "17 20 10", "24 15 27", "14 20 21", "14 23 21", "0 7 24", "1 8 11", "27 9 13", "12 25 17", "24 27 12", "4 21 9", "24 26 18", "8 22 15", "24 19 6", "21 15 5", "27 12 16", "10 4 9", "11 22 17", "1 11 19", "6 11 13", "17 27 21", "7 4 6", "19 0 10", "0 13 27", "22 2 27"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {988, 465, 653, 534, 872, 380, 753, 426, 211, 464, 502, 806, 334, 517, 449, 457, 211, 644, 836, 390, 357, 210, 361, 207, 444, 261, 773, 353, 207, 169, 339, 279, 716, 284, 449, 327, 338, 246, 434, 564, 333, 849, 141, 323, 466, 185, 343, 949, 52, 101};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 29;
    vector<string> lights = {"20 2 8", "23 4 17", "7 7 12", "6 22 19", "8 10 25"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5049, 4193, 4645, 7396, 3106};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 30;
    vector<string> lights = {"22 21 5", "25 11 25", "13 29 4", "21 1 0", "17 28 0", "29 0 6", "17 25 4", "12 11 17", "29 11 3", "9 12 26", "12 5 14", "17 2 27", "17 15 29", "20 21 23", "4 18 24", "13 26 5", "14 22 21", "18 1 1", "20 18 1", "19 26 25", "19 6 12", "12 11 24", "8 9 4", "12 19 7", "3 15 26", "28 11 8", "18 8 5", "24 27 20", "21 19 19", "5 16 9", "7 27 28", "22 24 2", "18 21 9", "27 15 11", "6 18 16", "4 20 24", "21 17 8", "21 0 0", "13 3 16", "6 2 16", "23 15 0", "15 23 1", "1 16 15", "13 25 29", "22 9 25", "20 23 26", "22 7 14", "27 28 10"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {486, 1059, 522, 234, 132, 449, 246, 906, 339, 679, 529, 957, 419, 351, 389, 628, 903, 391, 303, 371, 684, 416, 1488, 806, 603, 396, 631, 809, 724, 1284, 656, 287, 471, 504, 797, 453, 346, 41, 492, 1222, 264, 340, 592, 258, 502, 379, 713, 549};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 31;
    vector<string> lights = {"25 20 28", "17 26 28", "16 17 7", "24 22 18", "30 1 20", "1 21 16", "2 27 7", "24 18 11", "27 0 26", "10 22 29", "29 11 15", "5 13 19", "5 21 13", "23 18 13", "9 4 17", "11 0 22", "22 30 28", "24 3 22", "5 25 24", "6 12 4", "11 20 14", "21 6 27", "22 18 13", "22 1 7", "5 26 26", "23 3 8", "10 17 0", "17 29 24", "13 5 30", "13 15 30", "22 30 5", "1 23 11", "25 13 4", "16 19 12", "16 16 28", "19 25 10", "7 4 18", "29 21 0", "30 24 20", "25 0 21", "24 16 8", "2 22 13", "30 8 21", "24 26 6", "23 29 15", "4 6 27", "12 12 17", "11 0 11", "15 17 16", "13 10 14"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {896, 373, 993, 775, 224, 459, 928, 327, 275, 606, 732, 1139, 706, 185, 465, 516, 359, 517, 743, 1759, 736, 923, 277, 928, 464, 800, 860, 558, 429, 437, 468, 341, 947, 241, 524, 759, 735, 436, 477, 173, 321, 99, 399, 516, 535, 879, 625, 787, 476, 664};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 32;
    vector<string> lights = {"9 7 11", "23 24 24", "30 8 8", "2 16 1", "15 21 3", "14 28 19", "26 16 27", "9 3 19", "24 31 21", "0 7 14", "23 20 3", "17 2 17", "22 0 7", "19 25 25", "19 5 28", "31 18 21", "8 8 18", "6 3 17", "10 5 20", "21 26 30", "7 30 20", "15 19 27", "28 29 26", "18 13 6", "17 24 28", "23 1 31", "0 31 13", "15 18 3", "22 25 17", "19 27 7", "9 29 4", "24 21 1", "0 11 3", "5 14 25", "24 10 25", "8 19 30", "8 29 22", "19 21 18", "2 15 27", "8 2 6", "22 30 11"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1269, 481, 1678, 916, 668, 849, 864, 450, 335, 643, 1032, 1227, 1027, 339, 904, 851, 845, 661, 545, 436, 778, 849, 464, 1371, 283, 554, 758, 721, 739, 910, 1135, 472, 626, 1068, 1286, 706, 605, 995, 770, 981, 677};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 33;
    vector<string> lights = {"30 8 14", "11 9 19", "29 20 24", "29 18 16", "2 26 31"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5143, 14491, 4628, 6453, 5222};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 34;
    vector<string> lights = {"31 0 5", "24 26 32", "10 11 10", "29 24 24", "19 26 12", "27 2 12", "17 3 17", "16 12 32", "21 21 20", "31 5 15", "25 12 3", "5 31 32", "27 5 1", "9 7 21", "33 15 14", "14 0 25", "15 23 6", "22 30 12", "6 25 22", "10 17 4", "21 18 31", "2 31 19", "10 28 0", "5 24 31", "33 29 25", "32 24 21", "17 31 6", "21 10 12", "23 2 2", "18 29 1", "17 10 19", "14 9 3", "9 27 33", "12 21 26", "25 11 30", "9 21 10", "15 32 13"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {327, 1093, 2250, 1160, 988, 818, 1166, 1201, 1479, 1008, 1598, 547, 420, 2468, 1095, 1078, 1058, 1213, 1419, 1139, 702, 1126, 918, 831, 592, 479, 575, 993, 458, 757, 1057, 1627, 447, 1272, 1769, 1431, 745};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 35;
    vector<string> lights = {"6 7 0", "29 19 12"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13582, 29293};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 36;
    vector<string> lights = {"30 8 35", "18 4 28", "35 30 11", "15 24 15", "16 9 23", "3 11 14", "2 17 7", "23 30 4", "11 6 16", "9 30 28", "28 7 0", "5 15 33", "11 15 30", "27 29 14", "3 1 12", "32 32 13", "17 9 10", "29 22 17"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2941, 2576, 1091, 4504, 2015, 1976, 2969, 3113, 1855, 4536, 2912, 1975, 2238, 2011, 1462, 1179, 3329, 3974};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 37;
    vector<string> lights = {"1 15 32", "8 35 14", "9 33 20", "19 14 8", "15 10 23", "15 35 21", "33 16 26", "7 0 12", "13 30 35", "19 35 2", "19 22 32", "0 8 31", "13 25 32", "11 3 36", "1 19 16"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1638, 2377, 1888, 9734, 4703, 2882, 7436, 3354, 1724, 4187, 2912, 1152, 1389, 1815, 3462};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 38;
    vector<string> lights = {"19 14 14", "32 37 0", "24 32 12", "25 28 0", "10 16 0", "26 9 25", "19 26 30", "23 35 13"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10755, 882, 5092, 3327, 5993, 13079, 12593, 3151};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 39;
    vector<string> lights = {"24 16 5", "8 37 25", "8 29 8", "31 36 26", "28 37 38", "36 12 11", "32 21 19", "21 9 0", "30 35 30", "14 28 16", "10 2 28", "27 30 11", "35 36 22", "8 10 17", "24 30 7", "16 24 33", "5 12 3", "29 13 16", "11 25 23", "1 35 0", "0 17 25", "10 14 15", "37 7 19", "12 0 2", "25 12 2", "7 13 2", "15 4 7", "20 9 33", "38 33 33", "27 29 24", "10 11 0", "36 33 19", "36 26 30", "24 29 29", "23 30 16", "36 4 19", "20 25 26"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2295, 2753, 2887, 651, 805, 2097, 1971, 764, 499, 1834, 3143, 1269, 377, 2424, 2700, 3018, 1499, 2223, 1809, 930, 2341, 1619, 1164, 684, 983, 524, 1975, 4217, 506, 806, 465, 1005, 1799, 1074, 1302, 1705, 1202};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 40;
    vector<string> lights = {"19 35 9", "36 5 16", "24 13 15"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23120, 9665, 31215};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 40;
    vector<string> lights = {"15 7 38", "23 1 15", "4 8 26", "11 36 7", "38 7 17", "37 39 27", "17 5 19", "27 29 2", "19 5 22", "0 37 2", "34 22 12", "17 39 10", "23 33 39", "5 39 37", "13 25 21", "37 23 16", "11 34 13", "7 33 34", "25 11 4", "37 31 18", "10 22 15", "30 1 30", "8 13 32", "6 39 4", "22 12 32", "6 2 9", "5 7 2", "0 21 14", "32 24 6", "18 26 13", "22 36 25", "4 6 6", "20 14 32", "2 22 0", "27 30 21", "8 13 6", "37 26 8", "27 12 20"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1850, 1549, 2522, 1305, 2417, 1544, 1487, 2083, 1247, 545, 1511, 998, 2378, 687, 2770, 1459, 1601, 2854, 3323, 1225, 1629, 2247, 2542, 483, 2893, 1215, 915, 1393, 1086, 2018, 1779, 652, 1166, 1018, 2223, 1784, 1261, 2341};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 40;
    vector<string> lights = {"3 31 30", "20 24 29", "7 18 13", "18 4 8", "7 23 9", "17 24 16", "21 12 26", "14 33 19", "34 38 18", "34 35 25", "23 23 5", "30 12 34", "36 37 1"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5649, 5363, 5273, 7739, 3995, 2882, 7687, 4252, 2753, 4032, 5800, 6632, 1943};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 40;
    vector<string> lights = {"22 29 13", "5 8 9", "31 32 8", "38 14 2", "24 8 23", "3 33 5", "15 35 15", "2 25 1", "4 36 2", "16 7 2", "4 28 22", "2 32 4", "9 9 23", "39 17 31", "27 19 17", "18 17 36", "4 34 26", "11 23 5", "26 31 0", "3 0 16", "0 5 16", "9 29 17", "13 21 10", "33 3 14", "11 29 27", "26 4 14", "0 39 10", "5 35 1", "28 11 10", "1 18 10", "22 15 7", "12 4 20", "35 11 36", "9 12 16", "33 5 31", "7 32 5", "25 19 12"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2104, 1667, 4501, 1776, 2693, 300, 2188, 600, 311, 1935, 1857, 219, 3373, 3258, 2811, 5487, 1751, 1325, 1328, 845, 675, 1201, 1290, 1896, 4007, 1355, 418, 258, 1282, 1135, 1359, 1698, 1980, 1251, 2030, 841, 995};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 40;
    vector<string> lights = {"27 38 9", "13 13 20", "8 30 25", "25 19 0", "20 0 34", "12 33 30", "20 32 39", "14 9 34", "35 5 8", "29 33 1", "21 2 31", "30 38 8", "2 9 13", "15 38 33", "32 33 0", "18 32 34", "22 19 23", "34 1 19", "29 32 9", "8 28 33", "26 8 35", "1 15 19", "32 10 20", "16 2 3", "32 8 37", "18 10 32", "23 29 2", "19 11 29", "36 31 20", "37 25 30", "4 18 23", "24 21 27", "2 7 24", "34 10 27", "4 19 15", "31 26 28", "18 36 15", "30 14 4", "9 36 7"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {686, 3011, 2533, 1832, 717, 1021, 1083, 2232, 2390, 375, 1125, 649, 2269, 1188, 736, 1262, 2231, 1243, 1742, 2063, 1196, 630, 2021, 2994, 1409, 634, 1570, 895, 2390, 1842, 1360, 1321, 1863, 1403, 2752, 1913, 2228, 2087, 3104};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 40;
    vector<string> lights = {"13 25 34", "0 0 15", "29 33 20", "37 0 16", "30 17 4", "24 6 22", "11 22 23", "23 25 12", "31 29 25", "0 1 29", "35 20 1", "30 36 6", "39 17 30", "19 33 18", "26 0 18", "22 19 33", "23 21 5", "14 3 10", "22 26 25", "9 35 5", "18 0 30", "37 8 17", "15 9 27", "31 17 38", "25 39 15", "5 3 2", "30 29 38", "24 36 29", "31 22 25", "21 27 18", "21 37 14", "23 10 13", "2 13 28", "7 10 26", "38 2 31", "15 39 9", "19 28 21", "12 36 38", "32 12 19", "34 2 36", "38 18 22", "39 11 7", "31 37 38", "23 26 10", "29 10 22", "8 10 8", "10 11 0", "13 17 29", "25 39 10", "12 15 7"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2416, 878, 1451, 770, 1676, 1293, 3296, 1232, 1469, 931, 1190, 1916, 1023, 1537, 903, 1688, 1572, 1804, 882, 3366, 1262, 788, 1821, 1053, 415, 834, 1148, 1360, 1152, 688, 396, 1879, 2056, 1469, 757, 800, 462, 1975, 956, 970, 794, 1028, 838, 838, 958, 1754, 1021, 1191, 296, 1748};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 40;
    vector<string> lights = {"9 26 14", "30 19 26", "35 35 19", "22 18 9", "16 12 30", "32 6 9", "26 25 27", "27 37 32", "26 29 36", "25 36 35", "13 9 3", "31 9 37", "32 11 16", "25 0 32", "12 26 27", "14 31 4", "14 13 30", "12 25 12", "27 21 2", "32 37 37", "11 31 19", "29 18 36", "25 36 24", "22 9 14", "5 5 5", "20 26 21", "28 35 22", "30 20 1", "13 18 23", "21 5 25", "1 7 11", "2 9 24", "38 27 30", "3 2 2", "12 35 1", "5 30 7", "28 39 6", "28 16 36", "3 26 39", "23 3 10", "27 9 17", "38 11 13", "8 9 39", "18 17 32", "14 9 9", "9 11 23", "23 27 19"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1719, 1901, 2142, 1937, 866, 1878, 940, 866, 1264, 844, 1540, 1844, 1388, 1417, 2670, 1579, 983, 864, 1144, 583, 2118, 784, 1144, 962, 1199, 868, 628, 1716, 1328, 1721, 1201, 1928, 1320, 442, 977, 2192, 1815, 669, 2130, 1338, 790, 1691, 1653, 1187, 1410, 1370, 1050};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 40;
    vector<string> lights = {"4 15 18", "30 36 38", "39 33 12", "27 21 16", "21 2 11", "32 16 16", "38 2 2", "29 29 25", "1 0 5", "29 7 1", "6 15 39", "13 14 6", "14 21 13", "17 5 0", "1 30 28", "35 19 35", "16 6 1", "35 16 33", "29 19 20", "6 6 5", "15 25 29", "28 39 21", "35 2 2", "32 25 31", "20 18 0", "3 22 26", "3 21 17", "18 1 20", "3 4 7", "7 1 37", "21 16 38", "1 8 30", "35 31 25", "35 16 14", "3 3 25", "24 10 6", "28 14 11", "16 10 37", "38 7 13", "39 35 12", "25 36 36"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2045, 936, 2014, 2206, 1508, 779, 390, 1527, 345, 859, 1280, 2439, 3892, 274, 3214, 846, 543, 2817, 1604, 1030, 3598, 2272, 451, 1203, 2501, 1207, 2755, 2922, 778, 1076, 1664, 1099, 1363, 1508, 1085, 909, 1138, 1817, 1516, 944, 1646};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 40;
    vector<string> lights = {"37 35 39", "27 36 12", "16 17 15", "8 36 4", "29 27 16", "32 38 16", "3 26 4", "37 25 18", "27 1 34", "4 27 20", "26 15 4", "6 10 20", "9 27 32", "3 15 12", "18 27 8", "1 32 9", "27 14 35", "4 7 20", "16 30 32", "26 18 29", "16 28 7", "26 26 2", "1 17 3", "28 17 35", "18 12 7", "17 17 12", "28 25 20", "3 27 14", "34 18 21", "11 18 11", "37 16 24", "28 35 8", "39 0 37", "18 33 39", "3 7 29", "32 9 11", "33 28 18", "0 24 12", "27 7 21", "5 23 24", "1 27 1", "21 10 28", "30 33 4", "31 28 6", "36 37 30", "32 3 14", "34 36 7"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {967, 1272, 1881, 1583, 864, 930, 752, 983, 1732, 1785, 2161, 1228, 3577, 1124, 1264, 704, 1364, 1938, 2709, 1720, 1015, 923, 1363, 1462, 2541, 674, 1419, 742, 994, 1200, 1272, 650, 660, 1160, 2927, 1995, 712, 247, 2038, 1404, 224, 2166, 611, 1012, 1512, 1873, 666};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 40;
    vector<string> lights = {"36 14 32", "27 28 25", "34 7 21", "31 38 26", "16 11 30", "13 25 5"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4540, 10775, 8883, 6879, 15160, 17763};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 40;
    vector<string> lights = {"32 23 39", "35 29 26", "38 33 0", "32 35 36", "23 1 2", "28 7 4", "2 38 7", "1 6 17", "25 0 36", "5 6 10", "36 29 25", "15 19 15", "39 7 9", "2 6 5", "39 7 35", "9 21 3", "32 21 11", "4 30 2", "6 9 15", "35 14 31", "16 10 6", "17 4 26", "11 16 12", "14 0 4", "14 8 33", "25 20 4", "7 38 15", "21 12 34", "27 8 23", "7 4 32", "26 3 1", "2 2 37", "1 34 23", "13 35 21", "5 23 34", "25 1 18", "1 9 24", "4 3 30", "5 0 30", "35 1 18", "1 15 8", "34 19 0", "25 16 38", "30 6 15", "29 13 22", "36 33 24"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1199, 2020, 1746, 2428, 597, 1235, 1073, 813, 1078, 795, 478, 3453, 1065, 779, 926, 1586, 3014, 1755, 1049, 1506, 1647, 1653, 1047, 694, 1502, 2329, 1451, 1593, 1281, 834, 330, 533, 1838, 3950, 3848, 758, 1115, 353, 224, 889, 988, 803, 1117, 1019, 1785, 1824};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 40;
    vector<string> lights = {"17 34 18", "7 21 4", "30 29 23", "32 19 12", "19 29 8", "32 12 22", "6 19 10", "37 37 10", "21 24 23", "28 35 20", "21 11 39", "23 6 14", "19 3 7", "37 23 15", "32 31 34", "0 19 17", "23 0 18", "8 36 37", "1 9 0", "38 34 6", "35 2 8", "20 11 1", "6 3 20", "22 0 14", "15 30 10", "11 22 18", "16 12 6", "27 22 8", "6 23 17", "12 31 22"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1894, 2350, 1770, 2157, 1981, 4490, 1438, 1221, 2804, 1771, 5494, 2086, 1429, 1425, 3794, 1853, 1219, 3298, 1202, 1103, 1955, 1350, 4227, 369, 2207, 2043, 1515, 1869, 1630, 2056};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 40;
    vector<string> lights = {"6 5 3", "25 35 30", "23 0 39", "8 0 9", "13 7 2", "9 0 31", "28 7 10", "39 7 16", "10 7 10", "13 11 11", "25 18 34", "1 7 0", "8 31 2", "13 10 32", "38 26 5", "9 29 29", "38 38 29", "16 1 11", "34 18 23", "0 30 29", "30 36 22", "8 20 5", "23 29 27", "31 9 29"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {728, 2183, 1244, 832, 1326, 1985, 4674, 1799, 1494, 3433, 3632, 406, 4831, 4347, 4154, 5085, 1497, 1388, 3277, 2559, 3465, 3292, 3179, 3190};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 40;
    vector<string> lights = {"12 18 19", "5 34 22", "6 4 3", "14 35 33", "33 14 3", "39 16 11", "25 20 9", "21 22 18", "4 18 8", "28 29 4", "9 36 27", "27 28 20", "37 5 29"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9895, 3859, 4770, 5631, 3624, 2297, 3461, 4795, 4208, 4979, 1898, 6938, 7645};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 40;
    vector<string> lights = {"29 13 9", "4 10 34", "11 26 16", "2 33 22", "27 31 14", "36 20 8"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14657, 12834, 12364, 5902, 12678, 5565};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 40;
    vector<string> lights = {"18 3 11", "39 35 13", "34 13 3", "32 35 0", "36 5 28", "24 8 13", "15 2 8", "32 18 37", "4 1 35", "7 36 14", "10 9 23", "22 39 8", "25 12 21", "6 26 11", "39 17 5", "10 27 17", "14 27 12", "24 32 31", "4 13 14", "4 9 17", "24 9 31", "14 1 24", "39 13 38", "5 31 31", "1 15 33", "14 15 21", "32 5 30", "35 1 5", "4 21 7", "9 20 27", "33 12 34", "13 31 26", "9 25 11", "13 18 19", "13 25 24", "28 18 17", "2 30 29", "35 32 14", "22 33 2", "19 19 34", "6 23 36", "9 16 20", "19 36 14", "8 4 15", "20 28 25", "34 30 17", "25 9 13"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1151, 1014, 1809, 1166, 1601, 1876, 1943, 2048, 1543, 2150, 1438, 988, 1620, 862, 1216, 942, 1744, 3584, 1319, 957, 2023, 1300, 610, 1631, 1291, 926, 1170, 1347, 2033, 1047, 744, 1523, 545, 573, 549, 2552, 830, 1209, 1699, 1801, 1026, 634, 1179, 1236, 1354, 1686, 511};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 3;
    vector<string> lights = {"0 0 0", "1 0 0", "0 1 0", "0 0 1", "2 2 2"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 9, 5, 2, 10};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 40;
    vector<string> lights = {"0 0 0", "39 39 39"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32000, 32000};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 40;
    vector<string> lights = {"0 0 0", "0 0 1", "0 1 0", "0 1 1", "1 0 0", "1 0 1", "1 1 0", "1 1 1"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 39, 39, 1521, 39, 1521, 1521, 59319};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 40;
    vector<string> lights = {"29 13 9", "4 10 34", "11 26 16", "2 33 22", "27 31 14", "36 20 8"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14657, 12834, 12364, 5902, 12678, 5565};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 40;
    vector<string> lights = {"0 2 23", "0 32 33", "23 32 22", "21 22 22"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11564, 7619, 15656, 29161};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 40;
    vector<string> lights = {"1 1 1", "37 33 32", "3 4 5", "39 39 39"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {964, 33015, 29029, 992};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 12;
    vector<string> lights = {"4 7 6", "8 0 0", "3 2 3", "7 7 2", "7 5 1", "10 11 5", "4 9 7", "6 1 0", "10 1 1", "9 7 11", "11 3 11", "9 0 3", "10 2 0"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {264, 18, 303, 236, 105, 124, 216, 44, 53, 146, 126, 80, 13};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 40;
    vector<string> lights = {"29 29 29", "13 13 13"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28930, 35070};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 40;
    vector<string> lights = {"0 0 0", "0 0 1", "0 0 2", "0 0 3", "0 0 4", "0 0 5"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1600, 1600, 1600, 1600, 1600, 56000};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 40;
    vector<string> lights = {"0 0 0"};
    LightsCube* pObj = new LightsCube();
    clock_t start = clock();
    vector<int> result = pObj->count(N, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {64000};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=10008&pm=7250
********************************************************************************
#include <algorithm>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
 
typedef vector<int> VI;
typedef vector<VI> VVI;
 
vector<string> Tokenize(string s, string ch) {
  vector<string> ret;
  for (int p = 0, p2; p < s.size(); p = p2+1) {
    p2 = s.find_first_of(ch, p);
    if (p2 == -1) p2 = s.size();
    if (p2-p > 0) ret.push_back(s.substr(p, p2-p));
  }
  return ret;
}
 
vector<int> TokenizeInt(string s, string ch) {
  vector<int> ret;
  vector<string> p = Tokenize(s, ch);
  for( int i = 0; i < p.size(); i++ )
    ret.push_back(atoi(p[i].c_str()));
  return ret;
}
 
vector<vector<int> > TokenizeMatrix(vector<string> s, string ch) {
  vector<vector<int> > ret;
  for( int i = 0; i < s.size(); i++ )
    ret.push_back( TokenizeInt(s[i], ch) );
  return ret;
}
 
class LightsCube {
public:
vector <int> count(int N, vector <string> lights) {
  int i, j, k, x, y, z;
  vector <int> ret(lights.size());
 
  VVI c = TokenizeMatrix(lights, " ");
  for (x = 0; x < N; x++)
  for (y = 0; y < N; y++)
  for (z = 0; z < N; z++) {
    int d = 1000, best;
    for (i = 0; i < c.size(); i++) {
      int curd = abs(x-c[i][0]) + abs(y-c[i][1]) + abs(z-c[i][2]);
      if (curd < d) {
        d = curd;
        best = i;
      }
    }
    ret[best]++;
  }
 
  return ret;
}
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/