/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3525
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

class ContractWork {
public:
    int minimumCost(vector<string> costs, int numTasks);
};

int ContractWork::minimumCost(vector<string> costs, int numTasks) {
    int ret;
    return ret;
}


int test0() {
    vector<string> costs = {"1 2 3", "4 5 6"};
    int numTasks = 3;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> costs = {"1 1 1 1", "1 1 1 1", "1 1 1 1"};
    int numTasks = 4;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> costs = {"12 14 4 11 0 35", "44 41 1 1 0 15", "35 1 35 55 1 13", "0 0 0 0 0 0"};
    int numTasks = 6;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> costs = {"100 100 1", "1 1 100", "1 1 1"};
    int numTasks = 3;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> costs = {"45 36", "79 34"};
    int numTasks = 2;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> costs = {"1 45 23 13 51 11 35 32 13 13 21 99 99 100", "1 5 3 13 56 11 35 32 13 13 21 99 99 100", "1 5 23 13 1 11 35 62 3 1 21 6 9 0", "1 5 23 13 51 11 35 32 13 13 21 9 99 100", "1 5 23 13 51 11 35 32 13 13 21 99 99 100", "1 5 23 13 51 11 35 32 13 13 21 99 99 100", "1 5 23 13 51 11 35 32 13 13 21 99 99 100", "14 54 43 43 1 11 3 32 13 13 21 99 99 100", "14 5 23 13 51 11 65 32 1 63 21 99 99 100", "1 5 23 13 51 11 35 32 13 13 21 99 99 100", "1 5 23 13 51 11 35 32 13 13 21 99 99 100", "1 5 23 13 51 11 35 32 13 13 21 99 99 100", "1 5 23 13 51 11 35 32 13 13 21 99 99 100", "1 5 23 13 51 11 35 32 13 13 21 99 99 100", "1 5 23 13 51 11 35 32 13 13 21 99 99 100", "1 5 23 13 51 11 35 32 13 13 21 99 99 100", "1 5 23 13 51 11 35 32 13 13 21 99 99 100", "1 5 23 13 51 11 35 32 13 13 21 99 99 100", "1 5 23 13 51 11 3 32 13 13 21 9 9 100", "1 5 23 4 51 11 35 32 13 13 21 99 99 100"};
    int numTasks = 14;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> costs = {"44 92 2 78 13", "36 47 76 41 71", "59 27 59 35 16", "40 63 7 72 76", "49 80 45 67 33"};
    int numTasks = 5;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> costs = {"1 1 1", "10 10 100", "10 10 100"};
    int numTasks = 3;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> costs = {"1 1 1 1 1 1 1 1 1 1 1 1", "10 10 100 10 10 100 10 10 100 10 10 100"};
    int numTasks = 12;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> costs = {"1 1 1 1 1 1 1 1 1 1 1 1", "10 10 10 100 10 10 10 100 10 10 10 100"};
    int numTasks = 12;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> costs = {"1 16 38 63 16", "59 89 20 74 82", "47 65 77 1 35", "13 17 18 77 64", "78 4 94 32 16", "27 92 15 70 7", "29 71 24 68 35", "40 27 25 61 2", "7 9 68 85 11", "3 98 29 21 75", "93 0 79 87 32", "95 15 24 11 85", "32 41 57 57 9", "92 98 37 17 59", "40 25 69 8 10", "80 11 8 9 33", "84 3 33 64 90", "66 60 5 91 72", "91 24 13 48 81", "23 40 79 61 58", "39 1 83 8 10", "93 89 22 2 98", "56 86 1 89 51", "92 56 11 98 47", "83 89 72 97 37", "53 21 78 33 82", "36 72 84 20 80", "95 14 69 17 16", "68 73 3 70 63", "55 63 20 66 61", "68 50 51 40 47", "89 93 68 68 26", "51 5 99 36 25", "79 31 39 49 48", "56 18 22 60 89", "86 15 52 6 82", "14 74 32 66 14", "80 55 8 49 23", "35 0 29 34 36", "54 14 68 94 64", "16 51 82 39 11", "71 25 27 24 31", "9 38 5 41 4", "20 22 60 28 71", "84 63 72 13 98", "9 68 12 77 63", "76 94 14 59 33", "25 31 59 52 55", "90 62 94 96 3", "99 17 26 60 45"};
    int numTasks = 5;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> costs = {"21 42 52 72 23 52 82 15 41 9 98 83 95 2 51", "19 10 27 65 42 90 97 72 17 84 24 25 65 67 44", "44 88 87 96 60 10 49 43 26 90 53 24 73 48 26", "25 68 37 52 33 80 42 30 52 60 15 77 86 80 44", "30 25 32 17 22 93 28 71 36 54 61 90 78 35 39", "5 60 7 43 12 41 23 54 72 75 15 87 52 1 68", "97 32 93 29 49 15 22 78 86 59 32 48 50 11 83", "89 17 43 97 60 55 38 83 10 10 59 25 98 12 26", "66 9 58 59 39 8 74 62 87 61 22 20 9 72 31", "92 62 49 35 59 9 91 97 93 1 8 53 27 6 65", "54 72 75 13 31 14 21 6 76 9 67 98 29 76 70", "61 68 33 10 4 92 20 95 90 13 97 98 67 24 4", "32 79 77 7 92 9 21 14 15 97 23 83 96 52 60", "66 14 29 99 24 33 92 45 29 82 59 27 81 26 52", "86 58 31 63 66 23 73 88 37 88 85 60 72 81 13"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> costs = {"3 5 0 78 4 80 23 88 98 88 28 66 69 22 23", "85 9 98 52 25 78 0 90 41 91 55 66 59 71 28", "26 75 33 27 53 38 8 77 27 6 66 56 73 35 79", "96 21 88 95 74 14 73 75 5 14 66 60 80 26 31", "9 53 7 43 80 60 81 88 38 9 95 5 65 69 40", "45 66 62 33 61 36 47 34 11 52 48 78 13 29 5", "45 38 58 52 81 39 13 63 28 52 73 24 57 39 93", "98 84 59 60 17 20 97 65 54 9 18 3 88 32 33", "93 77 71 52 30 53 91 43 17 20 95 91 44 52 30", "38 50 14 97 11 32 18 8 98 73 18 16 76 6 48", "10 0 26 81 52 56 35 44 0 53 64 95 44 9 48", "74 47 99 89 44 11 22 63 19 20 36 38 37 13 44", "86 23 44 12 5 97 69 41 41 69 94 5 65 38 14", "14 13 62 14 3 6 25 25 70 45 45 6 83 83 20", "28 69 43 73 82 49 70 52 90 11 22 84 17 88 23"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> costs = {"6 73 36 0 16 44 81 8 40 66 98 6 61 31 55", "50 40 53 8 15 29 89 66 20 23 11 6 19 65 87", "69 71 60 6 72 76 50 54 84 90 20 83 96 82 14", "52 33 55 5 41 70 35 30 37 55 54 49 62 74 14", "49 44 86 9 50 58 86 0 13 71 90 33 54 87 16", "68 40 49 24 45 90 95 80 21 32 36 75 81 99 49", "96 48 93 83 58 43 42 44 44 55 15 35 89 70 22", "5 39 63 54 63 8 45 58 89 66 91 26 41 73 25", "90 69 74 84 53 32 27 95 77 72 50 93 7 40 63", "30 45 2 93 0 66 2 45 24 91 11 16 17 53 89", "43 44 59 17 28 12 50 56 7 27 28 58 21 35 98", "84 65 44 87 58 44 53 60 89 78 52 1 94 70 54", "83 13 98 42 31 26 55 81 82 62 9 10 21 30 46", "19 15 11 63 2 70 8 56 30 97 35 82 98 30 52", "52 14 66 51 57 97 77 12 78 60 75 88 71 96 18"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> costs = {"85 68 99 34 36 8 14 11 6 67 9 50 92 42 44", "51 7 19 89 58 16 3 8 15 98 35 7 53 74 12", "57 60 81 56 95 17 65 9 29 72 77 39 22 69 81", "67 21 89 87 10 48 3 14 57 18 12 92 25 65 67", "38 23 28 19 80 24 37 46 33 66 18 11 5 41 80", "87 9 2 77 96 13 25 99 27 83 18 39 76 44 5", "44 82 28 72 1 9 96 39 56 30 6 75 41 12 16", "22 99 26 25 77 22 38 3 22 65 86 40 4 62 84", "10 7 67 39 79 69 48 76 8 5 7 14 80 49 26", "97 72 26 23 97 3 45 35 7 68 0 93 8 5 56", "93 15 63 60 55 43 29 4 20 37 9 27 52 89 77", "78 86 49 5 10 46 9 56 81 16 24 82 9 33 88", "66 26 4 29 86 59 73 16 63 93 54 72 21 6 62", "98 85 49 48 90 59 94 99 15 76 16 39 59 25 72", "47 92 99 51 22 86 10 95 2 74 89 56 46 10 63"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> costs = {"68 31 47 91 69 37 56 85 14 47 90 84 67 14 17", "69 57 42 77 93 5 8 79 90 57 68 50 0 32 48", "92 1 80 40 92 50 78 48 35 92 95 26 77 63 41", "95 32 98 37 10 92 42 18 72 32 75 41 82 76 73", "31 68 74 12 9 66 62 87 14 98 80 10 25 57 74", "66 52 6 65 90 16 58 32 35 30 64 11 71 47 87", "44 79 55 18 92 64 85 55 52 0 53 32 10 79 90", "84 46 42 91 11 33 8 69 65 43 0 30 54 71 78", "42 16 58 97 35 50 62 20 6 15 20 60 47 31 39", "37 16 85 80 7 97 13 15 67 78 59 67 9 13 38", "87 55 55 46 53 90 96 16 10 3 31 30 63 79 61", "2 16 77 88 96 85 85 10 0 52 89 59 19 98 73", "58 86 29 13 32 83 3 29 99 14 32 31 44 95 10", "6 98 27 84 86 24 69 72 34 70 24 24 30 44 23", "3 3 9 33 16 42 16 20 72 16 34 5 47 79 1"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> costs = {"0 5 34 73 97 61 94 52 58 67 15 5 60 98 45", "13 29 28 29 63 42 48 5 4 3 64 45 57 21 64", "43 21 69 77 94 67 39 89 19 98 56 34 3 16 33", "49 30 62 77 59 26 20 8 32 25 11 96 70 69 17", "34 13 39 4 90 34 71 30 23 91 28 80 26 32 97"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 217;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> costs = {"52 84 58 21 55 71 0 66 87 36 29 83 73 71 84", "8 34 50 1 41 96 77 41 76 77 87 41 84 53 56", "9 6 40 68 27 96 40 28 62 27 65 91 11 38 63", "95 46 98 46 48 40 42 25 81 18 3 68 59 88 22", "16 97 28 56 66 56 53 6 85 15 34 50 7 45 88"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 304;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> costs = {"10 46 60 41 89 41 60 10 41 20 87 44 23 72 75", "66 64 12 93 51 16 29 42 45 54 63 98 27 43 66", "21 53 13 82 94 2 24 55 13 66 75 0 10 98 73", "85 64 38 98 58 89 14 87 32 59 41 96 57 68 39", "24 90 92 38 73 87 41 97 42 54 63 18 55 73 16"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 326;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> costs = {"63 14 96 14 1 55 69 30 83 49 8 34 67 82 8", "83 47 19 0 43 19 70 20 76 39 73 90 40 90 78", "69 54 93 66 68 94 22 38 24 6 87 33 41 54 15", "49 37 62 68 38 6 88 8 26 64 48 99 55 89 90", "33 58 44 26 25 13 21 47 51 45 53 38 79 95 93", "94 44 31 57 13 70 63 1 79 90 66 27 90 21 16", "81 55 75 26 82 0 39 3 47 91 49 1 30 28 96", "23 23 41 55 80 54 25 44 56 4 34 23 31 25 44", "48 6 0 23 32 82 23 72 86 71 63 36 73 93 64", "70 17 87 12 72 68 67 97 12 24 1 46 47 32 72", "92 81 78 92 4 11 75 28 83 62 0 46 98 74 39", "62 45 56 50 57 28 18 25 26 30 49 27 77 96 60", "49 88 41 28 81 46 39 57 75 22 19 75 68 17 50", "8 80 95 65 30 53 94 49 78 20 80 27 47 57 24", "8 7 13 50 35 94 96 74 51 71 96 71 47 65 89", "97 74 69 93 39 0 46 33 49 25 54 30 52 2 87", "76 10 94 90 60 29 84 57 4 36 29 0 8 76 66", "97 74 40 66 67 80 67 14 13 17 39 68 47 92 70", "34 69 80 29 59 41 58 43 98 62 80 27 63 88 4", "30 85 78 70 52 46 50 19 60 64 36 0 32 83 92", "2 18 61 83 47 20 24 6 64 23 69 44 51 32 33", "55 62 19 34 33 71 80 84 90 41 48 27 41 81 10", "33 84 28 95 67 75 15 92 81 79 15 51 24 67 83", "58 22 46 77 57 80 48 38 64 39 79 13 66 21 94", "76 55 79 5 50 46 81 66 38 63 46 54 14 70 21", "98 29 44 45 6 1 25 55 39 89 94 19 3 60 40", "97 37 96 76 43 46 23 24 12 62 87 59 17 2 29", "39 0 58 83 45 65 85 71 20 25 60 14 45 64 75", "86 61 13 82 38 56 29 62 81 42 25 68 1 42 71", "31 81 71 90 65 17 55 51 88 75 77 49 90 22 13", "65 9 75 79 91 14 35 21 77 16 63 2 85 64 44", "57 95 26 28 85 92 46 41 44 35 16 21 84 7 44", "98 73 53 74 52 44 89 88 66 66 5 29 68 91 93", "13 48 89 40 77 75 32 23 16 76 58 33 98 43 41", "42 42 14 95 16 67 40 6 55 6 72 60 36 41 52", "30 55 0 19 95 77 95 28 1 12 5 59 46 3 3", "87 46 46 2 42 63 69 82 69 25 89 42 85 25 83", "38 55 39 38 75 35 15 70 63 16 83 69 76 29 73", "80 17 19 26 19 62 89 89 44 59 14 34 1 0 60", "85 38 15 24 76 91 59 92 62 23 9 45 92 85 75", "66 66 92 85 93 12 47 83 1 92 42 15 27 43 15", "87 28 53 3 53 29 94 12 21 57 35 30 2 28 16", "78 94 83 70 80 76 82 27 59 83 20 1 98 48 45", "13 35 74 67 39 27 96 34 39 18 91 75 49 94 3", "66 72 97 49 42 77 26 25 5 85 9 26 87 7 74", "32 21 10 6 88 49 34 85 83 73 4 75 49 54 69", "52 21 41 50 70 84 27 96 10 33 82 19 59 69 26", "34 2 48 44 8 37 94 43 23 78 17 28 53 66 82", "23 19 3 65 69 74 49 96 71 59 30 54 78 89 23", "5 23 25 54 68 34 92 62 78 15 41 95 43 94 61"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> costs = {"58 58 91 90 32 3 69 61 33 51 75 25 89 75 42", "10 24 94 98 84 49 67 35 93 52 85 67 92 7 42", "27 65 0 19 55 33 22 25 94 55 76 69 81 66 45", "24 76 69 19 74 54 68 42 89 62 94 75 30 86 82", "72 14 48 73 33 4 6 56 29 1 11 6 71 93 72", "16 18 49 85 37 24 40 6 66 29 68 61 5 98 47", "88 70 62 36 44 96 41 50 52 71 52 64 77 23 58", "50 39 76 0 25 14 24 65 20 90 95 88 52 0 86", "99 89 57 62 25 2 58 66 53 11 38 5 75 15 28", "33 66 67 9 67 93 23 91 58 43 82 54 32 34 55", "19 34 44 76 97 70 78 55 37 31 67 75 36 42 91", "65 75 58 33 85 25 26 9 17 85 53 99 39 85 34", "95 5 68 39 81 66 9 60 21 47 92 89 22 29 31", "13 94 7 71 27 92 97 54 2 14 39 55 14 79 41", "48 74 46 17 14 28 83 24 89 5 71 81 94 93 10", "25 7 5 32 79 33 25 76 87 28 91 27 84 5 7", "25 53 82 72 70 96 1 54 21 90 59 92 72 53 86", "83 79 94 89 12 74 22 37 50 10 66 42 37 50 47", "45 76 0 27 49 71 24 50 25 45 41 84 38 14 38", "25 97 17 19 86 30 93 9 67 44 19 34 86 57 84", "34 3 60 34 30 9 6 55 60 31 0 1 16 39 15", "55 64 13 73 84 0 3 78 9 71 23 29 5 10 87", "89 44 90 49 79 21 59 85 76 19 17 77 20 34 16", "36 90 81 50 63 66 50 66 44 60 37 68 90 42 78", "77 32 23 68 82 3 89 41 89 65 60 7 42 81 41", "59 18 31 41 68 95 7 19 61 51 79 99 20 70 42", "99 48 74 22 16 56 25 5 98 14 71 58 21 14 40", "63 73 58 95 14 26 90 22 45 52 74 25 51 94 96", "93 93 44 67 16 60 24 41 66 23 56 37 81 78 51", "22 41 25 80 36 40 7 27 62 52 79 36 78 30 31", "74 23 24 19 91 40 79 16 82 45 39 39 83 21 17", "35 43 58 61 24 95 2 31 22 65 84 2 1 63 32", "33 37 56 58 56 48 98 36 65 81 82 5 20 66 26", "37 1 70 96 63 95 92 65 26 14 30 11 17 32 74", "49 65 12 6 23 69 55 22 5 20 4 88 25 24 54", "52 62 55 23 58 18 18 50 84 45 65 14 56 82 46", "30 32 12 42 39 35 11 94 58 17 14 62 5 40 86", "60 92 49 15 15 8 34 34 59 19 79 25 33 35 7", "79 66 40 91 8 79 27 20 73 85 38 88 47 44 28", "34 4 20 83 20 36 92 55 70 51 74 50 76 7 85", "84 87 51 24 79 60 4 6 81 78 92 19 66 40 64", "95 74 68 16 58 89 52 50 44 23 1 18 73 78 26", "59 62 13 10 87 93 71 92 0 52 70 92 72 37 32", "37 33 7 5 49 65 94 1 16 38 25 18 57 98 96", "83 57 59 96 68 47 90 39 39 90 92 10 82 65 48", "15 2 81 22 8 30 88 2 32 4 41 58 23 99 56", "19 82 14 79 79 83 26 69 22 66 59 15 77 42 81", "26 57 83 7 80 92 38 68 95 71 73 36 29 96 36", "86 16 18 0 95 98 83 22 68 6 89 27 22 66 70", "3 92 28 87 0 8 79 39 77 74 10 51 11 40 48"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> costs = {"41 21 40 46 64 32 60 85 41 30 6 60 13 46 65", "27 24 66 36 69 89 22 55 19 10 18 11 88 13 79", "61 54 1 2 1 65 34 62 51 76 92 57 36 6 4", "2 33 28 69 70 97 58 92 52 77 3 71 88 91 84", "68 53 38 69 55 40 35 90 2 86 66 95 44 3 1", "48 5 35 76 75 6 74 34 98 27 11 1 98 0 93", "82 69 47 21 38 2 61 73 93 63 59 59 58 4 62", "60 52 68 96 29 44 3 3 78 1 30 90 3 28 91", "97 11 60 44 32 98 47 94 72 40 58 32 99 17 36", "62 78 88 31 74 18 76 77 21 54 79 52 45 83 80", "36 80 92 96 24 25 95 71 19 68 11 77 0 11 94", "37 74 72 26 6 47 44 82 25 65 37 4 17 82 88", "98 19 68 91 16 92 16 12 64 35 80 76 13 81 88", "8 18 62 80 44 69 28 88 52 53 54 90 58 72 72", "46 71 92 15 62 8 7 78 20 72 14 0 48 27 82", "36 35 0 99 16 45 69 45 34 21 99 88 11 58 61", "84 5 32 76 20 94 84 28 73 5 0 87 6 48 15", "88 84 51 88 84 68 33 53 14 68 75 13 56 86 71", "17 71 77 50 47 97 45 32 25 18 38 25 6 44 74", "22 32 59 73 21 43 42 55 97 56 23 72 69 79 59", "41 97 30 18 48 77 16 93 10 42 12 48 68 18 92", "42 41 25 1 14 46 45 57 1 43 13 24 15 83 4", "75 25 2 5 44 50 83 60 44 93 2 56 42 70 75", "35 13 16 60 15 31 6 61 89 7 4 3 32 20 86", "37 95 12 39 0 56 90 83 17 35 77 19 92 20 90", "68 55 3 84 15 18 16 21 79 6 29 84 9 62 4", "96 99 0 8 39 0 65 29 84 82 64 62 2 57 82", "93 25 37 96 10 53 15 26 75 95 33 4 80 42 67", "85 38 66 85 47 6 86 13 35 71 96 0 33 98 57", "16 91 83 54 88 93 7 4 20 82 0 53 87 80 96", "55 66 34 22 51 82 28 37 95 64 9 92 64 43 90", "22 59 82 6 14 71 99 22 76 19 5 76 73 92 57", "69 48 23 4 70 75 86 98 12 82 62 21 74 27 64", "65 50 24 48 56 38 19 56 61 95 75 66 72 48 59", "29 18 7 53 22 77 28 9 76 41 91 39 63 66 66", "28 32 17 53 80 74 92 99 30 53 95 6 19 67 54", "78 97 73 85 51 95 63 79 4 39 21 96 78 85 63", "45 13 95 62 66 76 36 58 76 66 11 71 72 30 39", "27 9 36 0 94 87 96 57 67 0 96 89 97 75 74", "60 20 87 56 82 54 32 19 12 8 86 24 79 58 55", "18 86 64 55 87 58 43 84 16 10 84 13 99 81 88", "73 42 8 61 98 91 15 30 10 28 38 96 52 18 55", "7 37 42 71 92 30 30 35 14 46 46 98 60 45 80", "48 19 22 56 81 21 47 96 51 58 25 90 54 77 9", "10 85 46 52 56 39 82 87 74 96 34 21 95 94 67", "75 42 86 98 99 68 19 47 65 71 5 90 62 60 67", "71 70 52 18 22 9 57 4 96 32 0 31 53 95 25", "21 71 68 8 70 67 76 90 15 41 62 20 31 24 80", "98 96 50 51 14 73 60 72 77 57 5 78 89 59 74", "14 80 46 83 88 16 51 64 6 66 5 68 87 37 93"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> costs = {"56 58 83 12 28 18 79 68 88 90 68 70 34 62 3", "73 59 9 86 28 81 16 67 50 7 89 31 90 81 85", "10 38 43 93 50 71 12 30 40 0 20 8 70 54 71", "74 28 30 83 14 59 65 30 26 15 38 16 47 28 98", "32 39 36 76 32 86 48 44 17 88 45 37 97 15 92", "68 90 20 99 73 35 58 39 66 85 55 4 1 2 33", "99 35 72 36 11 5 23 59 49 40 48 95 77 45 10", "70 13 0 90 13 74 26 71 14 92 56 69 97 58 72", "31 58 7 4 94 19 9 17 79 59 57 27 54 35 73", "65 5 87 66 96 0 40 22 71 54 15 28 24 13 87", "96 44 45 3 48 39 23 58 56 2 17 14 30 72 49", "3 37 54 90 3 51 90 44 74 62 99 89 91 23 3", "78 19 48 23 23 97 63 47 55 19 49 73 34 80 45", "83 83 83 38 74 86 89 65 31 64 28 30 53 19 53", "57 98 73 5 22 97 2 85 44 58 5 94 31 39 74", "77 23 57 60 61 32 47 51 97 78 15 25 8 69 45", "62 26 43 35 32 66 32 34 51 77 92 57 71 24 96", "45 1 20 3 61 81 35 8 33 32 87 49 58 95 19", "3 57 46 47 93 78 14 26 13 65 3 6 23 74 30", "19 19 32 40 22 94 22 58 3 55 90 90 5 49 85", "24 53 43 70 0 36 49 14 62 62 80 65 69 3 39", "0 23 59 32 63 82 26 86 40 30 41 31 20 47 80", "6 71 33 49 42 34 85 91 49 48 53 30 13 23 34", "53 23 58 13 55 22 96 82 8 36 13 50 67 33 97", "48 39 68 82 89 10 16 75 2 66 23 56 96 37 79", "30 91 2 88 4 58 11 0 41 19 37 54 69 5 88", "66 53 27 35 35 17 46 52 92 48 18 15 4 15 53", "83 46 44 86 34 49 45 46 50 86 65 87 41 34 93", "29 1 47 57 37 82 74 83 35 67 32 54 83 37 69", "36 21 15 81 7 50 30 52 96 80 39 61 68 80 96", "62 10 98 9 68 35 92 42 19 27 9 51 81 92 88", "51 29 10 66 10 17 16 41 70 13 22 10 74 90 91", "71 53 1 70 62 69 5 54 12 25 82 22 76 63 15", "65 14 44 75 81 55 93 98 96 64 11 18 74 86 9", "65 58 62 67 28 24 37 33 78 49 58 60 71 35 24", "87 1 39 31 77 21 87 70 19 83 34 30 1 9 17", "10 74 75 72 42 3 97 79 37 76 28 96 37 0 31", "61 87 33 1 19 10 22 6 81 42 89 16 73 91 25", "90 2 0 65 74 42 68 72 22 6 48 50 2 85 51", "33 47 39 67 49 58 78 72 65 59 14 55 76 87 47", "2 77 49 2 43 24 45 11 96 67 17 44 18 20 30", "70 53 77 9 21 27 68 99 99 33 58 13 89 35 0", "36 37 78 85 39 21 9 85 33 6 53 51 51 71 71", "81 42 25 59 51 46 86 19 45 85 53 4 99 42 39", "0 79 76 78 64 16 0 74 2 33 80 55 84 32 27", "56 13 69 81 73 20 28 60 40 73 46 93 78 45 36", "17 45 15 94 24 80 11 24 54 13 58 35 68 43 68", "96 99 81 65 81 55 86 9 15 26 83 61 20 61 7", "56 79 53 71 74 78 52 85 2 7 98 61 43 67 4", "11 63 4 92 28 85 48 15 95 63 42 78 25 62 40"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> costs = {"45 66 99 66 33 54 24 17 10 76 39 26 17 76 35", "35 58 41 62 84 91 86 64 17 64 44 44 72 35 76", "67 80 43 66 47 77 21 71 94 32 48 33 59 66 10", "95 1 69 36 63 54 28 50 18 46 14 62 90 86 98", "67 54 79 11 21 27 88 42 98 82 75 47 16 35 13", "27 30 15 96 67 78 51 96 29 69 42 43 32 33 29", "31 0 84 10 11 5 38 99 47 36 82 23 84 99 58", "97 26 89 12 23 56 91 74 52 21 44 95 64 76 28", "94 8 28 78 18 40 83 56 39 31 93 22 54 78 21", "13 75 47 2 88 71 58 80 45 11 1 90 7 66 67", "35 60 75 64 38 94 5 22 51 45 53 45 67 8 23", "88 21 99 36 24 88 7 82 69 53 94 70 43 2 37", "11 37 97 86 2 36 80 7 59 31 53 13 77 20 21", "0 9 43 99 45 67 87 53 50 56 7 45 27 51 47", "65 62 85 62 48 87 99 29 95 58 61 48 71 38 69", "93 38 78 37 38 24 4 25 78 55 82 85 0 10 36", "47 75 98 32 38 46 20 38 76 16 97 37 65 69 75", "34 62 13 13 99 52 37 4 78 16 59 60 1 59 71", "37 7 47 35 39 86 82 59 24 58 76 21 95 41 90", "71 76 53 85 89 53 37 27 57 15 43 17 76 44 77", "48 82 84 95 18 23 81 0 83 6 59 59 28 55 0", "19 26 77 72 12 66 26 49 93 84 65 37 1 41 82", "78 89 64 62 85 83 86 67 83 69 73 43 29 1 99", "30 20 26 7 93 38 73 19 88 67 3 53 5 5 95", "87 83 85 52 46 70 35 32 37 19 1 11 62 30 13", "62 61 34 88 68 27 27 41 47 15 9 50 69 14 55", "64 1 39 49 53 85 20 89 18 58 8 20 69 70 51", "83 33 12 17 21 80 44 48 22 91 64 31 42 33 45", "98 97 47 38 47 1 24 67 90 42 26 98 62 96 69", "13 79 2 25 96 24 6 41 72 28 33 36 59 75 69", "5 74 67 53 12 14 54 36 82 45 78 8 44 41 5", "13 55 84 16 80 81 40 87 23 13 15 56 50 74 32", "19 80 6 87 33 19 2 88 55 84 33 34 93 78 76", "98 92 31 83 8 12 64 49 99 87 62 14 44 12 89", "76 32 69 83 20 3 2 22 91 57 7 25 92 0 3", "68 99 95 99 83 4 11 47 53 11 35 16 25 79 29", "14 56 61 84 39 81 87 41 4 78 99 11 4 91 12", "7 59 12 2 58 95 6 70 43 60 81 78 76 7 58", "5 22 15 67 6 54 49 94 96 53 73 95 64 77 86", "77 84 45 89 87 4 84 94 75 27 54 57 6 31 64", "65 36 87 81 3 94 35 52 88 31 6 61 27 71 38", "13 48 23 59 37 11 64 22 5 39 50 60 97 57 91", "62 23 27 49 4 31 43 39 84 32 71 90 93 98 61", "32 12 9 56 71 47 67 35 70 73 75 20 33 73 78", "25 35 1 52 85 5 84 29 45 68 61 17 58 55 15", "20 88 28 30 44 0 77 12 36 48 85 11 69 19 85", "47 44 20 48 97 6 54 82 35 99 50 97 16 9 52", "32 29 41 61 60 85 61 37 98 97 86 84 9 55 3", "94 2 48 14 51 46 21 6 28 56 5 78 53 22 88", "6 55 18 47 16 78 33 77 16 31 74 2 15 83 57"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> costs = {"82 36 3 96 34 35 65 60 18 53 53 19 69 54 73", "74 31 37 51 77 0 92 68 23 58 64 58 65 25 47", "90 7 84 94 4 18 30 70 78 48 23 32 68 93 87", "41 68 18 79 20 96 79 12 65 3 70 29 61 35 54", "9 26 62 93 21 66 11 51 37 90 0 61 22 68 54", "9 10 22 28 89 42 25 68 55 90 71 26 19 33 62", "73 42 89 35 35 10 2 47 61 39 38 62 0 60 30", "55 70 41 78 99 30 21 24 98 77 14 70 3 33 3", "65 7 46 55 43 82 65 45 30 27 85 68 89 86 29", "20 42 0 61 20 99 91 42 23 90 19 38 61 23 72", "65 89 79 12 44 22 94 10 68 24 37 54 92 27 41", "21 47 83 22 9 4 21 1 46 45 92 66 83 53 89", "56 18 79 35 30 23 58 25 33 27 49 71 81 42 98", "23 64 46 6 86 55 11 8 56 57 53 48 24 37 1", "14 93 20 93 28 51 17 87 76 50 15 26 21 97 69", "20 20 34 66 26 20 21 37 28 77 95 82 26 20 19", "28 35 12 48 28 41 0 46 29 77 96 44 4 18 41", "73 38 61 8 5 88 28 26 25 57 4 21 39 30 42", "59 59 77 71 8 6 13 8 52 42 86 49 86 90 68", "27 64 7 89 72 12 77 1 39 3 59 43 25 98 74", "67 58 33 44 30 41 50 43 50 3 85 37 53 72 27", "21 0 92 28 89 65 41 66 66 80 69 25 23 94 24", "98 62 82 32 6 13 74 57 56 24 61 42 61 14 14", "89 35 14 82 64 4 47 5 70 13 85 40 39 9 35", "64 7 97 47 39 4 60 13 61 16 38 22 59 0 36", "73 89 72 88 72 36 93 19 41 63 33 27 4 72 36", "39 37 43 36 84 83 40 44 96 2 61 35 25 20 35", "62 94 25 34 83 97 71 76 16 13 40 49 40 44 22", "77 84 59 20 21 44 4 62 89 0 64 50 35 89 71", "71 52 66 96 86 50 93 58 27 10 71 67 59 12 12", "82 89 96 42 10 17 86 14 80 76 15 44 27 51 34", "98 22 86 65 18 73 16 12 32 43 22 4 11 82 17", "23 64 7 20 7 17 38 94 32 18 70 47 63 97 99", "98 96 21 85 61 40 59 77 52 91 21 74 95 32 56", "13 56 21 20 77 28 37 15 22 70 34 92 18 97 89", "17 95 85 38 80 47 78 39 25 30 31 46 5 27 79", "61 40 35 82 60 12 11 98 28 33 69 62 26 87 60", "15 4 55 1 42 36 49 21 76 74 52 8 21 57 35", "0 18 76 36 1 37 48 13 35 76 46 4 39 72 91", "99 88 96 55 90 38 91 39 60 68 14 12 76 35 69", "12 36 88 88 72 90 25 21 3 61 98 49 66 37 22", "58 36 11 54 92 1 93 84 41 53 52 56 65 29 92", "35 42 28 23 30 1 13 56 22 16 17 20 66 84 58", "89 42 95 0 96 87 2 89 71 44 42 24 0 7 54", "92 42 96 21 66 27 22 80 83 44 97 1 65 63 85", "23 53 27 18 53 23 6 56 13 77 0 55 1 1 63", "56 93 6 52 15 73 79 37 53 62 82 50 64 47 14", "50 71 67 77 89 21 1 95 77 14 73 78 70 75 79", "34 31 73 41 83 88 14 63 26 67 25 8 17 90 56", "32 40 27 99 18 17 20 19 12 98 34 86 77 5 61"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> costs = {"70 56 7 77 85 17 57 52 27 30 68 62 21 82 10", "64 4 34 91 71 59 49 73 31 3 33 24 59 14 69", "15 85 25 23 62 11 40 19 64 67 50 32 30 72 14", "41 36 19 75 28 90 34 77 63 65 80 97 90 40 11", "59 55 97 84 79 59 95 19 78 59 87 28 91 18 0", "6 59 37 25 34 65 16 69 43 79 35 24 76 25 64", "88 84 20 85 69 99 45 64 19 23 24 6 52 16 24", "53 23 83 90 48 18 56 65 88 99 44 24 23 21 49", "87 10 34 7 96 3 6 41 68 25 65 93 32 17 9", "56 71 32 40 61 81 59 17 46 48 17 91 72 40 12", "22 27 23 56 35 19 60 41 61 28 67 26 22 99 44", "31 56 15 64 97 76 45 57 94 92 5 11 83 78 51", "96 0 79 20 56 14 39 17 56 1 46 24 27 68 24", "71 99 80 86 64 78 63 10 36 57 2 42 69 86 20", "21 83 20 1 3 77 15 43 94 72 44 41 96 71 9", "20 43 9 1 29 73 80 92 83 16 50 86 58 20 72", "79 41 55 99 43 59 77 59 2 72 31 46 13 28 18", "23 48 61 32 50 90 6 30 83 90 47 34 76 6 55", "49 85 96 5 85 40 64 62 99 67 34 30 13 47 58", "31 70 7 92 3 57 83 9 88 67 0 36 1 77 42", "56 26 28 53 32 13 93 97 75 92 64 9 23 78 57", "82 9 28 89 2 31 47 85 41 36 53 42 73 54 19", "15 11 46 44 65 78 57 58 76 32 51 41 42 75 19", "0 57 29 28 47 31 60 95 17 2 31 70 44 4 25", "63 20 36 9 64 1 88 21 60 65 54 12 6 97 87", "25 97 44 54 26 91 86 87 87 4 89 18 74 34 23", "0 97 43 36 7 8 38 96 30 98 61 84 10 68 81", "98 93 79 43 48 5 35 35 93 22 39 82 40 14 16", "64 14 14 7 51 22 16 89 18 46 88 80 30 99 48", "12 97 42 92 40 91 98 75 26 91 97 66 73 38 80", "90 2 94 5 10 46 27 27 35 46 73 24 27 4 23", "75 17 21 18 9 62 9 7 38 35 98 35 1 72 74", "81 63 77 76 68 88 22 96 15 58 43 88 82 70 92", "6 46 9 28 64 19 90 73 26 28 8 25 64 10 97", "39 92 61 16 69 30 4 92 26 19 50 70 8 33 40", "0 40 86 10 68 50 30 59 24 56 87 32 81 51 43", "79 90 35 41 7 5 71 11 97 98 31 48 68 39 82", "8 40 22 95 51 91 46 81 50 70 38 38 3 20 90", "47 99 81 82 41 88 87 12 0 85 10 31 33 78 71", "15 87 11 38 83 63 30 29 44 81 0 83 19 4 3", "9 51 3 90 33 44 78 21 56 78 7 66 10 40 45", "81 56 32 93 95 15 56 26 45 1 7 45 84 26 49", "87 35 0 90 26 34 35 4 56 91 83 63 58 94 4", "3 75 61 36 68 57 51 25 83 97 26 90 42 10 17", "92 98 53 92 89 79 27 24 84 84 15 67 48 73 62", "52 77 37 14 13 6 72 65 31 55 62 58 46 4 69", "63 97 67 16 90 56 96 17 80 80 1 96 48 49 70", "10 2 47 47 17 61 54 89 26 86 45 88 44 91 93", "13 55 90 81 72 80 38 68 98 19 48 0 15 96 50", "86 6 53 34 54 70 95 8 60 21 94 5 10 39 97"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> costs = {"62 17 6 65 64 91 58 81 90 69 29 23 71 87 74", "14 54 28 2 80 73 86 97 8 26 23 3 73 30 18", "8 92 36 15 58 1 6 16 83 96 85 12 20 56 99", "94 71 53 22 73 34 96 60 32 4 86 56 7 60 86", "26 69 79 63 84 37 64 91 53 47 88 38 59 8 95", "59 2 66 12 25 40 47 22 0 79 26 86 35 34 47", "21 60 16 1 23 0 38 88 92 91 35 80 30 95 88", "25 54 91 92 67 17 32 15 39 32 94 66 19 30 0", "66 52 61 83 53 85 84 91 73 76 83 9 56 13 4", "45 39 59 37 31 26 54 63 41 94 96 36 60 15 66", "61 82 18 22 65 72 7 49 63 80 26 46 89 83 60", "94 28 0 53 66 31 80 21 95 21 15 92 58 76 7", "24 37 90 43 60 55 15 67 5 78 48 32 25 37 15", "86 32 44 86 85 10 18 65 32 14 87 47 6 45 24", "13 69 62 4 13 22 59 28 89 65 7 37 97 33 75", "13 19 7 57 6 93 68 24 58 0 38 45 48 44 91", "72 58 61 35 62 74 57 22 2 47 88 10 85 85 43", "61 99 63 69 56 69 62 24 93 20 25 32 66 73 76", "57 45 35 18 81 97 93 38 20 95 86 8 6 72 94", "49 33 93 13 2 49 82 64 74 76 85 99 8 52 72", "85 9 18 20 28 99 18 22 38 38 18 25 46 24 97", "40 74 30 34 87 32 83 70 97 58 46 82 57 54 34", "30 39 44 49 60 73 49 78 95 87 16 13 12 63 38", "9 4 12 40 38 0 73 22 70 70 80 16 52 38 71", "87 69 10 32 18 70 5 67 49 1 55 66 14 68 29", "52 78 34 65 18 72 65 91 95 35 61 76 51 14 15", "23 1 84 33 34 3 4 39 70 53 40 26 19 55 94", "49 8 72 83 74 90 56 39 82 52 75 43 29 26 58", "44 50 60 29 83 94 32 88 34 3 42 75 29 62 30", "23 12 39 96 96 13 86 52 53 69 5 28 12 34 55", "71 78 5 31 8 89 26 40 77 60 43 20 35 73 83", "66 97 95 5 93 91 19 80 44 72 49 49 0 62 84", "56 34 62 61 66 70 50 92 11 28 52 55 48 88 28", "32 54 26 27 60 20 18 80 0 62 53 50 12 54 13", "96 10 47 59 71 13 30 22 6 41 50 59 97 99 47", "26 31 2 52 58 63 73 77 43 74 40 96 24 52 51", "38 49 61 86 9 32 0 39 54 6 81 5 65 78 4", "13 4 36 16 57 95 79 30 72 23 4 12 20 29 65", "71 67 15 32 54 24 65 54 63 20 60 45 25 26 23", "30 39 28 66 56 85 61 35 16 34 59 20 47 79 50", "12 51 18 28 84 72 52 49 26 16 70 87 61 95 13", "84 26 53 13 93 9 99 55 45 15 89 4 36 36 84", "86 49 35 4 77 20 76 29 70 3 46 40 90 7 36", "3 92 62 57 5 56 66 4 11 11 20 0 16 56 36", "0 43 85 36 48 63 56 25 93 26 28 39 66 19 46", "2 22 38 65 79 44 21 46 49 32 58 70 33 74 27", "70 74 70 56 10 19 19 67 44 12 93 73 51 60 92", "97 62 15 36 28 95 81 50 42 31 83 0 1 16 74", "28 86 48 99 42 59 19 62 26 63 74 19 37 25 79", "30 23 42 46 60 71 42 42 22 84 73 5 85 74 22"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> costs = {"35 79 90 27 9 45 85 4 28 54 44 82 13 70 60", "0 45 1 61 90 39 73 72 52 44 91 39 87 29 71", "95 65 50 86 93 59 31 78 63 60 33 8 42 47 78", "3 47 24 5 9 14 44 83 86 97 28 78 36 15 7", "8 10 73 58 96 66 18 28 45 82 88 78 90 31 25", "69 34 73 93 39 83 7 84 66 94 82 95 72 18 10", "80 26 21 53 85 18 19 3 46 64 86 34 43 76 65", "69 45 0 43 38 40 26 46 24 93 40 7 88 13 25", "98 94 52 20 47 37 38 67 41 84 32 27 19 76 4", "84 45 49 84 89 88 25 15 35 49 9 75 56 97 89", "82 96 83 34 16 31 72 55 98 14 39 31 42 58 7", "46 43 53 96 28 43 84 53 58 19 3 68 95 60 65", "84 42 62 68 77 78 99 50 34 98 64 73 29 6 32", "37 53 75 91 49 4 34 34 57 93 54 60 61 49 20", "27 34 63 89 2 41 68 1 91 2 0 56 76 29 63", "9 67 16 84 58 66 89 93 0 46 87 54 7 48 4", "27 75 39 91 65 42 32 33 43 24 36 44 81 12 73", "44 21 41 61 6 0 27 95 93 28 42 80 83 49 29", "87 76 5 27 68 70 69 1 4 13 25 40 57 6 53", "30 51 74 72 12 81 72 40 77 66 69 19 47 52 68", "76 40 45 82 67 13 52 36 14 56 49 40 97 6 47", "50 37 98 25 10 11 6 82 52 83 49 21 2 96 73", "71 73 13 16 55 81 30 7 17 45 64 67 85 62 74", "32 12 12 31 37 22 42 44 4 94 28 54 15 30 50", "89 2 24 3 19 79 84 49 87 2 94 52 69 80 14", "44 13 26 56 44 64 78 86 8 83 81 36 37 96 67", "88 86 69 12 89 88 91 74 38 79 76 33 31 46 13", "45 90 26 72 47 70 36 26 57 44 9 38 81 47 34", "49 35 21 19 48 11 7 40 85 46 19 62 79 50 8", "92 96 99 19 68 47 90 4 73 47 49 82 85 31 30", "20 80 66 41 99 14 52 7 54 38 53 74 0 33 25", "8 26 21 8 45 89 55 35 94 29 83 44 11 68 76", "42 88 56 8 30 56 22 83 63 77 21 17 51 21 51", "76 30 77 97 38 23 87 94 58 82 23 42 27 35 10", "3 77 99 60 85 29 16 8 12 80 85 33 98 37 54", "49 13 84 26 11 23 49 99 18 8 82 41 50 9 77", "61 13 55 60 73 41 89 89 49 2 70 35 36 68 72", "91 17 86 76 43 97 99 93 97 17 1 79 59 52 88", "37 13 1 92 73 75 33 63 64 83 65 34 18 2 3", "91 93 20 77 69 63 75 68 56 72 86 58 51 46 10", "40 83 23 42 76 96 17 9 60 82 93 25 17 11 27", "20 2 20 40 80 90 4 55 59 61 27 46 19 79 92", "30 19 76 53 62 53 50 80 63 10 62 56 36 80 67", "64 1 70 84 41 50 75 46 5 34 8 33 80 28 12", "73 58 32 49 11 95 2 62 75 65 72 38 22 8 18", "89 72 19 60 57 61 10 33 8 16 67 16 50 47 44", "63 20 2 95 70 14 90 73 76 66 39 49 4 61 58", "22 51 31 42 11 89 4 22 22 12 39 89 28 89 37", "73 52 58 75 48 29 90 39 3 67 5 42 16 10 4", "75 32 55 6 75 67 96 79 90 18 91 29 8 20 19"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> costs = {"31 11 97 78 44 97 88 41 92 16 68 37 16 49 40", "49 49 62 95 44 20 84 29 30 69 90 13 26 61 6", "86 92 18 83 71 62 80 59 4 73 75 72 11 92 22", "51 42 71 13 37 16 34 22 46 64 91 36 78 18 97", "85 4 90 3 88 61 65 69 20 69 42 96 41 53 89", "64 4 32 35 18 69 52 52 92 98 17 84 35 95 2", "32 80 7 23 84 95 84 49 64 5 19 7 2 61 61"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 194;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> costs = {"90 75 0 98 78 68 99 37 98 51 28 99 18 52 32", "59 82 77 89 58 44 40 34 52 50 71 24 73 55 71", "53 46 46 54 44 25 22 44 62 21 96 91 20 15 43", "53 75 25 30 64 83 74 5 17 26 55 89 51 28 44", "23 82 91 70 36 36 96 59 80 58 80 77 50 1 93", "93 54 68 19 84 33 2 59 38 20 85 94 9 37 23", "54 60 5 45 31 42 81 27 2 62 86 82 40 36 84"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 258;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> costs = {"84 29 83 50 5 61 96 11 84 94 38 27 59 58 72", "15 31 67 51 35 23 74 6 60 2 47 4 87 56 15", "80 40 45 63 91 50 24 87 62 9 82 0 36 42 58", "9 57 90 76 8 25 99 82 31 59 85 78 64 72 34", "80 53 75 25 17 66 75 42 54 38 51 36 38 87 78", "97 97 35 87 73 44 12 73 27 44 32 12 22 96 85", "57 77 38 33 2 56 99 78 98 53 16 49 90 54 37"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 265;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> costs = {"78 33 66 52 83 54 43 86 70 37 48 55 51 65 13", "70 31 58 14 13 53 59 79 18 5 25 36 3 58 11", "58 37 45 25 90 29 79 34 15 49 71 64 5 23 29", "19 94 61 77 8 74 30 67 54 49 72 79 85 76 38", "97 35 75 43 60 65 72 39 99 87 89 71 51 95 94", "81 14 88 42 92 97 17 23 64 72 72 37 52 58 14", "90 56 49 66 0 9 32 72 49 31 60 38 3 12 34"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 249;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> costs = {"24 66 22 52 18 5 46 23 33 99 22 60 4", "94 92 19 34 68 47 67 83 69 86 45 29 22", "59 42 39 95 98 64 61 21 17 79 27 63 2", "61 62 24 21 67 19 13 87 54 81 34 22 64", "4 8 10 33 31 69 75 70 64 74 35 25 95", "52 5 22 15 7 83 78 32 4 45 52 17 32", "6 99 67 28 64 71 37 74 4 68 44 79 39", "8 53 75 34 48 27 40 71 42 47 54 21 80", "59 66 32 77 99 39 76 66 67 40 37 5 15", "41 74 59 21 14 68 74 89 3 23 16 43 95", "59 91 49 80 72 9 46 4 86 46 43 63 12", "11 3 50 17 19 92 91 78 13 5 47 88 95", "50 12 11 94 7 70 86 57 51 58 66 98 62", "53 44 6 16 57 18 20 7 35 39 0 26 18", "13 32 65 1 27 16 14 38 11 21 9 97 79", "61 55 46 59 18 99 3 25 15 61 43 36 69", "78 75 69 4 94 82 37 60 84 64 77 98 3", "88 20 12 86 99 73 42 45 33 60 45 37 85", "61 98 28 97 67 7 73 36 12 67 19 49 27", "4 13 5 3 16 93 24 29 80 24 3 22 69", "36 83 15 73 69 76 72 97 73 39 5 46 76", "17 13 96 66 41 0 80 46 4 96 40 28 26", "20 52 29 43 22 66 26 37 39 95 13 11 93", "87 51 98 33 28 16 47 24 82 89 25 63 36", "29 60 77 58 86 97 10 16 41 32 82 67 70", "21 63 84 33 56 71 84 55 5 13 71 53 37", "54 43 63 18 79 93 78 56 51 64 54 62 80", "95 95 62 63 65 84 26 50 17 83 21 2 39", "27 15 11 80 53 65 23 16 83 3 10 62 59", "61 26 14 24 7 9 19 69 73 84 54 0 34", "71 83 56 74 23 83 90 34 64 44 0 88 61", "84 91 71 46 51 33 72 65 57 79 75 76 49", "48 61 3 49 96 75 32 52 50 55 36 40 90", "1 85 90 89 46 74 81 17 20 32 50 93 97", "7 73 73 84 23 22 45 26 71 41 2 3 94", "53 59 31 94 50 32 79 40 22 25 14 3 42", "35 36 93 29 34 1 2 7 85 25 29 30 52"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> costs = {"32 29 75 72 2 76 57 18 39 83 31 72 55", "96 33 29 16 82 40 79 5 73 38 67 8 51", "69 87 81 59 14 14 88 89 87 90 66 44 8", "6 28 40 78 83 36 12 13 53 95 53 32 0", "27 71 67 35 23 37 23 4 96 38 19 84 27", "6 75 94 50 84 0 78 24 79 62 61 91 75", "14 86 29 46 87 56 18 55 91 41 92 15 46", "88 53 65 73 81 71 49 75 22 33 76 1 57", "56 64 18 47 40 33 34 69 80 21 25 98 77", "17 39 69 32 86 58 86 51 32 67 23 81 43", "45 15 20 46 72 76 11 91 24 51 25 58 20", "5 80 46 3 57 64 43 27 97 29 86 83 81", "18 50 4 0 94 49 15 14 96 88 90 7 80", "15 59 5 73 79 11 54 26 15 12 90 58 39", "88 88 25 71 70 44 22 74 45 16 24 61 31", "21 49 22 28 30 37 87 35 11 67 46 65 94", "62 77 85 20 17 73 9 43 45 79 88 67 54", "33 84 78 94 15 99 44 37 28 74 74 16 10", "86 84 57 51 79 19 29 64 40 47 37 49 90", "82 29 78 50 84 12 34 63 7 49 63 51 87", "91 25 62 8 35 48 93 92 0 72 12 30 36", "52 77 74 2 68 56 32 47 7 16 59 41 79", "67 91 43 18 79 35 44 41 43 80 90 36 73", "91 8 85 21 45 37 99 19 39 67 76 71 14", "83 88 74 25 68 41 17 11 60 96 46 4 37", "90 84 28 27 57 19 36 42 40 81 80 39 1", "20 7 77 92 22 61 80 97 87 49 38 4 61", "99 0 7 3 38 98 88 66 25 45 86 61 88", "26 42 69 66 43 89 74 21 81 96 83 62 93", "70 11 32 74 72 31 75 80 35 13 78 23 80", "4 69 66 65 58 93 8 27 59 52 17 33 74", "98 30 57 61 23 27 73 55 2 45 87 77 26", "22 90 5 45 70 9 15 37 74 73 30 83 0", "89 35 17 23 9 16 53 67 78 77 94 51 33", "96 96 20 73 23 42 64 28 88 35 37 3 72", "12 76 2 95 77 92 31 95 16 41 11 70 8", "89 47 3 40 80 0 37 0 74 61 43 39 89"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> costs = {"62 74 88 56 72 41 40 71 55 34 42 15 86", "58 23 30 83 99 21 22 91 88 81 61 83 76", "20 71 41 34 52 4 9 41 60 81 82 1 53", "38 36 96 54 22 54 77 53 38 76 74 61 68", "62 42 30 46 18 50 17 60 84 70 64 94 11", "25 76 94 26 30 32 62 26 86 85 80 64 38", "19 41 13 80 9 76 23 40 22 41 90 40 2", "75 10 67 69 22 92 45 16 19 76 48 82 2", "35 68 83 99 7 2 40 20 83 50 97 6 90", "19 48 80 60 50 56 71 17 26 93 10 72 10", "29 48 58 12 50 94 80 33 94 87 36 34 8", "19 85 5 25 75 25 73 56 85 24 12 56 41", "38 49 52 11 59 82 59 18 94 9 13 75 43", "7 62 80 42 71 99 27 76 25 2 1 99 59", "87 23 72 43 65 11 93 17 22 53 99 81 72", "94 91 85 69 34 93 32 14 35 3 14 62 80", "39 65 82 39 24 69 62 97 13 27 8 7 45", "30 60 44 11 33 39 2 19 9 37 12 41 52", "48 45 66 11 25 6 76 7 45 1 77 8 98", "90 35 7 97 81 37 58 26 49 91 65 52 10", "74 90 23 16 42 71 61 9 83 86 16 60 94", "62 61 71 70 60 61 6 68 59 87 6 17 14", "55 8 79 8 19 54 98 43 70 41 15 31 50", "98 18 67 58 12 29 20 84 0 80 45 7 49", "5 95 55 22 9 10 30 89 19 50 43 18 93", "13 59 8 44 10 6 63 77 65 75 7 85 60", "7 66 5 15 15 10 10 70 33 20 81 64 9", "0 14 52 18 7 65 78 16 10 88 22 73 65", "87 49 72 73 9 80 39 15 95 54 26 6 24", "59 27 6 23 37 7 38 89 26 45 55 4 61", "66 92 84 40 57 72 89 30 45 99 11 84 14", "7 39 41 14 64 1 41 70 25 78 77 63 68", "3 8 23 8 70 90 0 55 30 58 27 19 89", "73 19 0 57 34 7 96 75 21 61 77 63 31", "2 41 9 65 10 13 73 33 21 44 23 22 99", "54 80 27 74 69 0 93 69 58 27 77 55 3", "98 16 80 61 48 82 3 57 48 13 70 22 47"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> costs = {"85 96 60 45 13 90 65 87 31 11 51 11 98", "55 66 94 97 37 96 19 57 13 15 46 41 8", "9 49 26 17 59 12 14 20 57 27 10 22 15", "41 34 66 53 33 22 19 28 19 57 24 39 14", "37 54 60 79 63 70 28 89 88 87 1 2 7", "58 30 18 81 46 59 15 13 13 49 35 32 77", "55 90 2 94 5 39 48 65 19 11 36 47 1", "24 35 2 27 43 61 58 61 42 4 21 58 17", "34 8 52 67 85 8 57 87 2 62 27 51 28", "46 63 64 94 64 89 29 66 16 72 28 75 34", "70 79 55 29 96 89 37 49 56 23 57 14 10", "60 76 38 11 5 85 74 70 79 39 59 9 6", "76 82 34 51 16 5 30 71 35 27 61 72 77", "18 95 35 32 6 95 9 45 7 14 30 82 84", "10 21 44 20 27 21 2 62 72 19 67 3 91", "2 31 52 75 9 71 71 44 3 77 39 12 23", "47 27 53 29 12 64 50 57 84 78 78 87 40", "51 6 8 54 98 10 86 51 85 95 22 56 39", "25 34 79 38 58 27 66 12 56 78 76 7 36", "61 85 14 48 26 65 55 34 20 53 44 7 4", "30 2 27 87 42 52 22 22 91 80 49 57 92", "6 36 69 13 73 30 99 87 79 25 53 34 59", "73 88 4 80 93 34 83 20 22 26 73 44 48", "65 25 98 23 18 4 60 87 18 33 18 17 20", "97 42 73 32 1 47 21 6 28 15 40 11 36", "63 38 9 8 87 75 33 85 98 51 90 58 39", "8 91 57 25 12 55 67 85 88 69 33 9 75", "61 24 16 73 61 80 11 70 88 98 45 21 83", "44 73 74 2 12 82 94 70 8 6 25 76 92", "13 45 25 23 21 87 48 38 60 9 18 71 80", "6 69 26 28 53 70 1 27 73 13 10 67 84", "18 73 10 95 66 23 41 91 47 62 78 96 1", "39 5 19 10 86 26 79 12 54 33 83 55 60", "56 69 71 23 53 90 97 63 85 63 87 26 55", "35 89 34 31 90 73 37 10 83 23 36 63 36", "91 96 19 46 57 76 16 28 99 70 18 97 34", "4 60 22 30 16 57 20 51 89 11 24 26 21"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> costs = {"43 59 13 15 97 61 26 82 86 46 10 74 99", "57 57 53 79 2 39 81 80 16 17 17 70 37", "70 93 18 82 24 62 42 38 77 40 99 3 22", "86 49 33 60 49 91 18 3 70 20 42 51 0", "59 69 18 29 7 88 23 25 71 48 88 13 86", "65 54 86 69 77 72 18 10 32 68 2 50 71", "72 71 13 24 71 72 93 90 2 0 79 25 26", "50 74 14 64 60 80 18 46 49 95 18 68 6", "51 36 8 1 7 81 72 21 5 44 93 99 35", "96 99 14 22 26 65 96 41 29 57 22 48 3", "71 44 22 40 51 74 76 59 75 84 41 48 6", "46 93 99 45 28 96 45 42 18 72 8 14 13", "38 71 36 86 75 8 31 98 48 82 72 25 42", "48 10 83 97 16 30 90 16 75 19 12 21 62", "30 93 70 45 7 8 16 43 95 92 51 26 91", "0 9 63 25 51 12 36 35 9 52 65 0 69", "40 19 81 61 81 11 55 51 57 62 60 73 6", "55 66 57 82 57 58 91 21 84 43 34 20 78", "44 73 43 44 42 84 64 23 46 45 35 1 97", "92 64 58 66 70 14 33 28 96 91 86 88 12", "70 32 47 90 10 91 64 54 36 6 39 0 29", "85 46 65 87 44 58 52 2 24 22 16 58 50", "13 49 36 1 62 7 34 9 98 44 0 62 99", "36 68 38 37 98 24 83 63 12 28 21 64 30", "46 86 47 5 37 60 54 74 62 16 81 96 25", "79 41 26 41 41 62 9 79 99 8 4 83 71", "17 11 93 81 42 40 68 90 45 6 50 0 80", "13 16 62 10 42 42 51 68 83 92 31 93 72", "30 1 77 14 73 94 26 66 76 68 7 45 59", "53 52 9 53 33 23 69 95 33 12 37 85 80", "21 78 11 14 51 42 16 28 56 89 23 83 56", "0 52 64 45 11 17 98 21 70 31 44 40 26", "78 52 63 63 32 85 41 44 99 92 86 16 21", "43 5 44 26 62 45 78 26 90 89 43 89 10", "14 20 55 55 46 33 7 10 97 40 95 39 84", "95 32 71 11 53 14 17 98 40 79 43 19 6", "34 8 49 23 19 64 43 74 19 90 8 27 1"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> costs = {"2 22 15 35 81 31 37 77 91 30 20 35 51", "58 49 13 10 16 82 93 52 21 20 88 50 67", "79 89 61 45 90 63 68 6 98 50 38 36 27", "30 66 48 66 18 7 15 31 18 31 14 11 84", "35 31 72 85 99 52 75 60 97 66 24 66 72", "22 16 11 58 44 42 25 92 8 43 0 24 75", "18 56 89 29 40 24 61 13 10 60 65 85 21", "63 51 45 29 24 68 46 36 27 91 78 52 83", "87 96 84 12 72 2 68 62 31 9 87 93 22", "97 53 88 83 74 51 35 19 81 60 87 28 96", "14 19 75 67 3 62 64 87 74 37 89 43 99", "21 52 86 14 75 83 67 63 67 42 15 2 62", "97 62 50 25 59 64 44 34 32 47 96 97 34", "71 34 24 14 34 45 66 20 59 41 4 27 5", "71 70 21 74 32 18 37 82 43 96 47 87 30", "80 35 27 77 69 98 12 93 12 46 39 79 67", "99 21 71 26 27 43 96 48 18 29 66 55 11", "10 52 59 98 83 39 33 10 17 3 8 30 96", "21 77 36 1 44 35 22 16 61 49 60 58 98", "78 87 64 34 99 75 86 59 73 69 98 6 79", "16 9 88 46 6 10 23 42 11 68 77 34 84", "39 84 44 98 82 22 86 47 57 86 22 43 45", "95 13 44 1 93 60 11 82 7 17 92 30 60", "4 98 38 38 83 78 23 27 77 5 50 63 52", "7 49 75 51 95 70 64 39 72 57 0 84 39", "7 2 32 38 62 36 37 1 75 20 79 98 48", "56 4 98 20 57 6 70 32 57 65 2 22 5", "75 79 5 59 19 12 61 51 50 24 88 87 25", "64 8 5 63 56 62 67 55 82 24 62 53 57", "20 18 59 42 24 35 22 29 94 42 42 56 94", "93 80 82 81 5 47 90 11 10 46 73 77 2", "56 2 64 9 59 85 27 19 28 52 55 50 81", "49 92 24 6 86 18 86 69 99 92 16 89 3", "26 36 77 4 39 33 7 4 42 67 89 70 87", "17 22 42 68 4 92 61 29 98 48 47 84 17", "47 77 34 37 81 61 74 58 66 13 91 74 17", "33 41 7 4 29 25 26 71 93 31 64 55 60"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> costs = {"34 47 3 68 10 6 76 45 36 51 95 7 45", "94 78 9 84 4 86 15 41 14 99 55 49 15", "26 0 54 14 45 88 61 49 56 72 55 33 17", "92 85 13 0 30 7 78 40 92 83 26 7 25", "40 7 80 90 22 7 90 77 22 36 66 83 85", "22 56 41 56 73 34 41 87 34 72 95 13 12", "87 97 39 94 22 79 1 3 70 24 11 61 1", "33 97 67 17 83 90 73 24 47 47 59 88 34", "93 60 29 7 73 17 4 12 11 27 92 13 31", "62 38 43 23 40 76 21 8 94 4 98 67 29", "45 14 88 34 49 82 95 79 89 68 96 94 81", "8 22 73 22 53 36 60 96 59 0 73 80 8", "67 85 7 35 14 53 49 2 88 99 84 83 78", "74 52 74 69 33 83 91 6 5 45 42 65 42", "2 66 15 83 75 83 68 83 18 82 36 68 85", "25 67 69 8 46 44 60 21 13 93 4 4 0", "9 50 43 75 92 45 41 8 28 17 91 96 0", "10 79 37 79 64 62 46 34 70 93 78 31 14", "91 25 18 96 26 27 46 69 2 39 15 44 47", "44 61 39 41 61 50 20 98 29 84 61 76 19", "31 69 97 63 83 89 88 2 85 14 30 32 84"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> costs = {"85 74 76 15 67 65 81 57 13 19 7 83 6", "15 65 52 37 22 5 40 41 88 31 22 18 34", "17 71 31 50 5 17 25 81 32 92 46 13 50", "60 33 58 43 39 74 8 91 11 31 96 51 73", "85 83 95 4 17 13 75 49 64 81 66 89 62", "98 82 9 12 32 69 45 91 13 85 65 22 76", "76 54 73 28 27 58 11 23 62 29 36 38 78", "0 19 44 90 82 43 72 91 55 5 61 1 96", "74 86 62 97 63 39 51 36 67 78 95 79 1", "58 9 38 96 87 39 16 32 29 98 75 1 90", "31 7 51 33 3 26 20 66 23 83 5 75 20", "73 53 15 53 55 73 62 94 70 50 33 86 83", "62 85 58 64 75 90 71 27 23 75 54 43 42", "78 27 48 53 47 21 7 63 75 63 37 38 57", "7 89 90 94 72 53 79 31 17 55 21 89 82", "45 65 36 89 7 14 16 55 68 64 77 75 27", "52 38 65 91 95 73 80 86 67 52 39 47 83", "57 2 5 47 85 50 12 22 40 20 36 56 75", "5 21 52 80 49 5 18 14 97 14 87 77 0", "55 29 40 3 13 98 6 18 46 92 69 58 14", "9 79 51 66 54 56 87 7 36 36 13 55 51"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> costs = {"94 38 79 85 51 86 42 53 19 54 67 95 8", "67 57 62 69 38 49 52 64 43 85 44 0 64", "29 69 75 16 23 69 54 2 55 6 89 98 59", "9 52 27 4 60 95 62 23 64 0 72 17 65", "16 2 10 16 67 39 85 42 55 9 12 10 12", "67 16 1 65 75 10 18 2 15 79 97 77 2", "62 78 75 79 44 91 82 54 8 49 94 94 92", "50 3 4 60 15 72 76 16 38 52 27 57 55", "42 36 53 20 39 15 98 14 95 43 6 77 98", "15 27 93 9 19 43 12 24 4 28 97 81 44", "35 33 72 92 89 14 29 42 34 69 58 33 83", "53 77 90 30 75 5 57 68 15 77 11 28 2", "16 56 99 97 1 35 30 73 27 19 87 57 62", "22 26 20 56 10 73 33 1 4 8 6 61 77", "22 39 89 50 41 5 6 41 2 7 76 33 80", "4 53 68 61 15 90 88 35 47 98 9 80 99", "13 89 6 75 66 29 15 55 79 56 61 85 97", "63 93 74 96 74 78 49 42 40 65 33 28 1", "80 27 10 60 27 24 50 34 99 16 63 14 72", "42 71 34 28 69 97 22 43 94 96 22 44 38", "62 9 71 90 11 52 18 21 13 45 45 63 79"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> costs = {"52 51 31 55 35 6 53 47 24 38 27 57 58", "69 49 21 50 2 91 64 86 97 37 15 28 43", "38 13 66 79 88 19 30 20 74 66 27 28 14", "52 66 41 9 25 10 58 47 61 60 39 25 47", "36 62 62 64 6 1 78 72 80 66 91 10 86", "66 77 13 94 91 65 61 32 75 87 42 33 34", "3 93 73 28 41 9 91 4 74 97 5 53 70", "85 19 62 96 6 29 73 20 24 64 86 86 96", "61 73 39 94 8 43 88 82 71 29 92 63 33", "67 61 39 20 31 24 40 94 20 46 23 94 67", "47 58 53 33 55 14 7 94 8 16 37 97 98", "9 27 90 73 60 57 34 99 78 66 24 18 60", "45 65 83 39 32 31 98 85 65 54 99 73 48", "8 89 86 6 88 96 33 78 69 94 36 4 94", "14 70 18 33 30 64 98 14 3 31 45 2 16", "11 56 16 84 5 25 73 92 31 61 88 64 40", "58 58 77 63 52 92 33 71 25 63 35 24 78", "39 55 24 41 72 35 98 88 19 4 13 93 96", "44 55 85 9 96 44 68 73 7 20 66 40 92", "91 4 27 16 82 67 71 6 9 43 41 7 32", "61 12 45 55 8 90 10 93 0 7 37 68 80"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> costs = {"52 54 99 34 2 77 81 41 25 69 54 51 17", "36 53 89 21 95 5 56 7 64 81 40 10 89", "85 47 80 75 43 33 30 43 68 32 20 49 74", "46 19 29 97 36 65 51 25 87 46 30 44 54", "95 26 94 5 15 80 52 96 56 96 30 86 39", "98 19 60 48 93 6 68 22 4 5 88 55 30", "75 2 61 19 56 56 46 51 62 61 32 15 58", "88 11 88 74 51 87 93 12 36 87 18 4 10", "23 9 98 78 40 73 80 2 93 37 59 39 89", "21 1 21 36 59 9 48 48 84 99 35 77 11", "72 65 30 76 75 53 85 73 32 26 46 13 28", "40 51 87 80 40 8 81 62 45 41 71 93 89", "56 93 25 33 4 97 98 35 73 73 89 59 47", "22 86 94 35 14 34 87 1 14 27 10 96 90", "55 37 62 49 27 18 42 52 52 47 50 50 82", "24 24 71 83 71 93 70 65 29 84 0 16 86", "15 44 97 11 34 53 49 96 2 76 14 44 29", "66 91 79 17 74 4 42 46 88 14 39 58 80", "69 42 80 85 29 96 30 26 7 64 80 57 61", "82 34 76 27 63 42 19 43 60 94 47 3 40", "35 17 80 94 98 49 37 79 35 66 75 65 93"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> costs = {"25 26 21 73 43 75 56 7 50 45 13 96 78", "83 96 52 35 83 29 3 73 38 65 74 17 71", "24 23 15 58 98 40 85 20 13 28 96 70 36", "46 16 49 43 94 33 39 47 69 23 76 72 96", "14 37 71 31 9 95 55 24 54 53 65 40 74", "79 68 70 49 5 17 65 54 60 60 87 0 7", "57 24 84 29 20 99 67 92 31 76 88 86 1", "43 40 66 83 14 46 51 84 95 56 1 61 11", "62 21 99 63 29 56 87 13 86 8 13 53 0", "44 30 88 30 31 31 71 98 14 85 44 66 69", "39 23 71 1 35 33 22 34 96 52 91 84 65", "77 92 79 31 92 23 61 81 54 92 13 25 91", "28 11 35 95 80 75 18 52 76 54 85 99 89", "82 51 80 66 17 58 58 96 90 51 20 51 33", "74 44 46 0 35 75 11 71 70 92 46 89 44", "22 44 30 21 33 12 73 14 79 90 73 37 87", "63 89 7 15 22 82 59 69 82 95 45 94 66", "16 87 13 5 32 36 50 63 58 83 75 31 97", "55 21 70 93 8 34 82 15 49 5 97 9 75", "80 4 20 75 71 36 62 85 42 95 21 92 58", "79 76 34 10 73 89 32 44 82 41 78 64 57"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> costs = {"26 65 84 97 47 31 9 64 15 56 20 11 10", "20 41 75 14 69 66 17 75 3 58 85 30 9", "23 13 82 80 83 9 46 67 6 94 98 16 58", "13 72 79 25 83 99 66 59 13 36 25 31 11", "28 90 97 59 99 20 72 81 1 55 90 47 22", "97 41 21 14 0 35 87 79 60 70 79 26 30", "93 62 55 25 73 84 15 71 43 14 91 16 96", "92 71 86 40 94 84 82 15 98 82 50 86 62", "11 56 42 37 87 36 0 43 61 74 27 76 45", "71 91 36 87 87 29 59 74 70 53 58 52 68", "57 34 19 43 97 30 0 40 68 87 76 68 30", "37 42 58 14 88 30 5 24 17 93 54 77 67", "24 30 26 76 99 83 11 19 26 9 50 27 49", "18 14 25 87 45 63 29 3 77 17 33 83 42", "51 76 97 28 44 21 59 70 98 58 53 9 77", "80 19 27 8 68 46 22 94 33 67 57 63 71", "35 81 4 18 24 56 95 21 84 40 43 43 10", "41 2 64 51 80 45 70 8 53 38 54 76 32", "88 44 90 51 15 25 32 20 44 57 76 40 78", "60 80 21 4 91 62 7 55 14 87 1 84 95", "54 23 49 30 56 37 74 46 89 90 72 22 10"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> costs = {"88 48 92 85 85 75 79 70 48 94 67 50 63", "10 78 36 61 47 33 54 92 44 84 55 27 79", "96 19 48 25 12 36 73 5 22 59 81 1 30", "29 96 97 80 59 8 59 96 69 6 29 24 99", "73 8 55 1 87 51 21 36 77 33 73 51 39", "95 10 20 97 40 50 93 38 31 52 46 90 48", "16 96 78 40 96 52 48 51 53 36 3 75 72", "81 9 45 32 48 41 42 69 38 83 19 31 22", "50 84 68 40 32 84 37 11 24 33 63 73 85", "17 10 89 92 83 70 1 29 2 50 70 45 19", "8 29 38 40 51 89 24 19 29 57 4 67 68", "29 1 32 3 86 50 13 76 42 96 46 44 25", "49 94 95 95 14 4 24 52 44 75 42 69 95", "72 26 0 39 94 29 40 27 33 27 77 46 3", "19 43 50 64 69 0 59 65 95 73 69 19 26", "14 95 68 83 91 40 9 91 80 4 21 21 31", "54 48 8 1 52 28 45 3 93 14 3 52 79", "98 26 48 18 52 62 14 21 46 5 62 55 97", "42 60 18 64 91 73 12 0 74 65 29 20 69", "22 34 72 74 13 71 1 61 90 53 24 4 75", "71 9 37 27 7 80 87 25 44 78 99 57 79"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> costs = {"74 22 8 94 91 30 28 64 5 41 35 6 3", "25 60 28 30 35 99 40 73 26 47 53 13 73", "97 92 72 54 72 46 77 80 40 69 11 68 33", "17 9 69 24 13 95 84 41 25 20 41 66 93", "67 13 47 81 86 44 74 58 99 47 4 77 28", "45 46 39 13 80 57 23 50 81 36 46 66 78", "71 86 19 37 80 87 51 27 69 37 71 44 96", "71 91 1 48 19 46 95 59 60 76 16 83 27", "97 20 73 63 99 44 50 19 82 30 6 34 57", "76 71 29 20 68 0 12 69 49 31 16 45 91", "76 21 7 60 48 5 81 22 69 80 67 19 99", "49 49 6 83 7 83 55 36 3 24 36 16 94", "86 47 10 31 38 87 53 46 48 2 51 29 24", "20 10 91 40 10 41 89 16 25 97 99 81 33", "3 5 70 19 99 56 67 10 88 6 98 41 52", "46 43 3 76 67 24 86 59 64 96 0 54 13", "25 51 13 6 85 17 11 55 36 11 12 4 22", "0 10 21 42 63 67 86 66 44 54 91 30 13", "56 27 13 10 40 38 62 54 45 47 71 57 3", "8 68 15 12 91 16 23 12 59 86 80 45 53", "24 99 44 55 12 0 82 26 10 23 65 73 77"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> costs = {"10 20 48 67 23 57 36 39 69 28 55 92 41", "14 78 21 59 32 46 59 76 2 72 77 84 98", "88 8 63 61 86 74 81 35 41 4 92 78 43", "61 6 99 54 47 13 33 69 73 65 16 33 42", "18 5 19 3 3 7 11 67 68 98 41 49 33", "83 54 25 62 98 87 68 98 42 16 12 75 85", "86 41 2 19 83 20 24 3 24 28 10 36 95", "78 34 37 28 67 21 83 92 83 82 79 52 80", "21 68 93 97 54 79 39 56 98 23 77 22 26", "1 50 36 37 46 15 71 83 44 38 5 27 31", "88 10 11 40 91 33 9 84 30 63 63 70 19", "61 93 97 84 19 98 35 56 35 81 71 7 65", "15 45 70 43 77 59 53 88 0 45 21 9 29", "52 72 93 23 92 55 16 89 39 35 87 75 91", "23 57 63 30 23 79 76 93 22 54 53 76 42", "53 21 64 62 51 17 35 44 40 27 99 56 17", "39 92 5 14 84 28 72 48 59 95 27 36 89", "50 90 42 26 33 96 48 98 58 0 15 94 44", "56 21 44 13 39 84 6 44 99 90 73 71 39", "33 66 66 69 55 16 60 97 43 94 93 92 92", "52 92 8 46 37 65 68 81 78 8 65 84 52"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> costs = {"64 75 26 35 14 59 2 81 29 57 97 90 54", "40 84 48 33 77 1 25 86 48 62 51 17 44", "30 25 10 14 78 74 90 4 10 5 64 12 86", "93 70 83 83 25 24 68 73 57 45 75 83 32", "23 45 83 41 89 13 67 99 28 45 74 19 50", "85 24 15 98 10 8 68 94 92 93 19 61 67", "76 7 43 60 39 66 5 23 8 95 36 75 95", "65 21 70 84 72 55 8 87 54 19 96 23 13", "88 17 32 49 84 9 57 27 69 96 94 75 19", "3 70 56 78 65 21 0 35 6 72 91 15 60", "45 34 56 69 48 45 86 80 95 71 90 52 99", "59 48 94 34 68 97 5 24 76 70 46 76 6", "52 49 98 67 9 44 2 66 13 50 11 99 30", "6 71 20 59 70 80 7 64 14 75 61 20 0", "37 90 46 14 97 98 63 95 66 73 39 68 39", "53 18 51 53 49 58 24 70 17 94 50 25 58", "65 1 20 85 1 58 76 47 72 74 46 36 70", "12 10 9 81 50 63 0 1 16 49 59 40 20", "76 34 71 2 93 37 3 13 23 4 72 0 51", "44 74 97 81 44 10 91 54 91 41 17 91 43", "33 41 2 73 61 79 8 33 81 2 70 84 15"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> costs = {"94 88 87 94 40 32 68 38 14 13 48 5 67", "39 47 85 30 91 18 71 93 92 33 73 1 67", "54 3 37 39 19 32 28 7 26 69 39 95 7", "54 8 55 60 76 94 8 61 25 99 80 97 92", "73 30 66 74 97 21 77 35 60 96 67 89 3", "94 58 43 89 65 98 98 20 58 75 15 66 36", "40 65 17 37 58 90 68 24 64 66 45 42 2", "6 39 70 95 43 64 54 87 54 20 85 53 41", "43 28 56 10 64 97 75 82 35 33 72 3 58", "37 70 3 79 72 10 19 43 6 62 7 60 49", "62 80 34 15 21 78 43 78 88 8 75 63 90", "10 97 63 14 56 0 84 59 80 57 70 99 0", "76 61 8 37 11 70 18 45 86 39 24 29 18", "12 38 93 76 28 4 74 91 18 30 92 3 90", "73 60 60 72 60 37 34 68 74 45 39 93 91", "25 33 15 55 51 28 93 44 5 21 49 79 13", "67 10 6 71 0 79 31 61 52 92 99 86 60", "74 32 0 67 24 25 0 40 80 51 68 74 96", "73 95 45 53 9 13 63 16 84 64 95 16 26", "47 8 25 34 69 99 67 69 66 91 95 66 31", "76 18 0 50 14 74 46 60 27 56 74 91 72"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> costs = {"58 56 67 74 82 15 83 7 50 52 6 17 22", "73 9 17 40 40 93 58 41 44 73 15 91 33", "42 47 7 34 19 66 90 87 41 72 3 24 80", "53 77 86 71 99 60 81 16 0 22 10 59 63", "55 32 78 46 66 21 93 74 55 12 40 46 0", "82 19 3 7 99 57 84 86 29 83 46 10 99", "47 32 10 6 96 65 38 74 11 5 96 5 79", "51 18 20 98 18 2 17 21 9 17 79 94 3", "8 77 50 19 77 97 52 87 4 48 53 43 23", "65 48 19 71 27 71 89 48 69 7 50 87 29", "60 4 8 54 8 17 32 58 36 9 56 88 97", "60 37 51 3 60 16 52 79 87 80 50 76 28", "20 84 78 7 13 39 12 22 94 20 39 26 78", "76 35 35 65 32 96 3 83 0 63 0 52 43", "88 32 94 65 60 14 49 39 22 63 78 34 86", "73 54 25 99 33 2 34 68 68 67 64 71 51", "65 34 51 17 78 39 49 72 5 10 87 54 49", "9 18 28 44 4 2 98 30 1 32 32 36 1", "0 3 66 71 54 31 6 6 48 84 46 98 57", "51 8 44 6 58 54 24 87 98 28 89 97 58", "91 29 91 27 30 92 30 96 63 85 27 70 92"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> costs = {"76 55 38 74 12 90 83 57 96 42 11 20 29", "10 49 19 7 8 11 37 99 38 68 91 69 65", "55 55 93 25 47 69 80 86 44 93 76 27 50", "73 69 62 93 99 72 43 19 80 51 30 18 50", "68 86 42 38 51 97 93 45 23 40 14 4 27", "58 97 3 86 47 76 55 10 70 55 82 13 74", "63 65 4 81 16 73 67 58 11 19 55 4 64", "79 45 79 83 72 38 80 76 24 28 53 79 38", "23 35 21 37 9 85 3 14 66 19 88 34 77", "99 54 33 4 19 12 50 98 96 22 36 76 99", "60 5 52 40 44 76 75 66 13 85 51 17 99", "17 36 87 52 14 87 6 47 92 26 60 42 24", "56 65 61 33 64 22 38 17 62 83 93 38 49", "7 23 0 24 23 18 60 11 71 74 99 78 22", "91 4 82 34 29 39 99 90 72 64 12 11 81", "75 94 75 13 43 82 37 43 7 60 62 68 72", "33 42 71 11 65 63 16 48 97 45 87 97 35", "60 61 48 71 43 24 65 18 38 8 1 75 52", "8 36 15 76 8 49 19 80 60 84 43 77 33", "40 22 20 38 58 81 99 6 52 43 30 18 61", "69 26 62 44 79 70 81 94 46 90 43 66 70"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> costs = {"4 50 14 81 83 55 4 4 93 62 86 93 69", "38 36 0 56 97 69 83 60 14 63 30 95 58", "77 85 2 43 56 6 94 70 88 78 26 93 83", "19 55 69 12 24 7 48 25 64 46 94 48 6", "8 11 37 3 69 14 89 71 58 45 78 53 16", "67 31 42 60 14 62 16 83 74 41 91 23 66", "55 69 61 3 75 69 14 12 73 84 27 62 55", "85 8 33 38 25 1 70 67 61 84 29 78 68", "4 19 59 27 85 14 96 46 18 71 16 33 84", "89 17 11 52 72 97 61 6 36 86 8 6 53", "69 91 83 48 59 87 67 18 14 53 33 11 0", "52 82 16 85 66 6 2 78 59 75 75 20 82", "11 7 90 17 61 60 8 44 8 68 32 76 86", "47 29 20 58 30 72 40 47 58 7 54 61 85", "13 36 61 34 19 72 42 10 89 3 70 98 47", "79 66 80 55 53 27 85 74 85 15 46 26 62", "5 34 16 66 19 30 2 80 65 22 53 7 32", "43 10 3 41 58 82 8 38 38 62 66 24 37", "51 39 84 77 2 89 11 19 55 31 50 58 12", "16 80 65 23 13 8 34 16 50 93 99 59 32", "38 22 98 62 59 49 2 43 27 5 32 38 24"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> costs = {"87 70 75 45 82 91 25 48 15 38 56 49 55", "6 43 55 66 75 93 88 73 55 47 23 58 90", "50 63 23 89 88 10 59 64 56 42 55 82 90", "70 21 47 20 76 54 63 31 20 39 24 9 13", "80 56 36 39 47 87 2 70 76 91 81 36 55", "37 79 10 19 69 81 40 17 2 17 71 66 48", "91 5 73 0 18 54 57 55 93 5 42 96 75", "19 87 57 56 42 94 35 53 14 5 35 55 22", "37 72 94 4 21 86 9 94 87 28 49 44 84", "43 49 26 39 25 46 27 83 2 70 78 38 24", "92 43 59 47 66 97 20 60 1 41 46 11 35", "33 40 85 77 24 28 27 51 68 53 97 96 37", "0 66 15 38 90 8 82 50 55 48 47 75 8", "49 16 54 60 52 87 1 38 65 25 67 93 77", "35 47 75 31 84 75 98 0 14 89 8 96 39", "63 44 87 39 53 36 56 7 97 9 95 99 48", "61 24 15 55 2 50 3 77 82 87 53 80 88", "68 70 96 64 9 60 9 97 99 62 33 56 70", "31 66 65 30 14 27 55 29 83 58 80 86 35", "62 74 89 43 62 57 13 58 22 23 18 31 20", "18 93 54 75 63 86 41 29 17 55 56 73 84"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> costs = {"40 31 64 26 67 27 0 56 71 63 14 85 22", "36 8 40 67 29 59 61 83 34 24 69 76 54", "87 31 11 60 16 51 91 81 78 58 8 79 15", "80 42 29 65 64 66 74 5 34 3 65 95 86", "0 20 56 76 75 43 7 86 3 24 38 95 5", "16 53 13 95 68 93 37 98 59 2 65 33 7", "99 36 73 95 23 73 16 80 49 91 23 57 78", "27 81 16 22 86 32 76 0 27 45 94 65 44", "53 67 9 86 75 9 23 48 4 46 21 20 26", "71 12 50 28 90 78 9 6 1 96 38 77 96", "66 22 90 31 66 43 98 76 30 73 85 53 21", "89 99 43 10 26 14 22 76 43 12 55 53 19", "56 49 58 33 46 24 56 37 55 22 80 54 99", "11 27 84 64 49 73 64 93 84 90 8 6 67", "51 19 22 4 39 79 54 97 12 0 21 68 37", "77 91 18 31 90 30 58 74 94 8 48 59 1", "32 50 10 39 17 61 58 40 66 97 19 20 95", "32 21 16 1 59 93 92 78 25 83 8 84 58", "3 92 6 62 94 39 12 4 78 30 66 37 70", "32 35 90 52 30 22 74 47 23 33 41 16 11", "66 99 19 50 58 23 43 65 85 38 4 97 42"};
    int numTasks = 13;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> costs = {"1 1 1", "2 2 100"};
    int numTasks = 3;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> costs = {"1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3", "1 2 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 5 1 2 3 1 3"};
    int numTasks = 24;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> costs = {"0 0 1 1 1 1 1 1", "1 1 0 0 0 0 0 0"};
    int numTasks = 8;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> costs = {"0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"};
    int numTasks = 25;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
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
    vector<string> costs = {"1 1 0 1 1", "2 2 2 2 1"};
    int numTasks = 5;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> costs = {"5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4", "5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4"};
    int numTasks = 25;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> costs = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int numTasks = 20;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> costs = {"1 1 5", "2 2 50"};
    int numTasks = 3;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> costs = {"26 80 47 62 25", "65 12 53 60 17", "93 20 71 46 58", "100 69 95 50 11", "8 31 54 93 31", "25 51 77 22 3", "97 91 13 54 87", "23 69 64 42 45", "17 25 51 100 51", "19 87 9 98 73", "65 88 7 25 56", "49 17 29 72 71", "69 46 78 43 38", "88 37 29 78 2", "48 31 87 66 54", "97 87 91 92 28", "75 63 98 54 39", "69 75 21 51 98", "83 25 95 46 46", "3 6 1 45 15"};
    int numTasks = 5;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> costs = {"0 0 1 2 2", "2 2 0 0 0"};
    int numTasks = 5;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> costs = {"8 2 9 3 2 3 9 6 8 9 7 9 7 5 1 0 2 2 4 9 6 3 8 7 7", "6 6 3 8 2 0 3 5 0 9 1 4 6 8 8 1 8 3 0 5 5 1 8 3 7"};
    int numTasks = 25;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> costs = {"1 0 2 1 1 0 0 2 2 1 2 0 1 1 2 1 2 1 2 1 2 2", "0 2 0 0 1 0 1 0 1 1 1 0 1 0 0 0 2 2 1 2 1 1"};
    int numTasks = 22;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> costs = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int numTasks = 25;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> costs = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50", "50 50 50 50 50 50 50 50 50 50 50 50 50 50 50"};
    int numTasks = 15;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> costs = {"12 94 90 13 13 94 14", "1 1 1 1 1 1 1", "35 44 35 55 44 99 95", "44 55 60 70 80 90 90"};
    int numTasks = 7;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> costs = {"1 1 1 5 5 3 3 3 3 3 3 3 3 5 5 5 5 5 5 5 5 5 5 4 4", "9 9 9 3 9 9 9 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 6 6 6", "5 5 1 1 1 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 5 5 5", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9", "9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9"};
    int numTasks = 25;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> costs = {"0 1 0 2 2 2 2 1 0 1 2 1 0 2 2 1 0", "1 1 0 2 1 1 1 1 0 2 0 0 2 2 0 0 1"};
    int numTasks = 17;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> costs = {"10 10 10 10 10", "20 20 20 20 20"};
    int numTasks = 5;
    ContractWork* pObj = new ContractWork();
    clock_t start = clock();
    int result = pObj->minimumCost(costs, numTasks);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=7223&pm=3525
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
vector<string> tokenize(string s, string ch) { 
  vector<string> ret; 
  for( int p = 0, p2; p < s.size(); p = p2+1 ) { 
    p2 = s.find_first_of(ch, p); 
    if( p2 == -1 ) p2 = s.size(); 
    if( p2-p > 0 ) ret.push_back( s.substr(p, p2-p) ); 
  } 
  return ret; 
} 
 
vector<int> tokint(string s, string ch) { 
  vector<int> ret; 
  vector<string> p = tokenize(s, ch); 
  for( int i = 0; i < p.size(); i++ ) 
    ret.push_back( atoi(p[i].c_str()) ); 
  return ret; 
} 
 
vector<vector<int> > tokmat(vector<string> s, string ch) { 
  vector<vector<int> > ret; 
  for( int i = 0; i < s.size(); i++ ) 
    ret.push_back( tokint(s[i], ch) ); 
  return ret; 
} 
 
VVI a; 
int memo[51][51][51]; 
int doit(int x, int c1, int c2) { 
  int &ret = memo[x][c1][c2]; 
  if( ret != -1 ) return ret; 
  if( x == a[0].size() ) return ret = 0; 
  ret = 1000000000; 
  for( int c = 0; c < a.size(); c++ ) if( c != c1 || c != c2 ) { 
    ret <?= a[c][x] + doit(x+1, c2, c); 
  } 
  return ret; 
} 
 
class ContractWork { 
public: 
int minimumCost(vector <string> A, int b) { 
  memset(memo, -1, sizeof(memo)); 
  a = tokmat(A, " "); 
  return doit(0, a.size(), a.size()); 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/