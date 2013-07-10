/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7587
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

class BagsQuiz {
public:
    int checkIfProper(int n, vector<string> actions);
};

int BagsQuiz::checkIfProper(int n, vector<string> actions) {
    int ret;
    return ret;
}


int test0() {
    int n = 2;
    vector<string> actions = {"PUT 1 INSIDE 2"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 2;
    vector<string> actions = {"PUT 1 INSIDE 2", "SET 2 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 2;
    vector<string> actions = {"PUT 2 INSIDE 1"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 4;
    vector<string> actions = {"PUT 3 INSIDE 2", "SWAP 4 WITH 2", "PUT 2 INSIDE 4", "SET 1 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 3;
    vector<string> actions = {"PUT 1 INSIDE 2", "PUT 3 INSIDE 1"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 11;
    vector<string> actions = {"PUT 2 INSIDE 7", "PUT 4 INSIDE 6", "PUT 1 INSIDE 6", "PUT 5 INSIDE 8", "SWAP 8 WITH 6", "PUT 3 INSIDE 8", "PUT 6 INSIDE 7"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 9;
    vector<string> actions = {"PUT 1 INSIDE 9", "SET 6 LOOSE", "PUT 9 INSIDE 7", "SWAP 8 WITH 7", "PUT 6 INSIDE 8", "PUT 3 INSIDE 7", "SET 2 LOOSE", "PUT 4 INSIDE 7", "PUT 8 INSIDE 2", "PUT 7 INSIDE 2", "PUT 5 INSIDE 2", "SET 2 LOOSE", "PUT 2 INSIDE 5", "PUT 5 INSIDE 8", "PUT 7 INSIDE 8", "SET 8 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 4;
    vector<string> actions = {"SET 3 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 25;
    vector<string> actions = {"PUT 1 INSIDE 4", "PUT 2 INSIDE 8", "PUT 13 INSIDE 19", "PUT 18 INSIDE 10", "PUT 3 INSIDE 8", "PUT 24 INSIDE 23", "SET 20 LOOSE", "SET 10 LOOSE", "PUT 23 INSIDE 25", "PUT 9 INSIDE 15", "PUT 7 INSIDE 12", "PUT 14 INSIDE 22", "PUT 17 INSIDE 5", "SWAP 18 WITH 5", "PUT 12 INSIDE 11", "PUT 4 INSIDE 6", "SWAP 15 WITH 5", "SWAP 11 WITH 20", "SWAP 15 WITH 11", "PUT 11 INSIDE 15", "PUT 8 INSIDE 21", "PUT 5 INSIDE 6", "PUT 19 INSIDE 22", "PUT 20 INSIDE 18", "PUT 6 INSIDE 10", "PUT 16 INSIDE 18", "SWAP 22 WITH 18", "SWAP 10 WITH 21", "PUT 10 INSIDE 18", "PUT 18 INSIDE 22", "PUT 15 INSIDE 22", "PUT 21 INSIDE 25", "SET 25 LOOSE", "PUT 21 INSIDE 25", "PUT 25 INSIDE 23", "PUT 22 INSIDE 23", "SET 23 LOOSE", "PUT 22 INSIDE 25", "PUT 25 INSIDE 23", "PUT 24 INSIDE 23", "SET 23 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 18;
    vector<string> actions = {"SET 15 LOOSE", "PUT 7 INSIDE 9", "PUT 3 INSIDE 10", "PUT 11 INSIDE 15", "PUT 1 INSIDE 2", "SWAP 6 WITH 18", "PUT 17 INSIDE 10", "SWAP 14 WITH 5", "PUT 14 INSIDE 10", "PUT 13 INSIDE 16", "PUT 15 INSIDE 18", "SET 12 LOOSE", "PUT 5 INSIDE 9", "PUT 6 INSIDE 12", "PUT 8 INSIDE 9", "PUT 2 INSIDE 10", "PUT 18 INSIDE 10", "PUT 9 INSIDE 16", "PUT 12 INSIDE 10", "PUT 16 INSIDE 10", "PUT 10 INSIDE 4", "SET 4 LOOSE", "SET 4 LOOSE", "PUT 4 INSIDE 10", "SET 10 LOOSE", "PUT 2 INSIDE 3", "PUT 14 INSIDE 18", "PUT 3 INSIDE 10", "PUT 10 INSIDE 16", "PUT 4 INSIDE 12", "PUT 12 INSIDE 16", "PUT 18 INSIDE 17", "PUT 16 INSIDE 17", "SET 17 LOOSE", "PUT 16 INSIDE 17", "PUT 18 INSIDE 17", "SET 17 LOOSE", "PUT 18 INSIDE 17", "SET 17 LOOSE", "PUT 16 INSIDE 18", "PUT 18 INSIDE 17", "SET 17 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 5;
    vector<string> actions = {"PUT 2 INSIDE 3", "SWAP 4 WITH 5", "PUT 5 INSIDE 4", "PUT 1 INSIDE 3", "SET 3 LOOSE", "PUT 1 INSIDE 4", "PUT 4 INSIDE 2", "SWAP 2 WITH 3", "SET 3 LOOSE", "SET 3 LOOSE", "SET 2 LOOSE", "SET 2 LOOSE", "SWAP 3 WITH 2", "PUT 3 INSIDE 4", "SWAP 4 WITH 2", "PUT 4 INSIDE 2", "SET 2 LOOSE", "PUT 4 INSIDE 2", "SET 2 LOOSE", "PUT 2 INSIDE 4", "SET 4 LOOSE", "PUT 5 INSIDE 1", "PUT 1 INSIDE 2", "PUT 2 INSIDE 3", "PUT 3 INSIDE 4", "SET 4 LOOSE", "PUT 3 INSIDE 4", "SET 4 LOOSE", "SET 3 LOOSE", "PUT 4 INSIDE 2", "SWAP 2 WITH 3", "PUT 3 INSIDE 2", "SET 2 LOOSE", "SWAP 3 WITH 1", "PUT 4 INSIDE 3", "SET 1 LOOSE", "PUT 1 INSIDE 3", "PUT 2 INSIDE 3", "SET 3 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 46;
    vector<string> actions = {"PUT 7 INSIDE 19", "PUT 3 INSIDE 19", "PUT 6 INSIDE 20", "SWAP 8 WITH 33", "SET 18 LOOSE", "PUT 15 INSIDE 23", "PUT 1 INSIDE 12", "SWAP 2 WITH 45", "PUT 5 INSIDE 14", "PUT 20 INSIDE 41", "PUT 4 INSIDE 29", "SET 30 LOOSE", "PUT 25 INSIDE 43", "PUT 16 INSIDE 41", "PUT 10 INSIDE 30", "PUT 26 INSIDE 41", "PUT 8 INSIDE 18", "PUT 18 INSIDE 42", "PUT 2 INSIDE 9", "PUT 27 INSIDE 40", "PUT 31 INSIDE 43", "PUT 13 INSIDE 17", "SWAP 43 WITH 22", "PUT 29 INSIDE 37", "PUT 21 INSIDE 45", "PUT 9 INSIDE 24", "PUT 12 INSIDE 22", "PUT 19 INSIDE 34", "PUT 22 INSIDE 37", "PUT 28 INSIDE 11", "SWAP 40 WITH 23", "SWAP 40 WITH 11", "PUT 23 INSIDE 37", "SWAP 38 WITH 37", "PUT 30 INSIDE 45", "PUT 32 INSIDE 44", "PUT 11 INSIDE 14", "SET 44 LOOSE", "PUT 17 INSIDE 40", "PUT 24 INSIDE 39", "PUT 14 INSIDE 40"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 24;
    vector<string> actions = {"SET 7 LOOSE", "SET 7 LOOSE", "SWAP 21 WITH 17", "PUT 16 INSIDE 14", "PUT 2 INSIDE 13", "SWAP 11 WITH 21", "PUT 3 INSIDE 13", "PUT 12 INSIDE 19", "PUT 7 INSIDE 10", "PUT 4 INSIDE 13", "PUT 6 INSIDE 9", "PUT 5 INSIDE 13", "PUT 19 INSIDE 21", "PUT 1 INSIDE 8", "PUT 22 INSIDE 20", "SWAP 24 WITH 14", "SWAP 8 WITH 13", "PUT 13 INSIDE 18", "PUT 9 INSIDE 15", "PUT 15 INSIDE 17", "PUT 8 INSIDE 10", "PUT 17 INSIDE 21", "PUT 18 INSIDE 20", "SET 20 LOOSE", "PUT 22 INSIDE 24", "PUT 10 INSIDE 14", "PUT 11 INSIDE 23", "SET 24 LOOSE", "PUT 22 INSIDE 24", "PUT 20 INSIDE 21", "PUT 16 INSIDE 23", "PUT 14 INSIDE 18", "SWAP 18 WITH 23", "SET 24 LOOSE", "PUT 18 INSIDE 21", "PUT 21 INSIDE 22", "PUT 23 INSIDE 24", "PUT 22 INSIDE 24"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 34;
    vector<string> actions = {"PUT 4 INSIDE 12", "PUT 5 INSIDE 17", "PUT 1 INSIDE 30", "PUT 3 INSIDE 9", "SET 14 LOOSE", "PUT 2 INSIDE 28"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 15;
    vector<string> actions = {"PUT 1 INSIDE 11", "PUT 3 INSIDE 4", "PUT 2 INSIDE 5", "PUT 7 INSIDE 9", "PUT 10 INSIDE 12", "PUT 14 INSIDE 15", "PUT 5 INSIDE 6", "SWAP 4 WITH 11", "PUT 15 INSIDE 11", "PUT 4 INSIDE 6", "PUT 6 INSIDE 8", "PUT 9 INSIDE 12", "SWAP 13 WITH 11", "SET 12 LOOSE", "PUT 10 INSIDE 12", "PUT 8 INSIDE 9", "PUT 11 INSIDE 12", "PUT 9 INSIDE 12", "PUT 12 INSIDE 13", "SET 13 LOOSE", "PUT 12 INSIDE 13", "PUT 13 INSIDE 15"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 16;
    vector<string> actions = {"PUT 1 INSIDE 5", "SET 4 LOOSE", "SWAP 8 WITH 14", "PUT 10 INSIDE 6", "PUT 2 INSIDE 5", "PUT 14 INSIDE 6", "PUT 13 INSIDE 8", "PUT 12 INSIDE 4", "PUT 16 INSIDE 15", "SET 15 LOOSE", "PUT 15 INSIDE 3", "PUT 5 INSIDE 11", "SWAP 9 WITH 16", "PUT 6 INSIDE 16", "PUT 11 INSIDE 8", "PUT 16 INSIDE 3", "SET 3 LOOSE", "SET 16 LOOSE", "PUT 16 INSIDE 8", "PUT 3 INSIDE 7", "PUT 9 INSIDE 8", "SWAP 6 WITH 4", "SWAP 6 WITH 8", "PUT 4 INSIDE 15", "SET 8 LOOSE", "PUT 15 INSIDE 6", "SET 8 LOOSE", "PUT 8 INSIDE 6", "PUT 7 INSIDE 6", "SET 6 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 5;
    vector<string> actions = {"PUT 3 INSIDE 1", "PUT 5 INSIDE 1", "PUT 4 INSIDE 2", "PUT 1 INSIDE 2", "SET 2 LOOSE", "SWAP 1 WITH 2", "SET 1 LOOSE", "SWAP 4 WITH 2", "SET 3 LOOSE", "PUT 3 INSIDE 2", "PUT 1 INSIDE 5", "PUT 2 INSIDE 4", "PUT 5 INSIDE 4", "SET 4 LOOSE", "PUT 5 INSIDE 2", "SET 4 LOOSE", "SET 2 LOOSE", "PUT 5 INSIDE 3", "PUT 2 INSIDE 3", "PUT 3 INSIDE 4", "SET 4 LOOSE", "SWAP 4 WITH 3", "PUT 4 INSIDE 3", "SET 3 LOOSE", "SWAP 4 WITH 3", "SET 4 LOOSE", "PUT 2 INSIDE 3", "PUT 4 INSIDE 3", "PUT 5 INSIDE 3", "SET 3 LOOSE", "PUT 4 INSIDE 5", "PUT 2 INSIDE 5", "PUT 5 INSIDE 3", "SET 3 LOOSE", "PUT 3 INSIDE 5", "SET 5 LOOSE", "PUT 3 INSIDE 1", "SET 4 LOOSE", "SWAP 5 WITH 1", "SET 1 LOOSE", "PUT 1 INSIDE 4", "PUT 2 INSIDE 5"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 37;
    vector<string> actions = {"PUT 6 INSIDE 37", "SWAP 10 WITH 2", "PUT 8 INSIDE 16", "PUT 2 INSIDE 7", "PUT 7 INSIDE 22", "PUT 1 INSIDE 4", "PUT 5 INSIDE 24", "PUT 3 INSIDE 4", "PUT 9 INSIDE 33", "PUT 10 INSIDE 22", "SET 31 LOOSE", "SWAP 31 WITH 17", "PUT 4 INSIDE 26"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 3;
    vector<string> actions = {"SET 1 LOOSE", "PUT 2 INSIDE 1", "PUT 3 INSIDE 1", "SET 1 LOOSE", "PUT 3 INSIDE 1", "SET 2 LOOSE", "SET 2 LOOSE", "SWAP 1 WITH 2", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "SET 1 LOOSE", "SET 2 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 24;
    vector<string> actions = {"PUT 16 INSIDE 18", "SET 5 LOOSE", "PUT 6 INSIDE 10", "PUT 2 INSIDE 10", "PUT 9 INSIDE 12", "PUT 13 INSIDE 21", "SWAP 24 WITH 15", "PUT 24 INSIDE 23", "PUT 4 INSIDE 11", "PUT 3 INSIDE 11", "PUT 11 INSIDE 15", "PUT 20 INSIDE 18", "PUT 12 INSIDE 15", "PUT 19 INSIDE 14", "PUT 8 INSIDE 10", "PUT 1 INSIDE 5", "PUT 5 INSIDE 10", "PUT 7 INSIDE 10", "PUT 21 INSIDE 23", "PUT 10 INSIDE 17", "SWAP 18 WITH 14", "PUT 15 INSIDE 22", "PUT 17 INSIDE 22", "PUT 14 INSIDE 22", "PUT 22 INSIDE 23", "SET 18 LOOSE", "PUT 18 INSIDE 20", "PUT 16 INSIDE 19", "PUT 20 INSIDE 23", "PUT 19 INSIDE 23", "SET 23 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 27;
    vector<string> actions = {"SWAP 17 WITH 1", "PUT 2 INSIDE 27", "PUT 1 INSIDE 9", "SET 23 LOOSE", "SET 14 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 24;
    vector<string> actions = {"PUT 3 INSIDE 4", "PUT 4 INSIDE 11", "PUT 9 INSIDE 12", "PUT 16 INSIDE 19", "SET 1 LOOSE", "PUT 11 INSIDE 19", "PUT 24 INSIDE 21", "PUT 2 INSIDE 22", "PUT 10 INSIDE 14", "SET 20 LOOSE", "PUT 14 INSIDE 19", "PUT 8 INSIDE 15", "PUT 12 INSIDE 23", "SWAP 7 WITH 22", "PUT 6 INSIDE 13", "PUT 1 INSIDE 7", "PUT 5 INSIDE 15", "PUT 7 INSIDE 15", "SWAP 19 WITH 23", "PUT 13 INSIDE 19", "SET 21 LOOSE", "PUT 15 INSIDE 18", "PUT 22 INSIDE 21", "SWAP 20 WITH 23", "PUT 23 INSIDE 24", "PUT 17 INSIDE 20", "SET 21 LOOSE", "PUT 20 INSIDE 24", "PUT 19 INSIDE 21", "PUT 24 INSIDE 21", "SET 21 LOOSE", "PUT 18 INSIDE 21", "PUT 19 INSIDE 21", "PUT 21 INSIDE 24", "PUT 22 INSIDE 24"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 46;
    vector<string> actions = {"PUT 2 INSIDE 4", "SET 37 LOOSE", "PUT 7 INSIDE 43", "PUT 1 INSIDE 17", "PUT 16 INSIDE 41", "PUT 15 INSIDE 40", "PUT 8 INSIDE 18", "SET 29 LOOSE", "PUT 3 INSIDE 30", "PUT 10 INSIDE 43", "PUT 13 INSIDE 18", "PUT 17 INSIDE 22", "PUT 12 INSIDE 23", "PUT 11 INSIDE 37", "PUT 9 INSIDE 30", "PUT 5 INSIDE 25", "PUT 6 INSIDE 23", "PUT 4 INSIDE 39", "PUT 14 INSIDE 27"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 19;
    vector<string> actions = {"PUT 3 INSIDE 8", "SWAP 17 WITH 12", "PUT 1 INSIDE 2", "PUT 2 INSIDE 9", "PUT 6 INSIDE 14", "PUT 8 INSIDE 11", "PUT 9 INSIDE 15", "SET 10 LOOSE", "SWAP 19 WITH 16", "PUT 4 INSIDE 5", "PUT 7 INSIDE 13", "PUT 5 INSIDE 19", "PUT 10 INSIDE 18"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 30;
    vector<string> actions = {"PUT 2 INSIDE 21", "PUT 1 INSIDE 16", "PUT 3 INSIDE 14"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 5;
    vector<string> actions = {"PUT 2 INSIDE 3", "PUT 5 INSIDE 3", "PUT 4 INSIDE 3", "PUT 1 INSIDE 3", "SET 3 LOOSE", "PUT 5 INSIDE 3", "SET 4 LOOSE", "PUT 1 INSIDE 2", "PUT 4 INSIDE 3", "PUT 3 INSIDE 2", "SET 2 LOOSE", "PUT 1 INSIDE 3", "PUT 2 INSIDE 3", "SET 3 LOOSE", "PUT 2 INSIDE 3", "SET 1 LOOSE", "PUT 1 INSIDE 3", "PUT 3 INSIDE 4", "SWAP 4 WITH 5", "PUT 5 INSIDE 4", "SET 4 LOOSE", "SET 4 LOOSE", "SWAP 5 WITH 4", "PUT 3 INSIDE 4", "PUT 5 INSIDE 4", "SET 4 LOOSE", "PUT 4 INSIDE 5", "PUT 3 INSIDE 5", "SET 5 LOOSE", "PUT 3 INSIDE 5", "PUT 5 INSIDE 4", "SET 4 LOOSE", "SWAP 4 WITH 5", "PUT 4 INSIDE 5", "SET 5 LOOSE", "PUT 4 INSIDE 5", "SET 5 LOOSE", "SET 5 LOOSE", "SET 4 LOOSE", "PUT 3 INSIDE 4", "PUT 4 INSIDE 5", "SET 5 LOOSE", "PUT 4 INSIDE 5", "SET 5 LOOSE", "SET 4 LOOSE", "PUT 3 INSIDE 5", "PUT 4 INSIDE 5", "SET 5 LOOSE", "SET 4 LOOSE", "PUT 3 INSIDE 4"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 46;
    vector<string> actions = {"PUT 6 INSIDE 43", "PUT 2 INSIDE 46", "PUT 4 INSIDE 32", "PUT 3 INSIDE 27", "PUT 5 INSIDE 36", "PUT 1 INSIDE 15"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 43;
    vector<string> actions = {"PUT 13 INSIDE 31", "PUT 18 INSIDE 34", "PUT 2 INSIDE 27", "PUT 16 INSIDE 29", "PUT 20 INSIDE 23", "PUT 1 INSIDE 12", "PUT 5 INSIDE 24", "PUT 10 INSIDE 23", "PUT 12 INSIDE 40", "PUT 9 INSIDE 22", "SET 27 LOOSE", "SET 35 LOOSE", "PUT 17 INSIDE 37", "SWAP 37 WITH 11", "PUT 4 INSIDE 7", "PUT 3 INSIDE 11", "SWAP 32 WITH 38", "SET 15 LOOSE", "PUT 14 INSIDE 21", "PUT 6 INSIDE 26", "PUT 19 INSIDE 21", "PUT 2 INSIDE 7", "PUT 8 INSIDE 36", "PUT 7 INSIDE 26", "PUT 15 INSIDE 30", "SWAP 33 WITH 41", "PUT 11 INSIDE 31"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 28;
    vector<string> actions = {"PUT 7 INSIDE 28", "PUT 1 INSIDE 2", "PUT 11 INSIDE 10", "SET 10 LOOSE", "SWAP 9 WITH 22", "SWAP 25 WITH 4", "PUT 2 INSIDE 20", "PUT 11 INSIDE 22", "PUT 4 INSIDE 27", "PUT 9 INSIDE 18", "PUT 10 INSIDE 20", "PUT 8 INSIDE 26", "PUT 5 INSIDE 27", "PUT 6 INSIDE 24", "PUT 3 INSIDE 17"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 19;
    vector<string> actions = {"PUT 7 INSIDE 10", "PUT 1 INSIDE 8", "PUT 8 INSIDE 12", "PUT 2 INSIDE 5", "PUT 4 INSIDE 5", "PUT 6 INSIDE 13", "SET 17 LOOSE", "SWAP 11 WITH 5", "PUT 5 INSIDE 18", "PUT 3 INSIDE 15"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 36;
    vector<string> actions = {"PUT 16 INSIDE 27", "SET 28 LOOSE", "PUT 1 INSIDE 4", "PUT 28 INSIDE 35", "SWAP 26 WITH 22", "SET 24 LOOSE", "PUT 2 INSIDE 4", "PUT 5 INSIDE 12", "PUT 21 INSIDE 31", "PUT 7 INSIDE 12", "PUT 30 INSIDE 36", "PUT 4 INSIDE 13", "PUT 11 INSIDE 23", "SET 18 LOOSE", "PUT 3 INSIDE 10", "PUT 10 INSIDE 14", "PUT 19 INSIDE 27", "PUT 15 INSIDE 27", "PUT 29 INSIDE 36", "PUT 25 INSIDE 36", "PUT 12 INSIDE 26", "PUT 6 INSIDE 18", "PUT 31 INSIDE 36", "PUT 8 INSIDE 13", "PUT 9 INSIDE 17", "PUT 22 INSIDE 23", "PUT 13 INSIDE 23", "PUT 17 INSIDE 26", "PUT 26 INSIDE 32", "PUT 18 INSIDE 24", "PUT 27 INSIDE 35", "PUT 20 INSIDE 23", "SWAP 32 WITH 34", "PUT 23 INSIDE 32", "PUT 14 INSIDE 24", "SWAP 35 WITH 36", "PUT 24 INSIDE 34", "SET 36 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 31;
    vector<string> actions = {"PUT 1 INSIDE 9"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 25;
    vector<string> actions = {"PUT 20 INSIDE 8", "PUT 18 INSIDE 11", "PUT 19 INSIDE 21", "SWAP 21 WITH 8", "PUT 24 INSIDE 6", "PUT 2 INSIDE 22", "PUT 1 INSIDE 5", "PUT 5 INSIDE 6", "PUT 16 INSIDE 17", "SET 22 LOOSE", "SWAP 12 WITH 7", "SET 6 LOOSE", "PUT 25 INSIDE 22", "PUT 5 INSIDE 12", "PUT 2 INSIDE 4", "SWAP 13 WITH 3", "PUT 4 INSIDE 10", "PUT 24 INSIDE 22", "PUT 13 INSIDE 14", "SET 15 LOOSE", "SET 17 LOOSE", "SET 12 LOOSE", "SET 7 LOOSE", "SET 23 LOOSE", "PUT 5 INSIDE 10", "PUT 12 INSIDE 14", "PUT 3 INSIDE 10", "PUT 9 INSIDE 17", "SET 11 LOOSE", "PUT 8 INSIDE 18", "PUT 23 INSIDE 22", "PUT 11 INSIDE 18", "PUT 17 INSIDE 21", "PUT 6 INSIDE 18", "PUT 10 INSIDE 18", "PUT 7 INSIDE 15", "PUT 15 INSIDE 21", "PUT 16 INSIDE 21", "PUT 18 INSIDE 21", "PUT 14 INSIDE 21", "PUT 21 INSIDE 22", "SET 22 LOOSE", "PUT 21 INSIDE 25", "SWAP 22 WITH 23"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 30;
    vector<string> actions = {"PUT 13 INSIDE 16", "PUT 9 INSIDE 18", "SWAP 28 WITH 3", "SWAP 16 WITH 5", "PUT 12 INSIDE 21", "SET 1 LOOSE", "PUT 2 INSIDE 17", "PUT 5 INSIDE 18", "PUT 10 INSIDE 20", "SWAP 21 WITH 29", "PUT 1 INSIDE 7", "PUT 23 INSIDE 28", "SET 17 LOOSE", "PUT 3 INSIDE 8", "PUT 4 INSIDE 7", "PUT 15 INSIDE 20", "PUT 7 INSIDE 22", "SET 30 LOOSE", "PUT 16 INSIDE 30", "PUT 25 INSIDE 29", "PUT 8 INSIDE 21", "PUT 20 INSIDE 27", "PUT 17 INSIDE 24", "SWAP 22 WITH 14", "PUT 21 INSIDE 28", "PUT 6 INSIDE 22", "PUT 2 INSIDE 14", "PUT 22 INSIDE 27", "PUT 18 INSIDE 26", "PUT 14 INSIDE 19", "PUT 26 INSIDE 29", "PUT 28 INSIDE 30", "PUT 11 INSIDE 19", "PUT 19 INSIDE 27", "SWAP 30 WITH 24", "SET 30 LOOSE", "PUT 17 INSIDE 28", "PUT 28 INSIDE 29", "PUT 16 INSIDE 24", "PUT 24 INSIDE 29", "SET 30 LOOSE", "PUT 27 INSIDE 30"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 40;
    vector<string> actions = {"PUT 3 INSIDE 39", "PUT 9 INSIDE 17", "PUT 4 INSIDE 21", "PUT 2 INSIDE 19", "PUT 5 INSIDE 23", "PUT 7 INSIDE 20", "SWAP 22 WITH 1", "PUT 6 INSIDE 23", "SWAP 20 WITH 18", "PUT 1 INSIDE 8", "PUT 8 INSIDE 26", "SET 31 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 36;
    vector<string> actions = {"PUT 10 INSIDE 11", "PUT 6 INSIDE 18", "PUT 21 INSIDE 30", "PUT 3 INSIDE 7", "PUT 1 INSIDE 2", "PUT 35 INSIDE 36", "PUT 20 INSIDE 31", "PUT 30 INSIDE 34", "PUT 9 INSIDE 8", "PUT 24 INSIDE 32", "PUT 2 INSIDE 7", "SWAP 22 WITH 19", "PUT 22 INSIDE 32", "PUT 15 INSIDE 25", "PUT 11 INSIDE 26", "PUT 17 INSIDE 31", "PUT 7 INSIDE 8", "SWAP 13 WITH 8", "PUT 34 INSIDE 36", "SET 29 LOOSE", "PUT 4 INSIDE 5", "SWAP 18 WITH 33", "PUT 32 INSIDE 28", "SET 28 LOOSE", "PUT 18 INSIDE 23", "PUT 25 INSIDE 27", "PUT 8 INSIDE 19", "PUT 32 INSIDE 36", "PUT 16 INSIDE 23", "PUT 14 INSIDE 26", "PUT 12 INSIDE 23", "PUT 5 INSIDE 13", "PUT 19 INSIDE 28", "PUT 26 INSIDE 33", "SET 31 LOOSE", "PUT 29 INSIDE 31", "PUT 28 INSIDE 33", "PUT 33 INSIDE 36", "PUT 20 INSIDE 23", "SET 27 LOOSE", "PUT 17 INSIDE 27", "PUT 13 INSIDE 23", "PUT 27 INSIDE 31", "PUT 23 INSIDE 36", "PUT 25 INSIDE 31", "SET 36 LOOSE", "PUT 23 INSIDE 32"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 30;
    vector<string> actions = {"PUT 4 INSIDE 5", "SET 9 LOOSE", "PUT 21 INSIDE 25", "PUT 19 INSIDE 27", "PUT 1 INSIDE 9", "PUT 6 INSIDE 20", "PUT 8 INSIDE 18", "PUT 20 INSIDE 30", "SET 16 LOOSE", "PUT 2 INSIDE 11", "PUT 11 INSIDE 16", "PUT 16 INSIDE 24", "PUT 5 INSIDE 18", "PUT 13 INSIDE 28", "SET 7 LOOSE", "PUT 10 INSIDE 12", "PUT 12 INSIDE 30", "SET 3 LOOSE", "PUT 7 INSIDE 18", "PUT 18 INSIDE 30", "PUT 14 INSIDE 23", "PUT 3 INSIDE 9", "PUT 15 INSIDE 26", "PUT 9 INSIDE 17", "PUT 17 INSIDE 28"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 39;
    vector<string> actions = {"PUT 32 INSIDE 30", "PUT 25 INSIDE 37", "PUT 28 INSIDE 34", "SWAP 18 WITH 10", "PUT 27 INSIDE 37", "PUT 24 INSIDE 31", "PUT 39 INSIDE 34", "PUT 7 INSIDE 19", "PUT 1 INSIDE 14", "PUT 14 INSIDE 21", "PUT 17 INSIDE 21", "PUT 4 INSIDE 16", "SWAP 35 WITH 8", "PUT 9 INSIDE 23", "PUT 6 INSIDE 29", "SET 34 LOOSE", "PUT 5 INSIDE 28", "PUT 18 INSIDE 21", "PUT 15 INSIDE 28", "PUT 10 INSIDE 12", "PUT 16 INSIDE 23", "PUT 26 INSIDE 39", "PUT 20 INSIDE 39", "SET 35 LOOSE", "SWAP 30 WITH 11", "SWAP 19 WITH 13", "PUT 23 INSIDE 33", "SET 22 LOOSE", "PUT 21 INSIDE 37", "PUT 8 INSIDE 29", "PUT 2 INSIDE 11", "SET 30 LOOSE", "PUT 22 INSIDE 31", "PUT 3 INSIDE 11", "PUT 13 INSIDE 19", "PUT 19 INSIDE 36", "PUT 11 INSIDE 29", "PUT 29 INSIDE 33", "SWAP 30 WITH 12", "PUT 30 INSIDE 35", "PUT 12 INSIDE 28", "PUT 28 INSIDE 31"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 26;
    vector<string> actions = {"PUT 12 INSIDE 20", "PUT 5 INSIDE 10", "PUT 13 INSIDE 9", "PUT 7 INSIDE 15", "SET 22 LOOSE", "PUT 11 INSIDE 9", "PUT 14 INSIDE 22", "PUT 10 INSIDE 16", "PUT 26 INSIDE 25", "PUT 8 INSIDE 17", "SWAP 15 WITH 9", "PUT 1 INSIDE 4", "PUT 2 INSIDE 4", "PUT 17 INSIDE 23", "PUT 4 INSIDE 6", "PUT 16 INSIDE 22", "PUT 3 INSIDE 6", "SET 20 LOOSE", "PUT 19 INSIDE 18", "PUT 23 INSIDE 24", "PUT 9 INSIDE 20", "PUT 6 INSIDE 12", "SET 18 LOOSE", "PUT 20 INSIDE 21", "PUT 21 INSIDE 24", "PUT 12 INSIDE 15", "PUT 19 INSIDE 22", "PUT 15 INSIDE 22", "PUT 18 INSIDE 22", "PUT 24 INSIDE 25", "PUT 22 INSIDE 25", "SET 25 LOOSE", "PUT 22 INSIDE 25", "SWAP 26 WITH 25"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 44;
    vector<string> actions = {"PUT 4 INSIDE 35", "PUT 9 INSIDE 42", "PUT 6 INSIDE 24", "SET 38 LOOSE", "SWAP 26 WITH 25", "PUT 8 INSIDE 32", "PUT 3 INSIDE 37", "PUT 10 INSIDE 39", "PUT 7 INSIDE 26", "PUT 12 INSIDE 18", "PUT 11 INSIDE 15", "PUT 5 INSIDE 37", "PUT 1 INSIDE 28", "SWAP 18 WITH 21", "PUT 2 INSIDE 27"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 42;
    vector<string> actions = {"PUT 19 INSIDE 37", "PUT 14 INSIDE 40", "PUT 5 INSIDE 13", "SET 32 LOOSE", "PUT 4 INSIDE 10", "PUT 18 INSIDE 34", "PUT 8 INSIDE 30", "PUT 10 INSIDE 34", "SWAP 33 WITH 32", "PUT 1 INSIDE 2", "PUT 12 INSIDE 35", "PUT 9 INSIDE 38", "PUT 2 INSIDE 7", "SWAP 38 WITH 41", "PUT 3 INSIDE 11", "PUT 6 INSIDE 27", "PUT 16 INSIDE 27", "PUT 17 INSIDE 33", "PUT 13 INSIDE 38", "PUT 7 INSIDE 40", "PUT 11 INSIDE 23", "PUT 15 INSIDE 40", "SET 36 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 37;
    vector<string> actions = {"PUT 1 INSIDE 13", "SET 24 LOOSE", "SET 30 LOOSE", "SET 31 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 1;
    vector<string> actions = {"SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE", "SET 1 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 32;
    vector<string> actions = {"SET 2 LOOSE", "PUT 20 INSIDE 28", "PUT 2 INSIDE 8", "PUT 32 INSIDE 13", "PUT 1 INSIDE 4", "SWAP 16 WITH 18", "SWAP 4 WITH 16", "PUT 21 INSIDE 26", "PUT 8 INSIDE 18", "SWAP 11 WITH 14", "SWAP 19 WITH 3", "SET 30 LOOSE", "PUT 3 INSIDE 9", "SWAP 19 WITH 14", "PUT 4 INSIDE 13", "PUT 12 INSIDE 24", "PUT 5 INSIDE 15", "PUT 25 INSIDE 23", "PUT 16 INSIDE 24", "PUT 7 INSIDE 15", "SET 13 LOOSE", "SWAP 15 WITH 29", "PUT 4 INSIDE 9", "PUT 10 INSIDE 15", "PUT 6 INSIDE 13", "PUT 19 INSIDE 30", "PUT 9 INSIDE 11", "PUT 17 INSIDE 24", "PUT 11 INSIDE 30", "SET 26 LOOSE", "PUT 18 INSIDE 29", "SET 23 LOOSE", "PUT 13 INSIDE 32", "PUT 15 INSIDE 26", "PUT 14 INSIDE 32"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 44;
    vector<string> actions = {"PUT 8 INSIDE 21", "PUT 2 INSIDE 7", "PUT 6 INSIDE 14", "SET 23 LOOSE", "PUT 1 INSIDE 10", "PUT 16 INSIDE 44", "SWAP 14 WITH 17", "PUT 38 INSIDE 13", "PUT 5 INSIDE 25", "PUT 18 INSIDE 32", "PUT 21 INSIDE 30", "SET 3 LOOSE", "PUT 3 INSIDE 9", "PUT 17 INSIDE 39", "SET 42 LOOSE", "PUT 4 INSIDE 20", "PUT 10 INSIDE 19", "SET 13 LOOSE", "PUT 11 INSIDE 31", "PUT 22 INSIDE 41", "PUT 15 INSIDE 28", "PUT 19 INSIDE 42", "SWAP 43 WITH 26", "PUT 9 INSIDE 13", "PUT 12 INSIDE 30", "PUT 27 INSIDE 44", "SWAP 36 WITH 42", "PUT 24 INSIDE 44", "PUT 7 INSIDE 25", "PUT 23 INSIDE 37", "PUT 42 INSIDE 35", "PUT 25 INSIDE 32", "PUT 26 INSIDE 37", "PUT 13 INSIDE 36", "SET 35 LOOSE", "PUT 20 INSIDE 29", "PUT 14 INSIDE 44"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
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
    vector<string> actions = {"PUT 7 INSIDE 17", "SET 16 LOOSE", "PUT 4 INSIDE 21", "PUT 8 INSIDE 34", "SET 33 LOOSE", "SET 35 LOOSE", "PUT 2 INSIDE 45", "PUT 6 INSIDE 11", "PUT 5 INSIDE 34", "PUT 3 INSIDE 11", "PUT 1 INSIDE 46", "PUT 9 INSIDE 19", "PUT 10 INSIDE 41"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 10;
    vector<string> actions = {"PUT 2 INSIDE 6", "PUT 1 INSIDE 9", "PUT 3 INSIDE 7", "SWAP 5 WITH 4", "SWAP 5 WITH 4", "PUT 4 INSIDE 10", "SWAP 6 WITH 5", "SET 10 LOOSE", "PUT 4 INSIDE 7"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 46;
    vector<string> actions = {"SET 14 LOOSE", "PUT 5 INSIDE 18", "SWAP 3 WITH 11", "PUT 1 INSIDE 19", "PUT 16 INSIDE 10", "PUT 8 INSIDE 26", "PUT 6 INSIDE 15", "PUT 4 INSIDE 13", "PUT 19 INSIDE 32", "PUT 2 INSIDE 11", "PUT 7 INSIDE 12", "SWAP 35 WITH 39", "PUT 18 INSIDE 32", "PUT 44 INSIDE 27", "PUT 13 INSIDE 41", "PUT 17 INSIDE 25", "PUT 14 INSIDE 42", "PUT 3 INSIDE 11", "PUT 11 INSIDE 22", "SWAP 36 WITH 10", "PUT 9 INSIDE 25", "SET 27 LOOSE", "PUT 15 INSIDE 42", "SET 23 LOOSE", "PUT 10 INSIDE 23", "SWAP 34 WITH 22", "PUT 12 INSIDE 39"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 2;
    vector<string> actions = {"PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "SWAP 1 WITH 2", "SET 1 LOOSE", "SET 2 LOOSE", "SET 1 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "SWAP 2 WITH 1", "PUT 2 INSIDE 1", "SET 1 LOOSE", "SET 2 LOOSE", "SWAP 1 WITH 2", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "SET 1 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "PUT 1 INSIDE 2"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 10;
    vector<string> actions = {"PUT 1 INSIDE 5", "PUT 3 INSIDE 8", "SWAP 2 WITH 6", "PUT 5 INSIDE 8", "PUT 4 INSIDE 10", "SWAP 6 WITH 9", "PUT 2 INSIDE 7", "SWAP 7 WITH 9", "PUT 8 INSIDE 7", "PUT 9 INSIDE 7", "SWAP 10 WITH 7", "PUT 7 INSIDE 6", "SET 6 LOOSE", "PUT 7 INSIDE 10", "PUT 10 INSIDE 6", "SET 6 LOOSE", "PUT 10 INSIDE 6", "SET 6 LOOSE", "PUT 6 INSIDE 10", "SET 10 LOOSE", "PUT 4 INSIDE 7", "PUT 2 INSIDE 9", "SWAP 10 WITH 8", "PUT 6 INSIDE 10"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
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
    vector<string> actions = {"PUT 8 INSIDE 26", "PUT 1 INSIDE 7", "PUT 6 INSIDE 34", "PUT 28 INSIDE 44", "PUT 13 INSIDE 24", "PUT 2 INSIDE 14", "PUT 12 INSIDE 26", "PUT 25 INSIDE 38", "PUT 29 INSIDE 43", "PUT 16 INSIDE 35", "PUT 4 INSIDE 24", "PUT 11 INSIDE 21", "PUT 3 INSIDE 15", "PUT 31 INSIDE 48", "SWAP 32 WITH 5", "PUT 10 INSIDE 17", "SWAP 41 WITH 49", "PUT 33 INSIDE 37", "PUT 20 INSIDE 44", "PUT 22 INSIDE 39", "SWAP 35 WITH 41", "PUT 14 INSIDE 26", "PUT 5 INSIDE 26", "SWAP 40 WITH 39", "PUT 19 INSIDE 42", "PUT 15 INSIDE 24", "PUT 34 INSIDE 43", "PUT 7 INSIDE 18", "PUT 21 INSIDE 48", "SET 30 LOOSE", "PUT 17 INSIDE 48", "PUT 18 INSIDE 45", "PUT 9 INSIDE 27", "PUT 43 INSIDE 50", "PUT 27 INSIDE 48", "PUT 30 INSIDE 44", "SWAP 23 WITH 41", "PUT 37 INSIDE 50", "PUT 32 INSIDE 49", "PUT 26 INSIDE 42", "PUT 23 INSIDE 47", "SET 50 LOOSE", "PUT 24 INSIDE 48"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 30;
    vector<string> actions = {"PUT 8 INSIDE 20", "SWAP 15 WITH 7", "SWAP 19 WITH 5", "SWAP 1 WITH 7", "PUT 3 INSIDE 7", "PUT 13 INSIDE 20", "PUT 2 INSIDE 6", "PUT 1 INSIDE 4", "PUT 5 INSIDE 14", "PUT 6 INSIDE 15", "PUT 4 INSIDE 10", "PUT 10 INSIDE 24", "PUT 14 INSIDE 25", "PUT 16 INSIDE 23", "PUT 7 INSIDE 15", "PUT 15 INSIDE 25", "PUT 9 INSIDE 28", "PUT 17 INSIDE 25", "PUT 11 INSIDE 29", "PUT 3 INSIDE 30"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 30;
    vector<string> actions = {"PUT 5 INSIDE 26", "PUT 8 INSIDE 23", "PUT 2 INSIDE 28", "SET 25 LOOSE", "PUT 7 INSIDE 11", "PUT 1 INSIDE 3", "PUT 3 INSIDE 29", "SET 10 LOOSE", "PUT 4 INSIDE 18", "SWAP 21 WITH 28", "PUT 9 INSIDE 13", "PUT 6 INSIDE 16"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 40;
    vector<string> actions = {"PUT 1 INSIDE 5", "PUT 21 INSIDE 22", "PUT 11 INSIDE 26", "PUT 18 INSIDE 29", "PUT 17 INSIDE 30", "PUT 9 INSIDE 31", "PUT 15 INSIDE 31", "PUT 3 INSIDE 4", "PUT 2 INSIDE 4", "PUT 5 INSIDE 7", "PUT 25 INSIDE 35", "PUT 10 INSIDE 27", "PUT 6 INSIDE 19", "PUT 20 INSIDE 24", "PUT 13 INSIDE 28", "PUT 4 INSIDE 7", "PUT 12 INSIDE 33", "PUT 14 INSIDE 22", "PUT 22 INSIDE 40", "PUT 7 INSIDE 16", "PUT 28 INSIDE 40", "PUT 27 INSIDE 35", "PUT 8 INSIDE 24", "PUT 19 INSIDE 24", "SWAP 24 WITH 33", "PUT 26 INSIDE 38", "PUT 23 INSIDE 32", "PUT 31 INSIDE 37", "PUT 30 INSIDE 32", "PUT 29 INSIDE 35", "PUT 16 INSIDE 24", "PUT 24 INSIDE 34"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 12;
    vector<string> actions = {"PUT 3 INSIDE 7", "PUT 1 INSIDE 4", "PUT 6 INSIDE 12", "PUT 11 INSIDE 5", "PUT 8 INSIDE 10", "PUT 2 INSIDE 4", "PUT 4 INSIDE 7", "PUT 7 INSIDE 10", "SET 5 LOOSE", "PUT 10 INSIDE 11", "PUT 5 INSIDE 11", "SET 9 LOOSE", "SET 11 LOOSE", "PUT 5 INSIDE 10", "PUT 11 INSIDE 9", "PUT 10 INSIDE 9", "PUT 9 INSIDE 12", "SET 12 LOOSE", "PUT 6 INSIDE 12", "SET 9 LOOSE", "PUT 10 INSIDE 9", "PUT 12 INSIDE 9", "PUT 9 INSIDE 11", "SET 11 LOOSE", "PUT 9 INSIDE 11", "SET 11 LOOSE", "PUT 11 INSIDE 9", "SET 9 LOOSE", "SWAP 12 WITH 9", "SWAP 10 WITH 9", "PUT 9 INSIDE 12"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 42;
    vector<string> actions = {"PUT 13 INSIDE 23", "PUT 3 INSIDE 14", "PUT 2 INSIDE 10", "SWAP 30 WITH 16", "SWAP 35 WITH 28", "PUT 7 INSIDE 34", "PUT 9 INSIDE 35", "SWAP 22 WITH 18", "PUT 5 INSIDE 41", "SET 19 LOOSE", "PUT 1 INSIDE 8", "PUT 10 INSIDE 19", "PUT 15 INSIDE 30", "PUT 12 INSIDE 20", "PUT 14 INSIDE 39", "PUT 11 INSIDE 25", "PUT 4 INSIDE 30", "PUT 6 INSIDE 39", "PUT 8 INSIDE 32"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 21;
    vector<string> actions = {"SWAP 11 WITH 2", "PUT 1 INSIDE 5", "SET 11 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 23;
    vector<string> actions = {"SET 4 LOOSE", "PUT 1 INSIDE 6", "PUT 4 INSIDE 5", "PUT 14 INSIDE 21", "PUT 17 INSIDE 2", "PUT 13 INSIDE 21", "PUT 7 INSIDE 12", "SWAP 23 WITH 10", "SWAP 20 WITH 2", "PUT 3 INSIDE 9", "SET 8 LOOSE", "PUT 10 INSIDE 18", "PUT 2 INSIDE 8", "PUT 5 INSIDE 11", "PUT 9 INSIDE 11", "PUT 12 INSIDE 16", "PUT 21 INSIDE 20", "PUT 8 INSIDE 15", "PUT 15 INSIDE 18", "PUT 18 INSIDE 23", "PUT 22 INSIDE 23", "SET 19 LOOSE", "PUT 6 INSIDE 11", "PUT 16 INSIDE 23", "PUT 11 INSIDE 23", "PUT 19 INSIDE 23", "SET 20 LOOSE", "PUT 23 INSIDE 17", "PUT 21 INSIDE 20", "PUT 20 INSIDE 17", "SET 17 LOOSE", "PUT 17 INSIDE 20", "SWAP 20 WITH 23", "PUT 20 INSIDE 23", "SET 23 LOOSE", "PUT 20 INSIDE 23", "SET 23 LOOSE", "PUT 20 INSIDE 23", "SET 23 LOOSE", "SET 20 LOOSE", "SWAP 21 WITH 19", "PUT 11 INSIDE 16"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 43;
    vector<string> actions = {"PUT 1 INSIDE 7", "PUT 5 INSIDE 13", "PUT 2 INSIDE 13", "SET 10 LOOSE", "PUT 7 INSIDE 10", "PUT 6 INSIDE 14", "PUT 11 INSIDE 42", "PUT 4 INSIDE 15", "PUT 9 INSIDE 42", "PUT 8 INSIDE 13", "PUT 12 INSIDE 38", "PUT 13 INSIDE 19", "SWAP 33 WITH 19", "PUT 3 INSIDE 10", "PUT 15 INSIDE 42", "PUT 18 INSIDE 27", "PUT 17 INSIDE 31", "PUT 10 INSIDE 32", "PUT 14 INSIDE 33", "PUT 16 INSIDE 26"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 8;
    vector<string> actions = {"PUT 1 INSIDE 2"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
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
    vector<string> actions = {"PUT 1 INSIDE 8", "PUT 3 INSIDE 31", "PUT 2 INSIDE 50"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 2;
    vector<string> actions = {"SET 2 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "SWAP 1 WITH 2", "PUT 1 INSIDE 2", "SET 2 LOOSE", "SET 2 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "SET 1 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE", "SET 1 LOOSE", "PUT 2 INSIDE 1", "SET 1 LOOSE", "SET 1 LOOSE", "PUT 1 INSIDE 2", "SET 2 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 15;
    vector<string> actions = {"PUT 3 INSIDE 12", "PUT 6 INSIDE 12", "PUT 2 INSIDE 13", "PUT 1 INSIDE 4", "PUT 4 INSIDE 12", "SWAP 9 WITH 14", "PUT 5 INSIDE 12", "PUT 7 INSIDE 13"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 50;
    vector<string> actions = {"SWAP 35 WITH 31", "PUT 18 INSIDE 26", "SWAP 44 WITH 31", "PUT 21 INSIDE 45", "SWAP 19 WITH 8", "PUT 6 INSIDE 16", "PUT 19 INSIDE 27", "PUT 3 INSIDE 8", "PUT 11 INSIDE 22", "SET 23 LOOSE", "PUT 14 INSIDE 35", "PUT 13 INSIDE 26", "SET 23 LOOSE", "PUT 2 INSIDE 7", "PUT 7 INSIDE 23", "PUT 10 INSIDE 22", "PUT 8 INSIDE 22", "PUT 9 INSIDE 23", "PUT 22 INSIDE 45", "PUT 15 INSIDE 36", "PUT 1 INSIDE 4", "SWAP 35 WITH 47", "PUT 5 INSIDE 17", "PUT 23 INSIDE 39", "SET 25 LOOSE", "PUT 17 INSIDE 28", "PUT 16 INSIDE 27", "PUT 20 INSIDE 38", "PUT 4 INSIDE 12", "PUT 12 INSIDE 50"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 28;
    vector<string> actions = {"PUT 3 INSIDE 7", "PUT 21 INSIDE 28", "SET 10 LOOSE", "PUT 27 INSIDE 14", "PUT 25 INSIDE 16", "PUT 11 INSIDE 23", "PUT 26 INSIDE 14", "PUT 6 INSIDE 22", "PUT 1 INSIDE 10", "PUT 4 INSIDE 23", "SET 2 LOOSE", "PUT 5 INSIDE 17", "PUT 2 INSIDE 7", "SWAP 8 WITH 19", "PUT 23 INSIDE 16", "PUT 7 INSIDE 12", "PUT 19 INSIDE 14", "PUT 18 INSIDE 15", "PUT 10 INSIDE 12", "PUT 8 INSIDE 20", "SWAP 22 WITH 13", "SWAP 15 WITH 13", "SWAP 13 WITH 24", "PUT 9 INSIDE 17", "PUT 22 INSIDE 24", "PUT 13 INSIDE 28", "PUT 12 INSIDE 15", "PUT 15 INSIDE 14", "PUT 17 INSIDE 24", "PUT 20 INSIDE 28", "PUT 14 INSIDE 16", "PUT 24 INSIDE 16", "PUT 28 INSIDE 16", "SET 16 LOOSE", "PUT 16 INSIDE 28", "PUT 23 INSIDE 24", "SET 14 LOOSE", "SWAP 25 WITH 15", "PUT 19 INSIDE 25", "PUT 14 INSIDE 25", "PUT 15 INSIDE 24"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 23;
    vector<string> actions = {"PUT 3 INSIDE 5", "PUT 1 INSIDE 4", "PUT 11 INSIDE 17", "PUT 15 INSIDE 7", "SWAP 23 WITH 7", "PUT 5 INSIDE 10", "PUT 2 INSIDE 7", "SET 12 LOOSE", "PUT 8 INSIDE 20", "PUT 4 INSIDE 6", "PUT 16 INSIDE 22", "PUT 20 INSIDE 22", "PUT 6 INSIDE 10", "PUT 19 INSIDE 23", "PUT 12 INSIDE 21", "PUT 7 INSIDE 10", "PUT 17 INSIDE 22", "PUT 21 INSIDE 22", "PUT 9 INSIDE 14", "PUT 10 INSIDE 14", "PUT 13 INSIDE 18", "PUT 14 INSIDE 22", "PUT 18 INSIDE 22"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 4;
    vector<string> actions = {"SET 4 LOOSE", "PUT 2 INSIDE 1", "PUT 3 INSIDE 4", "PUT 1 INSIDE 4", "SET 4 LOOSE", "PUT 4 INSIDE 3", "PUT 1 INSIDE 3", "SET 3 LOOSE", "PUT 3 INSIDE 1", "SET 1 LOOSE", "PUT 1 INSIDE 3", "PUT 3 INSIDE 4", "PUT 4 INSIDE 2", "SET 2 LOOSE", "PUT 2 INSIDE 4", "SET 4 LOOSE", "SWAP 2 WITH 3", "PUT 2 INSIDE 3", "PUT 4 INSIDE 3", "SET 3 LOOSE", "PUT 2 INSIDE 4", "PUT 3 INSIDE 4", "SET 4 LOOSE", "PUT 2 INSIDE 4", "SET 3 LOOSE", "PUT 4 INSIDE 3", "SET 3 LOOSE", "PUT 3 INSIDE 4", "SET 4 LOOSE", "SWAP 2 WITH 4", "PUT 2 INSIDE 3"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 40;
    vector<string> actions = {"SET 9 LOOSE", "PUT 1 INSIDE 8", "PUT 5 INSIDE 11", "PUT 7 INSIDE 32", "PUT 6 INSIDE 22", "SET 15 LOOSE", "PUT 8 INSIDE 12", "PUT 4 INSIDE 19", "PUT 3 INSIDE 27", "SET 10 LOOSE", "PUT 9 INSIDE 34", "SET 8 LOOSE", "PUT 2 INSIDE 38", "SWAP 17 WITH 26"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 5;
    vector<string> actions = {"PUT 2 INSIDE 5", "SWAP 1 WITH 4", "PUT 4 INSIDE 1", "PUT 1 INSIDE 5", "PUT 5 INSIDE 3", "SET 3 LOOSE", "PUT 3 INSIDE 5", "SET 5 LOOSE", "PUT 2 INSIDE 3", "PUT 1 INSIDE 3", "SET 3 LOOSE", "PUT 3 INSIDE 5", "SWAP 2 WITH 1", "PUT 1 INSIDE 5", "PUT 5 INSIDE 2", "SET 2 LOOSE", "PUT 4 INSIDE 2", "PUT 5 INSIDE 2", "SET 2 LOOSE", "SWAP 4 WITH 5", "PUT 2 INSIDE 5", "SWAP 4 WITH 5", "SWAP 4 WITH 5", "PUT 5 INSIDE 4", "SET 4 LOOSE", "PUT 1 INSIDE 4", "SWAP 3 WITH 5", "PUT 3 INSIDE 4", "PUT 2 INSIDE 4"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 11;
    vector<string> actions = {"PUT 4 INSIDE 9", "PUT 1 INSIDE 5", "PUT 5 INSIDE 8", "PUT 6 INSIDE 8", "PUT 2 INSIDE 9", "PUT 3 INSIDE 9", "PUT 7 INSIDE 8", "SET 11 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 38;
    vector<string> actions = {"PUT 1 INSIDE 28", "SET 4 LOOSE", "SWAP 7 WITH 9", "PUT 4 INSIDE 6", "PUT 2 INSIDE 18", "PUT 3 INSIDE 13"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 34;
    vector<string> actions = {"PUT 3 INSIDE 7", "PUT 4 INSIDE 7", "PUT 11 INSIDE 22", "PUT 14 INSIDE 27", "PUT 19 INSIDE 34", "PUT 1 INSIDE 6", "PUT 2 INSIDE 8", "PUT 6 INSIDE 10", "PUT 10 INSIDE 20", "PUT 5 INSIDE 9", "PUT 18 INSIDE 29", "PUT 7 INSIDE 15", "PUT 20 INSIDE 29", "SET 17 LOOSE", "PUT 9 INSIDE 21", "SET 24 LOOSE", "PUT 13 INSIDE 26", "PUT 12 INSIDE 31", "PUT 15 INSIDE 32", "PUT 8 INSIDE 16", "PUT 21 INSIDE 25", "SWAP 33 WITH 23", "PUT 16 INSIDE 32", "PUT 17 INSIDE 23"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 32;
    vector<string> actions = {"PUT 2 INSIDE 5", "PUT 1 INSIDE 11", "PUT 6 INSIDE 16", "SWAP 23 WITH 3", "PUT 4 INSIDE 8", "PUT 5 INSIDE 32", "PUT 3 INSIDE 13", "PUT 13 INSIDE 32", "PUT 12 INSIDE 15", "PUT 7 INSIDE 26", "PUT 8 INSIDE 16", "PUT 11 INSIDE 29", "PUT 9 INSIDE 21", "SET 25 LOOSE", "PUT 10 INSIDE 24"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 16;
    vector<string> actions = {"PUT 3 INSIDE 8", "SET 8 LOOSE", "PUT 1 INSIDE 7", "PUT 13 INSIDE 8", "PUT 4 INSIDE 10", "PUT 3 INSIDE 12", "PUT 2 INSIDE 9", "PUT 7 INSIDE 9", "PUT 6 INSIDE 5", "SWAP 9 WITH 14", "PUT 16 INSIDE 15", "SWAP 12 WITH 5", "PUT 12 INSIDE 14", "PUT 15 INSIDE 8", "PUT 11 INSIDE 14", "PUT 5 INSIDE 10", "PUT 10 INSIDE 14", "PUT 14 INSIDE 8", "PUT 9 INSIDE 8", "SET 8 LOOSE", "SET 8 LOOSE", "PUT 9 INSIDE 14", "PUT 8 INSIDE 14", "PUT 14 INSIDE 13", "SET 15 LOOSE", "SET 13 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 33;
    vector<string> actions = {"PUT 14 INSIDE 28", "PUT 7 INSIDE 10", "PUT 9 INSIDE 11", "SET 24 LOOSE", "PUT 2 INSIDE 8", "PUT 1 INSIDE 8", "PUT 8 INSIDE 19", "PUT 17 INSIDE 29", "PUT 5 INSIDE 20", "PUT 6 INSIDE 18", "PUT 3 INSIDE 16", "SET 30 LOOSE", "PUT 11 INSIDE 28", "SWAP 32 WITH 30", "PUT 10 INSIDE 27", "PUT 18 INSIDE 26", "PUT 13 INSIDE 25", "PUT 12 INSIDE 25", "PUT 16 INSIDE 33", "PUT 15 INSIDE 28", "PUT 4 INSIDE 20", "PUT 20 INSIDE 23", "PUT 19 INSIDE 26"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 7;
    vector<string> actions = {"SWAP 3 WITH 5", "PUT 1 INSIDE 3", "SWAP 3 WITH 6", "PUT 5 INSIDE 6", "SWAP 7 WITH 2", "SWAP 7 WITH 4", "SET 3 LOOSE", "PUT 3 INSIDE 1", "PUT 2 INSIDE 4", "PUT 1 INSIDE 7", "PUT 6 INSIDE 7", "SET 7 LOOSE", "PUT 7 INSIDE 1", "SWAP 6 WITH 1", "PUT 1 INSIDE 4", "PUT 4 INSIDE 6", "SET 6 LOOSE", "PUT 6 INSIDE 7", "SET 3 LOOSE", "SWAP 4 WITH 3", "PUT 3 INSIDE 4", "PUT 4 INSIDE 5", "PUT 5 INSIDE 7", "SET 7 LOOSE", "PUT 5 INSIDE 7", "PUT 6 INSIDE 7"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 13;
    vector<string> actions = {"PUT 1 INSIDE 2", "PUT 2 INSIDE 6", "SET 11 LOOSE", "PUT 3 INSIDE 4", "PUT 12 INSIDE 13", "SET 8 LOOSE", "SWAP 6 WITH 4", "SET 13 LOOSE", "PUT 4 INSIDE 9", "SWAP 13 WITH 12", "SWAP 10 WITH 5", "PUT 6 INSIDE 13", "PUT 8 INSIDE 13", "PUT 9 INSIDE 13", "PUT 12 INSIDE 11", "SWAP 10 WITH 5", "PUT 13 INSIDE 11", "PUT 5 INSIDE 10", "PUT 11 INSIDE 7", "SET 7 LOOSE", "PUT 10 INSIDE 11", "PUT 11 INSIDE 7", "SET 7 LOOSE", "SWAP 11 WITH 7", "PUT 7 INSIDE 11", "SET 11 LOOSE", "PUT 10 INSIDE 13", "PUT 7 INSIDE 11"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 20;
    vector<string> actions = {"PUT 4 INSIDE 8", "PUT 14 INSIDE 16", "PUT 3 INSIDE 8", "PUT 19 INSIDE 17", "PUT 7 INSIDE 12", "PUT 1 INSIDE 2", "PUT 16 INSIDE 17", "PUT 10 INSIDE 13", "SWAP 2 WITH 15", "PUT 6 INSIDE 11", "PUT 2 INSIDE 5", "PUT 20 INSIDE 12", "PUT 8 INSIDE 9", "PUT 5 INSIDE 9", "PUT 9 INSIDE 13", "PUT 13 INSIDE 15", "SET 12 LOOSE", "PUT 7 INSIDE 11", "PUT 12 INSIDE 17", "PUT 18 INSIDE 20", "SET 17 LOOSE", "PUT 11 INSIDE 12", "PUT 16 INSIDE 20", "PUT 12 INSIDE 15", "PUT 19 INSIDE 17", "SWAP 20 WITH 17", "PUT 15 INSIDE 17", "PUT 17 INSIDE 20"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 22;
    vector<string> actions = {"PUT 1 INSIDE 2", "SET 7 LOOSE", "PUT 3 INSIDE 7", "PUT 8 INSIDE 10", "PUT 5 INSIDE 10", "PUT 4 INSIDE 6", "PUT 11 INSIDE 10", "PUT 14 INSIDE 22", "PUT 17 INSIDE 16", "PUT 7 INSIDE 12", "SWAP 10 WITH 22", "SWAP 12 WITH 20", "SET 21 LOOSE", "SET 10 LOOSE", "PUT 12 INSIDE 22", "PUT 2 INSIDE 5", "PUT 6 INSIDE 10", "PUT 10 INSIDE 14", "PUT 5 INSIDE 11", "PUT 11 INSIDE 19", "PUT 21 INSIDE 16", "PUT 8 INSIDE 22", "PUT 9 INSIDE 20", "PUT 13 INSIDE 14", "PUT 14 INSIDE 16", "SET 16 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 3;
    vector<string> actions = {"PUT 3 INSIDE 2", "PUT 1 INSIDE 2", "SET 2 LOOSE", "PUT 2 INSIDE 1", "SET 3 LOOSE", "PUT 3 INSIDE 1", "SET 1 LOOSE", "PUT 2 INSIDE 1", "PUT 1 INSIDE 3", "SET 3 LOOSE", "SWAP 1 WITH 3", "SET 1 LOOSE", "SET 1 LOOSE", "PUT 1 INSIDE 2", "PUT 3 INSIDE 2", "SET 2 LOOSE", "PUT 1 INSIDE 2", "PUT 2 INSIDE 3", "SET 3 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 40;
    vector<string> actions = {"PUT 8 INSIDE 39", "PUT 14 INSIDE 27", "SET 26 LOOSE", "PUT 4 INSIDE 13", "PUT 5 INSIDE 13", "SWAP 22 WITH 11", "PUT 16 INSIDE 21", "SET 10 LOOSE", "PUT 18 INSIDE 21", "PUT 3 INSIDE 19", "PUT 12 INSIDE 34", "PUT 1 INSIDE 10", "PUT 13 INSIDE 23", "PUT 2 INSIDE 9", "PUT 10 INSIDE 23", "SWAP 28 WITH 40", "PUT 7 INSIDE 26", "PUT 6 INSIDE 19", "PUT 9 INSIDE 27", "PUT 15 INSIDE 38", "SET 22 LOOSE", "PUT 20 INSIDE 39", "PUT 19 INSIDE 22", "SET 28 LOOSE", "PUT 11 INSIDE 26", "PUT 17 INSIDE 24", "SWAP 29 WITH 40"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 21;
    vector<string> actions = {"PUT 20 INSIDE 5", "PUT 2 INSIDE 15", "PUT 4 INSIDE 8", "PUT 13 INSIDE 21", "SET 5 LOOSE", "PUT 10 INSIDE 16", "PUT 8 INSIDE 17", "PUT 1 INSIDE 6", "PUT 12 INSIDE 21", "PUT 14 INSIDE 21", "PUT 7 INSIDE 9", "PUT 21 INSIDE 9", "PUT 17 INSIDE 19", "SET 6 LOOSE", "PUT 20 INSIDE 6", "SWAP 3 WITH 15", "PUT 5 INSIDE 11", "PUT 1 INSIDE 3", "PUT 9 INSIDE 6", "PUT 19 INSIDE 18", "PUT 16 INSIDE 6", "PUT 3 INSIDE 11", "PUT 11 INSIDE 6", "PUT 15 INSIDE 6", "SET 6 LOOSE", "SWAP 18 WITH 9", "SET 18 LOOSE", "PUT 6 INSIDE 11", "PUT 15 INSIDE 18", "PUT 9 INSIDE 18", "PUT 16 INSIDE 19", "PUT 11 INSIDE 20", "SET 20 LOOSE", "PUT 7 INSIDE 11", "PUT 11 INSIDE 18", "SET 19 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 49;
    vector<string> actions = {"PUT 3 INSIDE 12", "PUT 1 INSIDE 5", "SWAP 35 WITH 14", "PUT 2 INSIDE 23", "PUT 6 INSIDE 14", "PUT 7 INSIDE 25", "PUT 20 INSIDE 49", "PUT 11 INSIDE 43", "SWAP 22 WITH 24", "PUT 4 INSIDE 9", "PUT 13 INSIDE 43", "PUT 15 INSIDE 49", "PUT 24 INSIDE 39", "SWAP 30 WITH 42", "PUT 23 INSIDE 26", "PUT 12 INSIDE 28", "PUT 5 INSIDE 22", "PUT 17 INSIDE 28", "SET 38 LOOSE", "PUT 8 INSIDE 10", "PUT 14 INSIDE 45", "PUT 22 INSIDE 30", "PUT 18 INSIDE 36", "PUT 9 INSIDE 40", "PUT 25 INSIDE 37", "PUT 10 INSIDE 37", "PUT 19 INSIDE 28", "PUT 16 INSIDE 43", "PUT 22 INSIDE 40"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 26;
    vector<string> actions = {"PUT 3 INSIDE 20", "PUT 1 INSIDE 9", "PUT 9 INSIDE 26", "PUT 2 INSIDE 6", "SWAP 7 WITH 21", "PUT 6 INSIDE 20", "PUT 10 INSIDE 26", "PUT 4 INSIDE 18", "SET 15 LOOSE", "PUT 5 INSIDE 17", "PUT 7 INSIDE 24", "PUT 8 INSIDE 20"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 12;
    vector<string> actions = {"PUT 1 INSIDE 5", "PUT 4 INSIDE 10", "PUT 12 INSIDE 6", "PUT 7 INSIDE 10", "PUT 8 INSIDE 11", "SET 9 LOOSE", "PUT 2 INSIDE 5", "SWAP 5 WITH 3", "PUT 3 INSIDE 10", "PUT 5 INSIDE 9", "PUT 11 INSIDE 6", "SET 10 LOOSE", "PUT 3 INSIDE 9", "PUT 9 INSIDE 7", "PUT 7 INSIDE 4", "SET 4 LOOSE", "PUT 4 INSIDE 10", "PUT 6 INSIDE 7", "SWAP 10 WITH 7", "PUT 7 INSIDE 10", "SET 10 LOOSE", "SET 7 LOOSE", "PUT 4 INSIDE 7", "SET 6 LOOSE", "PUT 7 INSIDE 10", "PUT 6 INSIDE 9", "PUT 9 INSIDE 11", "PUT 10 INSIDE 12", "PUT 11 INSIDE 12"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 41;
    vector<string> actions = {"SET 13 LOOSE", "PUT 12 INSIDE 22", "SET 19 LOOSE", "PUT 4 INSIDE 19", "PUT 17 INSIDE 15", "SET 39 LOOSE", "PUT 3 INSIDE 20", "SWAP 39 WITH 6", "PUT 19 INSIDE 25", "PUT 7 INSIDE 28", "PUT 5 INSIDE 13", "PUT 9 INSIDE 31", "SWAP 27 WITH 15", "PUT 20 INSIDE 25", "PUT 16 INSIDE 36", "SWAP 25 WITH 26", "PUT 2 INSIDE 18", "SWAP 6 WITH 37", "PUT 21 INSIDE 25", "PUT 13 INSIDE 31", "PUT 6 INSIDE 15", "PUT 1 INSIDE 11", "PUT 14 INSIDE 33", "PUT 15 INSIDE 33", "PUT 8 INSIDE 27", "PUT 18 INSIDE 29", "PUT 41 INSIDE 24", "PUT 11 INSIDE 10"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
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
    vector<string> actions = {"PUT 1 INSIDE 2", "PUT 2 INSIDE 3", "PUT 3 INSIDE 4", "PUT 4 INSIDE 5", "PUT 5 INSIDE 6", "PUT 6 INSIDE 7", "PUT 7 INSIDE 8", "PUT 8 INSIDE 9", "PUT 9 INSIDE 10", "PUT 10 INSIDE 11", "PUT 11 INSIDE 12", "PUT 12 INSIDE 13", "PUT 13 INSIDE 14", "PUT 14 INSIDE 15", "PUT 15 INSIDE 16", "PUT 16 INSIDE 17", "PUT 17 INSIDE 18", "PUT 18 INSIDE 19", "PUT 19 INSIDE 20", "PUT 20 INSIDE 21", "PUT 21 INSIDE 22", "PUT 22 INSIDE 23", "PUT 23 INSIDE 24", "PUT 24 INSIDE 25", "PUT 25 INSIDE 26", "PUT 26 INSIDE 27", "PUT 27 INSIDE 28", "PUT 28 INSIDE 29", "PUT 29 INSIDE 30", "PUT 30 INSIDE 31", "PUT 31 INSIDE 32", "PUT 32 INSIDE 33", "PUT 33 INSIDE 34", "PUT 34 INSIDE 35", "PUT 35 INSIDE 36", "PUT 36 INSIDE 37", "PUT 37 INSIDE 38", "PUT 38 INSIDE 39", "PUT 39 INSIDE 40", "PUT 40 INSIDE 41", "PUT 41 INSIDE 42", "PUT 42 INSIDE 43", "PUT 43 INSIDE 44", "PUT 44 INSIDE 45", "PUT 45 INSIDE 46", "PUT 46 INSIDE 47", "PUT 47 INSIDE 48", "PUT 48 INSIDE 49", "PUT 49 INSIDE 50"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 13;
    vector<string> actions = {};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 1;
    vector<string> actions = {"SET 1 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 1;
    vector<string> actions = {};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 4;
    vector<string> actions = {"PUT 3 INSIDE 2", "SWAP 4 WITH 2", "PUT 2 INSIDE 4", "SET 1 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 4;
    vector<string> actions = {"PUT 3 INSIDE 2", "PUT 2 INSIDE 1", "SWAP 1 WITH 4", "SET 4 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 3;
    vector<string> actions = {"PUT 1 INSIDE 2", "PUT 3 INSIDE 1"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 15;
    vector<string> actions = {"PUT 10 INSIDE 15", "SET 1 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 6;
    vector<string> actions = {"PUT 1 INSIDE 2", "PUT 3 INSIDE 2", "PUT 4 INSIDE 5", "PUT 6 INSIDE 5", "SWAP 2 WITH 5", "SET 2 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 3;
    vector<string> actions = {"PUT 1 INSIDE 2", "PUT 2 INSIDE 3", "SET 3 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 3;
    vector<string> actions = {"PUT 1 INSIDE 2", "PUT 2 INSIDE 3", "SET 2 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 3;
    vector<string> actions = {"PUT 1 INSIDE 2", "SWAP 3 WITH 1"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 2;
    vector<string> actions = {"PUT 1 INSIDE 2", "SWAP 1 WITH 2"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 3;
    vector<string> actions = {"PUT 1 INSIDE 2", "PUT 1 INSIDE 3"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 50;
    vector<string> actions = {"PUT 20 INSIDE 30", "PUT 2 INSIDE 30"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 5;
    vector<string> actions = {"PUT 1 INSIDE 5", "PUT 2 INSIDE 5", "PUT 3 INSIDE 5", "PUT 4 INSIDE 5", "SET 5 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 4;
    vector<string> actions = {"PUT 1 INSIDE 4", "PUT 2 INSIDE 4", "PUT 3 INSIDE 4", "SET 4 LOOSE"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 2;
    vector<string> actions = {"PUT 2 INSIDE 1"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 3;
    vector<string> actions = {"PUT 1 INSIDE 2", "PUT 2 INSIDE 3", "PUT 1 INSIDE 3"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
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
    int n = 5;
    vector<string> actions = {"PUT 1 INSIDE 2", "PUT 3 INSIDE 2"};
    BagsQuiz* pObj = new BagsQuiz();
    clock_t start = clock();
    int result = pObj->checkIfProper(n, actions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10393569&rd=10674&pm=7587
********************************************************************************
#include <iostream> 
#include <iomanip> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <list> 
#include <queue> 
#include <map> 
#include <set> 
#include <algorithm> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
using namespace std; 
 
#define sz(c) (int)(c).size() 
#define rep(i, n) if (1) for (int i = 0; i < n; i++) 
#define forr(i, l, r) if (1) for (int i = l; i <= r; i++) 
#define forv(i, v) rep(i, sz(v)) 
#define mset(c, val) memset((c), (val), sizeof((c))) 
#define all(v) v.begin(), v.end() 
#define INF 1000000000 
#define EPS 1e-10 
 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef vector<string> vs; 
typedef long long lint; 
 
  int p[64]; 
 
struct BagsQuiz { 
  static int checkIfProper(int n, vector <string> act) 
  { 
    mset(p, -1); 
    forv(i, act) { 
      if (act[i][1] == 'U') { 
        stringstream ss(act[i]); 
        string t1, t2; 
        int i, j; 
        ss >> t1 >> i >> t2 >> j; 
        i--; j--; 
 
        if (p[i] >= 0 || p[j] >= 0) return -1; 
 
        p[i] = j; 
      } 
      if (act[i][1] == 'E') { 
        stringstream ss(act[i]); 
        string t1, t2; 
        int i; 
                ss >> t1 >> i >> t2; 
        i--; 
 
        if (p[i] >= 0) return -1; 
 
        rep(k, n) if (p[k] == i) p[k] = -1; 
      } 
 
      if (act[i][1] == 'W') { 
        stringstream ss(act[i]); 
        string t1, t2; 
        int i, j; 
        ss >> t1 >> i >> t2 >> j; 
        i--; j--; 
 
        if (p[i] >= 0 || p[j] >= 0) return -1; 
 
        rep(k, n) { 
          if (p[k] == i) 
            p[k] = j; 
          else if (p[k] == j) 
            p[k] = i; 
        } 
 
      } 
 
    } 
 
    int res = 0; 
    rep(k, n) { 
      if (p[k] != -1 && p[k] < k) 
        return -1; 
      if (p[k] == -1) res++; 
    } 
 
    return res; 
 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/