/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1747
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

class NumberGuessing {
public:
    int bestGuess(int range, vector<int> guesses, int numLeft);
};

int NumberGuessing::bestGuess(int range, vector<int> guesses, int numLeft) {
    int ret;
    return ret;
}


int test0() {
    int range = 1000;
    vector<int> guesses = {500};
    int numLeft = 1;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int range = 1000000;
    vector<int> guesses = {};
    int numLeft = 1;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int range = 1000;
    vector<int> guesses = {};
    int numLeft = 2;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 750;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int range = 100;
    vector<int> guesses = {27, 80};
    int numLeft = 1;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int range = 20;
    vector<int> guesses = {};
    int numLeft = 4;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int range = 20;
    vector<int> guesses = {8};
    int numLeft = 3;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int range = 20;
    vector<int> guesses = {8, 13};
    int numLeft = 2;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int range = 20;
    vector<int> guesses = {8, 13, 18};
    int numLeft = 1;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int range = 20;
    vector<int> guesses = {8, 13, 18, 3};
    int numLeft = 0;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int range = 1000000;
    vector<int> guesses = {};
    int numLeft = 1;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int range = 10;
    vector<int> guesses = {};
    int numLeft = 6;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int range = 10;
    vector<int> guesses = {9};
    int numLeft = 5;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int range = 10;
    vector<int> guesses = {9, 6};
    int numLeft = 4;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
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
    int range = 10;
    vector<int> guesses = {9, 6, 1};
    int numLeft = 3;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int range = 10;
    vector<int> guesses = {9, 6, 1, 2};
    int numLeft = 2;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int range = 10;
    vector<int> guesses = {9, 6, 1, 2, 3};
    int numLeft = 1;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int range = 10;
    vector<int> guesses = {9, 6, 1, 2, 3, 4};
    int numLeft = 0;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int range = 99;
    vector<int> guesses = {};
    int numLeft = 3;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int range = 99;
    vector<int> guesses = {50};
    int numLeft = 2;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int range = 99;
    vector<int> guesses = {50, 83};
    int numLeft = 1;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int range = 99;
    vector<int> guesses = {50, 83, 17};
    int numLeft = 0;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
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
    int range = 100;
    vector<int> guesses = {};
    int numLeft = 3;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int range = 100;
    vector<int> guesses = {84};
    int numLeft = 2;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int range = 100;
    vector<int> guesses = {84, 51};
    int numLeft = 1;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int range = 100;
    vector<int> guesses = {84, 51, 17};
    int numLeft = 0;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int range = 298771;
    vector<int> guesses = {251230, 275984, 79583, 295940};
    int numLeft = 0;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 79584;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int range = 202854;
    vector<int> guesses = {};
    int numLeft = 1;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 101427;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int range = 483114;
    vector<int> guesses = {317503, 134086, 267077, 66718, 178552, 185571, 349609, 313749};
    int numLeft = 1;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 416397;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int range = 720732;
    vector<int> guesses = {270364, 706055, 718771, 231002, 572272, 687510, 406934, 477034};
    int numLeft = 1;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 77001;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int range = 12;
    vector<int> guesses = {};
    int numLeft = 5;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int range = 25;
    vector<int> guesses = {9, 25, 3, 2, 1, 18};
    int numLeft = 3;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int range = 47;
    vector<int> guesses = {22, 1, 36, 6, 45};
    int numLeft = 3;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int range = 50;
    vector<int> guesses = {28, 16, 41, 42};
    int numLeft = 3;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int range = 61;
    vector<int> guesses = {32, 44, 3, 22, 60, 18, 50, 27, 15, 53};
    int numLeft = 3;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int range = 29;
    vector<int> guesses = {9};
    int numLeft = 3;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int range = 6;
    vector<int> guesses = {6};
    int numLeft = 4;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
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
    int range = 15;
    vector<int> guesses = {7, 5, 9, 1};
    int numLeft = 4;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int range = 53;
    vector<int> guesses = {40, 24, 15, 18, 12};
    int numLeft = 3;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int range = 38;
    vector<int> guesses = {2, 8};
    int numLeft = 3;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int range = 22;
    vector<int> guesses = {7};
    int numLeft = 4;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int range = 86;
    vector<int> guesses = {23};
    int numLeft = 3;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int range = 1;
    vector<int> guesses = {};
    int numLeft = 0;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int range = 1000000;
    vector<int> guesses = {999999, 45000, 10503, 198388};
    int numLeft = 1;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 599194;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int range = 1000;
    vector<int> guesses = {233, 877};
    int numLeft = 2;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 555;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int range = 1000;
    vector<int> guesses = {232, 877};
    int numLeft = 2;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 554;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int range = 477;
    vector<int> guesses = {11, 33, 57, 400, 239};
    int numLeft = 2;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int range = 3;
    vector<int> guesses = {};
    int numLeft = 2;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int range = 1000;
    vector<int> guesses = {501};
    int numLeft = 1;
    NumberGuessing* pObj = new NumberGuessing();
    clock_t start = clock();
    int result = pObj->bestGuess(range, guesses, numLeft);
    clock_t end = clock();
    delete pObj;
    int expected = 498;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4545&pm=1747
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
#include <set> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
int a; 
VI b; 
 
int val(int g) { 
  int mn = -1000, mx = 1000000000; 
  for( int i = 0; i < b.size(); i++ ) { 
    if( b[i] < g ) mn >?= b[i]; else if( b[i] > g ) mx <?= b[i]; 
  } 
  return 1 + ((mn==-1000)?g-1:(g-mn-1)/2) + 
         ((mx==1000000000)?a-g:(mx-g-1)/2); 
} 
 
int doit(int c) { 
  int i, j, k, x, y, z, n; 
  int ret, retv = 0; 
 
  if( c == 0 ) { 
    VI b2 = b; 
    b2.pop_back(); 
    if( b.size() == 1 ) return b.back()=1; 
    sort(b2.begin(), b2.end()); 
    ret = -1; 
    if( b2[0]-1 > retv ) {retv = b2[0]-1; ret = b2[0]-1;} 
    for( i = 0; i < b2.size()-1; i++ ) 
      if((b2[i+1]-b2[i])/2 > retv) 
        {retv = (b2[i+1]-b2[i])/2; ret = b2[i]+1;} 
    if( a-b2.back() > retv ) 
      {retv = a-b2.back(); ret = b2.back()+1;} 
    b.back() = ret; 
    return ret; 
  } 
  VI::iterator nv = b.begin()+(b.size()-c-1); 
  VI bestb; 
  for( i = 1; i <= a; i++ ) { 
    if( find(b.begin(), nv, i) == nv ) { 
      *nv = i; 
      doit(c-1); 
      y = val(i); 
      if( y > retv ) {retv = y; bestb = b;} 
    } 
  } 
  b = bestb; 
  return b[b.size()-c-1]; 
} 
 
class NumberGuessing { 
public: 
int bestGuess(int A, vector <int> B, int c) { 
  a = A; 
  b = B; 
  for( int i = 0; i <= c; i++ ) b.push_back(-1000); 
  return doit(c); 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/