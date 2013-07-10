/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3516
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

class DeadCode {
public:
    int deadCount(vector<string> code);
};

int DeadCode::deadCount(vector<string> code) {
    int ret;
    return ret;
}


int test0() {
    vector<string> code = {"RETURN", "IF 0 ELSE 1"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> code = {"IF 1 ELSE 2", "IF 1 ELSE 2", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> code = {"IF 1 ELSE 2", "RETURN", "IF 3 ELSE 2", "IF 2 ELSE 3"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
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
    vector<string> code = {"IF 1 ELSE 2", "IF 1 ELSE 1", "RETURN", "IF 3 ELSE 4", "IF 0 ELSE 1"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
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
    vector<string> code = {"IF 1 ELSE 2", "IF 1 ELSE 1", "RETURN", "IF 3 ELSE 4", "IF 0 ELSE 1", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> code = {"IF 1 ELSE 2", "RETURN", "IF 5 ELSE 5", "IF 2 ELSE 1", "IF 2 ELSE 2", "IF 4 ELSE 4"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> code = {"IF 1 ELSE 1", "IF 2 ELSE 2", "IF 3 ELSE 48", "IF 4 ELSE 4", "IF 5 ELSE 5", "IF 6 ELSE 6", "IF 7 ELSE 7", "IF 8 ELSE 8", "IF 9 ELSE 9", "IF 10 ELSE 10", "IF 11 ELSE 11", "IF 12 ELSE 12", "IF 13 ELSE 13", "IF 14 ELSE 14", "IF 15 ELSE 15", "IF 16 ELSE 16", "IF 17 ELSE 17", "IF 18 ELSE 18", "IF 19 ELSE 19", "IF 20 ELSE 20", "IF 21 ELSE 21", "IF 22 ELSE 22", "IF 23 ELSE 23", "IF 24 ELSE 24", "IF 25 ELSE 25", "IF 26 ELSE 26", "IF 27 ELSE 27", "IF 28 ELSE 28", "IF 29 ELSE 29", "IF 30 ELSE 30", "IF 31 ELSE 31", "IF 32 ELSE 32", "IF 33 ELSE 33", "IF 34 ELSE 34", "IF 35 ELSE 35", "IF 36 ELSE 36", "IF 37 ELSE 37", "IF 38 ELSE 38", "IF 39 ELSE 39", "IF 40 ELSE 49", "IF 41 ELSE 41", "IF 42 ELSE 42", "IF 43 ELSE 43", "IF 44 ELSE 44", "IF 45 ELSE 45", "IF 46 ELSE 46", "IF 47 ELSE 47", "IF 0 ELSE 0", "IF 35 ELSE 35", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> code = {"IF 1 ELSE 1", "IF 2 ELSE 2", "IF 3 ELSE 48", "IF 4 ELSE 4", "IF 5 ELSE 5", "IF 6 ELSE 6", "IF 7 ELSE 7", "IF 8 ELSE 8", "IF 9 ELSE 9", "IF 10 ELSE 10", "IF 11 ELSE 11", "IF 12 ELSE 12", "IF 13 ELSE 13", "IF 14 ELSE 14", "IF 15 ELSE 15", "IF 16 ELSE 16", "IF 17 ELSE 17", "IF 18 ELSE 18", "IF 19 ELSE 19", "IF 20 ELSE 20", "IF 21 ELSE 21", "IF 22 ELSE 22", "IF 23 ELSE 23", "IF 24 ELSE 24", "IF 25 ELSE 25", "IF 26 ELSE 26", "IF 27 ELSE 27", "IF 28 ELSE 28", "IF 29 ELSE 29", "IF 30 ELSE 30", "IF 31 ELSE 31", "IF 32 ELSE 32", "IF 33 ELSE 33", "IF 34 ELSE 34", "IF 35 ELSE 35", "IF 36 ELSE 36", "IF 37 ELSE 37", "IF 38 ELSE 38", "IF 39 ELSE 39", "IF 40 ELSE 49", "IF 41 ELSE 41", "IF 42 ELSE 42", "IF 43 ELSE 43", "IF 44 ELSE 44", "IF 45 ELSE 45", "IF 46 ELSE 46", "IF 47 ELSE 47", "IF 45 ELSE 46", "IF 35 ELSE 35", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> code = {"IF 1 ELSE 4", "RETURN", "IF 5 ELSE 5", "IF 2 ELSE 1", "IF 2 ELSE 2", "IF 4 ELSE 4"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> code = {"IF 2 ELSE 4", "RETURN", "IF 5 ELSE 5", "IF 2 ELSE 1", "IF 2 ELSE 2", "IF 4 ELSE 4"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> code = {"IF 2 ELSE 3", "RETURN", "IF 5 ELSE 5", "IF 2 ELSE 1", "IF 2 ELSE 2", "IF 4 ELSE 4"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> code = {"IF 3 ELSE 5", "IF 1 ELSE 1", "RETURN", "IF 4 ELSE 1", "IF 3 ELSE 0", "IF 1 ELSE 6", "IF 2 ELSE 4"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> code = {"RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> code = {"IF 0 ELSE 0"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> code = {"IF 1 ELSE 2", "RETURN", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> code = {"IF 5 ELSE 5", "IF 6 ELSE 6", "IF 1 ELSE 1", "IF 2 ELSE 2", "IF 3 ELSE 3", "IF 4 ELSE 4", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> code = {"IF 48 ELSE 48", "IF 49 ELSE 2", "IF 1 ELSE 1", "IF 2 ELSE 2", "IF 3 ELSE 3", "IF 4 ELSE 4", "IF 5 ELSE 5", "IF 6 ELSE 6", "IF 7 ELSE 7", "IF 8 ELSE 8", "IF 9 ELSE 9", "IF 10 ELSE 10", "IF 11 ELSE 11", "IF 12 ELSE 12", "IF 13 ELSE 13", "IF 14 ELSE 14", "IF 15 ELSE 15", "IF 16 ELSE 16", "IF 17 ELSE 17", "IF 18 ELSE 18", "IF 19 ELSE 19", "IF 20 ELSE 20", "IF 21 ELSE 21", "IF 22 ELSE 22", "IF 23 ELSE 23", "IF 24 ELSE 24", "IF 25 ELSE 25", "IF 26 ELSE 26", "IF 27 ELSE 27", "IF 28 ELSE 28", "IF 29 ELSE 29", "IF 30 ELSE 30", "IF 31 ELSE 31", "IF 32 ELSE 32", "IF 33 ELSE 33", "IF 34 ELSE 34", "IF 35 ELSE 35", "IF 36 ELSE 36", "IF 37 ELSE 37", "IF 38 ELSE 38", "IF 39 ELSE 39", "IF 40 ELSE 40", "IF 41 ELSE 41", "IF 42 ELSE 42", "IF 43 ELSE 43", "IF 44 ELSE 44", "IF 45 ELSE 45", "IF 46 ELSE 46", "IF 47 ELSE 47", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> code = {"IF 48 ELSE 48", "IF 49 ELSE 47", "IF 1 ELSE 1", "IF 2 ELSE 2", "IF 3 ELSE 3", "IF 4 ELSE 4", "IF 5 ELSE 5", "IF 6 ELSE 6", "IF 7 ELSE 7", "IF 8 ELSE 8", "IF 9 ELSE 9", "IF 10 ELSE 10", "IF 11 ELSE 11", "IF 12 ELSE 12", "IF 13 ELSE 13", "IF 14 ELSE 14", "IF 15 ELSE 15", "IF 16 ELSE 16", "IF 17 ELSE 17", "IF 18 ELSE 18", "IF 19 ELSE 19", "IF 20 ELSE 20", "IF 21 ELSE 21", "IF 22 ELSE 22", "IF 23 ELSE 23", "IF 24 ELSE 24", "IF 25 ELSE 25", "IF 26 ELSE 26", "IF 27 ELSE 27", "IF 28 ELSE 28", "IF 29 ELSE 29", "IF 30 ELSE 30", "IF 31 ELSE 31", "IF 32 ELSE 32", "IF 33 ELSE 33", "IF 34 ELSE 34", "IF 35 ELSE 35", "IF 36 ELSE 36", "IF 37 ELSE 37", "IF 38 ELSE 38", "IF 39 ELSE 39", "IF 40 ELSE 40", "IF 41 ELSE 41", "IF 42 ELSE 42", "IF 43 ELSE 43", "IF 44 ELSE 44", "IF 45 ELSE 45", "IF 46 ELSE 46", "IF 47 ELSE 47", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> code = {"IF 1 ELSE 2", "RETURN", "IF 3 ELSE 2", "IF 2 ELSE 3"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> code = {"IF 2 ELSE 2", "IF 0 ELSE 0", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> code = {"IF 1 ELSE 2", "RETURN", "IF 3 ELSE 2", "IF 2 ELSE 3", "RETURN", "RETURN", "IF 5 ELSE 8", "IF 8 ELSE 5", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> code = {"IF 1 ELSE 2", "RETURN", "IF 3 ELSE 2", "IF 2 ELSE 3", "RETURN", "IF 2 ELSE 3"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> code = {"IF 0 ELSE 2", "RETURN", "IF 0 ELSE 2"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> code = {"IF 1 ELSE 4", "IF 1 ELSE 2", "RETURN", "IF 4 ELSE 2", "IF 3 ELSE 2"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> code = {"IF 1 ELSE 2", "RETURN", "IF 1 ELSE 2"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> code = {"IF 2 ELSE 1", "RETURN", "IF 3 ELSE 1", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> code = {"IF 0 ELSE 0", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> code = {"IF 1 ELSE 2", "IF 2 ELSE 3", "RETURN", "IF 3 ELSE 2"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> code = {"RETURN", "RETURN", "RETURN", "RETURN", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> code = {"IF 1 ELSE 1", "IF 0 ELSE 0", "RETURN", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> code = {"IF 1 ELSE 2", "IF 2 ELSE 3", "IF 3 ELSE 4", "IF 4 ELSE 5", "IF 5 ELSE 6", "IF 6 ELSE 7", "IF 7 ELSE 8", "IF 8 ELSE 9", "IF 9 ELSE 10", "IF 10 ELSE 11", "IF 11 ELSE 12", "IF 12 ELSE 13", "IF 13 ELSE 14", "IF 14 ELSE 15", "IF 15 ELSE 16", "IF 16 ELSE 17", "IF 17 ELSE 18", "IF 18 ELSE 19", "IF 19 ELSE 20", "IF 20 ELSE 21", "IF 21 ELSE 22", "IF 22 ELSE 23", "IF 23 ELSE 24", "IF 24 ELSE 25", "IF 25 ELSE 26", "IF 26 ELSE 27", "IF 27 ELSE 28", "IF 28 ELSE 29", "IF 29 ELSE 30", "IF 30 ELSE 31", "IF 31 ELSE 33", "IF 33 ELSE 34", "RETURN", "IF 34 ELSE 35", "IF 35 ELSE 36", "IF 36 ELSE 37", "IF 37 ELSE 0", "RETURN", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
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
    vector<string> code = {"IF 2 ELSE 1", "IF 2 ELSE 3", "RETURN", "RETURN"};
    DeadCode* pObj = new DeadCode();
    clock_t start = clock();
    int result = pObj->deadCount(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10035319&rd=6517&pm=3516
********************************************************************************
#include  <vector>
#include  <string>
#include  <algorithm>
#include  <cstdio>
 
using namespace std;
 
class DeadCode
{
  private:
 
    void floyd(int m[50][50], int n)
    {
      for (int k=0; k<n; k++)
        for (int i=0; i<n; i++)
          for (int j=0; j<n; j++)
            if (m[i][k] && m[k][j])    m[i][j] = 1;
    }
 
  public:
 
    int deadCount(vector<string> code)
    {
      int    graph[50][50];
      int    ret[50];
      int    n = code.size();
 
      fill( *graph, *graph + 50*50, 0);
      fill( ret, ret+50, 0);
 
      for (int i=0; i<n; i++)
        graph[i][i] = 1;
 
      for (int i=0; i<n; i++)
        if (code[i][0] == 'R')
        {
          ret[i] = 1;
          continue;
        }
        else
        {
          int    x, y;
 
          sscanf(code[i].c_str(), "%*s %d %*s %d ", &x, &y);
 
          graph[i][x] = 1;
          graph[i][y] = 1;
        }
 
      floyd(graph, n);
 
      int    count = 0;
 
      for (int i=0; i<n; i++)
      {
        if (!graph[0][i])
        {
          count++;
          continue;
        }
 
        bool  flag = false;
 
        for (int j=0; j<n; j++)
        {
          if (!ret[j])  continue;
 
          if (graph[i][j])
          {
            flag = true;
            break;
          }
        }
 
        if (flag == false)    count++;
      }
 
      return count;
    }
};

********************************************************************************
*******************************************************************************/