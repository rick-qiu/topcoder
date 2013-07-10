/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8571
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

class TheSumOfLuckyNumbers {
public:
    vector<int> sum(int n);
};

vector<int> TheSumOfLuckyNumbers::sum(int n) {
    vector<int> ret;
    return ret;
}


int test0() {
    int n = 11;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 12;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 13;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 100;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4, 44, 44};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 1000000;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44444, 477774, 477774};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 48;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 44};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 1;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 57;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 7, 7, 7, 7, 7, 7, 7};
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
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 7, 7};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 69;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 7, 7, 47};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 3603;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {444, 444, 444, 747, 747, 777};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 3456;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {444, 744, 744, 747, 777};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 3812;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47, 747, 747, 747, 747, 777};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 3580;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 474, 774, 774, 777, 777};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 3824;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 744, 744, 744, 774, 774};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 957147;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 444, 4444, 474474, 477777};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 951000;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {444, 444, 444, 444, 474447, 474777};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 913356;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {74, 4474, 44477, 44777, 44777, 774777};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 971124;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 44, 4444, 44444, 444444, 477744};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 998368;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 44, 444, 4444, 44444, 474474, 474474};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 1;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 2;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 3;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 4;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 5;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 6;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 7;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 8;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 9;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 10;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 17;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 18;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 7};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 19;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4, 7};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 20;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4, 4, 4};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 21;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 7};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 996199;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 4474, 4474, 44474, 47474, 447474, 447777};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 744399;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 474, 44774, 74774, 74774, 74774, 474777};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 774099;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 474, 74474, 74774, 74774, 74774, 474777};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 774169;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 444, 444, 74474, 74474, 74774, 74774, 474777};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 774199;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 444, 474, 74474, 74474, 74774, 74774, 474777};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 813199;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 4474, 4474, 4474, 4474, 47474, 747777};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 813499;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 4474, 4474, 4474, 4474, 47774, 747777};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 813799;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 4474, 4474, 4474, 4774, 47774, 747777};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 813829;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 74, 4474, 4474, 4474, 4774, 47774, 747777};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 813859;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 444, 444, 4444, 4444, 4444, 4444, 47444, 747747};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 813869;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 444, 4444, 4474, 4474, 4474, 47774, 747777};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 813899;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 444, 4474, 4474, 4474, 4474, 47774, 747777};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 814099;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 4474, 4474, 4774, 4774, 47774, 747777};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 814169;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 444, 4444, 4474, 4474, 4774, 47774, 747777};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 814199;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 444, 4474, 4474, 4474, 4774, 47774, 747777};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 814499;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 74, 4474, 7474, 7474, 47474, 747477};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 816199;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 4474, 4474, 4474, 7474, 47474, 747777};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 816499;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 4474, 4474, 4474, 7474, 47774, 747777};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 816899;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 44474, 74474, 74474, 74474, 74474, 474477};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 817199;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 44474, 74474, 74474, 74474, 74474, 474777};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 817499;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 74, 7474, 7474, 7474, 47474, 747477};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 993199;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 4474, 4474, 44474, 44474, 447474, 447777};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 999997;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44444, 44444, 44444, 44444, 44444, 777777};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 999962;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44444, 477744, 477774};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 777776;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {74, 74, 74, 77, 777477};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 77863;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4, 74, 77777};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 44444;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44444};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 895;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 444, 447};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 999999;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 44444, 477774, 477777};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 984576;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {74, 44474, 44474, 447777, 447777};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 987654;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 444, 44444, 47474, 447474, 447774};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 989564;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {444, 4444, 44444, 44744, 447744, 447744};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 999998;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44444, 477777, 477777};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 999897;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 44, 444, 44444, 477444, 477477};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 154841;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 44, 44, 444, 4744, 74744, 74777};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 888888;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {444444, 444444};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 99991;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4, 44, 4444, 47744, 47747};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 121;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 77};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 959791;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4, 444, 4444, 477444, 477447};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 78;
    TheSumOfLuckyNumbers* pObj = new TheSumOfLuckyNumbers();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 74};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22702977&rd=12175&pm=8571
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <cmath> 
#include <sstream> 
 
using namespace std; 
 
class TheSumOfLuckyNumbers 
{ 
public: 
    int n,p; 
    vector<int> a; 
    int c[1000001],d[1000001]; 
     
    int rec(int k) 
    { 
      if (c[k] != -2) return c[k]; 
      if (k == 0) return 0; 
      int i,y; 
      int x = -1; 
      for (i = 0;i<=p;i++) 
      if (k-a[i]>=0) 
      { 
        y = rec(k-a[i]); 
        if (y != -1) y++; 
        if (((x == -1)||(x>y))&&(y != -1)) 
        { 
          x = y; 
          d[k] = a[i]; 
        } 
      } 
      else break; 
      c[k] = x; 
      return x; 
    } 
     
    vector <int> sum(int n1) 
    { 
      n = n1; 
      int i,x; 
      bool r; 
      for (i = 1;i<=n;i++) 
      { 
        r = false; 
        x = i; 
        while (x>0) 
        { 
          if ((x%10 != 4)&&(x %10 != 7)) 
          { 
            r = true; 
            break; 
          } 
          x = x/10; 
        } 
        if (r == false) a.push_back(i); 
      } 
      for (i = 0;i<=1000000;i++) 
      c[i] = -2; 
      p = a.size()-1; 
      x = rec(n); 
      vector<int> b; 
      if (x == -1) return b; 
      else 
      { 
        while (n>0) 
        { 
          b.push_back(d[n]); 
          n = n-d[n]; 
        } 
        return b; 
      } 
    } 
};

********************************************************************************
*******************************************************************************/