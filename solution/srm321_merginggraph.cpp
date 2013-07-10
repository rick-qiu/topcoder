/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6758
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

class MergingGraph {
public:
    int distanceToCycle(vector<string> adj);
};

int MergingGraph::distanceToCycle(vector<string> adj) {
    int ret;
    return ret;
}


int test0() {
    vector<string> adj = {"1 1", "2", "0 0 0"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> adj = {"0 1 1", "2", "0 0 0"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> adj = {"1", "", "3", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> adj = {"2", "5 4", "", "0", "0", "0 0"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
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
    vector<string> adj = {"1 2 2 2 2 1 1 2", "4 4", "5", "0 0", "0 0 0 0", "0 0 0 0 0"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> adj = {"", "", "", "5", "", "2 11 11", "12 3 3", "10", "14 14", "14", "14", "", "", "9 8 8 9", "1 0"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> adj = {"29", "35", "27 27", "31", "", "", "", "", "40", "38", "1", "", "7 7", "", "", "", "2", "20", "15 5 30 30", "20", "6", "34", "", "0 27", "", "36", "17 15", "29 29 18 26 18 18", "", "12 33", "", "23", "31", "39 7 10", "", "23", "", "", "", "6", "20"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> adj = {"25 25 25 25 25 25 25", "37 37 43", "19 19 19 19 19 19 19 19 19 19 19", "", "", "28 36 28", "", "", "", "", "", "", "", "9 9 10 9 10 10 9 10 10 10 10", "0 0", "", "37 35 37", "", "", "", "", "", "28 28", "", "26 26 26", "6 6 6", "20 20 20 20 20 20 20 20 20 20 20", "32 24 24 24 32 24 24 24", "27 27 27 27 27 27 27", "0 0", "", "", "26 26 26", "", "", "", "27 27 27 27", "", "43 35", "", "17 17 17 17 17 17 17", "30 30 34 33 34 34 11 11 34 34", "", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> adj = {"18 18 18 18 18 18 18 18 18 18 18", "", "27 27 27 27 27 27 27 27 27 27 27 27", "16 22", "0 0 0 0", "", "21 22 16 22", "9", "19 15 15 19 19 19", "", "9 13 13", "", "", "", "0 0", "10 10 7 7 10", "", "", "", "", "25 25 24 1 25", "2 2", "2 2 2 2", "0 0", "", "", "19 15 19", "26 8 26 26 8 8", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> adj = {"", "11", "9", "", "", "0", "", "", "13 2", "8", "8", "8", "0", "", "", "", "18 10", "1", "0 7 17", "8", "", "13"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> adj = {"18 18 18 18 18 18 18 18 18", "16 16 16 16 16 16 22 22 22 16 16 22 22 22 16 22 16", "0 41 0 41 41 0 0 0 41 0 41 0 0 41 41 41 0 0", "21 38 21 21 38 21 21 38", "", "", "35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35", "11 13 11 3 32 3 11 32 24 32 32 13 28 3 32 28 32", "17 43 40 43 19 43 40 43 43 40 17 30 40 17 43 17 40", "42 36 31 36 31 42 42 42 36 31 36 42 36 31 31 36 31", "1 1 1 1 1 1 1 1 1 1 1 1 1", "38 21 38", "", "38 21 38", "", "39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39", "4 4 4 14 14", "45 45 45 7 7", "33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33", "7 7 7", "9 9 9 9 9 9 9 9 9 9 9 9", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "4 4 4 14 14 14 14 14 4 14", "", "21 38", "", "15 15 15 15 15 15 15 15 15 15 15 15", "29 44 26 29 26 26 29 29 29 44 29 29 44 29 44 29 44", "38 38 21 38 21 38", "15 15 15 15 15 15 15 15", "45 45", "", "21 38 38 38 21 21 38 21", "20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20", "", "", "", "", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2", "6 6 6 6 6 6 6 6 6 6 6 6 6", "7", "18 18 18 18 18 18 18 18 18 18", "", "7 45 7 45 45 7", "15 15 15 15 15 15 15 15", "13 32 24 28 32 32 28 3"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> adj = {"1 1 1", "", "5 11", "4 0", "9", "", "", "2", "4", "18", "12 12", "", "", "", "17", "", "7", "2 2", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> adj = {"", "2", "0", "", "", "8", "3", "", "0"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> adj = {"16 25 1 1 13 13 27 27 16 13 1 16 13 1 13 25 1 1", "19 18 29 4 15 11 12 15 6 18", "18 15 22 15 30 33 14 6 29", "26 17 0", "8 26 28 17 7", "28 7 26 28 26 0", "", "13 27 1 2 13 25 16 16 1 13 20 16 2 25 25", "2 25 25 13 1 1 16 16 16 1 20 20 20 27 27", "26 7 28 26", "21", "28 28", "7 26 0 21 8", "24 34 35 5 34 9 9 10 31 18 14 5", "8 8", "28 17 28 8", "6 30 11 4 22 29 31 9 3 15", "16 1 27 20 20 2 25 1 27 27 20", "21 28 26", "17", "5 35 29 3 31 19 30 11 31 9", "13 27 20 25 13 16 27 16 16 27 27 27 2 16 27 13 27", "0 8 0", "8 17 8", "21 17", "24 6 29 6 19 11 9 29 19 24 30 14 31 19 23 29", "1 27 27 25 27 1 2 16 1 2", "6 29 19 18 12 18 10 23 34 14 29 34", "25 27 13 2 25 1 27 27 20 2", "26 28 28 28 26", "0", "0 8 26 21", "8 28", "7", "17 7 26 17", "8 28 26 0"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> adj = {"6 6 6 7", "", "", "1 1", "", "9 9", "", "", "", "4 4", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> adj = {"", "", "3 3", "2"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> adj = {"", "", "0", "", "", "10 7 7 10 7 10", "", "", "5 5 5", "", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> adj = {"1 1 1 9", "", "5 11", "4 0", "9", "12", "", "2 2 2 2 2", "4", "15 15", "12 12", "", "", "", "7 7", "7 7"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> adj = {"7", "", "", "20", "", "9 16", "28 11 3", "3", "4", "", "26", "21", "9", "1 20", "", "19 0", "", "18", "", "", "9", "15", "", "", "12", "6 18", "", "20 29", "26", "2", "18", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> adj = {"", "", "", "3", "5 3", "5"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> adj = {"24 34 23", "24 35 28 6", "19 30 22 28", "37 2 4 14 35 21 29 13", "25 11 4 2 0 33 36", "22 35 30 6 32", "18 25 33 14", "4 36 33 22", "1 25 7", "8 35 19", "31 35 30 14 17 31", "15", "28 3 14", "19 12 4 12 12", "11 26 25 4 37 37", "18 8 37 2 32 15 25 21", "14 6 18 37 10", "1 27 8 9 26 10 32", "4 8 37 6 16 16 27 5", "26 15 37 23 31", "20 37", "30 3 26 29 14 34", "36 7 21 0 12", "0 26 27 22 28 13 0 14 25", "0 3 19 21 34", "13 10 16 20 1 14", "23 16 3 23 22", "24 8 26 21 4", "11 8", "18 23 15 27", "7 11 37 32 19 20 10 19", "12 6 19 31 7", "18 25 14 36", "18 32 20 26 7 14 36", "32 36 27 29 29 33", "0 23 28 29 24 6", "35 36 3 21 11", "27 19 23 0"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> adj = {"8 26 29 18 26", "35", "", "31", "0", "7", "", "3 25 3 6", "5", "16 16", "24 6", "", "", "21", "0 27", "20", "23 23 14 2 23", "10", "17 17 33 33", "20", "13 13", "14 34", "2", "0 27 0 0", "31 16", "21 16", "30 33 15", "18 29 29", "16", "12 33 5 15 30", "10", "23 14 4 14", "16", "10", "0 27 27 0", "14"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> adj = {"", "2", "0", "1 1", "6", "8", "3", "", "0"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> adj = {"15", "21 22", "18 23 18 23 18 23", "7 4", "21", "", "", "21 22", "", "15 15", "", "", "", "", "", "8 8 5", "", "4", "", "9", "0 0 9 0", "2", "2", "19 20"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> adj = {"5 5", "22 12 21 20 20 2 21 10 12", "18 25", "22 5", "19 17 5", "", "26 21 23 26 26 2", "6 3 4 13", "12 26 10", "26 11 12", "0 14 3 0", "9 3 1", "9 14", "2 5 22 21", "21 26 7 19 10", "26 17 23 2 20 17", "23 7 12 21", "4 16 4 4 13 4", "21 7 17 20", "8 4 25", "8 3", "16 3", "0 25 15 9", "1 3 6 16 13", "1 4 3 3 6 6 1", "24 22 23", "1 0 9"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> adj = {"38 1 1 38 38 38 9", "40 40 14 30 15 14 14 15 14", "23 11 11 23 10 35 20 35", "25 0 4 4 25 0 25", "38 1 9 1 1", "36 36", "34 25 34 34 0 0 4 25", "24 22 22 24 22 2", "4 0 4 34 25 4 0", "16 30 18 40 14 40 16 15 18 18 14 40 18 40", "36 12 36 36 36", "12 12 36 36 36 12 36 12", "8 3 8 28 6 3 8 31 3 3 31 28 13 31 13 13 8 31 8", "0 0 34 0 0 34 25 4", "", "37 29 32 32 32", "26 27 32 37", "", "37 7 32 17 26", "10 33 35 10 10 23 23 5 35 20 23", "12 12 36 12 12", "12 36 36", "5 11 11 33 33 23 20 33 23 23", "36 12 36 12 12 12 36 12", "11 5 10 35 21 10 5 5 10", "1 38 38 1 38 9 38 38 1 38 38 9", "22 19 2 2 22 24 22 2", "24 19 24 24 22 19", "0 34 25 0", "22 19 2 24 22 19 19", "32 26 29 17 26 7", "4 25 34 25", "19 22 24 24", "12 36 36 36 12 36", "9 9 9 38 1 1 9 9 1 9 38 1", "12 36 36 12 12 36", "28 31 13 8 28 3 8 8 8 13 31 28 6 3 6 13 6", "19 19 19 22 19 24 22 2", "40 14 14 14 15 30 30 14 16", "17 32 26 17 29", "26 32 26 17"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> adj = {"8 8 8 8 8 8 8 8", "", "0 0", "", "0 0", "", "", "1", "15 15 15 15 15 15 15 15 15 15 15", "", "9", "", "", "", "0 0 0 0", "10 7 10 10 7"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> adj = {"", "19 19 19", "15 15 15 15 15 15", "19 19 19 19 19 19 19", "7", "20 20 20", "25 25 42 25 42 42 25 25", "", "22 22 22 22 22 22 22", "", "", "13 13 13", "20 20", "40 5 5 40 12", "22 22", "17 17 17 17 17", "33 33 21", "9 9 9 28", "", "", "", "", "", "14 8 8", "33", "2 2 2", "", "35 35", "", "7", "44 44 44", "41 41 41 41 41 41 41", "", "", "7", "44 44 44 44", "", "27 27 27 27 27 27 27 27 27 27", "13", "45 45 45 45 45", "20 20 20 20", "46 46 46 46 46 46 46", "2 2 2", "", "1 3 1 3 3 3 1 1 3", "", "47 47 47 47", "18 18 18 18 18 18 18 18"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> adj = {"7", "9", "", "1", "6 7 7", "9", "10", "10", "0", "", "1", "1"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> adj = {"9 38 38 9 9 38 38 9 9 38 38 38 38", "16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16", "33 33 11 11 33 20 11 11 5 11 33 33 35 11 33 20 20", "34 34 4 4 4", "0 25 25", "10 23 10", "8 3 13 13", "24 19 19 19 22 22 19 19 19", "34 4 4 34", "1 1 1 1", "36 12 12 12 12 12 12", "10 21 21 23", "", "4 34 4 34 4", "27 26 17 27 26", "29", "18 15 14 14 15 15 14 30 15 15 18 15", "7 7 7 7", "26 27 26 37 27 27 27", "2 2 2 2 2 2", "10 23 21 10 21", "12 12 36 36 36 12 36 12 12", "2 2 2 2", "36 12 12 12 12", "2 2", "38 38 38 38 38 38 38 9 9 9 38 9 38 9 9 9 9 9 38", "7 7 32 7 32 7 7 7 7", "7", "31 3 31 3 31 13 8 3 13 31", "7 7 7 32", "17 26 27 37", "34 34", "24 24 19 19 22 24 24 24", "10 21 21 10 10", "0 25 25 0 0 25 25 0 25 25", "23 10", "", "7 7 32 7 7", "1 1 1 1 1 1 1 1"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> adj = {"", "2", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> adj = {"", "5 5", "5 9 3", "", "", "7 7", "8", "2", "1", "", "7 8 8"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> adj = {"26 18 18", "", "0", "16", "0", "20 10", "16", "3", "19 15 19 5", "", "11", "21", "10", "21", "0", "20", "14", "10", "", "20", "13", "2 4", "23 14 14 14", "0 0", "", "", "12 17 12 15 15"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> adj = {"", "", "", "", "7", "", "7", "1"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> adj = {"8", "", "0 0", "", "", "10 7 7 10 7 10 7 10 10", "", "", "5 5 5 5 5 5", "", "", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> adj = {"", "", "9", "", "0", "", "", "1", "16", "", "", "", "", "", "", "", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> adj = {"", "", "", "", "", "", "23", "27", "", "", "", "", "", "", "", "25", "", "", "", "", "", "15", "", "", "", "", "", "", "", "", "6", "", "", "", "", "12", "18", "9 16"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
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
    vector<string> adj = {"", "", "10 10", "", "", "4 8 0 6", "", "5 10", "", "7 7", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> adj = {"", "14 29 6 14 11 11 29 14 11", "34 15 34 15 15 15 15 15 15", "", "21 21 21", "", "28 28 21 21 28 21 28", "38 16 38 38 38 38 38 16 38 38 38 16 16 38 38 16 16", "27 27 1 1", "7 7 7", "0 0 0 0 0 0", "28 21 28", "", "37 37 33 37 12 30 33 30 12 37 37 30", "21 28 21 21", "36 39 8 26 39 17 26 17", "23 18 32 23 10 32 23 18 10 10 23 32 18 18", "1 1 1 27 27 27 27 27 1 27 1 27 27", "0 0 0 0", "7 7 7 7", "15 15 15 15 34 34 15 34 15 15 34 34 15 34", "", "7 7 7 7 7 7 7", "0 0 0 0", "", "37 37 12 5 5 37 30 5", "1 1 27", "29 11 11 11 11 14 6 29 14 29 11 14 4 11", "", "28 21 28", "", "", "0 0 0 0", "", "17 26 8 8 36 36 39 8 26 8 39 36", "7 7 7 7", "1 27 27 1 27", "", "23 18 18 32 23 32 32 10 10 18 23 18", "27 27 27"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> adj = {"2 2 2 2 2 2 20 20 20 20 2 2 20 2 2 20 2", "32 11 30 5 12 32 5", "9 19 34 15 15 24 35 24 24 35 15 9 35 34 15 15 35", "28 21 21 28", "21 28", "0", "", "13 1 13 25 1 27 25 1 27 38", "1 27 25 1 27 27 38 27 13 13 13", "26 17 36 8 36", "21 21 0 21 0", "", "0 0 0", "37 3", "28 28", "8 26 8", "14 10 32 10 30 37 5", "13 13 25 38 38 16 13 27", "21 28", "36 7 8", "24 19 24 24 24 22 15 22 34 34 22 15 15 19 34 22 34", "20 2 2 2 2 2 20 20 20 20 2 2", "36 26", "21 28", "8 8 26", "11 29 31 32", "25 13 27 1 16 25 25", "18 10", "20 20 2 2 20 2 2 2 2 2 20 20 2 20", "28", "28 21", "21 0", "21 0 28", "28", "36 36 17 7 17 26 36 8 26", "7 26", "27 16 13 13 16 1 25 1 1", "21 28 21", "23 37 18 30 18 30 30 31 4 6 14 6 11 29"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> adj = {"7", "2 2", "", "21", "", "", "24 24 24", "13 13", "0", "", "", "", "9", "20 20", "", "", "", "", "13 13", "7 18", "22", "2 2", "", "1 1", "12 12 5", "18", "15"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> adj = {"7 7", "22 22 22", "42 43 42 42", "29 29 1 29 44 44", "45 18 6 45 6 18 6 6 6 6 45", "9 2 2 2", "28 28 28 28 28", "49 13 48 35 49 48 13", "30 31 31 31 30", "43 42 43 42 42", "26 26 37 37", "26 26 5 26", "22", "38 38 38 21", "", "14 30 31 14 30 19 19 31", "40 39 0 39 39 39 0 39", "", "28 28 28 28 28 28", "", "15 15 8 8 15 8 15 8 15 8", "", "41", "44 29 29 29 44", "37 5", "7 47 7", "9 2 9", "", "20 20 20 20 20 20 20 20 20 20 20 20", "22 22 22 46", "", "", "38 21 21 21", "21", "5 5 37 37", "21 21", "", "9 2", "", "47", "7", "", "", "", "46 46 46", "28 28 28", "36", "32 33 13 33 32 13", "21 38 38 21", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> adj = {"7 7 7 6 7 18 6 6 7", "9 8 16 15", "4 19 30 19", "26 1 21 12 21 29 5", "18 6 7 6 18 6", "9 16 15 15", "13 13 23 13 28 13 11 34 13 11 33 24 23 13 11 27 10", "24 34 10 32 33 11 10 23 28 10 32 24 3 27 28 27 32", "4 19 30 19 0 14 14 17 25", "19 17 17 0", "12 12 20 5", "12 29 5 12 5", "9 9 22 22 9 2 22", "26 20 29 26 29 21 5 26", "18 7 18 7 7 7 6 18", "19 0 31 4 4 31", "25 25 30 30 30 14", "18 6 6 18", "10 33 33 11 34 23 28 28 32 3 32 34 23 3 28", "6 7 7 7", "9 9 2 2 16", "15 16 16 2 2 2 22 8 16 9 16 2 22", "17 25 19 25", "1 12 1", "20 20 26", "6 18 18 18 18 7 6 7 18", "22 9 9 22 8 2", "29 26 1", "1 20 26 29", "2 9 16 2 16 15 16", "18 18 6 18 6", "7 7 18", "26 20 12 21 21 26 1", "21 21 20 21", "20 12 29 1 20 1"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> adj = {"", "", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> adj = {"12", "", "", "", "", "4", "7", "", "", "", "", "", "3"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> adj = {"2", "3", "4", "1", "0"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> adj = {"16", "6", "17", "8", "29", "3", "35", "32", "23", "37", "20", "26", "18", "38", "10", "5", "11", "39", "33", "22", "27", "4", "15", "31", "13", "19", "9", "28", "25", "7", "0", "36", "1", "2", "14", "12", "34", "24", "21", "30"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> adj = {"22", "5", "44", "34", "26", "20", "15", "31", "38", "25", "42", "13", "30", "33", "23", "49", "24", "12", "11", "40", "19", "46", "48", "18", "36", "41", "2", "47", "37", "17", "1", "21", "27", "9", "29", "7", "28", "6", "45", "10", "35", "16", "14", "8", "0", "39", "3", "4", "32", "43"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> adj = {"43", "32", "45", "37", "13", "30", "15", "5", "3", "18", "1", "19", "27", "29", "42", "34", "10", "41", "12", "46", "44", "20", "16", "7", "47", "17", "22", "4", "36", "2", "6", "0", "38", "11", "24", "14", "21", "25", "33", "28", "26", "40", "39", "23", "8", "9", "35", "31"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> adj = {"32", "15", "18", "9", "38", "41", "36", "26", "43", "44", "31", "13", "7", "10", "42", "16", "22", "35", "20", "8", "3", "29", "30", "40", "37", "24", "12", "21", "1", "27", "28", "14", "34", "23", "33", "4", "39", "25", "5", "6", "0", "17", "11", "19", "2"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> adj = {"41", "37", "22", "10", "43", "48", "15", "49", "29", "6", "39", "38", "2", "8", "21", "11", "1", "30", "20", "46", "9", "34", "13", "24", "17", "32", "35", "33", "26", "28", "40", "12", "42", "14", "31", "16", "4", "23", "0", "25", "18", "47", "44", "45", "27", "5", "3", "36", "7", "19"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> adj = {"12", "43", "24", "11", "26", "41", "21", "18", "44", "2", "25", "1", "9", "7", "0", "29", "45", "23", "34", "3", "38", "33", "36", "22", "16", "30", "40", "28", "37", "5", "4", "13", "20", "14", "32", "6", "10", "31", "19", "35", "39", "42", "27", "8", "15", "17"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> adj = {"40", "15", "19 7", "38", "0", "26", "33", "", "5", "45", "29", "49", "8", "30", "47", "20", "28", "27", "13", "44", "1", "37 42", "23", "14", "25", "36", "39", "43", "11", "16", "18", "41", "17", "35", "12", "", "24", "48", "32", "34", "4", "22", "6", "3", "2", "21", "9", "31", "46", "10"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> adj = {"2", "33", "11", "17", "44", "32", "24", "35", "46", "0", "26", "22", "", "6", "37 15", "", "31", "40", "36", "41", "1", "13", "19", "3 38", "29", "34", "7 43", "", "30", "49", "20", "48", "27", "14 5", "23", "21", "47", "16", "45", "8", "28", "42", "18", "", "10", "9", "12", "39", "25", "4"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> adj = {"33", "4", "16", "38", "27", "19", "48", "13", "", "49", "11", "46", "32", "3", "6", "", "14", "23", "15", "39", "31", "47", "25", "42", "45", "35", "30", "24", "26", "44", "20", "43", "37", "18", "28", "40", "7", "34", "5", "12", "17", "10", "41", "36", "21", "2", "9 0", "1", "22 8", "29"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> adj = {"17", "16", "41", "35", "6", "3", "45", "44", "49", "", "23 30", "36", "42", "1", "39", "37", "14 8", "40", "24", "31 46", "", "18", "43", "47", "25", "22", "10", "20", "32", "19", "", "0", "5", "48", "2", "4", "27", "12", "9", "11", "29", "38", "33", "15", "21", "13", "7", "26", "28", "34"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> adj = {"13", "42", "44", "4", "", "27", "8", "12", "43", "48", "", "31", "39", "47", "15", "0", "6", "20", "32", "3", "14", "35", "26", "1", "38", "40", "30", "2 45", "41", "7", "37", "49", "34", "5", "46", "16", "25", "28", "29", "21", "", "18", "33 10 17", "19", "23", "11", "9", "36", "22", "24"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> adj = {"41", "48", "40", "28", "23", "1 25", "46", "2", "42", "43", "13", "49", "26", "0", "15", "14", "", "20", "34", "", "21", "31", "6", "24", "36 35 16", "9", "11", "22", "33", "5", "7", "39", "38", "27", "32", "44", "29", "47", "17", "19", "", "8", "30", "10", "37", "12", "45", "18", "4", "3"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> adj = {"10", "48", "1", "33", "19", "", "15", "5", "22", "39", "16", "20", "37", "40", "46", "25", "6", "3", "12", "13", "7", "11", "41", "23 42", "47", "31", "27", "18", "35", "0", "49", "36", "38", "21", "", "32", "26", "17", "2", "28", "8", "14", "44", "29", "9 34", "4", "24", "43", "30", "45"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> adj = {"20", "13", "27", "31", "37", "1", "8", "24", "34 11", "40", "36", "", "28", "14", "23 4", "", "17", "6", "26", "35", "22", "44", "2", "41", "16", "0", "5", "29", "25", "39", "7", "48", "18", "45", "43", "32", "47", "15", "46", "42", "12", "10", "49", "19", "38", "21", "3", "30", "9", "33"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> adj = {"", "44", "19", "48", "35", "38", "7", "30", "20", "29", "49", "25", "", "27", "40", "32", "", "15", "36", "0", "14", "39", "8", "37", "46", "23", "18", "3", "2", "17", "42", "33", "43", "34", "5", "6 41", "28", "22", "", "47", "24 9", "13", "4", "10", "31", "21", "", "45", "26", "12"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> adj = {"46", "14", "", "4", "9", "27", "13", "40", "17", "2", "16 36", "25", "15", "5", "26", "49", "22", "42", "33", "21", "7", "47", "11", "", "1", "18", "34", "37", "39", "", "29", "", "28", "48", "32", "45", "20", "19 24", "41", "38", "8", "0", "30", "44", "10", "43", "", "6", "35", "3"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> adj = {"6", "25", "35", "12", "0", "30", "15", "28", "39", "40", "16", "34", "10", "33", "23", "42", "4", "27", "8", "11", "29", "45", "44", "32", "49", "36", "24", "20", "", "48", "17", "38", "5", "18", "13", "1", "31", "", "7", "14", "41", "21", "26", "19", "43", "47", "2", "3", "22", "9"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> adj = {"41", "30", "38", "20", "24", "", "2", "46", "16", "42", "48", "3", "", "13", "36", "26", "29", "10", "19", "45", "7", "43", "35", "39", "23", "40", "4", "32", "37", "47", "25", "0", "14", "17", "44", "18", "8", "11", "9", "6", "34", "12", "28", "27", "21", "15", "33", "22", "31", "1"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> adj = {"17", "13", "11", "7", "36", "23", "34", "15", "42", "10", "33", "30", "28", "5", "37", "9", "4", "43", "22", "24", "32", "26", "25", "16", "18", "27", "0", "38", "2", "12", "1", "47", "49", "45", "14", "", "39", "20", "44", "40", "6", "46", "19", "3", "31", "29", "21", "41", "35", "48"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
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
    vector<string> adj = {""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> adj = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "0", "13", "14", "15", "16", "17", "18", "19", "12", "21", "22", "", "24", "25", "26", "", "28", "29", "30", "31", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> adj = {"1", "2", "3", "4", "5", "0", "7", "8", "10 15", "11", "9", "12", "13", "14", "6", "", "2", "18 18", "", "20 20", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> adj = {"1", "0", "3", "4", "5", "2"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> adj = {"1", "2", "3", "4", "5", "0", "7", "8", "6"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> adj = {"1", "2", "3", "0", "5", "6", "7", "4", "9", "10", "8", "12", "13", "11"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> adj = {"2", "5 4", "", "0", "0", "0 0"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> adj = {"1", "2", "3", "4", "5", "0", "7", "8", "9", "6", "", "10", "10", "11", "12", "13", "14"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> adj = {"1", "2", "0", "4", "5", "6", "7", "8", "3"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> adj = {"3 5 4", "5", "6", "7", "", "", "", "", "2 10 11", "", "", "", "", "", "", "", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> adj = {"", "", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> adj = {"0 2 2", "1 1 1", "0 0 0", "3 1", "2 1", "1", "4", "7", "4 5 2", "1 3 5"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> adj = {"2", "5 4", "", "0", "0", "0 0", "", "0 1 1", "5 4"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> adj = {"1", "2", "3", "4", "0", "6", "7", "8", "5"};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> adj = {"", ""};
    MergingGraph* pObj = new MergingGraph();
    clock_t start = clock();
    int result = pObj->distanceToCycle(adj);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390224&rd=10001&pm=6758
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
 
using namespace std;
 
typedef long long int64;
typedef vector<int> vi;
#define FOR(i,n) for (int i=0; i<(n); i++)
 
struct MergingGraph {
  bool e[60][60],b[60],b2[60];
  int N,nr[60];
  void dfs(int x,int len,int cur=0) {
    if (b[x]) return;
    b[x]=true;
    nr[x]=cur;
    FOR(y,N) if (e[x][y]) { b2[cur]=true; dfs(y,len,(cur+1)%len); }
    FOR(y,N) if (e[y][x]) { b2[(cur+len-1)%len]=true; dfs(y,len,(cur+len-1)%len); }
  }
  int distanceToCycle(vector <string> adj) {
    memset(e,0,sizeof(e));
    N=adj.size();
    FOR(i,N) {
      istringstream tmp(adj[i]);
      int j; while (tmp>>j) e[i][j]=true;
    }
    for (int len=N; len>=1; len--) {
      bool ok=true;
      memset(b,0,sizeof(b));
      int sum=0;
      FOR(start,N) if (!b[start]) {
        memset(b2,0,sizeof(b2));
        dfs(start,len);
        FOR(i,N) sum+=b2[i];
      }
      ok&=sum>=len;
      FOR(i,N) FOR(j,N) ok&=!e[i][j] || nr[j]==(nr[i]+1)%len;
      if (ok) return N-len;
    }
    return N;
  }
};
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/