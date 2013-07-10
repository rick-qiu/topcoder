/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11289
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

class DoubleRoshambo {
public:
    int maxScore(vector<string> A, vector<string> E);
};

int DoubleRoshambo::maxScore(vector<string> A, vector<string> E) {
    int ret;
    return ret;
}


int test0() {
    vector<string> A = {"RR"};
    vector<string> E = {"SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> A = {"SR", "PP"};
    vector<string> E = {"PR", "RS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> A = {"PP", "PP", "PP", "PP"};
    vector<string> E = {"RR", "PR", "SS", "SP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    vector<string> A = {"PS", "RS", "PP", "SP", "RR", "SS", "SP"};
    vector<string> E = {"RP", "SP", "RR", "SR", "RS", "SP", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    vector<string> A = {"RS"};
    vector<string> E = {"RS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    vector<string> A = {"RR"};
    vector<string> E = {"SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> A = {"PR"};
    vector<string> E = {"PS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    vector<string> A = {"RS", "PS"};
    vector<string> E = {"RP", "PS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    vector<string> A = {"PS", "RS"};
    vector<string> E = {"PS", "RP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    vector<string> A = {"RR", "RP", "RS", "PR", "PP", "PS", "SR", "SP", "SS"};
    vector<string> E = {"SS", "SR", "SP", "RS", "RR", "RP", "PS", "PR", "PP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> A = {"RR", "PP", "SS"};
    vector<string> E = {"RS", "PR", "SP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    vector<string> A = {"RR", "RS", "RP", "SR", "SS", "SP"};
    vector<string> E = {"RS", "RP", "RR", "SS", "SP", "SR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    vector<string> A = {"SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS"};
    vector<string> E = {"PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP", "PP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> A = {"SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP"};
    vector<string> E = {"SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> A = {"PP", "SP", "PP", "SR", "RR", "SP", "PR", "SS", "SS", "SS", "PS", "PS"};
    vector<string> E = {"PR", "RR", "PP", "RS", "PR", "RP", "PS", "RP", "SP", "SR", "RS", "SR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> A = {"SR", "RR", "SS", "PS", "RP", "SP", "RR", "PP", "PP", "PP", "RS", "SR", "PS", "RP", "SP", "PP", "RS", "PR", "PS", "RS", "RR", "RS", "PP", "SS", "RP", "SR", "SP", "RS", "SR", "RR", "SP", "PP", "RS", "RR", "RR", "PP", "SS", "PS", "RP", "RR", "PP", "PP", "RR", "SR", "PR", "SS", "PP", "RS", "SP", "PS"};
    vector<string> E = {"SR", "RR", "PS", "RS", "PR", "PP", "SP", "PR", "PS", "RR", "SR", "SP", "PP", "PS", "PS", "RS", "RS", "RS", "SR", "SP", "SP", "SP", "SR", "SS", "PR", "PR", "PP", "PR", "RP", "PP", "RS", "RR", "PS", "SS", "RP", "SP", "SR", "PR", "RS", "RR", "SP", "RS", "PP", "SR", "PP", "RP", "RP", "SR", "RR", "PS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> A = {"SP", "SS", "RR", "PP", "RP", "PS", "PP", "SR", "RS", "PR", "RR", "SS", "RS", "SR", "SP", "RS", "SP", "SS", "RR", "SR", "PP", "PS", "SR", "SR", "RP", "RS", "RR", "RR", "PR", "PP", "RP", "SR", "PP", "RS", "PR", "PS"};
    vector<string> E = {"PP", "RS", "RR", "RP", "RS", "SR", "SP", "SS", "RP", "PP", "RS", "RP", "PP", "PR", "PR", "SR", "RP", "PS", "RP", "RP", "RR", "SS", "RS", "SS", "SP", "RP", "SS", "PR", "SP", "RR", "PP", "SR", "PR", "PP", "RR", "SP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> A = {"SS", "PP", "SS", "RR", "PP", "PS", "RP", "PS", "SS", "SP", "RR", "SP", "PS", "PP", "PS", "RP", "PR", "RP", "SS", "SP", "RR", "PP", "SP", "SS", "PR", "SP", "SP", "RP", "SR", "SR", "PP", "PR", "PR", "RR", "PP", "PS"};
    vector<string> E = {"PP", "SS", "PP", "SR", "RP", "PR", "SR", "SR", "PS", "PR", "PP", "RP", "RS", "PR", "RR", "RS", "SR", "RS", "RP", "PR", "PR", "RS", "RR", "SR", "PS", "RP", "PP", "PR", "PS", "RP", "SR", "SP", "PR", "RS", "PS", "PR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> A = {"RR", "PP", "RR", "RR", "SP", "RS", "RP", "SR", "RP", "SS", "SP", "SS", "PS", "PR", "PP", "SS", "SP", "RP", "RP", "RS", "RR", "SR", "SS", "PS", "SP", "PR"};
    vector<string> E = {"PR", "SS", "SS", "PS", "RR", "RS", "PR", "SR", "PS", "SP", "SR", "SS", "RP", "RP", "PP", "PP", "RP", "SS", "RR", "SR", "PP", "RP", "RP", "SP", "PS", "PR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> A = {"RS", "PS", "PR", "PS", "PP", "SR", "RR", "PP", "SR"};
    vector<string> E = {"RS", "PR", "PS", "SS", "RR", "PS", "PR", "RR", "RP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> A = {"RP", "SS", "RR", "PS", "SP", "SR", "SS", "RR", "RR", "PS", "SP", "RS", "PP", "SR", "RS", "RR", "PP", "RR", "SS", "PS", "PR", "RS", "SS", "RP", "SS", "PP", "RS", "SS", "RP", "SR", "RP", "PR", "RP", "SR", "SR", "PS", "PR", "SR"};
    vector<string> E = {"SP", "SP", "RS", "PS", "SS", "SR", "SS", "RR", "PS", "SR", "PP", "PP", "PS", "RS", "SS", "RS", "SS", "RS", "PP", "PS", "RS", "RP", "RS", "SP", "SP", "SR", "SR", "PP", "PP", "RP", "PP", "PS", "RS", "RR", "RR", "SP", "PS", "RR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> A = {"SS", "PS", "RP", "SR", "SP", "PP", "PR", "PR", "SP", "SS", "RP", "PP", "PR", "PR", "SP", "PS", "RR", "SS"};
    vector<string> E = {"PS", "SR", "RR", "PS", "SS", "RS", "SR", "SP", "SR", "RR", "SR", "RS", "RP", "SS", "PR", "PP", "SS", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> A = {"PS", "PS", "SP", "PS", "SS", "RR", "RR", "PS", "PR", "SS", "SS", "SS", "RR", "RR", "PR", "SR", "RR", "RR", "SP", "SP", "SP", "SS", "SR", "RP", "SP", "SS", "PP", "SR", "RS", "RP", "RR", "RS", "SS", "PR", "SR", "RR", "SP", "SP", "RP", "RP", "SP", "PR", "SS", "RS"};
    vector<string> E = {"RS", "RS", "SP", "PP", "PR", "PR", "SS", "SP", "PS", "RS", "PS", "RR", "PR", "SS", "SR", "SR", "RS", "PS", "PS", "PP", "SP", "PS", "RS", "SS", "SP", "SR", "SP", "RS", "PS", "PS", "SR", "SP", "RR", "SP", "RP", "RS", "SS", "PP", "RR", "SR", "RP", "RR", "SS", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> A = {"RS", "PP", "PS", "PS", "PP", "RR", "RS", "RS", "RP", "SS", "SR", "PP", "SP", "PP", "PS", "SS", "SS", "RS", "RS", "SR", "SP", "RS", "RR", "SP", "SS", "SP", "RS", "RP", "PS"};
    vector<string> E = {"PP", "SS", "PR", "PS", "RP", "PP", "RS", "SS", "PP", "SS", "PS", "SP", "PS", "SR", "PP", "PS", "RP", "RS", "SS", "SP", "SR", "RR", "PP", "SS", "SR", "PR", "RR", "RR", "SR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> A = {"RR", "PR", "SP", "SS", "SP", "PS", "PR", "PS", "RR", "RR", "PS", "PP", "SR", "SS", "SS", "RR", "RS", "PR", "SP", "SR", "PS", "RR", "PR", "SS", "RS", "RP", "RP", "SR", "SR", "PP", "SR", "PR", "SR", "SP", "SR", "SS", "PR", "SP", "RS", "SP", "RS", "RR", "RP", "RS", "SS", "RS", "RR", "PR"};
    vector<string> E = {"SS", "PS", "PS", "SS", "PS", "PS", "RS", "RS", "SP", "SS", "SR", "SS", "PS", "PS", "PR", "SS", "PP", "SP", "RR", "PS", "RS", "SR", "PR", "PR", "SR", "SP", "PR", "SS", "PR", "SR", "PP", "SS", "SR", "PP", "RS", "RR", "SS", "SR", "SR", "RS", "SR", "PR", "PS", "SP", "SR", "PP", "SR", "SR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> A = {"SS", "SR", "SS", "PS", "RS", "PS", "PS", "RR", "SR", "PP", "PP", "RR", "PR", "SS", "PS", "SS", "PP", "PS", "SS", "SR"};
    vector<string> E = {"RR", "RS", "PP", "PS", "RR", "SP", "SS", "PR", "PR", "RR", "RR", "SS", "PP", "SP", "PP", "PS", "PR", "RP", "RP", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> A = {"RS", "PP", "PP", "SR", "RR", "RP", "PP", "RS", "SP", "PR"};
    vector<string> E = {"SR", "SS", "SP", "SS", "SR", "RP", "RR", "SR", "RR", "RS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> A = {"SR", "RP", "PS", "RP", "SR", "RS", "PP", "SR", "SR", "RP", "PP", "SR", "RS", "PR", "RS", "SP", "SP", "RP", "PP", "PR", "RR", "RP", "PR", "RS", "RS", "RS", "RS", "PR", "SP", "PS", "RR", "SP", "RR", "SS", "SP"};
    vector<string> E = {"PP", "RS", "SP", "RS", "RR", "PP", "RS", "RP", "PS", "RP", "RR", "PS", "RP", "RS", "PR", "SS", "SR", "PR", "RR", "SS", "PR", "PR", "SS", "RR", "PR", "SP", "SR", "PP", "SR", "RP", "PR", "PS", "SP", "RS", "RR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> A = {"SR", "PR", "SP", "RR", "PP", "PS", "PR", "PS", "SS", "RS", "SP", "PR", "RP", "RR", "SP", "PP", "RS", "RR", "SP", "PR", "SS", "PR", "RR", "SP", "SP", "RS", "RP", "SP", "PS", "PS", "PP", "PR", "PP", "RR", "RP", "PR", "RR", "RR", "PR", "PS", "PR", "PR", "RR", "PP"};
    vector<string> E = {"PR", "SP", "RS", "PS", "RP", "RS", "RS", "SR", "RR", "SP", "PR", "PR", "RP", "PR", "SP", "RS", "SP", "SP", "SP", "PR", "SP", "RP", "SP", "SR", "SP", "PP", "SR", "RS", "SR", "PR", "SP", "PP", "PR", "RS", "RS", "SS", "SP", "SP", "PS", "SS", "PS", "RS", "RR", "SR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> A = {"SP", "SS", "RS", "SP", "RS"};
    vector<string> E = {"SP", "PS", "PP", "PR", "RP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> A = {"PP", "RS", "SP", "PR", "PR", "RP", "RS", "SR", "RS", "SP", "SR", "SR", "PS", "SS", "RP", "RP", "RR", "RP", "RP", "SP", "SS", "SR", "RR", "PS", "PP", "SP", "SR", "RP", "RP", "RP", "PS", "PP", "RP", "PR", "SR", "RS", "SR", "SR", "RS", "PP"};
    vector<string> E = {"RS", "PP", "RR", "RP", "SS", "SR", "RS", "PR", "RP", "SR", "PS", "RS", "SS", "RR", "RR", "SR", "RP", "SS", "RS", "RS", "SR", "RS", "PR", "RR", "PR", "SS", "RS", "RP", "SP", "RR", "RR", "SR", "PP", "RR", "SS", "SR", "SS", "PP", "RS", "PP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> A = {"RS", "SP", "RS", "PR", "SP", "SR", "PP", "SS", "RS"};
    vector<string> E = {"PR", "PP", "SS", "RP", "RS", "SP", "RP", "SS", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> A = {"RS", "SS", "SP", "RP", "PS", "RR", "SS", "PP", "RS"};
    vector<string> E = {"SS", "SS", "PS", "SP", "PS", "SS", "RP", "RP", "PP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> A = {"RP", "PR", "SS", "SP", "SP", "PS", "RS", "SS", "RP", "RR", "RR", "SP", "RP"};
    vector<string> E = {"RR", "SP", "SP", "PS", "RR", "RR", "PP", "SS", "PP", "SR", "PP", "SR", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> A = {"RS", "PR", "RR", "SR", "RP", "PP", "RP", "RR", "PS", "RR", "PP", "PR", "RS", "SS", "SS", "PS", "PS", "RP", "RR", "PR", "PR", "PS", "SP", "PR"};
    vector<string> E = {"SS", "PR", "RS", "SR", "PS", "SR", "PP", "RP", "PS", "RS", "PP", "RP", "SP", "SR", "SR", "SS", "SP", "SR", "SP", "RP", "PS", "PP", "SR", "PR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> A = {"PR", "RS", "SP", "PS", "RP", "RR", "SS", "RP", "SP", "PP", "SR", "SP"};
    vector<string> E = {"SR", "PS", "PR", "PR", "RS", "PS", "SR", "PP", "PS", "SR", "PR", "RS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> A = {"RP", "PR", "RS", "SR", "PR", "RS", "SR", "SR", "PR", "PR", "PR", "SS", "RS", "PP", "RS", "PR", "PP", "PR", "SR", "RS", "RP", "PR", "RP", "RS", "RS", "PR"};
    vector<string> E = {"RP", "PP", "RP", "SR", "RR", "SP", "PS", "SR", "RS", "RP", "SP", "SP", "PR", "PR", "PS", "RP", "PP", "SR", "RR", "SP", "PP", "PS", "RR", "RS", "SR", "PP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> A = {"RP", "PR", "PP", "PP", "SP", "RR", "SP"};
    vector<string> E = {"RR", "PP", "SR", "SP", "PS", "PR", "SP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    vector<string> A = {"SP", "PR", "RS", "RR", "SP", "PP", "PS", "PR", "SR", "RP", "PS", "SR", "PP", "RS", "SS", "PR", "PS", "RR", "PR", "SP", "RP"};
    vector<string> E = {"SP", "SR", "SP", "RP", "RP", "SS", "PS", "SP", "PR", "RS", "SR", "RS", "RP", "PS", "SP", "PP", "PS", "SR", "RR", "SS", "RR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> A = {"SR", "SS", "PR", "RS", "PP", "RP", "PP", "SR", "SS", "RS", "SS", "RP", "SS", "RS", "RP", "PP", "SR", "RR", "RS", "PP", "RR", "SS", "PR", "PP", "SS", "RS", "RR", "RS"};
    vector<string> E = {"SR", "PR", "RR", "PS", "SS", "SR", "RR", "RR", "PS", "RP", "SP", "PS", "RR", "SP", "RR", "SR", "RP", "RP", "RS", "PP", "PR", "PP", "PS", "RR", "PP", "SS", "RP", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> A = {"RS", "RP", "RR", "RR", "PS", "SS", "RS", "PS", "RS", "SP", "PR", "SP", "PS", "SR", "PS", "SS", "SS", "RP", "PS", "SR", "SS", "PS"};
    vector<string> E = {"PS", "PR", "SP", "SS", "SS", "PS", "PR", "PS", "RR", "SS", "PS", "PS", "PP", "SP", "PR", "SP", "SP", "SR", "RS", "SS", "PS", "RP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> A = {"SS", "RR", "RP", "SS", "PR", "RP", "SS", "PR", "PS", "RR", "RP", "SP", "RS", "RP", "RP", "PR"};
    vector<string> E = {"PS", "SP", "SR", "SR", "PP", "SP", "SS", "PR", "RS", "PP", "SP", "RP", "SP", "PS", "RR", "RR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> A = {"RS", "PP", "PP", "RS", "RP"};
    vector<string> E = {"PS", "SS", "RR", "RR", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> A = {"SP", "RR", "RS", "PR", "SR", "PR", "RR", "RS", "PR", "SR", "SR", "RR", "SP", "SR", "SR", "PR"};
    vector<string> E = {"RS", "RP", "RP", "RS", "RS", "SS", "RS", "SS", "PP", "SR", "PR", "PS", "SP", "PS", "PS", "RS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> A = {"RP", "SS", "SP", "SR", "PP", "SP", "SR", "SS", "RP", "SP", "RP", "PR", "SP", "PR", "RR", "RR", "SP", "RS", "SP", "PR", "RP", "PS", "RP", "SR", "SR", "SP", "PP", "PR", "PR", "PP", "RP", "PP", "SS", "RR", "RS", "PP"};
    vector<string> E = {"PR", "RS", "RP", "RR", "PR", "SP", "PP", "RP", "PR", "PP", "RP", "SR", "SR", "PR", "PS", "RS", "SR", "PR", "SP", "RR", "SS", "SP", "RS", "RS", "RS", "PS", "SS", "RR", "SR", "PP", "RS", "SR", "PP", "SR", "RP", "PP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> A = {"RP", "RP", "PS", "SP", "SR", "RR", "PS", "SP", "PR", "RP", "PP", "PP", "SP", "SP", "PR", "SR", "SP", "PP", "PS", "RS", "PP", "SR", "RP", "RP", "PP"};
    vector<string> E = {"RR", "RP", "RP", "SP", "PP", "PR", "RP", "RS", "RR", "PS", "SP", "SR", "RP", "SS", "RR", "RS", "PS", "PR", "RR", "RS", "RR", "SP", "PP", "PP", "RR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> A = {"SR", "PP", "PP", "SS", "SP", "SR", "SP", "RS"};
    vector<string> E = {"SS", "RP", "PR", "RS", "SS", "RR", "RP", "RP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> A = {"PR", "SS", "RS", "PP", "SP", "SR", "PR", "SR", "RR", "PR", "PS", "SS", "RR", "RP", "SP", "SP", "RS", "SP", "RP", "PR", "PR", "RR", "PS", "PS", "RS", "PP", "RS", "RP", "SP", "RS", "PR", "PS", "PS", "SP", "RP", "PS", "RR", "SS", "SR", "SR", "RP"};
    vector<string> E = {"RP", "PS", "PS", "PR", "PR", "RR", "SR", "RR", "SS", "RP", "PS", "PS", "SP", "RP", "RS", "RP", "SP", "RS", "RR", "RR", "RR", "SR", "PS", "PR", "SS", "SP", "RS", "RS", "RS", "PS", "RR", "PS", "RP", "SP", "SS", "PP", "PR", "PR", "RS", "SS", "RP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> A = {"RP", "SR", "SS", "PP", "PR", "SS", "SS", "RS", "RP", "SP", "RP", "RR", "SR", "SS", "RS", "SS", "RR", "PP", "SR"};
    vector<string> E = {"RP", "RS", "RR", "PR", "RS", "SR", "RR", "PP", "RP", "PR", "SS", "RS", "PR", "PR", "SS", "RS", "SR", "SP", "SR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> A = {"SP", "RR", "PS", "SR", "SS", "PS", "SP"};
    vector<string> E = {"SS", "PP", "RR", "SP", "SP", "RS", "PR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> A = {"RR", "PR", "PR", "SR", "SS", "SP", "RS", "SP", "RR", "RP", "SS", "SS", "RR", "RP", "RS", "RP", "RS", "SS", "RP", "RS"};
    vector<string> E = {"RR", "SP", "SR", "RP", "PP", "RP", "RS", "PR", "PP", "PP", "RP", "PP", "SR", "RR", "RS", "RP", "PP", "PR", "PR", "SP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> A = {"RR", "SS", "PP", "RR", "RS", "SR", "RP", "RS", "RR", "SS", "RP", "RS", "SR", "PS", "SR", "PP", "RP", "PS", "RP", "RS", "SR", "PR", "SP", "PS", "PR", "SS", "PR", "RR", "RS", "PP", "PR", "RS", "SP", "SP", "RP", "SS", "SR", "SR", "PR", "RP", "PS", "RR", "SS", "PP", "RR", "SP", "PR", "SS", "PS"};
    vector<string> E = {"SS", "RR", "RR", "SP", "PP", "PR", "RP", "SS", "RR", "RS", "SP", "SR", "PP", "SP", "RS", "PS", "RP", "PP", "PP", "RP", "SS", "SS", "PR", "SS", "PP", "PS", "RR", "SP", "PR", "SS", "SR", "PS", "SR", "SR", "RR", "SP", "RR", "PP", "RS", "SR", "SS", "SR", "SP", "RP", "SR", "PR", "SS", "SS", "PP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> A = {"PP", "RP", "SS", "PS", "PP", "PR", "RP", "RR", "SS", "RP"};
    vector<string> E = {"PP", "RR", "RP", "PP", "SP", "RP", "RS", "SP", "SP", "RR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> A = {"PS", "RS", "PS", "SR", "PP", "PR", "RS", "SR", "SS", "SP", "RS", "PP", "SP", "RS", "RS", "RS", "RR", "PS", "PR", "PP", "PP", "PR", "SR", "SS", "SR", "RR", "PR", "RS", "PS", "SR", "SR", "PP", "RP", "RR", "RP", "SS", "PS", "RR", "SP", "SR", "PP", "RS", "SP", "SS", "SP", "SP", "RP"};
    vector<string> E = {"SR", "RR", "SS", "SS", "RP", "SR", "PR", "PR", "SS", "PS", "SP", "PR", "PR", "PS", "PR", "SP", "PP", "PS", "PR", "PS", "PS", "PS", "SP", "SR", "SP", "SS", "PP", "RP", "PS", "PS", "SR", "PP", "SP", "PR", "RS", "PP", "RR", "RS", "SS", "PP", "PP", "SP", "PP", "PR", "PP", "RS", "RR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> A = {"RP", "PP", "RR", "RP", "RR", "RS", "SP", "SP", "PP", "PS", "SS", "RR"};
    vector<string> E = {"SP", "PP", "PP", "PP", "RS", "RP", "RP", "PR", "PR", "RS", "SP", "RR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> A = {"RS", "SR", "SP", "RS", "SS", "PP", "SR", "RS", "SS", "PP", "RR", "RS", "RP", "RR", "PR"};
    vector<string> E = {"SP", "RP", "PP", "SR", "PP", "RS", "SR", "SR", "PR", "SP", "PS", "RP", "PR", "SP", "RR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> A = {"PR", "SR"};
    vector<string> E = {"SS", "PP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> A = {"SS", "RP", "RR", "RP", "RR", "SS", "PR", "PS", "SP", "PP", "RP", "PS", "PP", "PS", "RS", "SS", "PP", "SS", "RS", "PS", "SR", "SP", "SR"};
    vector<string> E = {"PS", "SS", "PR", "PP", "RP", "SR", "PP", "PR", "SP", "RR", "PP", "RS", "PS", "RP", "SS", "RS", "SP", "RS", "SP", "RR", "PP", "RR", "PR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> A = {"PS", "SP", "RP", "SS", "PS", "SP", "PP", "PR", "SS", "RP", "RS"};
    vector<string> E = {"RP", "PR", "RS", "PR", "RS", "SR", "SR", "PP", "RR", "RP", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> A = {"RR", "RR", "SR", "SS", "SP", "SR", "RR", "SP", "RP", "SS", "PR", "RR", "RS", "SP", "RR", "SR", "SS", "SR", "RR", "PR", "PP", "SP", "PS", "PP", "PP", "PR", "PS", "SS"};
    vector<string> E = {"SR", "SP", "PP", "SS", "SS", "RP", "SP", "RP", "RR", "SP", "PR", "PS", "RR", "PP", "PP", "RR", "PP", "PP", "PS", "SP", "SP", "RS", "PR", "SR", "RP", "PS", "RP", "SP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> A = {"SR", "SS", "SP", "SS", "PR", "RR", "PP", "RS", "PP", "SS", "SP", "RR", "PS", "RS", "PR", "PS", "SS", "SP", "SS", "SP", "SR", "SS", "RS", "PS", "RS", "RP", "PP", "SP", "PR", "RS", "SR", "RS", "RR", "RP", "RS", "SS", "PR", "SS", "SR"};
    vector<string> E = {"RR", "RR", "SR", "RS", "PR", "SP", "SR", "PR", "PR", "SP", "PP", "SR", "PR", "SR", "RP", "SP", "RS", "SR", "PS", "PR", "PS", "RS", "RP", "PP", "RS", "RR", "SS", "SP", "SP", "PP", "SP", "SR", "SS", "SP", "SR", "SS", "SP", "PR", "RS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> A = {"RR", "PS", "SP", "PS", "PS", "SR", "SS", "RP", "RP", "PS", "RR"};
    vector<string> E = {"PS", "SP", "PP", "SR", "RS", "RR", "PR", "PS", "SP", "SS", "RS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> A = {"SS", "PS", "SP", "RP", "PR", "SP", "RP", "PS", "SR", "RS", "PP", "PS", "SP", "PP", "PR", "PR", "RP", "SP", "RR", "SS", "RR", "PR", "SS", "SR", "RS", "RP", "PR", "PS", "SR", "PR", "PS", "SS", "PP", "PR", "RR", "PP", "SS"};
    vector<string> E = {"PR", "SS", "PR", "RS", "PP", "RP", "RS", "PS", "SP", "SR", "PS", "SS", "PR", "PP", "SR", "RP", "SS", "SR", "SR", "RP", "SR", "RP", "SR", "PR", "SR", "SR", "PP", "SS", "RR", "SP", "SR", "SR", "PP", "RS", "RS", "RR", "SP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> A = {"PS", "PR", "PP", "SS", "RP", "PR", "SP", "RS", "SR", "PR", "SS", "PP"};
    vector<string> E = {"RS", "RR", "RR", "SS", "RP", "SP", "RP", "SR", "SR", "RP", "SR", "RS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> A = {"RR"};
    vector<string> E = {"SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    vector<string> A = {"PP", "PP", "PP", "PP"};
    vector<string> E = {"RR", "PR", "SS", "SP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> A = {"PS", "RS", "PP", "SP", "RR", "SS", "SP"};
    vector<string> E = {"RP", "SP", "RR", "SR", "RS", "SP", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> A = {"SS", "PR", "RP", "SP", "SP", "SP", "RR", "SS", "PS", "PP", "RS", "RS", "RR", "RS", "PP", "RP", "SR", "PP", "PS", "PR", "RP", "SS", "RR", "PR", "PS", "SR", "PS", "RP", "PR", "RR", "SS", "RP", "PR", "SP", "PP", "PR", "SS", "RR", "PP", "RP", "PS", "SP", "RS", "RS", "SP", "SP", "SS", "RR", "RP", "PR"};
    vector<string> E = {"PR", "RR", "PR", "RP", "RS", "PP", "SP", "SS", "SR", "RR", "RP", "SP", "PP", "RS", "SS", "SS", "PS", "PP", "RR", "SR", "SP", "SR", "PR", "PR", "PR", "RS", "PS", "PP", "SR", "RP", "SR", "SR", "SP", "PS", "PP", "PS", "RP", "PP", "PS", "RS", "PP", "PP", "RS", "RS", "SP", "SS", "SR", "SS", "PR", "RS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> A = {"SR", "PP"};
    vector<string> E = {"PR", "RS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> A = {"RR", "PP", "SS"};
    vector<string> E = {"RR", "RP", "PP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    vector<string> A = {"SR", "PR", "SS", "SP"};
    vector<string> E = {"PS", "PR", "SP", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> A = {"SR", "RP", "RR", "PS", "PR", "SP", "SS", "RP", "RP", "SS", "SS", "PS", "SR", "PS", "RS", "SS", "RS", "RR", "SP", "PR", "RR", "RS", "PS", "RP", "RR", "PR", "PS", "PR", "RR", "PP", "RR", "PR", "SR", "RS", "RP", "PP", "PP", "RR", "RS", "RS", "SS", "PP", "PR", "PR", "PR", "PR", "RS", "PR", "PP", "PP"};
    vector<string> E = {"PS", "RR", "PS", "SS", "PP", "SR", "RS", "RS", "RS", "PS", "SR", "SR", "PS", "SR", "PR", "PP", "PP", "PS", "RS", "RP", "SS", "PS", "PR", "PS", "SR", "PS", "RS", "RP", "RP", "SP", "PR", "RP", "SP", "SR", "SR", "RS", "SS", "SR", "RP", "SP", "SS", "RS", "SS", "RP", "RR", "SP", "SS", "RP", "SR", "SP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> A = {"RR", "SS"};
    vector<string> E = {"PP", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> A = {"PS", "RS", "PP", "SP", "RR", "SS", "SP", "PP", "SS", "RR"};
    vector<string> E = {"RP", "SP", "RR", "SR", "RS", "SP", "SS", "PR", "PP", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> A = {"RP", "PR", "RS", "SR", "RS", "SS", "PP", "RP", "SP", "SP", "RP", "RS", "RP", "SP", "SS", "SP", "SR", "SP", "RP", "SR", "PS", "SR", "RP", "SS", "PR", "PR", "RS", "SR", "SP", "SS", "SR", "RS", "SR", "SR", "PR", "RP", "SS", "RR", "PR", "RP", "PS", "RR", "RR", "SR", "SP", "RR", "SS", "SR", "SR", "PR"};
    vector<string> E = {"SP", "PP", "PS", "SR", "RR", "SS", "SR", "PP", "SS", "RS", "RS", "RR", "SP", "PR", "PP", "RR", "RS", "PS", "PR", "SS", "SR", "RS", "RS", "RP", "SR", "RP", "PR", "SS", "RP", "PR", "SP", "PP", "SP", "SP", "RR", "SR", "PP", "RR", "PP", "PS", "SP", "RS", "PP", "SR", "PP", "PR", "PS", "RP", "RP", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> A = {"PP", "PP", "PP", "PP", "PP"};
    vector<string> E = {"RR", "RR", "RR", "RR", "RR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> A = {"RS", "SR", "PS", "PR", "PS"};
    vector<string> E = {"RS", "PR", "PS", "RP", "PS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    vector<string> A = {"SS", "RS", "RP", "PP", "SP", "PS", "SR", "PR", "RR", "SS", "PP"};
    vector<string> E = {"SP", "RS", "RR", "SS", "PP", "SP", "PR", "RP", "PS", "SP", "RS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> A = {"PR", "PS", "SS", "RS", "PS", "PR", "RP", "PS", "SP", "SS", "RS", "SR", "PR", "PS", "PR", "PR", "RS", "PP", "RR", "SP", "PS", "RS", "PR", "SS", "RR", "RS", "SR", "PP", "RS", "PS"};
    vector<string> E = {"PR", "PP", "SS", "RS", "PS", "PR", "RP", "PS", "SP", "SS", "RS", "SR", "PR", "PS", "PR", "PR", "RS", "PP", "RR", "SP", "PS", "RS", "PR", "SS", "RP", "SR", "PP", "SR", "PR", "RP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> A = {"PS", "RS", "PP", "SP", "RR", "SS", "SP", "RP", "SP", "RR", "SR", "RS", "SP", "SS", "PS", "RS", "PP", "SP", "RR", "SS", "SP", "RP", "SP", "RR", "SR", "RS", "SP", "SS", "PS", "RS", "PP", "SP", "RR", "SS", "SP", "RP", "SP", "RR", "SR", "RS", "SP", "SS", "PS", "RS", "PP", "SP", "RR", "SS", "SP", "RP"};
    vector<string> E = {"RP", "SP", "RR", "SR", "RS", "SP", "SS", "PS", "RS", "PP", "SP", "RR", "SS", "SP", "RP", "SP", "RR", "SR", "RS", "SP", "SS", "PS", "RS", "PP", "SP", "RR", "SS", "SP", "RP", "SP", "RR", "SR", "RS", "SP", "SS", "PS", "RS", "PP", "SP", "RR", "SS", "SP", "RP", "SP", "RR", "SR", "RS", "SP", "SS", "PS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> A = {"RR"};
    vector<string> E = {"SR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    vector<string> A = {"PR", "RP", "PR", "RP", "RP", "SR", "SP", "PR", "RP", "PR", "RP", "RP", "SR", "SP", "PR", "RP", "PR", "RP", "RP", "SR", "SP", "PR", "RP", "PR", "RP", "RP", "SR", "SP", "PR", "RP", "PR", "RP", "RP", "SR", "SP", "PR", "RP", "PR", "RP", "RP", "SR", "SP", "PR", "RP", "PR", "RP", "RP", "SR", "SP"};
    vector<string> E = {"RR", "PP", "SS", "SP", "PS", "RR", "RS", "RS", "RP", "SS", "RS", "RS", "SR", "RR", "PP", "SS", "SP", "PS", "SR", "RS", "RS", "SP", "SS", "RS", "RS", "SR", "RR", "PP", "SS", "SP", "PS", "SR", "PS", "RS", "SP", "RS", "RS", "RS", "SR", "RR", "PP", "SS", "SP", "PS", "SR", "RS", "RS", "SP", "RR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> A = {"RS"};
    vector<string> E = {"SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> A = {"RR", "RR", "RR", "RR", "RR", "RP", "RP", "RP", "RP", "RP", "RS", "RS", "RS", "RS", "RS", "PR", "PR", "PR", "PR", "PR", "PP", "PP", "PP", "PP", "PP", "PS", "PS", "PS", "PS", "PS", "SR", "SR", "SR", "SR", "SR", "SP", "SP", "SP", "SP", "SP", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS"};
    vector<string> E = {"RR", "RR", "RR", "RR", "RR", "RP", "RP", "RP", "RP", "RP", "RS", "RS", "RS", "RS", "RS", "PR", "PR", "PR", "PR", "PR", "PP", "PP", "PP", "PP", "PP", "PS", "PS", "PS", "PS", "PS", "SR", "SR", "SR", "SR", "SR", "SP", "SP", "SP", "SP", "SP", "SS", "SS", "SS", "SS", "SS", "SS", "SR", "SP", "RR", "RP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> A = {"SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS"};
    vector<string> E = {"RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR", "RR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> A = {"PS", "SR"};
    vector<string> E = {"PS", "PP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> A = {"RP", "PR", "PS", "PR", "SP", "SR", "RS", "SP", "PR", "PR", "PP", "RR", "SS", "SR", "RS", "SR", "SS", "PR", "RP", "SP", "RS", "RS", "SR", "PS", "SP", "SP", "SS", "SS", "RR", "PP", "PP", "PP", "SS", "SR", "RP", "RS", "SP", "RS", "RS", "SR", "RP", "PS", "SR", "RR", "PP", "RS", "SP", "PR", "RP", "PP"};
    vector<string> E = {"RR", "SS", "SP", "PS", "RS", "SP", "RP", "PR", "PS", "SP", "SR", "RS", "PS", "RP", "PP", "RR", "SS", "SR", "PS", "PS", "SR", "SP", "PS", "PR", "PR", "PR", "PS", "RP", "SP", "RP", "SS", "SP", "RS", "RP", "PS", "RR", "SS", "PS", "PR", "RP", "RS", "SP", "PS", "RS", "RP", "RS", "SS", "RR", "PP", "SP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> A = {"RS", "RP", "SP", "PP", "SR", "SS", "RR", "PS", "SR", "PS", "RS", "PS", "RR", "SR", "PR", "PP", "SS", "RR", "PS", "SP", "RP", "PR", "SP", "PR", "SS", "RR", "PS", "SS", "PP", "RR", "PR", "RP", "SS", "PS", "SP", "RR", "PS", "RP", "SP", "RP", "RR", "RR", "RR", "RR", "SS", "SS", "SS", "RS", "SR", "RS"};
    vector<string> E = {"RP", "SR", "RP", "SS", "PR", "RP", "PP", "RR", "SS", "SP", "PR", "SR", "RS", "PR", "RP", "SS", "PP", "SS", "PP", "SP", "RP", "PR", "SP", "PS", "RP", "PS", "RP", "SP", "RP", "SP", "PR", "SP", "PR", "SP", "PR", "RR", "PR", "SP", "PR", "SP", "RR", "SS", "RR", "SS", "RS", "SR", "RR", "SS", "RR", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> A = {"RR", "RS", "PR", "RP", "SR", "RP", "SS", "RR", "PP", "SS", "RR", "RS", "PR", "RP", "SR", "RP", "SS", "RR", "PP", "SS", "RR", "RS", "PR", "RP", "SR", "RP", "SS", "RR", "PP", "SS", "RR", "RS", "PR", "RP", "SR", "RP", "SS", "RR", "PP", "SS", "RR", "RS", "PR", "RP", "SR", "RP", "SS", "RR", "PP", "SS"};
    vector<string> E = {"RR", "RS", "PR", "RP", "SR", "RP", "SS", "RR", "PP", "SS", "RR", "RS", "PR", "RP", "SR", "RP", "SS", "RR", "PP", "SS", "RR", "RS", "PR", "RP", "SR", "RP", "SS", "RR", "PP", "SS", "RR", "RS", "PR", "RP", "SR", "RP", "SS", "RR", "PP", "SS", "RR", "RS", "PR", "RP", "SR", "RP", "SS", "RR", "PP", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> A = {"PP", "SP"};
    vector<string> E = {"PR", "PP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> A = {"RR", "RP", "RS", "RP", "RP", "RP", "RP", "RP", "RS", "RR", "RR", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "SS", "RP", "RP", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SS", "SS", "SS", "RR", "SR", "RS", "SR", "RS", "PP", "PP", "PP", "PP"};
    vector<string> E = {"RR", "RR", "RR", "RR", "RR", "RR", "RR", "SS", "SS", "SS", "SR", "RS", "SR", "RS", "SR", "RP", "PR", "PR", "PR", "SP", "PR", "PR", "SP", "SS", "RS", "SR", "SS", "SS", "SS", "SS", "SS", "RR", "PP", "PP", "PP", "PP", "PR", "SS", "SS", "SR", "SP", "SP", "PS", "PS", "SS", "SS", "SP", "RR", "SS", "SS"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> A = {"RR", "RR", "RP"};
    vector<string> E = {"SS", "SR", "RP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> A = {"PS", "RS", "PR"};
    vector<string> E = {"RS", "PS", "RR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> A = {"RS"};
    vector<string> E = {"SP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> A = {"PS", "RS", "PP", "SP", "RR", "SS", "SP", "RP", "SP", "RR", "SR", "PS", "RS", "SS", "SR", "SP", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "SR", "RP", "RP", "RP", "RP", "RP", "RP", "RP", "RP", "RP", "RP", "RP", "PR", "PR", "PR", "PR", "PR", "PR", "PR", "PR", "PR", "PR", "PR", "SP"};
    vector<string> E = {"RP", "SP", "RR", "SR", "RS", "SP", "SS", "PS", "PS", "PS", "PS", "PS", "PS", "PS", "PS", "PS", "SR", "RR", "SP", "RS", "RP", "SP", "RP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "SP", "RP", "RP", "RP", "RP", "RP", "RP", "RP", "PR", "PR", "PR", "PR", "PR", "PR", "PR", "PR", "PR", "PR", "PR", "PR"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> A = {"RS", "RS"};
    vector<string> E = {"RP", "RP"};
    DoubleRoshambo* pObj = new DoubleRoshambo();
    clock_t start = clock();
    int result = pObj->maxScore(A, E);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22885727&rd=14537&pm=11289
********************************************************************************
#include <iostream> 
#include <iosfwd> 
#include <iomanip> 
#include <cstdio> 
#include <cstring> 
#include <cstdlib> 
#include <ctime> 
#include <cmath> 
#include <cassert> 
#include <cctype> 
#include <vector> 
#include <bitset> 
#include <set> 
#include <queue> 
#include <stack> 
#include <map> 
#include <deque> 
#include <string> 
#include <list> 
#include <iterator> 
#include <sstream> 
#include <complex> 
#include <fstream> 
#include <functional> 
#include <numeric> 
#include <utility> 
#include <algorithm> 
 
using namespace std; 
 
#define SHOW(x) cout << #x << " = " << x << endl 
#define LET(x, a) __typeof(a) x = a 
#define FOREACH(it, v) for(LET(it, (v).begin()); it != (v).end(); ++it) 
 
typedef long long LL; 
 
template <class T> inline int size(const T& c) {return (int) c.size();} 
 
struct Graph 
{ 
  vector < vector <int> > matrix; 
  vector <int> matchedWith, level, parent, weight; 
  vector <bool> S, T; int N; 
  void initialize(int N) { 
    this -> N = N; 
    matrix.assign(2 * N + 1, vector <int> (2 * N + 1, 0)); 
  } 
  void addEdge(int u, int v, int w) { 
    matrix[u + 1][v + 1 + N] = w; 
  } 
  bool augmentPath(int u) { 
    level.assign(2 * N + 1, 0); 
    parent.assign(2 * N + 1, 0); 
    queue <int> q; q.push(u); 
    level[u] = 1; int last = 0; 
    while (!q.empty() && (last == 0)) { 
      int v = q.front(); q.pop(); 
      if (level[v] & 1) { 
        for (int w = N + 1; w <= (2 * N); w++) { 
          if (!level[w] && (matrix[v][w] == weight[v] + weight[w])) { 
            if (!matchedWith[w]) { 
              parent[w] = v; last = w; 
              break; 
            } 
            else if(matchedWith[w] != v) { 
              parent[w] = v; q.push(w); 
              level[w]  = level[v] + 1; 
            } 
          } 
        } 
      } 
      else { 
        int w = matchedWith[v]; 
        parent[w] = v; q.push(w); 
        level[w] = level[v] + 1; 
      } 
    } 
    if (last != 0) { 
      for (int w = last; w != 0; w = parent[parent[w]]) 
        matchedWith[w] = parent[w], matchedWith[parent[w]]  = w; 
      return true; 
    } 
    else { 
      for (int v = 1; v <= N; v++) { 
        if (level[v] != 0) S[v] = true; 
        if (level[N + v] != 0) T[N + v] = true; 
      } 
      return false; 
    } 
  } 
  int matching() { 
    matchedWith.assign(2 * N + 1, 0); 
    weight.assign(2 * N + 1, 0); 
    for (int i = 1; i <= N; i++) { 
      int nmax = 0; 
      for (int j = N + 1; j <= (2 * N); j++) 
        nmax = max(nmax, matrix[i][j]); 
      weight[i] = nmax; 
      weight[i + N] = 0; 
    } 
    int nMatch   = 0; 
    while (true) { 
      S.assign(2 * N + 1, false); 
      T.assign(2 * N + 1, false); 
      for (int i = 1; i <= N; i++) 
        if (!matchedWith[i] && augmentPath(i)) 
          nMatch++; 
      if(nMatch == N) break; 
      int bottle = (1 << 30); 
      for (int i = 1; i <= N; i++) 
        if(S[i] == true) 
          for (int j = N + 1; j <= (2 * N); j++) 
            if(T[j] == false) { 
              int slack = weight[i] + weight[j] - matrix[i][j]; 
              bottle = min(bottle, slack); 
            } 
      for (int i = 1; i <= N; i++) { 
        if(S[i] == true) weight[i] -= bottle; 
        if(T[i + N] == true) weight[i + N]  += bottle; 
      } 
    } 
    int matching = 0; 
    for (int i = 1; i <= N; ++i) 
      matching += matrix[i][matchedWith[i]]; 
    return matching; 
  } 
}; 
 
 
struct DoubleRoshambo 
{ 
  bool greater(char x, char y) { 
    if (x == 'R' && y == 'S') return true; 
    if (x == 'S' && y == 'P') return true; 
    if (x == 'P' && y == 'R') return true; 
    return false; 
  } 
  int score(string& x, string& y) { 
    if (greater(x[1], y[1]) && greater(x[0], y[0])) 
      return 2; 
    else if (greater(x[1], y[1]) && x[0] == y[0]) 
      return 1; 
    else 
      return 0; 
  } 
  int maxScore(vector <string> A, vector <string> E) { 
    Graph graph; graph.initialize(size(A)); 
    for (int i = 0; i < size(A); ++i) 
      for (int j = 0; j < size(E); ++j) 
        graph.addEdge(i, j, score(A[i], E[j])); 
    return graph.matching(); 
  } 
};

********************************************************************************
*******************************************************************************/