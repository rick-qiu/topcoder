/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8593
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

class PseudoRandomKingdom {
public:
    double probabilityOfHappiness(vector<string> g, int cost, int savings);
};

double PseudoRandomKingdom::probabilityOfHappiness(vector<string> g, int cost, int savings) {
    double ret;
    return ret;
}


int test0() {
    vector<string> g = {"1", "0 2 3", "1", "1"};
    int cost = 2;
    int savings = 0;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.037037037037037035;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> g = {"1", "0 2 3", "1", "1"};
    int cost = 2;
    int savings = 1;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14814814814814814;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> g = {"1", "0 2 3", "1", "1"};
    int cost = 2;
    int savings = 2;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4074074074074074;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> g = {"1", "0 2 3", "1", "1"};
    int cost = 2;
    int savings = 3;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7407407407407407;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> g = {"1", "0 2 3", "1", "1"};
    int cost = 2;
    int savings = 4;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> g = {"31", "45", "27", "27", "8 42 11 48 49 10", "13 45 30 25 9", "37", "46 37 29 20 28", "39 31 23 4 26", "5 12", "4", "4 47", "9", "5 19 15 34 39", "25 17 16", "13", "14", "14", "49", "21 13", "7", "19", "39", "44 8", "36", "37 5 14", "8", "38 39 35 2 3", "43 7", "7", "5", "0 8", "38", "38", "13", "27", "49 24", "6 25 7", "33 27 32", "22 8 27 13", "49", "49", "4", "28", "23", "1 5", "7", "11", "4", "41 4 36 40 18"};
    int cost = 10;
    int savings = 500;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 1.000000000000002;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> g = {"1 2", "0", "0 3", "2"};
    int cost = 1;
    int savings = 2;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.875;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> g = {"1 2 3 4 5 6", "0", "0", "0", "0", "0", "0"};
    int cost = 10;
    int savings = 19;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.903158288086044;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> g = {"1 2 3 4 5 6", "0", "0", "0", "0", "0", "0"};
    int cost = 10;
    int savings = 0;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 5.644739300537775E-7;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> g = {"1", "0"};
    int cost = 10;
    int savings = 500;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000000000000002;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> g = {"31", "45", "27", "27", "8 42 11 48 49 10", "13 45 30 25 9", "37", "46 37 29 20 28", "39 31 23 4 26", "5 12", "4", "4 47", "9", "5 19 15 34 39", "25 17 16", "13", "14", "14", "49", "21 13", "7", "19", "39", "44 8", "36", "37 5 14", "8", "38 39 35 2 3", "43 7", "7", "5", "0 8", "38", "38", "13", "27", "49 24", "6 25 7", "33 27 32", "22 8 27 13", "49", "49", "4", "28", "23", "1 5", "7", "11", "4", "41 4 36 40 18"};
    int cost = 6;
    int savings = 32;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.15511905535370404;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> g = {"9 6", "6 4", "8", "5", "7 1", "8 3", "1 0 8", "4", "2 5 6", "0"};
    int cost = 9;
    int savings = 26;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.350862063;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> g = {"1 2", "0", "0"};
    int cost = 1;
    int savings = 1;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.75;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> g = {"3", "3 4", "3", "0 2 1", "1"};
    int cost = 8;
    int savings = 23;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9974089315653102;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> g = {"4", "3", "3", "4 1 2", "3 0"};
    int cost = 8;
    int savings = 13;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4758420972412741;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> g = {"3 1", "0", "3", "2 0"};
    int cost = 4;
    int savings = 1;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03200000000000001;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> g = {"5", "2 7", "1 5", "5", "6", "3 6 0 2", "4 5", "1"};
    int cost = 9;
    int savings = 4;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 7.940000000000005E-5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> g = {"2", "2 3", "1 0", "1 4", "3"};
    int cost = 3;
    int savings = 0;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00390625;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> g = {"2", "2", "3 0 1", "2"};
    int cost = 4;
    int savings = 7;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8960000000000001;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> g = {"6 12 14", "15 14 9", "10 3", "2 4", "3", "7", "0", "5 15", "13", "1", "2 14", "15", "0", "15 8", "0 1 10", "11 13 7 1"};
    int cost = 10;
    int savings = 37;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.23691359392150005;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> g = {"4 5", "4", "4", "10 6", "2 11 1 0", "0", "3", "16", "12 14 18", "18", "3 16", "18 13 4", "8", "11", "15 8", "14", "10 7 18 17", "16", "16 8 11 9"};
    int cost = 4;
    int savings = 13;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1065974431109612;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> g = {"5 10 7", "9 5", "24", "16 10 21 13 8 26", "11 10", "0 1", "11", "0", "3 22", "1", "24 0 3 4", "6 4", "13 20 17", "12 19 3", "19 25", "26", "3", "12", "21", "14 13", "12", "3 18", "8", "26", "10 2", "14", "23 3 15"};
    int cost = 6;
    int savings = 34;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.855529389925186;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> g = {"15", "21", "21 26 9 23 19", "8", "13 25", "25", "12 17 16", "18", "3 9", "8 20 2", "24", "15", "6", "4", "26", "0 11 22", "6", "6 25 22", "25 7", "2", "9", "1 2 25", "17 15 24", "2", "22 10", "18 21 27 5 17 4", "2 14", "25"};
    int cost = 10;
    int savings = 2;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8064395201910164E-23;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> g = {"5", "22", "25", "12 23 14 20", "20", "24 7 0", "13", "10 20 18 25 5", "25", "22 12", "7", "24", "3 15 9", "23 6", "3", "12", "18", "25 19", "7 16", "17", "7 3 4", "23", "9 1", "3 21 13", "5 11", "7 8 17 2"};
    int cost = 10;
    int savings = 46;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.32054420172093584;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> g = {"3 2", "9 6 3", "0", "8 1 11 5 10 0 17", "5", "3 7 4", "1", "5 12", "13 3", "15 1 18", "3", "14 3", "7", "8 19", "11", "9 16", "15", "3", "9", "13"};
    int cost = 10;
    int savings = 107;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000000000000027;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> g = {"32", "15", "27 17", "12", "6", "27", "4 32", "25 19", "13 26 33", "12", "14", "24 23 28", "20 3 27 9", "8", "15 10 25", "1 14", "30", "2", "27", "7", "12", "26", "26", "11", "25 11", "7 24 27 14", "8 22 29 31 32 21", "25 2 18 12 5 32", "11 34", "26", "32 16", "26", "0 27 26 30 6", "8", "28"};
    int cost = 9;
    int savings = 61;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9889074735534966;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> g = {"9", "26", "17", "15", "12 10", "28", "18 24", "28", "18", "14 16 21 10 0 28", "27 9 20 4", "17", "4", "26", "9 24 25", "3 29", "9", "2 19 11", "6 8", "17 21", "10", "22 23 19 9", "21", "26 21", "6 14", "14", "13 23 1 29", "10", "7 9 5", "26 15"};
    int cost = 6;
    int savings = 14;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2748846754737186E-5;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> g = {"28", "43", "40 19", "15", "13 7 16", "37 34 13 42", "21 35 28", "8 4 25", "12 7", "38 27 22 31", "36", "30", "8", "19 4 5 27", "18 27", "3 24 34", "30 33 4", "33", "14", "13 2 43", "33", "6 34", "9", "27", "15", "7", "43", "14 13 23 9", "6 0", "34", "11 16", "39 9", "43", "17 20 16", "36 5 21 29 15", "6", "34 10 41", "5", "9", "31", "2", "36", "5", "19 1 32 26"};
    int cost = 9;
    int savings = 56;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7158453139321116;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> g = {"9 37", "8", "19 41", "27", "42", "13", "23 42", "41 8 45 36 38 14", "16 31 7 1", "0 34", "41 46 27", "47 22", "23", "5 35 30 44", "7 25", "34", "8", "23", "28", "2", "41", "41", "11", "6 12 17 36", "45", "14", "38", "10 3", "18 32", "34", "13", "8", "28 47", "45", "9 29 45 35 15", "43 13 34", "7 23 39", "0", "7 26", "36", "47", "20 10 21 2 7", "6 4", "35", "13", "24 7 34 33 47", "10", "32 40 45 11"};
    int cost = 8;
    int savings = 61;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9873800149619777;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> g = {"28", "42 34 28", "37 3 45 15 14", "2", "25", "29 28", "23", "24 31 33", "43 25", "33", "38", "12", "22 13 11", "12", "2", "2 19", "37", "45", "33 36", "15", "40 34", "25", "25 12", "6 34", "7", "4 21 22 28 26 8", "35 25", "39 45 30", "5 25 0 1 46 31", "5", "44 27", "45 28 7", "43", "9 7 18", "1 20 23", "26", "18", "16 2", "45 10", "27", "20", "45", "1", "32 8", "30", "17 31 27 2 41 38", "28"};
    int cost = 6;
    int savings = 18;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 1.761374850327121E-5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> g = {"31 15 9 6 26", "16 21", "25 38 14 5 15", "41 18", "37 9 16", "2", "0", "29 18 34", "19 27 11 42", "17 4 28 0", "11 26", "8 18 10 13", "24 17", "11", "2", "2 0", "4 1", "12 9", "11 32 7 3", "39 8 40 23 20", "19", "1", "29", "19", "12", "2", "33 10 0", "8 36", "9", "22 7", "41", "0", "18", "26 35", "7", "33", "27", "4", "2", "19", "19", "30 3", "8"};
    int cost = 1;
    int savings = 6;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.29870491065230453;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> g = {"38 4 11", "9 18 10", "35 38", "47 5", "30 0", "26 3", "28 41 19", "18", "20 11", "1 24", "1", "14 41 0 40 8", "15 17 21", "40", "11", "12", "43", "12", "26 1 7", "6 39", "27 8", "41 12", "34", "26", "9", "31", "31 18 38 5 23 43", "20 32", "6 29", "28", "4", "26 25", "27", "44 41 37 46", "22 44", "2", "46", "33 42", "0 26 2", "19", "13 11", "21 33 11 45 6", "37", "16 26", "34 33", "41", "36 33", "3"};
    int cost = 6;
    int savings = 54;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.995232469949987;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> g = {"32 36 20 4 23", "40", "12", "19 37 13 39", "0", "20 19 34 31", "29 9", "13", "15 40", "6", "34", "25", "2 19 22", "3 7 35", "27 28 34", "8", "24", "24 34", "27", "29 3 12 5 30", "5 0", "27", "12", "0", "26 16 17", "34 33 11", "24", "21 14 18", "14", "6 19", "19", "5", "0", "25", "5 14 10 38 25 40 17", "13", "0", "3", "34", "3", "34 1 8"};
    int cost = 8;
    int savings = 16;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 1.018864612564512E-8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> g = {"21", "6", "43", "37 4 45 14", "42 13 3 38", "19 6", "39 1 5", "21 19", "37", "15", "39", "19", "17 39", "4", "3", "26 9 31 30 29", "35 36", "22 12", "32 39", "5 11 7 33", "31", "44 7 0", "17", "37", "31", "36", "15", "32", "36", "15", "15", "24 42 40 20 39 15", "18 27", "19", "43", "16", "25 28 39 16", "8 23 3", "4", "12 6 36 31 41 18 10", "31", "39", "31 43 4", "34 2 42", "21", "3"};
    int cost = 7;
    int savings = 29;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0062769867361561205;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> g = {"32", "2 4", "1", "31 23", "38 5 1", "4", "32", "19 20", "32 9 22 10 25", "8", "8", "22", "25", "27", "20", "29 22", "25", "39 26 22", "34", "27 7 30", "37 7 14", "23 25", "17 15 27 11 8 28", "21 24 3", "23", "38 21 16 8 12", "17", "13 22 35 19 33", "36 22", "15", "34 19", "3", "6 0 8", "27", "30 18", "27", "28", "20", "4 25", "17"};
    int cost = 2;
    int savings = 14;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7291072192845174;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> g = {"31", "45", "27", "27", "8 42 11 48 49 10", "13 45 30 25 9", "37", "46 37 29 20 28", "39 31 23 4 26", "5 12", "4", "4 47", "9", "5 19 15 34 39", "25 17 16", "13", "14", "14", "49", "21 13", "7", "19", "39", "44 8", "36", "37 5 14", "8", "38 39 35 2 3", "43 7", "7", "5", "0 8", "38", "38", "13", "27", "49 24", "6 25 7", "33 27 32", "22 8 27 13", "49", "49", "4", "28", "23", "1 5", "7", "11", "4", "41 4 36 40 18"};
    int cost = 9;
    int savings = 100;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999496120053;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> g = {"35 26", "46", "4 6 32", "17 5", "22 38 28 2 26 40", "3", "36 2", "43", "18 35", "31", "22", "42", "35", "17", "48", "41 25", "40", "3 41 13 22", "8", "40", "31", "34 44", "33 31 10 4 17", "45", "27", "15", "4 0 27", "26 24 47", "4", "33", "31", "46 20 30 22 9", "49 2", "22 29", "21 38", "8 0 12", "6", "38", "37 45 34 4", "41", "42 4 19 16", "48 39 15 17", "11 40", "45 7", "21", "38 23 43", "1 31", "27", "14 41", "32"};
    int cost = 4;
    int savings = 16;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007523768395934399;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> g = {"4 44", "12 31", "22 40", "40 10 28", "30 36 0", "47 38 7", "21", "40 31 34 5", "28 20 26", "23", "3 17 32", "40", "18 1", "29", "43 29", "27", "38 39", "10", "12", "43", "8", "22 6", "21 2", "9 42 40 24", "23", "26", "8 25", "41 15", "8 41 3", "37 13 14", "4", "49 1 7 43", "10 33", "32", "7", "36", "45 40 35 4", "29", "5 16", "16", "7 3 36 2 23 11", "27 28", "23", "14 46 19 48 31", "0", "36", "43", "5", "43", "31"};
    int cost = 4;
    int savings = 11;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 2.407320619007641E-7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> g = {"43 21", "30", "33", "20", "5 7 37", "4", "14", "4", "12", "35 34", "45 13", "12", "30 8 11", "31 37 10 14 39", "18 13 6", "30", "34", "37", "14", "22", "32 3", "0", "24 19 37", "28", "22", "41", "36 37 48", "29", "23 37", "27 34", "37 1 12 15", "13", "36 20", "37 2", "9 44 46 16 38 29 47", "9", "26 32", "22 44 30 17 28 4 33 13 26", "34", "40 13", "39 41 42", "49 40 25", "40", "45 0", "37 34", "43 10", "34", "34", "26", "41"};
    int cost = 5;
    int savings = 16;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 5.9170376231294536E-5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> g = {"31", "48", "41", "11", "11", "23 31", "15", "20", "38 28", "35", "42 27", "3 4 26", "15", "33 44 48 29", "43 48 47", "42 6 12", "24", "48 34 25 22", "26 19", "18", "26 7 34", "33", "17 39", "5", "29 16", "17", "20 18 11 30", "10 46", "8 40", "13 24", "26", "5 45 0 37 47", "42", "21 13", "42 20 17", "40 9", "48", "31", "8", "22", "35 48 41 28", "40 49 2", "10 34 15 32", "14", "13", "31", "27", "31 14", "40 1 17 14 36 13", "41"};
    int cost = 10;
    int savings = 76;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9340459691369849;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> g = {"29", "3", "7 12", "1 48 31", "34 12 19", "15 44", "12 43", "13 47 2 14", "18 19", "11 24", "32", "9", "32 6 48 2 4", "36 7", "7", "5 37 34", "18", "41 48 26 49", "8 16", "22 4 8", "21 25", "20", "19 39", "43", "9 28", "48 35 20", "30 17", "42 38", "33 24", "33 0", "26", "3", "10 12", "36 29 28", "15 4", "25 40", "42 33 13", "15", "27", "22", "35", "17", "27 36", "6 23 45", "5", "43", "49", "7", "12 3 17 25", "46 17"};
    int cost = 6;
    int savings = 26;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9696260153906738E-4;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> g = {"46", "43", "42", "16 23 44 43", "5", "42 4 23 40 21 27", "45 41", "40", "19 15 26", "18 46 45", "14 42", "42", "29", "24", "10 17 36 47", "8", "34 3 28", "14", "32 9", "42 31 8", "31", "5", "28", "48 3 5", "40 13", "26", "25 8", "5 49", "22 16 37", "12 44", "47", "19 20", "18", "47", "16", "37", "14", "35 28", "44", "40", "24 39 5 7", "6", "19 2 10 11 5", "3 1", "38 29 45 3", "44 9 6", "9 0", "14 33 30", "23", "27"};
    int cost = 10;
    int savings = 500;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000000000000009;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> g = {"12 30 14 33 36", "23", "13", "41", "35", "33", "28", "20", "43 17 19", "20 28 23 41", "16 42 40", "16", "45 0", "24 2 41 31", "42 0 39 23 38", "38", "11 18 10", "8", "16", "8", "9 7 34", "37", "32", "1 9 14", "13", "29 35", "37", "33", "9 6", "42 25", "0", "13", "41 22", "44 5 0 27", "20", "4 25", "0 49", "26 42 21", "15 14", "14", "10", "32 13 3 9", "37 29 14 10 43", "42 48 8", "33", "12 46", "45", "48", "47 43", "36"};
    int cost = 10;
    int savings = 400;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000000000000002;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> g = {"20", "36 2", "29 1", "8", "7 46 45 26", "8", "44", "4", "22 9 11 5 12 41 3", "15 8 39", "12", "8", "10 29 21 8", "30 24", "32", "9", "29", "38 47 35 28", "37 44", "46", "0 48", "12 33", "23 48 43 8 25", "22", "13", "22", "48 4", "44", "17 41", "16 12 2", "32 13 43", "36", "30 14 49 44", "21 42", "37", "17", "31 1", "34 18", "17", "9", "45", "28 8", "33", "22 30", "6 32 18 27", "4 40", "4 19", "17", "26 22 20", "32"};
    int cost = 10;
    int savings = 200;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999994;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> g = {"1 10 47", "0 38", "27", "11", "36", "25 22 42", "47", "32", "34", "33", "0", "23 3 30", "37", "31 20", "47 15", "14", "48", "43 42", "27 39", "23", "35 13", "29 28 41", "31 5 40", "19 11 31", "32", "27 5 34", "27", "25 2 18 26", "21 47", "33 21", "11", "36 23 13 22 47", "47 7 24", "9 29", "45 8 25", "20", "31 4", "48 12", "1", "18", "22", "21", "46 48 5 17", "17", "46", "34", "42 44", "28 32 14 31 6 49 0", "37 42 16", "47"};
    int cost = 10;
    int savings = 100;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999113348743527;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> g = {"36", "16 47 14", "10 22", "12", "33", "38 47", "7", "36 6", "9 19", "8 41 12 13 39 47", "2 43 32 12 48", "22", "9 10 3 15 21", "9", "35 1", "37 49 46 12", "20 1 18", "26 38", "16 42", "8", "16", "12 25 24", "2 45 11", "44", "21 36", "21", "17", "44 34", "41 30", "41", "28", "33", "10", "47 4 31", "27", "14", "7 0 40 24", "15", "5 17", "9", "36", "9 28 29", "18", "10 44", "43 27 23", "22", "15", "33 9 1 5", "10", "15"};
    int cost = 10;
    int savings = 50;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03818091803605722;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> g = {"11", "24 22 32", "24", "49", "43 9 44", "10", "17 13", "15", "14", "4", "5 25", "48 38 20 0", "16 47", "43 6 33 35 39", "16 8", "24 47 7", "14 12 37", "6 49", "27", "31", "43 23 11", "43", "46 1", "20", "2 1 15", "27 45 31 41 10 47", "44", "18 25", "43 29", "28", "47 34", "19 25", "1", "13", "30", "13", "39", "16", "11", "13 36", "43", "25", "44", "13 40 21 28 45 4 20", "42 4 26", "25 43", "22", "12 25 30 15", "11", "3 17"};
    int cost = 10;
    int savings = 5;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4503965688237956E-34;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> g = {"1 3", "0 4", "3", "2 5 0", "1", "3"};
    int cost = 5;
    int savings = 14;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.854166666666667;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> g = {"1", "0"};
    int cost = 10;
    int savings = 0;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09090909090909091;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> g = {"3 6 4", "9", "7", "0", "0", "9", "7 0", "6 8 2", "9 7", "1 5 8"};
    int cost = 10;
    int savings = 36;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6459904271048571;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> g = {"2 7", "11", "0 12", "7 8", "11", "9", "8 13", "0 3", "6 3", "5 10", "11 9", "10 4 13 1", "2", "6 11"};
    int cost = 10;
    int savings = 72;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9521183569014126;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> g = {"9 5", "8", "4", "6", "7 2 5", "4 0", "7 3", "4 6", "1 12", "10 0", "9 12", "12", "11 8 10"};
    int cost = 10;
    int savings = 97;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999974554145;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> g = {"12 10", "3 13", "13", "1 11", "9", "9", "9", "12", "11", "6 5 4 12", "0 13", "8 3", "9 7 0", "10 1 2"};
    int cost = 10;
    int savings = 55;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7961934301173123;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> g = {"15 17", "7 8", "12 7", "17", "14 16", "11 9", "15 10", "1 2", "1 11", "5 13", "6 14", "5 8", "2 16", "9", "10 4", "6 0", "4 12", "3 0"};
    int cost = 10;
    int savings = 140;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999966908432488;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> g = {"20 9", "8", "11", "18 4", "11 3", "18 9", "20 19 12 17", "15", "15 1 16 14", "0 5", "11", "4 2 10", "16 6", "15", "8", "13 8 7", "12 8", "6", "3 5", "6", "0 6"};
    int cost = 10;
    int savings = 113;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9998514914954278;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> g = {"27 23 6 18", "27", "24 20", "10 7 18", "24 22 21 19", "13", "0", "3", "12 25", "25 26 15", "3 15", "17 13", "13 8", "12 5 11", "17", "16 10 9", "15", "11 14", "0 3", "4", "27 2", "28 4", "4", "0", "4 2", "8 9", "9", "1 0 20", "21"};
    int cost = 10;
    int savings = 25;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 1.599560968206486E-9;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> g = {"15", "12", "27", "19", "19", "14", "16 11 25", "8 10", "22 7", "19 15", "17 7", "6 12 21", "27 11 1", "22", "24 27 5", "9 0 20", "26 6", "10 23", "19", "9 4 18 3", "15 22", "11", "13 8 20", "26 17", "14", "6", "16 23", "12 14 2"};
    int cost = 10;
    int savings = 147;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999901276462249;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> g = {"30 3 12", "5 8", "27", "0 15", "18 26 24", "25 9 1", "27", "15 21", "1 19", "5", "11 13", "10 27", "0", "28 10", "20 25", "7 3", "28", "24 21", "4", "8", "23 14", "17 7", "29 28", "20 29", "17 4", "14 5", "4", "11 6 2 30", "16 13 22", "23 22", "0 27"};
    int cost = 10;
    int savings = 150;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9689601460813891;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> g = {"26 7 20", "17 32", "6 31", "15 6", "13 10", "23 25 29", "3 2", "21 0 16", "12 28", "28 19", "4 17", "32 30", "24 8", "18 14 4", "13 19", "3 22", "7", "10 1", "13", "14 9", "27 0", "24 7", "15 27", "5", "12 21", "5", "0", "22 20", "8 9", "31 5", "11", "2 29", "1 11"};
    int cost = 10;
    int savings = 180;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9903072202215846;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> g = {"7 13", "26 14", "13 23", "6 16", "28 21", "8 27", "21 3", "0 25", "5 29", "15 10", "9 22", "19 23", "18 32 16", "0 2", "30 1", "27 9", "12 3", "22 24", "12", "11", "26 31", "6 4", "10 17", "2 11", "17 30", "7 28", "1 20", "5 15", "25 4", "8 32", "24 14", "33 20", "29 12", "31"};
    int cost = 10;
    int savings = 200;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9884631784052113;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> g = {"12 1", "6 0", "27 21 34", "15 23 25", "9 19 8", "14", "1 26", "29 23", "17 4", "4", "34 20", "24 18 28", "0 31 15", "14 26", "13 5", "33 12 3", "34", "8", "30 11", "24 4", "10 30", "2", "34", "7 3", "19 11", "3", "13 6", "2 29", "11", "27 7 32", "20 18", "12", "29", "15", "10 22 16 2"};
    int cost = 10;
    int savings = 210;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999964834922;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> g = {"39", "25 21 19", "20 38 18 17", "33", "28 6", "23 9 14", "4 27 25 15", "28", "26 10", "12 5", "8 35", "29 41", "39 9", "35 22", "41 5 36", "6", "40", "2", "2", "1", "2 34 40", "33 1", "13 40", "5", "29", "37 6 1", "8 39", "6", "7 31 4", "24 11", "42", "28", "42", "3 42 21", "20", "13 10", "14", "25", "2 42", "0 26 12", "20 16 22", "14 11", "38 32 33 30 43", "42"};
    int cost = 10;
    int savings = 211;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999990635157994;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> g = {"32 22", "19", "24 7 36", "9", "13 19", "13", "12", "2", "19", "29 38 3", "11 16", "35 10", "37 16 6", "30 4 5", "33 37", "17 20", "10 12", "26 15", "29 35", "1 8 4", "15 25", "38 34", "0 26", "33", "2 32", "20 27", "17 22", "33 25", "34 30", "9 18", "28 13", "35", "24 0", "27 23 14", "28 21", "11 18 31", "2", "12 14", "21 9"};
    int cost = 10;
    int savings = 217;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9997062788058657;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> g = {"15 38", "9 30 28 29", "13 23", "16 5", "44", "26 3 38", "41", "8 39 42", "7", "22 25 1", "40", "35", "43 24", "24 2", "20", "18 0", "3 34", "41 31", "32 15", "28 21", "14 34 33", "19 33", "9", "35 2", "12 13", "27 9 39", "5", "25", "1 19", "1", "1", "35 17", "18 37", "20 21", "20 16", "23 11 31", "40", "32 44", "0 5", "25 7", "10 42 43 36", "17 6 45", "7 40", "12 40", "37 4", "41"};
    int cost = 10;
    int savings = 250;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999947023976061;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> g = {"30 43", "37 6", "24 43", "26 41", "27 22", "7", "45 1", "30 5 10", "34 16", "36 11", "7 38", "9 14 23 28", "33", "17 33", "32 11", "35", "8 21 20", "42 13", "40", "40 42", "16", "44 16", "38 4", "11", "2 31", "26", "25 3 44", "4 35", "11", "37 40", "7 0", "24 39", "14 33", "12 32 13", "45 8", "15 27", "9", "29 1", "10 22", "31 41", "29 19 18", "3 39", "17 19", "0 2", "21 26", "34 6"};
    int cost = 10;
    int savings = 280;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999990498907723;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> g = {"34 24", "27 24", "46 20", "21 17", "37 36", "19 45", "48 14", "16 18", "48 15", "44 37", "17", "31", "36", "25", "40 6", "8 35", "7 38", "3 10 31", "41 7", "5 43 41", "23 2", "28 3", "35", "47 20", "0 1", "32 13 36", "34", "1 30", "32 21", "32", "40 27", "17 34 11", "25 28 29", "45", "31 0 26", "15 22 45", "25 4 12", "4 9", "42 16", "42", "30 14", "18 19", "39 38", "19", "46 9", "33 5 35", "44 2", "23", "6 8"};
    int cost = 10;
    int savings = 280;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999952487079226;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> g = {"24 9 45", "21 17 3", "44 25 41", "28 1", "21 11", "24", "20 47", "13", "9", "0 8", "34 47", "30 4", "27 48 31", "7 14", "49 13", "32 46", "26 19 38", "1", "32 20", "16 28", "18 6", "1 4", "23 40", "22 26", "0 44 5", "35 2", "23 16", "12", "19 3", "40 39", "35 11", "12 42", "43 18 15", "46", "10 48", "25 30", "46 39", "49 42", "16", "36 29", "29 22", "2", "31 37", "32", "24 2", "0", "15 33 36", "6 10", "34 12", "14 37"};
    int cost = 10;
    int savings = 299;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999991370893375;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> g = {"1 6", "0 7", "5", "8 4", "9 3", "2 9", "0", "8 1", "7 3", "5 4"};
    int cost = 3;
    int savings = 5;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007293701171875;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> g = {"18 1", "4 0", "7 8", "5 17", "1 14", "3 12", "10 19", "2 9", "2 16", "14 7", "6 13", "18 12", "5 11", "15 10", "9 4", "13 16", "15 8", "3", "11 0", "6"};
    int cost = 10;
    int savings = 133;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9976930627444783;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> g = {"14 26", "8 2", "27 1", "18 24", "25 29", "25 15", "10 29", "17 11", "1 21", "26 13", "6 24", "7 22", "19 28", "21 9", "0 28", "5 23", "22", "27 7", "3 20", "12 23", "18", "13 8", "11 16", "15 19", "3 10", "5 4", "0 9", "17 2", "14 12", "4 6"};
    int cost = 10;
    int savings = 178;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.975612288786343;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> g = {"29 39", "5 11", "34 37", "27 35", "30 32", "13 1", "38 21", "14 33", "22", "23 18", "29", "23 1", "24 21", "28 5", "24 7", "36 31", "38 27", "22 19", "25 9", "17 34", "32 26", "6 12", "17 8", "11 9", "14 12", "18 33", "20 39", "16 3", "13 31", "0 10", "35 4", "28 15", "20 4", "25 7", "19 2", "30 3", "15 37", "36 2", "16 6", "0 26"};
    int cost = 10;
    int savings = 280;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999952487079227;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> g = {"46 27", "10 15", "11 26", "29 17", "44 38", "22 10", "16 25", "8 25", "7 17", "24 35", "1 5", "28 2", "28 21", "49 44", "30 49", "42 1", "6 31", "8 3", "33 47", "32 34", "43 27", "46 12", "37 5", "36 48", "9 39", "6 7", "2 38", "20 0", "12 11", "39 3", "14 41", "32 16", "19 31", "18", "19 42", "9", "23 47", "45 22", "4 26", "29 24", "48 41", "40 30", "15 34", "45 20", "13 4", "43 37", "0 21", "18 36", "23 40", "13 14"};
    int cost = 10;
    int savings = 350;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999994525618178;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> g = {"31", "11", "5", "11", "11", "2 20 15 28 10 26 42 34 25 44 41 31 43", "11", "11", "11", "11", "5", "48 1 6 35 30 33 4 21 15 14 8 24 7 17 40 36 9 3 13", "15", "11", "11", "37 49 11 12 32 45 16 5", "15", "11", "31", "31", "5", "11", "31", "31", "11", "5", "5", "31", "5", "31", "11", "5 47 23 22 29 27 18 39 0 19 46 38", "15", "11", "5", "11", "11", "15", "31", "31", "11", "5", "5", "5", "5", "15", "31", "31", "11", "15"};
    int cost = 10;
    int savings = 40;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8615890488707026;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> g = {"22", "9", "17 36 28 10 44 29 4 5 16 42 9", "9", "2", "2", "41", "22", "22", "32 22 1 3 45 2 30 12 24 14", "2", "41", "9", "42", "9", "41", "2", "2", "42", "42", "42", "41", "8 9 27 41 26 38 40 7 0 35", "41", "9", "42", "22", "22", "2", "2", "9", "42", "9", "42", "42", "22", "2", "42", "22", "41", "22", "48 11 43 46 6 21 15 23 22 39", "13 19 37 47 49 33 34 18 25 31 2 20", "41", "2", "9", "41", "42", "41", "42"};
    int cost = 10;
    int savings = 50;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9657157500797149;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> g = {"22", "9", "17 36 28 10 44 29 4 5 16 42 9", "9", "2", "2", "41", "22", "22", "32 22 1 3 45 2 30 12 24 14", "2", "41", "9", "42", "9", "41", "2", "2", "42", "42", "42", "41", "8 9 27 41 26 38 40 7 0 35", "41", "9", "42", "22", "22", "2", "2", "9", "42", "9", "42", "42", "22", "2", "42", "22", "41", "22", "48 11 43 46 6 21 15 23 22 39", "13 19 37 47 49 33 34 18 25 31 2 20", "41", "2", "9", "41", "42", "41", "42"};
    int cost = 10;
    int savings = 500;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000000000000002;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> g = {"46 27", "10 15", "11 26", "29 17", "44 38", "22 10", "16 25", "8 25", "7 17", "24 35", "1 5", "28 2", "28 21", "49 44", "30 49", "42 1", "6 31", "8 3", "33 47", "32 34", "43 27", "46 12", "37 5", "36 48", "9 39", "6 7", "2 38", "20 0", "12 11", "39 3", "14 41", "32 16", "19 31", "18", "19 42", "9", "23 47", "45 22", "4 26", "29 24", "48 41", "40 30", "15 34", "45 20", "13 4", "43 37", "0 21", "18 36", "23 40", "13 14"};
    int cost = 10;
    int savings = 500;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000000000000009;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> g = {"46 27", "10 15", "11 26", "29 17", "44 38", "22 10", "16 25", "8 25", "7 17", "24 35", "1 5", "28 2", "28 21", "49 44", "30 49", "42 1", "6 31", "8 3", "33 47", "32 34", "43 27", "46 12", "37 5", "36 48", "9 39", "6 7", "2 38", "20 0", "12 11", "39 3", "14 41", "32 16", "19 31", "18", "19 42", "9", "23 47", "45 22", "4 26", "29 24", "48 41", "40 30", "15 34", "45 20", "13 4", "43 37", "0 21", "18 36", "23 40", "13 14"};
    int cost = 10;
    int savings = 360;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.999999959677162;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> g = {"46 27", "10 15", "11 26", "29 17", "44 38", "22 10", "16 25", "8 25", "7 17", "24 35", "1 5", "28 2", "28 21", "49 44", "30 49", "42 1", "6 31", "8 3", "33 47", "32 34", "43 27", "46 12", "37 5", "36 48", "9 39", "6 7", "2 38", "20 0", "12 11", "39 3", "14 41", "32 16", "19 31", "18", "19 42", "9", "23 47", "45 22", "4 26", "29 24", "48 41", "40 30", "15 34", "45 20", "13 4", "43 37", "0 21", "18 36", "23 40", "13 14"};
    int cost = 10;
    int savings = 370;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999977864531;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> g = {"46 27", "10 15", "11 26", "29 17", "44 38", "22 10", "16 25", "8 25", "7 17", "24 35", "1 5", "28 2", "28 21", "49 44", "30 49", "42 1", "6 31", "8 3", "33 47", "32 34", "43 27", "46 12", "37 5", "36 48", "9 39", "6 7", "2 38", "20 0", "12 11", "39 3", "14 41", "32 16", "19 31", "18", "19 42", "9", "23 47", "45 22", "4 26", "29 24", "48 41", "40 30", "15 34", "45 20", "13 4", "43 37", "0 21", "18 36", "23 40", "13 14"};
    int cost = 10;
    int savings = 372;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999988068797;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> g = {"9 6", "6 4", "8", "5", "7 1", "8 3", "1 0 8", "4", "2 5 6", "0"};
    int cost = 9;
    int savings = 26;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.350862063;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> g = {"1", "0 2", "1 3", "2 4", "3 5", "4 6", "5 7", "6 8", "7 9", "8 10", "9 11", "10 12", "11 13", "12 14", "13 15", "14 16", "15 17", "16 18", "17 19", "18 20 21", "19", "19 22", "21 23", "22 24", "23 25", "24 26", "25 27", "26 28", "27 29", "28 30", "29 31", "30 32", "31 33", "32 34", "33 35", "34 36", "35 37", "36 38", "37 39", "38 40", "39 41", "40"};
    int cost = 10;
    int savings = 200;
    PseudoRandomKingdom* pObj = new PseudoRandomKingdom();
    clock_t start = clock();
    double result = pObj->probabilityOfHappiness(g, cost, savings);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5099354669569749;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=11128&pm=8593
********************************************************************************
#include <map> 
#include <set> 
#include <cmath> 
#include <queue> 
#include <vector> 
#include <string> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cassert> 
#include <numeric> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <ctime> 
using namespace std; 
 
typedef vector<string> vs; 
typedef vector<double> vd; 
 
#define For(i,a,b) for (int i(a),_b(b); i <= _b; ++i) 
#define Ford(i,a,b) for (int i(a),_b(b); i >= _b; --i) 
#define Rep(i,n) for (int i(0),_n(n); i < _n; ++i) 
#define Repd(i,n) for (int i((n)-1); i >= 0; --i) 
#define Fill(a,c) memset(&a, c, sizeof(a)) 
#define Mp(x, y) make_pair((x), (y)) 
#define All(v) (v).begin(), (v).end() 
 
template<typename T> inline int Size(const T& c) { return (int)c.size(); } 
 
int n, c, m; 
bool a[50][50] = {{false}}; 
 
vd solve(int x, int par) { 
  vd res(m+1, 0.0); 
  res[0] = 1; 
  Rep(i, n) { 
    if (!a[x][i] || i == par) 
      continue; 
    vd v = solve(i, x); 
    Ford(i, m, 0) { 
      double s = 0; 
      For(j, 0, c) 
        if (i-j >= 0) 
          s += v[i-j]/(c+1); 
      v[i] = s; 
    } 
    vd nres(m+1, 0.0); 
    For(p, 0, m) For(q, 0, m-p) 
      nres[max(p, q)] += res[p]*v[q]; 
    res = nres; 
  } 
  return res; 
} 
 
struct PseudoRandomKingdom { 
  double probabilityOfHappiness(vs g, int cost, int savings) { 
    n = Size(g); 
    c = cost; 
    m = savings; 
    Rep(i, n) { 
      istringstream iss(g[i]); 
      int j; 
      while (iss >> j)  
        a[i][j] = true; 
    } 
    vd v = solve(0, -1); 
    return accumulate(All(v), 0.0); 
  } 
};

********************************************************************************
*******************************************************************************/