/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5980
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

class GalaxyTrip {
public:
    vector<int> possibleValues(vector<string> dependencies);
};

vector<int> GalaxyTrip::possibleValues(vector<string> dependencies) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> dependencies = {"1 2", "0", "0", ""};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> dependencies = {"1 2", "0 2", "0 1"};
    GalaxyTrip* pObj = new GalaxyTrip();
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
    vector<string> dependencies = {"", "", "", ""};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> dependencies = {"4 2", "3", "0 4", "1", "0 2", "6", "5"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 7};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> dependencies = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> dependencies = {"1", "0", "3", "2", "5", "4", "7", "6", "9", "8", "11", "10", "13", "12", "15", "14", "17", "16", "19", "18", "21", "20", "23", "22", "25", "24", "27", "26", "29", "28"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> dependencies = {"7", "10 4", "4", "6 8", "2 1", "10 9", "3", "0", "11 3", "12 5", "1 5", "8", "9 13", "12"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 6, 8, 10, 12, 14};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> dependencies = {"1", "0", "3", "2 4", "3 5", "4 6", "5 7", "6 8", "7 9", "8 10", "9 11", "10 12", "11 13", "16 12 14", "13 15", "14 16", "13 15 17", "16 18", "17"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 17, 19};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> dependencies = {""};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> dependencies = {"", ""};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> dependencies = {"1", "0"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> dependencies = {"2", "", "0"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> dependencies = {"1 3", "0 2", "1 3", "2 0"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> dependencies = {"7", "7", "7", "7", "7", "7", "7", "0 1 2 3 4 5 6 8 9 10 11 12 13 14 15 16 17 18 19 20", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> dependencies = {"", "2 3", "1 3", "1 2", "5 7 9 11", "4 6 8 10 12", "5 7 9 11", "4 6 8 10 12", "5 7 9 11", "4 6 8 10 12", "5 7 9 11", "4 6 8 10 12", "5 7 9 11"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 9, 10, 12, 13};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> dependencies = {"1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28", "1 3 5 7 9 11 13 15 17 19 21 23 25 27 29", "0 2 4 6 8 10 12 14 16 18 20 22 24 26 28"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> dependencies = {"1", "0 2 7 3", "1", "1 4", "3 5", "4 6", "5 7", "1 6 8", "7 9", "8 13", "13", "12", "11 13", "9 10 12 14", "13", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> dependencies = {"1 3 5 7 9", "0 2 4 6 8", "1 3 5 7 9", "0 2 4 6 8", "1 3 5 7 9", "0 2 4 6 8", "1 3 5 7 9", "0 2 4 6 8", "1 3 5 7 9", "0 2 4 6 8", "19", "19", "19", "19", "19", "19", "19", "19", "19", "10 11 12 13 14 15 16 17 18"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 20};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> dependencies = {"3 4 5 6 7 8", "9 10 11 12 13 14", "15 16 17 18 19", "0", "0", "0", "0", "0", "0", "1", "1", "1", "1", "1", "1", "2", "2", "2", "2", "2"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 13, 14, 20};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> dependencies = {"5 6 7 8 9", "10 11 12 13 14", "15 16 17 18 19", "4", "3", "6 0", "5 0", "0", "0", "0", "1", "1", "1", "1", "1", "2", "2", "2", "2", "2"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 8, 12, 14, 18, 20};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> dependencies = {"4 8 12 16", "5 9 13 17", "6 10 14 18", "7 11 15 19", "0 8 12 16", "1 9 13 17", "2 10 14 18", "3 11 15 19", "0 4 12 16", "1 5 13 17", "2 6 14 18", "3 7 15 19", "0 4 8 16", "1 5 9 17", "2 6 10 18", "3 7 11 19", "0 4 8 12", "1 5 9 13", "2 6 10 14", "3 7 11 15", "21 22 23 24", "20", "20", "20", "20", "26 29", "27 25", "26 28", "27 29", "25 28"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10, 15, 20, 25, 30};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> dependencies = {"5 6 7", "8 9 10", "11 12 13", "14 15 16", "17 18 19", "0", "0", "0", "1", "1", "1", "2", "2", "2", "3", "3", "3", "4", "4", "4", "22 23 24", "25 26 27", "20", "20", "20", "21", "21", "21"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8, 12, 16, 20, 24, 28};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> dependencies = {"5 6 7", "8 9 10", "11 12 13", "14 15 16", "17 18", "0", "0", "0", "1", "1", "1", "2", "2", "2", "3", "3", "3", "4", "4", "20 21", "19 21", "19 20 22", "21", "24", "23 25", "24 26", "25"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 7, 8, 11, 12, 15, 16, 19, 20, 23, 24, 27};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> dependencies = {"1 2", "0 2", "0 1", "4 5", "3 5", "3 4", "7 8", "6 8", "6 7", "10", "9 11", "10", "13 14", "12", "12", "16", "15 17", "16", "19", "18 20", "19", "22", "21 23", "22", "25", "24 26", "25", "28 29", "27 29", "27 28"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> dependencies = {"1 2", "0 2", "0 1", "4 5", "3 5", "3 4", "7 8", "6 8", "6 7", "10", "9 11", "10", "13 14", "12", "12", "16 18", "15 17 18", "16 18", "15 16 17"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 6, 7, 9, 10, 12, 13, 15, 16, 19};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> dependencies = {"1 2", "0 2", "0 1", "4 5", "3 5", "3 4", "7 8", "6 8", "6 7", "10", "9 11", "10", "13 14", "12", "12", "16 18 19", "15 17 18 19", "16 18 19", "15 16 17 19", "15 16 17 18"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 6, 8, 9, 11, 12, 14, 15, 17, 20};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> dependencies = {"13 2 10 3 1 12 8 18 5 16 19 6 15 14 11 17 7 4 9", "19 14 12 16 8 13 15 9 5 2 0 6 17 10 7 18 11 4 3", "11 19 17 10 7 6 5 1 4 12 18 16 8 15 3 9 13 0 14", "16 7 15 4 17 11 6 2 1 0 14 13 10 5 18 12 8 19 9", "12 8 9 1 2 15 16 0 3 10 14 7 19 6 5 17 11 18 13", "16 0 17 15 1 14 13 19 11 18 4 10 8 6 9 2 3 12 7", "15 3 13 1 17 0 9 10 11 16 19 2 5 7 4 12 14 18 8", "0 16 6 14 1 13 10 9 4 19 5 3 15 17 8 18 12 2 11", "0 3 2 6 18 5 17 9 4 13 16 15 12 19 7 10 11 14 1", "3 10 12 11 16 8 15 6 0 13 4 17 19 1 2 14 7 5 18", "18 6 0 1 7 19 3 17 14 4 2 8 12 15 13 16 9 5 11", "13 4 8 19 16 5 0 6 14 9 12 1 7 18 10 3 2 15 17", "14 13 7 4 2 18 11 1 9 8 10 15 19 0 16 17 3 6 5", "9 10 18 12 16 14 7 3 1 6 2 4 19 15 8 5 11 17 0", "11 10 17 15 5 0 3 2 1 9 4 6 12 18 7 8 16 13 19", "7 17 19 13 4 11 0 16 8 14 3 12 5 9 2 10 18 1 6", "15 4 0 12 2 18 6 3 8 14 19 1 13 17 10 7 5 11 9", "8 5 4 2 14 15 7 11 6 12 19 1 18 13 10 3 9 16 0", "7 14 5 1 3 10 16 0 4 6 15 17 13 8 12 9 19 2 11", "10 17 5 4 14 13 12 6 3 16 8 2 15 1 18 11 7 9 0"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> dependencies = {"5 2 4 3 1 6", "3 0 6 2 4 5", "0 6 5 1 3 4", "6 2 5 1 4 0", "2 1 3 5 6 0", "3 0 1 4 2 6", "2 1 0 5 3 4"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> dependencies = {"3 9 10 11 15 13 4 7 18 17 12 6 8 19 1 5", "17 18 10 8 13 14 0 19 15 12 2", "1 16 9 11 7 19 3 6 5 14 8", "17 4 18 2 16 12 13 7 19 14 5 10 15 0 8", "15 3 16 18 17 6 5 0", "4 3 11 12 2 14 17 16 18 7 13 15 8 19 10 0 9", "0 2 18 11 15 9 4 14 12 19", "17 14 2 18 0 8 9 10 5 11 12 3 13", "18 15 1 9 2 7 16 14 19 5 12 10 3 17 0", "13 19 2 7 14 11 17 0 5 6 16 8 15", "16 12 19 11 5 7 0 15 18 8 13 3 14 1 17", "9 5 17 6 16 13 2 0 19 7 10 15 14", "5 16 8 7 15 14 3 13 10 18 19 6 0 1", "5 19 7 3 18 10 14 1 12 9 11 0 16", "1 18 12 2 6 3 10 7 16 8 5 17 11 13 9 19", "0 17 1 10 8 12 11 3 9 19 5 6 4", "3 14 5 13 8 19 2 17 12 4 9 18 11 10", "5 15 3 1 4 7 11 8 9 14 16 10 0", "14 5 3 7 12 8 6 0 10 4 16 13 1", "5 1 9 2 14 16 10 3 13 0 6 8 11 15 12"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> dependencies = {"7", "11 17 7 2", "15 1 3", "2 17 18", "13", "8 6 16", "12 5", "13 14 1 0", "5", "13", "12", "1 14 17", "6 15 10", "7 9 4", "7 11", "12 2", "5", "11 1 3", "3"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> dependencies = {"2", "6 9 5 3 7", "0 4 10", "1 9 6", "10 8 9 7 2", "1 6", "3 5 8 1 7", "1 6 4", "4 6", "1 10 4 3", "2 4 9", "18", "17", "15 17", "15", "13 18 16 14", "15", "13 12 19 18", "15 19 11 17", "18 17"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 11, 20};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> dependencies = {"1 2", "0 2", "1 0", "7 4 6 5", "6 3 7 5", "4 7 6 3", "5 7 3 4", "3 5 6 4", "11 10 9 12 13", "12 8 13 11 10", "13 9 12 11 8", "10 9 8 13 12", "8 10 9 11 13", "10 12 8 11 9", "17 18 16 15 19", "14 18 16 19 17", "14 15 19 17 18", "14 19 15 18 16", "19 16 15 14 17", "17 18 15 16 14"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 6, 8, 9, 11, 12, 14, 15, 17, 20};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> dependencies = {"1", "0", "6 5 3", "5 6 4 2", "6 3 5", "6 3 4 2", "2 3 5 4", "10 9 8 12 11", "7 12 11 9 10", "7 8 11 10", "11 9 12 8 7", "12 9 10 7 8", "10 7 11 8", "16 17 19 18 14 15", "18 16 17 13 19", "16 13 19 17", "17 13 15 19 18 14", "14 16 19 18 15 13", "16 17 14 19 13", "18 15 16 14 17 13"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 18, 20};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> dependencies = {"12 2 13 14 5 9", "4", "5 13 14 9 12 0", "8 11 17 16", "1", "9 12 13 2 0 14", "", "10 19 15", "11 3 16 17", "5 12 2 14 13 0", "7 15 19", "17 3 16 8", "5 9 2 0 13 14", "0 12 9 2 5 14", "9 12 2 5 13 0", "10 19 7", "8 17 11 3", "11 3 16 8", "", "15 7 10"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> dependencies = {"13 2 14 18 5 12", "8 17 3 11", "18 0 14 13 12 5", "11 17 1 8", "", "18 0 12 13 2 14", "16", "15 10 19 9", "17 3 1 11", "7 19 10 15", "19 7 15 9", "8 17 3 1", "0 13 5 2 18 14", "18 0 14 5 12 2", "2 5 12 0 18 13", "10 7 19 9", "6", "1 8 11 3", "5 12 2 14 0 13", "10 9 15 7"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> dependencies = {"10 5 12 13 7 14 19 9 15", "11 16 17 6 4 3 18 8 2", "11 1 18 17 3 8 6 16 4", "6 16 1 4 17 18 11 2 8", "2 16 8 3 1 17 11 18 6", "13 14 15 10 19 12 9 0 7", "16 17 1 11 3 2 4 18 8", "19 14 13 12 0 5 10 15 9", "4 16 11 3 17 2 18 1 6", "0 5 15 10 14 7 19 12 13", "19 5 15 14 12 7 9 0 13", "17 6 16 3 1 8 18 2 4", "13 9 15 5 14 0 7 10 19", "10 0 7 9 15 5 14 12 19", "9 10 5 7 12 0 13 19 15", "13 7 5 12 9 14 0 19 10", "4 1 6 11 8 3 18 2 17", "3 11 6 18 2 8 1 16 4", "6 2 3 8 17 4 16 1 11", "9 10 7 15 0 5 13 14 12"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 20};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> dependencies = {"9 5 13 12", "3 7 8", "6 10 14 15", "7 1", "", "12 13 9 0", "10 2", "8 11 1 3", "1 7 11", "12 0 5", "2 15 14 6", "7 8", "5 9 0", "5 0", "15 10 2", "2 10 14"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 6, 10, 11, 15, 16};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> dependencies = {"13 5 12 18 15 7 16 2 10 8 9 14 11 17 19", "3", "18 15 10 12 5 0 7 6 19 17 14 16 13", "1", "", "6 11 7 13 14 2 12 19 0 9 16 17 8 15 18", "14 7 5 13 9 15 2 16 17 12 18", "14 16 6 19 10 11 0 17 13 9 2 18 5", "17 15 16 13 5 12 18 14 19 10 11 0", "12 16 0 5 17 19 11 6 14 13 15 7", "11 2 16 17 13 8 7 19 18 14 12 0", "7 12 15 0 8 18 10 5 19 14 17 9", "11 10 17 19 0 8 5 16 9 15 18 2 6 14", "19 2 7 6 9 0 8 16 15 10 18 14 5 17", "0 8 12 17 9 18 10 11 19 6 13 15 5 2 7", "16 8 17 9 11 14 2 0 13 5 6 18 12", "10 6 12 17 15 2 5 8 13 9 7 19 0", "12 14 16 0 13 8 18 9 11 10 5 2 15 19 6 7", "11 5 10 2 15 17 8 13 14 12 7 19 6 0", "2 16 14 9 11 17 18 7 0 12 10 8 13 5"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> dependencies = {"8 5 2 11", "3", "14 11 8 0 10 17", "1", "", "7 14 15 0 18 13 10", "9 17 18", "18 9 14 10 5", "14 2 17 13 0 12", "18 12 17 7 6 14 15", "5 16 7 2", "2 12 16 0 13", "8 9 13 16 11", "5 8 12 11 16 17", "17 18 2 8 5 9 7", "5 16 9", "12 11 10 15 13", "8 9 13 2 14 6", "5 9 6 7 14"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> dependencies = {"15 9 7 19 12 13 5 14 10", "17 3 11 16", "6 17 16 18 3", "18 6 11 1 16 2 8", "16 11 17", "7 14 12 15 0 19 9", "16 2 17 3 18", "14 19 5 9 0", "11 3 16 18", "15 7 12 5 13 0", "19 14 0", "4 8 3 1 17 18", "15 14 19 9 5 0", "9 0 15 19", "10 12 19 15 5 0 7", "0 14 13 9 5 12", "2 4 6 3 8 1 17", "4 6 16 2 18 1 11", "11 8 17 2 6 3", "13 7 5 0 14 12 10"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 20};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> dependencies = {"13", "4", "20", "11 14", "1", "6", "16 14 5", "11", "28", "12", "21", "7 3", "9", "0", "3 6", "19", "6 22 18", "24", "16", "15", "2", "10", "16", "27", "17", "26", "25", "23", "8"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 23, 25, 27, 29};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> dependencies = {"13", "4", "20", "6", "1", "16", "3", "18", "28", "12", "21", "16", "9", "0", "22", "19", "5 11", "24", "7", "15", "2", "10", "14", "27", "17", "26", "25", "23", "8"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> dependencies = {"27 13 23 12", "24", "20 25 26", "7 14 6 5 16 22", "", "3 16 14 6 7 22", "14 16 5 7 22 3", "14 16 3 22 6 5", "17 11", "10 21 19 15 18", "19 15 9 18 21", "8 17", "27 23 0 13", "27 23 0 12", "7 6 22 3 16 5", "9 10 19 21 18", "6 7 5 14 3 22", "8 11", "15 9 21 10 19", "10 21 18 15 9", "2 25 26", "15 18 19 9 10", "16 14 3 6 5 7", "13 12 0 27", "1", "26 20 2", "20 2 25", "12 0 23 13"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> dependencies = {"15 12 27 9 13 23", "4", "25 26 20 11", "5 14 7 21 18 22 6 19 16", "1", "19 3 16 6 7 22 14 18 10 21", "18 19 21 5 7 14 16 3 10 22", "19 14 16 18 5 10 3 6 22 21", "24 17", "0 12 23 15 27 13", "19 16 6 22 14 5 7 21 18", "25 26 20 2", "9 23 15 13 0 27", "9 12 15 0 23 27", "16 10 3 6 19 18 7 22 21 5", "0 12 27 13 9 23", "7 10 5 6 14 3 18 22 19", "8 24", "3 22 21 10 5 16 14 7 6 19", "21 22 7 6 14 16 3 5 18 10", "11 2 26 25", "6 19 22 14 5 10 7 18 3", "7 6 3 5 16 18 19 10 14 21", "9 13 0 12 15 27", "8 17", "26 2 20 11", "11 20 2 25", "13 12 0 15 9 23"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 23, 25, 26, 28};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> dependencies = {"25 1 17 2 26 29 23 20 13 12 4 24", "13 24 17 0 27 29 25 12 2 28", "1 17 12 0 23 13 27 26", "6 22 16 18 15 7", "25 28 0 12 24 23 20 26 17", "16 15 7 11 9 21", "18 3 21 16 15 9 19 14", "19 3 15 21 22 14 9 10 5", "", "11 7 14 6 22 5 19 21", "22 14 11 15 19 7 18", "9 18 14 22 10 16 21 5", "17 27 20 25 23 0 4 2 26 1", "23 26 28 24 25 27 0 1 2", "9 7 19 6 11 18 16 15 10", "21 14 16 22 19 7 10 6 3 5", "22 14 3 5 19 11 21 18 6 15", "23 27 1 0 2 24 26 4 12", "10 14 22 6 11 3 16", "6 14 9 16 10 15 7 22", "0 27 29 12 26 25 24 28 4", "6 22 16 7 15 11 9 5", "7 16 9 18 10 21 19 11 3 15", "4 17 12 28 13 29 0 27 2 25", "0 27 26 25 17 1 4 13 20", "4 12 0 1 26 20 27 23 24 29 13", "13 17 27 0 4 12 25 24 2 20", "25 29 23 26 17 12 20 1 28 24 2 13", "23 29 20 27 1 13 4", "28 25 20 0 23 1 27"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 14, 15, 16, 29, 30};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> dependencies = {"3 16", "24 4", "8", "5 0", "1", "3", "9 16", "14", "23 2", "6", "13 15", "23 25 20", "16", "10 19", "7 18", "10", "12 18 6 0", "24", "16 14 19", "13 18 22 21", "11", "19", "19", "8 26 11", "1 17", "11", "27 23", "26"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8, 12, 16, 20, 24, 28};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> dependencies = {"9 12 13 7 19 18 10 15 21", "3 4", "8 6 5 20 17 14 11 16", "1 4", "1 3", "20 2 14 16 8 17 11 6", "2 17 5 14 8 16 20 11", "10 9 19 15 21 18 13 0 12", "2 5 11 17 16 6 20 14", "13 10 19 0 7 21 15 18 12", "9 21 18 15 19 13 7 0 12", "20 14 17 6 2 16 8 5", "0 7 19 10 18 9 21 13 15", "21 7 19 18 12 9 10 0 15", "20 11 17 6 2 16 8 5", "9 10 19 13 0 12 21 7 18", "6 5 11 14 2 8 17 20", "5 16 8 6 14 2 20 11", "0 19 15 10 9 7 21 13 12", "0 10 9 15 7 13 18 21 12", "14 8 17 11 6 5 16 2", "0 19 15 18 12 13 7 10 9"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 9, 10, 12, 13, 19, 22};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> dependencies = {"23 13 12 4 2 1 27 26 24 25 20 29 28 17", "4 26 2 29 20 23 13 25 12 0 28 24 27 17", "0 12 26 23 17 28 1 20 13 4 29 25 24 27", "9 22 14 5 18 15 16 11 8 19 6 10 21 7", "23 13 17 27 28 12 0 2 25 24 1 29 26 20", "19 14 18 10 8 22 3 7 9 16 15 21 11 6", "14 21 11 18 3 10 22 5 8 19 7 16 9 15", "6 22 19 3 15 10 21 18 8 11 14 5 9 16", "18 14 9 19 15 22 3 16 21 6 5 11 7 10", "21 7 22 16 5 11 6 18 10 8 15 3 19 14", "3 16 19 14 8 18 5 7 22 15 9 11 6 21", "22 16 3 5 18 19 8 6 14 10 21 7 15 9", "4 0 13 25 20 23 24 17 1 29 28 26 2 27", "28 12 24 2 4 17 0 20 29 25 27 1 23 26", "6 7 9 19 8 11 15 5 3 18 10 22 21 16", "21 19 7 8 22 6 11 9 18 16 14 3 10 5", "7 15 14 22 19 9 5 21 3 11 10 18 6 8", "13 27 29 2 4 28 0 1 24 26 12 20 25 23", "5 3 22 11 10 21 15 16 8 7 9 6 19 14", "16 11 10 21 22 15 14 3 6 9 18 5 7 8", "0 2 24 26 25 27 4 17 28 23 13 29 12 1", "8 11 9 3 6 15 7 10 14 19 18 22 16 5", "7 9 10 14 21 11 16 6 19 15 8 18 3 5", "4 29 27 1 28 13 25 17 2 12 20 26 0 24", "2 20 23 1 0 17 25 26 13 12 29 4 28 27", "29 28 23 24 1 26 2 20 27 0 17 12 13 4", "4 23 27 24 29 0 17 1 25 2 28 13 20 12", "0 12 13 2 28 20 26 25 1 23 4 17 29 24", "24 20 12 25 26 2 27 23 13 17 1 4 0 29", "1 4 13 24 17 12 23 27 2 0 25 20 26 28"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 30};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> dependencies = {"23 15 13 12 10 9 19 21 27", "2 17 20 25 26 28 29 24 4", "17 29 4 24 28 20 25 26 1", "7 6 18 14 22 16 11 5 8", "1 2 20 26 29 17 28 24 25", "11 8 7 22 6 3 18 14 16", "22 5 18 7 16 14 11 3 8", "8 11 22 5 16 6 14 18 3", "22 5 7 11 16 18 6 3 14", "19 12 27 10 15 21 0 13 23", "9 13 27 0 19 23 15 21 12", "14 8 3 6 18 16 7 5 22", "10 21 13 27 19 9 23 15 0", "9 23 15 21 27 19 0 10 12", "8 5 22 7 6 11 18 3 16", "27 13 12 10 19 21 0 9 23", "8 18 22 7 6 11 3 5 14", "1 26 25 4 28 29 20 2 24", "6 22 5 11 16 14 8 3 7", "9 27 15 13 23 21 10 12 0", "29 25 4 24 2 28 26 17 1", "19 10 15 23 13 12 0 9 27", "16 14 5 18 3 8 6 7 11", "13 15 12 9 27 10 19 21 0", "25 4 28 20 26 1 29 2 17", "2 17 26 1 20 28 29 4 24", "17 28 29 20 25 24 2 4 1", "12 13 21 15 19 10 9 0 23", "4 26 24 25 17 20 1 29 2", "24 20 2 26 28 17 1 4 25"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 20, 30};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> dependencies = {"12 5 23 13 9 19 10 15", "2 20 11 24 26 25 4 8", "20 4 8 25 17 11 26 1", "18 6 16 22 21 14", "2 26 24 25 8 1 20 17", "15 9 0 19 13 10 12", "21 3 22 18 7 14 16", "21 14 16 22 18 6", "4 25 17 2 24 1 26 11 20", "0 5 10 12 13 19 23 15", "12 13 5 9 15 0 19 23", "8 26 25 24 1 2 20 17", "15 13 23 19 9 0 5 10", "15 10 23 12 9 5 19 0", "3 7 22 16 18 21 6", "0 19 13 9 23 12 10 5", "14 18 3 6 7", "11 24 25 8 20 26 4 2", "16 6 21 3 22 14 7", "0 13 9 12 5 23 15 10", "26 8 4 1 11 17 2 25 24", "6 18 7 14 22 3", "14 6 7 3 18 21", "19 9 10 15 0 12 13", "25 4 26 17 1 11 8 20", "8 26 2 20 4 17 24 11 1", "4 25 8 24 20 1 17 11 2"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 9, 10, 17, 18, 19, 27};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> dependencies = {"", "", "", "10 19 7 18 6 5 21 11 22 8 16 14", "", "22 19 7 14 10 18 16 21 8 6 3 11", "3 21 18 8 22 7 19 10 14 5 16", "11 6 18 5 10 22 19 8 16 3 14 21", "5 16 21 3 10 22 19 6 11 18 7 14", "15 12", "3 21 6 7 8 14 18 19 11 5 22", "5 18 19 21 16 10 7 14 3 8 22", "9 15", "", "19 8 18 11 6 3 5 7 16 10", "9 12", "6 14 8 19 5 11 3 21 7 18 22", "", "19 11 10 6 14 16 7 5 8 22 3 21", "7 16 11 6 8 14 5 3 18 22 10", "", "16 18 10 7 11 8 6 22 3 5", "16 19 3 8 10 5 7 6 21 11 18", "", "", "", "", "", "", ""};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> dependencies = {"25 1 17 2 26 29 23 20 13 12 4 24", "13 24 17 0 27 29 25 12 2 28", "1 17 12 0 23 13 3 27 26", "6 22 16 2 18 15 7", "25 28 0 12 24 23 20 26 17", "16 15 7 11 9 21", "18 3 21 16 15 9 19 14", "19 3 15 21 22 14 9 10 5", "", "11 7 14 6 22 5 19 21", "22 14 11 15 19 7 18", "9 18 14 22 10 16 21 5", "17 27 20 25 23 0 4 2 26 1", "23 26 28 24 25 27 0 1 2", "9 7 19 6 11 18 16 15 10", "21 14 16 22 19 7 10 6 3 5", "22 14 3 5 19 11 21 18 6 15", "23 27 1 0 2 24 26 4 12", "10 14 22 6 11 3 16", "6 14 9 16 10 15 7 22", "0 27 29 12 26 25 24 28 4", "6 22 16 7 15 11 9 5", "7 16 9 18 10 21 19 11 3 15", "4 17 12 28 13 29 0 27 2 25", "0 27 26 25 17 1 4 13 20", "4 12 0 1 26 20 27 23 24 29 13", "13 17 27 0 4 12 25 24 2 20", "25 29 23 26 17 12 20 1 28 24 2 13", "23 29 20 27 1 13 4", "28 25 20 0 23 1 27"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 29, 30};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> dependencies = {"4 2", "3", "0 4", "1", "0 2", "6", "5"};
    GalaxyTrip* pObj = new GalaxyTrip();
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
    vector<string> dependencies = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> dependencies = {"1", "0", "3", "2", "5", "4", "7", "6", "9", "8", "11", "10", "13", "12", "15", "14", "17", "16", "19", "18", "21", "20", "23", "22", "25", "24", "27", "26", "29", "28"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> dependencies = {"1", "0", "3", "2"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> dependencies = {"", "20", "4", "", "2", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "1"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> dependencies = {"1", "0", "3", "2", "5 6", "4 6", "4 5", ""};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> dependencies = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 29", "0 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18", "", "", "24 23", "22", "22 29", "", "", "", "", "24 0"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 24, 25, 26, 27, 28, 29, 30};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> dependencies = {"4 2", "3", "0 4", "1", "0 2", "6", "5", "", "", "", "11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27", "10 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27", "10 11 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27", "10 11 12 14 15 16 17 18 19 20 21 22 23 24 25 26 27", "10 11 12 13 15 16 17 18 19 20 21 22 23 24 25 26 27", "10 11 12 13 14 16 17 18 19 20 21 22 23 24 25 26 27", "10 11 12 13 14 15 17 18 19 20 21 22 23 24 25 26 27", "10 11 12 13 14 15 16 18 19 20 21 22 23 24 25 26 27", "10 11 12 13 14 15 16 17 19 20 21 22 23 24 25 26 27", "10 11 12 13 14 15 16 17 18 20 21 22 23 24 25 26 27", "10 11 12 13 14 15 16 17 18 19 21 22 23 24 25 26 27", "10 11 12 13 14 15 16 17 18 19 20 22 23 24 25 26 27", "10 11 12 13 14 15 16 17 18 19 20 21 23 24 25 26 27", "10 11 12 13 14 15 16 17 18 19 20 21 22 24 25 26 27", "10 11 12 13 14 15 16 17 18 19 20 21 22 23 25 26 27", "10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 26 27", "10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 27", "10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> dependencies = {"", "", "", "", "", "", "", "8 9 10", "7 9 10", "7 8 10", "7 8 9"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> dependencies = {"1", "0"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> dependencies = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 9 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 11 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 12 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 13 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 14 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 15 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 16 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 17 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 18 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 19", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18"};
    GalaxyTrip* pObj = new GalaxyTrip();
    clock_t start = clock();
    vector<int> result = pObj->possibleValues(dependencies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20243958&rd=9811&pm=5980
********************************************************************************
#include <vector>
#include <string>
#include <sstream>
 
using namespace std;
 
typedef vector <int> vi;
typedef vector <vi> vvi;
typedef vector <string> vs;
typedef vector <bool> vb;
 
void dfs(vvi& adj, vi& segments, int i)
{
  for (int j = 0; j < adj[i].size(); ++j)
    if (segments[adj[i][j]] < 0) {
      segments[adj[i][j]] = segments[i];
      dfs(adj, segments, adj[i][j]);
    }
}
 
class GalaxyTrip
{
  public:
  vi possibleValues (vs dependencies)
  {
    int n = dependencies.size();
    vvi adj(n);
    for (int i = 0; i < n; ++i) 
      if (dependencies[i] != "") {
        istringstream iss(dependencies[i]);
        int a;
        while (!iss.eof()) {
          iss >> a;
          adj[i].push_back(a);
        }
      }
    vi segments(n, -1);
    int s = 0;
    for (int i = 0; i < n; ++i)
      if (segments[i] < 0) {
        segments[i] = s++;
        dfs(adj, segments, i);
      }
    vi sizes(s, 0);
    for (int i = 0; i < n; ++i)
      ++sizes[segments[i]];
    vb poss(n+1, 0);
    poss[0] = 1;
    for (int i = 0; i < s; ++i)
      for (int j = n; j >= sizes[i]; --j)
        if (poss[j-sizes[i]])
          poss[j] = 1;
    vi rez;
    for (int i = 1; i <= n; ++i)
      if (poss[i])
        rez.push_back(i);
    return rez;
  }
};

********************************************************************************
*******************************************************************************/