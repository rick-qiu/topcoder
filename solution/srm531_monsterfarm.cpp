/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11232
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

class MonsterFarm {
public:
    int numMonsters(vector<string> transforms);
};

int MonsterFarm::numMonsters(vector<string> transforms) {
    int ret;
    return ret;
}


int test0() {
    vector<string> transforms = {"1 1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> transforms = {"2", "1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
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
    vector<string> transforms = {"2 3", "1", "1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> transforms = {"4", "3", "5 2", "1", "3"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> transforms = {"4 2", "1", "5", "1", "3"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
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
    vector<string> transforms = {"2", "4 5", "3", "2 3", "5"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> transforms = {"1", "2 2", "3", "4 4", "5", "6 6", "7", "8 8", "9", "10 10", "11", "12 12", "13", "14 14", "15", "16 16", "17", "18 18", "19", "20 20"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> transforms = {"1 1", "2", "3 3", "4", "5 5", "6", "7 7", "8", "9 9", "10", "11 11", "12", "13 13", "14", "15 15", "16", "17 17", "18", "19 19", "20"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> transforms = {"40", "16", "20", "13", "19", "28", "23", "3", "29", "33", "22", "14", "18", "44", "9", "12", "48", "39", "46", "41", "5", "15", "32", "47", "50", "31", "36", "11", "2", "37", "21", "6", "7", "45", "10", "30", "24", "26", "25", "4", "49", "35", "1 1", "27", "38", "42", "17", "43", "34", "8"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> transforms = {"23", "25", "50", "36", "31", "19", "6", "18", "30", "49", "1", "40", "27", "11", "20", "24", "37", "4", "10", "41", "32", "2", "16", "46", "47", "12", "3", "29", "45", "48", "39", "17", "14", "44", "38", "28", "7", "9", "15", "33", "43", "13", "22", "42", "5", "34", "26", "8", "35", "21"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> transforms = {"19", "48", "12", "37", "26", "29", "25", "23", "41", "39", "13", "44", "9", "5", "32", "50", "24", "6", "22", "36", "21", "33", "28", "4", "42", "17", "7", "27", "10", "47", "8", "46", "45", "20", "16", "31", "38", "30", "43", "40", "34", "18", "3", "49", "2", "35", "11", "14", "15", "40 21"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> transforms = {"9 9 9 21 21", "16 16 16 26", "30", "6 6 6", "5", "13 13 13 12 12", "37", "21 21", "23 23 23 18 18", "29 29 29", "25", "40", "35 35 35", "28 28 28 30 30", "4 4 4", "5 5 5 32 32", "19 19 19", "34", "10 10 10 25", "27 27 27", "18", "31", "17 17 17", "26", "36", "32", "39 39 39", "20 20 20", "14 14 14 3", "33", "12", "8", "38", "11", "2 2 2 24 24", "3", "22", "7", "15 15 15 37 37", "24"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 2 11 11 11 11 11 11", "3 3 3 3 3 3 3 3 3 3 3 12 12 12 12 12 12 12 12 12", "4 4 4 4 4 4 4 4 4 4 4 13 13 13 13 13 13 13 13", "5 5 5 5 5 5 5 5 5 5 5 14 14 14", "6 6 6 6 6 6 6 6 6 6 6 15 15", "7 7 7 7 7 7 7 7 7 7 7 16 16 16 16 16", "8 8 8 8 8 8 8 8 8 8 8 17 17 17", "9 9 9 9 9 9 9 9 9 9 9 18 18 18 18 18 18 18", "10 10 10 10 10 10 10 10 10 10 10 19 19 19 19", "10", "12", "13", "14", "15", "16", "17", "18", "19", "20", "11 11"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> transforms = {"30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30", "24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24", "38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "46 46 46 46 46 46 46 46 46 46 46 46 46 46 46 46 46", "42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42", "14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14", "17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17", "27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27", "10", "28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36", "31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31", "49 49 49 49 49 49 49 49 49 49 49 49 49 49 49 49 49", "20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20", "43 43 43 43 43 43 43 43 43 43 43 43 43 43 43 43 43", "7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7", "40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40", "48 48 48 48 48 48 48 48 48 48 48 48 48 48 48 48 48", "37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37", "34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34", "13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13", "33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33", "32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8", "3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25", "19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19", "35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35", "11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11", "47 47 47 47 47 47 47 47 47 47 47 47 47 47 47 47 47", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21", "10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10", "45 45 45 45 45 45 45 45 45 45 45 45 45 45 45 45 45", "44 44 44 44 44 44 44 44 44 44 44 44 44 44 44 44 44", "16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16", "22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22", "29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23", "15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15", "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4", "39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39", "6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6", "41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41", "26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26", "18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 252898836;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> transforms = {"37 11", "2", "45 17", "47 48", "5", "6", "30 22", "8", "3 23", "8 2", "27 32", "34 42", "15 49", "14", "15", "46", "17", "41 19", "16 20", "38 43", "21", "22", "21 28", "24", "39 26", "5 35", "36 29", "28", "12 7", "30", "31", "50 9", "33", "34", "35", "10 44", "25 18", "38", "31 24", "40", "33 40", "42", "43", "6 14", "45", "46", "47", "48", "49", "4 13"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> transforms = {"1 3 13 45 32 38 18 49 22 19 20 5 46 31 41 37 23 39", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 29 30 35 12 15 24 40 9 36 10 6 44 27 17 48 16 14", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 34 28 11 42 26 50 43 4 21 25 7 33 47 8 2 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> transforms = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> transforms = {"11 31 8 16 2 24 8 4 43", "42", "27 10 49 8 6 14 43 48 18 49 7 8 43 49", "9 30 18 42 22 44 36 22 42 47 29 49 41 22 8 22", "5", "33 29 2 42 14", "7", "14", "9", "2", "48", "48", "22 8 3 32 47", "2 46 12 18", "33 14 47 12 3 49 49 46 27 43 49 12 43 4 21", "9", "25", "47 47 44 44 44 22 46 47 47", "5 3 7 27 44 43 26 44 23 49", "30", "36", "46", "29", "7 18 14 33 4 22 41 4", "28", "45", "41 49 49 49 47 43 25 49 47 17 41 47 44 41 47 10", "12", "23", "20", "24 3 29 24 10 12 49 4 41 6 9 6 37", "29 25 49 3 41 44 41 6", "14 7 29 49 23 14 43", "21", "44 33 7 42 7 37 18 43 23 4 4 41", "34", "7 9", "26", "10 18 49 20 7 15 43 25 25 24 11 44 20", "46 6 31 2 41", "41", "10", "18 18 47 44 44 41 18 46 44 46 18 44", "44", "38", "22", "47", "17", "22 28 23 44 44 41 17 41 10 18 41 44 22 41", "49 25 49 42"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1568;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> transforms = {"42 20 16 22 5 26 13 9 35 41 40 19 45 46 45 18", "2", "14 29 15 11 23 39 35 26 20 39 36 37 38 40 46", "28", "3 20 26 11 35 4 26 16 32 16 41 7 14 37", "25 19 11 40 46 13 48 49 14 49 47 26", "30", "29", "17", "9", "13 49 18 42 48 49 41 37 40 29 36 41", "11 39 2 15", "41 15 37 40 23 23 36", "2 12 41", "23 18 41 23 23 36", "16", "10", "8 4 8 29 8 4", "46 12 7", "20", "33", "50", "18 4 8 8 18 18 18 18 29 18 4 29 28", "7 44 42", "15 41 3 32 15 36", "41 41 40 48 15 2 48 37 48 23 37 23 23 29 48", "5 6 36 47 23 3 34 3 7 11 14 50", "8", "4", "7", "31", "23 41 18 41 43 36 18 43 43 49 43", "21", "39", "34", "23 8 43", "18 49 35 48 2 28 43 42 38 4 2 32 48 49", "38", "35", "32 42 18 42", "18 28 49 23 49 23 23 8 43 36 43", "42", "4 29 28", "44", "4 31 20 8 39 42 16 43 18 37 23 41 19 49", "32 47 15 8 38 23 12 12 47 2 40 20 12 18 37 38", "32 49 41 36", "36 15 41 49 23 42 32 49 18 32 42 8 4", "8 23 36 43 36 23 23 23 4 23 43 18", "22"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1582542;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> transforms = {"43 34 44", "34 19 41 13 44 49 38 13 34 49 13 11 23", "13 6 37 11 11", "39 2 11 11 49 14 17 43 45", "38 38 46", "49 8 39 43 2 13 37 14 44 18 31", "44 23 5 46 43 23 5 46", "38", "25", "36", "38 7 13 39 13 14 45 38 43", "9", "46 46 39 46 17 38 41 5 46 41", "17 44 44 26 7", "18 6 38 14 26 31 37 37 26 17 37 46 12 39 11", "32", "26 38 38", "43 44 45", "43 39 5 43 38 26 26 23 5 44 38 46 23", "3 7 13 29 44 5", "42", "29", "17", "28", "50", "41", "22", "10", "27", "47", "43 44 38 45 13 49 13 19 43 13 23 38 49 49", "30", "11 35 6 31 24", "45 39 23 7 23 14 49 49 44 19 13 45 7 43", "40", "24", "49 49 11 18 8", "46 46 46 46 46 46 46 46 46 46 46 46 46", "5", "16", "26", "21", "17 23", "38 46 46 13 26 46 17 38 17 17 26 17 38 39 46 17", "7 44 26 26", "46", "35", "3 17 4 19 17 24 37 17 46 49 8 14 3 8", "38 43 46 17 14 23 45", "12"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 9127;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> transforms = {"17 3 15 37", "42", "12", "10", "24", "5", "30", "4", "47", "38", "17", "45", "18", "25", "7", "9", "13", "41", "46", "46 8 33 27 39 27 23 4 2", "3", "2", "49", "11", "36", "22", "24 11 40 24 50 4 8", "40", "28", "44", "48", "16", "50", "6", "4", "15", "19", "34", "8 17 6 8 42 9 8", "26", "37", "32", "17 39 39 35 27 2 8 5 39 20 20", "21", "31", "35", "23", "33", "29", "14"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> transforms = {"31", "10", "46", "2", "20", "47", "30", "50", "6", "34", "29", "13", "15", "49", "18", "40", "28", "9", "22", "27", "37", "45", "33", "11", "44", "32", "21", "7", "42", "48", "39", "12", "3", "16", "26", "19", "17", "23", "36", "41", "24", "14", "1", "43", "35", "25", "5", "4", "8", "38"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> transforms = {"48 3 34 44 26 25 39 22 9 35", "2", "14 22 28 39 15 11 47 1 28", "19", "5", "33 30 49 25 6", "47 17 7 44 15 36 23 28", "13", "35 6 41 50 21 9 24 11 18 44 29 16 48 33 21 45", "4", "28 26 18 2 16 20 26 6", "42 40 20 24 14 33 22 7 7 28 28 45 24 34 20 47", "8", "14 34 45 30 2 35 3 9", "34 25 48 28 14 8", "8 26", "40 9 17 40 15 16 35 49 22 7 49 9 12 9 3", "38", "10", "20", "31 11 26 20 25 36 31 17 20", "2 37 48 31 27 21 6 34 5 21 25 14", "41", "18 50 32 29 18 14 45 20 15 13 42 15 44 47", "25", "30 41 2 5 34 4 45", "13 21 49 44 48 45", "12 22 9 21 16 44 16 50 37 38 18 9", "14 24 34 34 11 37 14 29", "50 14 16 11 39 7", "37 23 16 36 15 15 2 37", "46", "9 31", "34", "1 2 37 46 46 26 3 29 40", "39 30", "7 27 42 23 31 40", "38", "39", "25 22 39 49 20", "23", "47 35 20 12 5 46 39 29 31 14 24 3", "43", "29 24 34 43 29 18 36 14 45", "25 24 46 37 22 27 13", "32", "34 18 41 6 33 26 25 38 37 18 15 8 32", "35 21", "42 29 50 11 45 14 25 33 10 12 47", "8 22"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> transforms = {"41 41 1 6 29 20 32 18 17 15 41 23 36 22 15 35", "8", "23 44 22 8 1 46 40 11 32 1 28 9", "39", "4", "30", "48", "42", "36 28 46 15 20 41", "45", "23 15 32 35 36 22 44 1 28 28 36 13 3", "24", "32", "10", "18 50 3 50 21 32 15 15 44 36 1 9 11 16 3", "16 23 7 16 40", "7", "35 38 1 25 9 17 40 31", "25", "1 36 36 18 32 1 35 46 46 50 36", "16 1 3 31 46 41 32 3", "28 28 31 9 26 41 32", "16 30 15 44 21 28 35 9 11 42 21 44 13 44 50 9", "27", "26", "29", "37", "20 18 15 31 16 28 31", "14", "38", "11 21", "21 16", "2", "17", "9 22 15 19 46 46 35 44 46 21 40 1 23 30 44 1", "41 7 31 14 23 40 1 36", "19", "33", "43", "29 36 20 28 9 16 41", "11 31 50 18 35 35 16 11 10 32 35 44 22 38 16 41", "6", "47", "40", "12", "15", "49", "5", "34", "28 13 36 3 23 9 13 46 31 46 20 18"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> transforms = {"49 1 1 1 1 36 4 1 1 1", "24", "44", "20", "6", "22", "35", "39", "31", "15", "36", "33", "49", "9", "42", "14", "28", "41", "38", "45", "19", "26", "13", "5", "32", "25", "23", "16", "11", "7", "46", "8", "48", "17", "50", "21", "34", "30", "3", "29", "47", "2", "18", "37", "43", "40", "12", "27", "10", "4"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> transforms = {"37 48 26", "33", "22", "43 24 48 8 27 7 22 14 18 10 15 9 4", "14 8 20 16 16 35 47", "36", "34 42 29 15", "12 46 29 10", "5 40 13", "36 7 15 44 25 1 44 29 29", "35", "43", "30", "48 20 46 24 23 5 5 29 8 46 12", "15", "38", "6", "18", "2", "45", "19", "27", "23", "40 10 24 45 29 28 15 14 38 15 4", "25", "32", "16", "17", "39 18 12 44", "21", "26", "40", "13", "49", "12", "28", "37", "41", "35 49 15 40 7 44 35 37 9 34 44 48", "31", "3", "46", "11", "48 29 37 19 6 40 45 5 36 18 17", "20", "42", "21 1 31 4 5 42 14 8 5", "25 44 29 9 39 47 7 7 50 47 47 37 28 24 7 1", "50", "34"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> transforms = {"49 45 13 6 37 21 46 40 2", "39", "43", "9", "25", "46 11 46 41 41 32 16 19 30 40 45 29 50", "48", "7 44 1 40", "18", "29", "11 22 46 41 41 50 19 38 36", "2", "35 41 41 46 42", "4", "7 33 43 32 7 40 32 36 32 16 15 22 2", "36 41 40 40 17 32 18 13 1 41", "28", "26", "8 19 21 29 47 32 43 37 29 41 13 32 49 45 15", "17", "31", "28 49 22 45 4 40", "12", "3", "38", "27", "14", "34", "50", "35", "30", "15 40 11", "7", "20", "47", "49 47 16", "24", "10", "23", "36 24 40 1 46 13 32", "1 46 40 44 37 50 17 16 11", "49", "37", "1 1 38 19 16 9 47 19 11 44 19 14 11 19", "22 36 13 32", "42 20 36 22 31 38 6 13 29 41 6 15 16 11 46 15", "21", "33", "42", "5"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> transforms = {"2 3 2 3 1 2 3 1 1 1 3 3 1 2", "1 3 1 1 1 2 1 1 1 1 2 1 3 3 3 3", "3"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> transforms = {"7 12", "11 2 4", "6 2 14 5 18 8 8 6 7 18 2 3 5 11 3 14 2", "18 12 1 1 15 18 17 5 1 9 12 7 9 3 14 9 16", "8 4 5 1 3 13 12 15 6 10 16 14 3 14 3 5", "10 10 13 5 15 8", "6 13 16 18 18 7 12 7 1 9 7 13 1 17 15 18", "14 15 1 4 5 3 3 5 16 2 12", "9 5 12 6 6 5 15 6 2 3 13 16 5 1 14 17", "4 9", "3 15 6 17 5 15 18 9 7 11 4 1", "14 12 16 11 9 13 10 4 10 11", "11 14 1 5 12 12 10 8 5 14 2", "2 12 6 16 1 14 8 6 4 4 2 5 6 6 3 10 7", "14 18 8 11 11 18", "16 3 2 14 2 3 11 11 13 11", "2 17 8 2 1 13 15 18 11 16 5 2 1 7 1 9", "1 4 16 12 11"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> transforms = {"29 15 27 19 28", "31 28 35 28 1 38 31", "23 41 39 1 33 32 3 20 4 2 32 6", "14 8 33 35 11 18 9 33 41 1 38 5 18 36", "20 32 13 2 28 13 27 42 21 20", "39 26 1", "28 32 1 35 31 13 4 13 30 42 33 33 42 27 25 3 37", "17 33 6 32 18 23 8 40 36 16 39", "43 13 34 30 25 25 14 41 8 9 41 31 8", "20 8 12 25 6 23 1 14 11 5 23 14 22", "12 25 17 15 37 43 33 12 12 5 42 42 16", "32 39 33 8 34 42 40 25 40 13 2", "7 35 11 2 34 13", "37 10 11 26 20 22 2 27 10 41 5", "32 32 2 18 13 3", "14", "6 23 6", "24 18 12 25 24 12 35 17 38 38 32 42", "14 27 29 14 33 6", "19 15 18 31 18 31 22 35 20 36", "42 41", "37 2 6 4 14 27 39 25 42 37 4 34", "18 37 35", "34 4 13 12", "24 7 37 28", "7 10 28", "9", "20 33 29 35 43 19 2 14 19", "33 23 12 15 30 27 14 36", "32 19 6 39 8 10 4 9 11 5 18 18 35 3", "25 13 40 24 33 7 8 21 9 36 17 10 20 16 7", "41 6 27 28 8 14 39 35 2", "42 22", "1 4 42 33 3 42 7 26 7 24 32 21 18 32 37 28 1", "40 30 37 5 12 28 34 10 19 18 9 31 22 9 22 34 41", "34 36 34 7 11 6", "30 35", "13 21 29 32 22 21 30 3 8 28 1 38 31 29 1", "41 7 43 22 39 12 17 4 1", "36 26 25 15 30 32 20 25", "11", "28 31 29 9 41 6 17 7 28 37 34 9 28", "30 42 20 4 20 6 3 19 23 7 27 9 38"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> transforms = {"19 39 23 20 30 19 25 48 43 36 47 22 22 44", "5 20 15 11 14 27 47 23 16 21 10 19", "3 10 33 16 32 13 38 19 46 43 31 23", "45 45", "44 22 1 6 11 14 50 11", "20 46", "1 44 36 22 6 14 38 28 35", "46", "4 39 49 23 36 26 31 50 27 18 25 42 30 31", "30 5 27 27 5 3 5 18 47 18 28 34 1 49 18", "29 8 1", "31 32 41 40 13 43 28", "2 1 39 2 23 10 4 47 26 21 9 47 26 15 24", "12 14 31 36 36", "43 3 8 5 6 1 13 44 18 26 20 44 21", "32 16 24 8 36 45 22 13", "11 44 13 6 31 19 44 12 37 48 11 24 13", "33 37 16 6 21 11 47 6 48 12 31 1", "17 33 13 49 50 46", "5 29 38 16 13 43 13 22 43 34", "47 13 48 11 12 37 46 27 13 9 29 14 29 13 39", "8 25", "48 1 21", "18 24 9 26 12 19 38 13", "3", "2 11 43 23 13 1 31 31 27 26 43 1 4 8", "2 50 8 4 34 40 7 2 35 2", "2 42 3 12 19 21 6", "46 42 9 39 2 44 47 5", "46 26 3 13 35 24 15 27 23 37 38 8 24", "37 48", "23 16 44 22 39 43 15 10 9 22 18 43 38 41 25 21 10", "19", "20 27 12 9 38 41 4 28 10 7 25", "33 30 45 46 9 37 36 32", "14 47", "46", "10 41 43 39 3 9 27 47 35 19 19 32 41 39 16 24 35", "10 2 7 8 6 9 29 23 45 29 20 14 27", "46 24 21 17 21 11 49 31", "4 1 5 19 10 13 17 18 32 23", "25 9", "23 33 40 22 13 24 22 2 24", "49", "13 14 34", "47 2 40 33 8 13 17 19 28 16 18 36 25 40", "17 23 41 10 37 44 35 38 33 32 50 1 26 9 44 34", "47 48 10 23 18 47 41 27", "8 19 40 6 33 30 15 1 1", "37 33 29 21 26 12 10 39 4 36"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> transforms = {"20 24 8 9 23", "2 20 1 2 9 17 15 14", "7 3 2 16 5 20 27 16 5", "13 6 27 16 14 11 14 15", "4 12 8 9 20 16 13 1 19 18 6 22 14 26", "27 15 22 26", "27 19 23 1 17", "26 21 10 23 13 18", "21 22 20 9 12 2 11 26 5 17 13 15", "26 20 7 4 9 21 8 1 2 13 6 16 2", "1 13 10 22 19 9 16 11 26 4 9 13 19", "27 20 9 1 9 22 21 22 15 12 27 27 2", "1 22 11 18 13 18 20 24 5", "20 17 17 8 20 10 20 22 14 16", "16 5 5 5 16 7 12 22 5 9 17 19 17 7", "6 18 10 25 19 10 8 9 20 9 1 23 7 10 23 8 25", "13 24 11 19 18 19 24 7 20 5 8", "17 24 23 14", "4 11 16 27", "6 2 27 18 1 25 27 24 18 3 9 23", "26 2 12 5 1 3 26", "4 23 12 23 27 1 7 21 26 11", "2 19 11 8 6 24", "8 13", "13 9 16 13 23", "12 19 14 16 24 11 9 26", "11 2 14 8 14 11 26 3 7 18 22 12 13 16 16"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> transforms = {"1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> transforms = {"1 1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> transforms = {"2", "3", "1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> transforms = {"1", "3 4", "2", "2"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> transforms = {"2 2", "3", "4 4 4", "5", "6", "7 7 7 7", "7"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> transforms = {"23", "3", "49", "43", "40", "46", "32", "11", "35", "38", "16", "22", "37", "36", "6", "31", "5", "33", "7", "26", "28", "50", "21", "27", "19", "26 26", "18", "41", "10", "25", "42", "47", "14", "2", "45", "39", "9", "20", "48", "8", "24", "44", "12", "15", "17", "29", "4", "34", "30", "13"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> transforms = {"21", "2 27", "12", "17", "14", "9", "10", "11 27 2 1 1 8 27 8 10", "16", "20", "1 27 11 27", "24", "5", "7", "3", "13", "18", "15", "26 1", "23", "19 21 1 19 22 25 14 1 2 7 3 11", "6", "22", "4", "18 21 11 1 19 21 26 26 8 19 2 26", "8 19 19 26 1 1 1 2 19 22 25 21 11 2", "26 16 21 2 1 1 2 11 26 22 2 13 27 8 19"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> transforms = {"18", "6", "11", "16 1 11 14 16 10 4 22 18 1 1 1 12", "19", "17", "15", "21", "3", "1 24 17 18 10 4 14 14 14 1", "20", "13", "5", "1 5 15 15 1 4 18 22 5 1 10 18 1 14 21 1", "16", "22", "12", "10 10 18 19 1 7 14 2 3 8 1 4 1 14 25 18", "24", "8", "25", "23", "7", "2", "9"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> transforms = {"8", "9", "7", "12", "13", "16", "3", "7 27 27 18", "4", "14", "25 6 25 26 7 18 22 19", "24", "20", "10", "5", "22", "21 4 21 19 11 8 18 11 20 18 26 27 17", "25 16 31 11 3 13 10 25 8", "21 17 27 17 29 18 21 17 25 25", "15", "29 10 27", "30", "28", "2", "17 11 31 19 1", "24 1 16 29 11 14 25 11 19", "19 13 26 27 5 16 7 29 27 9 31", "23", "27 8 28 11 17 21 18 2 22 8 25 21 31", "6", "14 19"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> transforms = {"29", "8", "17", "14", "20", "6 11 6 10 1 28 11 13 29 16 19 7 11 28", "3", "15", "16", "11 28 6 14 12 18 28 1 29 19 30 3 1", "18", "27", "2 22 13 13 23 9 20 5 30", "12", "26", "17 1 8 9 28 20 22 1 9", "7", "11", "1", "5", "24", "6 24 18 28 22 19", "29 6 10 29 3 17 21 16", "25", "21", "2", "4", "30 8 19 30 29 23 7 22 10 30 29 12 9 29", "13 23 21 1 28 22 11 6", "10 18 20 25 30"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> transforms = {"15 15 33 21 25 15 29 8 15 29 33 15 49 25 15 15 49", "20 46 47 34 3 16 16 6 20 2 16 13 20 10 4 2 3", "47 2 10 47 16 34 46 10 4 34 3 10 47 16 10 34 6", "6 20 12 47 20 2 20 13 2 34 3 13 6 16 12 2 16", "7 45 5 48 30 39 41 48 48 41 27 11 42 5 17 31 48", "6 16 2 4 47 34 34 46 12 34 6 16 13 4 20 20 20", "45 7 31 31 27 30 41 17 41 48 41 42 11 7 9 11 48", "49 43 49 24 43 49 18 18 24 18 43 49 18 18 43 43 49", "42 27 41 11 41 42 14 14 7 41 45 27 27 5 41 48 7", "46 10 4 20 3 16 13 16 4 47 12 20 2 12 16 12 34", "39 5 42 30 48 27 39 45 14 9 42 7 48 30 17 5 9", "46 6 4 20 16 6 20 6 16 3 40 46 40 16 2 12 46", "4 13 3 3 12 3 2 12 3 34 6 47 46 10 10 47 6", "17 7 17 39 11 39 11 11 14 7 7 41 41 27 27 17 5", "25 8 43 8 49 24 21 29 24 29 23 24 25 49 24 43 24", "34 2 2 40 4 20 6 40 40 16 3 3 3 3 3 46 6", "5 39 11 9 11 41 41 17 45 11 30 5 17 30 7 17 17", "18", "28 28 50 22 38 36 28 50 37 28 19 26 44 22 50 37 28", "6 13 6 47 3 12 4 3 47 4 6 47 46 20 4 47 46", "25 23 23 49 23 25 23 33 49 8 33 25 18 49 18 33 18", "22 22 38 37 19 26 38 37 22 35 36 50 36 50 37 37 38", "18 43 43 18 18 24 8 49 18 49 8 18 18 49 8 49 8", "18 18 18 18 18 43 18 43 43 18 18 18 18 18 43 43 43", "23 18 43 43 33 29 23 24 23 29 43 29 29 18 18 23 33", "37 35 28 38 36 44 26 19 28 28 37 19 36 19 44 35 22", "42 41 7 30 45 48 27 48 31 27 41 41 39 30 30 31 14", "50 37 50 38 22 36 26 19 19 50 50 37 35 28 37 28 19", "43 8 8 23 8 24 24 23 23 18 24 49 23 49 23 23 8", "5 39 30 42 45 48 41 7 11 17 42 5 17 31 14 45 17", "31 39 45 31 31 14 42 9 41 27 48 41 9 42 5 7 30", "43 49 8 49 21 49 21 43 33 23 33 24 33 18 18 21 43", "8 18 43 8 24 8 43 18 24 43 24 29 18 43 29 23 18", "4 46 12 16 40 34 3 2 4 12 34 3 20 3 47 47 46", "22 38 38 35 36 50 37 50 26 26 38 38 22 37 50 44 37", "50 26 37 38 22 22 36 50 44 19 50 37 19 28 44 26 28", "19 26 26 44 26 37 50 37 19 36 50 36 22 35 38 38 26", "19 44 36 19 22 35 26 44 44 19 44 38 37 35 28 38 35", "27 7 9 11 9 11 31 41 17 30 39 42 17 14 11 45 5", "40 2 47 40 12 40 3 47 46 34 3 10 6 47 4 47 12", "30 27 5 31 5 17 14 30 27 30 11 11 11 17 30 41 31", "14 7 17 31 39 39 7 14 11 41 42 48 41 31 5 39 48", "18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18", "44 50 44 38 22 44 26 37 50 38 37 22 50 44 44 35 37", "14 30 11 14 45 31 5 5 41 14 14 41 14 31 48 42 45", "6 34 20 2 4 3 47 6 47 2 4 20 3 4 34 20 16", "6 4 2 47 6 13 20 20 40 16 4 10 10 34 3 3 12", "11 14 30 9 11 45 14 39 14 39 41 7 14 27 42 7 7", "24 24 24 18 18 18 18 18 24 18 43 24 43 24 43 24 18", "38 37 37 35 19 37 28 38 35 37 19 19 38 22 35 28 28"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 66900705;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> transforms = {"2 48 2 2 48 41 31 3 34 48 2 48 41 2 31 2 31", "31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31", "13 2 13 48 13 41 13 48 31 48 34 41 13 34 41 2 13", "30 30 39 30 35 39 37 28 35 46 28 30 28 28 23 35 37", "44 43 25 43 25 5 5 44 43 43 25 24 24 32 10 10 24", "42 18 15 29 9 42 42 26 12 29 42 29 6 18 9 38 42", "20 21 21 16 17 11 11 17 47 7 7 21 16 7 33 16 17", "23 22 39 45 14 46 46 30 37 22 46 14 28 39 8 14 14", "12 29 6 9 26 42 29 15 27 42 9 12 42 42 38 27 9", "5 25 49 43 10 49 5 44 10 44 44 10 49 5 32 43 25", "36 17 36 20 16 17 33 40 47 16 7 40 20 16 16 47 20", "42 27 12 29 12 29 19 27 9 9 6 26 38 6 15 18 38", "34 34 2 2 2 2 48 48 48 31 31 34 48 48 31 48 34", "8 45 46 37 30 46 23 28 28 28 37 28 14 22 30 45 35", "12 27 19 29 6 38 6 42 29 42 18 29 18 26 26 26 42", "47 17 20 11 33 21 21 33 21 16 16 17 20 21 20 16 40", "17 16 36 20 36 11 7 36 36 11 47 16 17 11 40 36 17", "26 19 38 6 15 42 19 38 38 42 38 19 19 26 12 6 19", "26 15 42 18 42 19 27 29 12 6 26 15 42 26 12 18 12", "47 47 16 21 16 7 16 40 33 16 33 16 40 36 16 17 7", "17 40 47 47 20 47 7 17 33 20 17 17 36 20 11 11 36", "45 30 23 30 35 37 14 35 39 8 35 28 46 35 23 46 30", "22 37 28 37 35 45 39 23 28 23 35 46 23 30 35 23 22", "49 5 32 49 32 43 10 49 43 49 24 32 5 25 25 10 25", "49 25 25 24 25 24 24 43 32 43 10 44 32 44 49 32 5", "29 18 29 18 9 26 19 6 27 9 15 42 12 29 18 9 38", "6 12 12 27 15 19 19 42 18 42 6 12 38 9 26 27 38", "28 46 45 28 46 39 8 28 35 8 30 30 46 37 23 35 30", "29 15 9 6 6 38 38 38 38 38 12 27 27 27 38 27 38", "14 28 23 39 23 45 28 28 28 22 28 35 8 28 39 45 37", "31", "24 5 49 25 10 49 44 10 24 25 43 25 24 43 5 44 32", "7 40 16 7 17 17 47 17 21 40 36 7 17 17 17 16 33", "31 31 2 31 2 2 31 31 31 2 31 2 2 48 2 2 31", "4 14 46 28 46 4 23 14 39 45 30 4 8 23 23 30 22", "33 47 17 36 7 33 20 33 17 7 16 36 17 17 20 16 16", "37 35 35 35 22 28 8 4 45 14 39 28 39 28 30 35 45", "26 26 29 19 15 19 18 12 26 38 26 27 9 27 6 27 29", "35 22 4 35 4 28 37 4 8 45 28 37 37 4 4 37 37", "11 16 7 16 47 21 40 33 7 11 36 21 36 40 47 20 36", "31 34 48 2 2 13 48 2 48 34 48 34 31 31 34 34 48", "27 42 19 18 19 6 6 18 27 27 38 12 12 38 26 15 38", "5 43 32 5 5 44 32 5 24 10 43 49 43 10 32 49 32", "43 24 43 32 49 43 32 49 10 24 24 10 24 5 32 24 49", "37 23 22 28 28 23 8 14 46 46 22 28 14 45 8 35 8", "22 45 23 35 14 39 39 37 46 30 37 37 35 4 4 4 22", "11 11 40 7 17 33 47 20 21 40 40 7 11 40 21 20 16", "2 2 2 31 2 31 2 31 31 31 31 31 2 31 31 31 31", "25 5 43 24 10 24 44 10 32 43 43 24 44 49 44 44 43"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 30769;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> transforms = {"14 13 3 28 14 14 13 3 14 14 28 14 13 21 13 14 14", "33 9 9 24 2 25 33 27 35 24 24 16 36 24 35 23 16", "28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28", "26 11 32 11 6 4 15 15 37 31 32 4 32 31 32 37 32", "35 36 25 24 25 16 7 5 7 36 36 36 23 24 24 9 7", "32 31 37 32 37 31 6 15 37 32 32 32 15 15 31 31 31", "16 33 19 24 25 24 16 5 9 25 2 2 9 36 10 2 7", "12 12 12 20 29 12 20 12 12 17 17 8 8 18 30 29 18", "19 2 9 27 7 23 23 10 23 9 9 36 35 27 24 33 25", "7 33 19 33 5 35 5 5 36 23 5 19 19 23 5 16 27", "26 31 11 32 4 26 26 15 32 6 6 15 15 6 6 15 4", "22 18 30 18 34 34 30 30 8 34 18 12 34 22 18 8 29", "3 3 28 21 3 21 28 21 3 28 28 3 21 28 21 3 3", "21 3 3 13 28 13 28 28 21 13 3 13 28 3 28 28 3", "11 11 15 11 37 37 31 26 15 11 31 32 31 11 11 32 26", "24 23 10 33 16 33 5 36 27 10 36 16 33 19 24 5 10", "12 30 18 30 20 12 8 18 22 20 12 34 18 17 12 18 8", "20 12 22 12 17 8 22 22 30 29 34 18 12 20 20 20 18", "33 9 27 23 27 2 25 24 5 7 10 33 9 16 33 33 33", "34 20 30 17 20 8 12 22 8 18 12 20 12 17 22 34 12", "28 3 3 28 28 28 3 28 3 3 28 3 3 3 28 3 3", "17 22 22 30 12 17 17 12 30 22 22 17 8 30 34 22 8", "19 23 33 7 36 27 10 25 7 2 19 36 7 19 2 5 10", "36 2 9 5 16 36 35 27 25 16 19 16 10 2 35 2 2", "16 35 27 36 7 19 25 16 9 7 19 5 16 27 5 2 24", "32 32 6 11 31 31 11 32 32 37 4 26 15 26 11 31 37", "36 7 19 16 16 19 7 23 27 7 5 36 27 23 2 16 9", "28", "18 22 20 18 20 22 22 17 17 29 12 34 8 18 20 29 20", "29 30 34 34 12 8 17 34 8 29 20 20 20 8 29 22 22", "26 31 11 37 11 26 11 6 26 11 4 15 4 4 11 32 26", "6 11 6 6 11 31 6 32 11 37 11 32 15 6 26 32 31", "33 36 19 19 19 2 16 16 5 7 27 2 23 19 16 19 33", "29 12 17 17 20 12 34 22 17 17 29 30 8 22 17 22 20", "2 7 23 27 19 25 2 19 16 35 5 23 2 35 27 33 25", "16 23 16 25 9 36 5 16 2 19 16 16 2 2 25 19 19", "6 32 6 26 6 4 31 31 32 31 11 32 37 26 31 6 32"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 40097;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> transforms = {"11 34 25 45 45 40 28 12 11 11 25 34 28 11 25 34 12", "29 18 24 29 29 18 10 29 24 2 2 24 29 18 2 2 5", "31 7 4 27 37 3 21 37 8 30 8 7 43 37 37 43 19", "14 30 19 31 9 3 3 30 43 7 14 31 9 19 37 19 8", "18 10 5 2 18 10 18 24 24 5 2 10 2 2 24 18 18", "6 39 6 20 6 20 6 20 39 6 39 20 20 39 42 42 39", "3 30 9 27 8 30 9 21 3 19 30 19 8 8 9 19 9", "3 3 37 43 19 8 27 31 31 3 30 30 37 9 9 14 30", "19 27 43 8 8 14 30 19 14 8 43 21 31 3 4 14 14", "10 18 2 18 2 24 5 2 10 5 24 2 5 29 2 2 10", "13 34 13 15 15 28 15 12 34 28 15 25 12 28 28 40 13", "45 15 45 15 15 13 15 15 13 45 13 15 13 15 15 15 13", "15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15", "7 30 27 19 31 8 8 3 21 7 8 14 7 7 37 9 7", "15", "44 22 26 41 44 38 23 32 16 38 22 23 47 36 16 41 22", "16 32 33 38 32 35 35 44 33 26 32 47 16 16 44 38 36", "18 10 18 29 2 18 18 5 24 18 29 5 29 24 10 5 24", "43 27 7 19 31 8 30 14 3 27 7 9 7 8 21 37 30", "6 42 39 39 6 42 42 39 20 20 39 20 42 6 20 20 42", "19 21 8 27 31 14 27 21 37 14 43 3 19 43 14 43 14", "44 36 17 17 38 17 17 41 26 33 38 38 22 41 36 26 36", "22 35 26 26 32 17 26 23 35 41 36 41 38 22 38 17 17", "29 18 24 29 10 2 29 5 29 2 5 2 5 18 2 5 18", "15 45 34 34 13 45 34 13 15 12 12 34 34 12 15 15 34", "32 38 17 26 33 32 38 26 23 23 35 16 17 33 47 33 33", "7 14 31 21 9 9 8 27 7 31 21 4 37 9 3 21 19", "45 34 13 12 45 15 45 25 34 34 15 34 34 13 34 25 13", "10 2 10 29 5 18 29 10 10 5 18 18 29 10 10 2 18", "3 37 21 9 9 14 30 4 30 8 7 43 7 19 43 19 37", "3 27 3 9 3 7 43 3 9 19 4 19 19 14 9 31 21", "22 26 17 23 47 22 32 23 33 16 38 22 32 47 23 22 41", "47 41 44 32 16 38 26 44 17 47 36 47 36 35 32 26 26", "12 12 15 12 15 45 13 13 45 13 15 12 45 45 12 13 12", "47 38 22 22 33 35 16 17 22 35 26 36 23 44 38 47 38", "26 35 33 16 32 22 22 44 47 33 41 26 47 16 47 44 22", "3 7 37 4 3 7 43 9 19 8 37 3 4 7 21 3 7", "41 26 35 41 32 22 36 36 33 22 23 47 32 16 47 36 33", "20 6 39 20 39 39 6 6 6 20 6 20 20 6 6 6 20", "28 25 34 12 45 15 12 15 12 15 34 13 45 34 13 25 25", "17 41 16 17 33 22 38 41 36 33 17 16 16 47 36 32 38", "6 6 39 6 20 20 39 39 39 20 39 6 6 20 42 39 39", "21 3 4 31 31 14 27 8 7 27 27 31 4 8 7 19 14", "23 16 26 32 16 26 36 17 36 16 23 32 32 41 32 22 32", "15 15 13 13 13 13 13 13 13 15 15 13 13 13 13 15 15", "45 12 25 34 40 13 25 28 34 28 45 28 15 12 45 15 40", "35 23 47 38 38 23 22 16 32 22 35 23 44 33 17 38 33"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 3007617;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> transforms = {"31 33 39 39 33 25 31 25 39 38 50 38 23 50 42 33 25", "45 8 20 45 20 49 21 30 30 2 21 16 45 49 16 49 30", "48 44 7 29 41 29 7 3 13 6 13 7 13 12 44 7 6", "35 28 43 18 4 43 35 27 14 27 4 4 18 40 18 43 43", "15 47 9 19 17 34 47 40 47 47 27 5 43 10 14 17 18", "26 26 26 41 7 44 37 44 6 41 13 13 36 48 37 46 12", "6 3 26 41 29 13 12 12 6 13 44 12 37 13 44 44 41", "45 45 2 20 32 49 2 30 30 24 21 21 2 8 16 30 30", "28 11 28 43 11 10 35 5 11 43 15 4 14 11 18 35 35", "34 18 34 40 10 17 40 35 11 28 11 34 43 19 5 9 27", "18 19 5 18 27 5 11 28 9 14 5 9 17 10 27 35 11", "48 46 6 26 12 48 12 37 3 44 41 6 44 37 36 46 44", "6 41 26 13 41 7 29 29 12 26 46 29 41 3 3 7 36", "15 17 40 18 43 43 17 5 19 15 28 34 28 40 10 9 19", "28 14 28 28 47 40 34 19 11 19 9 34 4 9 11 34 17", "20 2 45 45 16 49 8 24 21 2 45 21 16 20 21 30 24", "28 9 17 11 4 40 17 17 14 43 35 40 18 9 9 9 4", "11 15 10 9 40 35 11 40 15 19 19 47 5 14 15 19 40", "28 47 9 18 11 27 4 9 4 34 28 17 5 43 27 40 15", "2 45 20 20 21 21 49 21 16 20 8 16 21 21 21 2 21", "20 2 30 24 32 49 2 30 30 24 45 49 45 49 45 30 32", "33 31 50 33 38 31 33 33 50 25 31 33 25 25 31 25 23", "42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42", "16 21 16 45 30 16 21 49 49 2 21 2 24 20 2 24 45", "23 23 42 42 23 42 42 42 42 42 23 23 42 42 23 42 42", "44 44 7 46 12 6 7 44 13 7 29 44 41 7 37 13 29", "35 34 34 18 34 14 17 10 43 15 40 18 35 4 19 27 11", "9 17 47 19 35 9 27 18 14 9 10 47 17 11 28 10 5", "7 6 3 13 37 48 3 41 12 36 13 3 13 48 26 44 44", "32 20 30 45 30 49 2 45 30 32 32 30 45 32 45 30 21", "33 23 50 23 42 50 23 25 42 42 42 33 38 25 38 33 38", "49 2 24 45 24 32 24 32 20 21 16 45 2 16 20 20 24", "25 38 38 38 42 25 42 42 23 23 25 23 50 38 42 23 42", "18 18 27 4 17 9 34 35 4 15 28 28 4 27 19 17 15", "27 11 10 27 18 47 15 40 4 9 18 5 18 14 5 5 34", "13 7 48 36 26 12 6 12 26 46 3 36 3 36 48 48 6", "6 37 36 26 37 3 37 7 12 26 26 13 41 12 36 41 6", "42 23 23 23 42 42 25 25 23 42 23 23 23 25 42 42 42", "42 50 42 22 50 42 31 33 42 50 50 38 23 42 38 50 23", "35 35 27 9 15 11 11 19 19 14 9 10 28 4 19 47 4", "3 44 44 7 13 48 48 37 41 44 48 41 29 36 29 6 12", "42", "35 14 40 4 40 19 9 27 11 5 40 35 19 10 18 15 34", "36 13 12 26 46 13 37 7 13 12 6 12 7 26 7 41 37", "16 32 45 45 32 2 2 45 49 8 20 20 21 24 16 16 2", "41 46 13 48 13 13 37 37 26 3 29 12 37 26 7 12 7", "43 40 5 35 11 40 28 11 17 9 9 18 18 5 17 19 14", "26 29 3 12 37 36 46 26 29 44 13 12 41 12 29 13 3", "21 24 49 20 32 21 20 49 20 32 30 32 45 45 2 20 32", "42 38 38 42 42 42 38 42 42 23 25 25 38 42 42 25 23"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 488161;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> transforms = {"9 44 30 5 42 33 10 22 8 30 37 38 4 13 25 29 12", "24 24 24 24 24 24 37 37 37 24 24 37 37 24 24 24 24", "33 7 24 24 34 29 13 37 7 29 29 43 29 8 33 13 7", "26 20 9 17 28 37 34 23 11 18 23 6 42 31 23 44 31", "22 2 17 38 30 33 39 17 37 11 43 10 35 11 35 35 15", "6", "7", "25 24 29 29 25 37 29 25 2 2 37 2 25 25 29 29 25", "39 44 26 41 19 32 24 23 3 2 30 41 2 44 39 32 33", "13 24 25 37 29 24 37 13 2 29 13 37 29 37 13 24 25", "45 37 3 12 13 10 3 18 18 22 36 38 35 24 30 10 43", "12", "29 37 37 37 25 8 2 29 29 25 8 29 25 37 8 2 8", "10 35 24 13 10 33 24 43 25 25 24 43 35 10 24 24 7", "3 8 33 13 24 33 45 39 39 37 23 29 7 16 34 45 35", "16", "43 3 16 42 37 34 30 13 3 39 42 6 39 32 15 19 3", "18", "13 3 23 14 23 45 15 29 15 39 29 39 2 24 7 29 7", "16 29 18 12 23 38 41 12 8 36 41 7 32 41 14 7 8", "42 24 16 42 29 24 19 6 13 42 11 36 43 27 17 11 37", "15 8 29 29 3 3 16 16 33 29 2 10 15 15 35 16 37", "25 24 45 13 45 37 37 2 37 7 25 25 34 13 25 10 7", "24", "25", "13 44 43 19 16 13 44 44 14 12 36 2 45 39 33 19 12", "41 38 26 37 3 26 38 31 16 13 10 6 6 3 41 8 22", "30 39 19 35 26 43 3 45 8 12 7 15 16 26 25 32 10", "29", "30", "31", "30 2 14 29 2 42 2 39 45 7 14 10 25 14 38 30 44", "29 29 10 7 8 8 25 29 8 24 2 8 13 13 35 25 43", "24 37 37 8 29 13 8 2 25 2 2 13 25 2 2 10 13", "24 10 25 24 25 29 34 34 2 10 2 25 34 10 2 29 10", "36", "37", "38", "2 7 24 8 35 24 45 33 45 13 24 25 13 43 8 29 10", "12 20 5 25 21 2 43 16 6 6 12 42 16 19 32 9 7", "36 36 15 11 23 34 12 34 3 22 29 3 25 16 2 22 13", "42", "43", "34 25 10 43 25 12 13 8 12 16 39 43 37 23 34 33 8", "24 37 8 25 35 33 43 2 2 7 14 35 13 33 29 7 29"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 156427233;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> transforms = {"37 7 26 24 23 3 32 12 7 12 23 13 8 29 25 20 10", "12 30 12 10 25 27 27 28 9 21 8 21 25 8 28 8 9", "35 6 23 34 34 23 6 8 6 35 17 2 19 35 11 22 2", "4", "9 25 21 18 24 28 32 17 27 22 24 15 32 25 13 10 12", "28 27 5 32 17 18 8 34 34 13 11 35 15 19 5 27 11", "11 6 18 34 25 8 18 37 9 25 22 15 33 2 24 21 18", "8", "25 11 28 11 13 25 11 25 25 25 28 28 13 25 25 28 21", "11 13 21 9 8 28 22 32 21 27 21 12 32 28 28 32 32", "11", "11 28 9 11 21 21 28 28 13 11 28 21 27 11 13 13 27", "13", "14", "30 11 21 32 21 9 27 12 11 9 17 10 9 21 25 32 11", "16", "9 27 12 30 21 9 2 2 21 21 32 2 13 18 12 35 18", "2 25 32 2 11 28 22 32 28 30 22 10 8 8 8 13 2", "27 13 9 30 25 13 12 15 9 21 27 15 27 28 13 35 2", "27 32 5 28 21 16 7 15 30 19 4 37 16 22 3 25 15", "21", "22", "6 13 22 18 10 34 18 24 25 18 25 27 19 32 12 33 2", "11 13 25 13 10 10 35 9 25 21 18 27 15 35 12 22 13", "28 13 11 13 21 28 11 13 21 11 13 28 13 21 28 28 11", "27 5 32 3 18 28 30 17 11 37 6 8 35 24 20 2 5", "27", "11 11 21 21 21 13 13 11 13 11 11 21 11 13 11 21 11", "30 22 34 25 2 35 25 7 28 11 4 2 8 6 4 9 19", "12 25 10 32 13 21 21 22 8 28 10 9 11 11 32 32 32", "28 23 37 20 37 27 30 5 32 28 10 8 13 36 20 2 8", "11 8 22 12 13 9 25 9 11 11 9 22 27 8 11 21 27", "33", "32 19 13 9 17 28 27 28 27 9 13 25 24 11 32 22 5", "35", "36", "23 24 16 19 33 8 5 13 8 18 6 24 24 35 22 30 17"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 692127210;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> transforms = {"33 45 13 37 37 31 18 28 18 29 24 40 33 29 4 16 33", "30 37 26 43 36 22 28 30 18 18 10 44 20 41 29 44 16", "20 41 25 24 14 20 24 25 30 32 32 41 36 27 29 30 29", "4", "6 36 45 30 37 20 10 27 20 37 41 20 14 41 41 27 6", "22 27 34 29 20 25 34 29 22 32 8 3 24 31 45 20 10", "41 17 38 17 31 15 19 13 33 10 37 41 3 16 19 40 17", "43 43 43 31 43 31 25 31 25 25 43 39 25 31 31 39 39", "28 40 3 37 30 42 27 20 30 18 45 14 34 18 11 32 42", "8 28 34 39 36 43 39 45 25 44 28 34 19 36 19 41 45", "11", "15 4 11 33 45 14 31 4 20 14 44 44 10 43 6 36 21", "28 22 44 44 31 14 36 3 20 34 25 39 30 43 41 43 29", "32 34 44 34 41 44 39 28 27 27 34 25 32 27 30 25 41", "27 43 14 4 26 45 19 18 37 29 34 45 16 39 29 4 31", "19 39 6 30 32 8 26 8 37 6 13 22 4 28 26 44 29", "31 23 34 29 29 23 41 5 37 37 41 19 32 24 25 3 24", "20 32 27 28 40 26 25 34 14 44 31 43 28 3 4 40 45", "31 39 39 43 43 25 31 8 8 25 43 39 8 25 39 39 8", "28 31 22 30 25 30 39 34 28 31 30 44 8 43 22 19 39", "21", "8 19 31 31 43 25 28 25 43 25 34 19 43 32 44 43 28", "36 29 43 19 13 24 41 26 26 37 18 30 8 27 27 29 26", "24", "25", "26", "22 22 8 32 28 30 44 8 22 19 22 20 20 32 39 19 25", "28", "29", "32 25 25 43 22 39 19 39 43 43 44 43 43 19 8 44 19", "31", "19 8 19 43 44 25 44 43 8 44 8 28 39 28 43 44 34", "8 31 34 16 28 41 3 18 37 44 21 23 39 10 27 25 8", "31 8 44 25 28 43 25 19 31 44 31 31 43 43 31 19 25", "11 15 18 20 30 13 2 26 17 36 39 39 3 20 43 19 2", "8 32 34 14 29 22 29 29 44 44 25 19 27 43 4 29 29", "27 39 19 27 8 27 34 34 25 32 31 22 39 8 34 20 43", "38", "25 25 25 31 25 25 25 31 25 25 31 31 25 31 25 31 31", "3 14 37 13 29 24 14 16 19 14 39 16 31 36 32 4 6", "22 25 22 39 19 30 27 32 31 19 25 34 34 37 20 19 19", "21 20 10 20 41 8 23 4 18 39 37 30 41 5 43 18 21", "25 39 39 25 25 31 25 39 39 39 25 39 39 39 25 25 39", "44", "34 29 29 36 19 24 28 25 22 31 36 37 20 19 36 8 41"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 516208987;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> transforms = {"5 20 29 10 29 19 8 13 7 23 18 3 3 17 3 24 20", "23 22 25 6 18 22 11 23 33 42 25 30 24 42 25 25 34", "30 35 23 27 17 23 12 37 20 38 42 38 4 11 13 13 12", "22 22 6 6 7 7 7 6 6 22 22 6 6 6 7 22 6", "7 7 31 4 35 35 22 31 31 4 4 4 32 22 4 35 35", "6", "7", "11 26 34 24 29 31 4 21 22 13 10 32 11 35 28 10 25", "13 17 28 5 27 38 36 7 28 8 25 40 38 32 4 15 21", "38 3 33 18 7 11 20 3 22 42 27 39 3 13 28 37 4", "11", "32 39 16 18 6 22 22 37 22 6 7 7 30 25 7 37 23", "18 33 32 31 23 37 17 4 39 32 27 4 7 7 30 24 22", "42 31 31 25 25 17 29 31 5 4 5 22 33 13 16 11 11", "15", "27 18 27 37 31 31 32 26 27 35 4 26 30 27 30 7 7", "17", "18", "19", "7 31 18 39 27 17 39 39 32 18 39 18 17 25 39 26 24", "24 37 7 32 35 5 16 32 27 4 6 22 25 7 7 39 33", "22", "27 5 33 5 22 22 22 6 35 35 33 24 4 22 32 26 30", "30 7 16 5 33 39 6 39 18 26 27 30 37 27 39 39 30", "24 4 18 31 5 31 17 30 18 24 5 26 18 30 35 30 18", "4 6 32 33 35 27 5 22 6 31 4 27 35 33 32 31 35", "27", "26 42 21 4 25 34 14 26 6 31 14 42 42 3 5 7 33", "22 30 13 13 24 21 22 25 22 17 5 17 33 22 32 37 32", "32 6 33 22 6 7 27 4 5 18 31 4 18 32 37 5 22", "6 22 27 4 22 7 27 4 7 4 22 22 32 6 7 32 7", "32", "33", "39 20 39 16 12 12 31 23 12 26 11 33 7 27 24 33 39", "7 32 27 27 31 32 4 4 4 27 22 4 7 32 6 27 22", "20 25 12 25 15 7 5 17 18 14 2 43 33 16 6 39 40", "6 26 26 6 32 26 27 26 31 31 27 35 6 27 26 5 35", "38", "30 26 32 27 37 26 22 5 5 16 22 22 18 4 35 5 26", "28 24 42 23 22 29 14 33 20 20 21 6 37 6 42 20 30", "41", "20 30 6 25 31 22 26 25 6 4 26 31 27 37 32 5 6", "13 37 22 31 39 13 38 14 39 42 29 17 39 13 40 39 42"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 293310801;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> transforms = {"36 28 12 8 14 14 13 13 3 25 28 4 24 32 6 13 8", "2", "19 17 8 21 16 15 21 25 20 9 6 15 28 11 14 21 23", "4", "5", "28 22 22 13 26 33 33 21 5 13 21 5 14 13 14 24 36", "7", "8", "33 21 30 33 14 22 33 20 13 4 6 28 13 4 14 24 4", "33 30 11 33 4 22 9 4 33 33 30 16 8 36 9 33 5", "11", "10 19 14 24 13 17 22 4 33 36 26 20 19 26 33 30 30", "33 14 14 33 33 14 33 33 33 14 14 14 14 33 33 33 14", "14", "15", "14 33 5 13 13 21 14 24 5 33 21 28 28 14 24 13 28", "22 20 22 5 30 21 20 5 2 36 10 36 26 8 33 30 14", "13 15 7 13 19 35 11 28 3 33 2 16 7 20 22 26 16", "19", "20", "21", "16 14 28 14 14 33 14 24 16 33 14 21 21 26 13 26 21", "8 30 6 13 9 10 13 30 13 4 21 30 26 14 6 33 12", "33 33 21 5 13 33 14 33 13 14 13 13 5 14 13 33 13", "25", "5 33 5 33 24 13 5 5 14 33 33 21 14 21 16 24 28", "27", "14 5 13 33 14 24 24 33 24 5 21 33 24 24 33 24 13", "5 10 24 6 3 21 25 25 12 18 30 26 12 13 28 5 34", "36 4 26 24 33 33 15 36 13 36 22 33 28 8 33 6 28", "21 15 11 35 28 33 8 3 23 8 2 17 23 5 5 4 2", "32", "33", "13 22 35 14 3 16 5 28 9 33 8 11 4 4 9 15 36", "35", "11 16 21 24 13 33 8 21 5 13 13 16 16 26 26 24 24"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 5541185;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> transforms = {"3", "19", "6", "8 2 28 16 10 20", "28", "11", "17 4 12 14 14 17 15 27 21 12 15 12 14 12", "24", "22", "23", "29", "4 28 26 19", "10 24 7 19 20 5 21 12 15 14", "4 4 9 28 4 19 28 9 2", "17 14 5 16 26 9 17 4 4 10", "2", "4 4 14 8 23 14 9 28 4 2 14 4 23 14 4 16", "30", "10", "27", "22 12 12 17 14 12 23 9 14 4 28 28 14 12 4 4", "8", "16", "20", "18", "5", "26", "9", "32", "33", "23 32 14 15 15 13 14 27 3 21 15 4 32 7", "25", "3"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> transforms = {"14 34 19 28 30 25 29 33 6 46 30", "19", "36 44 36 6 20 33 39 13 26 44 24", "38", "43", "39", "32", "40", "2", "11", "23", "7", "32 16 17 30 30 36 24 47 47 43 30", "16 43 20 25 46 5 24 30 47 24 24 6 24 15 22", "33", "33 24 24 47 21 44 21 20 46 47 28 18 12", "31", "32 33", "25", "31 36 26 11 7 47 47 36", "47 29", "6", "27", "23 11 26 31 27 26", "35", "38 43 33", "28", "12", "47 7", "26 20 20 32 26 33", "15", "10", "4", "46 10 46 36 46 29 38", "8", "31 47 47 23 26 26", "45", "5", "22", "9", "42", "37", "17", "15 30 20 30 47 20 18 26 26 36 24 47 33 20", "41", "10", "12 26"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 914;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> transforms = {"13", "44", "35 25 45 43 22 45 7 4 43 2 2 25 7 31", "33", "30", "29", "33 25 33 30 42 31 31 5", "3 7 31 22 27 25 15", "46", "29 29 31", "26", "10 18 13 23 35 29 16 30 3 8 27 34 36 45 10", "23", "31 11 35 16 16 10 2 43", "6", "10 38 37 22 49 33 8 7 30 39 45 41", "38", "45 2 45 8 5 8 31 30 43 4 3 33 39 7 10", "42 12 31 12 17 39 2 39 16", "28", "24", "27", "11", "20", "4", "41", "44", "32", "15", "42", "30 30 25 5 42 35 5 37 33 25 4 30", "21", "37", "35 8 40 29 43 33 31 18 5 45 7 39 43 45", "5", "40", "25", "47", "7 3 7 42 43 7", "36", "13", "35", "31 31 31 31 7 7 25 33 30", "22", "6 7 30 33 42 43 15 7 42 42 27 4 22 27 25", "49", "17", "9", "48"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> transforms = {"26 31 6 5 19 15 15 24 11 16 9", "27 31 24 16 14 24 7 7 31 24", "12", "13", "25 21 28 17 7 7 21 7 25 33 32 33 7", "38 27 2 34 22 26 24 5 27 27 2 16 25 31", "25 32 32 32 25 25 32 32 33 32", "10", "7", "30", "18", "3", "4", "28", "31 5 38 7 16 16 22 36 5 31 22 19 9 27 25", "25 28 27 25 27 25 27 21 32 27 25 5 28 14 33 5", "21", "11", "24 5 6", "29", "17", "31", "27 22 27 26 32 9 9", "32 27 14 28 7 5 25 28", "33", "14 32 5 33 7 22 24 32 17 22 38 33 2", "32 14", "14", "20", "8", "22", "33 33", "25", "37", "32 16 33 12 23 14 16 2 23 12 25 25 21", "34", "36", "32 5 32 27 2 7 16 32 28 2"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 25057;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> transforms = {"32", "44", "11", "23", "21", "35", "22 45 3 8 45 8 23 8 45 8", "22 22 22 22 4 29 37 22 4 4 22 29 29 29 23 31", "3", "41", "36", "30", "7 45 7 16 7 16 7 16 7 4 11 45 22 7", "19", "22 25 42 34 7 7 22", "8 22 7 22 45", "45 21 27 15 6 26 3 8", "32", "38", "39 42 45 7 34", "13 29 7 23 7 22 8 23 34 13 34 45 16", "4 23 31 29 4 29 4 37", "29", "14", "12", "18", "26", "40 22 42 39 34 46 46 45 16 34 21", "37", "39", "4", "27", "10", "7 11 46 16 4 46 7 46 4 22 46", "24", "9", "31", "6", "25", "45 8", "33", "44 21 27 33 37 34 33 45", "13 8 45 5 28 21 41 28 5 45 28 9 15 3", "2", "22 37 4 4 8 23 8 22 22", "7 7 9 13 13 13 4 45 11 7 22 45 16"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> transforms = {"2 3 2 4 3 4 1 1 2 4 2 3 3 1", "4 3", "4 2 3 4 3 4", "3 4 4 2 3 1 2 1 1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> transforms = {"1 7 7 1 3 4 1 2 1 2", "5 6 7 4", "1 7 5 4 1 6 3 3", "1 5 6 5 4 2 3 7 1 5 3 2 7 6", "5 5 6 1 1 5 2 7 4 2 6 3 5 1", "6 3 2 6 4 5 7 6 5 2 5 6 4 3", "7 5 4 7 5 6 4 6"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> transforms = {"35 15 16 14 16 25 30 2 31 22 25 44 43 39 13 47 25", "32 3 32 10 30 27 42 25 6 4 43 14 2 16 2 10", "4 46 15 16", "18 3 13 44 44 34 48 25 19 18 34 9 31 11", "7", "38 12 29 35 4 2 35", "19 46 43 25", "28 13 32 17 15 47 21 6 38 39 17 13 29", "16 7 32 25 47 23 37 28 22 41 42 14 9", "44 43 9 42 26 5 48 8 41 12 29 28 41 17", "35 40 43 42 6 6 26 40 20 41 25", "18", "25 33 48 15 28 7 46 34", "11 30 34 44 45 11 48 15 44 11 45 23 6 1", "31 14 6 48 14 16 9 2 28 34 20 47 38 27 17", "19 8 45 18 23 12 44 19 40 8 13 35 48 11", "5 3 44 20 3 2 6 5", "30", "39 5 32 44 28 32 25 16", "48 21 3 22 42 6 24 18 2 30 3 9 45 29", "7 24 44 40", "26 40 29 47 39 19 3 6 39 24 42 36 38", "25 1 29 47 22 16 18 9 19 21 11 20", "37 9 37", "45 34 2 39 22 47 7 40 23 7 41 15 44 27", "7 21 21 12", "18 11 8 5 45 40", "44 40 12 37 46 10 2 4 27 20 19 36 17 40 26", "6 28 39 48 21 11 8 20 6 13 21 21", "25 42 12 35 8 27 4 2 11 35 6 46 31 13 2 9 48", "17", "44", "9 26 26", "17 25 27 40 22 14", "43 29 10 43 12 9 2 42 43 15 26 1 35 24 38 23 5", "13 5 5 45 31 42 35", "40 19 28 3 21", "2", "23 43 25 45 22 14 35 8 7 1 15 48", "22 14 16 44 46", "20 11 20 26 21 44 13 25 6 46 46", "48 18 31 41 9 21 15 20 9 28", "40 48 33 20 40 18 14 48 46 21 39 47 46 13", "2 24 6 16 7 17", "4 32 20 2 23 38 4 42 18 13 6 17", "9 29 38 42 33 6 26 10 19 37 25 18 9", "42 35 27 42 42 37 5 34 3 21 26", "35 17"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> transforms = {"30 38 38 2 26 39", "10 33 23 9 33 49 2 27 28 35 8 6 41 25 8 42", "45 27 41 46 26 6", "23 29 33 33 27 16 10 38 40 29 32 12 44 42", "26 19 39 43 19 18 3 41 37 25 21 14 33", "30 39 25 10 32", "19 36 30 36 18 18 43 24 20 36 1 5 26 38", "29 40 15 22 36 1 18 14 19 23 37 20 23", "8 33 47 23 13 35", "11 22 15 24 36 6 4 2 10 17 39 27 16 42 46 22 5", "30 12 43", "48 44 26 49 7 5 23 44 2", "8 13 18 15 17 28", "14 35 38 28 2 34", "1 20 16 37 47 4 47 43 36 23 31", "7 4 36 31 3 33 32 16", "20 3 28 6 37 40 30 25 49 10 24 22 22 10 33 43", "25 46 25", "24 49 32 33 8 39", "6 16 27 21 2 26 30 20 38 5 9 15 32 39 29 44 12", "45 35 50 38 35 29 23 11 49", "35 18 32 12", "38 35 4 50 1 42 29", "23 33 22 6 27 47 39 1 49 11", "31 31 10 42 46 39 44 48 29 35 43 33", "21 30 49 7", "20 5 14 1 49 5 37 27 16 17 3 23 5 9 45 6", "35 40 5 27 23 24", "35 43 6 48 34 2 46 3 50 43 46 19 50 12", "32 40 21 39 5 15 20 25 29 36", "16 11", "44 19 7 20 15 14 15 37 37 41 11 21 24 46", "9 23 23 18 7 35 8 29 47 41 40 28 28", "27 26 25 29 22 46 26 23 1 30 25 17 25 32 17 48 34", "35 39 25 36 35 9 47 41 35 22 21 22 3", "32 43 39 33 46 3", "28 9", "16 12 39 49 41 3 8 41 18 18 27 49 8 48", "32 49 45 22 13 2 13 32 36 3 25 11", "21 46 19 4 15 6 32 10 26 46 39", "30 18 47 31 12 26 3", "42 35 16 27 4 11 2 24 25 2 16 43", "27 35 2 20 41 43 6 4 3", "38 44 32", "39 28 5 32 27 28", "24 5 30 45", "17", "42 11 49 25 8 25 7 14 8 1 25 27 20 9", "44 42 36 34 36 30 20 17 7 12 35 46 3 3", "24 20 45 6 21 14 13 3 32 30 4 43 48 37 31 10"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> transforms = {"32 23 14 35 19 28 15 47 13 26 7 17 2 22 35 6", "38 8 1 20 26 44 2 39 34 34 18 2 19 7", "20 20 20 20", "33 21", "47 32 41 35 41 29 12 17 30 38 25 38 16 12 21 20 36", "47 9", "27 6 22 19 21 34 28 15 10 20 39", "39 32 2 5 36 33 8 7 19 32", "44 17 37 21 14 32 35 36 44 10 29 21 20 7 28 13 4", "44 10 12 21 14 9", "31 22 38 18 12 27 23 31 7 41 44", "30 3 3 4 2 19", "8 12 6 18 32 8 24", "17 19 31 36 23 27 32 11 30 2 36 47 25 3 41", "14 46 1 24 25 36 13 24 35 15 9 25 37 15 44 22", "25", "21 30 39 1 30 17 6", "25 5 25 45 16", "42 26 11 37 21 13 11 42 40 15 38 30", "47 31 25 20 46 9", "4 26 16 32 28 19 1 22 28 6 40 34 12 20 39", "26 24 14 44 26", "10 36 33 6 6 20 32 22 40 2 29 34 27", "27 18 15 3 21 22", "39 36 10 10 40 19 22 39 47 15 7 27 23 18 11", "30 45 45 17 35 31 43", "25 16 37 32 22 24 13 13 42 6 46 7 38 17", "31 3 41 14 42 2 33", "36 2 26 2 18 42 23 33 18 40 47 25", "26 18 13", "17", "19 43 5 16 11 14", "29 30 26 28 31 19", "47 14 43 37 40 6 22", "9 16 41 9 18 28 40 20 35 22 9 42 47 43 23 18 2", "43 7 3 10 39 7 40 15 9 37 42 27 32 38 11", "40 19 5 44 47 24 16 17 4 32 39 33 15", "23 2 31 2 23 6 42 24 20 45 7", "31 30 40 2 16 42", "47 23 8 8 15 26 43 14 30 33 5 31 11 33 10 41", "21 7 31 4", "26 4 21 6 24 21 39 11 17 45", "16 20 2 14", "36 30", "3 6 47 4 20 7 47 25 3 47 11", "12 39 36", "19 18"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> transforms = {"2 3", "5 7", "2 4", "5", "6", "4", "7"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> transforms = {"2 2 3", "4", "4", "5", "6 7", "8", "8", "9 9", "9"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> transforms = {"1", "3 4", "2", "2"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 11 11 11 11 11 11 11 21 21 21", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "20", "12", "13", "14", "15", "16", "17", "18", "19", "20", "20 20", "21"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> transforms = {"11 11 11 11 11 11 11 2 2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "10 10", "12", "13", "14", "15", "16", "17", "18", "10"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 12", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "21", "11", "13", "14", "15", "16", "17", "18", "19", "20 20 20 20 20 20 20", "21", "21 21"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10", "11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13", "14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14", "15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15", "16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16", "17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17", "18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18", "19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19", "20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20", "21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21", "22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22", "23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23", "24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24", "25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25", "26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26", "27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27", "28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28", "29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29", "30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30", "31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31", "32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32", "33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33", "34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34", "35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35", "42 36 37 48 50", "36", "38", "39", "40", "41", "37", "43", "44", "45", "42", "48", "46", "47", "50", "49"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 189515666;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> transforms = {"2 2", "3 3 3", "4 4 4 4", "5 5 5 5 5", "6 6 7 6 6 6", "7 7 7 7 7 7 7", "8 8 8 8 8 8 8 9", "9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "11 11 11 11 11 11 11 11 19 11 11", "12 12 12 12 12 12 12 12 12 12 12 12", "13 13 13 13 13 13 13 13 13 13 13 13 13", "14 14 14 14 14 14 14 14 14 14 14 14 14 14", "15 15 15 15 15 15 15 15 15 15 15 15 15 15 15", "16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16", "17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17", "18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18", "19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19", "20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20", "21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21", "22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22", "23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23", "24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24", "25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25", "26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26", "27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27", "28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28", "29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29", "30 30 30 30 30 30 30 33 30 30 30 30 33 30 30 30", "31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31", "32 32 32 32 32 32 32 32 38 32 32 32 32 32 32 32", "33 33 33 33 37 33 33 33 33 33 33 33 33 33 33 33", "34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34", "35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35", "36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36", "37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37", "38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38", "39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39", "40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40", "41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41", "42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42", "43 43 43 43 43 43 43 43 43 43 43 43 43 43 43 43", "44 44 44 44 44 44 44 44 44 44 44 44 44 44 44 44", "45 45 45 45 45 45 45 45 45 45 45 45 45 45 45 45", "46 46 46 46 46 46 46 46 46 46 46 46 46 46 46 46", "47 47 47 47 47 47 47 47 47 47 47 47 47 47 47 47", "48 48 48 48 48 48 48 48 48 48 48 48 48 48 48 48", "49 49 49 49 49 49 49 49 49 49 49 49 49 49 49 49", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 580985568;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10", "11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13", "14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14", "15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15", "16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16", "17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17", "18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18", "19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19", "20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20", "21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21", "22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22", "23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23", "24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24", "25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25", "26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26", "27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27", "28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28", "29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29", "30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30", "31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31", "32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32", "33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33", "34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34", "35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35", "36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36", "37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37", "38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38", "39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39", "40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40", "41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41", "42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42", "43 43 43 43 43 43 43 43 43 43 43 43 43 43 43 43", "44 44 44 44 44 44 44 44 44 44 44 44 44 44 44 44", "45 45 45 45 45 45 45 45 45 45 45 45 45 45 45 45", "46 46 46 46 46 46 46 46 46 46 46 46 46 46 46 46", "47 47 47 47 47 47 47 47 47 47 47 47 47 47 47 47", "48 48 48 48 48 48 48 48 48 48 48 48 48 48 48 48", "49 49 49 49 49 49 49 49 49 49 49 49 49 49 49 49", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 663295682;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8", "8"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 103515583;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 12 12 12 12 12 12 12 21", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "11", "20 10", "13", "14", "15", "16", "17", "18", "19", "10", "10", "21"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 11 11 11 11 11 11 11", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "2", "12", "13", "14", "15", "16", "17", "18", "10"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> transforms = {"3", "4", "2", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10", "11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13", "14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14", "15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15", "16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16", "17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17", "18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18", "19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19", "20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20", "21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21", "22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22", "23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23", "24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24", "25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25", "26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26", "27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27", "28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28", "29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29", "30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30", "31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31", "32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32", "33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33", "34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34", "35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35", "36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36", "37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37", "38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38", "39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39", "40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40", "41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41", "42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42", "43 43 43 43 43 43 43 43 43 43 43 43 43 43 43 43", "44 44 44 44 44 44 44 44 44 44 44 44 44 44 44 44", "45 45 45 45 45 45 45 45 45 45 45 45 45 45 45 45", "46 46 46 46 46 46 46 46 46 46 46 46 46 46 46 46", "47 47 47 47 47 47 47 47 47 47 47 47 47 47 47 47", "48 48 48 48 48 48 48 48 48 48 48 48 48 48 48 48", "49 49 49 49 49 49 49 49 49 49 49 49 49 49 49 49", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 421150202;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 587889561;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 14", "3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4", "5 5 5 5 5", "6 6 6 6 6", "7 7 7 7 7", "8 8 8 8 8", "9 9 9 9 9", "10 10 10 10 10", "11 11 11 11 11", "12 12 12 12 12", "13 13 13 13 13", "13 13", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "13 13 13 13 13 13 13"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 11", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "10", "10 10 10 10 10 10 10"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> transforms = {"2 2", "3 3", "4 4", "5 5", "6 6", "7 7", "8 8", "9 9", "10 10", "11 11", "12 12", "13 13", "14 14", "15 15", "16 16", "17 17", "18 18", "19 19", "20 20", "21 21", "22 22", "23 23", "24 24", "25 25", "26 26", "27 27", "28 28", "29 29", "30 30", "31 31", "32 32", "33 33", "34 34", "35 35", "36 36", "37 37", "38 38", "39 39", "40 40", "41 41", "42 42", "43 43", "44 44", "45 45", "46 46", "47 47", "48 48", "49 49", "50 50", "50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 949480669;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> transforms = {"2 3", "1", "1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> transforms = {"3 4 2 5 2", "5 7 4 5 5 3 7 6", "4 5 6 5 5 7 6 8", "5 7 8 7", "10 8 8 9 10 8 9", "8 9 11 10 8 11 11 9", "12 8 8 11 9 9 8 9 11 10", "10 10", "10 14 12 11 10 11 14", "13 15 11 13 11", "14 16 16 15 12 14", "14 16 16 17 16 14 17 17 15 13", "17 18 16 15 15 18 18 14", "19 18", "17 18 18 18 18 18 17 17 16", "18 17 21 21 21 17 21 18", "20 19 19 18 22 20 20 19 20", "20 19 20 22 23", "23 21 22 24 23 24", "24 24", "22 26 23 25 25 22 23", "24 23 27", "28 27 25 24 27 24 28 28 28 28", "26 28 26 27 25 29 26 27 26", "29 26 28 30 27 29 26 30 28", "30 30 30 30 28 30 31", "32 31 31 31 31 29 28 32", "32 32 33 31 31 30 33 32 29 32", "34 32", "35 31 31 35 35 32 35", "34 36 34 34", "37 36 34 35 36 37 36", "37 34 36 35 34 34 35 35", "38 35", "37 40", "39 37 40 38 39 40 41 39", "42 38 39 40", "43 39 42 40 42 40 40 39 42 43 39", "44 41 44 41 44", "44 44 41 41 42", "46 42 42 46 43 44 43 44", "44 47 46 45 45 46 45", "48 45 44 46 46 45 45 47 46 45 44", "49 46 49 49 46 45 47 45 48 47 45", "49 46 50 48 50 47", "49 47 47", "50 50 49 48", "50 49 49 49", "50 50 50 50 50", "50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 468838481;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10", "11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13", "14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14", "15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15", "16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16", "17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17", "18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18", "19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19", "20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20", "21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21", "22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22", "23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23", "24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24", "25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25", "26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26", "27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27", "28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28", "29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29", "30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30", "31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31", "32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32", "33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33", "34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34", "35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35", "36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36", "37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37", "38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38", "39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39", "40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40", "41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41 41", "42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42", "43 43 43 43 43 43 43 43 43 43 43 43 43 43 43 43 43", "44 44 44 44 44 44 44 44 44 44 44 44 44 44 44 44 44", "45 45 45 45 45 45 45 45 45 45 45 45 45 45 45 45 45", "46 46 46 46 46 46 46 46 46 46 46 46 46 46 46 46 46", "47 47 47 47 47 47 47 47 47 47 47 47 47 47 47 47 47", "48 48 48 48 48 48 48 48 48 48 48 48 48 48 48 48 48", "49 49 49 49 49 49 49 49 49 49 49 49 49 49 49 49 49", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 252898836;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> transforms = {"11 21 21 21 21 21 21 21", "2", "3", "4", "5", "6", "7", "8", "9", "10", "12 12 12 12 12 12 12 12 12 12", "13 13 13 13 13 13 13 13 13 13", "14 14 14 14 14 14 14 14 14 14", "15 15 15 15 15 15 15 15 15 15", "16 16 16 16 16 16 16 16 16 16", "17 17 17 17 17 17 17 17 17 17", "18 18 18 18 18 18 18 18 18 18", "19 19 19 19 19 19 19 19 19 19", "20 20 20 20 20 20 20 20 20 20", "31", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32 32", "31 31"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> transforms = {"2", "3", "1 1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> transforms = {"2", "3 3", "2"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10 10 10 10 10", "11 11 11 11 11 11 11 11 11 11 11 11 11 11", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 234683093;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> transforms = {"2 11", "3", "4", "5", "6", "7", "8", "9", "10", "1", "11"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 11", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "20", "12", "13", "14", "15", "16", "17", "18 18 18 18 18 18 18", "19", "20", "20 20"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> transforms = {"10", "2", "3", "4", "5", "6", "7", "8", "9", "11 12", "11", "12"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> transforms = {"2 2", "3 3", "4 4", "5 5", "6 6", "7 7", "8 8", "9 9", "10 10", "11 11", "12 12", "13 13", "14 14", "15 15", "16 16", "17 17", "18 18", "19 19", "20 20", "21 21", "22 22", "23 23", "24 24", "25 25", "26 26", "27 27", "28 28", "29 29", "30 30", "31 31", "32 32", "33 33", "34 34", "35", "35"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 589934536;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> transforms = {"2 2 2 2", "3 3 3 3", "4 4 4 4", "5 5 5 5", "6 6 6 6", "7 7 7 7", "8 8 8 8", "9 9 9 9", "10 10 10 10 10", "11 11 11 11", "12 12 12 12", "13 13 13 13", "14 14 14 14", "15 15 15 15", "16 16 16 16", "17 17 17 17", "17"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 368709085;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> transforms = {"2", "3 4", "1", "4"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> transforms = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "10"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 760294162;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 702702000;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> transforms = {"2", "3", "4", "5 5", "6", "7", "1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 11 11 11 11 11 11 11", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "10 10", "12", "13", "14", "15", "16", "17", "18", "10"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 12", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "11 11", "10 10", "13", "14", "15", "16", "17", "18", "19", "10 10 10 10 10 10 10", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 771886611;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> transforms = {"11 21 21 21 21 21 21 21 21 21", "2", "3", "4", "5", "6", "7", "8", "9", "10", "12 12 12 12 12 12 12 12 12 12", "13 13 13 13 13 13 13 13 13 13", "14 14 14 14 14 14 14 14 14 14", "15 15 15 15 15 15 15 15 15 15", "16 16 16 16 16 16 16 16 16 16", "17 17 17 17 17 17 17 17 17 17", "18 18 18 18 18 18 18 18 18 18", "19 19 19 19 19 19 19 19 19 19", "20 20 20 20 20 20 20 20 20 20", "31", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32 32", "31 31"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "11 11 11 11 11 11 11 11 11 11", "12 12 12 12 12 12 12 12 12 12", "13", "13", "13"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 999999307;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10 10 10 10 10 10", "11 11 11 11 11 11 11 11 11 11 11 11 11 11 11", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "13 13 13 13 13 13 13 13 13 13 13 13 13 13 13", "14 14 14 14 14 14 14 14 14 14 14 14 14 14 14", "15 15 15 15 15 15 15 15 15 15 15 15 15 15 15", "16 16 16 16 16 16 16 16 16 16 16 16 16 16 16", "17 17 17 17 17 17 17 17 17 17 17 17 17 17 17", "18 18 18 18 18 18 18 18 18 18 18 18 18 18 18", "19 19 19 19 19 19 19 19 19 19 19 19 19 19 19", "20 20 20 20 20 20 20 20 20 20 20 20 20 20 20", "21 21 21 21 21 21 21 21 21 21 21 21 21 21 21", "22 22 22 22 22 22 22 22 22 22 22 22 22 22 22", "23 23 23 23 23 23 23 23 23 23 23 23 23 23 23", "24 24 24 24 24 24 24 24 24 24 24 24 24 24 24", "25 25 25 25 25 25 25 25 25 25 25 25 25 25 25", "26 26 26 26 26 26 26 26 26 26 26 26 26 26 26", "27 27 27 27 27 27 27 27 27 27 27 27 27 27 27", "28 28 28 28 28 28 28 28 28 28 28 28 28 28 28", "29 29 29 29 29 29 29 29 29 29 29 29 29 29 29", "30 30 30 30 30 30 30 30 30 30 30 30 30 30 30", "31 31 31 31 31 31 31 31 31 31 31 31 31 31 31", "32 32 32 32 32 32 32 32 32 32 32 32 32 32 32", "33 33 33 33 33 33 33 33 33 33 33 33 33 33 33", "34 34 34 34 34 34 34 34 34 34 34 34 34 34 34", "35 35 35 35 35 35 35 35 35 35 35 35 35 35 35", "36 36 36 36 36 36 36 36 36 36 36 36 36 36 36", "37 37 37 37 37 37 37 37 37 37 37 37 37 37 37", "38 38 38 38 38 38 38 38 38 38 38 38 38 38 38", "39 39 39 39 39 39 39 39 39 39 39 39 39 39 39", "40 40 40 40 40 40 40 40 40 40 40 40 40 40 40", "41 41 41 41 41 41 41 41 41 41 41 41 41 41 41", "42 42 42 42 42 42 42 42 42 42 42 42 42 42 42", "43 43 43 43 43 43 43 43 43 43 43 43 43 43 43", "44 44 44 44 44 44 44 44 44 44 44 44 44 44 44", "45 45 45 45 45 45 45 45 45 45 45 45 45 45 45", "46 46 46 46 46 46 46 46 46 46 46 46 46 46 46", "47 47 47 47 47 47 47 47 47 47 47 47 47 47 47", "48 48 48 48 48 48 48 48 48 48 48 48 48 48 48", "49 49 49 49 49 49 49 49 49 49 49 49 49 49 49", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 521485002;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 11 11 11 11 11 11 11", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "20", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21 21", "20 20"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> transforms = {"26 2 2 2 2", "3 3 3 3", "4 4 4 4", "5 5 5 5", "6 6 6 6", "7 7 7 7", "8 8 8 8", "9 9 9 9", "10 10 10 10", "11 11 11 11", "12 12 12 12", "13 13 13 13", "14 14 14 14", "15 15 15 15", "16 16 16 16", "17 17 17 17", "18 18 18 18", "19 19 19 19", "20 20 20 20", "21 21 21 21", "22 22 22 22", "23 23 23 23", "24 24 24 24", "25 25 25 25", "25", "27 27 27 27", "28 28 28 28", "29 29 29 29", "30 30 30 30", "31 31 31 31", "32 32 32 32", "33 33 33 33", "34 34 34 34", "35 35 35 35", "36 36 36 36", "37 37 37 37", "38 38 38 38", "39 39 39 39", "40 40 40 40", "41 41 41 41", "42 42 42 42", "43 43 43 43", "44 44 44 44", "45 45 45 45", "46 46 46 46", "47 47 47 47", "48 48 48 48", "49 49 49 49", "50 50 50 50", "50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 949480669;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> transforms = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "1 1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 13", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "11 11 11 11 11 11 11 11 11 11", "12 12 12 12 12 12 12 12 12 12", "12", "13"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 999999308;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> transforms = {"2 2 2", "3 3 3", "4 4 4", "5 5 5", "6 6 6", "7 7 7", "8 8 8", "9 9 9", "10 10 10", "11 11 11", "12 12 12", "13 13 13", "14 14 14", "15 15 15", "16 16 16", "17 17 17", "18 18 18", "19 19 19", "20 20 20", "21 21 21", "22 22 22", "23 23 23", "24 24 24", "25 25 25", "26 26 26", "27 27 27", "28 28 28", "29 29 29", "30 30 30", "31 31 31", "32 32 32", "33 33 33", "34 34 34", "35 35 35", "36 36 36", "37 37 37", "38 38 38", "39 39 39", "40 40 40", "41 41 41", "42 42 42", "43 43 43", "44 44 44", "45 45 45", "46 46 46", "47 47 47", "48 48 48", "49 49 49", "50 50 50", "50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 236701429;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> transforms = {"2 4", "3 4", "1 4", "4"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> transforms = {"2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 16", "3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 17", "4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 18", "5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 19", "6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 20", "7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 21", "8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 22", "9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 23", "10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 24", "11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 25", "12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 26", "13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 27", "14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 28", "15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 29", "16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 30", "17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 31", "18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 32", "19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 33", "20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 34", "21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 35", "22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 36", "23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 37", "24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 38", "25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 39", "26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 40", "27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 41", "28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 42", "29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 43", "30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 44", "31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 45", "32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 46", "33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 47", "34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 48", "35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 49", "36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 50", "37 38 39 40 41 42 43 44 45 46 47 48 49 50 50", "38 39 40 41 42 43 44 45 46 47 48 49 50 50", "39 40 41 42 43 44 45 46 47 48 49 50 50", "40 41 42 43 44 45 46 47 48 49 50 50", "41 42 43 44 45 46 47 48 49 50 50", "42 43 44 45 46 47 48 49 50 50", "43 44 45 46 47 48 49 50 50", "44 45 46 47 48 49 50 50", "45 46 47 48 49 50 50", "46 47 48 49 50 50", "47 48 49 50 50", "48 49 50 50", "49 50 50", "50 50", "50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 949480669;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> transforms = {"1 2", "2"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> transforms = {"2 2 2 2 2 20", "3 3 3 3 3", "4 4 4 4 4", "5 5 5 5 5", "6 6 6 6 6", "7 7 7 7 7", "8 8 8 8 8", "9 9 9 9 9", "10 10 10 10 10", "11 11", "12 12", "13 13", "14 14", "15 15", "16 16", "17 17", "18 18", "19 19", "19", "21 21 21 21 21 21 21", "21"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> transforms = {"1 1 1 1 1 1 1 1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> transforms = {"2 3", "4", "5", "1", "1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> transforms = {"2", "3", "4 5", "2", "5"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 22 22 22 22 22 22 22 22", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "31", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "23", "24", "25", "26", "27", "28", "29", "30", "31", "1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 11 11 11 11 11 11 11", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "1", "12", "13", "14", "15", "16", "17", "18", "19", "1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> transforms = {"1 1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> transforms = {"50 2", "50 3", "50 4", "5", "50 6", "50 7", "50 8", "9", "10", "50 11", "50 12", "13", "50 14", "15", "50 16", "50 17", "18", "19", "50 20", "21", "50 22", "23", "24", "25", "26", "27", "28", "50 29", "50 30", "50 31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "49", "50 50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 12", "3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10", "10 19", "10 10 10 10 10 10 10", "13", "14", "15", "16", "17", "18", "11", "19"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10", "11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13", "14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14", "15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15", "16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16", "17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17", "18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18", "19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19", "20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20", "21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21", "22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22", "23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23", "24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24", "25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25", "26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26", "27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27", "28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28", "29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29", "30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30", "31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31", "32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32", "32"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 27709635;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> transforms = {"2 2 2 2 2 2 2 2 2", "3 3 3 3 3 3 3 3 3 3 3", "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4", "5 5 5 5 5 5 5 5 5 5 5 5 5 5", "6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6", "7 7 7 7 7 7 7 7 7 7 7 7 7 7", "8 8 8 8 8 8 8 8 8 8 8 8 8 8", "9 9 9 9 9 9 9 9 9 9 9 9 9 9", "10 10 10 10 10 10", "11 11 11 11 11 11", "12 12 12 12 12 12 12", "13 13 13 13 13 13 13 13 13 13 13 13", "14 14 14 14 14 14 14", "15 15 15 15 15 15 15 15", "16 16 16 16 16 16 16 16", "17 17 17 17 17 17 17 17", "18 18 18 18", "19 19 19 19 19 19", "20 20 20 20 20", "21 21 21 21", "22", "22", "22"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 542050560;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> transforms = {"2", "3", "4", "1"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> transforms = {"2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21", "4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22", "5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22", "6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23", "7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24", "8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24", "9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25", "10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26", "11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27", "12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28", "13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29", "14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30", "15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31", "16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32", "17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33", "18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34", "19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35", "20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36", "21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37", "22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38", "23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39", "24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40", "25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41", "26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42", "27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43", "28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44", "29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45", "30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46", "31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47", "32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48", "33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49", "34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50", "35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50", "36 37 38 39 40 41 42 43 44 45 46 47 48 49 50", "37 38 39 40 41 42 43 44 45 46 47 48 49 50", "38 39 40 41 42 43 44 45 46 47 48 49 50", "39 40 41 42 43 44 45 46 47 48 49 50", "40 41 42 43 44 45 46 47 48 49 50", "41 42 43 44 45 46 47 48 49 50", "42 43 44 45 46 47 48 49 50", "43 44 45 46 47 48 49 50", "44 45 46 47 48 49 50", "45 46 47 48 49 50", "46 47 48 49 50", "47 48 49 50", "48 49 50", "49 50", "50", "50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 373347396;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> transforms = {"2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 50", "50", "50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = 586268941;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> transforms = {"2 2 2 21", "3 3 3", "4 4 4 23 23", "5 5 5", "6 6 6 25", "7 7 7 26", "8 8 8 27 27", "9 9 9 28 28", "10 10 10 29 29", "11 11 11 30", "12 12 12 31 31", "13 13 13", "14 14 14 33 33", "15 15 15", "16 16 16 35", "17 17 17", "18 18 18 37", "19 19 19", "20 20 20", "40", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "41 41", "42", "43", "44", "45", "46", "47", "48", "49", "50"};
    MonsterFarm* pObj = new MonsterFarm();
    clock_t start = clock();
    int result = pObj->numMonsters(transforms);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=7433858&rd=14724&pm=11232
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <ctime> 
 
using namespace std;
 
#define mo 1000000007
 
vector<int> aa[100];
int good[100];
int used[100];
 
class MonsterFarm
{
public:
int numMonsters(vector <string> a)
{
  int i,j,k,n,b1,b2,p,x,tmp;
  string s;
  n=a.size();
  for (i=0;i<n;i++)
  {
    aa[i].clear();
    s=a[i]+" ";
    while (s!="")
    {
      p=s.find_first_of(' ');
      aa[i].push_back(atoi(s.substr(0,p).c_str())-1);
      s=s.substr(p+1);
    }
  }
  memset(good,-1,sizeof(good));
  for (i=0;i<n;i++)
  {
    memset(used,0,sizeof(used));
    x=i;
    while (used[x]==0)
    {
      if (aa[x].size()>1) break;
      used[x]=1;
      x=aa[x][0];
    }
    if (used[x]==1) good[x]=1;
  }
  b1=1;
  while (b1==1)
  {
    b1=0;
    for (i=0;i<n;i++)
      if (good[i]==-1)
      {
        tmp=0;b2=1;
        for (j=0;j<aa[i].size();j++)
        {
          if (good[aa[i][j]]==-1)
          {
            b2=0;
            break;
          }
          tmp+=good[aa[i][j]];
          tmp%=mo;
        }
        if (b2==1)
        {
          good[i]=tmp;
          b1=1;
        }
      }
  }
  return good[0];
}
};

********************************************************************************
*******************************************************************************/