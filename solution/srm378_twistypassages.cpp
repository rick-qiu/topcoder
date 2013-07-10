/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8282
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

class TwistyPassages {
public:
    vector<int> similarRooms(vector<string> maze);
};

vector<int> TwistyPassages::similarRooms(vector<string> maze) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> maze = {"1 2 3", "0", "0", "0"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> maze = {"1 2 3", "0", "0", "0 4", "3"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> maze = {"1 2 3", "0", "0", "0 4", "3", "6 7 8", "5", "5", "5 9", "8"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> maze = {"1 2 3 4", "0", "0 5", "0", "6 0", "2", "4", "8 10 9 11", "7", "7 12", "7", "13 7", "9", "11"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> maze = {"1 2", "2 0", "0 1", "4 6", "5 3", "6 4", "3 5"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 6, 6, 6, 6, 6};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> maze = {"2 8 6", "3 8 7", "4 8 0", "5 8 1", "6 8 2", "7 8 3", "0 8 4", "1 8 5", "0 1 2 3 4 5 6 7"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 7, 7, 7, 7, 7, 7, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> maze = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> maze = {"1 4 2 5 3 6 7", "2 0 3", "3 0 1", "1 0 2", "5 0 7", "6 0 4", "7 0 5", "4 0 6"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 6, 6, 6, 6, 6, 6};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> maze = {"1 2 3", "4 5 0", "6 7 0", "8 9 0", "10 11 1", "12 13 1", "14 15 2", "16 17 2", "18 19 3", "20 21 3", "22 23 4", "24 25 4", "26 27 5", "28 29 5", "30 31 6", "32 33 6", "34 35 7", "36 37 7", "38 39 8", "40 41 8", "42 43 9", "44 45 9", "10", "10", "11", "11", "12", "12", "13", "13", "14", "14", "15", "15", "16", "16", "17", "17", "18", "18", "19", "19", "20", "20", "21", "21 46 47", "45", "45"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> maze = {"1 49", "0 2", "1 3", "2 4", "3 5", "4 6", "5 7", "6 8", "7 9", "8 10", "9 11", "10 12", "11 13", "12 14", "13 15", "14 16", "15 17", "16 18", "17 19", "18 20", "19 21", "20 22", "21 23", "22 24", "23 25", "24 26", "25 27", "26 28", "27 29", "28 30", "29 31", "30 32", "31 33", "32 34", "33 35", "34 36", "35 37", "36 38", "37 39", "38 40", "39 41", "40 42", "41 43", "42 44", "43 45", "44 46", "45 47", "46 48", "47 49", "0 48"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> maze = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "20 2 21 0", "1 3 21 0", "2 4 21 0", "3 5 21 0", "4 6 21 0", "5 7 21 0", "6 8 21 0", "7 9 21 0", "8 10 21 0", "9 11 21 0", "10 12 21 0", "11 13 21 0", "12 14 21 0", "13 15 21 0", "14 16 21 0", "15 17 21 0", "16 18 21 0", "17 19 21 0", "18 20 21 0", "19 1 21 0", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> maze = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> maze = {"1", "0", "3", "2", "5", "4", "7", "6", "9", "8", "11", "10", "13", "12", "15", "14", "17", "16", "19", "18", "21", "20", "23", "22", "25", "24", "27", "26", "29", "28", "31", "30", "33", "32", "35", "34", "37", "36", "39", "38", "41", "40", "43", "42", "45", "44", "47", "46", "49", "48"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> maze = {"1 2 3", "2 3 0", "3 0 1", "0 1 2", "6 5 7", "6 7 4", "5 4 7", "4 5 6", "9 10 11", "10 11 8", "11 8 9", "8 9 10", "14 13 15", "14 15 12", "13 12 15", "12 13 14", "17 18 19", "18 19 16", "19 16 17", "16 17 18", "22 21 23", "22 23 20", "21 20 23", "20 21 22", "25 26 27", "26 27 24", "27 24 25", "24 25 26", "30 29 31", "30 31 28", "29 28 31", "28 29 30", "33 34 35", "34 35 32", "35 32 33", "32 33 34", "38 37 39", "38 39 36", "37 36 39", "36 37 38", "41 42 43", "42 43 40", "43 40 41", "40 41 42", "46 45 47", "46 47 44", "45 44 47", "44 45 46"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> maze = {"9 7 5 10 2 1", "11 8 7 12 0 2", "13 1 0 14 3 4", "15 5 4 16 8 2", "17 5 6 18 2 3", "19 0 6 20 4 3", "21 7 8 22 4 5", "23 6 0 24 8 1", "25 6 7 26 1 3", "0", "0", "1", "1", "2", "2", "3", "3", "4", "4", "5", "5", "6", "6", "7", "7", "8", "8"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> maze = {"2 1", "0 2", "0 3 4 1", "5 2", "6 2", "7 3", "7 4", "5 8 9 6", "7 10", "7 11", "8 12", "9 12", "10 13 14 11", "12 14", "12 13"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 2, 11, 11, 11, 11, 2, 11, 11, 11, 11, 2, 11, 11};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> maze = {"1", "0 2", "1 3", "2 4", "3 5", "4 6", "5 7", "6 8", "7 9", "8 10", "9 11", "10 12", "11 13", "12 14", "13 15", "14 16", "15 17", "16 18", "17 19", "18 20", "19 21", "20 22", "21 23", "22 24", "23 25", "24 26", "25 27", "26 28", "27 29", "28 30", "29 31", "30 32", "31 33", "32 34", "33 35", "34 36", "35 37", "36 38", "37 39", "38 40", "39 41", "40 42", "41 43", "42 44", "43 45", "44 46", "45 47", "46 48", "47 49", "48"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> maze = {""};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> maze = {"1", "0"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> maze = {"", ""};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> maze = {"1", "0", "", ""};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> maze = {"14 31 1 48 32 24 21 20 10 43 3 47 2 28 39", "6 33 8 21 4 27 40 0 47 13 28 16 26 35 37", "30 0 45 31 22 28 41 21 4 8 42 37 15 29 49", "18 42 10 32 5 0 25 47 7 35 48 38 16 33 45", "14 7 25 37 18 34 17 47 1 39 2 15 24 42 41", "23 14 21 26 19 25 9 22 49 30 3 29 31 42 13", "12 32 40 22 38 19 18 16 37 9 41 48 10 1 39", "30 46 23 4 3 11 20 34 33 47 44 15 31 43 35", "30 24 32 42 41 1 49 2 33 48 25 31 20 43 37", "27 6 22 5 12 10 32 18 40 49 25 48 42 26 33", "14 46 9 34 36 41 44 47 31 0 45 11 17 3 6", "19 15 16 7 35 10 28 14 48 47 44 49 46 17 13", "41 48 15 35 29 33 36 13 30 39 9 19 14 6 43", "20 12 17 21 33 43 19 39 1 23 27 49 11 32 5", "39 10 25 38 19 0 20 11 5 12 16 21 17 15 4", "24 48 21 2 14 7 35 40 4 41 11 27 12 45 16", "14 41 15 1 3 18 17 38 28 23 37 6 11 45 19", "14 11 44 37 19 26 34 4 25 10 16 46 38 36 13", "30 34 6 4 9 21 36 29 22 46 26 16 3 28 37", "38 12 44 25 16 11 13 14 17 27 5 36 6 37 45", "46 14 31 40 13 7 0 24 35 49 32 42 34 8 21", "14 35 18 31 28 5 26 2 34 15 30 20 0 1 13", "18 27 47 43 2 5 31 28 6 36 24 9 32 45 46", "5 13 44 37 24 46 35 16 7 33 30 26 28 41 40", "29 8 15 40 20 26 4 37 35 22 33 0 23 44 32", "34 8 4 3 39 9 29 5 14 42 44 38 17 19 43", "45 23 18 1 29 37 9 28 17 5 35 21 24 43 48", "46 29 22 19 38 39 34 41 13 15 35 1 47 9 28", "0 49 1 31 18 27 11 23 2 16 21 26 48 22 43", "36 2 24 27 26 47 46 48 25 38 40 18 5 41 12", "12 18 2 5 8 38 23 32 36 43 7 37 42 21 48", "0 8 36 21 2 5 32 20 10 22 28 7 43 40 33", "6 20 8 0 39 3 22 35 30 24 38 31 45 13 9", "23 42 9 12 13 44 8 41 31 34 1 24 7 39 3", "45 4 7 20 25 18 27 36 10 21 33 40 46 41 17", "23 21 12 32 47 15 43 24 26 3 7 20 27 11 1", "42 45 18 47 30 46 34 22 19 29 12 40 17 10 31", "19 30 49 45 2 18 17 1 16 4 6 8 26 23 24", "29 6 42 19 17 44 14 30 32 27 45 25 16 49 3", "12 4 14 0 33 48 44 25 32 6 46 49 40 27 13", "24 34 29 49 20 46 1 9 23 15 39 6 36 31 41", "48 12 23 2 15 8 40 10 4 34 33 27 6 29 16", "38 4 8 2 45 25 5 3 36 20 9 49 44 33 30", "28 47 26 49 8 0 25 48 12 22 7 13 31 30 35", "11 33 19 10 47 25 7 39 24 46 23 38 42 45 17", "2 44 37 3 10 42 22 36 19 16 32 34 15 26 38", "7 40 36 23 44 22 27 10 18 20 17 29 39 34 11", "1 35 11 7 43 10 0 4 44 3 27 29 49 22 36", "43 3 8 9 41 29 12 15 26 0 30 28 6 39 11", "5 28 40 38 9 39 11 37 43 20 13 2 42 8 47"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> maze = {"38 7 9 8 43 48 30 41 5 22 26 35 33 4 49", "14 39 25 35 30 45 18 12 10 8 21 46 22 37 20", "15 37 26 44 19 17 39 16 7 18 45 36 20 42 24", "21 43 26 8 28 10 4 48 25 46 49 31 37 27 15", "8 31 30 3 0 36 41 5 34 25 44 32 9 14 22", "46 33 38 4 47 34 17 6 45 10 41 48 31 43 0", "5 40 17 19 22 43 18 47 31 9 7 15 29 28 23", "19 38 21 11 34 31 9 0 48 30 44 2 26 16 6", "48 12 3 49 0 41 1 28 35 40 36 4 29 33 43", "18 36 6 47 26 37 27 22 0 46 23 41 4 24 7", "42 13 35 28 31 12 11 3 1 20 16 45 19 40 5", "14 15 45 46 13 7 27 39 25 38 44 17 16 10 43", "48 8 15 42 47 10 29 45 39 1 19 25 44 32 26", "47 24 11 36 41 42 16 38 37 20 32 31 45 29 10", "31 48 49 25 11 38 18 23 43 4 22 41 24 1 27", "32 34 23 11 6 43 2 22 48 45 17 41 12 16 3", "7 46 18 28 20 19 43 31 27 2 15 13 39 10 11", "19 26 28 2 30 23 15 5 24 47 25 18 6 42 11", "26 6 24 46 17 42 45 14 16 9 22 27 1 33 2", "30 6 17 37 39 33 49 2 21 46 16 27 7 10 12", "13 32 41 1 39 16 42 27 2 33 40 24 45 48 10", "36 37 41 1 30 7 23 35 40 44 26 47 39 3 19", "14 6 23 40 0 43 9 29 1 18 31 15 28 34 4", "30 14 6 28 34 22 48 9 40 21 42 17 15 37 32", "48 40 44 26 9 20 13 43 17 2 18 29 14 42 46", "32 12 43 1 17 39 29 14 3 36 11 40 4 49 33", "0 7 39 3 12 49 38 36 21 29 18 17 9 2 24", "29 28 38 16 18 46 9 3 35 36 40 20 14 11 19", "33 39 35 38 3 6 22 10 23 17 27 46 16 8 42", "13 26 25 37 33 44 12 48 6 41 46 24 8 22 27", "34 41 38 21 0 19 23 4 7 49 1 44 17 40 35", "3 14 32 4 5 37 7 6 13 10 22 16 44 47 49", "15 4 13 31 38 23 42 20 12 46 35 25 43 34 37", "39 44 19 0 18 28 20 37 29 48 8 45 25 5 34", "36 44 47 7 15 4 33 30 42 32 22 40 5 23 41", "40 27 42 8 45 32 10 0 28 1 49 46 30 47 21", "4 2 21 47 8 38 27 45 39 13 49 26 9 25 34", "42 21 31 29 13 47 32 3 9 33 2 23 45 1 19", "0 43 7 28 44 13 27 32 49 14 36 11 5 30 26", "16 36 21 20 12 48 26 41 2 11 28 33 1 19 25", "8 22 10 6 35 20 25 23 41 27 30 24 44 34 21", "13 29 39 15 0 30 40 20 4 5 34 14 8 9 21", "28 10 32 17 34 37 13 2 18 20 12 24 35 49 23", "5 47 25 24 11 8 14 38 16 6 32 15 22 3 0", "40 38 30 21 31 46 34 29 11 33 4 12 24 2 7", "35 49 36 10 12 11 37 18 33 2 20 1 13 15 5", "3 28 35 1 19 9 18 27 32 44 24 11 29 16 5", "9 43 6 31 12 13 35 21 36 5 49 34 48 17 37", "24 33 5 8 15 12 47 29 0 7 23 20 14 39 3", "19 3 14 8 38 47 30 36 35 25 31 26 42 45 0"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> maze = {"14 20 25 34 21 1 24 13 48 31 42 12 8 22 38", "6 10 23 5 34 0 17 9 35 12 18 3 32 44 39", "28 30 42 34 21 48 12 47 27 33 7 29 35 40 15", "14 28 1 23 17 39 16 48 29 25 32 43 47 5 21", "42 8 12 31 43 14 33 25 17 27 32 47 36 45 7", "6 22 10 15 30 1 34 8 3 46 39 44 35 19 20", "24 23 19 7 21 43 1 14 40 13 46 36 5 20 35", "39 2 8 35 33 41 32 49 14 6 34 4 13 11 42", "5 25 14 9 47 36 46 18 33 4 41 20 0 7 10", "12 47 11 38 31 21 27 1 26 41 39 23 8 25 16", "25 16 1 5 48 20 15 47 40 42 18 8 32 31 22", "49 38 45 7 29 34 33 42 46 9 26 19 36 37 47", "2 31 32 1 15 27 9 0 13 24 45 25 34 16 4", "40 25 46 45 38 7 12 24 43 14 6 35 41 16 0", "13 17 39 3 6 0 8 33 26 4 28 7 21 35 27", "36 34 10 49 12 16 23 22 35 40 2 5 30 24 29", "19 15 37 27 44 49 30 22 10 12 9 3 20 25 13", "1 27 48 37 28 4 3 46 44 29 43 14 32 33 35", "8 24 26 46 48 22 28 47 1 29 42 31 30 37 10", "43 30 48 34 11 16 6 29 26 36 41 38 42 5 31", "25 44 8 21 5 35 30 6 39 40 16 34 0 24 10", "0 2 3 22 20 33 24 40 49 9 34 14 41 31 6", "49 16 5 30 10 46 32 21 38 40 35 15 43 0 18", "48 39 31 47 29 32 9 43 45 3 6 1 44 28 15", "46 12 37 20 35 0 15 30 27 21 6 13 38 26 18", "0 47 33 31 8 20 12 41 4 16 48 13 10 3 9", "11 9 46 18 14 36 44 19 33 32 37 28 39 41 24", "17 29 14 2 31 12 4 9 47 16 45 49 24 48 36", "39 2 23 26 3 18 42 40 41 48 17 45 14 32 46", "3 27 33 19 41 49 11 40 17 30 47 18 2 15 23", "19 49 38 2 22 5 18 46 39 24 16 15 20 37 29", "12 49 9 27 23 42 19 18 43 0 21 10 48 4 25", "17 12 23 7 3 1 22 44 4 28 10 42 36 26 43", "7 42 4 11 21 37 2 14 29 26 25 17 8 45 48", "0 49 2 7 21 20 12 11 38 39 19 1 15 36 5", "13 15 17 37 5 6 1 24 38 2 14 20 22 7 44", "19 49 6 41 46 15 8 38 11 34 26 43 27 4 32", "24 46 33 30 16 40 35 17 26 38 18 11 45 41 44", "30 11 22 37 19 13 41 36 40 9 44 35 24 0 34", "3 7 34 44 40 28 5 23 1 45 26 9 30 14 20", "29 21 22 37 45 39 13 10 38 6 2 15 28 43 20", "43 36 28 29 37 25 13 7 26 9 38 19 21 8 44", "33 11 0 44 10 32 4 28 7 19 2 43 47 31 18", "42 6 40 22 47 4 41 3 19 17 36 13 31 23 32", "45 39 42 32 5 23 20 35 16 26 41 17 37 38 1", "28 4 39 46 27 44 49 13 12 48 11 37 40 23 33", "26 24 17 45 8 37 18 28 11 13 6 22 30 5 36", "3 23 49 10 9 8 4 25 42 43 27 29 11 18 2", "25 19 27 33 28 2 49 3 18 31 23 0 45 10 17", "7 11 21 45 15 48 31 22 47 30 36 16 29 27 34"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> maze = {"24 42 28 12 15 37 46 48 2 3 29 10 39 14 36", "30 31 10 25 6 12 7 32 34 4 20 22 41 8 47", "33 3 23 12 49 40 15 13 0 42 43 47 41 29 17", "2 15 24 38 21 46 0 43 42 10 40 20 35 16 27", "28 7 31 13 49 34 25 1 22 6 24 10 30 37 43", "33 22 17 30 36 21 10 42 11 32 47 43 29 23 38", "11 23 4 8 45 33 41 44 37 25 21 9 1 16 27", "17 28 49 36 45 4 43 20 1 11 16 29 27 14 32", "29 33 25 38 41 12 20 30 18 40 32 34 49 6 1", "22 17 15 46 40 11 13 6 10 16 47 23 45 36 32", "9 4 3 39 12 33 5 45 48 41 28 1 19 0 44", "9 6 19 49 15 26 43 32 41 42 16 7 48 31 5", "18 36 43 46 39 2 23 1 33 0 10 25 44 16 8", "23 36 2 14 22 4 9 34 26 25 24 45 48 46 43", "13 31 27 38 34 22 0 47 43 7 30 46 35 24 17", "2 41 9 35 26 39 23 49 44 0 11 3 24 18 30", "9 36 6 18 11 21 7 37 49 3 31 12 45 44 41", "24 9 19 36 42 14 26 27 18 25 2 7 45 5 23", "40 16 19 12 34 33 38 30 35 48 32 15 17 20 8", "30 28 39 11 10 20 40 38 17 26 18 23 41 45 43", "38 7 19 3 1 35 18 31 39 21 29 27 28 24 8", "26 25 24 5 6 33 34 40 16 29 3 20 48 44 45", "33 14 13 42 24 27 37 39 38 44 25 4 9 5 1", "12 13 17 6 9 38 37 19 2 49 29 32 34 5 15", "46 0 42 22 4 20 43 13 17 14 3 21 26 29 15", "35 36 17 13 8 1 12 29 21 44 34 26 6 22 4", "40 17 32 31 15 36 25 24 21 38 11 41 13 19 39", "14 44 6 31 37 7 17 22 42 20 38 28 3 40 47", "4 47 0 27 19 37 7 35 41 30 48 10 20 46 34", "48 7 25 8 0 24 36 2 31 35 5 21 20 30 23", "4 15 46 18 19 5 14 49 28 29 44 33 42 1 8", "26 49 34 27 16 45 20 11 47 4 33 39 1 29 14", "1 7 26 42 47 18 40 5 43 36 9 23 8 34 11", "8 2 10 31 22 49 43 5 12 45 18 21 6 46 30", "44 23 18 14 49 28 13 4 21 1 46 32 25 31 8", "20 25 14 46 29 39 3 18 45 38 49 28 47 15 48", "46 16 5 0 48 9 7 13 29 12 32 17 41 26 25", "27 44 16 40 28 42 0 48 47 43 6 23 22 4 49", "23 35 40 8 26 5 3 47 14 20 27 18 22 45 19", "26 44 15 42 19 48 12 47 31 35 20 49 0 22 10", "47 21 48 26 37 3 2 32 18 8 38 27 44 19 9", "11 26 16 43 48 2 36 28 6 46 19 10 8 15 1", "37 32 27 11 47 17 5 24 2 39 30 0 3 46 22", "3 41 11 19 2 7 5 12 33 14 32 24 37 13 4", "12 45 15 10 39 22 34 6 37 21 27 25 30 16 40", "16 9 44 21 38 35 7 19 13 10 33 6 48 31 17", "28 30 24 3 14 9 13 0 41 12 33 42 35 34 36", "32 40 31 1 35 2 5 38 9 14 28 39 27 37 42", "21 41 35 13 10 18 0 39 37 29 11 40 45 28 36", "33 37 30 39 2 7 8 35 16 31 34 11 4 15 23"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> maze = {"38 7 9 8 43 48 30 41 5 22 26 35 33 4", "14 39 25 35 30 45 18 12 10 8 21 46 22 37 20", "15 37 26 44 19 17 39 16 7 18 45 36 20 42 24", "21 43 26 8 28 10 4 48 25 46 49 31 37 27 15", "8 31 30 3 0 36 41 5 34 25 44 32 9 14 22", "46 33 38 4 47 34 17 6 45 10 41 48 31 43 0", "5 40 17 19 22 43 18 47 31 9 7 15 29 28 23", "19 38 21 11 34 31 9 0 48 30 44 2 26 16 6", "48 12 3 49 0 41 1 28 35 40 36 4 29 33 43", "18 36 6 47 26 37 27 22 0 46 23 41 4 24 7", "42 13 35 28 31 12 11 3 1 20 16 45 19 40 5", "14 15 45 46 13 7 27 39 25 38 44 17 16 10 43", "48 8 15 42 47 10 29 45 39 1 19 25 44 32 26", "47 24 11 36 41 42 16 38 37 20 32 31 45 29 10", "31 48 49 25 11 38 18 23 43 4 22 41 24 1 27", "32 34 23 11 6 43 2 22 48 45 17 41 12 16 3", "7 46 18 28 20 19 43 31 27 2 15 13 39 10 11", "19 26 28 2 30 23 15 5 24 47 25 18 6 42 11", "26 6 24 46 17 42 45 14 16 9 22 27 1 33 2", "30 6 17 37 39 33 49 2 21 46 16 27 7 10 12", "13 32 41 1 39 16 42 27 2 33 40 24 45 48 10", "36 37 41 1 30 7 23 35 40 44 26 47 39 3 19", "14 6 23 40 0 43 9 29 1 18 31 15 28 34 4", "30 14 6 28 34 22 48 9 40 21 42 17 15 37 32", "48 40 44 26 9 20 13 43 17 2 18 29 14 42 46", "32 12 43 1 17 39 29 14 3 36 11 40 4 49 33", "0 7 39 3 12 49 38 36 21 29 18 17 9 2 24", "29 28 38 16 18 46 9 3 35 36 40 20 14 11 19", "33 39 35 38 3 6 22 10 23 17 27 46 16 8 42", "13 26 25 37 33 44 12 48 6 41 46 24 8 22 27", "34 41 38 21 0 19 23 4 7 49 1 44 17 40 35", "3 14 32 4 5 37 7 6 13 10 22 16 44 47 49", "15 4 13 31 38 23 42 20 12 46 35 25 43 34 37", "39 44 19 0 18 28 20 37 29 48 8 45 25 5 34", "36 44 47 7 15 4 33 30 42 32 22 40 5 23 41", "40 27 42 8 45 32 10 0 28 1 49 46 30 47 21", "4 2 21 47 8 38 27 45 39 13 49 26 9 25 34", "42 21 31 29 13 47 32 3 9 33 2 23 45 1 19", "0 43 7 28 44 13 27 32 49 14 36 11 5 30 26", "16 36 21 20 12 48 26 41 2 11 28 33 1 19 25", "8 22 10 6 35 20 25 23 41 27 30 24 44 34 21", "13 29 39 15 0 30 40 20 4 5 34 14 8 9 21", "28 10 32 17 34 37 13 2 18 20 12 24 35 49 23", "5 47 25 24 11 8 14 38 16 6 32 15 22 3 0", "40 38 30 21 31 46 34 29 11 33 4 12 24 2 7", "35 49 36 10 12 11 37 18 33 2 20 1 13 15 5", "3 28 35 1 19 9 18 27 32 44 24 11 29 16 5", "9 43 6 31 12 13 35 21 36 5 49 34 48 17 37", "24 33 5 8 15 12 47 29 0 7 23 20 14 39 3", "19 3 14 8 38 47 30 36 35 25 31 26 42 45"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> maze = {"1 2 3", "4 5 0", "6 7 0", "8 9 0", "10 11 1", "12 13 1", "14 15 2", "16 17 2", "18 19 3", "20 21 3", "22 23 4", "24 25 4", "26 27 5", "28 29 5", "30 31 6", "32 33 6", "34 35 7", "36 37 7", "38 39 8", "40 41 8", "42 43 9", "44 45 9", "10", "10", "11", "11", "12", "12", "13", "13", "14", "14", "15", "15", "16", "16", "17", "17", "18", "18", "19", "19", "20", "20", "21", "21"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> maze = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "0 2 21 20 22", "0 3 21 1", "0 4 21 2", "0 5 21 3", "0 6 21 4", "0 7 21 5", "0 8 21 6", "0 9 21 7", "0 10 21 8", "0 11 21 9", "0 12 21 10", "0 13 21 11", "0 14 21 12", "0 15 21 13", "0 16 21 14", "0 17 21 15", "0 18 21 16", "0 19 21 17", "0 20 21 18", "0 1 21 19", "20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1", "1"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> maze = {"1 3", "2 0 4", "3 5 1", "0 2", "1", "2", ""};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 0};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> maze = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "0 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "0 1 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "0 1 2 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "0 1 2 3 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "0 1 2 3 4 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "0 1 2 3 4 5 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "0 1 2 3 4 5 6 8 9 10 11 12 13 14 15 16 17 18 19 20", "0 1 2 3 4 5 6 7 9 10 11 12 13 14 15 16 17 18 19 20", "0 1 2 3 4 5 6 7 8 10 11 12 13 14 15 16 17 18 19 20", "0 1 2 3 4 5 6 7 8 9 11 12 13 14 15 16 17 18 19 20", "0 1 2 3 4 5 6 7 8 9 10 12 13 14 15 16 17 18 19 20", "0 1 2 3 4 5 6 7 8 9 10 11 13 14 15 16 17 18 19 20", "0 1 2 3 4 5 6 7 8 9 10 11 12 14 15 16 17 18 19 20", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 15 16 17 18 19 20", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 16 17 18 19 20", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 17 18 19 20", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 18 19 20", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 19 20", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 20", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38", "21 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38", "21 22 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38", "21 22 23 25 26 27 28 29 30 31 32 33 34 35 36 37 38", "21 22 23 24 26 27 28 29 30 31 32 33 34 35 36 37 38", "21 22 23 24 25 27 28 29 30 31 32 33 34 35 36 37 38", "21 22 23 24 25 26 28 29 30 31 32 33 34 35 36 37 38", "21 22 23 24 25 26 27 29 30 31 32 33 34 35 36 37 38", "21 22 23 24 25 26 27 28 30 31 32 33 34 35 36 37 38", "21 22 23 24 25 26 27 28 29 31 32 33 34 35 36 37 38", "21 22 23 24 25 26 27 28 29 30 32 33 34 35 36 37 38", "21 22 23 24 25 26 27 28 29 30 31 33 34 35 36 37 38", "21 22 23 24 25 26 27 28 29 30 31 32 34 35 36 37 38", "21 22 23 24 25 26 27 28 29 30 31 32 33 35 36 37 38", "21 22 23 24 25 26 27 28 29 30 31 32 33 34 36 37 38", "21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 37 38", "21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 38", "21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37", "40 41 42 43 44 45 46 47 48 49", "39 41 42 43 44 45 46 47 48 49", "39 40 42 43 44 45 46 47 48 49", "39 40 41 43 44 45 46 47 48 49", "39 40 41 42 44 45 46 47 48 49", "39 40 41 42 43 45 46 47 48 49", "39 40 41 42 43 44 46 47 48 49", "39 40 41 42 43 44 45 47 48 49", "39 40 41 42 43 44 45 46 48 49", "39 40 41 42 43 44 45 46 47 49", "39 40 41 42 43 44 45 46 47 48"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> maze = {"1 47 49", "0 2", "1 3", "2 4", "3 5", "4 6", "5 7", "6 8", "7 9", "8 10", "9 11", "10 12", "11 13", "12 14", "13 15", "14 16", "15 17", "16 18", "17 19", "18 20", "19 21", "20 22", "21 23", "22 24", "23 25", "24 26", "25 27", "26 28", "27 29", "28 30", "29 31", "30 32", "31 33", "32 34", "33 35", "34 36", "35 37", "36 38", "37 39", "38 40", "39 41", "40 42", "41 43", "42 44", "43 45", "44 46", "45", "0 48", "47 49", "48 0"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> maze = {"1 2", "2 0", "0 1", "4 6", "5 3", "6 4", "3 5", "", "9", "8", "11 12 13", "10 12 13", "10 11 13", "10 11 12"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 6, 6, 6, 6, 6, 0, 1, 1, 3, 3, 3, 3};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> maze = {"1 2 3 4 5 6", "0 2", "0 1", "0", "0 5", "0 4", "0"};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> maze = {"", "2", "1", "", "", "", "7", "6", ""};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 3, 4, 4, 4, 3, 3, 4};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> maze = {"", "", "", "", ""};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4, 4, 4};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> maze = {"1", "0", "", ""};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> maze = {"", "", "", ""};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 3, 3};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> maze = {"", ""};
    TwistyPassages* pObj = new TwistyPassages();
    clock_t start = clock();
    vector<int> result = pObj->similarRooms(maze);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=10798&pm=8282
********************************************************************************
#include <algorithm>   
#include <iostream>   
#include <sstream>   
#include <string>   
#include <vector>   
#include <queue>   
#include <set>   
#include <map>   
#include <cstdio>   
#include <cstdlib>   
#include <cctype>   
#include <cmath>   
#include <list>   
using namespace std;   
 
#define PB push_back 
#define MP make_pair 
#define SZ(v) ((int)(v).size()) 
#define FOR(i,a,b) for(int i=(a);i<(b);++i) 
#define REP(i,n) FOR(i,0,n) 
#define FORE(i,a,b) for(int i=(a);i<=(b);++i) 
#define REPE(i,n) FORE(i,0,n) 
#define FORSZ(i,a,v) FOR(i,a,SZ(v)) 
#define REPSZ(i,v) REP(i,SZ(v)) 
typedef long long ll; 
 
void norm(vector<vector<int> > &x) { 
  vector<vector<int> > y=x; 
  REPSZ(i,y) { 
    if(y<x) x=y; 
    y.PB(y[0]); 
    y.erase(y.begin()); 
  } 
} 
 
vector<int> get(const vector<int> &type,const vector<int> &door,int at,int me) { 
  REPSZ(i,door) if(door[i]==at) { 
    vector<int> ret(1,type[me]); 
    FORSZ(j,1,door) ret.PB(type[door[(i+j)%SZ(door)]]); 
    return ret; 
  } 
  assert(false); 
} 
 
class TwistyPassages {   
public:   
  vector <int> similarRooms(vector <string> maze) { 
    int n=SZ(maze); 
    vector<int> type(n,0); int nrtypes=1; 
    vector<vector<int> > doors(n,vector<int>(0)); 
    REP(i,n) { istringstream iss(maze[i]); int j; while(iss>>j) doors[i].PB(j); } 
     
    while(true) { 
      bool change=false; 
      REP(i,nrtypes) { 
        map<vector<vector<int> >,vector<int> > have; 
        REP(j,n) if(type[j]==i) { 
          vector<vector<int> > cur(SZ(doors[j])); REPSZ(k,doors[j]) cur[k]=get(type,doors[doors[j][k]],j,doors[j][k]); norm(cur); 
          have[cur].PB(j); 
        } 
        if(SZ(have)>1) { 
          for(map<vector<vector<int> >,vector<int> >::iterator j=have.begin();j!=have.end();++j) { 
            if(j==have.begin()) continue; 
            REPSZ(k,j->second) type[j->second[k]]=nrtypes; 
          } 
          nrtypes++; 
          change=true; 
          break; 
        } 
      } 
      if(!change) break; 
    } 
    REP(j,n) { 
      printf("%d (%d): ",j,type[j]); 
          vector<vector<int> > cur(SZ(doors[j])); REPSZ(k,doors[j]) cur[k]=get(type,doors[doors[j][k]],j,doors[j][k]); norm(cur); 
      REPSZ(j,cur) { printf("["); REPSZ(k,cur[j]) printf("%d%c",cur[j][k],k==SZ(cur[j])-1?']':','); } 
      puts(""); 
    } 
     
    vector<int> ret(n,0); 
    REP(i,n) REP(j,n) if(i!=j&&type[i]==type[j]) ++ret[i]; 
    return ret; 
  }   
};

********************************************************************************
*******************************************************************************/