/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1939
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

class UndergroundVault {
public:
    vector<int> sealOrder(vector<string> rooms);
};

vector<int> UndergroundVault::sealOrder(vector<string> rooms) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> rooms = {"1", "2", ""};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> rooms = {"1", "2", "3", "1"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> rooms = {"3,5", "2", "8", "", "", "6,7", "", "1,8", "4"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3, 4, 6, 8, 7, 5, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> rooms = {"1,2,3", "4,5,6", "5,6,8", "8", "5,6", "7,9", "11", "3", "11", "7,10", "4", ""};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 6, 7, 10, 9, 5, 11, 8, 2, 0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> rooms = {"3", "2", "0", "1"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3, 0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> rooms = {"1,19", "13", "4,7,25,38", "1", "39", "22", "17", "16", "9", "12", "28", "34", "18", "31", "37", "26,34", "8,21,38", "35", "29", "27", "32", "15,24", "10", "20", "7", "15", "3,35", "21", "8", "8,40", "2,36", "4", "36", "6", "14", "30", "5", "35", "23", "33", "11"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 11, 16, 7, 17, 6, 24, 25, 26, 31, 13, 1, 32, 20, 23, 33, 38, 39, 4, 2, 40, 29, 18, 12, 9, 8, 28, 10, 22, 5, 36, 30, 35, 37, 14, 34, 15, 21, 27, 19, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> rooms = {"18", "4", "27", "1", "30", "19", "15", "8", "20", "7", "28", "6", "17", "35", "16", "5", "3", "9", "29", "33", "11", "22", "10", "14", "21", "32", "25", "12", "31", "23", "13", "34", "2", "", "26", "24"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33, 19, 5, 15, 6, 11, 20, 8, 7, 9, 17, 12, 27, 2, 32, 25, 26, 34, 31, 28, 10, 22, 21, 24, 35, 13, 30, 4, 1, 3, 16, 14, 23, 29, 18, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> rooms = {"9,19", "18", "11,28", "", "1,21,25", "16", "4,29", "26", "1,22", "1", "14,17", "6", "19,20", "10", "3,5,11,25,29", "27", "17", "24", "11,15,17,23,25", "2", "3,23,27", "9", "3,5,13,19,23,29", "11", "9,13,29", "5", "8,21", "12", "21,29", "7"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 6, 9, 11, 14, 10, 13, 16, 5, 20, 12, 21, 22, 23, 24, 17, 25, 27, 15, 18, 1, 8, 26, 7, 29, 28, 2, 19, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> rooms = {"40", "13", "", "21", "15", "3", "8", "6", "35", "38", "16", "18,34", "4", "23,37", "31", "17", "2,33", "39", "20", "7", "14", "9", "32", "11", "33", "34", "22,23", "37", "26", "25", "1", "19", "27", "10,38", "9,12", "5", "24", "36", "29", "5,28", "30"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 9, 16, 10, 21, 3, 5, 25, 27, 29, 32, 22, 26, 28, 35, 8, 6, 7, 19, 31, 14, 20, 18, 38, 33, 24, 36, 37, 39, 17, 15, 4, 12, 34, 11, 23, 13, 1, 30, 40, 0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> rooms = {"28", "24,30", "14", "12,36,39", "11", "29,38", "20", "16,26,36", "15", "24,34,35", "6", "2,20,22,24,41", "22", "12", "13", "10,12,17", "4", "37", "21", "7,10,22,26,28", "19", "14,31", "38", "10,34", "5", "2,12,23,36", "2", "36,40", "25", "9,12,20", "", "6,10", "8", "1,6,10,26,34", "18", "18,32", "33", "18,26", "27", "18,22,24", "3", "0,40"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 10, 12, 13, 14, 22, 23, 26, 27, 30, 31, 21, 18, 34, 37, 17, 15, 8, 32, 35, 9, 38, 39, 3, 40, 41, 11, 4, 16, 7, 19, 20, 29, 5, 24, 1, 33, 36, 25, 28, 0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> rooms = {"10,25", "6", "19", "", "13", "26", "7", "20", "1", "14", "25", "8", "21,22", "2", "15", "28", "9", "12", "3", "16", "29", "23", "21", "4", "31", "27", "11", "30", "5", "18", "24,31", "17"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 10, 18, 22, 24, 29, 20, 7, 6, 1, 8, 11, 26, 5, 28, 15, 14, 9, 16, 19, 2, 13, 4, 23, 21, 12, 17, 31, 30, 27, 25, 0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> rooms = {"8,31", "11,35", "7,35,37,38", "17,38", "10,14", "3", "13,25", "36", "23", "29", "33", "42", "19,32", "12,23", "1,37", "5,27", "25,39", "16,24", "3,8,11,13", "2", "17,23", "10", "4", "40", "6,22,26", "27,30,34,38", "9,23", "13,39", "7,10", "11", "18,37", "20,22,39", "0,15", "1,14,26", "22", "19,28", "8,21", "24", "28", "30,35", "5", "25", "41"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 8, 14, 15, 16, 17, 18, 19, 20, 21, 22, 24, 32, 12, 13, 27, 34, 36, 7, 37, 30, 38, 25, 40, 23, 41, 42, 11, 29, 9, 26, 33, 10, 28, 35, 39, 31, 0};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> rooms = {"12,23,25,34", "4,29,38", "31", "14,18,24", "12,35", "2,17,21", "7", "5,9,18", "", "11,12", "7,24", "4", "8,30,34", "12,19", "1,4", "38", "13", "0,10,35", "24,26,36", "4,25,30", "27", "6,29", "18,30,33", "22", "14,15", "21,36", "11,32", "28", "34,37", "32", "14,23", "17", "12,16", "9,34", "3", "21", "8,27", "9,30", "20"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 8, 9, 10, 11, 12, 14, 19, 13, 16, 20, 26, 30, 31, 2, 32, 29, 33, 22, 23, 34, 35, 17, 5, 37, 28, 27, 36, 38, 15, 24, 18, 7, 6, 21, 25, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> rooms = {"22,23", "8", "5", "21,25", "21,25", "", "16", "12", "10,16", "19", "2", "13", "24", "1,20", "6", "3,22,23", "17", "9", "14", "20", "26", "15,16,26", "4", "7", "18", "11,16", "3"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 2, 6, 10, 8, 1, 13, 11, 14, 15, 18, 20, 19, 9, 17, 16, 24, 12, 7, 23, 25, 26, 21, 4, 22, 0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> rooms = {"30,36", "6,41", "19", "5,33", "26,27", "23,38", "7", "5,16", "35,42", "3,26", "13", "3", "2,9", "30", "16", "34", "40", "29", "1,42", "25,42", "9", "17,22", "14,25", "24", "11", "32", "31", "39", "9,12", "2,8,10", "15", "29", "1", "22,27", "37", "6", "28", "20", "4,12", "6,10", "18", "38", "21"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 6, 11, 12, 13, 10, 17, 18, 19, 2, 20, 21, 24, 23, 5, 35, 37, 34, 15, 30, 38, 39, 27, 40, 16, 14, 41, 1, 32, 25, 22, 33, 3, 42, 8, 29, 31, 26, 9, 28, 36, 0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> rooms = {"8", "12", "11", "17", "15", "18", "19", "16", "13", "18", "1", "3", "2", "5", "4", "0,8,10", "14", "9,14,18", "6", "0,7"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 17, 3, 11, 2, 12, 1, 10, 15, 4, 14, 16, 7, 19, 6, 18, 5, 13, 8, 0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> rooms = {"7,12,13", "13", "1,5", "9", "11", "4", "1,7,8", "10", "7", "6", "2", "", "3", "5"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 8, 6, 9, 3, 10, 7, 11, 4, 5, 12, 13, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> rooms = {"16", "22", "30", "15,35", "31,37", "25,26", "28", "18,37", "2,33", "4,10", "27", "31,36", "7,24", "3,6,11,25", "21", "13,34", "9,23,35", "7", "12", "10,15,37", "13", "26,34", "19", "21,38", "23,29", "3,11,26", "33", "9,25", "14,25", "8", "1", "20", "3,5,9", "", "32", "5", "2,3,10", "31", "17,34"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 5, 8, 9, 14, 15, 19, 21, 22, 1, 27, 10, 28, 6, 29, 24, 12, 18, 30, 2, 32, 33, 26, 25, 34, 35, 36, 11, 13, 20, 31, 37, 7, 17, 38, 23, 16, 0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> rooms = {"1", ""};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> rooms = {"8", "3", "6", "7", "1", "4", "9", "2", "5", "13", "12", "10", "", "14", "11"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 10, 11, 14, 13, 9, 6, 2, 7, 3, 1, 4, 5, 8, 0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> rooms = {"16", "14", "6", "5", "20,37", "9", "17,29,40", "23", "21,36", "8", "15,33", "21", "3,15,21,41", "32", "7,9,11,15,31,39", "29", "9,17,37", "1", "", "34", "19,35", "22", "15,29,30", "4", "11,21,39", "24", "7,15,28,33", "38", "25", "26", "19", "13", "7,10", "37", "11,18,29,41", "31", "1,29,41", "2", "12,29", "11", "3,31", "27"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 10, 11, 12, 14, 1, 15, 17, 18, 30, 22, 21, 32, 13, 31, 33, 34, 19, 35, 20, 4, 23, 7, 38, 27, 39, 24, 25, 28, 26, 29, 40, 6, 2, 37, 41, 36, 8, 9, 16, 0};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> rooms = {"8,13", "22,32", "35", "24", "20", "28", "38", "27", "21", "12,36", "17", "", "7,10", "18", "1,30", "34", "6,37", "29", "11", "9", "2", "19", "13,25", "4,6", "31", "14", "23,34", "15,33", "12", "3", "1,4,24", "1,4", "7", "16", "25", "1,26,28", "33", "32", "5"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 11, 18, 13, 22, 1, 23, 26, 28, 29, 17, 10, 12, 31, 24, 35, 2, 20, 4, 30, 14, 25, 34, 15, 27, 7, 32, 37, 38, 6, 16, 33, 36, 9, 19, 21, 8, 0};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> rooms = {"13,34", "32", "9", "8", "19", "13", "5", "23", "11", "33", "38", "17", "25", "3,6", "2", "35", "28", "42", "36", "20", "18", "37", "31", "12", "1", "14,39", "29", "16", "22", "10", "39", "15", "7", "41", "26", "", "30", "6", "24", "40", "21", "4", "27"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 30, 35, 15, 31, 22, 28, 16, 27, 36, 18, 20, 19, 4, 37, 21, 40, 39, 41, 33, 9, 2, 14, 25, 12, 23, 7, 32, 1, 24, 38, 10, 29, 26, 34, 42, 17, 11, 8, 3, 13, 0};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> rooms = {"13,15,18", "0,17", "8", "10,21", "23", "16", "9,14,25", "15", "1,5,20", "5", "2,5", "19", "7", "16,26", "3", "25", "0,19,21", "5,11,14", "12", "4,22", "22", "1", "18", "", "6,20", "0,9", "24"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 7, 8, 2, 9, 10, 3, 11, 12, 14, 17, 1, 18, 20, 21, 22, 23, 4, 19, 16, 24, 25, 15, 26, 13, 0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> rooms = {"5,10", "32,40", "18", "7", "3,29", "21,36", "44", "22,32", "43", "26", "30", "35", "36", "2", "33", "11,27", "1,22", "0,31", "14,43", "24", "23,25,34,42", "14,23", "15", "27,38", "41", "13", "10,21,37", "28", "10,29", "38,41", "25", "16", "27,43", "1,6", "10", "20", "9", "39", "1,8", "33,34", "19,38", "17", "12", "4", "40"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 8, 14, 16, 21, 23, 24, 19, 28, 27, 31, 17, 32, 34, 38, 40, 41, 29, 44, 6, 33, 39, 37, 26, 9, 36, 12, 42, 20, 35, 11, 15, 22, 7, 3, 4, 43, 18, 2, 13, 25, 30, 10, 0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> rooms = {"25", "6", "19", "", "13", "26", "7", "20", "1", "14", "27", "8", "21", "2", "15", "28", "9", "22", "3", "16", "29", "10", "23", "4", "17", "30", "11", "24", "5", "18", "31", "12"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 18, 29, 20, 7, 6, 1, 8, 11, 26, 5, 28, 15, 14, 9, 16, 19, 2, 13, 4, 23, 22, 17, 24, 27, 10, 21, 12, 31, 30, 25, 0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> rooms = {"37", "8,24", "5,7", "1,36", "27", "28", "14", "15", "22", "39", "0,24", "34,38", "22,32", "38", "17", "19,27", "18", "11,20", "5,6,11,27", "", "29", "3,18,34", "30,31", "4", "7,30,34", "40", "9", "36,38", "4,13,35", "4,33", "13", "2,23,26,34", "20", "10", "25", "12", "2,40", "16", "23,39", "6,21", "28,31"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 5, 8, 1, 3, 9, 11, 13, 17, 14, 6, 19, 15, 7, 21, 22, 23, 25, 26, 30, 24, 10, 33, 29, 20, 32, 12, 34, 31, 35, 28, 39, 38, 40, 36, 27, 18, 16, 37, 0};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> rooms = {"14", "19", "28", "6,12", "29", "3,18", "12", "23", "15", "10,14", "22", "8,24,30", "11", "22,27", "17", "25", "5", "31", "13", "16,34", "35", "6,7,10", "24", "", "32", "9,34", "8", "26", "16", "21", "33", "0,12,18,28", "1", "2,4", "20", "2,24"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 6, 9, 10, 16, 19, 1, 22, 23, 7, 21, 26, 27, 13, 18, 28, 29, 4, 32, 24, 33, 30, 35, 20, 34, 25, 15, 8, 11, 12, 31, 17, 14, 0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> rooms = {"33,36", "", "1,43", "2", "3,46", "16", "15,49", "8", "1,25,35", "29", "1,49", "33", "13,30", "10", "29,37,49", "9", "21", "7", "19", "32", "22", "34", "3,19,47", "11", "13,21,29,31", "45", "7,9,35", "5", "41", "42", "1,23,31,41", "28", "3,4,7,23", "48", "3", "12", "17,37", "49", "14,37", "26", "20,41", "13", "17,27,44,47", "24", "18,19,29", "40", "17,21,27", "38", "6", "39"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 9, 10, 11, 13, 14, 15, 6, 16, 5, 17, 18, 23, 27, 28, 30, 12, 31, 34, 21, 35, 38, 41, 44, 42, 29, 24, 43, 2, 3, 46, 4, 32, 19, 47, 22, 20, 40, 45, 25, 8, 7, 26, 39, 48, 33, 49, 37, 36, 0};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> rooms = {"26", "12", "16,26", "32", "5", "8", "36", "15", "17", "25", "28", "2,4", "7", "31", "18", "13", "24", "6", "30", "33", "1,2,32", "10,20", "2", "27", "", "38", "35", "34", "9,26", "19", "17,22", "21", "11", "20", "15,29", "23", "14", "3", "37"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 7, 12, 1, 22, 24, 16, 2, 30, 18, 14, 33, 19, 29, 36, 6, 17, 8, 5, 4, 11, 32, 20, 37, 38, 25, 9, 28, 10, 21, 31, 13, 15, 34, 27, 23, 35, 26, 0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> rooms = {"10,25", "6", "19", "", "13", "26", "7", "20", "1", "14", "25", "8", "21,22", "2", "15", "28", "9", "12", "3", "16", "29", "23", "21", "4", "31", "27", "11", "30", "5", "18", "24,31", "17"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 10, 18, 22, 24, 29, 20, 7, 6, 1, 8, 11, 26, 5, 28, 15, 14, 9, 16, 19, 2, 13, 4, 23, 21, 12, 17, 31, 30, 27, 25, 0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> rooms = {"39", "33", "17,25,46", "48", "30,32", "1", "5", "27", "16,19,35", "16", "26", "18,22", "9", "14,38", "30", "33,43,46", "31", "5,42", "19", "10,40", "17,37", "29,30,48", "41", "43", "47", "34", "7,9", "6", "21,37", "2,25", "3,15", "8,20,22", "12", "11", "10", "41", "3", "13,18", "44", "4,40", "22", "9,14,17,32", "36", "8", "28", "10,23", "45", "6,37", "24,40"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 9, 11, 12, 18, 19, 23, 27, 7, 26, 10, 32, 33, 34, 25, 29, 35, 36, 42, 17, 45, 46, 47, 24, 48, 21, 28, 44, 38, 13, 37, 20, 31, 16, 8, 43, 15, 30, 14, 41, 22, 40, 39, 0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> rooms = {"6", "7", "5", "0,4", "2", "11", "1", "0,10", "3", "2,6", "8", "9"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 11, 5, 2, 4, 3, 8, 10, 7, 1, 6, 0};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> rooms = {"20", "8,22", "13", "1,40", "21", "40", "38", "26,27,36", "2", "2,10,30,34", "23", "26,29", "24", "6,14,20", "17", "0,26", "10", "42", "25", "45", "35", "0,8,41", "", "15,36", "7", "37,44", "18", "16", "19", "0,9,12", "8", "12", "11", "43", "4", "31,32,40", "44", "6,14,18,32", "39", "33", "36", "0,5", "3", "4,28", "30", "32,38"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 8, 13, 2, 15, 16, 22, 1, 3, 23, 10, 27, 7, 24, 12, 30, 31, 34, 9, 29, 36, 40, 41, 21, 4, 42, 17, 14, 44, 45, 19, 28, 43, 33, 39, 38, 6, 37, 25, 18, 26, 11, 32, 35, 20, 0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> rooms = {"12", "3", "22", "11", "3,19", "", "30", "33", "13", "34", "31", "17", "21", "24", "18", "9", "15", "35", "20", "16", "6", "25", "28", "7", "29", "1", "8", "26", "27", "5", "32", "14", "4", "37", "38", "10", "2", "36", "23"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 29, 24, 13, 8, 26, 27, 28, 22, 2, 36, 37, 33, 7, 23, 38, 34, 9, 15, 16, 19, 4, 32, 30, 6, 20, 18, 14, 31, 10, 35, 17, 11, 3, 1, 25, 21, 12, 0};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> rooms = {"9", "", "13", "6", "2", "15,21", "21", "14", "18", "12,16", "19", "17", "11", "8,20", "16", "3", "8", "5", "10", "1", "7", "22", "4"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 6, 3, 14, 7, 15, 16, 19, 10, 18, 8, 20, 13, 2, 4, 22, 21, 5, 17, 11, 12, 9, 0};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> rooms = {"14", "32", "29", "6,26,28", "43", "2,48", "34", "19", "21", "30,36,46", "", "3,8,24,32,34,46", "15", "20,40,42", "17", "10,11", "49", "27,40", "33", "2,23", "30", "13", "4", "5,38,46", "46", "24", "25", "12,24,38", "7", "35", "31", "9,40", "39", "37", "47", "8,26", "12", "34,48", "16", "22", "26", "10,38", "28", "18,42", "20", "40,44", "18", "1", "41", "45"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 6, 3, 10, 13, 21, 8, 23, 24, 25, 26, 35, 29, 2, 19, 7, 28, 36, 9, 31, 30, 20, 40, 41, 42, 43, 4, 22, 39, 32, 44, 45, 47, 34, 48, 37, 33, 18, 46, 11, 15, 12, 49, 16, 38, 27, 17, 14, 0};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> rooms = {"17,22", "7", "11,27,35", "18", "5,13,16,17,21", "", "2,15", "34", "17", "25", "11,28,31", "26", "20,33", "19", "11,15,32", "4", "5,31", "27", "1", "15", "21", "29", "31,33", "9", "21,25,29,33,35", "12", "5,15,27,31", "30", "23", "8", "14", "6", "9,13,25,33", "3", "24", "10"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 6, 8, 9, 16, 4, 15, 17, 19, 13, 20, 12, 21, 23, 25, 28, 29, 31, 32, 14, 30, 27, 26, 11, 10, 35, 24, 34, 7, 1, 18, 3, 33, 22, 0};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> rooms = {"30", "2", "7,34,40", "10,31", "1", "44", "42", "13", "17,39", "14,32,40", "34,35", "19", "26,41", "3,11,39", "23", "46", "29", "11", "21", "5", "1,31,42", "17,43", "45", "15", "7,38", "3", "18,28,32", "4,30", "3", "6,45", "12,36,41", "4,24", "15,37", "6,8", "9", "32", "25", "36", "27", "22", "34", "0,20", "28,32", "23,38", "16,40", "12", "33"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 4, 6, 8, 14, 9, 17, 22, 23, 25, 27, 28, 33, 34, 35, 10, 3, 36, 37, 38, 39, 40, 42, 43, 21, 18, 45, 29, 16, 44, 5, 19, 11, 13, 7, 24, 31, 20, 41, 46, 15, 32, 26, 12, 30, 0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> rooms = {"1,2", "3", "3,5", "4", "", ""};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 3, 5, 2, 0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> rooms = {"40", "23", "21", "25", "36", "11", "12", "1", "3", "24", "27", "4", "2,45", "42", "29", "39", "22,27", "13", "17,21", "28", "31", "20", "32", "35", "48", "30", "15", "", "14,39", "47", "15,26", "19", "7", "9", "38", "6", "43", "46", "33", "18", "49", "44", "34", "37", "16", "41", "8", "10", "45", "5"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 10, 12, 6, 26, 27, 35, 23, 1, 7, 32, 22, 16, 44, 41, 45, 47, 29, 14, 28, 19, 31, 20, 21, 48, 24, 9, 33, 38, 34, 42, 13, 17, 18, 39, 15, 30, 25, 3, 8, 46, 37, 43, 36, 4, 11, 5, 49, 40, 0};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> rooms = {"34", "38", "17", "24,34,45", "31", "12,32,42", "27", "40,46", "6", "28,41", "15", "23", "2", "1,8,26", "3", "28,30,34,36", "37", "44", "32", "22,43,46", "4", "49", "13", "8,12,40,47", "33", "", "7", "9", "36", "48", "39", "6,12,16,21,36,44", "19", "10,35", "5", "14,20", "16", "25,36", "14", "29,38", "24", "10", "22", "30", "11", "10,36,40", "12", "8,10,12,24", "26", "18,36"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 8, 13, 15, 10, 17, 2, 12, 18, 22, 25, 26, 28, 36, 37, 16, 40, 41, 9, 27, 6, 42, 45, 46, 47, 23, 11, 44, 48, 29, 49, 21, 31, 4, 20, 35, 33, 24, 3, 14, 38, 39, 30, 43, 19, 32, 5, 34, 0};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> rooms = {"40", "8,37", "43", "32,36", "30", "20,22", "2", "22", "38", "18", "49", "24", "42", "19", "21", "", "9", "15,20", "1", "10,46", "32", "27,46", "45", "33", "10", "48", "47", "5", "31", "8,46", "35", "30,44", "7", "29", "16", "25", "13", "28", "11", "26,28,38", "23", "3", "14", "26,39", "12", "17", "34", "41", "6", "4"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 8, 15, 19, 13, 20, 17, 27, 21, 14, 36, 42, 12, 44, 45, 22, 7, 32, 3, 41, 47, 26, 49, 10, 24, 11, 38, 39, 43, 2, 6, 48, 25, 35, 30, 31, 28, 37, 1, 18, 9, 16, 34, 46, 29, 33, 23, 40, 0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> rooms = {"33", "8", "17", "45", "25", "1", "29", "42", "9", "34", "41", "39", "11", "23", "", "49", "12", "13", "3", "44", "36", "7", "5", "27", "26", "43", "21", "40", "20", "38", "10", "24", "48", "31", "6", "28", "2,25", "19", "14", "47", "37", "15", "4", "46", "16", "30", "18", "22", "35", "32"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 38, 29, 6, 34, 9, 8, 1, 5, 22, 47, 39, 11, 12, 16, 44, 19, 37, 40, 27, 23, 13, 17, 2, 36, 20, 28, 35, 48, 32, 49, 15, 41, 10, 30, 45, 3, 18, 46, 43, 25, 4, 42, 7, 21, 26, 24, 31, 33, 0};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> rooms = {"5", "14", "34", "7", "40", "25,46", "15", "22,24", "6", "14,16,31,34", "27", "8,28,32", "47", "14,24,26", "30", "13", "23", "32,44", "", "35", "48", "9,20", "46", "6,20", "38", "1", "3", "28,30,38", "16", "4,12,14,42", "33", "39", "10", "6,14,36,43", "37", "42", "29", "20,24,26,36", "21", "2,10,12,24", "45", "4,18", "36", "8", "49", "18", "19", "11,24", "17", "22,41"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 7, 3, 8, 11, 13, 14, 15, 6, 18, 22, 23, 16, 25, 26, 28, 32, 37, 34, 41, 43, 33, 30, 27, 10, 39, 31, 9, 45, 40, 4, 49, 44, 17, 48, 20, 21, 38, 24, 47, 12, 29, 36, 42, 35, 19, 46, 5, 0};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> rooms = {"40", "23", "21", "25", "36", "11", "12", "1", "3", "24", "27", "4", "2", "42", "29", "39", "22", "13", "17", "28", "31", "20", "32", "35", "48", "30", "15", "", "14", "47", "26", "19", "7", "9", "38", "6", "43", "46", "33", "18", "49", "44", "34", "37", "16", "41", "8", "10", "45", "5"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 10, 47, 29, 14, 28, 19, 31, 20, 21, 2, 12, 6, 35, 23, 1, 7, 32, 22, 16, 44, 41, 45, 48, 24, 9, 33, 38, 34, 42, 13, 17, 18, 39, 15, 26, 30, 25, 3, 8, 46, 37, 43, 36, 4, 11, 5, 49, 40, 0};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> rooms = {"16", "33", "32", "17", "18", "45", "3", "39", "49", "23", "27", "34", "42", "25", "1", "30", "5", "4", "36", "6", "8", "38", "14", "47", "41", "2", "48", "15", "37", "46", "40", "20", "43", "7", "44", "12", "31", "13", "", "26", "19", "10", "11", "35", "21", "22", "28", "29", "24", "9"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 21, 44, 34, 11, 42, 12, 35, 43, 32, 2, 25, 13, 37, 28, 46, 29, 47, 23, 9, 49, 8, 20, 31, 36, 18, 4, 17, 3, 6, 19, 40, 30, 15, 27, 10, 41, 24, 48, 26, 39, 7, 33, 1, 14, 22, 45, 5, 16, 0};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> rooms = {"13", "40", "31", "43", "21", "1", "15", "3", "10", "33", "29", "7", "47", "23", "42", "38", "4", "28", "48", "34", "26", "19", "20", "8", "41", "6", "9", "16", "14", "27", "24", "25", "11", "35", "18", "45", "32", "5", "37", "49", "22", "12", "", "30", "17", "44", "2", "46", "39", "36"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42, 14, 28, 17, 44, 45, 35, 33, 9, 26, 20, 22, 40, 1, 5, 37, 38, 15, 6, 25, 31, 2, 46, 47, 12, 41, 24, 30, 43, 3, 7, 11, 32, 36, 49, 39, 48, 18, 34, 19, 21, 4, 16, 27, 29, 10, 8, 23, 13, 0};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> rooms = {"38", "10", "48", "6", "14", "17", "4", "42", "12", "40", "19", "2", "13", "37", "30", "31", "24", "28", "1", "", "35", "3", "47", "41", "29", "9", "7", "45", "43", "26", "18", "16", "20", "21", "36", "22", "23", "32", "39", "11", "34", "8", "46", "15", "33", "44", "27", "49", "25", "5"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 10, 1, 18, 30, 14, 4, 6, 3, 21, 33, 44, 45, 27, 46, 42, 7, 26, 29, 24, 16, 31, 15, 43, 28, 17, 5, 49, 47, 22, 35, 20, 32, 37, 13, 12, 8, 41, 23, 36, 34, 40, 9, 25, 48, 2, 11, 39, 38, 0};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> rooms = {"16", "13", "22", "11", "48", "19", "36", "47", "27", "3", "18", "38", "9", "21", "40", "24", "37", "28", "29", "10", "7", "", "17", "30", "44", "42", "2", "14", "34", "25", "20", "4", "39", "23", "12", "32", "1", "31", "8", "49", "41", "35", "46", "45", "33", "26", "15", "43", "5", "6"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 13, 1, 36, 6, 49, 39, 32, 35, 41, 40, 14, 27, 8, 38, 11, 3, 9, 12, 34, 28, 17, 22, 2, 26, 45, 43, 47, 7, 20, 30, 23, 33, 44, 24, 15, 46, 42, 25, 29, 18, 10, 19, 5, 48, 4, 31, 37, 16, 0};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> rooms = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", ""};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> rooms = {""};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> rooms = {"10,9,8,7,6,5,4,3,2,1", "", "", "", "", "", "", "", "", "", ""};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> rooms = {"2", "0", "1"};
    UndergroundVault* pObj = new UndergroundVault();
    clock_t start = clock();
    vector<int> result = pObj->sealOrder(rooms);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 0};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=156592&rd=4660&pm=1939
********************************************************************************
#include <iostream>
#include <strstream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
 
#include <stdio.h>
#include <stdlib.h>
 
using namespace std;
 
typedef long long i64;
typedef vector<int> VI;
typedef vector<string> VS;
 
class UndergroundVault  {
  public: vector <int> sealOrder(vector <string> rooms);
};
 
vector <int> rst;
 
int gcd(int a, int b)
{
  if(a==0) return(b);
  return(gcd(b%a, a));
}
 
void showv(vector<string>& v)
{
  int i,l=v.size();
  cout<<"Size = "<<l<<endl;
  for(i=0;i<l;i++) cout<<v[i]<<endl;
  cout<<endl;
}
 
void showv(vector<int>& v)
{
  int i,l=v.size();
  cout<<"Size = "<<l<<endl;
  for(i=0;i<l;i++) cout<<v[i]<<" ";
  cout<<endl;
}
 
int strToInt(string str)
{
  strstream ss; int r;
  ss<<str; ss>>r;
  return(r);
}
 
void tks(string str, string del, vector<string>& v)
{
  int i,j,l=str.length();
  for(i=0;i<l;i++)
  {
    j=del.find(str[i]);
    if(j>=0) str[i]=' ';
  }
  strstream ss; string s1;
  ss<<str;
  v.clear();
  while(ss>>s1) v.push_back(s1);
}
 
void tksInt(string str, string del, vector<int>& v)
{
  int i,j,l=str.length();
  for(i=0;i<l;i++)
  {
    j=del.find(str[i]);
    if(j>=0) str[i]=' ';
  }
  strstream ss; string s1;
  ss<<str;
  v.clear();
  while(ss>>s1) v.push_back(strToInt(s1));
}
 
int findit(vector<string>& v, string k)
{
  int i,l=v.size();
  for(i=0;i<l;i++) if(v[i]==k) return(i);
  //v.push_back(k);
  return(-1);
}
 
int findit(vector<int>& v, int k)
{
  int i,l=v.size();
  for(i=0;i<l;i++) if(v[i]==k) return(i);
  //v.push_back(k);
  return(-1);
}
 
string rev(string str)
{
  int i,l=str.length();
  string s1=str;
  for(i=0;i<l;i++) s1[i]=str[l-1-i];
  return(s1);
}
 
int N,M;
int valid(int xx, int yy)
{
  if(xx<0 || yy<0 || xx>=N || yy>=M) return(0);
  return(1);
}
 
int n;
int usd[100];
int vst[100];
int r[100][100];
 
void dfs(int a)
{
  int i;
  vst[a]=1;
  for(i=0;i<n;i++)
  if(r[a][i])
    if(!usd[i])
      if(!vst[i])
        dfs(i);
}
 
int good()
{
  int i;
  for(i=0;i<n;i++) vst[i]=0;
  dfs(0);
  for(i=0;i<n;i++)
    if(usd[i]==0 && vst[i]==0) return(0);
  return(1);
}
 
vector <int> UndergroundVault ::sealOrder(vector <string> rooms) 
{  
  int i,j;
  rst.clear();
  n=rooms.size();
  VI tmp;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      r[i][j]=0;
  for(i=0;i<n;i++)
  {
    tksInt(rooms[i],", ", tmp);
    for(j=0;j<tmp.size();j++)
      r[i][tmp[j]]=1;
  }
  for(i=0;i<n;i++) usd[i]=0;
  for(i=0;i<n-1;i++)
    for(j=1;j<n;j++)
      if(!usd[j])
      {
        usd[j]=1;
        if(good()) {rst.push_back(j); j=n+100;}
        usd[j]=0;
      }
  rst.push_back(0);
  return(rst);
}
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/