/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7541
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

class MetroNetwork {
public:
    double minimizeTime(int start, int destination, vector<string> lines, vector<string> times, vector<int> probabilities, int changeTime, int delay);
};

double MetroNetwork::minimizeTime(int start, int destination, vector<string> lines, vector<string> times, vector<int> probabilities, int changeTime, int delay) {
    double ret;
    return ret;
}


int test0() {
    int start = 0;
    int destination = 7;
    vector<string> lines = {"0 1 2 3 4 5 6 7"};
    vector<string> times = {"2 2 2 2 2 2 2"};
    vector<int> probabilities = {50};
    int changeTime = 5;
    int delay = 5;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 41.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int start = 0;
    int destination = 3;
    vector<string> lines = {"0 1", "0 2", "1 3", "2 3"};
    vector<string> times = {"5", "5", "5", "5"};
    vector<int> probabilities = {0, 0, 50, 50};
    int changeTime = 5;
    int delay = 20;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int start = 0;
    int destination = 3;
    vector<string> lines = {"0 1", "0 2", "0 1 3", "2 3"};
    vector<string> times = {"5", "5", "100 5", "5"};
    vector<int> probabilities = {0, 0, 50, 50};
    int changeTime = 5;
    int delay = 20;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 35.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int start = 0;
    int destination = 4;
    vector<string> lines = {"0 1 2 3", "1 3 4", "2 4"};
    vector<string> times = {"10 10 20", "100 10", "80"};
    vector<int> probabilities = {0, 50, 0};
    int changeTime = 5;
    int delay = 100;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 105.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int start = 12;
    int destination = 9;
    vector<string> lines = {"0 30 1 2 3 4 31 5 6 7", "38 6 8 32 9 33 10 34 11 0 12 13 14 15 16 36 5 38", "17 39 18 19 5 8 9 20 21", "17 39 22 16 23 24 3 25 20 21", "28 9 20 25 2 27 14 17", "12 13 27 26 24 4 9 28", "29 10 1 27 15 22 19", "11 10 2 26 23 16 22 18"};
    vector<string> times = {"3 3 2 3 2 3 2 2 5", "2 1 3 4 3 2 4 2 4 5 1 4 4 2 4 5 4", "2 4 4 2 2 6 2 4", "2 8 2 1 1 2 3 1 6", "6 1 2 2 2 2 6", "1 7 1 2 2 4 8", "7 2 3 2 2 4", "4 4 2 2 1 2 9"};
    vector<int> probabilities = {20, 5, 15, 50, 45, 5, 10, 5};
    int changeTime = 3;
    int delay = 10;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 23.228506624999994;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int start = 0;
    int destination = 3;
    vector<string> lines = {"0 1", "2 3"};
    vector<string> times = {"2", "2"};
    vector<int> probabilities = {50, 50};
    int changeTime = 5;
    int delay = 5;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int start = 16;
    int destination = 30;
    vector<string> lines = {"14 16 18 20 21 23 26 27 28 29 31 34 37 39 2 5 6 9", "21 22 25 27 30 33 36 38 39 0 1 3 5 7 8 10 11 13", "36 37 38 39 2 4 5 7 10 12 15 17 19 22 24 26 28 29", "14 16 17 19 21 23 26 29 32 33 34 35 38 39 0 3 4 7", "35 37 0 3 4 6 8 11 12 13 14 15 16 17 19 22 25 28", "7 8 11 12 15 16 19 22 25 28 30 32 34 35 36 37 0 3", "3 6 7 10 11 12 15 16 17 19 20 21 22 23 24 27 28", "3 4 6 7 10 13 14 15 16 18 21 22 23 25 27 29 32 34"};
    vector<string> times = {"10 10 5 5 2 2 6 8 5 7 1 4 10 5 3 7 4", "8 1 7 6 7 6 4 6 6 8 1 7 8 7 4 5 4", "10 1 3 7 10 6 8 5 8 8 9 5 7 3 8 10 8", "2 8 4 9 5 2 4 3 4 9 6 3 7 8 1 10 6", "9 4 3 8 1 6 4 4 5 4 2 8 10 3 6 3 2", "4 7 10 8 6 4 6 7 4 8 7 10 2 9 3 1 10", "10 4 5 9 3 10 2 10 8 4 10 4 5 2 7 2", "9 5 1 1 8 2 9 4 7 3 5 7 10 2 2 3 2"};
    vector<int> probabilities = {86, 22, 75, 9, 57, 18, 97, 26};
    int changeTime = 5;
    int delay = 19;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 42.569454614727;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int start = 36;
    int destination = 26;
    vector<string> lines = {"33 36 39 0 1 4 5 8 11 12 14 15 16 18 20 22 23 24", "26 28 30 32 35 37 38 1 4 5 6 8 9 11 12 13 15 17", "20 23 26 29 31 32 33 34 37 39 0 2 5 7 10 11 13 15", "8 10 13 16 17 20 21 24 27 28 29 32 34 36 39 0 2 4", "18 20 21 23 25 26 29 31 33 35 38 0 3 5 7 9 11 14", "27 29 32 34 37 39 0 1 3 6 8 9 11 14 16 18 20 21", "1 2 3 5 7 9 10 13 15 17 20 23 24 27 29 31 33 36", "21 24 26 29 31 33 36 37 0 1 2 3 6 9 10 13 14 17"};
    vector<string> times = {"10 1 9 8 3 5 9 9 9 1 4 9 3 2 8 4 9", "10 5 6 10 7 8 8 9 1 3 8 1 10 10 9 6 4", "8 1 7 4 9 7 8 7 9 9 2 5 5 3 3 7 10", "10 5 7 10 3 8 5 9 10 4 3 9 8 8 2 1 2", "2 3 7 10 9 1 3 6 9 7 8 3 10 3 5 10 9", "5 1 6 4 9 1 9 3 5 2 6 4 8 8 2 8 9", "5 3 4 3 2 4 2 9 4 9 10 4 9 10 8 9 2", "7 9 6 9 7 2 3 2 2 8 8 5 4 4 7 9 4"};
    vector<int> probabilities = {1, 12, 83, 98, 77, 23, 80, 67};
    int changeTime = 10;
    int delay = 1;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 46.68;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int start = 23;
    int destination = 1;
    vector<string> lines = {"20 21 22 24 27 29 32 35 38 0 3 6 8 9 10 12 14 16", "0 3 4 6 9 10 12 14 17 20 21 22 24 27 29 32 34 35", "38 0 3 4 5 6 9 10 12 13 15 18 19 20 22 25 26 27", "18 21 22 24 25 27 30 32 35 37 39 0 3 4 6 9 10 12", "14 17 20 21 22 23 26 27 29 30 31 33 36 37 38 1 2", "23 24 25 28 29 32 35 37 38 0 2 3 6 9 12 15 16 19", "17 19 20 22 23 24 25 27 29 31 32 35 36 39 0 3 4 6", "31 34 37 38 39 1 4 7 9 10 12 15 17 19 22 23 26 27"};
    vector<string> times = {"3 6 5 7 7 5 5 10 3 8 6 6 3 7 4 6 3", "1 4 2 2 9 2 7 8 1 7 5 7 4 1 8 6 2", "7 4 5 3 8 6 7 2 2 6 1 7 7 5 5 5 1", "10 9 10 1 4 3 7 7 8 3 10 2 2 7 5 3 2", "10 8 6 10 8 9 6 5 2 8 2 2 1 9 1 1", "10 8 3 8 6 3 5 10 1 8 3 3 1 4 1 1 3", "10 1 10 5 5 4 9 4 8 3 10 2 10 8 1 6 8", "3 9 2 3 8 6 1 5 4 6 9 4 10 6 6 4 1"};
    vector<int> probabilities = {93, 72, 90, 49, 85, 82, 36, 27};
    int changeTime = 10;
    int delay = 20;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 89.10767782185438;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int start = 31;
    int destination = 8;
    vector<string> lines = {"35 38 1 3 4 7 9 10 12 14 16 18 19 20 21 24 25 26", "7 10 11 13 15 16 19 22 23 25 26 27 30 33 35 38 1", "35 38 1 3 5 6 9 11 13 16 17 19 22 25 26 29 30 32", "24 26 28 29 32 34 37 39 1 4 6 8 11 13 16 17 18 19", "13 15 17 20 22 25 26 29 30 32 35 37 0 2 3 6 7 8", "20 22 24 26 29 31 32 33 36 38 0 3 6 8 9 12 13 14", "12 15 16 18 19 21 22 24 25 26 28 30 31 32 33 35", "32 34 37 38 39 0 2 4 7 9 12 15 17 20 22 23 24 27"};
    vector<string> times = {"2 4 9 9 4 4 2 9 7 5 8 3 3 6 7 4 1", "1 6 6 8 8 10 7 1 8 10 9 8 9 3 3 2", "2 2 7 9 9 1 9 7 9 6 4 4 1 1 10 2 3", "10 10 6 5 1 9 9 6 10 5 4 7 5 3 1 2 2", "5 1 3 9 2 5 5 6 5 6 3 5 8 8 5 1 6", "4 10 4 1 7 1 9 3 5 3 6 9 2 10 3 9 7", "9 3 6 6 6 3 5 6 10 10 2 2 5 2 6", "1 7 3 6 1 10 2 1 7 4 7 9 7 10 7 3 2"};
    vector<int> probabilities = {81, 5, 54, 32, 6, 12, 80, 38};
    int changeTime = 4;
    int delay = 88;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 56.38865447903488;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int start = 16;
    int destination = 24;
    vector<string> lines = {"24 26 28 30 32 33 35 37 38 39 1 3 6 9 11 13 14 16", "10 11 13 15 18 19 21 22 24 27 28 30 31 34 36 38 1", "18 19 20 21 22 25 27 28 29 32 35 37 0 3 5 6 7 10", "12 15 16 17 19 21 24 25 26 27 29 30 32 34 35 37", "13 14 16 17 18 21 22 24 26 27 28 29 32 35 38 0 1", "34 37 39 2 4 7 8 10 13 14 17 19 20 23 24 25 27 28", "16 18 20 21 23 24 27 29 31 34 35 38 1 2 3 4 6 9", "21 23 24 26 28 30 32 33 34 37 38 1 3 5 7 8 11 13"};
    vector<string> times = {"6 8 6 6 7 8 3 1 7 7 5 1 7 3 8 10 6", "2 6 6 2 10 1 3 6 9 9 3 1 7 7 6 10", "1 9 6 9 8 4 4 5 2 2 8 3 10 8 2 1 1", "9 6 6 1 8 8 2 5 9 1 10 5 4 8 7", "8 4 3 4 9 2 1 8 9 9 1 5 6 10 3 2", "4 6 7 8 2 1 5 6 3 10 1 4 4 2 1 8 4", "10 5 10 9 4 2 8 8 4 4 2 3 2 10 1 7 10", "6 5 6 4 3 10 5 5 10 2 4 8 7 9 1 8 7"};
    vector<int> probabilities = {2, 2, 90, 34, 50, 62, 91, 54};
    int changeTime = 5;
    int delay = 41;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 35.9828278086112;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int start = 32;
    int destination = 19;
    vector<string> lines = {"20 22 25 27 29 31 33 35 38 0 1 3 5 6 7 10 13 15", "33 35 37 39 0 1 2 5 8 10 11 12 13 16 19 21 23 25", "28 31 34 36 38 1 3 4 5 6 7 9 10 12 14 16 19 22 23", "2 3 4 6 8 9 10 11 12 13 14 17 19 22 23 25 27 30", "2 5 8 11 14 15 17 18 21 24 27 29 30 32 33 34 35", "16 19 21 22 24 26 27 28 29 31 34 37 39 1 4 5 7 10", "29 30 32 33 34 36 39 1 4 5 8 10 11 13 16 17 18 20", "5 6 8 9 10 12 13 16 17 19 21 24 25 28 29 32 35 36"};
    vector<string> times = {"1 2 2 6 9 6 7 2 10 8 4 10 1 10 7 7 7", "2 10 1 2 3 6 4 10 9 2 4 7 10 4 7 8 6", "5 1 5 1 4 5 5 3 5 5 10 3 6 10 9 1 10 7", "8 2 7 3 4 2 6 8 1 7 2 1 9 4 2 5 3", "7 8 5 10 5 10 2 10 1 9 8 8 8 4 2 2", "8 5 1 7 6 2 10 1 3 8 4 5 3 1 5 7 1", "4 8 7 6 2 5 10 4 5 3 10 10 9 3 7 10 6", "2 7 9 7 6 6 7 4 9 7 5 2 7 6 3 2 1"};
    vector<int> probabilities = {22, 30, 68, 59, 81, 41, 80, 18};
    int changeTime = 2;
    int delay = 4;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 34.917999264576;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int start = 1;
    int destination = 35;
    vector<string> lines = {"36 39 0 3 6 9 12 13 16 17 18 20 22 24 26 29 32 34", "6 8 10 13 15 18 21 23 26 28 29 32 35 36 37 38 1 4", "9 11 12 13 14 16 19 20 22 23 25 26 27 30 31 34 35", "36 38 39 0 3 4 7 10 13 14 15 16 18 19 20 23 26 27", "20 21 24 25 27 29 32 33 35 36 37 0 3 6 7 8 9 11", "33 34 37 0 1 4 7 8 11 14 17 20 21 22 25 26 27 28", "1 4 5 6 8 11 12 13 14 16 17 20 22 25 26 27 28 30", "36 39 1 3 5 8 10 12 13 14 17 19 22 24 27 29 31 33"};
    vector<string> times = {"5 9 4 7 5 8 10 7 8 8 5 4 10 9 5 10 9", "3 5 2 5 9 6 2 2 1 5 7 3 7 2 5 8 10", "5 1 9 3 5 6 3 3 1 9 2 6 7 3 3 7", "5 4 3 5 1 9 1 6 6 5 9 6 3 6 3 6 4", "4 4 5 4 6 2 3 9 8 1 4 3 10 3 6 9 2", "1 1 8 2 9 2 5 3 2 6 3 5 1 6 7 2 8", "5 6 2 4 2 4 3 4 6 4 10 7 7 4 1 10 7", "5 6 10 9 3 8 4 6 1 5 6 4 2 2 10 7 7"};
    vector<int> probabilities = {16, 9, 46, 84, 68, 29, 84, 3};
    int changeTime = 6;
    int delay = 9;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 35.16666136;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int start = 20;
    int destination = 7;
    vector<string> lines = {"18 21 22 25 27 29 30 32 34 37 38 1 4 6 9 12 15 17", "35 37 0 1 2 4 5 8 10 12 13 14 16 18 19 22 24 26", "34 36 39 0 1 3 6 9 12 14 17 18 20 22 23 25 26 29", "6 9 11 12 13 16 17 20 22 25 26 27 29 30 32 33 36", "7 9 10 11 12 15 18 21 24 27 29 30 33 34 36 38 39", "13 16 17 19 20 21 24 25 28 30 31 34 36 38 0 2 5 7", "38 39 2 4 5 7 9 11 12 14 15 18 20 23 25 27 29 31", "3 6 8 9 11 14 16 18 21 22 23 25 27 29 32 33 35 38"};
    vector<string> times = {"7 3 9 5 4 2 4 5 3 7 5 2 2 8 5 2 10", "9 7 3 1 8 7 1 6 7 10 1 4 3 10 10 4 8", "4 9 9 4 1 3 5 3 5 9 10 9 5 9 1 8 6", "9 6 1 3 1 7 5 7 9 8 2 10 8 7 6 8", "1 6 5 10 5 1 7 6 7 5 1 10 3 7 4 8", "9 3 5 4 2 8 8 9 7 6 4 2 7 10 9 2 3", "3 1 7 7 1 6 10 3 6 7 8 6 1 5 2 6 8", "10 8 5 10 3 5 3 8 2 6 10 5 9 10 5 8 10"};
    vector<int> probabilities = {98, 20, 15, 12, 37, 37, 44, 40};
    int changeTime = 6;
    int delay = 84;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 59.495025150784;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int start = 19;
    int destination = 15;
    vector<string> lines = {"3 4 7 8 9 12 14 17 20 23 26 28 29 31 34 35 36 38", "11 14 17 19 20 23 25 26 29 31 32 35 37 39 2 3 6 7", "16 19 22 23 26 28 29 30 32 35 36 38 39 0 1 4 7 10", "12 14 17 19 20 22 23 26 28 31 34 36 37 39 1 4 5 8", "20 21 23 25 26 29 30 33 36 39 0 3 4 5 7 9 10 11", "36 39 2 5 6 9 10 11 13 16 19 22 25 28 29 31 33 36", "25 26 28 29 31 33 36 37 0 1 3 5 6 8 9 10 11 14 15", "15 18 19 21 24 26 29 32 33 35 36 37 39 0 2 3 4 7"};
    vector<string> times = {"10 7 4 8 10 4 6 8 4 6 2 6 6 4 5 5 8", "3 6 2 4 5 6 8 10 2 5 1 9 4 4 1 4 2", "4 9 9 4 1 9 5 2 3 6 4 2 2 1 9 2 8", "10 9 1 4 8 5 3 2 1 9 10 1 5 4 2 8 8", "8 7 4 9 10 7 5 10 5 8 3 7 7 6 6 8 10", "2 5 10 1 8 9 6 10 8 7 5 2 9 7 5 7 1", "8 3 10 1 4 4 8 2 7 5 2 7 7 6 10 2 2 5", "6 1 3 2 8 7 3 3 7 8 8 6 8 5 1 7 3"};
    vector<int> probabilities = {83, 9, 44, 100, 18, 79, 37, 16};
    int changeTime = 7;
    int delay = 1;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 21.32;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int start = 15;
    int destination = 2;
    vector<string> lines = {"17 20 21 24 27 28 29 30 31 33 34 37 0 3 6 9 11 14", "38 39 1 3 6 7 8 9 12 14 17 19 20 21 24 27 30 31", "12 13 15 18 19 20 21 23 24 26 27 30 32 35 36 39 2", "33 34 35 38 39 2 4 7 9 11 13 14 17 19 21 24 26 29", "17 18 19 20 23 26 27 29 32 33 34 37 39 0 2 4 5 6", "1 3 5 8 10 13 14 15 17 18 19 20 22 24 27 29 30 32", "6 8 10 12 15 18 21 24 26 28 31 33 36 37 38 1 4 5", "7 8 11 12 13 14 16 17 18 21 23 26 28 31 33 35 37"};
    vector<string> times = {"8 9 7 6 9 10 5 2 7 1 5 8 9 10 8 1 5", "6 9 6 3 4 2 7 6 3 3 6 9 10 5 9 10 4", "3 6 1 10 6 7 2 5 8 6 3 5 9 7 2 2", "7 9 5 7 4 4 7 6 1 7 4 8 7 9 7 10 8", "10 5 8 3 5 4 2 2 10 9 4 7 5 1 8 10 1", "3 6 5 10 6 6 7 9 6 2 4 5 7 5 6 4 8", "1 1 1 1 2 2 2 4 5 8 9 8 4 7 9 8 5", "10 5 9 5 3 1 7 2 1 9 3 7 5 8 4 4"};
    vector<int> probabilities = {71, 15, 94, 43, 96, 0, 12, 74};
    int changeTime = 10;
    int delay = 56;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 110.33830271376;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int start = 37;
    int destination = 20;
    vector<string> lines = {"14 17 19 22 23 26 27 30 31 32 35 38 39 1 4 5 6 9", "18 20 23 26 28 30 33 35 36 37 0 1 3 5 7 8 9 12 15", "21 24 25 26 29 32 33 34 35 38 39 1 2 5 6 9 12 14", "33 34 37 38 0 1 2 4 6 9 12 15 18 19 21 22 25 27", "17 18 19 22 23 24 26 29 31 33 36 38 0 3 6 7 10 11", "37 39 1 2 4 7 10 12 14 16 19 20 23 24 27 29 31 32", "5 6 9 12 14 15 16 18 21 24 27 30 32 34 37 39 1 2", "11 12 15 16 19 22 25 27 29 32 33 34 37 39 0 1 3 4"};
    vector<string> times = {"7 6 10 1 3 8 6 4 3 5 1 7 9 10 4 3 9", "3 8 3 1 8 3 8 1 10 5 9 4 5 4 3 7 10 4", "1 4 10 6 6 2 6 6 1 10 5 2 1 5 1 2 8", "1 9 3 2 7 6 5 9 9 7 8 5 5 7 6 4 6", "3 2 3 8 6 1 6 8 8 8 8 3 5 7 8 9 9", "6 9 8 8 4 8 3 9 1 5 8 8 1 5 6 8 5", "10 8 3 7 3 1 5 7 10 10 4 1 3 10 2 8 3", "4 8 3 9 9 1 6 4 3 2 1 8 8 1 10 9 8"};
    vector<int> probabilities = {13, 31, 56, 73, 42, 91, 91, 48};
    int changeTime = 2;
    int delay = 91;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 79.60738187407108;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int start = 7;
    int destination = 25;
    vector<string> lines = {"10 12 15 17 18 21 24 27 30 32 34 36 37 0 3 4 5 7", "11 13 16 17 19 22 24 27 30 32 35 37 0 1 3 5 8 11", "35 38 39 0 2 4 5 8 10 13 16 17 18 20 21 22 25 28", "15 16 18 20 22 24 26 28 31 34 37 0 1 4 7 8 11 12", "37 0 1 4 5 7 10 12 15 17 18 20 23 26 29 31 32 34", "31 32 35 36 39 0 2 3 6 8 9 12 14 15 17 19 22 25", "0 1 4 6 9 10 13 14 15 17 19 22 23 24 25 27 29 31", "30 32 34 35 38 0 2 3 4 5 6 9 10 12 13 14 15 18 19"};
    vector<string> times = {"9 3 2 10 6 4 3 4 7 2 3 6 4 6 7 9 7", "4 8 8 6 5 7 10 7 8 4 8 3 3 1 2 2 8", "1 6 9 2 7 1 4 6 3 10 1 2 5 10 1 3 4", "4 2 5 9 3 5 1 10 9 9 3 7 6 10 7 5 9", "9 1 2 9 9 10 4 3 8 6 9 8 10 3 10 10 2", "5 3 6 7 4 7 8 8 6 5 3 9 6 6 2 9 8", "1 7 9 6 3 6 6 3 7 9 5 8 6 7 9 5 1", "10 1 5 5 1 10 7 6 1 7 10 4 9 6 8 9 6 6"};
    vector<int> probabilities = {92, 20, 97, 50, 61, 22, 51, 72};
    int changeTime = 10;
    int delay = 59;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 120.5380844417632;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int start = 20;
    int destination = 0;
    vector<string> lines = {"33 36 39 2 5 7 10 12 14 17 20 23 26 28 31 33 35", "6 8 10 12 13 14 16 18 20 23 26 28 31 33 36 38 39", "34 35 37 38 39 2 3 5 7 8 11 13 14 16 17 19 21 23", "13 16 19 20 21 24 27 30 31 34 35 37 0 3 4 6 7 9", "25 26 29 32 33 35 37 0 2 3 6 7 9 10 12 14 17 18", "1 3 6 7 8 11 13 15 17 18 19 22 25 28 31 32 33 36", "11 13 14 16 17 18 20 22 25 26 28 29 30 33 36 37", "9 12 15 17 19 21 23 25 28 30 31 32 33 35 38 1 4 5"};
    vector<string> times = {"6 10 5 7 6 9 6 2 6 1 4 1 6 9 2 2", "5 8 2 5 5 1 8 4 7 9 1 8 5 2 7 7", "1 5 3 9 4 4 9 3 7 8 7 3 7 8 4 1 4", "5 8 3 10 4 2 2 8 7 4 4 7 3 5 5 3 2", "4 7 3 9 2 4 9 7 9 8 3 6 2 7 8 3 5", "10 2 7 3 1 9 10 9 10 10 1 6 6 9 9 2 1", "3 2 6 5 3 3 7 2 2 7 7 1 3 3 7", "8 2 7 9 1 5 9 7 2 8 8 10 4 3 1 1 6"};
    vector<int> probabilities = {30, 91, 80, 19, 60, 0, 89, 14};
    int changeTime = 6;
    int delay = 1;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 59.965;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int start = 23;
    int destination = 37;
    vector<string> lines = {"3 4 6 8 10 11 12 15 18 20 21 23 26 29 32 33 34 35", "20 21 23 26 27 30 32 35 36 38 1 2 3 5 6 7 10 13", "27 30 32 34 36 38 39 1 4 6 7 10 11 14 17 18 21 24", "7 8 9 10 13 16 18 19 22 25 28 29 31 32 33 35 38", "31 34 36 37 39 1 3 5 8 10 13 15 17 18 21 23 24 27", "7 8 11 12 14 16 17 18 20 22 23 25 28 30 33 36 39", "28 30 31 33 34 36 39 0 2 3 4 7 9 10 11 12 14 17", "19 21 22 25 26 29 30 32 34 37 39 1 4 6 7 8 9 12"};
    vector<string> times = {"4 5 7 6 8 5 7 6 9 10 9 3 10 1 6 2 7", "9 4 6 3 5 9 2 1 9 4 7 5 8 10 7 3 10", "10 8 8 5 10 1 1 8 8 6 1 5 2 3 9 6 7", "3 6 8 10 3 2 5 8 3 8 4 10 2 10 6 3", "9 10 6 8 3 5 1 1 5 1 4 2 3 3 10 3 4", "10 7 3 9 8 5 10 6 1 10 6 3 5 7 3 3", "1 4 1 3 9 8 6 1 3 7 7 8 5 2 9 4 8", "3 4 6 6 7 2 4 7 2 8 1 2 1 7 3 7 8"};
    vector<int> probabilities = {2, 40, 48, 6, 33, 98, 87, 88};
    int changeTime = 8;
    int delay = 15;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 64.56304927999999;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int start = 26;
    int destination = 27;
    vector<string> lines = {"10 11 13 14 17 20 21 22 25 26 28 30 33 34 36 37", "6 8 9 11 12 14 16 17 19 20 22 24 27 30 31 34 35", "26 29 32 33 36 39 1 2 3 6 8 11 14 17 20 23 24 27", "6 9 12 13 16 17 20 23 26 28 29 31 34 36 38 0 3 5", "14 16 19 21 22 24 25 27 29 32 33 34 37 39 2 4 6 8", "6 9 12 14 16 17 18 19 20 23 24 27 30 31 34 35 37", "31 34 35 37 0 1 2 4 5 6 8 11 14 15 17 20 22 23 26", "9 10 11 12 15 18 21 23 25 28 30 31 33 35 37 38 1"};
    vector<string> times = {"3 5 8 6 7 9 2 4 10 3 1 4 4 7 7", "5 8 6 2 3 1 7 5 7 9 6 9 1 10 1 7", "5 6 10 6 6 8 4 10 9 9 6 4 2 4 9 9 1", "4 4 9 6 8 8 6 7 3 4 2 9 4 1 5 4 3", "1 1 6 3 6 3 8 7 7 4 9 7 3 1 2 10 1", "6 9 3 3 1 6 3 6 10 6 3 9 4 4 3 3", "1 8 8 9 2 5 3 6 2 7 1 4 2 2 1 3 9 5", "5 4 7 6 10 8 7 1 8 8 6 1 6 3 8 1"};
    vector<int> probabilities = {26, 39, 25, 59, 7, 14, 38, 25};
    int changeTime = 7;
    int delay = 45;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 39.627557010243;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int start = 30;
    int destination = 32;
    vector<string> lines = {"25 26 29 32 34 35 38 0 1 3 4 6 8 9 11 13 15 17 18", "2 5 7 8 9 12 14 16 18 20 22 24 25 27 30 32 33 35", "29 32 34 36 39 0 1 4 7 10 12 15 18 20 22 24 27 30", "35 36 37 0 3 6 9 12 14 16 17 20 22 23 26 28 29 31", "20 22 24 25 28 29 32 34 35 38 0 1 3 6 7 8 9 10 12", "14 16 19 22 24 27 28 29 32 33 34 36 39 0 3 5 6 7", "14 17 19 22 25 27 28 31 33 34 36 38 39 2 5 8 9 11", "38 1 3 5 7 9 12 13 15 16 18 20 22 24 25 28 29 31"};
    vector<string> times = {"7 2 5 5 5 6 3 5 5 8 3 1 4 1 2 10 10 7", "4 9 10 10 7 1 2 1 3 3 10 7 5 7 8 4 4", "8 1 4 6 3 3 9 6 1 5 5 4 8 7 9 10 4", "6 1 5 6 6 3 2 6 1 8 6 8 2 4 7 10 9", "4 9 1 5 8 1 3 9 10 7 3 9 1 8 1 6 3 6", "9 3 7 6 10 4 9 4 6 3 5 1 9 6 4 2 7", "10 9 7 9 4 4 4 10 6 6 9 6 2 8 9 7 2", "1 1 5 8 9 5 7 10 9 5 8 5 2 4 9 3 6"};
    vector<int> probabilities = {39, 83, 95, 95, 22, 24, 81, 73};
    int changeTime = 2;
    int delay = 1;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 12.83;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int start = 32;
    int destination = 19;
    vector<string> lines = {"15 16 17 20 21 24 27 29 32 33 36 38 0 2 3 6 8 11", "7 8 10 13 15 18 20 23 26 27 30 32 33 34 37 39 1 4", "19 21 23 26 27 29 31 32 35 36 39 2 5 8 11 13 14", "21 23 26 29 30 32 35 37 38 1 2 4 7 10 12 13 14 15", "10 12 15 17 19 20 22 23 26 28 29 32 33 35 38 0 3", "26 28 30 33 34 37 38 0 1 4 5 7 9 12 13 14 15 18", "36 38 0 3 4 5 8 9 10 13 15 18 20 23 24 27 29 32", "36 39 0 1 2 3 6 8 11 12 13 14 17 19 20 23 25 28"};
    vector<string> times = {"4 3 7 1 10 8 5 3 10 2 3 1 3 3 6 2 7", "3 2 3 8 6 8 7 2 5 4 7 10 4 3 6 7 1", "2 3 2 8 4 6 10 7 10 9 1 3 2 6 10 5", "6 6 10 2 3 9 5 2 6 9 2 2 4 5 3 6 9", "7 1 9 10 6 10 7 1 7 7 5 9 6 8 8 10", "7 2 6 8 2 8 6 10 4 1 3 2 9 10 6 7 2", "7 2 8 8 1 3 8 2 9 4 1 10 1 2 1 2 3", "2 2 3 8 2 10 3 4 6 5 2 3 5 8 9 3 9"};
    vector<int> probabilities = {52, 66, 31, 78, 96, 19, 59, 26};
    int changeTime = 7;
    int delay = 98;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 64.56554227170469;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int start = 6;
    int destination = 12;
    vector<string> lines = {"36 37 39 0 3 5 6 9 10 12 14 17 19 20 21 22 25 28", "31 33 36 38 0 1 3 5 6 7 9 10 11 12 15 18 20 22 25", "5 8 9 12 14 15 17 18 20 23 25 27 29 31 34 35 38", "8 11 12 15 18 19 22 25 26 29 31 34 36 38 1 3 6 9", "36 37 0 1 2 4 5 6 8 11 13 16 18 20 21 24 27 29 31", "37 39 1 4 7 9 10 13 16 18 21 23 24 26 27 30 32 34", "36 39 1 4 6 8 9 10 11 12 15 17 19 20 22 25 27 28", "35 38 0 2 4 5 6 9 12 13 14 16 18 19 20 22 25 26"};
    vector<string> times = {"3 7 10 2 8 8 4 7 4 8 4 4 10 2 1 6 8", "5 5 4 10 8 4 5 2 8 9 3 9 3 10 3 9 3 10", "2 9 3 3 4 3 5 1 3 6 7 4 3 4 10 8", "8 8 7 2 5 2 5 1 7 8 8 8 6 3 9 7 9", "5 8 5 7 8 6 8 3 2 6 5 8 5 4 6 9 5 4", "1 3 4 3 8 7 5 7 10 4 10 1 1 10 5 8 7", "2 3 2 8 5 7 4 6 9 2 8 8 7 3 2 9 1", "2 3 10 1 4 6 4 8 10 2 3 2 4 9 9 7 8"};
    vector<int> probabilities = {64, 55, 94, 47, 17, 12, 51, 6};
    int changeTime = 2;
    int delay = 87;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 16.73558676746752;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int start = 9;
    int destination = 22;
    vector<string> lines = {"21 24 26 28 29 31 34 36 39 0 2 3 4 7 8 9 11 13 15", "4 6 7 9 11 12 14 15 18 19 21 23 26 28 30 33 36 37", "34 35 38 0 2 3 5 6 8 9 12 13 14 15 16 17 19 21 22", "16 17 19 22 25 26 27 30 33 34 37 39 2 3 6 8 11 13", "16 17 18 19 22 23 24 25 26 27 28 29 31 32 33 34", "14 16 19 21 24 26 27 28 29 30 33 36 37 39 0 3 4 6", "32 33 34 37 39 1 4 6 7 10 13 16 18 21 24 26 28 29", "17 18 20 22 23 24 26 28 31 34 36 39 1 2 4 7 9 11"};
    vector<string> times = {"9 8 5 8 9 4 6 4 4 1 4 2 1 3 4 5 7 10", "8 7 3 9 3 3 8 5 7 8 2 8 6 8 3 6 2", "5 9 7 1 6 6 1 6 6 7 5 5 9 7 7 1 10 10", "6 8 7 1 5 7 1 7 6 6 8 6 3 5 10 7 2", "10 3 2 7 2 9 2 2 3 3 10 1 3 2 6", "8 3 5 6 4 9 2 8 3 6 10 7 7 6 10 4 3", "4 7 2 5 7 1 4 3 1 2 4 2 1 2 1 1 7", "9 3 9 4 10 5 8 8 2 4 5 9 8 10 9 7 9"};
    vector<int> probabilities = {47, 9, 23, 42, 0, 58, 94, 82};
    int changeTime = 9;
    int delay = 58;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 74.882361931336;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int start = 20;
    int destination = 25;
    vector<string> lines = {"36 39 2 4 5 7 8 9 12 15 18 20 21 24 25 27 29 31", "29 30 33 36 38 39 2 5 7 9 11 12 13 16 18 21 23 24", "14 17 20 23 25 28 30 31 33 35 37 0 1 3 4 7 8 11", "14 17 19 20 23 25 26 28 31 32 35 37 0 1 4 5 7 8", "21 22 25 26 27 30 33 35 38 1 4 7 8 9 12 15 16 19", "31 32 35 36 38 1 2 3 5 7 9 10 11 13 14 17 18 21", "9 11 14 17 19 21 23 26 27 29 32 34 36 38 0 1 2 4", "2 5 8 9 12 15 17 19 20 21 23 24 25 28 31 34 35 37"};
    vector<string> times = {"8 10 10 7 4 8 8 5 2 4 1 7 1 1 2 3 2", "3 6 8 4 1 6 3 3 8 10 5 6 1 5 3 7 9", "5 7 7 2 4 1 8 8 7 10 4 2 6 9 3 2 9", "1 4 9 2 5 3 4 1 1 5 6 3 2 4 5 7 6", "8 6 9 1 3 1 6 3 4 7 10 10 6 10 10 3 2", "1 9 2 7 2 10 10 6 3 3 7 9 8 6 5 4 9", "10 7 9 2 3 7 9 8 4 6 8 1 3 3 7 4 7", "10 3 4 5 1 1 10 4 10 3 1 8 10 8 10 7 6"};
    vector<int> probabilities = {32, 27, 56, 93, 11, 31, 55, 51};
    int changeTime = 2;
    int delay = 98;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 24.6386601091712;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int start = 34;
    int destination = 7;
    vector<string> lines = {"21 31 27 31 12 8 2 22 27 11 39 21 4 25 6 8 2 18", "39 24 38 8 16 7 28 24 30 31 1 38 0 14 9 32 36 20", "24 21 28 19 8 12 9 6 1 28 20 0 11 30 32 18 1 28 8", "10 31 7 35 28 8 15 39 23 6 29 4 4 28 31 30 34 2", "22 2 36 24 16 6 19 4 10 24 22 19 3 13 5 34 34 23", "25 7 32 2 20 4 23 15 7 22 18 12 9 0 29 36 32 6 30", "30 37 17 1 17 5 19 11 24 3 4 8 14 27 1 20 35 22", "23 19 38 25 34 25 0 5 1 10 34 31 1 30 22 14 6 16"};
    vector<string> times = {"7 6 5 3 6 6 1 8 3 4 3 8 3 3 8 8 1", "9 9 1 10 6 5 3 10 3 4 3 10 7 4 10 4 9", "6 3 5 1 6 1 5 9 1 6 10 10 7 2 8 5 6 9", "2 2 10 4 10 4 9 2 7 4 5 10 4 3 8 4 2", "6 10 7 5 6 9 8 5 9 7 1 4 3 8 7 8 4", "1 6 4 5 9 4 1 7 1 5 1 9 5 10 10 5 9 2", "4 4 5 9 1 5 5 8 3 4 6 5 4 5 5 8 10", "2 2 5 2 1 1 4 3 3 1 1 10 9 2 5 8 2"};
    vector<int> probabilities = {96, 27, 18, 67, 11, 52, 38, 12};
    int changeTime = 6;
    int delay = 54;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 45.366615813631995;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int start = 25;
    int destination = 33;
    vector<string> lines = {"1 9 20 24 6 17 26 26 25 37 35 28 28 10 10 13 6 30", "7 1 24 4 12 31 4 4 31 0 0 26 12 19 7 39 15 27 17", "32 0 10 36 10 36 36 5 1 3 35 22 6 2 34 15 6 27 32", "18 17 9 5 21 36 24 34 31 28 17 35 22 7 29 13 6 28", "32 23 24 15 14 39 14 25 26 26 13 14 12 36 38 37", "13 27 12 8 14 14 10 14 35 33 19 14 36 8 24 11 9", "32 30 18 34 32 18 26 33 0 35 16 25 22 9 35 30 17", "38 7 23 3 11 18 30 27 5 34 4 19 0 23 15 22 37 38"};
    vector<string> times = {"1 6 1 5 3 3 2 1 4 3 9 6 10 8 9 2 8", "3 8 3 6 2 3 5 7 7 3 1 1 5 7 6 9 9 4", "2 4 2 3 6 3 10 5 6 8 1 8 5 9 4 3 8 8", "1 1 4 3 5 6 1 2 1 3 4 7 1 9 5 10 10", "10 7 10 5 9 5 1 7 7 9 8 9 1 10 1", "3 5 3 1 7 8 1 8 10 5 6 4 9 9 4 6", "1 2 3 4 3 10 7 8 7 4 5 9 3 9 10 6", "6 2 8 1 10 9 10 7 9 7 2 9 2 2 9 9 6"};
    vector<int> probabilities = {33, 65, 54, 47, 70, 7, 64, 24};
    int changeTime = 8;
    int delay = 73;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 59.1477824;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int start = 24;
    int destination = 33;
    vector<string> lines = {"22 0 6 9 0 2 28 17 34 20 22 26 13 19 0 38 31 10", "36 6 9 3 5 39 18 22 6 0 18 12 5 6 2 19 23 11 15", "18 0 26 15 8 14 27 30 37 23 24 38 29 17 19 5 13", "0 32 39 20 36 38 26 19 27 11 34 22 26 26 38 27 35", "15 27 21 25 18 23 17 30 17 28 2 29 9 13 15 33 1", "19 12 22 20 19 9 24 34 34 13 23 31 36 18 8 22 16", "1 13 26 27 22 27 6 38 38 18 18 5 2 15 17 1 19 8 6", "33 37 14 0 8 1 15 5 19 30 5 37 4 34 19 33 26 23"};
    vector<string> times = {"5 9 4 8 2 2 6 2 5 9 5 3 4 10 10 9 3", "1 3 1 10 8 5 7 8 10 8 1 10 4 9 10 2 7 5", "2 5 1 9 7 5 6 2 3 1 8 7 1 4 4 8", "1 9 8 5 9 6 1 1 9 3 6 10 4 4 7 9", "6 7 7 8 7 3 5 8 1 7 6 8 9 8 1 7", "4 6 1 1 5 2 10 8 2 10 5 9 9 4 10 8", "10 8 2 8 3 9 8 10 10 2 6 2 2 3 4 2 6 8", "7 1 6 1 9 6 4 6 9 8 9 9 5 10 6 10 7"};
    vector<int> probabilities = {64, 88, 42, 23, 43, 55, 8, 54};
    int changeTime = 2;
    int delay = 66;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 57.673729742345216;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int start = 8;
    int destination = 22;
    vector<string> lines = {"9 39 26 33 36 21 0 25 35 24 10 16 27 11 14 22 37", "33 24 21 5 12 21 16 18 36 17 6 37 7 4 21 38 9 19", "11 9 30 11 4 22 23 6 13 2 12 12 39 33 12 26 17 10", "25 1 23 21 30 33 25 14 31 28 2 15 32 9 33 16 11 9", "29 23 9 21 17 31 5 28 28 8 14 38 21 26 12 14 17", "22 17 21 4 33 37 18 17 34 15 16 14 13 25 13 1 17", "10 16 27 39 19 21 30 22 31 0 23 20 36 8 0 11 20 0", "17 14 9 35 13 1 32 12 1 24 25 3 14 36 38 27 24 34"};
    vector<string> times = {"1 9 4 4 10 4 5 1 10 9 10 2 10 6 1 2", "9 7 6 10 9 1 4 8 2 3 8 10 10 8 8 8 2", "9 2 5 4 7 7 3 2 7 7 8 7 2 2 6 8 6", "4 9 8 3 4 3 2 6 1 8 7 10 10 7 10 2 7", "4 7 6 1 8 5 8 7 4 1 1 5 7 6 8 9", "2 7 4 4 5 6 7 8 3 10 2 1 6 1 7 6", "10 8 1 8 10 10 4 9 2 1 3 2 7 6 4 5 3", "6 10 3 1 5 6 5 3 8 2 7 6 1 3 3 5 5"};
    vector<int> probabilities = {100, 9, 74, 17, 5, 58, 11, 99};
    int changeTime = 1;
    int delay = 10;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 16.272002052999998;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int start = 6;
    int destination = 28;
    vector<string> lines = {"38 5 38 35 14 3 3 8 4 18 16 27 9 12 25 27 11 24", "28 36 17 37 32 17 10 5 35 24 10 8 18 38 25 5 7 30", "10 10 20 7 38 0 36 34 27 12 31 32 24 21 38 12 26", "35 3 5 39 21 27 17 7 7 9 19 5 27 34 0 0 8 31 34 1", "18 29 16 35 31 7 8 26 37 7 17 21 17 13 20 36 39", "34 0 8 23 11 14 1 24 16 5 12 25 1 31 28 22 37 34", "30 30 34 19 16 10 12 7 31 2 35 13 25 37 14 35 37", "28 17 36 39 15 0 16 11 7 32 6 22 19 0 0 0 24 13"};
    vector<string> times = {"3 3 9 3 7 9 1 4 9 5 3 8 4 10 4 5 5", "10 10 7 5 2 3 9 7 10 4 1 9 3 10 2 3 2", "2 3 8 10 3 8 10 9 4 10 7 2 10 7 2 9", "8 1 2 3 8 6 4 10 3 9 5 3 6 9 5 3 4 10 1", "1 2 7 5 2 4 7 4 4 8 9 10 6 8 3 2", "9 9 9 4 4 10 8 5 7 8 9 5 2 2 10 4 4", "2 9 1 6 4 1 9 4 3 1 3 5 10 10 3 3", "2 5 6 2 9 5 2 1 7 10 2 10 5 5 7 2 10"};
    vector<int> probabilities = {98, 50, 5, 82, 21, 93, 97, 80};
    int changeTime = 8;
    int delay = 4;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 50.92;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int start = 3;
    int destination = 4;
    vector<string> lines = {"10 2 28 19 39 4 9 15 22 7 31 29 32 36 39 18 2 16", "10 11 17 18 10 22 1 13 24 17 35 4 2 10 36 15 12", "3 34 4 23 4 22 17 11 11 16 3 31 0 7 23 4 4 24 12", "12 5 37 2 39 5 13 4 17 36 6 32 12 22 13 1 30 6 15", "28 38 26 34 7 11 37 2 10 2 20 11 2 7 20 4 6 36 25", "9 37 23 19 27 32 30 23 35 14 11 24 23 30 16 7 12", "6 11 18 24 10 38 39 26 19 18 28 20 30 11 7 18 14", "19 28 6 14 14 15 22 1 1 4 31 7 17 11 15 8 8 4 2"};
    vector<string> times = {"4 1 10 8 2 9 6 4 5 7 3 6 7 7 7 3 3", "5 9 10 7 8 10 2 8 6 1 2 2 6 9 10 10", "3 9 6 7 6 3 9 8 6 3 1 6 1 6 10 10 5 9", "9 4 1 8 4 10 8 9 5 5 5 3 8 8 3 6 10 3", "10 3 5 10 9 9 9 4 7 9 7 7 8 5 2 9 1 9", "6 9 7 4 7 6 1 2 8 3 8 3 2 6 5 3", "3 3 5 10 3 7 3 7 2 4 6 4 8 7 2 3", "5 10 1 10 9 9 5 8 6 9 3 6 1 3 1 5 6 10"};
    vector<int> probabilities = {78, 4, 85, 82, 50, 10, 9, 51};
    int changeTime = 8;
    int delay = 92;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 146.473315127436;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int start = 38;
    int destination = 24;
    vector<string> lines = {"13 17 38 14 34 27 10 11 12 35 36 12 9 1 28 10 4", "34 36 10 22 34 39 20 17 30 32 9 24 32 16 26 24 12", "20 38 38 23 25 18 11 38 8 19 2 38 22 7 24 16 34", "35 4 16 20 33 20 6 2 21 16 6 25 15 1 35 5 8 12 0", "13 21 13 24 17 9 9 34 34 38 24 15 18 24 30 23 22", "11 18 17 8 10 36 31 21 6 8 6 39 3 3 20 23 3 31 5", "15 2 8 27 3 32 17 19 17 23 10 31 4 34 31 10 7 21", "19 10 29 37 17 30 4 6 7 36 30 37 24 33 33 23 20"};
    vector<string> times = {"1 2 9 2 10 6 10 3 6 6 7 4 6 2 9 4", "10 8 3 9 1 6 1 6 2 7 10 9 7 1 5 9", "2 1 10 7 6 6 2 8 6 7 2 7 4 10 10 4", "10 3 3 7 2 4 9 3 2 9 8 5 4 9 10 9 2 8", "4 7 6 7 5 5 3 8 2 8 2 7 1 6 5 6", "4 1 6 3 10 3 2 9 7 1 3 1 10 2 2 9 5 5", "1 3 8 5 3 9 1 9 4 9 3 1 10 2 5 4 3", "5 8 3 7 8 8 7 5 5 10 1 7 6 2 5 2"};
    vector<int> probabilities = {9, 23, 43, 31, 56, 29, 71, 80};
    int changeTime = 9;
    int delay = 51;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 40.763712432000005;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int start = 9;
    int destination = 32;
    vector<string> lines = {"23 24 8 1 6 31 31 20 25 15 6 25 30 30 27 31 11 14", "28 16 16 5 27 4 1 11 8 24 34 26 18 10 10 11 28 32", "35 19 38 28 25 4 33 10 26 7 10 17 31 14 4 37 32", "17 25 15 34 33 19 15 9 18 30 39 32 17 37 32 23 14", "12 0 0 10 10 31 16 33 38 37 31 4 8 18 15 14 20 35", "2 37 9 38 19 15 19 21 29 29 28 8 26 11 17 5 2 27", "19 24 3 27 2 37 6 12 7 17 31 26 33 37 32 30 9 19", "7 37 12 28 5 6 21 17 8 13 1 11 1 12 19 30 38 19"};
    vector<string> times = {"3 2 7 3 3 5 10 2 3 9 4 10 9 7 2 1 1", "8 8 4 4 10 4 3 4 5 5 1 4 6 7 7 6 3", "1 8 2 4 5 3 8 3 8 9 5 10 1 3 7 6", "9 2 4 10 7 10 6 4 4 2 6 2 10 4 8 3", "10 7 8 6 2 4 4 7 8 7 8 6 7 4 1 5 6", "4 1 10 6 4 8 10 8 10 1 8 5 8 6 3 5 1", "8 8 2 5 1 7 6 9 7 8 10 5 4 1 10 9 7", "5 4 4 10 10 2 9 9 4 1 9 7 2 6 5 8 7"};
    vector<int> probabilities = {1, 53, 72, 56, 20, 32, 73, 25};
    int changeTime = 8;
    int delay = 54;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 56.698912;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int start = 31;
    int destination = 30;
    vector<string> lines = {"26 30 21 38 18 17 1 37 3 22 19 32 39 32 10 22 12", "13 10 23 4 3 37 21 38 29 14 37 26 18 19 5 24 34", "33 2 36 33 35 7 19 27 12 7 15 25 31 19 28 0 13 7", "18 19 15 29 3 27 7 26 13 33 11 33 35 35 16 16 11", "37 7 6 11 19 32 18 12 29 34 6 22 2 11 36 18 4 6 7", "11 37 12 8 21 11 6 0 16 29 36 24 6 7 32 11 20 14", "22 24 9 17 26 17 18 15 21 30 20 25 32 26 6 28 14", "3 5 34 34 39 10 33 6 2 32 33 27 28 29 17 27 7 22"};
    vector<string> times = {"6 7 7 10 7 1 2 7 9 2 1 4 3 4 2 9", "9 5 8 4 8 6 2 7 1 7 4 9 10 10 10 8", "7 8 9 7 8 2 7 6 3 6 1 10 9 7 5 6 3", "1 4 9 9 10 8 8 1 9 8 1 2 10 4 7 2", "8 8 9 5 10 10 3 2 3 9 6 9 3 5 4 2 10 5", "1 6 10 10 9 4 2 8 7 1 3 10 7 1 8 5 7", "4 9 6 7 9 7 7 10 8 4 1 5 5 9 6 6", "4 3 2 7 8 8 10 1 6 8 2 1 3 3 10 10 8"};
    vector<int> probabilities = {28, 11, 78, 77, 78, 62, 71, 4};
    int changeTime = 2;
    int delay = 71;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 117.23994750611404;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int start = 35;
    int destination = 18;
    vector<string> lines = {"25 24 28 25 39 25 11 27 6 8 14 1 25 15 39 16 10", "5 29 23 25 10 3 3 29 33 35 23 17 27 15 32 4 16 17", "23 6 14 19 12 16 35 24 4 35 27 18 5 21 31 11 32", "32 5 10 11 19 0 9 23 27 23 13 5 26 19 7 17 37 35", "19 16 7 31 28 3 21 24 21 13 18 28 2 27 5 11 27 31", "37 18 36 31 32 15 5 38 11 29 11 5 4 6 38 37 6 22", "14 30 20 35 31 35 5 29 18 11 30 5 33 26 29 23 27", "24 39 15 1 27 23 3 28 27 37 33 33 31 0 24 26 6 1"};
    vector<string> times = {"4 8 1 3 9 1 7 9 7 1 2 3 3 4 6 6", "10 4 10 5 9 4 4 9 7 5 5 5 4 6 8 1 5", "7 1 10 10 1 8 4 1 7 9 4 2 2 5 10 6", "2 6 5 3 8 5 1 6 1 8 3 1 6 7 5 6 5", "4 10 7 9 5 9 7 1 4 1 10 3 8 2 4 7 6", "1 6 4 2 2 2 8 9 5 1 10 9 10 1 6 7 9", "3 2 8 9 6 10 9 1 7 3 5 7 2 5 8 10", "8 6 4 3 9 5 4 6 6 9 10 8 9 9 4 5 7"};
    vector<int> probabilities = {83, 42, 68, 98, 13, 79, 95, 41};
    int changeTime = 1;
    int delay = 50;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 39.46014084981283;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int start = 0;
    int destination = 3;
    vector<string> lines = {"0 1 2 3", "0 5 2", "0 1 4 3"};
    vector<string> times = {"20 1 20", "1 1", "100 1 1"};
    vector<int> probabilities = {0, 0, 0};
    int changeTime = 1;
    int delay = 1;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int start = 0;
    int destination = 3;
    vector<string> lines = {"0 1 2 3", "0 5 2", "1 4 3"};
    vector<string> times = {"20 1 20", "1 1", "1 1"};
    vector<int> probabilities = {10, 20, 10};
    int changeTime = 1;
    int delay = 50;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 21.71;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int start = 0;
    int destination = 39;
    vector<string> lines = {"0 1 33 38 36 35 33", "33 22 35 22 33 22", "27 29 21", "2 5 7 9 39"};
    vector<string> times = {"1 3 3 3 2 1", "1 1 3 2 1", "1 1", "10 10 20 20"};
    vector<int> probabilities = {50, 50, 50, 50};
    int changeTime = 20;
    int delay = 50;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int start = 36;
    int destination = 19;
    vector<string> lines = {"5 15 2 27 23 1 36 28 37 35 36", "11 19 2 14 26 3 21"};
    vector<string> times = {"14 97 52 74 46 49 20 61 9 66", "20 100 61 15 88 97"};
    vector<int> probabilities = {15, 5};
    int changeTime = 62;
    int delay = 67;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 612.55;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int start = 35;
    int destination = 0;
    vector<string> lines = {"6 29 0", "35 5 20 14 4 2"};
    vector<string> times = {"78 18", "11 31 92 65 10"};
    vector<int> probabilities = {98, 33};
    int changeTime = 45;
    int delay = 24;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int start = 9;
    int destination = 13;
    vector<string> lines = {"6 32 26 23 24 0 33", "3 27 31 29 16 9 36 27 22 34", "6 17 21 18 13 35 37 1"};
    vector<string> times = {"11 19 49 57 91 39", "6 25 63 48 5 49 52 28 91", "77 83 7 4 47 3 61"};
    vector<int> probabilities = {6, 34, 80};
    int changeTime = 65;
    int delay = 78;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int start = 31;
    int destination = 8;
    vector<string> lines = {"35 38 1 3 4 7 9 10 12 14 16 18 19 20 21 24 25 26", "7 10 11 13 15 16 19 22 23 25 26 27 30 33 35 38 1", "35 38 1 3 5 6 9 11 13 16 17 19 22 25 26 29 30 32", "24 26 28 29 32 34 37 39 1 4 6 8 11 13 16 17 18 19", "13 15 17 20 22 25 26 29 30 32 35 37 0 2 3 6 7 8", "20 22 24 26 29 31 32 33 36 38 0 3 6 8 9 12 13 14", "12 15 16 18 19 21 22 24 25 26 28 30 31 32 33 35", "32 34 37 38 39 0 2 4 7 9 12 15 17 20 22 23 24 27"};
    vector<string> times = {"2 4 9 9 4 4 2 9 7 5 8 3 3 6 7 4 1", "1 6 6 8 8 10 7 1 8 10 9 8 9 3 3 2", "2 2 7 9 9 1 9 7 9 6 4 4 1 1 10 2 3", "10 10 6 5 1 9 9 6 10 5 4 7 5 3 1 2 2", "5 1 3 9 2 5 5 6 5 6 3 5 8 8 5 1 6", "4 10 4 1 7 1 9 3 5 3 6 9 2 10 3 9 7", "9 3 6 6 6 3 5 6 10 10 2 2 5 2 6", "1 7 3 6 1 10 2 1 7 4 7 9 7 10 7 3 2"};
    vector<int> probabilities = {81, 5, 54, 32, 6, 12, 80, 38};
    int changeTime = 4;
    int delay = 88;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 56.38865447903488;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int start = 0;
    int destination = 7;
    vector<string> lines = {"0 1 2 3 4 5 6 7"};
    vector<string> times = {"2 2 2 2 2 2 2"};
    vector<int> probabilities = {50};
    int changeTime = 5;
    int delay = 5;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 41.5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int start = 31;
    int destination = 8;
    vector<string> lines = {"35 38 1 3 4 7 9 10 12 14 16 18 19 20 21 24 25 26", "7 10 11 13 15 16 19 22 23 25 26 27 30 33 35 38 1", "35 38 1 3 5 6 9 11 13 16 17 19 22 25 26 29 30 32", "24 26 28 29 32 34 37 39 1 4 6 8 11 13 16 17 18 19", "13 15 17 20 22 25 26 29 30 32 35 37 0 2 3 6 7 8", "20 22 24 26 29 31 32 33 36 38 0 3 6 8 9 12 13 14", "12 15 16 18 19 21 22 24 25 26 28 30 31 32 33 35", "32 34 37 38 39 0 2 4 7 9 12 15 17 20 22 23 24 28"};
    vector<string> times = {"2 4 9 9 4 4 2 9 7 5 8 3 3 6 7 4 1", "1 6 6 8 8 10 7 1 8 10 9 8 9 3 3 2", "2 2 7 9 9 1 9 7 9 6 4 4 1 1 10 2 3", "10 10 6 5 1 9 9 6 10 5 4 7 5 3 1 2 2", "5 1 3 9 2 5 5 6 5 6 3 5 8 8 5 1 6", "4 10 4 1 7 1 9 3 5 3 6 9 2 10 3 9 7", "9 3 6 6 6 3 5 6 10 10 2 2 5 2 6", "1 7 3 6 1 10 2 1 7 4 7 9 7 10 7 3 2"};
    vector<int> probabilities = {81, 5, 54, 32, 6, 12, 80, 38};
    int changeTime = 4;
    int delay = 88;
    MetroNetwork* pObj = new MetroNetwork();
    clock_t start = clock();
    double result = pObj->minimizeTime(start, destination, lines, times, probabilities, changeTime, delay);
    clock_t end = clock();
    delete pObj;
    double expected = 56.38865447903488;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390224&rd=10671&pm=7541
********************************************************************************
#include<vector>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<algorithm>
#include<numeric>
#include<sstream>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<queue>
 
using namespace std;
 
typedef long long int64;
typedef vector<int> vi;
#define FOR(i,n) for (int i=0; i<(n); i++)
 
struct MetroNetwork {
  void dekoduj(int x,int *t) {
    FOR(i,10) t[i]=0;
    int p=0;
    while (x) {
      t[p++]=x%3;
      x/=3;
    }
  }
  struct edge {
    int line,destination,length[2];
    edge(int _line,int _destination,int _length,int _length2) { line=_line; destination=_destination; length[0]=_length; length[1]=_length2; }
  };
  vector<edge> s[60],s_rev[60];
  double m[6561][50],p[10];
  double minimizeTime(int start,int destination, vector <string> lines, vector <string> times, vector <int> probabilities, int change, int delay) {
    FOR(i,lines.size()) {
      istringstream tmp1(lines[i]),tmp2(times[i]);
      vi stations,lengths;
      int x; while (tmp1>>x) stations.push_back(x); while (tmp2>>x) lengths.push_back(x);
      FOR(a,stations.size()) for (int b=a+1; b<stations.size(); b++) {
        int length=2*change; for (int c=a; c<b; c++) length+=lengths[c];
        s[stations[a]].push_back(edge(i,stations[b],length+(b-a)*delay,length));
        s[stations[b]].push_back(edge(i,stations[a],length+(b-a)*delay,length));
        s_rev[stations[b]].push_back(edge(i,stations[a],length+(b-a)*delay,length));
        s_rev[stations[a]].push_back(edge(i,stations[b],length+(b-a)*delay,length));
      }
      p[i]=.01*probabilities[i];
    }
    // uff
    int power3[10]={1};
    FOR(i,9) power3[i+1]=power3[i]*3;
    for (int state=power3[lines.size()]-1; state>=0; state--) {
      int cur[10];
      dekoduj(state,cur);
      typedef pair<double,int> p2;
      priority_queue<p2> q;
      FOR(place,50) {
        m[state][place]=1e30;
        if (place==destination) { m[state][place]=0; q.push(p2(0,place)); continue; }
        FOR(i,s[place].size()) if (!cur[s[place][i].line]) {
          int line=s[place][i].line;
          m[state][place]=m[state+power3[line]][place]*p[line]+m[state+2*power3[line]][place]*(1-p[line]);
          q.push(p2(-m[state][place],place));
          break;
        }
      }
      while (!q.empty()) {
        int place=q.top().second; q.pop();
        FOR(i,s_rev[place].size()) if (cur[s_rev[place][i].line]) {
          int place2=s_rev[place][i].destination;
          double time2=m[state][place]+s_rev[place][i].length[cur[s_rev[place][i].line]-1];
          if (time2+1e-11<m[state][place2]) {
            m[state][place2]=time2;
            q.push(p2(-time2,place2));
          }
        }
      }
//      FOR(i,10) cout<<m[state][i]<<" "; cout<<endl;
    }
    return m[0][start]<1e20?m[0][start]:-1.0;
  }
};
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/