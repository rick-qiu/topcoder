/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5981
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

class GalaxyExpedition {
public:
    vector<int> possibleValues(vector<string> dependencies);
};

vector<int> GalaxyExpedition::possibleValues(vector<string> dependencies) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> dependencies = {"1 2", "0 2", "3", ""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> dependencies = {"1", "2", "0"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> dependencies = {"1", "0", "3", "2"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> dependencies = {"", "2 0", "0 1", "0 4", "3 0"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 5};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> dependencies = {""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> dependencies = {"", ""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> dependencies = {"1", "0"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> dependencies = {"", "", ""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
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
    vector<string> dependencies = {"1 2", "0 2", "0 1"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> dependencies = {"1", "", "1"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
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
    vector<string> dependencies = {"1 2", "0 2", "1"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> dependencies = {"1 2", "0 2", ""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> dependencies = {"1", "0", "0 1"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> dependencies = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> dependencies = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "48"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> dependencies = {"2 4 1 3 5", "3 5 0 2 4", "4 1 3 5", "5 0 2 4", "1 3 5", "0 2 4"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> dependencies = {"22", "23", "24", "19", "21", "20", "28", "10", "5", "36", "35", "31", "4", "0", "13", "33", "40", "16", "42", "38", "17", "32", "26", "3", "41", "9", "37", "2", "27", "15", "8", "14", "18", "44", "12", "45", "7", "30", "39", "34", "46", "25", "6", "11", "1", "43", "29"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> dependencies = {"31", "14", "5", "18", "43", "2", "19", "36", "16", "23", "37", "13", "46", "11", "1", "20", "8", "34", "3", "6", "15", "39", "27", "9", "35", "47", "40", "22", "42", "41", "33", "0", "45", "30", "17", "24", "7", "10", "44", "21", "26", "29", "28", "4", "38", "32", "12", "25"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> dependencies = {"", "28 23 18 26 42 7 12 17 16 27 14 36 13 15 5 19", "3 21 35 8 9 41 43 40 38 6 24 22 29 32 37 33 20", "33 21 24 22 8 29 37 35 20 9 2 6 40 32 43 41 38", "", "16 1 27 17 23 19 7 36 42 18 14 15 13 28 12 26", "2 8 43 32 33 38 9 40 41 29 24 22 37 21 35 20 3", "17 36 26 42 15 28 12 19 5 18 27 13 1 16 23 14", "20 43 3 33 6 21 9 37 40 38 22 24 2 32 35 41 29", "33 40 6 32 41 21 3 8 20 38 35 2 22 43 29 37 24", "", "", "1 23 14 17 5 42 27 36 28 7 16 26 19 18 15 13", "36 1 26 7 12 42 16 18 28 5 27 15 23 19 14 17", "13 28 12 5 19 23 42 1 16 27 36 26 7 15 18 17", "27 28 23 16 12 42 7 36 19 26 14 5 18 1 13 17", "13 12 7 28 18 26 36 42 19 23 15 5 1 27 14 17", "1 26 7 42 16 36 14 12 28 27 15 18 23 5 13 19", "27 1 13 23 19 16 26 14 7 28 12 15 36 5 17 42", "13 7 14 26 36 23 12 5 1 28 27 42 17 15 18 16", "41 29 2 9 21 6 33 24 38 40 37 8 32 35 22 43 3", "32 9 20 22 38 40 41 43 29 8 33 6 24 2 3 35 37", "6 33 41 3 20 2 40 29 9 38 24 37 21 32 43 8 35", "18 36 42 1 19 5 13 16 15 17 27 14 12 28 7 26", "21 22 33 38 37 41 32 2 3 9 6 29 40 43 20 35 8", "", "36 19 28 14 15 13 27 17 16 42 1 23 7 5 12 18", "26 7 18 36 23 19 42 17 1 28 12 16 15 5 13 14", "26 13 7 12 15 18 19 36 5 16 23 1 17 42 27 14", "20 2 3 9 24 32 6 8 40 22 41 33 35 43 21 37 38", "39", "", "29 38 41 24 2 21 22 8 40 3 9 35 43 37 20 6 33", "29 24 22 9 40 43 20 21 37 35 32 38 8 41 6 2 3", "", "24 20 2 3 6 29 41 32 9 43 8 33 21 40 37 22 38", "17 14 7 26 15 27 5 1 28 23 12 42 13 18 16 19", "41 2 38 8 40 22 43 29 9 32 24 35 33 20 3 21 6", "33 41 21 32 9 40 3 8 43 29 2 37 24 35 20 22 6", "30", "32 41 24 22 9 33 37 38 2 6 20 35 21 8 3 43 29", "20 40 3 35 33 24 38 8 22 37 9 43 21 32 2 6 29", "16 23 36 18 5 17 15 13 27 26 19 28 7 1 14 12", "35 38 40 29 24 8 6 32 41 3 20 33 21 2 9 37 22"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> dependencies = {"7", "7", "13", "13", "7", "7", "13", "13", "7", "13", "13", "13 7", "7 13", "7", "7 13", "7 13", "13", "7", "7", "7", "7", "7", "7", "7", "13", "7", "13", "7", "13 7", "13 7", "13", "13", "13", "13 7", "13 7", "7 13", "7 13", "7", "7", "13", "13", "7", "7", "13 7", "13", "13", "7", "7 13", "7"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> dependencies = {"41 30", "41 9", "11 41", "4 41", "36 41", "8 41", "47 41", "29 41", "44 41", "41 5", "41 31", "3 41", "41 7", "", "41 39", "41 25", "2 41", "41 28", "41 38", "41 6", "27 41", "41 22", "37 41", "35 41", "1 41", "16 41", "41 42", "26 41", "41 33", "10 41", "32 41", "41 14", "41 17", "19 41", "41 15", "41 24", "41 40", "43 41", "12 41", "46 41", "0 41", "13", "41 18", "20 41", "45 41", "34 41", "23 41", "21 41"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 48};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> dependencies = {"29 32", "22 34", "19 43", "41 11", "20 35", "12 40", "44 21", "37 25", "33 15", "39 17", "13 16", "41 3", "5 40", "10 16", "24 31", "33 8", "10 13", "9 39", "28 26", "43 2", "35 4", "44 6", "34 1", "47 36", "31 14", "7 37", "28 18", "42 46", "26 18", "0 32", "38 45", "14 24", "29 0", "15 8", "1 22", "20 4", "23 47", "7 25", "30 45", "17 9", "5 12", "11 3", "46 27", "19 2", "21 6", "30 38", "27 42", "23 36", ""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 6, 7, 9, 10, 12, 13, 15, 16, 18, 19, 21, 22, 24, 25, 27, 28, 30, 31, 33, 34, 36, 37, 39, 40, 42, 43, 45, 46, 48, 49};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> dependencies = {"39 32 26 37 17 18 28 9 48", "33 4 27 46 42 34 22 20 35", "40 5 3 43 41 11 12 29 19", "40 43 19 5 2 41 11 12 29", "27 33 42 20 22 35 34 46 1", "43 2 3 29 12 40 11 41 19", "31 47 23 14 44 24 21 45 36", "30 25 10 15 8 16 13 38 49", "38 15 25 49 30 10 7 16 13", "28 39 18 26 48 32 0 37 17", "16 25 49 7 15 13 8 30 38", "40 29 41 3 5 12 19 43 2", "5 29 41 3 19 43 2 40 11", "38 30 25 15 16 8 49 7 10", "31 47 23 24 44 45 21 6 36", "38 13 16 8 30 25 7 10 49", "13 38 25 15 49 8 10 7 30", "26 28 0 9 18 32 39 48 37", "26 48 32 9 0 17 37 28 39", "40 11 3 43 29 2 5 41 12", "35 33 46 42 4 1 34 22 27", "14 45 24 44 31 23 47 6 36", "4 27 35 34 42 33 20 46 1", "44 47 36 24 21 6 31 14 45", "36 45 44 47 6 14 31 21 23", "15 16 10 38 49 13 30 7 8", "39 18 48 17 28 9 0 32 37", "34 4 33 35 22 42 20 46 1", "17 0 9 37 39 48 26 18 32", "5 11 19 41 40 12 43 3 2", "25 10 7 38 16 49 13 8 15", "6 44 45 47 21 24 14 23 36", "28 9 39 18 17 48 26 0 37", "42 20 4 46 22 34 27 1 35", "46 22 27 33 4 20 1 42 35", "4 27 42 1 46 22 33 34 20", "21 44 14 6 31 45 23 47 24", "0 26 28 17 39 9 18 32 48", "8 25 30 16 49 10 15 13 7", "28 26 9 32 37 48 0 17 18", "12 5 19 41 29 2 3 11 43", "19 11 29 12 2 3 40 5 43", "1 33 34 20 4 27 35 46 22", "40 41 19 12 29 2 11 5 3", "24 36 31 23 6 21 45 47 14", "21 31 6 36 14 23 44 47 24", "34 22 35 4 33 20 42 1 27", "14 6 21 36 24 31 44 45 23", "39 26 0 18 17 37 32 28 9", "10 16 25 13 30 8 15 38 7"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 20, 30, 40, 50};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> dependencies = {"18", "19 21 29 24 8 13 31 23 2 20 12 28 22 3 9 14", "20 29 24 12 23 8 21 3 9 28 13 1 22 14 19 31", "29 9 23 21 22 31 20 1 8 12 19 14 2 24 28 13", "17 16 25", "7 10 15 6 30 27 26", "7 10 26 15 27 5 30", "6 10 27 26 5 15 30", "2 19 31 22 21 20 29 23 1 24 28 14 13 3 12 9", "21 29 24 1 14 23 13 28 20 31 19 8 2 12 3 22", "26 27 5 6 15 30 7", "", "21 14 23 3 24 22 20 31 28 9 2 29 19 1 8 13", "8 12 2 19 14 29 31 21 22 23 24 28 1 9 20 3", "24 19 9 3 23 12 22 21 28 20 13 1 29 31 2 8", "26 7 5 30 27 6 10", "25 4 17", "4 25 16", "0", "21 28 3 20 1 31 8 22 12 2 13 14 9 23 24 29", "29 3 31 23 24 22 14 1 2 13 8 21 28 19 9 12", "9 22 28 29 31 2 20 14 3 8 13 23 12 19 1 24", "12 1 24 9 23 29 3 14 19 2 13 31 21 28 8 20", "29 28 3 14 9 20 19 24 12 8 31 2 13 21 22 1", "20 2 3 22 13 29 9 21 31 1 12 8 14 23 28 19", "16 17 4", "27 15 30 6 5 10 7", "10 5 30 15 6 26 7", "29 12 23 24 1 20 14 8 2 31 19 13 22 21 3 9", "23 22 9 20 1 8 14 13 19 2 3 31 21 24 12 28", "26 5 27 7 10 15 6", "14 9 12 29 22 3 21 19 13 1 2 23 28 8 20 24"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> dependencies = {"", "8 12 6 10 9 14 4 3 0 7 15 11 2 13 5", "14 10 13 15 8 7 9 1 6 12 3 4 11 0 5", "9 15 8 1 10 0 7 12 4 11 5 6 14 2 13", "11 15 0 10 6 5", "4 10 11 15 0 6", "0 15 11 4 10 5", "2 0 9 1 12 5 15 4 11 3 8 13 14 6 10", "6 11 9 7 0 10 14 1 13 4 2 5 12 3 15", "3 11 4 13 2 1 14 10 15 7 12 6 5 0 8", "11 0", "10 0", "15 4 2 10 0 5 14 7 1 3 11 8 9 6 13", "4 9 11 6 5 3 15 1 10 8 12 0 7 2 14", "6 5 8 13 11 12 2 9 15 10 3 0 1 7 4", "11 5 4 0 10 6"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 7, 16};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> dependencies = {"8 13 17 3 12 11 9 15 1 10 6", "", "6 4 0 9 16 10 15 12 1 14 11 8 13 7 3 17 5 18", "13 1 11 10 8 12", "14 17 11 18 7 12 15 0 5 1 6 3 10 16 13 9 8", "1 15 11 0 13 17 10 6 8 12 3 9", "3 13 9 11 1 12 10 8", "12 8 13 1 9 5 11 15 3 6 0 17 10", "10 1", "12 8 13 1 10 3 11", "1", "1 10 8", "11 8 10 1", "10 1 12 8 11", "8 1 0 17 5 6 9 12 16 11 7 15 10 3 18 13", "10 12 8 17 3 11 13 6 1 9", "13 11 12 18 8 10 17 6 15 7 5 1 0 9 3", "8 12 1 11 6 3 9 10 13", "17 13 9 0 11 8 3 15 6 10 5 7 12 1"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> dependencies = {"9", "43", "", "45", "20", "12", "38", "6", "28", "46", "15", "41", "18", "28", "27", "19", "23", "14", "41", "40", "40", "45", "14", "27", "23", "12", "31", "7", "20", "8", "15", "19", "4", "49", "9", "37", "37", "46", "2", "8", "38", "6", "43", "18", "49", "11", "7", "4", "31", "11"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> dependencies = {"46 34", "18 42", "38", "21 11", "40 28", "18 25", "2 40", "41 38", "13 20", "37 7", "30 19", "18 6", "43 41", "20 8", "7 23", "31 40", "27 24", "22 27", "6 11", "20 38", "19 38", "11 3", "27 17", "14 7", "27 16", "5 18", "19 39", "6 46", "40 4", "41 45", "10 19", "40 15", "20 47", "44 11", "46 0", "46 36", "35 46", "7 9", "2", "19 26", "2 6", "38 7", "1 18", "12 41", "33 11", "41 29", "27 6", "20 32"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> dependencies = {"4", "7 11", "3", "8", "10", "1", "1 7", "8 12", "9", "14", "2", "7 13", "15 8", "7 6", "0", "7 8", "13"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 11, 15, 16, 17};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> dependencies = {"9 6 18 4 17 10 13 2 5 11 14 12 16 1 15 19 8 7 3", "9 2 4 8 5 17 13 6 16 7 18 11 19 15 10", "9 18 5 11 0 16 8 6 17 7 4 1 3 13 12 19 15", "8 15 17 10 6 11 2 4 0 1 7 14 5 9 13 12 16 18", "12 16 19 7 1 10 8 11 15 5 9 6 17 14 13 2 3 0", "19 6 14 10 17 12 8 2 16 0 18 15 3 1 4 7 13 9 11", "5 17 10 18 9 2 15 11 14 0 16 7 1 3 8 19 12 13", "0 15 18 2 4 6 14 19 3 1 17 5 13 16 12 8 10 11", "0 18 4 15 14 11 10 19 3 5 17 12 6 16 13 2 9 7", "11 0 19 8 3 14 12 15 5 13 7 2 17 16 10 4 18", "9 2 0 18 15 12 1 13 14 6 8 5 17 7 4 16 11 19 3", "16 5 13 2 8 12 0 14 10 17 18 1 19 6 4 15 3", "5 0 2 7 3 19 8 17 14 15 6 9 10 1 4", "4 1 14 8 7 9 19 10 16 6 11 5 3 17 0 18 2 12 15", "2 9 0 5 4 3 19 16 8 6 17 15 18 12 13 11 1 10 7", "19 17 11 14 4 13 0 5 10 2 16 18 8 6 7 1 3 9", "8 18 19 0 9 10 14 13 1 3 12 2 15 4 6 7 11 17", "18 0 16 2 11 9 8 1 3 4 15 10 19 5 14 12 7 13", "9 12 6 4 7 0 8 14 16 19 10 3 11 13 17 1 5 2 15", "1 14 12 17 9 10 6 7 8 5 4 2 18 0 13 16 3"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> dependencies = {"17", "20", "21", "15", "45", "25", "0", "26", "0", "0", "1", "21", "37", "42", "3", "46", "19", "43", "42", "45", "19", "40", "38", "29", "26", "31", "18", "24", "17", "6", "38", "38", "3", "31", "25", "38", "40", "2", "48", "15", "5", "38", "3", "37", "20", "29", "1", "46", "24", "29"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> dependencies = {"16", "26", "5 12", "22", "11", "1", "21 36", "20", "10 5", "17 27", "5 25", "17 16", "5 14", "32", "5 8", "13", "17 9", "24", "3", "7", "29", "5 2", "30", "6 21", "18", "35 5", "34", "11 17", "33", "28", "15", "17", "19", "5", "31", "5 21", "21 23"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 24, 25, 26, 28, 31, 32, 33, 34, 35, 36, 37};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> dependencies = {"19", "11 6", "19", "18 10", "3 18", "8 6", "11 18", "11", "6 5", "7", "4 18", "12", "13", "20", "17 11", "16", "0", "11 1", "11 14", "9", "15"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 11, 15, 16, 17, 18, 19, 20, 21};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> dependencies = {"13", "3", "29", "40", "6", "27", "32", "2", "14", "14 36", "0", "", "7", "4", "10", "26 14", "18", "38", "12", "9 42", "30", "16", "14 9", "33", "1", "37 26", "14 22", "8", "17", "20", "39", "17", "5", "24", "31", "19 9", "14 15", "26 25", "23", "34", "21", "10", "9 35"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 10, 11, 12, 15, 16, 17, 18, 19, 20, 21, 22, 30, 31, 32, 33, 35, 36, 37, 38, 39, 40, 41, 42, 43};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> dependencies = {"23", "19 41", "9 34", "8", "28 16", "30", "21", "10 15", "29", "34 27", "7 15", "20", "3", "37", "33", "34 16", "5", "4 16", "41", "1 41", "22", "40", "14", "26", "12", "42", "16", "34 2", "15 16", "32", "18", "35", "36", "13", "17 16", "0", "6", "38", "24", "42", "25", "31", "11"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 12, 15, 17, 18, 19, 20, 21, 22, 30, 31, 32, 33, 35, 36, 37, 38, 39, 40, 41, 42, 43};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> dependencies = {"16", "28", "3", "29", "45", "2 12", "9", "26", "2", "19", "24", "48", "2 17", "10", "40 18", "46", "30", "40 2", "35 40", "43", "36", "27", "4", "44 37", "22", "37", "0", "32", "6", "11", "13", "25", "33", "20", "39 12", "40 14", "47", "41", "15", "12 34", "49 2", "8", "45", "38", "23 37", "1", "7", "21", "31", "2 5"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 10, 12, 15, 17, 18, 19, 20, 21, 22, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> dependencies = {"34", "16", "3 20", "40 21", "30", "47 29", "7", "24", "49", "41", "32", "0", "28 40", "47 5", "27", "22", "25", "48", "14", "40", "3 2", "47 40", "44", "39", "18", "15", "24", "45", "3 40", "47 13", "1", "23", "19", "37", "11", "10 36", "10 35", "43", "33", "9", "46", "10", "6", "38", "8", "4", "31", "40 12", "42", "17"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 7, 10, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> dependencies = {"9", "35", "32", "28 40", "44 11", "45", "29 19", "24", "1", "25", "26 21", "44 4", "8", "41", "0", "5", "13", "46 40", "38", "27", "42 30", "26 10", "15", "33", "2", "49", "23", "37", "40 44", "19 6", "20 42", "40", "34", "12", "16", "7", "42 40", "14", "26", "36 40", "19", "43", "3 40", "47", "40 17", "22", "40 39", "48", "18", "31"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> dependencies = {"29", "9", "10", "48", "37", "11", "29 24", "45 16", "36", "23", "13", "17", "8", "25", "12", "35", "7 45", "14", "47", "33", "26 29", "42", "18", "40", "29 27", "43", "29 6", "45 29", "44 31", "46", "15", "28 44", "10", "3", "20 29", "0", "4", "21", "48 39", "38 48", "1", "22", "32", "41", "29 34", "29 44", "19", "5", "30"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 10, 12, 14, 16, 18, 20, 21, 22, 24, 25, 26, 28, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> dependencies = {"29", "9", "40 10", "48", "37", "11", "29 24", "16 45", "36", "23", "13", "17", "8", "25", "12", "35", "7 45", "14", "47", "33", "29 26", "42", "18", "1", "29 27", "43", "29 6", "45 29", "31 44", "46", "15", "28 44", "10", "3", "29 20", "0", "4", "21", "39 48", "38 48", "2 10", "22", "32", "41", "34 29", "44 29", "19", "5", "30"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 10, 12, 13, 15, 18, 20, 21, 22, 23, 24, 25, 27, 30, 32, 33, 34, 35, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47, 49};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> dependencies = {"1", "33", "28", "4", "18", "45", "42 35", "48", "25", "44 6", "0", "41 39", "16", "17", "20", "42 29", "8", "23", "2", "14", "46", "13", "9 6", "19", "38", "32", "39 11", "45", "10", "42 6", "47", "39", "31", "42", "30", "43 42", "7", "42 15", "21", "24", "5", "39 26", "12", "37 42", "22 6", "40", "3", "34", "36"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 6, 7, 9, 10, 27, 30, 31, 33, 34, 36, 37, 39, 40, 42, 43, 45, 46, 48, 49};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> dependencies = {"", "4 34", "30 45", "39", "6 13 24 27 28 29 30 34 35 36 37 45 49", "40", "4 13 24 27 28 29 30 34 35 36 37 45 49", "", "", "30", "", "", "", "4 6 24 27 28 29 30 34 35 36 37 45 49", "", "", "7", "47", "39", "16", "3 39", "30", "", "", "4 6 13 27 28 29 30 34 35 36 37 45 49", "", "6 13", "4 6 13 24 28 29 30 34 35 36 37 45 49", "4 6 13 24 27 29 30 34 35 36 37 45 49", "4 6 13 24 27 28 30 34 35 36 37 45 49", "4 6 13 24 27 28 29 34 35 36 37 45 49", "17 47", "", "", "4 6 13 24 27 28 29 30 35 36 37 45 49", "4 6 13 24 27 28 29 30 34 36 37 45 49", "4 6 13 24 27 28 29 30 34 35 37 45 49", "4 6 13 24 27 28 29 30 34 35 36 45 49", "", "3", "41", "", "29", "13 24 37", "31", "4 6 13 24 27 28 29 30 34 35 36 37 49", "", "17", "33", "4 6 13 24 27 28 29 30 34 35 36 37 45"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> dependencies = {"2", "2", "", "4", ""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> dependencies = {"26", "23", "46", "5", "23", "33", "7", "40", "44", "20", "47", "13", "23", "23", "40", "45", "31", "46", "45", "49", "22", "37", "40", "44", "48", "35", "33", "43", "32", "31", "41", "34", "49", "47", "47", "46", "48", "41", "43", "40", "45", "42", "43", "48", "46", "47", "48", "49", "49", ""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> dependencies = {"", "2 0", "0 1", "0 4", "3 0"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 5};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> dependencies = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> dependencies = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> dependencies = {"", "2 0", "0 1", "0 4", "3 0", "3 0", "3 0", "3 0", "3 0", "3 0", "1 0"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> dependencies = {"5", "", "1", "1", "1", "8", "5", "6", "6"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> dependencies = {"", "", "", "", "", "", "", "", "", "", ""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> dependencies = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", ""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> dependencies = {"1", "0", "3", "2", "5", "4"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 6};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> dependencies = {"1", "0", "3 4", "2 4", "2 3", "6", "5"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 7};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> dependencies = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> dependencies = {"", "2 3", "1 3", "1 2", "", "6 7", "5 7", "5 6"};
    GalaxyExpedition* pObj = new GalaxyExpedition();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=9811&pm=5981
********************************************************************************
// another fine solution by misof
// #includes {{{
#include <algorithm>
#include <numeric>
 
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
#include <cassert>
 
#include <cmath>
#include <complex>
using namespace std;
// }}}
 
/////////////////// PRE-WRITTEN CODE FOLLOWS, LOOK DOWN FOR THE SOLUTION ////////////////////////////////
 
// pre-written code {{{
#define CLEAR(t) memset((t),0,sizeof(t))
#define FOR(i,a,b) for(int i=(int)(a);i<=(int)(b);++i)
#define FORD(i,a,b) for(int i=(int)(a);i>=(int)(b);--i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define SIZE(t) ((int)((t).size()))
vector<string> SPLIT( const string& s, const string& delim =" " ) { vector<string> res; string t; for ( unsigned int i = 0 ; i != s.size() ; i++ ) { if ( delim.find( s[i] ) != string::npos ) { if ( !t.empty() ) { res.push_back( t ); t = ""; } } else { t += s[i]; } } if ( !t.empty() ) { res.push_back(t); } return res; }
vector<int> SPLITINT( const string& s, const string& delim =" " ) { vector<string> tok = SPLIT( s, delim ); vector<int> res; for ( unsigned int i = 0 ; i != tok.size(); i++ ) res.push_back( atoi( tok[i].c_str() ) ); return res; }
typedef vector<int> VI;
// }}}
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
int G1[52][52];
int C[52];
int N;
int G2[52][52];
int wt[52];
int moze[52][52];
 
class GalaxyExpedition {
public:
  vector <int> possibleValues(vector <string> dependencies) {
    
    CLEAR(G1);
    N = SIZE(dependencies);
    
    REP(i,N) {
      VI V = SPLITINT(dependencies[i]);
      REP(j,SIZE(V)) G1[ i ][ V[j] ] = 1;
    }
 
    memset(C,-1,sizeof(C));
    int pocC = 0;
    
    REP(v,N) if (C[v]==-1) {
      vector<int> bol1(N,0), bol2(N,0);
      
      bol1[v]=1;
      queue<int> Q1; Q1.push(v);
      while (!Q1.empty()) {
        int kde = Q1.front(); Q1.pop();
        REP(i,N) if (G1[kde][i]) if (!bol1[i]) { bol1[i]=1; Q1.push(i); }
      }
      
      bol2[v]=2;
      queue<int> Q2; Q2.push(v);
      while (!Q2.empty()) {
        int kde = Q2.front(); Q2.pop();
        REP(i,N) if (G1[i][kde]) if (!bol2[i]) { bol2[i]=2; Q2.push(i); }
      }
 
      wt[pocC]=0;
      REP(i,N) if (bol1[i] && bol2[i]) { C[i]=pocC; wt[pocC]++; }
      pocC++;
    }
 
    CLEAR(G2);
 
    REP(i,N) REP(j,N) if (G1[i][j]) if (C[i] != C[j]) G2[ C[i] ][ C[j] ]=1;
 
    int zmena = 1;
    while (zmena) {
      zmena = 0;
      REP(i,pocC) REP(j,pocC) if (G2[i][j]) {
        REP(k,pocC) if (G2[i][k] && G2[j][k]) {
          G2[i][k]=0; zmena=1;
        }
      }
    }
 
    CLEAR(moze);
 
    vector<int> done(pocC,0);
    vector<int> indegree(pocC,0);
 
    REP(i,pocC) REP(j,pocC) if (G2[i][j]) indegree[j]++;
 
    REP(loop,pocC) {
      int kde=0;
      while (done[kde] || indegree[kde]) kde++;
 
      moze[kde][ wt[kde] ]=1;
 
      REP(i,pocC) if (G2[i][kde]) {
        FORD(p,N,0) {
          // find out whether now it is possible to take p
          FOR(q,0,p) if (moze[i][q] && moze[kde][p-q]) moze[kde][p]=1;
        }
      }
 
      REP(i,pocC) if (G2[kde][i]) indegree[i]--;
      done[kde]=1;
    }
 
    vector<int> faktmoze(N+1,0);
 
    faktmoze[0]=1;
    REP(i,pocC) {
      int ok=1;
      REP(j,pocC) if (G2[i][j]) ok=0;
      if (!ok) continue;
 
      FORD(p,N,0) {
        FOR(q,0,p) if (faktmoze[q] && moze[i][p-q]) faktmoze[p]=1;
      }
    }
    
    vector <int> res;
    FOR(p,1,N) if (faktmoze[p]) res.push_back(p);
    return res;
  }
 
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/