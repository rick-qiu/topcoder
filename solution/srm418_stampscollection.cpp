/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9886
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

class StampsCollection {
public:
    int sell(int n, vector<string> demand, vector<int> price);
};

int StampsCollection::sell(int n, vector<string> demand, vector<int> price) {
    int ret;
    return ret;
}


int test0() {
    int n = 10;
    vector<string> demand = {"0 4"};
    vector<int> price = {3};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    vector<string> demand = {"1 0", "0"};
    vector<int> price = {3, 5};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 3;
    vector<string> demand = {"0 1", "0 2", "1 2"};
    vector<int> price = {10, 11, 12};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 3;
    vector<string> demand = {"0", "1 0", "1 2"};
    vector<int> price = {5, 9, 5};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 20;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 0", "4 5", "5 6", "6 4", "8", "8", "9", "9 10", "10 11", "11 12", "12"};
    vector<int> price = {3, 7, 4, 1, 3, 3, 1, 5, 6, 5, 18, 10, 1, 5};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 50;
    vector<string> demand = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49"};
    vector<int> price = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 50000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 25;
    vector<string> demand = {"0", "0", "1", "1", "2", "2", "3", "3", "4", "4", "5", "5", "6", "6", "7", "7", "8", "8", "9", "9", "10", "10", "11", "11", "12", "12", "13", "13", "14", "14", "15", "15", "16", "16", "17", "17", "18", "18", "19", "19", "20", "20", "21", "21", "22", "22", "23", "23", "24", "24"};
    vector<int> price = {100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 6;
    vector<string> demand = {"0", "0 1", "1 2", "2 3", "3 4", "4 5", "5"};
    vector<int> price = {1, 100, 1, 1, 100, 1, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 7;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 0"};
    vector<int> price = {100, 61, 10, 10, 10, 10, 50};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 7;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 0"};
    vector<int> price = {100, 61, 10, 10, 10, 10, 50};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 9;
    vector<string> demand = {"0 1", "1 2", "2 0", "3 4", "4 5", "5 3", "6 7", "7 8", "8 6"};
    vector<int> price = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 50;
    vector<string> demand = {"0", "1", "1", "2", "2 3", "3", "4", "4 5", "5 6", "6", "7", "7 8", "8 9", "9 10", "10", "11", "11 12", "12 13", "13 14", "14 15", "15", "16", "16 17", "17 18", "18 19"};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 21;
    vector<string> demand = {"0", "1", "1", "2 3", "3 4", "4 2", "5 6", "6 7", "7 8", "8 5", "9 10", "10 11", "11 12", "12 13", "13 9", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 14"};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 21;
    vector<string> demand = {"0", "0 2", "2 4", "4 6", "8 6", "8", "1 3", "1 5", "5 7", "7 9", "9 10", "10 11", "12 13", "13 14", "14 15", "15 20", "20 12"};
    vector<int> price = {3, 7, 3, 1, 3, 1, 5, 7, 3, 2, 3, 2, 7, 1, 1, 7, 10};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 50;
    vector<string> demand = {"17", "35 27", "9 23", "41 1", "4", "36", "45", "12 14", "16 0", "18 39", "38 40", "44 9", "32 22", "3 34", "46", "36", "40 0", "4 12", "18 25", "20 48", "11", "27 34", "38 16", "33", "46 33", "39", "35 24", "17 1", "29 7", "19", "7 25", "23 28", "8 47", "31 32", "20 49", "5 26", "8 24", "42 43", "28", "26 2", "15", "43 15", "44 48", "13 21", "21 42", "47", "3 30", "2", "22 10", "5"};
    vector<int> price = {1, 2, 2, 4, 5, 2, 2, 1, 2, 2, 5, 4, 3, 4, 5, 5, 3, 1, 5, 2, 1, 5, 5, 3, 1, 2, 5, 5, 4, 2, 5, 1, 3, 1, 5, 2, 2, 1, 4, 5, 4, 3, 1, 2, 2, 5, 3, 1, 2, 5};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 50;
    vector<string> demand = {"11 20", "16 30", "45 36", "31 49", "38 33", "19 33", "25", "48", "32 13", "38", "14 27", "41 44", "11 3", "43 21", "31 20", "2 41", "36 18", "0 15", "1 16", "30 9", "17 22", "21", "17 34", "48 25", "7 34", "43 22", "8", "14 44", "39 26", "10 6", "46 13", "4 27", "40 28", "47", "39 46", "35", "37 19", "37 5", "9 3", "24", "10 6", "40 4", "29 45", "8", "24 15", "12 1", "2 28", "0", "12 32", "42"};
    vector<int> price = {2, 1, 5, 5, 1, 2, 1, 3, 2, 1, 4, 5, 1, 1, 5, 4, 5, 1, 3, 2, 4, 5, 4, 3, 2, 2, 4, 5, 5, 3, 5, 3, 5, 2, 3, 2, 3, 3, 4, 2, 5, 2, 3, 1, 5, 4, 1, 4, 4, 5};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 50;
    vector<string> demand = {"8 29", "40 25", "30 49", "3 4", "46 13", "43", "40 17", "41 26", "16 44", "18 11", "29 22", "21 12", "16 45", "17 48", "3 47", "23", "24 23", "41", "1 21", "18 37", "26", "36 44", "14 10", "19 27", "25 33", "35", "12 47", "38", "30 22", "0 42", "14 15", "38 31", "1 2", "10 27", "20 15", "0 39", "48 33", "39", "35 7", "45 32", "2 42", "37 5", "28 49", "5", "20 6", "34 46", "4 24", "6 36", "43 32", "9"};
    vector<int> price = {2, 3, 2, 1, 4, 3, 5, 4, 4, 1, 1, 3, 5, 4, 5, 3, 2, 5, 4, 5, 1, 1, 1, 2, 1, 3, 1, 3, 2, 3, 3, 4, 5, 1, 4, 5, 4, 3, 3, 2, 1, 5, 1, 2, 4, 2, 1, 5, 3, 5};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 50;
    vector<string> demand = {"42 38", "2 32", "41 18", "28 32", "11 17", "14 31", "16 44", "41", "14 2", "10 13", "9 6", "17 10", "35 25", "25 11", "8", "5 4", "8 46", "3", "12 27", "26 15", "34", "38 43", "45 18", "21 30", "31 35", "40 16", "20 19", "40 36", "5", "37 22", "43 3", "21 1", "47 22", "27 42", "34", "29 47", "36 15", "20", "29 33", "30 12", "28 13", "19 33", "48 4", "45", "46 26", "9 1", "24 7", "37 39", "48 6", "0 44"};
    vector<int> price = {4, 1, 3, 5, 1, 5, 2, 4, 1, 2, 1, 2, 2, 1, 4, 4, 2, 5, 3, 4, 2, 5, 1, 4, 3, 4, 5, 1, 1, 5, 5, 5, 5, 5, 4, 3, 4, 2, 1, 1, 4, 2, 2, 2, 2, 1, 5, 5, 2, 3};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 50;
    vector<string> demand = {"33 3", "10 25", "38 47", "9 14", "25 13", "15", "18 40", "14 28", "42 40", "42", "44 19", "29 22", "49", "47 41", "0", "18 36", "13 28", "6", "12 2", "2 23", "4 46", "44 27", "41 20", "43", "27 22", "7 32", "19", "34 11", "33 34", "11 32", "37 23", "16", "37 30", "7 46", "6 16", "9 1", "24 0", "4 3", "48 12", "20", "48 8", "38 1", "24 45", "45 10", "35", "35", "17 36", "17 15", "5 39", "39 21"};
    vector<int> price = {1, 1, 1, 5, 2, 3, 4, 5, 4, 4, 5, 4, 3, 2, 5, 1, 2, 2, 3, 1, 5, 5, 2, 1, 2, 4, 5, 4, 1, 4, 5, 4, 2, 2, 5, 5, 5, 3, 4, 5, 3, 5, 5, 5, 3, 4, 2, 5, 3, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 50;
    vector<string> demand = {"29 42", "43 42", "25 24", "35 25", "8 27", "22 9", "49", "28 47", "13", "47 20", "18 38", "10 37", "4 43", "28 11", "4 15", "33 48", "7 49", "37 26", "36 41", "12", "15 13", "17", "23 9", "39 8", "48", "14 31", "10 7", "31 46", "33 0", "40", "5", "3 1", "14 19", "19 34", "34 17", "35 36", "32 41", "26 23", "20 6", "45 18", "44 32", "16 3", "2 46", "38 22", "39 5", "16 44", "24 27", "45 0", "21", "11 6"};
    vector<int> price = {4, 1, 3, 3, 4, 5, 3, 3, 4, 3, 1, 4, 3, 1, 3, 1, 3, 2, 2, 3, 3, 4, 1, 1, 2, 1, 2, 5, 4, 3, 3, 2, 3, 1, 1, 4, 2, 1, 3, 5, 3, 3, 1, 2, 5, 3, 3, 2, 4, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 50;
    vector<string> demand = {"33 8", "5 47", "32 46", "18 4", "36", "16 28", "32 22", "46 47", "40 6", "17 15", "29", "15 8", "37", "12 39", "45 5", "49 38", "3 12", "1 11", "41 17", "10 34", "42 49", "21", "19 24", "4 40", "44 41", "1", "22 25", "38 29", "14 13", "33 18", "25 20", "7 30", "28 23", "37", "45 19", "23", "2 24", "21 42", "36", "13 0", "6 34", "16 48", "39 11", "43", "0 14", "20 44", "31 2", "35 48", "35 31", "26 3"};
    vector<int> price = {1, 2, 4, 5, 3, 2, 1, 5, 2, 5, 4, 3, 2, 2, 3, 1, 1, 2, 4, 1, 4, 4, 5, 5, 5, 1, 3, 5, 2, 3, 3, 4, 1, 3, 3, 5, 4, 3, 4, 5, 4, 2, 3, 5, 5, 2, 2, 5, 5, 3};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 50;
    vector<string> demand = {"2 45", "11 17", "1 36", "9", "10 35", "17", "9 45", "34 43", "12 35", "12", "6 23", "40 21", "1 40", "4", "28 30", "49 21", "26 16", "10 24", "44 36", "4", "25 31", "43 27", "48 30", "14 47", "23 24", "32", "44 48", "11 25", "27 38", "16 32", "6 13", "20 28", "31 33", "38 34", "19 3", "39 18", "29", "46 42", "14", "49", "8", "41 47", "3 46", "41 26", "39 19", "22 2", "18", "5 20", "15 42", "8"};
    vector<int> price = {2, 1, 1, 2, 4, 4, 3, 3, 1, 3, 4, 4, 5, 2, 3, 1, 1, 1, 2, 2, 3, 1, 4, 1, 1, 5, 5, 2, 1, 5, 4, 4, 5, 4, 2, 1, 3, 5, 3, 3, 4, 3, 3, 3, 1, 1, 1, 1, 3, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 50;
    vector<string> demand = {"31 14", "47 9", "24 18", "22 20", "45 49", "28 7", "41 44", "35", "29 19", "32 36", "40 18", "32 15", "42 41", "26 13", "49 10", "3 42", "12 28", "6", "43 33", "14", "40 12", "26 46", "31 39", "45 15", "16", "5 34", "46 7", "5 3", "34 20", "23 29", "9 10", "6 13", "27 22", "25 30", "17 0", "38 47", "33 19", "17 48", "4 2", "44 27", "30 16", "4 35", "25 36", "24 8", "21 0", "39 38", "8 43", "11", "21 23", "48 37"};
    vector<int> price = {1, 4, 3, 2, 1, 4, 3, 1, 4, 4, 5, 4, 1, 1, 3, 5, 3, 3, 3, 4, 2, 1, 5, 4, 4, 5, 4, 1, 5, 1, 3, 1, 1, 2, 2, 2, 1, 2, 4, 1, 5, 3, 4, 3, 5, 1, 4, 2, 5, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 50;
    vector<string> demand = {"2 23", "34 39", "41 12", "18 30", "15 33", "22 5", "28 41", "3 23", "44", "49", "29 47", "33 22", "19 11", "12 31", "13", "46 19", "7 49", "26 2", "14 26", "14 7", "25 38", "47 42", "10", "36 46", "4 32", "25 30", "24 21", "32 24", "10 17", "9 28", "39 0", "6 16", "18 38", "6", "40 17", "0", "4 3", "5 13", "8", "1 31", "1 8", "42 9", "43", "43 40", "27", "11", "20 35", "37 29", "36 44", "16"};
    vector<int> price = {5, 4, 4, 1, 5, 4, 2, 4, 3, 1, 3, 4, 1, 4, 3, 1, 1, 1, 2, 2, 4, 3, 4, 4, 1, 5, 1, 5, 5, 4, 5, 5, 2, 5, 5, 4, 4, 3, 2, 3, 5, 2, 1, 1, 2, 3, 1, 5, 5, 4};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 50;
    vector<string> demand = {"29 5", "45 14", "46 47", "9 6", "32", "1", "29 47", "31 6", "4 5", "44 11", "37 9", "18 14", "13 28", "8 21", "27 3", "42 18", "21 16", "26 2", "33", "12 44", "20 12", "3 25", "37 45", "31 24", "13 7", "33", "39 7", "10", "23 11", "23 43", "1 38", "28 8", "46 27", "4 19", "43 15", "24 48", "40", "10 32", "25 26", "16", "0 15", "42 49", "48 38", "19", "35", "17 36", "2", "0 20", "22 30", "34 35"};
    vector<int> price = {1, 1, 4, 2, 2, 3, 2, 5, 5, 5, 5, 1, 3, 3, 3, 3, 5, 4, 5, 5, 1, 4, 1, 4, 3, 3, 1, 4, 3, 4, 5, 3, 5, 5, 1, 3, 2, 3, 4, 3, 4, 4, 4, 4, 3, 3, 1, 2, 1, 3};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 50;
    vector<string> demand = {"44 4", "24 40", "1 34", "2 18", "39 6", "4 47", "27 40", "28 15", "6 24", "8 41", "44 16", "0 9", "42 26", "16 47", "8 12", "46 42", "20 10", "26 34", "36 27", "31 33", "2 35", "1 5", "5 11", "18 15", "46 33", "31 49", "32 43", "29 30", "35 29", "37 28", "38 30", "45 14", "41 23", "23 7", "7", "32 36", "11 43", "45 38", "21 9", "3", "37 10", "17 12", "19 17", "22 21", "0 13", "49 48", "19 39", "22 20", "14 48", "25 13"};
    vector<int> price = {3, 5, 3, 4, 5, 5, 4, 4, 2, 5, 3, 4, 2, 4, 4, 2, 3, 4, 5, 1, 2, 4, 1, 4, 1, 1, 2, 4, 3, 5, 4, 1, 5, 1, 1, 4, 2, 4, 5, 3, 5, 2, 2, 3, 2, 2, 2, 4, 1, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 50;
    vector<string> demand = {"36", "49 38", "29 27", "16 5", "16 24", "35 41", "20 8", "9 32", "48 7", "45 12", "37 1", "17", "29 6", "9 35", "25", "41 15", "31 3", "25 12", "34 3", "10 17", "24 47", "15 23", "36 8", "13 1", "7 40", "28 43", "49 2", "20 30", "27 42", "28 14", "26 21", "38 46", "23 31", "39 11", "10 40", "5", "13 6", "48 26", "22 2", "30 11", "4 43", "47 14", "39 21", "37 33", "19", "4 18", "33 34", "32 42", "45 22", "46 44"};
    vector<int> price = {4, 2, 4, 1, 3, 2, 3, 4, 1, 5, 1, 1, 2, 5, 1, 1, 5, 4, 3, 5, 3, 5, 1, 2, 2, 2, 4, 4, 5, 5, 4, 5, 1, 4, 5, 3, 2, 5, 4, 3, 4, 4, 5, 5, 5, 5, 3, 1, 3, 5};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 50;
    vector<string> demand = {"10 41", "29 33", "40 32", "12 46", "47 24", "40 30", "11 20", "24 32", "10 34", "29 30", "41 23", "20 2", "6 8", "38 6", "37 9", "11 2", "43 13", "17 46", "27 8", "38 49", "4 39", "39 14", "0 4", "3 19", "17 22", "16 35", "25 13", "35 21", "25 23", "5 48", "45 26", "14 0", "26", "34 15", "47 48", "27 5", "22 45", "36 7", "33 49", "21 1", "36 37", "43 3", "44", "31 12", "28 15", "31 16", "1", "19 42", "18 7", "28 18"};
    vector<int> price = {3, 5, 3, 1, 5, 2, 1, 3, 2, 1, 5, 4, 4, 2, 2, 5, 1, 4, 3, 1, 1, 2, 2, 2, 5, 1, 4, 2, 4, 4, 2, 3, 5, 4, 4, 4, 2, 1, 3, 4, 1, 5, 4, 4, 3, 5, 5, 3, 1, 3};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 50;
    vector<string> demand = {"10 0", "28 29", "23 36", "15 24", "45 12", "22 37", "23", "27 37", "3 43", "44 42", "38", "4 21", "32 2", "8 38", "25 20", "2 42", "15 17", "41 44", "10 40", "32 28", "3 9", "26 35", "9 34", "31 4", "25 43", "18 24", "22 36", "20 19", "6 0", "35 30", "48 33", "26 30", "47 6", "12 49", "5 49", "27 7", "13 17", "1 34", "48 14", "33 14", "29 46", "47 31", "39", "41 18", "40 8", "1 5", "19 16", "13 21", "11", "39 7"};
    vector<int> price = {1, 2, 3, 3, 1, 3, 1, 1, 5, 2, 4, 1, 1, 2, 1, 2, 2, 1, 1, 4, 5, 3, 1, 1, 4, 4, 1, 1, 5, 3, 5, 3, 4, 4, 5, 2, 2, 2, 4, 3, 3, 2, 4, 5, 5, 1, 3, 2, 3, 3};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 50;
    vector<string> demand = {"41 35", "16 35", "5 0", "29 20", "31 46", "14 24", "17 6", "25 45", "5 1", "17 7", "2", "0 36", "2 44", "36 23", "6 43", "22 19", "39 25", "14 22", "8 39", "37 44", "9 33", "45 8", "41 16", "30 38", "27 24", "46 15", "23 47", "7", "40 3", "28 4", "11 34", "31 18", "13 43", "21 18", "4 28", "20", "29 15", "40 42", "37 47", "12 34", "42 30", "49 33", "11 3", "13 32", "49 27", "48 12", "1 32", "9 21", "19 38", "10 26"};
    vector<int> price = {2, 2, 2, 5, 2, 3, 3, 3, 5, 2, 1, 3, 4, 5, 2, 3, 5, 3, 4, 5, 3, 2, 1, 1, 2, 1, 1, 5, 5, 3, 3, 3, 2, 4, 4, 5, 3, 3, 2, 2, 5, 4, 2, 3, 3, 5, 2, 4, 4, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 50;
    vector<string> demand = {"30 5", "29 30", "16 17", "16 34", "34 27", "28 9", "26 48", "19 35", "2 46", "36 26", "5 0", "23 19", "42 6", "1 3", "0 29", "32 48", "2 36", "27 1", "20", "22 13", "44 4", "47 9", "37 32", "42 20", "46 24", "15 47", "15 45", "22 28", "14", "37", "12 43", "10 39", "4 25", "49 11", "6 31", "40 7", "49 12", "13 23", "21 8", "44 7", "31 39", "33 43", "40 18", "24 21", "45 38", "38 11", "18 33", "17 41", "25 35", "3 8"};
    vector<int> price = {2, 5, 3, 5, 3, 2, 2, 2, 3, 4, 3, 4, 2, 5, 5, 5, 3, 1, 3, 4, 1, 5, 2, 3, 5, 2, 4, 1, 3, 3, 5, 4, 5, 2, 5, 2, 5, 2, 1, 2, 5, 3, 3, 1, 3, 4, 2, 5, 1, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 50;
    vector<string> demand = {"46 8", "28 37", "1 0", "42 34", "14 8", "7 16", "4 42", "32 43", "9 46", "16 26", "12 35", "43 22", "48 47", "41 31", "7 41", "15 10", "21 2", "3 47", "14 30", "26", "45 40", "29 36", "27 35", "20 17", "30 10", "45", "20 39", "22 19", "38", "15 44", "37 5", "44 34", "25 13", "31 36", "33 11", "9 32", "4 27", "39", "33 1", "17 18", "0 28", "13 12", "5 21", "19 18", "48 3", "6 25", "40 11", "49 29", "49 23", "24 2"};
    vector<int> price = {4, 2, 2, 4, 1, 2, 4, 3, 3, 5, 5, 2, 5, 2, 5, 5, 2, 3, 5, 2, 5, 1, 3, 3, 2, 4, 3, 5, 1, 2, 2, 1, 5, 5, 4, 3, 1, 2, 5, 5, 3, 1, 2, 4, 2, 1, 3, 1, 5, 4};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 50;
    vector<string> demand = {"32 1", "47 9", "47", "20 49", "42 31", "44", "8 33", "5 29", "27 23", "49 29", "30 36", "13 40", "10 9", "23 41", "24 16", "5 10", "15", "45 18", "27", "13 1", "34 36", "18 20", "8 21", "30 12", "45 19", "42 39", "7 16", "25 11", "0 46", "28 31", "37", "19 44", "17 0", "21 28", "6 17", "12 38", "32 46", "15 24", "6 4", "7", "35 33", "35 39", "3 4", "43 3", "25 43", "2", "38 11", "14 41", "48 14", "37 26"};
    vector<int> price = {5, 5, 3, 5, 4, 3, 1, 2, 2, 1, 1, 2, 1, 2, 5, 1, 3, 1, 4, 1, 1, 3, 2, 5, 4, 5, 2, 4, 4, 3, 2, 4, 5, 1, 3, 3, 3, 5, 1, 1, 1, 1, 4, 1, 5, 3, 3, 2, 4, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 50;
    vector<string> demand = {"29 33", "20 21", "39 47", "43 10", "30 21", "44 4", "5", "49 3", "0 18", "23 12", "5 43", "29", "35 12", "6 0", "24 31", "25 27", "32 15", "45 20", "47 39", "28 30", "44 15", "10 22", "17 28", "45 3", "36 37", "31 2", "13 26", "4 32", "17 13", "35", "26 33", "41", "16 48", "36 25", "11 27", "1 7", "16 48", "9 22", "49 34", "40 7", "46 23", "14 11", "42 41", "24 9", "6 42", "2 46", "37 34", "38", "19 40", "19 18"};
    vector<int> price = {1, 3, 1, 4, 5, 1, 2, 3, 3, 2, 2, 5, 4, 4, 2, 3, 2, 5, 4, 4, 4, 3, 3, 5, 5, 2, 3, 5, 5, 4, 3, 3, 3, 5, 1, 2, 5, 2, 4, 2, 5, 3, 2, 3, 1, 5, 5, 4, 5, 5};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 50;
    vector<string> demand = {"13 42", "23 20", "22 21", "22 17", "15 47", "32 35", "6 46", "7", "16 2", "37 20", "17", "29 44", "21 15", "43 23", "16 35", "39 1", "7 9", "18 31", "33 19", "42 9", "5 30", "39 45", "5 12", "41 3", "24", "12 41", "29 48", "32 24", "28 46", "33 26", "34 3", "27 6", "2 27", "18 10", "45 10", "0 40", "44 31", "30 19", "34 13", "4", "14 36", "14 8", "37 11", "43 11", "0 25", "28 1", "8 48", "40 25", "38 26", "38 49"};
    vector<int> price = {5, 4, 1, 2, 3, 2, 5, 4, 1, 5, 3, 1, 3, 5, 2, 3, 2, 5, 3, 2, 2, 3, 1, 2, 3, 2, 3, 3, 2, 3, 4, 1, 1, 4, 4, 3, 2, 5, 1, 2, 4, 1, 4, 1, 2, 5, 1, 4, 2, 3};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 50;
    vector<string> demand = {"21 48", "45 6", "5 7", "22 43", "40 46", "31 18", "40 25", "36 7", "22 18", "35 41", "34 5", "35 39", "41 34", "0 37", "44 20", "42 10", "33 37", "19 44", "27 29", "49 15", "45 0", "2 33", "38 4", "28 14", "48 8", "43 31", "11 27", "4 2", "1 20", "13", "9 28", "26 9", "25 38", "15 12", "30 16", "42 12", "30 24", "29 49", "6 39", "17 3", "23 32", "1 47", "23", "46 3", "47 10", "24 21", "36 14", "26", "17 19", "8 16"};
    vector<int> price = {2, 5, 1, 4, 3, 4, 3, 3, 4, 4, 3, 5, 1, 3, 4, 1, 3, 5, 2, 4, 2, 4, 3, 2, 3, 5, 1, 3, 2, 5, 4, 5, 1, 1, 5, 5, 1, 5, 2, 4, 3, 1, 5, 5, 4, 1, 1, 3, 5, 4};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 50;
    vector<string> demand = {"16 4", "31 17", "37 7", "43 28", "43 10", "10 1", "11 26", "20 15", "37 22", "13 2", "12 38", "18 23", "38 44", "45 4", "25 44", "36 35", "39 40", "15 41", "30", "3 49", "7 30", "47 20", "8 16", "5 21", "17 32", "25 8", "0 13", "35 22", "19 41", "1 18", "31 26", "0 5", "34 29", "9 14", "3 29", "6 47", "49 9", "40 12", "27 28", "11 6", "34 36", "19 46", "33 2", "46 33", "23 14", "45 39", "21 27", "48 32", "42 24", "48"};
    vector<int> price = {5, 5, 1, 4, 3, 3, 2, 4, 1, 4, 3, 3, 2, 4, 5, 4, 1, 4, 3, 5, 3, 5, 4, 1, 2, 5, 3, 4, 4, 2, 2, 5, 1, 4, 3, 5, 1, 1, 3, 3, 4, 5, 3, 1, 5, 2, 1, 1, 5, 3};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 50;
    vector<string> demand = {"15 33", "31 19", "45 5", "32 26", "18 40", "22 44", "26 0", "36 5", "10 12", "30 8", "14 11", "47 33", "42 38", "24 17", "45 9", "17 6", "46 6", "34 13", "44 36", "4 11", "15 24", "0 27", "39 30", "8 19", "12 2", "2 35", "32 23", "10 14", "23 31", "46 41", "22 47", "28 38", "39 9", "21 35", "20 43", "18 37", "48 25", "48 37", "43 42", "1 3", "49 3", "1 4", "40 34", "49 25", "28 16", "20 41", "29", "27 7", "16 13", "7 21"};
    vector<int> price = {3, 4, 2, 5, 1, 5, 1, 5, 3, 3, 2, 2, 2, 1, 2, 2, 3, 2, 1, 3, 5, 3, 2, 2, 2, 4, 2, 1, 2, 3, 4, 4, 2, 5, 1, 4, 4, 1, 4, 1, 3, 2, 2, 1, 2, 5, 4, 4, 3, 4};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 50;
    vector<string> demand = {"22 45", "21 16", "31 6", "16 0", "35 4", "37 6", "7 49", "48 27", "32 36", "3", "1 15", "25 10", "49 28", "30 35", "47 32", "33 21", "40 30", "1 28", "20 10", "12 15", "47 43", "37 42", "48 22", "17 11", "44 29", "36 39", "31 9", "9 23", "38 41", "23 13", "29 40", "27 7", "19 8", "45 25", "34 17", "39 8", "13 46", "34 20", "12 0", "42 2", "26 19", "46 11", "26 38", "4 14", "33 24", "14 24", "5 2", "41 43", "5 18", "18 44"};
    vector<int> price = {1, 5, 2, 3, 3, 5, 5, 3, 2, 2, 1, 4, 2, 1, 2, 4, 3, 4, 2, 3, 3, 5, 2, 5, 2, 5, 2, 1, 1, 4, 5, 1, 5, 4, 4, 5, 3, 5, 2, 1, 3, 2, 1, 5, 4, 3, 5, 2, 3, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 50;
    vector<string> demand = {"27 48", "0 48", "17 9", "25 23", "20 0", "35 12", "38 3", "9 26", "43 1", "41 38", "40 15", "27 41", "3 13", "28 15", "4 32", "6 44", "11 37", "32 30", "28 22", "26 12", "44 16", "35 42", "4 19", "34 25", "17 31", "23 11", "10 24", "42 33", "16 29", "37 40", "31 36", "18 13", "6 29", "39 18", "34 49", "22 49", "5 33", "36 21", "14 19", "1 30", "8 24", "43 47", "45 20", "14 2", "21 7", "10 47", "7 2", "8 5", "46", "39 45"};
    vector<int> price = {1, 4, 3, 5, 2, 1, 4, 3, 1, 5, 3, 4, 3, 4, 4, 2, 5, 2, 2, 5, 4, 1, 2, 3, 4, 5, 3, 4, 2, 3, 5, 3, 3, 2, 2, 1, 5, 2, 3, 5, 3, 2, 4, 5, 1, 4, 3, 5, 5, 5};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 50;
    vector<string> demand = {"36 11", "39 4", "9 22", "17 4", "9 36", "38 5", "14 25", "6 40", "12 22", "27 44", "12 41", "23 26", "30 40", "5 10", "14 48", "3 19", "29 44", "21 43", "17 37", "29 30", "19 34", "7 49", "1 8", "49 15", "3 37", "34 31", "20 0", "39 43", "20 28", "7 47", "35 48", "16 0", "1 35", "24 16", "18", "11 27", "38 46", "2 8", "26 46", "24 33", "45 23", "28 33", "21 13", "47 6", "13 45", "2 32", "42 31", "32 10", "25 15", "42 41"};
    vector<int> price = {5, 2, 2, 3, 5, 5, 4, 2, 5, 1, 2, 1, 3, 4, 2, 3, 3, 4, 4, 5, 3, 3, 5, 1, 1, 4, 5, 4, 3, 4, 5, 5, 2, 4, 4, 3, 3, 4, 1, 3, 2, 5, 5, 4, 3, 1, 4, 2, 2, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 50;
    vector<string> demand = {"31 14", "37 31", "47 26", "24 35", "7", "2 13", "15 4", "20 33", "26 48", "23 39", "9 22", "41 9", "6 8", "27 34", "14 41", "19 5", "34 11", "5 44", "38 10", "39 17", "30 28", "2 11", "6 21", "33 0", "24 19", "47 17", "10 1", "25 40", "21 20", "29 28", "37 44", "8 16", "23 42", "22 42", "36 13", "12 3", "35 25", "16 49", "46 36", "18 29", "4 45", "48 46", "38 30", "0 32", "18 15", "12 49", "40 43", "43 27", "1 3", "45 32"};
    vector<int> price = {1, 1, 4, 4, 3, 5, 2, 3, 2, 5, 4, 5, 4, 4, 4, 1, 3, 4, 5, 1, 3, 3, 4, 1, 3, 2, 1, 4, 3, 3, 1, 3, 4, 4, 4, 3, 1, 5, 5, 2, 5, 5, 4, 5, 1, 2, 5, 3, 2, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 50;
    vector<string> demand = {"30 17", "24 7", "25 21", "39 17", "13", "46 29", "21 32", "19 24", "14 1", "1 9", "29 39", "49 15", "7 42", "40 33", "44 37", "14 10", "22 3", "35 19", "9 20", "30 49", "5 0", "25 5", "0 41", "48 40", "34 26", "37 34", "12 11", "11 38", "26 23", "6 16", "32 46", "36 18", "8 31", "45 4", "20 3", "33 2", "28 8", "44 41", "16 27", "35 18", "12 36", "45 48", "42 28", "47 6", "47 23", "43 2", "10 43", "31 27", "15 38", "4 22"};
    vector<int> price = {2, 4, 1, 1, 2, 1, 1, 2, 1, 1, 5, 1, 1, 1, 5, 1, 2, 2, 1, 3, 5, 2, 2, 5, 2, 5, 4, 3, 3, 3, 1, 1, 1, 3, 2, 5, 3, 2, 1, 5, 2, 2, 1, 5, 2, 2, 5, 4, 3, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 50;
    vector<string> demand = {"44 9", "26 6", "10 15", "13 25", "5 8", "40 39", "46 36", "27 23", "10 5", "39 0", "2 28", "49 38", "28 3", "2 8", "35 0", "44 46", "21 24", "15 49", "31 33", "22 35", "27 13", "26 3", "31 9", "19", "16 17", "17 7", "12 29", "38 18", "41 18", "1 22", "47 6", "11 7", "1 34", "21 47", "40 12", "37 43", "20 16", "32 20", "29 4", "14 4", "34 41", "45 24", "30 42", "30 43", "42 48", "36 48", "25 33", "11 32", "14 37", "45 23"};
    vector<int> price = {2, 4, 4, 3, 1, 2, 5, 1, 4, 2, 2, 3, 1, 1, 1, 2, 5, 5, 3, 1, 3, 4, 2, 4, 5, 4, 2, 4, 5, 2, 4, 1, 2, 3, 3, 3, 1, 2, 5, 4, 1, 1, 1, 1, 3, 4, 2, 2, 5, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 50;
    vector<string> demand = {"10 24", "7 37", "35 18", "29 21", "18 37", "8 23", "2 11", "28 7", "19 43", "42 27", "4 2", "13 39", "49 24", "19 33", "40 9", "27 35", "0 11", "12 39", "40 31", "3 34", "47 38", "14 49", "0 28", "9 15", "46 4", "5 48", "14 44", "47 30", "43 44", "34 15", "31 23", "30 17", "36", "38 13", "5 26", "41 33", "17 48", "6 8", "6 22", "26 42", "1 20", "1 25", "41 12", "22 3", "10 16", "46 29", "25 32", "21 32", "20 45", "16 45"};
    vector<int> price = {5, 1, 4, 2, 5, 2, 4, 1, 1, 5, 2, 4, 3, 5, 5, 1, 1, 2, 1, 5, 2, 2, 4, 5, 3, 2, 1, 2, 1, 4, 4, 1, 4, 2, 2, 5, 3, 2, 5, 1, 4, 3, 4, 1, 2, 3, 3, 4, 2, 3};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 50;
    vector<string> demand = {"31 38", "16 19", "46 22", "21 45", "27 19", "15 38", "33 30", "9 25", "39 3", "0 39", "37 12", "27 7", "48 15", "21 48", "18 4", "41 26", "26 8", "35 24", "45 16", "8 43", "35 44", "10 33", "22 24", "0 1", "12 36", "14 13", "31 42", "28 36", "3 9", "47 14", "43 23", "1 25", "4 46", "18 6", "34 44", "13 5", "32", "49 29", "30 29", "40 41", "6 2", "42 47", "20 23", "11 17", "37 17", "5 49", "20 40", "28 34", "7 11", "10 2"};
    vector<int> price = {5, 5, 3, 3, 5, 2, 5, 3, 3, 5, 1, 2, 5, 4, 5, 3, 2, 1, 4, 4, 2, 1, 3, 5, 5, 2, 1, 1, 3, 5, 4, 2, 4, 3, 5, 3, 4, 1, 3, 3, 2, 5, 5, 1, 4, 1, 3, 5, 1, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 50;
    vector<string> demand = {"4 19", "35 45", "29 15", "46", "20 14", "39 12", "29 43", "48 9", "47 2", "41 10", "12 15", "16 36", "2 32", "33 47", "31 21", "45 41", "8 1", "31 10", "30 14", "21 24", "34 42", "33 4", "28 40", "19 30", "17 24", "25 28", "26 22", "39 3", "0 36", "25 35", "44 7", "27 37", "49 27", "23 18", "18 5", "40 32", "0 1", "13 20", "44 13", "16 7", "49 42", "26 3", "9 22", "34 17", "6 38", "6 8", "11 48", "43 37", "23 5", "38 11"};
    vector<int> price = {1, 3, 3, 2, 3, 4, 3, 5, 2, 1, 3, 3, 1, 2, 1, 1, 2, 4, 1, 5, 4, 5, 1, 3, 2, 2, 5, 5, 3, 5, 3, 5, 4, 5, 1, 1, 4, 5, 2, 2, 5, 4, 4, 2, 1, 4, 2, 4, 3, 3};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 50;
    vector<string> demand = {"45 18", "3 2", "4 30", "6 3", "2 5", "33 22", "15 9", "33 4", "1 24", "39 19", "27 25", "25 29", "7 12", "41 17", "24 39", "29 15", "38 44", "12 47", "38 9", "47 36", "17 11", "23 40", "23 31", "13 43", "40 28", "42 20", "19 44", "41 34", "48 45", "1 35", "28 18", "0 37", "42 8", "35 30", "22 8", "31 10", "21 26", "13 32", "37 49", "10 20", "32 36", "6 46", "21 48", "16 49", "34 27", "46 43", "7 16", "5 0", "26 11", "14"};
    vector<int> price = {5, 3, 4, 1, 5, 3, 5, 2, 3, 4, 4, 5, 2, 5, 3, 3, 3, 3, 4, 5, 2, 3, 1, 4, 2, 4, 2, 5, 2, 1, 5, 3, 5, 5, 3, 4, 4, 4, 2, 1, 3, 2, 5, 4, 1, 2, 3, 4, 1, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 50;
    vector<string> demand = {"29 28", "15 16", "1 26", "26 44", "30 18", "40 48", "18 43", "43 29", "27 5", "24 7", "41 25", "42 21", "9 17", "39 36", "32 36", "0 45", "11 13", "40 9", "46 33", "23 25", "24 19", "8 17", "4 39", "46 10", "32 14", "38 5", "28 14", "0 49", "33 16", "47 35", "6 45", "2 27", "3 6", "3 34", "4 22", "34 30", "19 44", "8 13", "23 35", "31 1", "49 31", "20 15", "37 47", "37 7", "42 22", "41 38", "21 10", "2 11", "20 48", "12"};
    vector<int> price = {2, 5, 1, 1, 5, 5, 5, 4, 2, 1, 4, 4, 4, 4, 2, 1, 2, 2, 1, 3, 5, 3, 1, 3, 3, 2, 5, 4, 3, 3, 3, 2, 2, 4, 2, 3, 5, 3, 1, 1, 4, 5, 1, 2, 5, 4, 4, 2, 3, 5};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 50;
    vector<string> demand = {"40 45", "33 25", "30 48", "15 31", "38 34", "16 47", "37", "48 8", "19 31", "42 1", "26 43", "30 39", "15 16", "45 14", "10 0", "9 2", "5 33", "23 13", "1 17", "47 9", "36 11", "4 10", "19 17", "46 14", "34 36", "8 24", "4 18", "22 44", "23 46", "27 6", "24 13", "2 29", "35 0", "26 29", "3 44", "27 32", "40 22", "5 49", "28 43", "25 12", "20 6", "21 3", "41 38", "7 35", "41 32", "11 12", "42 39", "7 21", "49 20", "18 28"};
    vector<int> price = {5, 1, 5, 5, 4, 5, 2, 2, 1, 2, 2, 3, 5, 2, 4, 2, 1, 5, 4, 2, 5, 1, 4, 1, 1, 1, 4, 3, 3, 5, 3, 4, 5, 2, 4, 5, 3, 2, 3, 3, 3, 5, 3, 5, 1, 1, 1, 3, 2, 4};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 50;
    vector<string> demand = {"27 24", "14 3", "33 5", "24 41", "15 34", "11 23", "12 27", "41 46", "33 14", "5 43", "35 7", "0 40", "47 17", "16 34", "7 45", "19 10", "37 1", "43 31", "29 22", "45 39", "38 32", "47 29", "39 31", "6", "36 40", "38 11", "0 3", "20 28", "48 23", "13 10", "1 32", "2 30", "46 42", "49 48", "26 18", "28 42", "17 35", "25 12", "36 19", "25 8", "13 16", "18 21", "15 49", "21 30", "2 4", "44 37", "20 9", "26 4", "9 44", "8 22"};
    vector<int> price = {2, 2, 2, 1, 3, 3, 5, 4, 1, 5, 5, 3, 5, 2, 3, 4, 1, 4, 1, 3, 4, 1, 1, 5, 1, 4, 1, 5, 1, 2, 4, 4, 5, 1, 2, 3, 5, 1, 3, 1, 2, 4, 5, 1, 5, 4, 1, 2, 5, 3};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 50;
    vector<string> demand = {"4 3", "48 12", "39 21", "12 21", "38 33", "41 18", "37 32", "15 34", "8 24", "28 31", "29 42", "35 28", "49 31", "20 43", "49 40", "26 29", "3 44", "14 5", "34 35", "37 17", "44 4", "1 25", "9 18", "8 48", "1 45", "30 26", "27 42", "32 33", "19 38", "14 17", "22 16", "2 40", "36 39", "41 20", "22 47", "19 2", "0 36", "27 5", "24 30", "0 43", "25 16", "11 10", "45 7", "6 46", "13 6", "10 9", "15 11", "46 13", "47 7", "23"};
    vector<int> price = {3, 1, 1, 2, 3, 2, 2, 3, 4, 1, 5, 1, 4, 5, 3, 3, 4, 5, 2, 3, 4, 2, 2, 1, 4, 1, 1, 3, 2, 3, 1, 4, 4, 3, 2, 3, 1, 5, 2, 5, 1, 3, 5, 4, 4, 4, 3, 2, 5, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 50;
    vector<string> demand = {"25 3", "28 18", "17 35", "35 11", "30 11", "33", "10", "2 17", "18 48", "9 22", "34 33", "9", "7 39", "44 7", "21 44", "43 24", "15 25", "30 29", "23 49", "27 13", "43 46", "5 37", "46 15", "40 48", "24 3", "49 34", "39 2", "0 37", "40 26", "31 12", "16 12", "1 5", "32 45", "26 28", "22 4", "27 0", "42 16", "32 29", "47 21", "8 10", "41 36", "13 42", "38 19", "8 23", "38 6", "6 31", "36 45", "20 19", "4 1", "20 14"};
    vector<int> price = {445510, 515839, 257390, 455964, 783331, 914592, 550020, 798246, 936982, 743115, 256369, 446456, 616618, 40726, 701935, 739990, 625016, 838113, 470439, 780739, 561178, 836545, 899837, 488190, 682646, 94096, 420427, 807208, 542835, 666435, 688624, 988344, 182273, 946013, 960659, 481955, 860605, 510679, 280200, 797586, 770145, 52920, 760394, 386762, 609997, 462328, 126751, 235012, 300440, 113541};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16898624;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 50;
    vector<string> demand = {"19 38", "8 33", "34", "38 20", "11 43", "24 47", "30 49", "17 20", "10 17", "11", "29 32", "48 23", "8 6", "45 26", "15 42", "45 25", "16 43", "14 5", "23 34", "29 37", "13 25", "36 3", "21 24", "15 13", "47 40", "3 36", "2 22", "31 10", "44 37", "33 32", "28 1", "49 4", "48 46", "41 18", "22 28", "9 6", "1 39", "0 5", "44 2", "16 14", "27 40", "7 27", "26 4", "12 19", "12 21", "41 42", "9 7", "30 18", "31 46", "0 39"};
    vector<int> price = {267117, 437479, 445283, 844522, 136052, 757097, 456807, 664412, 772086, 345135, 507098, 146590, 423853, 176214, 639729, 506265, 997170, 469984, 338280, 572980, 39208, 392036, 645064, 487215, 691879, 917754, 678192, 437131, 682920, 108186, 362070, 950036, 62016, 323705, 310909, 198068, 597153, 767715, 378831, 369239, 112849, 885929, 515828, 53053, 578494, 155557, 559318, 575664, 625540, 413949};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13913367;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 50;
    vector<string> demand = {"49 9", "13 12", "6 31", "42 18", "7 26", "26 40", "7", "41 37", "45 14", "45 12", "39 48", "0 8", "6 2", "21 11", "43 38", "15 47", "27 34", "14 37", "49 3", "35 4", "38 16", "46 48", "29 21", "0 47", "32 33", "10 11", "9 15", "46 19", "35 31", "3 30", "33 20", "25 28", "8 27", "20 41", "30 25", "10 18", "29 1", "23 22", "16 44", "28 22", "40 34", "19 44", "32 1", "43 42", "5", "23 17", "4 5", "17 2", "36 39", "13 36"};
    vector<int> price = {546259, 801839, 886128, 754700, 547160, 113409, 362827, 511492, 677588, 989189, 815880, 462634, 139743, 614094, 196948, 380641, 456702, 579335, 939425, 453974, 302004, 601723, 388292, 543357, 223662, 262916, 384033, 928751, 468903, 849217, 364440, 15162, 167407, 766919, 769861, 230919, 880327, 132688, 742410, 557914, 638228, 558289, 536899, 777970, 172382, 733846, 674962, 145435, 829532, 614387};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15006164;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 50;
    vector<string> demand = {"36 1", "42 18", "25 20", "43 33", "0 44", "20 33", "29 12", "17 31", "0 43", "36", "5 45", "41 48", "34 18", "11 39", "6 24", "6 26", "49 7", "24 1", "26 46", "12 27", "10 29", "19 32", "44 21", "17 22", "47 41", "23 37", "38 16", "25 10", "22 3", "11 34", "8 5", "30 47", "39", "30 46", "19 48", "35 23", "28 21", "14 45", "35 9", "16 42", "8 7", "37 4", "28 13", "9 31", "14 40", "40 27", "38 3", "2 13", "4 2", "15 49"};
    vector<int> price = {288707, 304343, 259956, 531805, 467965, 596671, 557109, 539913, 794709, 237407, 661361, 935109, 900204, 903103, 414801, 559873, 535420, 22018, 78429, 941928, 871884, 440439, 467807, 857031, 714991, 168162, 240881, 965580, 646261, 663244, 615981, 451320, 967587, 875936, 983124, 435551, 988958, 540233, 975463, 783667, 293991, 153175, 235127, 710546, 56278, 649928, 786770, 108049, 188297, 381550};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15369800;
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
    vector<string> demand = {"29", "32 30", "45 9", "7 39", "26 27", "2 34", "36 2", "26 29", "21 8", "40 4", "42 36", "32 48", "12 40", "22 28", "13 0", "42 24", "27 10", "31 21", "10 20", "14", "25 16", "11 15", "11 12", "3 18", "0 35", "9", "7 43", "6 5", "5 41", "1 23", "14 39", "38 30", "23 37", "48 31", "41 47", "33 49", "38 46", "34 19", "22 49", "16 4", "17 37", "18 17", "20 19", "28 3", "15 47", "46 45", "13 6", "43 25", "1 44", "24 8"};
    vector<int> price = {983031, 894807, 826795, 455562, 578881, 810526, 51133, 120398, 549146, 318254, 866541, 493720, 818397, 807964, 541042, 646163, 613389, 401438, 604387, 108610, 798147, 551426, 879435, 657433, 11397, 895483, 755794, 86848, 138295, 578122, 81656, 637677, 989280, 424802, 609590, 84513, 235328, 177075, 204910, 300825, 495328, 587802, 794545, 313724, 912118, 335586, 476238, 525506, 253375, 596977};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14673173;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 50;
    vector<string> demand = {"22 0", "5 34", "0 28", "23 7", "2 46", "14 20", "26 47", "27 23", "44 12", "1 40", "17 43", "17 43", "2 41", "32 47", "41", "22 38", "39 10", "15 10", "42 35", "39 49", "40", "8 33", "27 28", "31 20", "16 7", "36 11", "42 37", "14 26", "9 16", "21 30", "6 37", "30 49", "13 46", "35", "13 3", "24 45", "6 38", "4 44", "29 31", "12 5", "9 45", "32", "4 3", "48 25", "15 36", "48 19", "25 21", "1 8", "19 24", "34 18"};
    vector<int> price = {400421, 293953, 274901, 818094, 622952, 683810, 459462, 499086, 310183, 162043, 587386, 170788, 539818, 153998, 856842, 59455, 251614, 237204, 353923, 56391, 476039, 990566, 297230, 933356, 654736, 407758, 45776, 76293, 415431, 54384, 701163, 332203, 864688, 492416, 666648, 3991, 176225, 126110, 503076, 2759, 804504, 606814, 689898, 344321, 760811, 546739, 403776, 528776, 300295, 274050};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13170186;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 50;
    vector<string> demand = {"34 47", "39 4", "16 37", "49 39", "38 37", "29 48", "4 1", "19 24", "29 1", "40 22", "24 19", "16 23", "32 10", "34 2", "22 41", "3", "43 8", "2 27", "8 9", "3 15", "45 20", "36 6", "32 44", "43 27", "30 40", "23 46", "41 11", "46 30", "18 26", "26 21", "9 15", "33 14", "49 0", "33 17", "11 48", "38 28", "18 31", "13 47", "7 28", "5 25", "5 0", "44 6", "31 13", "10 35", "35 17", "42 25", "20 36", "42 12", "12 7", "45 14"};
    vector<int> price = {713185, 127010, 909677, 652939, 846577, 497387, 618174, 276888, 37354, 521403, 164195, 132942, 919123, 502596, 928891, 256221, 939793, 900855, 877966, 361844, 414718, 919710, 906036, 518339, 368389, 762587, 190145, 32314, 736840, 964310, 710380, 450025, 91319, 620056, 619315, 454248, 117442, 237488, 731135, 154795, 275242, 895329, 804088, 710716, 914277, 249330, 966936, 370421, 150184, 844902};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16343057;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 50;
    vector<string> demand = {"3 1", "41 37", "36 27", "47 3", "18 17", "15 6", "1 47", "32 12", "8 30", "46 44", "15 43", "17 31", "35 30", "33", "14 37", "33 35", "39 29", "36 12", "48 25", "48 24", "0 25", "32 22", "28 7", "45 28", "2 20", "21 8", "20 9", "31 7", "9 0", "27 23", "14 26", "38 45", "40 49", "22 42", "42 6", "10 19", "5 46", "5 2", "41 26", "40 13", "19 11", "38 39", "34 21", "23 11", "24 34", "13 49", "16 43", "29 44", "4 18", "10 16"};
    vector<int> price = {593224, 643078, 174806, 813677, 169363, 525256, 18388, 497667, 142184, 514344, 558280, 156095, 345363, 627976, 364737, 835971, 825661, 955668, 909965, 622872, 908727, 630018, 484528, 855979, 412780, 687774, 738523, 929390, 997123, 524263, 738007, 106698, 167341, 912812, 920374, 336703, 954419, 938762, 350721, 612954, 969457, 425352, 769049, 314819, 53327, 650137, 667142, 395340, 122156, 93458};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15762646;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 50;
    vector<string> demand = {"32 41", "12 14", "35 38", "47 35", "39 11", "43 24", "13 30", "15 1", "43 42", "34 49", "48 25", "40 31", "6", "14 47", "29 3", "45 29", "19 16", "2 6", "3 31", "11 46", "10 23", "0 8", "23 5", "37 42", "8 37", "9 36", "12 13", "45 24", "10 36", "41 0", "26 4", "15 46", "1 39", "7 9", "22 4", "33 16", "44 30", "38 44", "34", "48 40", "20 5", "17 25", "32 28", "2 27", "18 7", "27 21", "18 49", "19 28", "21 33", "20 22"};
    vector<int> price = {208785, 420289, 679463, 667714, 417325, 603156, 24863, 100996, 424770, 997765, 383411, 875881, 532498, 299129, 618255, 624182, 365125, 277235, 288602, 38518, 140115, 565204, 95105, 912199, 739198, 994245, 925396, 22993, 363745, 488126, 27115, 572529, 424767, 706578, 240243, 842091, 826085, 781457, 459438, 767206, 295573, 842848, 643086, 828071, 141977, 777692, 452252, 23453, 571278, 257205};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14080742;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 50;
    vector<string> demand = {"43 26", "42 20", "37 16", "15 46", "31 38", "21", "47", "35 8", "22 36", "15 38", "42 10", "36 28", "18 17", "21 32", "23 35", "13 10", "49 30", "7 19", "45 14", "33 11", "46 22", "34 45", "13", "5 44", "9 20", "8 2", "17 24", "12 48", "49 23", "30 27", "28 31", "43 5", "41 33", "29 11", "39 16", "18 37", "0 48", "47 24", "7 4", "0 41", "29 19", "4 25", "6 12", "25 39", "26 34", "27 44", "40 14", "3 32", "6 3", "1 9"};
    vector<int> price = {529844, 763447, 323338, 271322, 153505, 419743, 390065, 773726, 359007, 827107, 851062, 834510, 875208, 896088, 904900, 55759, 71493, 817845, 929095, 300170, 128758, 659369, 222344, 337267, 45729, 643376, 325502, 548207, 861439, 30268, 956369, 907634, 793715, 279706, 695307, 463571, 699448, 85372, 237296, 58454, 428830, 604709, 409316, 820389, 17148, 314215, 392499, 88640, 132059, 321594};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13907772;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 50;
    vector<string> demand = {"17 4", "33 31", "37 19", "6 4", "20 10", "42 33", "37 14", "48 2", "45 1", "17 48", "36 2", "22", "35 15", "22", "38 30", "21 20", "49 45", "27 30", "26 10", "6 39", "41 44", "47 16", "7 14", "31 38", "3 12", "23 39", "41", "21 47", "25 7", "26 3", "36 15", "35 42", "25 27", "29", "8 16", "0 12", "32 23", "24 43", "0 13", "29 5", "18 46", "44 19", "34 43", "8 40", "1 49", "34 9", "32 40", "9 13", "18 5", "24 28"};
    vector<int> price = {540124, 8933, 423165, 288197, 672360, 828306, 724919, 219930, 712524, 136466, 401838, 692941, 463067, 522098, 203199, 165785, 816203, 509866, 705714, 257852, 151329, 225570, 180551, 772610, 305669, 373027, 255185, 390374, 232611, 562175, 475952, 772734, 571107, 415468, 577283, 759818, 243773, 302201, 979748, 956296, 438667, 897937, 165589, 418085, 420034, 885139, 100221, 752589, 395005, 805935};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13905209;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 50;
    vector<string> demand = {"32 40", "43 18", "29 3", "47 10", "16 29", "38 26", "33 13", "23 48", "12 36", "16 28", "0 20", "43", "38 28", "17 27", "32 26", "20 23", "48 11", "40 12", "2 14", "46 5", "37 33", "4 10", "36 3", "15 34", "0 45", "19 44", "27 14", "34 4", "21 46", "17 13", "31 30", "5 44", "1 49", "9 42", "47 31", "1 35", "49 18", "24 45", "15 9", "19", "21 24", "30 8", "42 35", "22 7", "25 41", "11 41", "6", "37 7", "25 6", "22 2"};
    vector<int> price = {901537, 293220, 820842, 104414, 999366, 720999, 841491, 514846, 153164, 918429, 430162, 142879, 558523, 681285, 931159, 920538, 568649, 403387, 130716, 738955, 552219, 709087, 657080, 88868, 975109, 551896, 737797, 121174, 422121, 123806, 992426, 840009, 417025, 329620, 944422, 416390, 566970, 302264, 447588, 720134, 220693, 394101, 379364, 295567, 75386, 310522, 216105, 644034, 713908, 863172};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15417914;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 50;
    vector<string> demand = {"27 19", "45 16", "43 38", "48 47", "24 20", "16 34", "3 26", "5 42", "40 48", "24 20", "11", "35 3", "1 42", "1 39", "28 11", "44 45", "49 21", "4 47", "23 21", "7 37", "29 27", "33 34", "12 6", "8 19", "9 43", "14 22", "32 23", "32 49", "28 2", "0 15", "14 38", "29 10", "33 4", "15 41", "26 44", "25 6", "8 13", "22 36", "13 18", "25 30", "12", "7 10", "37 46", "30 41", "9 0", "31 39", "31 46", "18 5", "35 17", "17 2"};
    vector<int> price = {902528, 605762, 477061, 983070, 697121, 26866, 903694, 205531, 821153, 512001, 487261, 614534, 723540, 688287, 218622, 755212, 86297, 895730, 79276, 440045, 775851, 240880, 5506, 723320, 716349, 899878, 649520, 947003, 574989, 152732, 445355, 477517, 758493, 922415, 976938, 971965, 465632, 396983, 177496, 286785, 908983, 664756, 901318, 148875, 869394, 636291, 904086, 955691, 48373, 983361};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 17779482;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 50;
    vector<string> demand = {"22 43", "41 20", "10 9", "41", "27 16", "16 47", "48 33", "32 1", "6 43", "44 15", "6 37", "0 30", "42 38", "2 38", "29 4", "47 3", "20 30", "24 33", "32 1", "40 12", "21 3", "15 13", "37 19", "35 22", "11 44", "34 28", "27", "21 42", "19 0", "45 25", "36 49", "24 40", "14 45", "10 34", "14 28", "4 5", "2", "5 25", "18 9", "36 17", "35 31", "23 46", "17 23", "13 29", "39 12", "48 26", "7 26", "11 39", "18 7", "46 8"};
    vector<int> price = {634981, 942507, 70006, 783353, 245281, 457109, 495950, 711500, 625143, 422058, 932891, 99002, 259755, 823799, 316253, 519657, 613168, 47538, 707523, 677060, 866186, 960748, 844877, 301246, 881289, 112334, 690273, 100470, 433647, 621528, 694930, 68627, 80387, 764935, 368331, 325667, 222044, 864281, 553518, 363538, 286338, 486408, 978891, 62444, 310206, 295143, 582100, 439726, 859033, 805974};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16177505;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 50;
    vector<string> demand = {"19 14", "14", "48 30", "44 9", "20 46", "1", "41 37", "30 45", "20 2", "13 27", "47 15", "16 33", "28 2", "22 12", "44 10", "47 3", "28 33", "0 5", "15 18", "29 17", "19 36", "29 49", "7 31", "16 26", "23 31", "4 6", "45 22", "49 1", "9 10", "18 3", "23 5", "17 11", "12 39", "11 43", "25 38", "37 8", "48", "43 39", "41 36", "21 24", "21 13", "26 40", "34", "35 46", "25 34", "4 0", "8 32", "27 38", "42 32", "40 35"};
    vector<int> price = {560264, 163818, 804763, 319691, 810903, 699745, 734321, 767909, 549028, 877925, 188821, 729948, 286645, 978740, 437838, 847041, 376491, 329947, 715461, 768814, 867800, 799504, 63456, 939537, 161239, 533796, 354445, 582975, 385904, 349100, 862213, 462519, 512917, 183327, 298561, 840172, 399423, 549233, 608080, 464803, 427158, 313252, 194750, 713802, 808343, 632587, 77194, 184833, 478886, 309006};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15433000;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 50;
    vector<string> demand = {"36 2", "22 47", "16 3", "17 23", "35 34", "6 16", "37 25", "40 26", "33 21", "17 29", "13 40", "23 15", "41 18", "8 43", "43 27", "2 46", "41 21", "34 0", "26 0", "49 19", "31 10", "48 20", "4 25", "20 11", "45 44", "44 22", "49 18", "10 30", "42 5", "13 5", "29 30", "3 47", "4 24", "27", "35 28", "9 1", "46 31", "32 9", "19 14", "24 39", "12 15", "36 11", "33 12", "32 14", "38 1", "8", "39 37", "7 48", "6 45", "42 38"};
    vector<int> price = {218037, 443284, 514468, 842947, 418419, 248497, 209598, 496314, 545542, 507725, 444469, 958912, 313168, 539736, 157449, 414765, 677745, 3842, 416746, 653137, 846131, 69357, 868919, 219029, 508478, 249243, 636180, 600094, 32344, 147149, 125784, 250380, 590432, 640251, 609679, 525203, 405099, 335628, 21516, 466993, 843352, 982337, 942256, 156520, 522072, 99704, 571284, 199816, 103546, 504381};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 12926242;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 50;
    vector<string> demand = {"27 20", "5 14", "34", "13 32", "46", "16 20", "18 48", "35", "1 46", "22 1", "7 38", "14 28", "36 2", "17 13", "2 4", "18 26", "38 26", "25 28", "49 0", "44 8", "4 48", "21 7", "27 25", "29", "3 34", "6 5", "17 42", "35 6", "0 23", "45 16", "36 22", "42 29", "40 30", "33 39", "41 8", "31 44", "40 11", "43 30", "37 11", "43 32", "31 23", "10 49", "45 39", "47 33", "12 9", "41 47", "24", "21 19", "9 12", "3 15"};
    vector<int> price = {911553, 336589, 952790, 976843, 330156, 333284, 188413, 80785, 704607, 831785, 51871, 416875, 619463, 595713, 978637, 463501, 795053, 531998, 103063, 548238, 680508, 736831, 429100, 399807, 172715, 178881, 762112, 827706, 189913, 993152, 477874, 617817, 329740, 430663, 594659, 176248, 280298, 299424, 773384, 984904, 131208, 825254, 918130, 267022, 937318, 413118, 730523, 732371, 945116, 349937};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16281904;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 50;
    vector<string> demand = {"24 8", "30 40", "41 3", "45 19", "34 30", "33 3", "18 12", "21", "10 41", "28 11", "45 20", "19 0", "46 43", "36 38", "47 27", "10 32", "29 46", "2 29", "43 39", "4 34", "24 48", "4 44", "27 32", "2 35", "49 17", "26 25", "12 49", "11 44", "39 13", "13 7", "5 25", "18", "48 8", "35 20", "6 9", "22 26", "21 40", "5 0", "7 37", "47 1", "36 14", "38 42", "1 28", "23 33", "42 6", "37 23", "22 17", "15 9", "31 14", "31 16"};
    vector<int> price = {901797, 812347, 629489, 688092, 714229, 253553, 397958, 721393, 599045, 765114, 305333, 624204, 428718, 972990, 641579, 418784, 767810, 557193, 787212, 119720, 280352, 421732, 553956, 180084, 989557, 296318, 694265, 769797, 227853, 561506, 37114, 129649, 890205, 182954, 817740, 604433, 952859, 732049, 325825, 551903, 497162, 147509, 692459, 442231, 120498, 334037, 861015, 888307, 891230, 164578};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14747820;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 50;
    vector<string> demand = {"30 33", "15 2", "30 4", "37 4", "41 46", "25 44", "49 8", "7 38", "6 15", "24 43", "7 28", "22 32", "2 38", "40 42", "33 40", "9 35", "8 43", "18 26", "48 41", "24 36", "14 27", "48 6", "17 36", "23 10", "5 3", "25 37", "27 49", "32 16", "22", "47 1", "19 34", "46 44", "12 1", "9 28", "29 10", "45 34", "19 23", "11 47", "42 11", "0 39", "18 17", "16 26", "35 3", "13 5", "39 20", "14 45", "29 0", "13 12", "20 31", "31 21"};
    vector<int> price = {552836, 910123, 358805, 716761, 997010, 689797, 988322, 720000, 798178, 337633, 86150, 477912, 326456, 129152, 879461, 106951, 285306, 856544, 323562, 866118, 943035, 865664, 260250, 107088, 666570, 992533, 538547, 583857, 65989, 256236, 209378, 618824, 682710, 568182, 851936, 196071, 774330, 840257, 432423, 572507, 694241, 518572, 566770, 537048, 647723, 446230, 160350, 449380, 819125, 263};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16675952;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 50;
    vector<string> demand = {"10 45", "48 30", "44 18", "31 43", "43 28", "13 36", "37 28", "10 27", "35 26", "14 40", "11 16", "8 13", "38 16", "8 46", "1 9", "29 3", "17 3", "45 24", "22 0", "17 30", "35 39", "18 29", "48", "38 39", "14 21", "34 44", "7 12", "31", "5 36", "7 42", "12 37", "11 25", "21 24", "32 49", "27 34", "0 19", "41 2", "49 25", "15 19", "33 41", "20 46", "20 22", "6", "4 23", "47 33", "15 42", "2", "32 5", "1 9", "40 23"};
    vector<int> price = {978833, 118815, 279321, 135907, 943372, 908379, 172492, 83633, 95710, 402795, 785572, 425648, 63856, 106676, 515859, 994064, 796970, 787301, 800148, 490963, 464631, 484440, 568787, 526533, 759835, 874473, 374252, 651933, 887055, 848282, 171157, 865888, 967096, 966829, 1794, 910467, 875207, 690637, 510451, 970916, 93432, 296023, 912915, 673639, 919050, 428774, 667703, 232371, 216074, 467850};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16960119;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 50;
    vector<string> demand = {"5", "20 26", "44 9", "49 15", "36 43", "31 2", "20 19", "3 34", "41 7", "43 32", "45 39", "35 28", "14 23", "35 40", "23 4", "5 26", "44 29", "9 0", "16 34", "13 1", "3 6", "40 17", "30 15", "39 47", "14 7", "1 28", "18 27", "21 25", "48 12", "0 24", "21 32", "13 25", "49", "45 16", "41 10", "36 10", "24 11", "46 2", "33 22", "8 19", "17 31", "4 33", "6 30", "27 38", "48 42", "46 18", "22 37", "11 38", "29 12", "8 47"};
    vector<int> price = {548721, 459065, 976281, 799897, 309667, 70548, 80760, 166210, 534200, 155691, 104618, 385968, 840305, 587430, 200932, 819472, 40711, 56978, 259649, 736110, 169724, 270944, 685779, 783170, 18685, 673122, 266945, 735281, 299620, 311550, 359331, 364692, 770614, 335611, 680940, 596633, 922511, 278052, 279194, 456710, 433742, 383812, 359029, 274046, 971241, 76312, 609869, 528303, 133289, 869517};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13377887;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 50;
    vector<string> demand = {"13 42", "35 13", "29 34", "29 26", "44 17", "26 18", "20 11", "31 9", "23 27", "25 46", "39 10", "33", "23 46", "2 30", "33 8", "28 6", "1 44", "8 16", "19 2", "12 1", "15 36", "40 32", "0 28", "47 17", "14 49", "43 9", "4 39", "35 12", "21 40", "21 24", "16 38", "42 6", "22 27", "22 25", "7 14", "30 38", "48 3", "45 18", "31 49", "7 37", "3 0", "32 24", "5 4", "20 36", "41 19", "37 41", "15 5", "43 45", "48 10", "34 11"};
    vector<int> price = {596317, 246622, 149147, 143831, 503880, 564419, 594426, 672836, 574124, 662212, 476631, 927394, 354664, 380448, 809322, 301958, 69730, 922832, 639786, 802896, 245829, 388736, 495190, 131397, 320601, 487602, 482684, 114296, 692495, 515169, 588260, 805163, 278143, 737406, 465346, 782022, 818176, 59771, 454857, 392299, 721982, 931487, 836044, 592997, 311935, 645366, 894955, 381664, 84549, 51092};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14911181;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 50;
    vector<string> demand = {"26 49", "24 0", "7 47", "28 9", "20 4", "41 25", "47 8", "36 7", "22 13", "35 4", "46", "48 25", "8 34", "31 12", "14 32", "11 17", "38 33", "48 41", "5 15", "20 40", "24 40", "6 15", "16 0", "14 21", "49 34", "37 21", "23 30", "45 1", "18 27", "36 29", "2 31", "2 46", "16 45", "35 42", "28 37", "44 39", "17 10", "5 32", "26 27", "12", "43 29", "38 18", "39 42", "43 30", "23 10", "13 44", "22 9", "1 33", "11 3", "6 19"};
    vector<int> price = {94680, 397264, 794196, 230289, 419472, 76838, 749021, 676055, 824960, 552245, 221447, 730134, 325222, 860131, 421308, 311816, 68250, 915070, 634750, 428372, 985221, 287426, 415902, 227797, 733564, 321084, 684262, 996201, 951480, 351428, 188020, 46160, 265044, 498567, 276448, 684515, 575405, 541820, 360570, 400364, 610416, 98368, 646850, 451989, 958499, 68157, 763805, 543100, 499579, 398554};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14375503;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 50;
    vector<string> demand = {"48 24", "46 9", "8 39", "37 0", "30 49", "45 19", "16 34", "33 23", "33", "29 38", "34 38", "15 35", "11 43", "9 32", "28 13", "13 8", "3 26", "37 12", "12 22", "41 27", "1", "42 36", "5 31", "16 14", "44 29", "5 15", "21 26", "21 2", "49 35", "24 31", "10 48", "0 44", "22 4", "27 17", "47 23", "45 47", "46 36", "43 17", "28 19", "1 14", "2 39", "6 42", "41 25", "7 4", "32 10", "3 18", "11 18", "30", "7 25", "20 6"};
    vector<int> price = {654919, 295860, 552228, 586458, 408158, 707447, 397320, 774804, 157567, 18173, 325273, 892611, 53220, 552349, 339812, 947218, 322016, 844887, 263670, 692696, 972522, 72734, 190204, 412815, 935000, 157556, 795515, 425823, 840720, 387460, 947429, 495639, 683319, 16008, 82096, 91477, 723455, 995767, 382632, 397373, 530291, 224256, 289983, 99862, 776604, 146146, 47080, 98620, 507384, 827101};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15009647;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 50;
    vector<string> demand = {"4 21", "19 26", "35 46", "45 36", "15 33", "43 1", "24 41", "32 3", "35 32", "6 25", "41 46", "10 25", "7 43", "45 8", "40 2", "37 28", "10", "36 16", "39 18", "23 5", "8 26", "28 5", "7 0", "33 23", "31 12", "22 6", "3 29", "16 14", "15 30", "34 19", "44 0", "21 27", "11 17", "13", "40 27", "14 48", "1 49", "31 24", "30 11", "22 13", "37 42", "47 34", "48 2", "20 39", "38 17", "38 49", "4 44", "29 47", "18 12", "42 20"};
    vector<int> price = {247361, 628681, 675014, 230293, 715020, 36003, 974581, 183945, 967709, 225637, 322757, 256847, 813959, 450671, 920549, 594656, 968415, 976278, 503719, 111378, 939531, 664021, 604266, 570162, 742453, 91274, 540561, 66911, 518709, 329260, 723633, 766069, 957940, 398646, 996362, 672960, 434649, 487294, 856904, 918709, 712930, 696012, 175555, 43241, 146682, 612456, 154248, 115096, 105085, 657966};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16526814;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 50;
    vector<string> demand = {"15 40", "26 13", "39 21", "48 39", "38 2", "47 46", "2 27", "13 17", "44 16", "41 34", "15 21", "5 11", "18 41", "17 33", "7 35", "6 33", "8 11", "23 30", "19 47", "12 31", "28 4", "16 32", "29", "27 7", "18 1", "28 14", "23 46", "36 29", "14 49", "38 5", "22 3", "26 1", "6 36", "19 22", "12", "35 24", "48 24", "9 30", "20 37", "4 0", "37 44", "0 3", "32 20", "40 31", "49 45", "25 9", "10 8", "42 10", "25 34", "42 43"};
    vector<int> price = {534142, 925195, 680945, 365715, 747617, 297507, 333694, 375268, 225796, 724036, 659103, 86451, 265488, 444162, 431395, 538652, 971926, 538611, 47444, 624748, 437915, 270184, 435050, 345084, 8449, 188429, 475436, 67591, 500721, 662489, 449187, 34862, 587683, 130131, 916928, 851651, 943989, 250621, 226918, 686136, 491008, 886021, 772586, 756496, 846534, 720333, 295147, 818460, 258943, 342590};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14761543;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 50;
    vector<string> demand = {"9 8", "42 38", "27 8", "15 22", "0 49", "0 22", "18 29", "40 26", "23", "27 34", "20 43", "29 1", "23 39", "3", "47 31", "19 14", "21 37", "43 45", "24 40", "1 20", "25 42", "39 21", "32 46", "45 49", "25 38", "24 11", "11 2", "6 33", "48 18", "12 10", "3 33", "35 30", "32 31", "9 17", "44 12", "4 6", "47 10", "44 4", "37 41", "48 36", "16 28", "46 41", "7 19", "16 34", "26 15", "36 13", "30 17", "14 28", "35 5", "5 2"};
    vector<int> price = {818257, 827463, 563292, 544544, 355688, 550092, 588134, 497273, 643723, 655181, 357156, 898, 124766, 744516, 124373, 21239, 341521, 139735, 295739, 49803, 877470, 542825, 323229, 530741, 642841, 103045, 136249, 955606, 76690, 538026, 984711, 894947, 365488, 64354, 439490, 721175, 130797, 27623, 734800, 774520, 199155, 608307, 291769, 323921, 869174, 416141, 861511, 210694, 555876, 157249};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13007284;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 50;
    vector<string> demand = {"46 28", "36 25", "35 14", "12 49", "36 26", "32 27", "3 33", "24 7", "14 2", "41 2", "40 33", "28 8", "13 24", "27", "37 48", "39 30", "17 0", "19", "5 26", "20 34", "35 18", "40 4", "6 16", "12 31", "17 0", "3 1", "23 6", "1 34", "45 22", "7 42", "48 21", "4 37", "45 9", "49 8", "23 11", "16 11", "21 19", "10 47", "18 20", "5 31", "44 46", "15 30", "32 15", "13", "38 22", "10 44", "29 9", "47 29", "25", "42 43"};
    vector<int> price = {311253, 696866, 747004, 55882, 212132, 816165, 309528, 33982, 734196, 368527, 364346, 172483, 644406, 430756, 598484, 774182, 156064, 115614, 120815, 352289, 293573, 788780, 802471, 477767, 205549, 984476, 657862, 289641, 871994, 167533, 88537, 183246, 864398, 351892, 755480, 592882, 168056, 65007, 143215, 902251, 433534, 23913, 591086, 594291, 454668, 705921, 368472, 610731, 337886, 5639};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13277059;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 50;
    vector<string> demand = {"7 41", "24 18", "37", "11", "48 19", "39 2", "46 17", "49 29", "34 46", "4 29", "40 49", "4 23", "24 11", "34 33", "35 23", "5 21", "20 5", "6 3", "13", "22 8", "14 30", "38 41", "13 8", "48 33", "35 44", "27 16", "36 20", "3 38", "10 17", "40 6", "19 1", "42 39", "21 7", "18 14", "12 28", "47 12", "37 10", "28 30", "2 36", "32 9", "9 1", "27 26", "15 16", "0 31", "47 31", "15 43", "44 42", "25 22", "32 0", "43 25"};
    vector<int> price = {430509, 121136, 386457, 374517, 695753, 119107, 182641, 8583, 332763, 994187, 576453, 736612, 352608, 238255, 525094, 493854, 303490, 768059, 733767, 383560, 815666, 838076, 905171, 696060, 317533, 696608, 524074, 868233, 38042, 45209, 507711, 984902, 166344, 894167, 359419, 862097, 529626, 58411, 870679, 378740, 52597, 963483, 115351, 921556, 201737, 640445, 931761, 505227, 924855, 181879};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14621278;
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
    vector<string> demand = {"19 10", "30 19", "3", "10 30", "14 49", "32 26", "42 15", "40 18", "47 14", "8 18", "38 37", "42 17", "32 22", "4 36", "37", "46 3", "8 31", "0 49", "47 13", "7 31", "46 20", "40 39", "22 28", "33 15", "48 2", "41 1", "41 2", "39 16", "48 44", "34 13", "33 36", "34 11", "29 43", "7 0", "38 24", "25 17", "27 25", "45", "28 27", "29 11", "4 16", "9 12", "9 5", "23 21", "1 45", "44 35", "23 12", "43", "21 26", "24 20"};
    vector<int> price = {141069, 648707, 929610, 971096, 125198, 61396, 88978, 242674, 345656, 108938, 816512, 864868, 858026, 294826, 746892, 859279, 519682, 337718, 454414, 553481, 754807, 384173, 822043, 226622, 991222, 267121, 894307, 504871, 800395, 465622, 964493, 941463, 114328, 410455, 428910, 755877, 471850, 517888, 998550, 817505, 626825, 331414, 198725, 1203, 626239, 461968, 376833, 145921, 799685, 347598};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14999275;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 50;
    vector<string> demand = {"11 1", "43 17", "7 18", "35 26", "35 46", "34 16", "30 36", "48 8", "15 6", "47 17", "9 18", "4", "36 12", "6 49", "34 33", "19 0", "1 49", "13 9", "28 16", "25 33", "0 41", "19 4", "31 5", "40 11", "13 12", "40 3", "24 46", "10 26", "47 30", "22 45", "22 28", "8 44", "27 7", "5 38", "37 27", "24 38", "31 3", "39 44", "45 32", "14 20", "23 41", "2 21", "48 25", "21 39", "15 23", "14 32", "2 10", "20 29", "42 29", "43 42"};
    vector<int> price = {809372, 616671, 554491, 948928, 328331, 219015, 441776, 633539, 283746, 77952, 93747, 373744, 899457, 60495, 935173, 652313, 114787, 459906, 640469, 599309, 14592, 656942, 31083, 608897, 541213, 66376, 539637, 503242, 894821, 439878, 908484, 220545, 572901, 979327, 169472, 417583, 198341, 127600, 567473, 998438, 721903, 661220, 888533, 137711, 238066, 823706, 790023, 352852, 799963, 946843};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15348472;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 50;
    vector<string> demand = {"34 40", "25 43", "1 42", "30 37", "12 35", "23 43", "14 9", "21 47", "29 17", "23 31", "41 30", "32 40", "27 44", "19 8", "37 45", "12 39", "26 0", "49 47", "28", "36 1", "17 34", "31 26", "4 48", "42 35", "28 0", "19 25", "5 36", "7 2", "6 29", "11 27", "6 7", "11 13", "5 33", "39 48", "18 8", "3 20", "21 22", "46 14", "46 22", "4 15", "20 45", "15 38", "33 13", "49 38", "16 9", "44 2", "24 32", "16 41", "18 3", "10 24"};
    vector<int> price = {58716, 409020, 32818, 574938, 275380, 426732, 520688, 45525, 459574, 488020, 54548, 735481, 219121, 23735, 851988, 978182, 543512, 607960, 575477, 206098, 85432, 355867, 617053, 939583, 38400, 984591, 146981, 322867, 287330, 884581, 912293, 346045, 809953, 945110, 437335, 85332, 371841, 474374, 647209, 347766, 962393, 701756, 83247, 697865, 725490, 935234, 676046, 785353, 59545, 251522};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15558786;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 50;
    vector<string> demand = {"15 21", "7 6", "28 1", "7 29", "26 30", "12 34", "40 9", "1 37", "37 15", "13 11", "12 24", "33 13", "42 23", "43 34", "24", "4 41", "4 0", "8 39", "45 10", "39 22", "16 8", "2 0", "17 45", "43 20", "32 10", "36 16", "23 48", "11 30", "18 22", "38 14", "41 29", "14 36", "32 20", "31 6", "44 25", "38 47", "26 2", "42 18", "47 21", "46 3", "33 27", "27 25", "5 46", "5 28", "31 17", "48 19", "19", "9 49", "44 40", "49 3"};
    vector<int> price = {38836, 99472, 230412, 45369, 216032, 684716, 393215, 60676, 204687, 599336, 887498, 585512, 19905, 999611, 699361, 154648, 992072, 920590, 88732, 228867, 20078, 262614, 481604, 517820, 240406, 500106, 267471, 714863, 316094, 6209, 484566, 871281, 105680, 231329, 916649, 838064, 916044, 826216, 898739, 120730, 941903, 302588, 706241, 961808, 302198, 405602, 632807, 810622, 842543, 237890};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14336284;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 50;
    vector<string> demand = {"43 32", "49 42", "10 18", "16 36", "3 5", "11 38", "38 6", "22 33", "3 37", "22 46", "11 16", "44 26", "23 32", "17 35", "8 49", "35 10", "44 24", "29 18", "39 41", "33 47", "37 36", "43 12", "24 6", "20 30", "4 19", "46 29", "21 28", "42", "30", "23 8", "31 39", "19 5", "26 17", "12 48", "21 40", "13 0", "20 34", "28 0", "45 48", "41", "4 40", "7 47", "25 34", "9 2", "9 1", "13 1", "15 31", "15 45", "27 2", "14 27"};
    vector<int> price = {733002, 649107, 300120, 465373, 45278, 684336, 688591, 438470, 713920, 329611, 619475, 676475, 514994, 197321, 896554, 639845, 295483, 563122, 889578, 759322, 936955, 199983, 548983, 221735, 879679, 264714, 486406, 79483, 972730, 82338, 886211, 705731, 731445, 186330, 687456, 776722, 387017, 376046, 731543, 100936, 222008, 351018, 777410, 253353, 64690, 190316, 893198, 360172, 753437, 299127};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14744609;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 50;
    vector<string> demand = {"15 4", "32 12", "1", "15 7", "18 30", "14 1", "41 29", "40 17", "8 32", "9 19", "30 23", "14 35", "37 47", "46", "17 34", "2 28", "25 18", "22 29", "48 38", "21 38", "3", "11 27", "48 0", "34 23", "40 5", "37 28", "8 2", "39 11", "27 9", "22 49", "20 21", "46 5", "43 3", "25 31", "19 44", "24 7", "26 16", "4 31", "16 12", "45 47", "24 35", "41 43", "39 13", "36 20", "45 13", "6 42", "36 42", "33 0", "6", "33 26"};
    vector<int> price = {337021, 20706, 250814, 469917, 935734, 11667, 541020, 967069, 884126, 331554, 559113, 402791, 48262, 192648, 189515, 949414, 924751, 743878, 304521, 257030, 376986, 96862, 500382, 704168, 498548, 132878, 876176, 598832, 418733, 126048, 460108, 272105, 663105, 227273, 742021, 115190, 755291, 799392, 598611, 639416, 647298, 674075, 42206, 695559, 866723, 748073, 161324, 791473, 8302, 465844};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14644464;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 50;
    vector<string> demand = {"31 28", "33 12", "24 48", "42 32", "29 5", "17 6", "48 13", "10 20", "26 5", "25 27", "11 10", "41", "1 4", "37 19", "36 45", "41 43", "0 9", "13 14", "33 20", "40 36", "19", "29 15", "17 22", "21 7", "47 1", "44 39", "43 45", "7 28", "39 16", "49 21", "25 38", "47", "8 2", "44 35", "42 38", "16", "12 37", "26 6", "49 40", "34 3", "2 18", "32 8", "11 24", "35 15", "4 30", "31 34", "27 22", "23 46", "23 0", "46 18"};
    vector<int> price = {109952, 68250, 104480, 403285, 761883, 105566, 414876, 417958, 455336, 194514, 804954, 202122, 833887, 550019, 993224, 200984, 266599, 184183, 538325, 698059, 779223, 414111, 476008, 582497, 987190, 474315, 306003, 877436, 814814, 98214, 499857, 924765, 166463, 604336, 328049, 928345, 226253, 259276, 862654, 681589, 453790, 667607, 400062, 287676, 733977, 909637, 488659, 575, 93819, 543336};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13554964;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 50;
    vector<string> demand = {"40 31", "41 7", "47 23", "1 12", "28 35", "42 20", "32 4", "42 15", "7 32", "23 25", "39 28", "22 29", "29 24", "4 18", "16 6", "8", "20 47", "30 46", "44 30", "18 5", "9 35", "31 14", "13 38", "17 33", "38 8", "44 3", "41 49", "12 19", "36 2", "15 26", "33 11", "37 17", "49 37", "6 40", "39 22", "10 34", "19 34", "25 9", "14 36", "11 1", "43 0", "45 13", "24 5", "21 46", "48 0", "43 3", "16 21", "2 26", "27 48", "45 10"};
    vector<int> price = {279064, 602281, 488476, 571860, 750271, 717894, 787085, 55338, 738138, 102078, 746391, 278318, 434705, 327893, 411828, 864834, 984497, 439862, 229970, 588778, 531350, 253197, 395450, 173214, 402844, 905517, 362621, 242928, 12932, 363436, 100390, 291995, 965716, 588865, 863854, 715986, 823110, 650939, 771324, 77599, 269368, 34066, 872269, 220424, 361958, 284096, 601610, 862806, 723957, 831579};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15673355;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 50;
    vector<string> demand = {"5 34", "20", "2 49", "33 38", "29 2", "33 11", "23 12", "42 30", "16 25", "25 34", "5 41", "32 12", "4 6", "3", "41 29", "43 7", "6 13", "18 35", "48", "13 17", "48 23", "18 7", "22 24", "16 8", "9 37", "1 10", "11 47", "31", "17 21", "42", "1 44", "14 32", "28 0", "45", "3 8", "36 39", "45 22", "40", "15 9", "28 37", "27 43", "10 24", "49 15", "20 36", "0 30", "46 19", "40 19", "46 31", "39 21", "26 44"};
    vector<int> price = {492847, 961672, 150886, 895978, 355009, 79770, 719141, 790578, 783551, 435365, 801319, 885728, 904184, 277840, 450911, 509414, 892482, 664248, 26776, 853908, 257458, 407328, 839227, 674695, 376204, 290199, 277167, 236886, 620467, 559007, 278630, 113313, 37030, 429516, 525642, 908391, 25637, 244782, 215320, 325539, 196498, 16638, 727618, 100681, 810829, 178529, 126446, 703310, 359128, 153222};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14796290;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 50;
    vector<string> demand = {"34", "45 3", "45 41", "12 20", "26 37", "18 25", "1 13", "49 31", "31 11", "27 38", "0 22", "2 5", "8 4", "49 10", "19 47", "9 26", "34 24", "0 9", "29", "24 8", "48 42", "4 32", "12 19", "16", "18 41", "43 2", "37 27", "32 20", "11 44", "30 43", "39 16", "10 38", "28 30", "21 44", "28 42", "21 33", "40 7", "6 35", "3 35", "22 36", "17 1", "29 47", "15 39", "5 6", "25 33", "23 46", "7 13", "36 15", "14 23", "48 40"};
    vector<int> price = {88762, 625905, 156585, 759014, 101981, 554950, 200626, 376517, 787042, 343548, 784487, 883557, 445062, 459859, 141523, 487275, 57034, 108350, 460325, 95265, 84457, 609988, 862912, 529337, 762261, 387862, 697248, 11315, 708284, 78714, 888258, 313397, 704618, 561194, 588762, 322950, 632495, 789387, 215818, 419536, 132935, 304, 819444, 94348, 976514, 477318, 581622, 549899, 585667, 558299};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13970904;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 50;
    vector<string> demand = {"24 25", "10 37", "8 22", "21 20", "40 31", "41 20", "8 4", "13 1", "26 25", "26 40", "0 16", "13 5", "23 29", "46", "49", "38 32", "29 2", "39 4", "22 32", "34 10", "14 12", "14 41", "21", "18 46", "1 39", "36 38", "2 24", "11 0", "49 15", "12 37", "11 27", "17 16", "30 27", "23 44", "43 34", "44 7", "18 7", "30 3", "28 6", "9 28", "9 33", "42 33", "3 45", "48 43", "36 15", "48 45", "35 19", "47", "47 6", "19 35"};
    vector<int> price = {815662, 243140, 987183, 49763, 809806, 864219, 179537, 461762, 193532, 997805, 190815, 603230, 931351, 768222, 814608, 851585, 361543, 102004, 598963, 327950, 356229, 687623, 81132, 427835, 913477, 706728, 424778, 118202, 153687, 370418, 706037, 969348, 613557, 209571, 535462, 423362, 590141, 714998, 401476, 783673, 229155, 592290, 903254, 160505, 876863, 717862, 528441, 754758, 819865, 643755};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 17178137;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 50;
    vector<string> demand = {"25 44", "46 24", "36 31", "15 4", "14 1", "30 11", "45 43", "14 5", "28 21", "2 26", "34 22", "28 0", "2 45", "34 23", "40 26", "41", "11 7", "35 24", "6 4", "1 6", "40 29", "21 32", "23 29", "9 13", "39 33", "27 9", "35 38", "36 43", "15 18", "0 25", "13", "19 41", "8 37", "31 19", "44 42", "16 38", "7 37", "22 27", "42 10", "32 3", "8 49", "39 16", "47 48", "18 47", "17 49", "17 33", "5 3", "12 46", "30 20", "48 20"};
    vector<int> price = {158896, 866863, 97511, 778161, 391099, 405067, 238405, 56792, 208669, 968161, 764324, 406976, 99965, 744904, 809758, 307909, 768175, 318978, 779338, 186695, 661596, 45464, 626478, 103313, 387463, 735363, 537749, 682690, 154167, 928088, 304960, 829414, 794951, 918823, 607575, 702401, 323889, 845979, 759193, 532557, 330492, 39868, 455885, 430456, 784771, 265642, 738364, 69297, 100971, 34054};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14255420;
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
    vector<string> demand = {"3 26", "22", "49 11", "15 27", "43 32", "14 42", "47 38", "46 44", "18 21", "22 37", "32 40", "2 15", "42 6", "7 35", "2 17", "16 12", "13 0", "12 46", "30 18", "3 5", "37 47", "39 14", "33 30", "41 27", "10 44", "26 6", "35 16", "38", "23", "41 21", "0 5", "48 23", "17 20", "11 40", "48 34", "13 45", "10 28", "31 9", "36 7", "4 9", "28 1", "34 19", "4 33", "19 49", "24 43", "8 24", "20 39", "25 1", "31 25", "29 8"};
    vector<int> price = {754919, 925126, 906586, 207443, 358578, 472780, 770318, 526754, 177255, 538956, 640421, 690612, 451262, 411862, 379961, 130375, 410242, 979137, 259119, 859815, 311930, 248359, 348694, 962117, 826103, 607874, 410556, 13232, 149111, 286386, 722890, 420382, 211511, 145827, 144176, 570088, 618607, 430846, 96841, 795861, 969801, 253614, 486472, 937414, 665475, 382784, 67788, 592068, 361920, 326906};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14486754;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 50;
    vector<string> demand = {"49 24", "15 49", "22 10", "7 43", "18", "18 26", "13", "38 13", "11 39", "45 7", "14 40", "15 33", "8 5", "9 2", "19 22", "38 48", "3 17", "0 47", "47 6", "11 46", "29 12", "40 17", "1 32", "4 26", "16 27", "19 14", "36 1", "21 42", "24 21", "16 23", "20 42", "4", "28 43", "25 27", "5 30", "36 35", "46 41", "9 44", "33 0", "37 29", "20 45", "12 39", "8 25", "10 37", "44 31", "41 32", "3 2", "6 35", "34 48", "28 30"};
    vector<int> price = {827135, 960168, 163043, 17862, 422363, 123722, 983600, 270397, 225885, 553488, 625935, 924837, 95630, 429595, 735699, 719567, 940463, 63549, 36229, 343396, 598936, 157276, 403325, 617121, 829267, 556056, 636475, 627089, 437135, 872101, 392770, 264269, 832268, 72164, 282130, 770982, 712238, 782082, 557731, 938122, 335569, 183665, 379311, 947550, 129611, 631361, 667116, 70073, 694910, 219696};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14847654;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 50;
    vector<string> demand = {"9 20", "49 37", "31 4", "34 31", "30 48", "24", "38 44", "49 5", "5 34", "17 9", "3 19", "8 20", "3 1", "26 37", "42 18", "35 42", "7 19", "1", "30 35", "25 4", "23 16", "25 47", "23 2", "47 44", "6 0", "38 22", "48 46", "40 2", "22", "6 45", "28 17", "43 21", "28 0", "7 10", "14", "11 12", "41 18", "32 16", "43 13", "21 27", "39 14", "46 36", "27 29", "24 13", "8 29", "11", "40 39", "45", "26 10", "41 33"};
    vector<int> price = {262081, 148671, 587401, 239331, 649084, 914898, 860096, 831555, 654060, 234591, 226351, 494631, 703546, 913875, 618224, 731960, 686297, 231087, 88864, 817857, 590389, 85479, 614354, 712052, 274755, 382052, 29161, 505019, 643406, 588949, 570852, 421838, 253971, 674604, 661168, 903055, 589502, 521263, 250961, 243561, 755854, 477311, 254544, 975751, 907538, 389119, 224062, 110186, 620206, 829277};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15046337;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 50;
    vector<string> demand = {"46 41", "32 13", "8 6", "32 42", "2 49", "37 15", "5 21", "30", "9 12", "8 29", "47 25", "40 34", "3 42", "12 9", "4 27", "46 44", "1 15", "31 25", "24 35", "24 34", "22 2", "48", "43 14", "3 41", "6", "30 17", "7", "44", "26 1", "21 31", "16 19", "23 33", "29 43", "11 18", "37 23", "11 20", "20 49", "27 4", "35 40", "28", "47 0", "36 48", "22 38", "16 7", "39 17", "5 0", "38 14", "39 10", "13 45", "19 18"};
    vector<int> price = {316488, 998713, 386121, 285155, 744001, 57519, 934872, 81776, 132294, 630929, 367065, 808057, 424489, 517828, 791193, 46502, 40050, 966733, 407654, 590909, 335173, 187200, 150807, 678346, 204287, 944078, 781742, 453941, 793971, 492345, 942011, 110458, 7409, 328131, 911964, 267761, 902001, 363187, 349536, 34295, 510467, 716600, 358703, 934955, 750779, 149895, 981456, 307180, 632979, 905462};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15944253;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 50;
    vector<string> demand = {"5 18", "44 25", "7 10", "21 26", "0 35", "4 24", "0", "40 11", "34", "11 13", "23 40", "30 9", "24 36", "31 46", "2 25", "5 10", "9 34", "2 27", "16 18", "29 33", "49 32", "30 7", "45 43", "17 33", "42", "4 19", "39 21", "17", "1 19", "20 22", "27 12", "16 6", "44 1", "47 3", "15 42", "36 12", "37 8", "8 37", "39 14", "41 13", "48 22", "48 15", "32 49", "3", "28 41", "23 45", "6 47", "43 38", "38", "14 26"};
    vector<int> price = {999520, 965320, 38833, 547692, 655049, 367322, 106023, 643802, 68881, 329026, 8663, 670682, 547575, 175795, 708190, 832316, 10836, 457113, 804413, 568881, 515196, 462919, 729724, 32030, 360565, 733495, 226694, 757443, 604846, 440619, 934471, 604365, 922290, 973303, 668409, 577339, 856977, 290783, 737492, 442209, 619808, 746154, 112890, 167383, 438301, 337432, 999698, 965488, 794544, 804110};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16361536;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 50;
    vector<string> demand = {"30 0", "41", "7 23", "3 23", "0 36", "38 11", "12 9", "24 33", "17", "14 6", "1 37", "12 19", "14 49", "4 26", "8 26", "4 16", "6 29", "8 16", "41 30", "44 34", "18 48", "21 40", "36 35", "7 3", "38 13", "44 17", "48", "19 28", "42 10", "28 45", "13 45", "43 5", "49 29", "34 9", "27 39", "27 22", "37 15", "18", "32 46", "25 31", "47 10", "33 21", "25 1", "5 31", "2 11", "47", "24 40", "42 46", "35", "22 20"};
    vector<int> price = {430376, 585684, 141079, 58265, 494441, 450014, 518672, 334247, 40137, 266179, 343752, 719072, 399254, 342431, 621038, 205297, 34990, 396246, 870983, 21582, 825882, 51427, 372638, 957991, 456085, 163762, 693640, 775793, 136770, 862186, 108763, 83497, 964221, 766194, 141761, 975013, 732559, 660432, 309259, 289047, 442962, 169362, 8118, 842216, 511792, 145507, 47512, 63133, 58104, 918494};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13052460;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 50;
    vector<string> demand = {"15 44", "18 27", "34 23", "21 46", "47", "7 28", "10 43", "24 28", "27 33", "15 16", "44", "31 0", "11 36", "37 8", "29 7", "11 42", "12 35", "38 16", "12", "31 26", "43", "0 37", "2 38", "36 48", "17 8", "29 35", "21 20", "5 26", "23", "5 33", "19 45", "20 6", "25 6", "30", "40 18", "1 22", "1 47", "49 34", "10", "13 22", "3", "13 41", "45 19", "3", "14 9", "4 9", "49 46", "14 39", "41 32", "32 25"};
    vector<int> price = {803559, 465958, 532024, 389685, 559385, 50033, 41601, 247437, 860147, 473399, 247853, 432981, 710988, 781128, 453825, 428740, 298547, 568017, 90154, 9690, 977638, 211556, 123256, 348361, 68088, 577588, 928701, 137006, 691186, 306854, 608633, 494744, 772811, 140656, 884428, 848548, 190688, 442380, 95984, 567187, 915778, 860188, 167, 143117, 641315, 453992, 571856, 456214, 538360, 178361};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15125746;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 50;
    vector<string> demand = {"15 29", "43", "30 36", "6 1", "2 30", "44", "16 47", "15 35", "21 10", "39 46", "41 12", "8 41", "1", "23 26", "14", "34 12", "28 0", "14 16", "17 13", "8 9", "49 23", "7 11", "18", "26 22", "40 6", "34 20", "36 17", "3 42", "2 13", "43 38", "3 5", "42 39", "21 18", "27 9", "11 31", "0 49", "35 47", "25 28", "46 7", "40", "5 31", "20 48", "22 25", "19 32", "38 29", "45 37", "33 24", "37 4", "45 10", "19 32"};
    vector<int> price = {57779, 478823, 793271, 420636, 764479, 875810, 654209, 894524, 20390, 772462, 445333, 651735, 909445, 286030, 202678, 804389, 636591, 243107, 98650, 305786, 615369, 579114, 212158, 281817, 290967, 443956, 173313, 580685, 948533, 192199, 227719, 6312, 671022, 20989, 943299, 435500, 413150, 597507, 330023, 433539, 369969, 775356, 85274, 795765, 577737, 804303, 600153, 214327, 47409, 215154};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15728288;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 50;
    vector<string> demand = {"43 22", "9 35", "7 2", "19 35", "36", "32 19", "45 11", "5 44", "14 28", "34", "21", "4 37", "40 17", "49 38", "43 23", "32 5", "13", "34 8", "28", "4 41", "29 3", "31 18", "26 14", "31 46", "23 16", "37 2", "20 24", "25 16", "7 39", "13 17", "0", "27 8", "48 30", "29 3", "39 42", "0 6", "20 47", "49 40", "44", "22 1", "33", "15 42", "33 27", "25 18", "9 6", "21 30", "10 45", "12 10", "11 38", "48"};
    vector<int> price = {489623, 261770, 760210, 982327, 228578, 751031, 25004, 577493, 757503, 934034, 904063, 853386, 579764, 645422, 668301, 924974, 611544, 527471, 128719, 688171, 915135, 560043, 416155, 819383, 900153, 913868, 351536, 984082, 134209, 14445, 320630, 623831, 792566, 597191, 606158, 21143, 348221, 147513, 114987, 622076, 597898, 19050, 991813, 177661, 180823, 660113, 102634, 792366, 703936, 747704};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16630091;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 50;
    vector<string> demand = {"22 49", "17 34", "38 16", "16 41", "9 19", "10 22", "14 25", "12 33", "28 20", "36 46", "35 7", "36 8", "21 11", "39 32", "30 38", "2 8", "24 26", "1 44", "31 4", "21 41", "35 28", "1 40", "26", "25 24", "18 11", "45 17", "46 45", "15", "18 47", "42 48", "9 23", "27 37", "37 27", "7 33", "0", "19 42", "4 31", "44 30", "29 20", "34 2", "3 0", "29 48", "6 40", "12 23", "10 49", "39 13", "6 47", "43", "14 5", "13 32"};
    vector<int> price = {585276, 142267, 694484, 669193, 884174, 451201, 837403, 161849, 482228, 286086, 185685, 821859, 718873, 173674, 32701, 596096, 586368, 859350, 369718, 541704, 304558, 434043, 139019, 93055, 692618, 603569, 898832, 183048, 710590, 850373, 40930, 295865, 508991, 251765, 965057, 909516, 702966, 802459, 587716, 701545, 604897, 773400, 523403, 840121, 463426, 72456, 436216, 49793, 931805, 322285};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14578056;
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
    vector<string> demand = {"20 49", "33 0", "14 23", "10 32", "7 39", "24 47", "20 31", "42 11", "2", "8 43", "46", "13 30", "48 32", "15 6", "25", "40", "34 30", "8 27", "14 22", "42 27", "12 5", "31 21", "26 19", "40 34", "28 11", "0 45", "35 6", "15 38", "29", "13 37", "35 41", "5 12", "33 23", "18 3", "3 36", "7 26", "43 22", "48 39", "49 4", "44", "9 4", "46 41", "21 10", "9 24", "2", "38 17", "18 36", "25 29", "19", "16"};
    vector<int> price = {345377, 618053, 172228, 831616, 647805, 663745, 965747, 899081, 644418, 402686, 764981, 631353, 611224, 790614, 262524, 479137, 706268, 651029, 364832, 499195, 189173, 501193, 491134, 974549, 16974, 969566, 840192, 734944, 441416, 681608, 299416, 303145, 816012, 987995, 651112, 463816, 651740, 133210, 879248, 296157, 535895, 160581, 443861, 147119, 951194, 706385, 626255, 173814, 873765, 507438};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 17251101;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 50;
    vector<string> demand = {"14 27", "28 48", "44 11", "24 39", "18 28", "2 12", "31 22", "23", "24 27", "49 10", "45 23", "44", "7 45", "1 6", "25 47", "2 49", "10", "31 12", "6 39", "40 38", "46 35", "14 8", "22 5", "11 37", "30 0", "17 33", "9 3", "20 21", "30 46", "36", "40 41", "7 16", "47 42", "29 32", "9 34", "15 21", "15 20", "38", "5 48", "19 13", "37", "41 13", "17 26", "33 8", "43 3", "43 4", "42 25", "1 26", "34 35", "29 32"};
    vector<int> price = {212835, 519243, 763629, 897893, 300357, 959639, 781283, 251834, 281419, 927228, 592885, 285603, 799704, 152372, 810835, 956591, 49799, 859311, 397883, 286199, 850274, 228930, 215391, 365253, 877145, 188387, 676450, 212573, 455429, 258571, 534956, 668264, 294165, 814936, 82508, 110874, 290926, 380142, 879059, 572344, 307369, 471944, 857947, 623425, 140667, 185133, 580015, 190465, 44443, 494250};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15175897;
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
    vector<string> demand = {"23 36", "21 11", "41 27", "20 45", "18 40", "45 34", "32 39", "18 43", "1 21", "40 33", "16", "27 37", "26 30", "10 6", "7 6", "47 32", "2 20", "29 23", "19 48", "26 16", "5 31", "34 2", "46 11", "4 17", "1", "25 0", "4 22", "37 24", "38", "5 25", "7 8", "41 10", "38 44", "3 33", "31 0", "12 39", "24 46", "9 22", "35 14", "42 17", "19 48", "28 29", "28 8", "12 47", "30 13", "14 15", "35 15", "3 43", "42 9", "44"};
    vector<int> price = {103162, 891067, 313326, 613105, 357633, 74984, 166699, 652395, 147498, 624327, 991879, 261777, 441260, 162274, 10591, 973285, 13311, 430950, 87409, 379790, 61280, 750303, 606940, 763120, 181093, 537925, 6975, 573637, 390971, 811721, 530927, 10485, 702788, 844252, 139941, 576772, 435587, 822992, 745518, 583084, 447318, 737397, 361212, 404929, 416022, 371802, 378213, 945685, 319103, 981974};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14513054;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 50;
    vector<string> demand = {"2 28", "32 7", "20 13", "4 30", "14 23", "6", "20 43", "27 21", "33 39", "18 41", "40", "45 48", "27 8", "47 23", "3 17", "4 26", "26 0", "19 24", "42 15", "31 46", "22 24", "19 12", "45 0", "49 5", "18 36", "46 38", "49 8", "34 42", "17 41", "7 16", "28 30", "33 9", "34 15", "12 1", "9 25", "11 35", "16 21", "3 36", "38", "29 43", "44", "2 29", "39 14", "37 44", "47", "13 48", "35 11", "25 1", "6 22", "10"};
    vector<int> price = {977372, 556246, 997823, 136213, 587813, 440136, 766299, 28322, 84683, 565181, 636484, 706759, 837859, 944376, 289276, 831511, 575134, 447730, 951954, 259836, 809089, 908197, 338080, 497261, 57457, 892651, 821825, 625980, 467670, 443487, 382521, 445042, 516084, 896695, 97606, 103896, 336830, 380257, 132217, 421512, 945437, 285053, 644622, 299648, 745780, 933897, 647510, 837265, 897979, 115815};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16327189;
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
    vector<string> demand = {"33 1", "26", "36 14", "14 40", "7 4", "46", "13 42", "10 6", "10 33", "39 41", "24 26", "7 4", "29 39", "46 38", "38 43", "43 6", "2 48", "12 24", "42 13", "49 25", "15 32", "40 36", "29 18", "0 45", "32 47", "45", "11 16", "20 15", "8 22", "8 1", "3 48", "16 11", "23 47", "9 18", "35 28", "20 23", "30 21", "49 31", "22 19", "44 31", "44", "2 34", "34 0", "17 5", "28 35", "21 30", "27 19", "3 41", "17 27", "25 37"};
    vector<int> price = {763637, 436630, 964729, 264429, 410132, 825000, 528896, 946770, 678587, 980675, 254947, 743843, 897345, 526997, 155442, 198185, 424438, 475536, 821939, 508685, 948499, 930026, 945293, 832470, 748055, 193302, 12249, 484253, 463032, 938044, 113892, 226668, 374674, 78620, 491096, 784805, 419972, 536343, 247926, 614910, 517018, 502873, 358753, 930714, 546221, 30546, 128899, 970658, 506082, 950837};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15961737;
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
    vector<string> demand = {"21 47", "37 32", "31 49", "34 40", "40 6", "13 21", "12 37", "7", "12 32", "13 35", "1 6", "46 24", "31 49", "30 7", "23 4", "29 2", "42 25", "16 34", "1 33", "8 30", "2 29", "10 41", "19 44", "23 14", "0 42", "48 20", "0 35", "41 17", "43 22", "24 10", "46", "36 22", "15 5", "43 18", "27 19", "16 18", "45 44", "26 28", "47 28", "48", "8 26", "14", "4", "17", "39", "9 5", "11 45", "33 20", "11 27", "36 38"};
    vector<int> price = {161245, 327880, 490060, 902000, 536849, 633944, 806410, 540182, 268619, 798733, 311363, 974254, 994444, 357034, 242204, 998542, 70931, 788062, 124503, 275645, 471826, 537632, 655359, 578395, 552261, 426448, 432194, 303604, 537061, 912971, 444542, 214657, 240850, 934601, 116656, 294050, 84897, 439418, 350584, 869867, 754502, 661946, 844120, 265297, 18979, 602676, 780191, 606262, 390737, 904693};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15776446;
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
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {613873, 69769, 812947, 309991, 871487, 422321, 768662, 169438, 328674, 906103, 72279, 367753, 977420, 743883, 581177, 460560, 758686, 833685, 372635, 439894, 339896, 844580, 851659, 474560, 157380, 376469, 430460, 54039, 290767, 296595, 985969, 420991, 366363, 798915, 247333, 237849, 737587, 15994, 923638, 66260, 922096, 512268, 434013, 415868, 256150, 531541, 876427, 14835, 365225, 765413};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15159234;
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
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {454728, 705120, 609992, 306387, 696031, 283723, 199207, 126490, 337761, 6326, 423084, 323729, 427316, 789446, 638995, 674649, 543646, 376581, 690642, 467284, 442841, 129090, 979551, 393205, 544957, 752053, 924745, 937735, 766887, 289970, 703147, 737967, 511441, 829490, 560705, 207472, 113212, 276263, 333961, 967324, 282588, 273397, 807405, 226256, 579194, 446399, 900904, 122840, 339332, 107897};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14326098;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {106475, 298524, 236986, 602377, 691728, 298294, 354429, 132824, 236028, 637668, 422793, 455526, 891986, 934234, 801367, 452690, 658057, 430930, 245304, 508369, 398254, 44244, 781765, 205658, 270499, 360959, 168408, 171402, 150, 507739, 279298, 106624, 806262, 32636, 225352, 14341, 330929, 96133, 147165, 83309, 733800, 86309, 55186, 142137, 536894, 856553, 111178, 194950, 287482, 356481};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 10613964;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {703319, 202087, 400724, 1435, 407744, 671222, 362393, 576152, 358975, 878894, 600242, 154625, 985517, 406504, 187260, 727221, 937196, 34540, 823353, 84360, 634200, 73504, 687021, 689386, 215640, 223914, 62290, 326817, 418864, 349771, 199649, 638534, 68210, 116725, 639968, 475953, 304298, 518713, 568456, 663273, 397606, 168698, 334249, 899475, 91553, 521508, 626695, 28748, 72399, 450047};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 12615480;
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
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {629460, 706599, 39902, 316480, 912336, 255541, 56745, 974625, 98709, 475608, 840747, 814709, 630493, 908956, 931433, 270461, 384909, 235731, 305525, 953364, 415355, 703130, 638413, 749603, 602604, 729965, 787462, 745650, 758713, 859860, 195696, 904524, 82810, 751949, 221003, 995145, 7489, 277747, 969769, 622549, 269707, 326868, 437258, 416551, 235823, 368690, 687011, 137083, 120772, 992535};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16366435;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {606799, 536126, 212017, 245211, 285728, 330972, 491528, 73189, 76622, 250240, 449401, 788669, 154763, 532210, 540618, 892117, 43707, 64458, 686215, 529827, 687007, 472273, 856694, 640616, 888824, 608869, 525657, 92186, 262303, 646429, 601073, 869101, 182554, 813089, 630664, 984634, 144060, 122191, 574174, 737033, 888782, 23574, 525702, 559896, 72136, 66319, 968364, 115842, 130776, 170930};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14176892;
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
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {162020, 334134, 643203, 18714, 974749, 48378, 143934, 500406, 656915, 406236, 663186, 257987, 791689, 362091, 587427, 422352, 346724, 247839, 60894, 437250, 984871, 466027, 977175, 510572, 25922, 565662, 576890, 994285, 197855, 224018, 681566, 359875, 558151, 841120, 378588, 49252, 889497, 38873, 66009, 546412, 445108, 729194, 320750, 236796, 91284, 908177, 175499, 954360, 156015, 752744};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15026199;
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
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {391609, 657237, 218770, 885135, 167809, 244691, 450797, 261050, 755327, 648651, 1419, 436893, 8525, 559570, 278012, 903464, 125173, 683861, 942336, 191181, 746624, 387444, 920374, 67373, 140591, 528009, 491901, 316090, 482368, 164267, 68833, 390328, 821504, 287603, 275463, 989312, 48645, 726259, 766713, 803972, 374909, 768132, 757216, 899786, 844053, 35227, 803249, 969225, 235439, 745585};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15200452;
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
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {676757, 982062, 649380, 597130, 565787, 789970, 641490, 57687, 622411, 640210, 221954, 691244, 30537, 559809, 495198, 822351, 549120, 543842, 64961, 832184, 347813, 956222, 116667, 621380, 856007, 960719, 172959, 659255, 446295, 408397, 921191, 123051, 906811, 86922, 236532, 472597, 876892, 878022, 46635, 499302, 518231, 784940, 706897, 65119, 344748, 202094, 887470, 410219, 745936, 468782};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16261647;
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
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {242403, 610100, 425003, 875421, 231480, 281009, 352492, 404438, 456616, 798786, 329186, 894158, 438189, 752348, 981080, 191072, 224944, 857971, 585445, 787931, 873624, 620027, 572870, 580521, 201498, 917618, 782614, 605319, 327836, 528549, 74100, 86590, 655001, 499103, 962011, 402832, 780111, 830854, 323621, 753078, 145991, 652806, 647236, 584179, 405154, 628315, 291603, 146449, 2637, 877047};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15832668;
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
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49"};
    vector<int> price = {59261, 756264, 263282, 666221, 413381, 454207, 544094, 151612, 795838, 725990, 996325, 727377, 756036, 181551, 948424, 948403, 28112, 777779, 644982, 65393, 858658, 187461, 558855, 281467, 620386, 865944, 188000, 484444, 375869, 659360, 190988, 435130, 415623, 970621, 101350, 345355, 424827, 645443, 496966, 737017, 371432, 9642, 980745, 643819, 191192, 929168, 108573, 219303, 706946, 269907};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15418667;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49"};
    vector<int> price = {801048, 81956, 457367, 359902, 363422, 594104, 742197, 551422, 78547, 634417, 727133, 785886, 585898, 659107, 756507, 687247, 4461, 697685, 849041, 17778, 434701, 736824, 27419, 415446, 896994, 734962, 344613, 521919, 470617, 567911, 791825, 271664, 649866, 765543, 147917, 529639, 359647, 406465, 597412, 438193, 40881, 324544, 740431, 626779, 500002, 496937, 830377, 504462, 710973, 679418};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14189988;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49"};
    vector<int> price = {38591, 145674, 932593, 582361, 77471, 829587, 317323, 422083, 351505, 787939, 506345, 659681, 575954, 156210, 425223, 723870, 685849, 784869, 130334, 799612, 739414, 171214, 124156, 479844, 314344, 140509, 493132, 144721, 644971, 204104, 340490, 199913, 866129, 789434, 782274, 943599, 619020, 99596, 882034, 486876, 403886, 388378, 662908, 979839, 60940, 88131, 703708, 263140, 389351, 350393};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13890927;
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
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49"};
    vector<int> price = {62751, 128764, 37958, 703258, 124959, 352302, 843767, 618090, 13374, 488737, 338546, 870215, 205001, 204674, 659648, 987274, 664625, 795020, 603221, 546658, 798247, 7106, 935035, 461155, 503296, 512326, 549285, 723355, 775465, 938635, 73747, 838216, 583751, 111705, 541473, 708709, 464006, 385239, 326799, 993731, 390327, 665344, 863945, 595328, 386369, 523592, 98953, 50993, 834963, 702174};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14712759;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49"};
    vector<int> price = {597650, 633210, 225631, 49037, 94364, 245279, 561362, 160000, 968633, 853179, 98634, 42380, 691394, 198736, 154084, 232866, 907445, 134441, 134457, 234243, 644523, 524783, 415938, 508467, 636462, 318658, 548410, 735415, 369651, 383373, 953940, 483652, 16582, 695922, 49040, 110945, 941200, 126754, 270944, 909833, 979932, 885929, 952212, 671325, 84665, 622647, 420542, 508461, 273439, 554998};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13792893;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49"};
    vector<int> price = {259055, 917961, 79781, 674992, 426427, 232594, 993649, 491188, 968008, 879651, 874560, 438299, 363303, 891141, 134221, 412342, 518437, 75420, 539095, 305732, 501604, 519026, 708013, 970167, 706702, 309029, 592813, 127244, 817489, 866251, 682241, 76543, 300563, 278373, 267886, 243341, 510967, 777886, 734529, 995326, 657537, 609088, 433625, 537191, 16581, 567845, 949532, 535017, 159616, 4979};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14983793;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49"};
    vector<int> price = {357101, 661220, 40356, 581465, 631386, 263410, 890493, 740551, 390653, 707981, 123153, 589245, 300875, 423716, 867618, 568760, 667056, 378584, 346645, 401584, 890261, 4181, 10672, 323885, 541371, 27252, 408081, 7255, 78620, 567697, 528585, 952072, 745268, 85292, 533536, 376653, 348701, 424028, 633555, 739353, 648360, 756708, 844950, 949234, 180423, 712567, 34345, 847478, 607502, 380990};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14139239;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49"};
    vector<int> price = {765414, 497762, 901522, 292437, 821647, 959245, 836040, 746079, 966499, 914659, 313775, 11435, 383083, 59042, 96726, 916618, 952047, 961779, 856998, 585601, 217483, 21709, 342308, 62432, 970943, 39082, 774998, 5287, 886560, 898851, 902628, 168325, 912965, 804150, 460761, 250963, 763394, 296800, 997041, 246244, 727810, 310816, 257678, 110892, 886209, 870755, 543862, 838255, 832533, 917211};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 18090739;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49"};
    vector<int> price = {940208, 50016, 938919, 282515, 628799, 426213, 321597, 920149, 431500, 724508, 818999, 850479, 892832, 731963, 654628, 869944, 499277, 418021, 166743, 496318, 180616, 894552, 807133, 438293, 521796, 209693, 825400, 582009, 47948, 657932, 499219, 988155, 224299, 438137, 787021, 853098, 864350, 624969, 289598, 812201, 349476, 108596, 662679, 758659, 356911, 833659, 628602, 856187, 768031, 311696};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 17004345;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49"};
    vector<int> price = {868856, 948647, 722600, 192340, 386939, 244395, 402033, 728690, 826403, 966332, 386622, 325621, 470838, 127272, 280109, 257858, 496721, 660810, 882827, 786318, 473010, 748654, 411266, 652041, 23665, 284528, 485699, 168618, 657066, 253729, 480314, 525922, 202375, 202913, 718261, 105666, 963659, 120293, 834355, 790061, 602976, 737328, 632033, 73813, 864600, 428493, 848023, 877672, 89303, 247201};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14838398;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int n = 50;
    vector<string> demand = {"44", "0 20", "29", "37 19", "36", "12", "9 37", "6", "6 41", "36", "35 28", "33", "26 46", "27", "18 38", "28 47", "20 5", "4 19", "11 45", "49", "9 12", "23 27", "32", "10", "8 2", "43 0", "32", "42", "25", "48 44", "40", "42", "8", "33 34", "14", "2", "3 23", "24", "24", "21", "16 26", "16", "7", "1 4", "10", "17", "3", "48 17"};
    vector<int> price = {7494, 10189, 639, 24435, 13429, 10950, 19638, 1942, 2793, 27478, 4570, 6231, 17827, 7094, 10413, 1858, 11935, 25940, 17740, 20561, 15353, 26006, 26958, 1639, 15298, 22943, 4767, 2020, 27862, 1715, 1634, 23244, 21541, 31447, 16616, 20465, 10023, 28991, 16059, 18753, 12220, 15587, 23670, 1076, 3717, 5908, 21880, 25981};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 535273;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int n = 50;
    vector<string> demand = {"12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "0", "0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "22 23", "23", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 25"};
    vector<int> price = {3396, 194266, 2759, 32452, 28174, 18012, 29470, 4936, 10542, 1855, 197647, 7845, 18916, 3313, 27553, 13687, 19955, 27512, 17201, 15258, 25172, 21048, 23170, 27953, 22572, 32023, 12277, 30957, 26108, 16606, 7226, 3980, 2327, 14050, 24422, 3231, 7002, 19429, 1093, 7313, 28951, 13879, 3569, 997, 4946, 5920, 9123, 27583, 27184, 19331};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 825487;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int n = 50;
    vector<string> demand = {"6 7", "1 2", "3 5", "6 9", "11 22", "22 33", "11 44", "12 13", "12 24", "24 36", "36 48", "1 5", "8 28", "40 17", "15 25", "25 35", "35 45", "18 38", "19 29", "29 39", "39 49", "49 7", "14 34", "34 20", "10 20", "30 10", "40 44", "0 41", "31 21", "41 47", "23 27", "33 43", "42 31", "4 0"};
    vector<int> price = {23, 45, 46, 346, 3645, 435, 43, 5, 234, 23, 5, 346, 7, 54656, 6712, 45, 76, 56, 45, 234, 354, 464, 656, 57, 565, 6, 56, 56, 5, 65, 646346, 2222, 12345, 9999};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 738979;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int n = 11;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 0", "5 6", "6 7", "7", "8 9", "9 10"};
    vector<int> price = {15, 15, 16, 15, 16, 20, 24, 22, 34, 30};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int n = 20;
    vector<string> demand = {"1 2", "0 1", "0", "2 3", "3"};
    vector<int> price = {1, 1, 5, 5, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49"};
    vector<int> price = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int n = 2;
    vector<string> demand = {"0 1", "1 0"};
    vector<int> price = {3, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 0", "4 5", "5 6", "6 4", "8", "8", "9", "9 10", "10 11", "11 12", "13 12", "14 13", "15 14", "15", "17 16", "18 17", "19 18", "20 19", "21 20", "22 21", "23 22", "24 23", "25 24", "25", "27 26", "28 27", "29 28", "30 29", "31 30", "32 31", "33 32", "34 33", "35 34", "35", "37 36", "38 37", "39 38", "40 39", "41 40", "42 41"};
    vector<int> price = {3, 7, 4, 1, 3, 3, 1, 5, 6, 5, 18, 10, 1, 999999, 999998, 999999, 999990, 999999, 999999, 999999, 999999, 999990, 999999, 999999, 999998, 999999, 999990, 999999, 999999, 999999, 999999, 999990, 999999, 999999, 999998, 999999, 999990, 999999, 999999, 999999, 999999, 999990, 999999};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15000002;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49"};
    vector<int> price = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 25000;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int n = 50;
    vector<string> demand = {"1", "1", "2 3", "3 2"};
    vector<int> price = {1, 2, 20, 10};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int n = 50;
    vector<string> demand = {"41 17", "34 0", "19 24", "28 8", "12 14", "5 45", "31 27", "11 41", "45 42", "27 36", "2 3", "42 32", "21 16", "47 26", "21 38", "19 12", "17 49", "35 44", "3 11", "22 33", "23", "14", "18", "47", "44", "7", "37", "9", "23", "29", "28", "16", "35", "40", "38", "6", "40", "48", "46", "5", "29", "20", "0", "6", "1", "43", "48", "34", "4", "26"};
    vector<int> price = {12, 29, 25, 10, 27, 14, 18, 29, 9, 13, 10, 12, 4, 6, 20, 19, 25, 1, 28, 27, 24, 7, 12, 6, 15, 23, 1, 10, 18, 4, 28, 13, 17, 1, 12, 7, 6, 18, 16, 5, 12, 23, 21, 11, 22, 5, 17, 11, 28, 12};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 541;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int n = 50;
    vector<string> demand = {"0", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49"};
    vector<int> price = {900001, 900002, 900004, 900000, 900004, 900004, 900003, 900003, 900002, 900004, 900000, 900000, 900001, 900002, 900001, 900001, 900000, 900002, 900002, 900001, 900001, 900004, 900002, 900003, 900002, 900002, 900001, 900001, 900003, 900000, 900002, 900001, 900001, 900003, 900004, 900002, 900002, 900004, 900000, 900004, 900003, 900001, 900002, 900003, 900003, 900004, 900001, 900001, 900003, 900003};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 23400056;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 0", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "49 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49"};
    vector<int> price = {1, 2, 3, 4, 5, 6, 7, 8, 90000, 101, 11, 12, 13, 14, 15, 16, 1700, 18, 19, 20, 21, 22, 23, 2400, 25, 26, 2700, 28, 29, 30, 31, 32, 33, 34, 35, 36000, 37, 38, 39, 40, 90001, 42, 43, 44, 45, 46, 47, 48, 49};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 223215;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int n = 50;
    vector<string> demand = {"2 3", "2 3", "4 5", "4 5", "6 7", "6 7", "8 9", "8 9", "10 11", "10 11", "12 13", "12 13", "14 15", "14 15", "16 17", "16 17", "18 19", "18 19", "20 21", "20 21", "22 23", "22 23", "24 25", "24 25", "26 27", "26 27", "28 29", "28 29", "30 31", "30 31", "32 33", "32 33", "34 35", "34 35", "36 37", "36 37", "38 39", "38 39", "40 41", "40 41", "42 43", "42 43", "44 45", "44 45", "46 47", "46 47", "48 49", "48 49"};
    vector<int> price = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2400000;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int n = 50;
    vector<string> demand = {"1 2", "0 1", "2 3", "3 4", "5 4", "5 6", "6 7", "8 0", "8 7", "15", "15 14", "13", "13 14", "9", "9 10", "10 11", "11 12", "12", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "39 40", "40 41", "41 42", "42 44", "16 44", "46 45", "45 47", "48 47", "48 46", "49"};
    vector<int> price = {24023, 787306, 946696, 502619, 855594, 475959, 35278, 851734, 250040, 679863, 125605, 131166, 322192, 808312, 310006, 141909, 281875, 65905, 887880, 274036, 24941, 685773, 797882, 89024, 989279, 604946, 365700, 340202, 35746, 438905, 10762, 576120, 226210, 957458, 595090, 598155, 949768, 146719, 449888, 716159, 826581, 575492, 847324, 665124, 900156, 157330, 807033, 182030, 739586, 211264};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15329129;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int n = 50;
    vector<string> demand = {"36", "15", "35 36", "49", "12", "40", "13 26", "26 22", "11", "17 29", "30 12", "17", "29", "22", "19", "43", "11 42", "23 21", "34", "48", "15", "13", "41", "6 23", "20 46", "5", "34", "24 45", "45", "14", "0 37", "3 1", "49 32", "44 39", "20", "28", "1 47", "42", "39 44", "47 21", "25", "27", "6", "33 19", "28", "32", "41 0", "14", "7 24", "35 43"};
    vector<int> price = {40, 45, 20, 41, 30, 32, 18, 48, 22, 32, 26, 10, 28, 18, 7, 48, 4, 37, 16, 7, 34, 20, 25, 29, 22, 33, 30, 4, 20, 21, 19, 9, 16, 41, 50, 47, 24, 19, 46, 47, 2, 22, 6, 30, 39, 15, 29, 42, 1, 44};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 857;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 0", "6 7", "7 8", "8 9", "9 10", "10 11", "11 6", "12 13", "13 14", "14 15", "15 16", "16 17", "17 12", "18 19", "19 20", "20 21", "21 22", "22 23", "23 18", "24 25", "25 26", "26 27", "27 28", "28 29", "29 24", "30 31", "31 32", "32 33", "33 34", "34 35", "35 30", "36 37", "37 38", "38 39", "39 40", "40 41", "41 36", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49"};
    vector<int> price = {2, 8, 5, 1, 10, 5, 9, 9, 3, 5, 6, 6, 2, 8, 2, 2, 6, 3, 8, 7, 2, 5, 3, 4, 3, 3, 2, 7, 9, 6, 8, 7, 2, 9, 10, 3, 8, 10, 6, 5, 4, 2, 3, 4, 4, 5, 2, 2, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int n = 50;
    vector<string> demand = {"1 21", "38", "40 47", "13", "37 23", "17 15", "46 16", "40", "16 36", "31 45", "17", "29 42", "14 0", "39", "31", "26 28", "37 42", "34 32", "23 1", "27 41", "29", "11 35", "20", "43 13", "0 25", "19 45", "3", "33 30", "8 33", "41 6", "32 20", "7 46", "21 7", "15 48", "25 11", "35", "2", "30 9", "9", "2", "28 4", "14 4", "18 12", "22 34", "27 44", "18 3", "49 44", "49", "36", "47 8"};
    vector<int> price = {995989, 716656, 967015, 802382, 345527, 75361, 53290, 34052, 672719, 599317, 318030, 398212, 403276, 110795, 667391, 936904, 669080, 890833, 143625, 648486, 895174, 952938, 836047, 800899, 275735, 96138, 148772, 176357, 34665, 200382, 918985, 325670, 18237, 97000, 187140, 432709, 199779, 903464, 467417, 1495, 250244, 577367, 166376, 736091, 61196, 877485, 954914, 799018, 531058, 570242};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15422656;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int n = 50;
    vector<string> demand = {"4 26", "20 27", "42 28", "28 11", "42 19", "34 32", "47 38", "8 40", "21 14", "19 5", "43 16", "25 5", "40 16", "14 8", "26 41", "12 17", "47 46", "2 41", "29 3", "9 15", "44 22", "6 43", "23 49", "2 1", "30 13", "31 36", "11 39", "13 46", "9 0", "37 27", "49 1", "20 18", "24 15", "45 23", "37 6", "38 31", "18 39", "36 7", "10 45", "32 0", "22 33", "21 30", "34 24", "48 35", "48 33", "7 4", "3 25", "44 17", "29 35", "12 10"};
    vector<int> price = {5, 2, 13, 8, 12, 3, 8, 9, 9, 8, 15, 11, 2, 6, 6, 3, 7, 4, 14, 8, 3, 12, 13, 7, 8, 14, 10, 1, 8, 6, 9, 13, 12, 1, 12, 6, 4, 11, 2, 11, 12, 1, 15, 10, 12, 10, 12, 14, 9, 10};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "7 8", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {1, 2, 3, 4, 5, 6, 7, 8, 9, 123, 34, 34, 354, 6, 56, 234, 234, 64, 234, 234, 2342, 342, 4563, 4, 5345, 234, 23, 4, 3463, 453, 45, 332, 42, 34, 234, 463, 45, 234, 53, 45, 234, 234, 2, 34, 2, 53, 4};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 18193;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int n = 50;
    vector<string> demand = {"11 12", "19 20", "43 44", "14 15", "27 28", "41 42", "13 14", "32 33", "1 2", "29 30", "7 8", "28 29", "49 0", "5 6", "35 36", "21 22", "31 32", "30 31", "36 37", "47 48", "0 1", "23 24", "22 23", "45 46", "44 45", "48 49", "18 19", "3 4", "24 25", "42 43", "8 9", "4 5", "37 38", "34 35", "38 39", "2 3", "6 7", "25 26", "40 41", "20 21", "15 16", "39 40", "12 13", "9 10", "17 18", "33 34", "16 17", "10 11", "46 47", "26 27"};
    vector<int> price = {3396, 194266, 2759, 32452, 28174, 18012, 29470, 4936, 10542, 1855, 197647, 7845, 18916, 3313, 27553, 13687, 19955, 27512, 17201, 15258, 25172, 21048, 23170, 27953, 22572, 32023, 12277, 30957, 26108, 16606, 7226, 3980, 2327, 14050, 24422, 3231, 7002, 19429, 1093, 7313, 28951, 13879, 3569, 997, 4946, 5920, 9123, 27583, 27184, 19331};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 812555;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49"};
    vector<int> price = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 610;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {41, 467, 334, 500, 169, 724, 478, 358, 962, 464, 705, 145, 281, 827, 961, 491, 995, 942, 827, 436, 391, 604, 902, 153, 292, 382, 421, 716, 718, 895, 447, 726, 771, 538, 869, 912, 667, 299, 35, 894, 703, 811, 322, 333, 673, 664, 141, 711, 253, 868};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16464;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int n = 50;
    vector<string> demand = {"36 27", "43 35", "42", "21 12", "40 9", "26 40", "22", "11", "17", "32 30", "23", "35 29", "22", "19", "43 6", "42 29", "21 19", "37", "24", "20 13", "41", "6", "12 20", "31", "25 34", "36 5", "13", "24 45", "45", "17"};
    vector<int> price = {34, 64, 43, 50, 87, 8, 76, 78, 88, 84, 3, 51, 54, 99, 32, 60, 76, 68, 39, 12, 26, 86, 94, 39, 95, 70, 34, 78, 67, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1257;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 25000000;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1250;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int n = 13;
    vector<string> demand = {"0", "0", "1 2", "2 3", "1 3", "4 5", "5 6", "6 4", "7", "7 8", "8 9", "9 10", "10", "11", "11", "12", "12"};
    vector<int> price = {3, 8, 2, 6, 9, 9, 2, 6, 5, 8, 2, 7, 11, 9, 10, 12, 11};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "48 49", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48"};
    vector<int> price = {1041, 1467, 1334, 1500, 1169, 1724, 1478, 1358, 1962, 1464, 1705, 1145, 1281, 1827, 1961, 1491, 1995, 1942, 1827, 1436, 1391, 1604, 1902, 1153, 1292, 1382, 1421, 1716, 1718, 1895, 1447, 1726, 1771, 1538, 1869, 1912, 1667, 1299, 1035, 1894, 1703, 1811, 1322, 1333, 1673, 1664, 1141, 1711, 1253};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 39812;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 0", "6 7", "7 8", "8 9", "9 10", "10 11", "11 6", "12 13", "13 14", "14 15", "15 16", "16 17", "17 12", "18 19", "19 20", "20 21", "21 22", "22 23", "23 18", "24 25", "25 26", "26 27", "27 28", "28 29", "29 24", "30 31", "31 32", "32 33", "33 34", "34 35", "35 30", "36 37", "37 38", "38 39", "39 40", "40 41", "41 36", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48"};
    vector<int> price = {2, 8, 5, 1, 10, 5, 9, 9, 3, 5, 6, 6, 2, 8, 2, 2, 6, 3, 8, 7, 2, 5, 3, 4, 3, 3, 2, 7, 9, 6, 8, 7, 2, 9, 10, 3, 8, 10, 6, 5, 4, 2, 3, 4, 4, 5, 2, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int n = 4;
    vector<string> demand = {"0 1", "0 2", "1 3"};
    vector<int> price = {10, 9, 9};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int n = 3;
    vector<string> demand = {"0 1", "0 2"};
    vector<int> price = {1, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int n = 50;
    vector<string> demand = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24"};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6"};
    vector<int> price = {1, 4, 1, 1, 4, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3, 1, 7, 3};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "4 5", "0 4"};
    vector<int> price = {2, 1, 100, 2, 100};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 0", "4 5", "5 6", "6 7", "7 4", "8 9", "9 10", "10 11", "11 8", "12 13", "13 14", "14 15", "15 12", "16 18", "17 18", "19 17", "16 19", "20 21", "21 22", "22 23", "23 20", "27 24", "24 25", "25 26", "26 27", "30 28", "28 31", "29 31", "30 29", "32 35", "34 33", "33 35", "34 32", "36 39", "39 37", "38 37", "36 38"};
    vector<int> price = {24023, 787306, 322192, 808312, 310006, 141909, 281875, 65905, 887880, 274036, 24941, 685773, 797882, 89024, 989279, 604946, 365700, 340202, 35746, 438905, 10762, 576120, 226210, 957458, 595090, 598155, 949768, 146719, 449888, 716159, 826581, 575492, 847324, 665124, 900156, 157330, 807033, 182030, 739586, 211264};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13142730;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int n = 3;
    vector<string> demand = {"0 1", "0", "1"};
    vector<int> price = {1000, 1, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int n = 2;
    vector<string> demand = {"0 1", "1"};
    vector<int> price = {1, 2};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49"};
    vector<int> price = {16838, 5758, 10113, 17515, 31051, 5627, 23010, 7419, 16212, 4086, 2749, 12767, 9084, 12060, 32225, 17543, 25089, 21183, 25137, 25566, 26966, 4978, 20495, 10311, 11367, 30054, 17031, 13145, 19882, 25736, 30524, 28505, 28394, 22102, 24851, 19067, 12754, 11653, 6561, 27096, 13628, 15188, 32085, 4143, 6967, 31406, 24165, 13403, 25562};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 506314;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int n = 5;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 0"};
    vector<int> price = {10, 3, 4, 7, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {64, 60, 2, 16, 30, 26, 11, 71, 11, 47, 53, 20, 90, 24, 88, 63, 40, 51, 62, 29, 1, 13, 58, 78, 65, 7, 77, 10, 58, 39, 3, 60, 57, 24, 77, 8, 13, 87, 1, 50, 60, 28, 93, 84, 5, 40, 11, 4, 35, 56};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1251;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int n = 20;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 0", "12 13", "11 12", "10 11", "13 14", "14 15", "15 16", "8"};
    vector<int> price = {3, 1, 3, 3, 3, 4, 3, 1, 4, 4, 1, 4, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1238;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {324, 345, 353, 344, 346, 387, 312, 333, 387, 365, 398, 356, 382, 367, 355, 377, 359, 312, 322, 321, 334, 335, 336, 337, 395, 365, 386, 367, 389, 374, 326, 355, 399, 381, 323, 343, 345, 366, 378, 394, 312, 352, 348, 361, 364, 367, 382, 391, 182, 319};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 8914;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int n = 50;
    vector<string> demand = {"11 12", "19 20", "43 44", "14 15", "27 28", "41 42", "13 14", "32 33", "1 2", "29 30", "7 8", "28 29", "49 0", "5 6", "35 36", "21 22", "31 32", "30 31", "36 37", "47 48", "0 1", "23 24", "22 23", "45 46", "44 45", "48 49", "18 19", "3 4", "24 25", "42 43", "8 9", "4 5", "37 38", "34 35", "38 39", "2 3", "6 7", "25 26", "40 41", "20 21", "15 16", "39 40", "12 13", "9 10", "17 18", "33 34", "16 17", "10 11", "46 47", "26 27"};
    vector<int> price = {5480, 26867, 31534, 32341, 26120, 16232, 5649, 27945, 3163, 24645, 13111, 25785, 19934, 25441, 4655, 20784, 9635, 22748, 16040, 6987, 30206, 1026, 28620, 23136, 642, 15730, 29135, 26527, 17963, 16511, 19911, 13976, 31197, 26582, 9150, 5885, 24333, 7521, 27397, 17321, 8894, 364, 3276, 25314, 27824, 3335, 3312, 23515, 28372, 13227};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 513008;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int n = 4;
    vector<string> demand = {"0 1", "0 2", "1 3"};
    vector<int> price = {10, 50, 50};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int n = 50;
    vector<string> demand = {"0 1", "1 2", "2 3", "3 4", "4 5", "5 6", "6 7", "7 8", "8 9", "9 10", "10 11", "11 12", "12 13", "13 14", "14 15", "15 16", "16 17", "17 18", "18 19", "19 20", "20 21", "21 22", "22 23", "23 24", "24 25", "25 26", "26 27", "27 28", "28 29", "29 30", "30 31", "31 32", "32 33", "33 34", "34 35", "35 36", "36 37", "37 38", "38 39", "39 40", "40 41", "41 42", "42 43", "43 44", "44 45", "45 46", "46 47", "47 48", "48 49", "49 0"};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    StampsCollection* pObj = new StampsCollection();
    clock_t start = clock();
    int result = pObj->sell(n, demand, price);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13509&pm=9886
********************************************************************************
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
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define SIZE(X) ((int)(X.size()))
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;}
 
class StampsCollection
{
public:
  int n,C[60];
  vector<int> G[60];
  bool visited[60];
  int size,Q[60],A[60],F[60];
  void DFS(int v)
  {
    visited[v]=true;
    Q[++size]=v;
    for (int i=0;i<SIZE(G[v]);i++) if (!visited[G[v][i]]) DFS(G[v][i]);
  }
  int sell(int m, vector <string> demand, vector <int> price)
  {
    n=SIZE(demand);
    for (int i=0;i<n;i++) G[i].clear();
    for (int i=0;i<n;i++) for (int j=i+1;j<n;j++)
    {
      istringstream sin1(demand[i]);
      istringstream sin2(demand[j]);
      vector<int> D1,D2;
      for (int v1;sin1>>v1;D1.push_back(v1));
      for (int v2;sin2>>v2;D2.push_back(v2));
      bool fd=false;
      for (int u=0;u<SIZE(D1);u++) for (int v=0;v<SIZE(D2);v++) if (D1[u]==D2[v]) fd=true;
      if (fd) G[i].push_back(j),G[j].push_back(i);
    }
    for (int i=0;i<n;i++) C[i]=price[i];
    for (int i=0;i<n;i++) visited[i]=false;
    int result=0;
    for (int step=0;step<2;step++)
      for (int i=0;i<n;i++) if(!visited[i])
      {
        if (SIZE(G[i])==2 && step==0) continue;
        size=0;
        DFS(i);
        int nedge=0;
        for (int k=1;k<=size;k++) nedge+=SIZE(G[Q[k]]);
        nedge/=2;
        if (nedge==size)
        {
          int maxc=0;
          for (int d=0;d<size;d++)
          {
            for (int i=1;i<=size-1;i++) A[i]=C[Q[i]];
            for (int i=1;i<=size-1;i++)
            {
              int c1=((i-2>0)?F[i-2]:0)+A[i];
              int c2=(i-1>0)?F[i-1]:0;
              F[i]=max(c1,c2);
            }
            checkmax(maxc,F[size-1]);
            int tmp=Q[1];
            for (int i=1;i<=size-1;i++) Q[i]=Q[i+1];
            Q[size]=tmp;
          }
          result+=maxc;
        }
        else
        {
          for (int i=1;i<=size;i++) A[i]=C[Q[i]];
          for (int i=1;i<=size;i++)
          {
            int c1=((i-2>0)?F[i-2]:0)+A[i];
            int c2=(i-1>0)?F[i-1]:0;
            F[i]=max(c1,c2);
          }
          result+=F[size];
        }
      }
    return result;
  }
};

********************************************************************************
*******************************************************************************/