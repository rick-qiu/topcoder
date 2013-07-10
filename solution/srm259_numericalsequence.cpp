/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4619
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

class NumericalSequence {
public:
    int makePalindrome(vector<int> sequence);
};

int NumericalSequence::makePalindrome(vector<int> sequence) {
    int ret;
    return ret;
}


int test0() {
    vector<int> sequence = {15, 78, 78, 15};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
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
    vector<int> sequence = {1, 1, 1, 3};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
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
    vector<int> sequence = {15, 78, 87, 51};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sequence = {3, 23, 21, 23, 42, 39, 63, 76, 13, 13, 13, 32, 12, 42, 26};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sequence = {1};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sequence = {10000};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sequence = {10000, 9999};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sequence = {10000, 9999, 10000, 9999};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sequence = {1, 1};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> sequence = {1, 2, 1};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sequence = {1, 2, 2};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sequence = {1, 3, 2};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sequence = {1, 2, 3};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
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
    vector<int> sequence = {1, 2, 3, 6};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
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
    vector<int> sequence = {2, 2};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
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
    vector<int> sequence = {37, 81, 61, 4, 78, 59, 65, 99, 71, 87, 69, 50, 61, 29, 99, 40, 1, 29, 97, 76, 65, 70, 8, 48, 51, 97, 33, 79, 83, 1, 36, 43, 61, 46, 68, 2, 12, 17, 81, 41, 26, 30, 41, 87, 62, 1, 7, 94, 60, 2574};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sequence = {2574, 37, 81, 61, 4, 78, 59, 65, 99, 71, 87, 69, 50, 61, 29, 99, 40, 1, 29, 97, 76, 65, 70, 8, 48, 51, 97, 33, 79, 83, 1, 36, 43, 61, 46, 68, 2, 12, 17, 81, 41, 26, 30, 41, 87, 62, 1, 7, 94, 60};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sequence = {37, 81, 61, 4, 78, 59, 65, 99, 71, 87, 69, 50, 61, 29, 99, 40, 1, 29, 97, 76, 65, 70, 8, 48, 51, 97, 33, 79, 83, 1, 36, 43, 61, 46, 68, 2, 12, 17, 81, 41, 26, 30, 41, 87, 62, 1, 7, 94, 60, 2575};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sequence = {2575, 37, 81, 61, 4, 78, 59, 65, 99, 71, 87, 69, 50, 61, 29, 99, 40, 1, 29, 97, 76, 65, 70, 8, 48, 51, 97, 33, 79, 83, 1, 36, 43, 61, 46, 68, 2, 12, 17, 81, 41, 26, 30, 41, 87, 62, 1, 7, 94, 60};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sequence = {9999, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 9999, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sequence = {65, 100, 96, 73, 45, 1, 95};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sequence = {69, 41, 10, 18, 31, 66, 32, 7, 33, 67, 15, 1, 45, 81, 34, 81, 83, 23, 45, 54, 41, 26, 19, 1, 79, 26, 53, 76, 74, 81, 95, 24, 59, 21, 89, 1, 79, 29, 25, 19, 29, 61, 85};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sequence = {92, 74, 1, 49, 8, 93, 73, 61, 77, 1, 53, 41, 93, 69, 25, 41, 19, 68, 21};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> sequence = {1, 65, 49, 57, 29, 97, 9, 55, 55, 59, 39, 75, 89, 26, 13, 96, 19, 13, 97, 81, 43, 97, 57, 83, 53, 29, 88, 94, 86, 25, 35, 73, 55, 47};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sequence = {77, 89, 93, 85, 79, 71, 58, 41, 75, 31, 47, 26, 61, 51, 81, 93, 45, 39, 2, 29, 36, 30, 21, 51, 81};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sequence = {97, 88, 21, 45, 76, 47, 79, 26, 91, 33, 67, 53, 51, 37, 70, 13, 41, 11, 76, 97, 63, 27, 45, 3};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sequence = {21, 25, 31, 97, 52, 9, 73, 69, 61, 41, 47, 76, 93, 81, 11, 12, 19, 17, 91, 61, 81, 94, 35, 29, 5, 54, 1, 43, 36, 32, 2, 45, 39};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sequence = {44, 27, 33, 1, 15, 39, 25, 21, 61, 16, 29, 15, 45, 55, 95, 15, 49, 34, 60, 83, 71, 96, 5, 27, 33, 21, 25, 77, 27, 21, 93, 15, 96, 66, 76, 55};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sequence = {3, 25, 93, 45, 33, 21, 81, 69, 29, 55, 29, 37, 91, 21, 5};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sequence = {51, 57, 34, 44, 89, 65, 84};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sequence = {10, 40, 1, 3, 32, 14, 1, 1, 1, 1, 3, 1, 17, 73, 7, 3, 11, 27, 2, 2, 2, 14, 38, 7, 2, 13, 36, 1, 1, 1, 1, 14, 36, 2, 1, 1, 1, 4, 81, 55, 36, 91, 90, 54, 58, 56, 50, 98, 50, 50};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sequence = {1, 1, 9, 6, 9, 9, 1, 7, 1, 1, 6, 1, 9, 1, 3, 9, 10, 1, 1, 9, 3};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sequence = {6, 9, 2, 2, 5, 6, 5, 1, 1, 2, 6, 10, 3, 4, 3, 1, 9, 7, 1, 3, 9, 3, 9, 4, 1, 9, 7, 9, 8, 5, 5, 1, 9, 9};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sequence = {5, 3, 1, 1, 1, 9};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sequence = {1, 5, 3, 2, 9, 3, 7, 7, 1, 6, 9, 8, 4, 6, 4, 1, 3, 1, 7, 4, 1, 10, 9, 8, 1, 1, 6, 6, 1, 2, 5, 5, 1, 9, 1, 9, 9, 1, 4, 3, 1, 5, 7, 8, 7, 9, 1, 9, 7, 1};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sequence = {9, 3, 5, 1, 9, 7, 6, 3, 6, 9, 1, 5, 5, 3, 3, 1, 8, 5, 9, 10, 1, 3, 5, 9, 1, 1, 3, 2, 3, 1, 1, 1, 1, 9, 5, 6, 9, 1, 8, 5, 10, 8, 8, 3, 5, 9};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sequence = {9, 6, 7, 3, 1, 7, 9, 1, 2, 7, 1, 6, 7};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sequence = {3, 7, 1, 1, 9, 3, 9, 5};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sequence = {1, 4, 5, 1, 1, 7, 1, 1, 8, 3, 1, 3, 5, 9, 9, 1, 3, 1, 1, 1, 1, 6, 1, 3, 3, 8, 4, 4, 1, 1, 1, 9, 9, 1, 6, 1, 1, 9, 1};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sequence = {6, 6, 6, 4, 1, 2, 1, 1, 6, 5, 3, 1, 1, 1, 1, 2, 3, 7, 9, 1, 1, 7, 1, 1};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sequence = {3, 3, 2, 7, 1, 5, 1, 7, 5};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sequence = {2812, 274, 2557, 794, 4931, 607, 2060, 728, 842, 2599, 682, 4136, 4686, 1264, 9934, 11, 7059, 21, 456, 1575, 1067, 3523, 293, 671, 2656, 6117, 2942, 2291, 599, 52, 6034, 3703, 4590, 1170, 659, 223, 1018, 3219, 978, 1855, 9934, 2505, 3445, 4136, 3281, 842, 9120, 3116, 2229, 298};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sequence = {7046, 3740, 9590, 6414, 2949, 3555, 3830, 7536, 4294, 610, 241, 1080, 288, 6627, 1183, 3118, 1912, 6, 11, 726, 39, 1452, 2740, 3562, 740, 7014, 782, 396, 2496, 2138, 7810, 1345, 874, 4011, 8, 275, 7536, 1095, 2666, 69, 2439, 100, 158, 310, 548, 5546, 3817, 9590, 3740, 7046};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sequence = {1080, 949, 124, 156, 1605, 9990, 3695, 4064, 2906, 1335, 5027, 870, 60, 44, 1558, 9258, 92, 134, 1402, 1242, 3048, 743, 862, 2031, 3610, 5720, 1032, 436, 1419, 49, 5720, 3610, 2893, 479, 264, 5918, 9258, 1662, 870, 6362, 3785, 1086, 328, 1771, 1254, 2441, 2417, 1727, 5846, 3914};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sequence = {7110, 5246, 224, 7062, 227, 1531, 3636, 87, 54, 385, 2278, 5, 4, 4923, 2017, 131, 1445, 2090, 272, 792, 2494, 1738, 793, 1369, 1754, 13, 9578, 9578, 157, 1886, 1093, 5025, 792, 272, 2090, 349, 1227, 6949, 354, 1924, 476, 50, 722, 4672, 7062, 5099, 100, 234, 37, 7110};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sequence = {9615, 9002, 8374, 1589, 280, 2466, 4785, 9898, 284, 483, 5451, 600, 730, 338, 1537, 396, 1668, 626, 417, 1503, 2083, 1212, 106, 1884, 4420, 919, 3501, 509, 271, 985, 225, 3295, 4610, 1875, 1289, 41, 5490, 728, 6047, 991, 2860, 6842, 2278, 1226, 6318, 449, 381, 9002, 5507, 4108};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> sequence = {342, 132, 368, 2705, 943, 5077, 763, 23, 2499, 2017, 88, 28, 581, 1390, 1068, 3066, 1856, 1366, 1595, 563, 1729, 3109, 3120, 4133, 3239, 420, 5570, 2552, 1388, 1610, 5, 15, 601, 3058, 349, 6904, 6996, 6288, 2238, 5, 215, 653, 23, 21, 2017, 2499, 786, 924, 4153, 4490};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sequence = {1841, 8082, 714, 2144, 4028, 2705, 99, 40, 328, 99, 988, 120, 146, 4180, 4420, 3, 2, 33, 109, 9148, 1124, 3790, 33, 16, 66, 37, 1436, 1507, 1490, 580, 1722, 5299, 1588, 3790, 631, 392, 101, 9295, 5513, 688, 2399, 138, 128, 988, 335, 231, 9591, 8082, 989, 852};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sequence = {7674, 1022, 250, 5381, 9802, 3710, 2994, 128, 578, 6705, 4399, 2359, 2599, 2431, 5362, 3398, 1678, 1108, 164, 268, 350, 689, 471, 7359, 2264, 1092, 4003, 1778, 1165, 483, 1302, 4920, 3840, 744, 759, 928, 1865, 734, 6758, 6705, 572, 84, 23, 27, 6704, 1597, 8205, 6653, 4268, 3406};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> sequence = {5336, 448, 335, 526, 5004, 1394, 8630, 2038, 594, 1693, 6385, 4831, 234, 1744, 4423, 1884, 83, 2085, 3289, 2582, 9045, 9045, 4005, 1866, 1758, 326, 54, 30, 1092, 716, 44, 15, 17, 4423, 1744, 1449, 163, 3453, 3488, 3713, 877, 2632, 7611, 647, 294, 78, 1394, 5865, 2958, 2826};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> sequence = {7073, 755, 7328, 5694, 277, 5412, 9642, 9610, 1, 4, 1805, 1445, 901, 9750, 432, 2206, 3328, 3857, 49, 601, 650, 475, 6710, 1955, 683, 9750, 417, 1788, 47, 94, 706, 786, 318, 9610, 777, 4316, 798, 3751, 864, 3095, 1730, 1115, 357, 1472, 2750, 5639, 164, 423, 1102, 7828};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> sequence = {4674, 9767, 6172, 4635, 2114, 2111, 2213, 7618, 9050, 4010, 1994, 235, 1692, 440, 1252, 95, 12, 128, 1905, 84, 3, 2, 3953, 4, 45, 8, 9050, 5181, 669, 1768, 1700, 351, 162, 591, 99, 1421, 1312, 178, 624, 4635, 2914, 3258, 3848, 150, 1201, 3680, 888, 2586, 241, 1847};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> sequence = {6562, 8090, 3460, 8438, 5998, 3366, 2274, 4430, 2644, 3760, 3188, 572, 1812, 534, 129, 169, 1976, 1298, 760, 396, 1225, 905, 88, 13, 43, 332, 1711, 326, 997, 5123, 582, 145, 52, 96, 476, 7464, 375, 94, 29, 2615, 845, 2068, 5086, 643, 293, 5816, 498, 191, 33, 24};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> sequence = {730, 7560, 1370, 8168, 7662, 9776, 6905, 750, 8810, 5810, 3767, 6160, 7104, 7104, 2621, 591, 2891, 57, 961, 1877, 272, 657, 1968, 1705, 309, 298, 1530, 1258, 7552, 393, 357, 4728, 2177, 2095, 2442, 993, 3302, 944, 2658, 4777, 227, 4314, 3854, 1258, 21, 91, 4337, 2046, 1177, 730};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> sequence = {529, 6135, 616, 3230, 4330, 3780, 4420, 9106, 5039, 1334, 917, 1302, 1325, 34, 19, 60, 48, 3903, 226, 1370, 1701, 1906, 4420, 202, 292, 1457, 1722, 55, 21, 20, 11, 4330, 1747, 463, 667, 226, 52, 75, 575, 33, 8, 101, 6034, 26, 401, 47, 34, 8, 13};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> sequence = {2826, 5792, 1827, 924, 4626, 4670, 3296, 7366, 2337, 4568, 301, 67, 41, 20, 32, 3296, 1635, 1940, 205, 807, 73, 10, 4626, 845, 64, 9, 1, 5, 156, 1066, 316, 218, 10, 47, 7, 7, 930, 677, 771, 1384, 742, 274, 832, 66, 73, 43, 1728, 357, 298, 443};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> sequence = {3080, 6957, 9706, 6490, 4501, 7018, 3990, 7794, 1534, 4796, 217, 624, 623, 3431, 177, 62, 58, 262, 2202, 3621, 528, 667, 1278, 3223, 445, 5953, 44, 26, 15, 3, 4, 2791, 2712, 2853, 84, 342, 4, 218, 702, 264, 1361, 3924, 365, 364, 239, 355, 30, 39, 16, 3080};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> sequence = {483, 2828, 381, 553, 1203, 3918, 202, 1611, 5, 186, 408, 107, 638, 5, 127, 3157, 3875, 1291, 240, 93, 37, 36, 521, 1109, 5964, 2105, 1288, 383, 83, 452, 734, 70, 5382, 4890, 4, 790, 3204, 696, 226, 944, 1816, 3682, 3998, 4890, 7104, 3393, 7760, 9440, 2210, 9568};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> sequence = {158, 34, 151, 295, 1062, 1326, 1755, 2170, 488, 717, 20, 11, 8, 13, 49, 82, 302, 761, 2040, 2, 14, 8, 26, 364, 201, 819, 1339, 1, 2, 4, 1, 2, 192, 4409, 44, 7, 397, 878, 480, 58, 2286, 671, 3701, 4372, 4150, 4611, 1339, 1434, 3286, 8156};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> sequence = {3874, 776, 2610, 9, 1, 69, 756, 2, 1, 30, 140, 327, 284, 106, 6935, 275, 3549, 1656, 14, 393, 54, 311, 4257, 2931, 927, 362, 1222, 298, 27, 79, 80, 99, 4970, 1, 1, 1, 1, 1, 1, 16, 1492, 1514, 5255, 2809, 7960, 5480, 6935, 890, 835, 7260};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> sequence = {9600, 7312, 2, 1, 1, 4, 44, 33, 64, 59, 71, 62, 641, 2407, 5775, 14, 7693, 1127, 1, 1, 1, 2, 2, 47, 4, 1019, 926, 38, 860, 987, 1539, 534, 2346, 1, 3, 6, 4, 76, 130, 2073, 1082, 3650, 7025, 6304, 2003, 8834, 8956, 208, 7312, 9600};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> sequence = {20, 25, 85, 25, 9, 57, 43, 44, 75, 18, 47, 57, 27, 16, 27, 88, 36, 21, 16, 41, 11, 65, 41, 93, 50, 47, 3, 17, 56, 15, 3, 84, 64, 76, 67, 31, 4, 5, 35, 45, 10, 96, 97, 21, 33, 23, 63, 99, 53, 2084};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> sequence = {2084, 20, 25, 85, 25, 9, 57, 43, 44, 75, 18, 47, 57, 27, 16, 27, 88, 36, 21, 16, 41, 11, 65, 41, 93, 50, 47, 3, 17, 56, 15, 3, 84, 64, 76, 67, 31, 4, 5, 35, 45, 10, 96, 97, 21, 33, 23, 63, 99, 53};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> sequence = {20, 25, 85, 25, 9, 57, 43, 44, 75, 18, 47, 57, 27, 16, 27, 88, 36, 21, 16, 41, 11, 65, 41, 93, 50, 47, 3, 17, 56, 15, 3, 84, 64, 76, 67, 31, 4, 5, 35, 45, 10, 96, 97, 21, 33, 23, 63, 99, 53, 2085};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
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
    vector<int> sequence = {2085, 20, 25, 85, 25, 9, 57, 43, 44, 75, 18, 47, 57, 27, 16, 27, 88, 36, 21, 16, 41, 11, 65, 41, 93, 50, 47, 3, 17, 56, 15, 3, 84, 64, 76, 67, 31, 4, 5, 35, 45, 10, 96, 97, 21, 33, 23, 63, 99, 53};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> sequence = {3, 23, 21, 23, 42, 39, 63, 76, 13, 13, 13, 32, 12, 42, 26, 3, 23, 21, 23, 42, 39, 63, 76, 13, 13, 13, 32, 12, 42, 26, 3, 23, 21, 23, 42, 39, 63, 76, 13, 13, 13, 32, 12, 42, 26, 13, 32, 12, 42, 26};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> sequence = {15, 78, 87, 51};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> sequence = {2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> sequence = {3, 23, 21, 23, 42, 39, 63, 76, 13, 13, 13, 32, 12, 42, 26};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> sequence = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
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
    vector<int> sequence = {3, 23, 21, 23, 42, 39, 63, 76, 13, 13, 13, 32, 12, 42, 26, 3, 23, 21, 23, 42, 39, 63, 76, 13, 13, 13, 32, 12, 42, 26, 3, 23, 21, 23, 42, 39, 63, 76, 13, 13, 13, 32, 12, 42, 26, 4, 5, 6, 7, 8};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> sequence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> sequence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 12, 13, 14, 15, 16, 17, 18, 19, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 12, 13, 14, 15, 16, 17, 18, 19, 1};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> sequence = {3, 233, 13, 32, 12, 42, 26};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
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
    vector<int> sequence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> sequence = {15, 78, 87, 51, 121, 121, 12, 12, 1232, 34, 23, 12, 12, 12, 12, 123, 3, 23, 12, 1, 3, 2, 3, 3, 1, 1, 23, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 12, 34, 234, 34, 234, 4, 34, 3, 4};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> sequence = {2, 1, 1, 2, 2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 2, 2, 2};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> sequence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 5, 6, 8, 9, 5, 6, 8, 9, 5, 6, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> sequence = {15, 78, 87, 51, 121, 121, 12, 12, 1232, 34, 23, 12, 12, 12, 12, 123, 3, 23, 12, 1, 3, 2, 3, 3, 1, 1, 23, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 12, 34, 234, 34, 234, 4, 34, 3, 4, 34, 234, 324, 234};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> sequence = {1};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> sequence = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> sequence = {1, 7, 12, 16, 21, 26, 31, 36, 41, 46, 50, 55, 56, 80, 90, 95, 100, 105, 110, 115, 120, 125, 130, 135, 140, 145, 151, 156, 161, 170, 175, 182, 187, 192, 200, 208, 212, 220, 225, 230, 235, 240, 245, 250, 255, 260, 265, 270, 280, 290};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> sequence = {21, 31, 8, 112, 4, 1, 852, 3, 86, 3, 42, 3, 8, 12, 45, 1, 85, 3, 86, 3, 21, 31, 8, 112, 4, 1, 852, 3, 86, 3, 42, 3, 8, 12, 45, 1, 85, 3, 86, 3, 7, 88, 5, 2, 3, 4, 5, 7, 8, 9};
    NumericalSequence* pObj = new NumericalSequence();
    clock_t start = clock();
    int result = pObj->makePalindrome(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390467&rd=8012&pm=4619
********************************************************************************
#include <iostream> 
#include <vector> 
 
using namespace std; 
 
 
class NumericalSequence { 
public: 
   int makePalindrome( vector <int> sequence ) { // caret here 
      int a=0, b=(int)sequence.size()-1; 
      int ret = 0; 
       
      while ( a < b ) { 
         if ( sequence[a] < sequence[b] ) { 
            sequence[a+1] += sequence[a]; 
            ++a; ++ret; 
         } 
         else if ( sequence[a] > sequence[b] ) { 
            sequence[b-1] += sequence[b]; 
            --b; ++ret; 
         } 
         else { 
            ++a, --b; 
         } 
      } 
      return ret; 
   } 
 
    
  
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 2.0 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/