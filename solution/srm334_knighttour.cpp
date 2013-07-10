/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7245
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

class KnightTour {
public:
    string checkTour(vector<string> cells);
};

string KnightTour::checkTour(vector<string> cells) {
    string ret;
    return ret;
}


int test0() {
    vector<string> cells = {"A1", "B3", "A5", "C6", "E5", "F3", "D2", "F1", "E3", "F5", "D4", "B5", "A3", "B1", "C3", "A2", "C1", "E2", "F4", "E6", "C5", "A6", "B4", "D5", "F6", "E4", "D6", "C4", "B6", "A4", "B2", "D1", "F2", "D3", "E1", "C2"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> cells = {"A1", "C2", "E3", "F5", "D4", "B3", "A1", "C2", "E3", "F5", "D4", "B3", "A1", "C2", "E3", "F5", "D4", "B3", "A1", "C2", "E3", "F5", "D4", "B3", "A1", "C2", "E3", "F5", "D4", "B3", "A1", "C2", "E3", "F5", "D4", "B3"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> cells = {"D4", "F5", "D6", "B5", "A3", "B1", "D2", "F1", "E3", "D1", "F2", "E4", "F6", "D5", "B6", "A4", "B2", "C4", "A5", "C6", "E5", "F3", "E1", "C2", "A1", "B3", "C5", "E6", "F4", "E2", "C3", "A2", "C1", "D3", "B4", "A6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> cells = {"D4", "F5", "D6", "B5", "A3", "B1", "D2", "F1", "E3", "D1", "F2", "E4", "F6", "D5", "B6", "A4", "B2", "C4", "A5", "C6", "E5", "F3", "E1", "C2", "A1", "B3", "C5", "A6", "B4", "A2", "C3", "E2", "C1", "D3", "F4", "E6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> cells = {"E3", "F1", "D2", "B1", "A3", "B5", "D6", "F5", "D4", "C2", "A1", "B3", "A5", "C6", "E5", "F3", "E1", "D3", "B4", "A6", "C5", "E6", "F4", "E2", "C1", "A2", "C3", "D1", "F2", "E4", "F6", "D5", "B6", "A4", "B2", "C4"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> cells = {"B1", "A3", "B5", "D6", "F5", "D4", "E6", "F4", "D3", "C1", "E2", "C3", "A2", "B4", "A6", "C5", "B3", "A1", "C2", "E1", "F3", "E5", "C6", "A5", "C4", "B2", "A4", "B6", "D5", "F6", "E4", "F2", "D1", "E3", "F1", "D2"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> cells = {"C3", "D5", "F6", "E4", "C5", "A6", "B4", "A2", "C1", "E2", "F4", "E6", "D4", "C6", "A5", "B3", "A1", "C2", "E1", "F3", "E5", "D3", "F2", "D1", "B2", "A4", "B6", "C4", "A3", "B5", "D6", "F5", "E3", "F1", "D2", "B1"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> cells = {"E6", "C5", "A6", "B4", "C6", "A5", "B3", "A1", "C2", "E1", "D3", "E5", "F3", "D4", "F5", "D6", "B5", "A3", "B1", "D2", "F1", "E3", "C4", "B2", "D1", "F2", "E4", "F6", "D5", "B6", "A4", "C3", "A2", "C1", "E2", "F4"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> cells = {"C4", "A5", "C6", "E5", "F3", "E1", "D3", "F4", "E2", "C1", "A2", "B4", "A6", "C5", "E6", "D4", "C2", "A1", "B3", "D2", "F1", "E3", "F5", "D6", "B5", "A3", "B1", "C3", "D1", "F2", "E4", "F6", "D5", "B6", "A4", "B2"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> cells = {"B5", "A3", "B1", "D2", "F1", "E3", "C4", "B2", "D1", "F2", "E4", "F6", "D5", "B6", "A4", "C3", "E2", "F4", "E6", "C5", "A6", "B4", "A2", "C1", "D3", "E1", "F3", "E5", "C6", "A5", "B3", "A1", "C2", "D4", "F5", "D6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> cells = {"C3", "B5", "A3", "B1", "D2", "F1", "E3", "F5", "D6", "E4", "F6", "D5", "B6", "C4", "E5", "F3", "E1", "C2", "A1", "B3", "A5", "C6", "D4", "E2", "F4", "E6", "C5", "A6", "B4", "A2", "C1", "D3", "F2", "D1", "B2", "A4"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> cells = {"D6", "F5", "E3", "F1", "D2", "B1", "A3", "B5", "D4", "E6", "F4", "E2", "C1", "A2", "C3", "D1", "F2", "E4", "F6", "D5", "B6", "A4", "B2", "D3", "C5", "A6", "B4", "C6", "A5", "B3", "A1", "C2", "E1", "F3", "E5", "C4"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> cells = {"C4", "A3", "B1", "D2", "F1", "E3", "F5", "D6", "B5", "C3", "D1", "F2", "E4", "F6", "D5", "B6", "A4", "B2", "D3", "F4", "E2", "C1", "A2", "B4", "A6", "C5", "E6", "D4", "F3", "E1", "C2", "A1", "B3", "A5", "C6", "E5"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> cells = {"A3", "B1", "D2", "F1", "E3", "F5", "D4", "C2", "A1", "B3", "A5", "C6", "E5", "F3", "E1", "D3", "C1", "E2", "C3", "A2", "B4", "A6", "C5", "E6", "F4", "D5", "F6", "E4", "F2", "D1", "B2", "A4", "B6", "C4", "D6", "B5"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> cells = {"D5", "F6", "E4", "C3", "B5", "D6", "C4", "B2", "D1", "F2", "D3", "E1", "F3", "E5", "C6", "A5", "B3", "A1", "C2", "A3", "B1", "D2", "F1", "E3", "F5", "D4", "E6", "F4", "E2", "C1", "A2", "B4", "A6", "C5", "A4", "B6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> cells = {"C6", "E5", "C4", "B6", "A4", "B2", "D1", "F2", "D3", "C1", "E2", "F4", "E6", "C5", "A6", "B4", "A2", "C3", "E4", "F6", "D5", "E3", "F1", "D2", "B1", "A3", "B5", "D6", "F5", "D4", "F3", "E1", "C2", "A1", "B3", "A5"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> cells = {"E2", "C1", "A2", "C3", "B5", "A3", "B1", "D2", "F1", "E3", "F5", "D6", "C4", "A5", "C6", "E5", "F3", "E1", "D3", "F2", "D1", "B2", "A4", "B6", "D5", "F6", "E4", "C5", "A6", "B4", "C2", "A1", "B3", "D4", "E6", "F4"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> cells = {"A6", "C5", "E6", "F4", "E2", "C3", "B1", "A3", "B5", "D6", "F5", "D4", "C6", "A5", "B3", "A1", "C2", "E1", "F3", "E5", "C4", "D2", "F1", "E3", "D1", "F2", "E4", "F6", "D5", "B6", "A4", "B2", "D3", "C1", "A2", "B4"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> cells = {"A5", "C4", "B6", "A4", "B2", "D1", "F2", "D3", "C1", "A2", "B4", "A6", "C5", "E6", "F4", "E2", "D4", "F5", "D6", "B5", "A3", "B1", "C3", "E4", "F6", "D5", "E3", "F1", "D2", "B3", "A1", "C2", "E1", "F3", "E5", "C6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> cells = {"B1", "D2", "F1", "E3", "C4", "B6", "A4", "B2", "D1", "F2", "E4", "C3", "D5", "F6", "C6", "A5", "B3", "A1", "C2", "E1", "F3", "E5", "D3", "C1", "A2", "B4", "A6", "C5", "E6", "F4", "E2", "D4", "F5", "D6", "B5", "A3"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> cells = {"C2", "A1", "B3", "A5", "C6", "C3", "D5", "F6", "E4", "C5", "A6", "B4", "A2", "C1", "E2", "F4", "E6", "D4", "B5", "D6", "F5", "E3", "F1", "D2", "B1", "A3", "C4", "B6", "A4", "B2", "D1", "F2", "D3", "E5", "F3", "E1"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> cells = {"C2", "E1", "F3", "E5", "C6", "A5", "C4", "A3", "B1", "D2", "F1", "E3", "F5", "D6", "B5", "F2", "D1", "C3", "E4", "F6", "D5", "B6", "A4", "B2", "D3", "C5", "A6", "B4", "A2", "C1", "E2", "F4", "E6", "D4", "B3", "A1"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> cells = {"A4", "B2", "D1", "F2", "D3", "C1", "A2", "B4", "A6", "C5", "E6", "F4", "E2", "D4", "F5", "E3", "F1", "D2", "B1", "A3", "B5", "D6", "E4", "C3", "D5", "F6", "B3", "A1", "C2", "E1", "F3", "E5", "C6", "A5", "C4", "B6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> cells = {"F4", "E6", "D4", "E2", "C1", "A2", "C3", "D5", "F6", "E4", "F2", "D1", "B2", "A4", "B6", "C4", "A5", "B3", "A1", "C2", "E1", "F3", "D2", "B1", "A3", "B5", "D6", "F5", "E3", "F1", "E5", "C6", "B4", "A6", "C5", "D3"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> cells = {"C2", "A1", "B3", "A5", "C6", "E5", "F3", "E1", "D3", "F2", "D1", "B2", "A4", "B6", "C4", "A3", "B1", "D2", "F1", "E3", "F5", "D6", "B5", "D4", "E6", "F4", "E2", "C1", "A2", "C3", "E4", "C5", "A6", "B4", "D5", "F6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> cells = {"F1", "E3", "F5", "D6", "B5", "A3", "B1", "D2", "F3", "E1", "C2", "A1", "B3", "A5", "C4", "E5", "C6", "D4", "E6", "F4", "E2", "C1", "A2", "B4", "A6", "C5", "D3", "F2", "E4", "F6", "D5", "B6", "A4", "B2", "D1", "C3"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> cells = {"B5", "D6", "F5", "E3", "F1", "D2", "B1", "A3", "C4", "A5", "C6", "E5", "F3", "E1", "C2", "A1", "B3", "D4", "E6", "F4", "E2", "C1", "A2", "B4", "A6", "C5", "D3", "B2", "D1", "F2", "E4", "F6", "D5", "B6", "A4", "C3"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> cells = {"D1", "B2", "C4", "B6", "E6", "F4", "F1", "C1", "A2", "A5", "C6", "F6", "D5", "B4", "A6", "A3", "B1", "E1", "F3", "D2", "B3", "A1", "A4", "C5", "C2", "E3", "F5", "F2", "E4", "D6", "D3", "E5", "B5", "D4", "E2", "C3"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> cells = {"B1", "A3", "A6", "B4", "D5", "B6", "E6", "F4", "C4", "E5", "E2", "B2", "B5", "D6", "D3", "F2", "E4", "C3", "A4", "A1", "D1", "E3", "C2", "C5", "F5", "D4", "B3", "D2", "F1", "C1", "A2", "A5", "C6", "F6", "F3", "E1"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> cells = {"E5", "D2", "C1", "B1", "A2", "A5", "B5", "D6", "F6", "E3", "E6", "F4", "E1", "C3", "F2", "E4", "E2", "F1", "C4", "A6", "B4", "D1", "B3", "A4", "D5", "C6", "D3", "A1", "C2", "F3", "F5", "D4", "B6", "A3", "B2", "C5"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> cells = {"A6", "A5", "B6", "E5", "D6", "F3", "F2", "F5", "E2", "F1", "E4", "B3", "A2", "A4", "D4", "A1", "D1", "C2", "E1", "B1", "E3", "E6", "C3", "A3", "B5", "B4", "C1", "B2", "D3", "F4", "D2", "C4", "F6", "C5", "D5", "C6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> cells = {"E2", "F3", "F5", "F6", "E6", "F4", "D3", "E5", "D6", "A4", "B6", "A5", "A6", "B3", "A2", "C2", "A3", "C5", "B5", "D5", "B4", "A1", "C4", "B2", "B1", "C3", "D1", "F1", "F2", "E4", "C1", "D4", "D2", "E1", "E3", "C6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> cells = {"C2", "A1", "B3", "A5", "C6", "E5", "F3", "E1", "D3", "C1", "A2", "B4", "A6", "C5", "E6", "F4", "E2", "D4", "F5", "D6", "B5", "A3", "B1", "D2", "F1", "E3", "C4", "B6", "A4", "B2", "D1", "F2", "E4", "F6", "D5", "E3"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> cells = {"A3", "B1", "D2", "F1", "E3", "F5", "D6", "B5", "D4", "F3", "E1", "C2", "A1", "B3", "A5", "C6", "E5", "D3", "F2", "D1", "B2", "A4", "C5", "A6", "B4", "D3", "F4", "E6", "F4", "E2", "C1", "A2", "C3", "D5", "B6", "C4"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> cells = {"E5", "C6", "A5", "B3", "A1", "C2", "E1", "F3", "D2", "F1", "E3", "F5", "D4", "E6", "F4", "E2", "C1", "A2", "C1", "D3", "F2", "D1", "B2", "A4", "C5", "A6", "B4", "D5", "F6", "D5", "C3", "E4", "D6", "B5", "A3", "C4"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> cells = {"B6", "A4", "B2", "D1", "F2", "E4", "F6", "D5", "F4", "E6", "F4", "E2", "C3", "A2", "C1", "D3", "E1", "F3", "E5", "C6", "B4", "A6", "C5", "B3", "A5", "C4", "D2", "B1", "A3", "C4", "D6", "B5", "D4", "F5", "E3", "C4"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> cells = {"F4", "E6", "C5", "A6", "B4", "A2", "C1", "E2", "D4", "F5", "D6", "B5", "A3", "B1", "C3", "A4", "B6", "D5", "F6", "E4", "F2", "D1", "B2", "C4", "E3", "F1", "D2", "F3", "E5", "C6", "A5", "B3", "A1", "C2", "E1", "D3"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> cells = {"C5", "D3", "F2", "D1", "B2", "A4", "B6", "D5", "C3", "E4", "F6", "B3", "A1", "C2", "E1", "F3", "E5", "C6", "A5", "C4", "A3", "B1", "D2", "F1", "E3", "F5", "D6", "B5", "D4", "E6", "F4", "E2", "C1", "A2", "B4", "A6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> cells = {"D4", "F5", "D6", "B5", "A3", "B1", "D2", "F1", "E3", "D1", "F2", "E4", "F6", "D5", "B6", "A4", "B2", "C4", "A5", "C6", "E5", "F3", "E1", "C2", "A1", "B3", "C5", "E6", "F4", "E2", "C3", "A2", "C1", "D3", "B4", "A6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> cells = {"D4", "D3", "D6", "B5", "A3", "B1", "D2", "F1", "E3", "D1", "F2", "E4", "F6", "D5", "B6", "A4", "B2", "C4", "A5", "C6", "E5", "F3", "E1", "C2", "A1", "B3", "C5", "A6", "B4", "A2", "C3", "E2", "C1", "D3", "F4", "E6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> cells = {"D4", "F5", "D6", "B5", "A3", "B1", "D2", "F1", "E3", "D1", "F2", "E4", "F6", "D5", "B6", "A4", "B2", "C4", "A5", "C6", "E5", "F3", "E1", "C2", "A1", "B3", "C5", "A6", "B4", "A2", "C3", "E2", "C1", "D3", "F4", "E6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> cells = {"C5", "D3", "F2", "D1", "B2", "A4", "B6", "D5", "C3", "E4", "F6", "B3", "A1", "C2", "E1", "F3", "E5", "C6", "A5", "C4", "A3", "B1", "D2", "F1", "E3", "F5", "D6", "B5", "D4", "E6", "F4", "E2", "C1", "A2", "B4", "A6"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> cells = {"A1", "B3", "A5", "C6", "E5", "F3", "D2", "F1", "E3", "F5", "D4", "B5", "A3", "B1", "C3", "A2", "C1", "E2", "F4", "E6", "C5", "A6", "B4", "D5", "F6", "E4", "D6", "C4", "B6", "A4", "B2", "D1", "F2", "D3", "E1", "C2"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Valid";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> cells = {"A1", "B3", "A5", "C6", "E5", "F3", "D2", "F1", "E3", "F5", "D4", "B5", "A3", "B1", "C3", "A2", "C1", "E2", "F4", "E6", "A6", "C5", "B4", "D5", "F6", "E4", "D6", "C4", "B6", "A4", "B2", "D1", "F2", "D3", "E1", "C2"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> cells = {"A1", "B3", "A5", "C6", "E5", "F3", "D2", "F1", "E3", "F5", "D4", "B5", "A3", "B1", "C3", "A2", "C1", "E2", "F4", "E6", "C5", "A6", "B4", "C2", "E1", "D3", "F2", "D1", "B2", "A4", "B6", "C4", "D6", "E4", "F6", "D5"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> cells = {"A1", "C2", "E3", "F5", "D4", "B3", "A1", "C2", "E3", "F5", "D4", "B3", "A1", "C2", "E3", "F5", "D4", "B3", "A1", "C2", "E3", "F5", "D4", "B3", "A1", "C2", "E3", "F5", "D4", "B3", "A1", "C2", "E3", "F5", "D4", "B3"};
    KnightTour* pObj = new KnightTour();
    clock_t start = clock();
    string result = pObj->checkTour(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20619294&rd=10658&pm=7245
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
 
#define M 100
#define INF -1
 
#define SORT(v) sort((v).begin(),(v).end())
#define FOR(i,a,b) for(int i=(a);i<int(b);++i)
#define SIZE(v) ((int)(v).size())
#define FV(i,a,v) FOR(i,a,SZ(v))
#define FZ(i,v) FV(i,0,v) 
 
class KnightTour {
        public: 
 
  int isValid(int m1, int m2, int n1, int n2) {
    int check = 0;
     
    if (n1 == m1+2 && (n2 == m2+1 || n2 == m2-1)) check = 1;
    if (n1 == m1+1 && (n2 == m2+2 || n2 == m2-2)) check = 1;
    if (n1 == m1-2 && (n2 == m2+1 || n2 == m2-1)) check = 1;
    if (n1 == m1-1 && (n2 == m2+2 || n2 == m2-2)) check = 1;
 
    return check;
  }
 
  
        string checkTour(vector <string> cells) {
         char board[6][6];
         for(int i=0; i<6; ++i) for(int j=0; j<6; ++j) board[i][j] = -1;
                    
         int lastv1 = cells[0][0]-'A';
         int lastv2 = cells[0][1]-49;
         board[lastv1][lastv2] = 1;
 
         for(int i=1; i<cells.size(); ++i) 
         {
           int v1 = cells[i][0]-'A';
           int v2 = cells[i][1]-49;
           if (v1 > 5 || v2 > 5 || v1 < 0 || v2 < 0 || board[v1][v2] == 1) return "Invalid";
           
           board[v1][v2] = 1;
           if (isValid(lastv1, lastv2, v1, v2)) 
           {
             lastv1 = v1;
             lastv2 = v2;
           }
           else 
             return "Invalid";
         } 
 
         int v1 = cells[0][0]-'A';
         int v2 = cells[0][1]-49;
         lastv1 = cells[cells.size()-1][0]-'A';
         lastv2 = cells[cells.size()-1][1]-49;
         if (isValid(lastv1, lastv2, v1, v2) == 0) return "Invalid";
         for(int i=0; i<6; ++i) for(int j=0; j<6; ++j) if (board[i][j] == -1) return "Invalid";
         return "Valid";
        } 
        
 
}; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/