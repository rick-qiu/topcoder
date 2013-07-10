/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8572
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

class TheLuckySum {
public:
    vector<int> sum(int n);
};

vector<int> TheLuckySum::sum(int n) {
    vector<int> ret;
    return ret;
}


int test0() {
    int n = 11;
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    int n = 1000000000;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44444444, 477777774, 477777774};
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    TheLuckySum* pObj = new TheLuckySum();
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
    int n = 900757147;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4474, 44474, 444474, 4744474, 447744474, 447774777};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 967851000;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {444, 444, 4447444, 44447444, 444477447, 474477777};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 901413356;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {74, 4474, 4444477, 4444777, 444744777, 447774777};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 936971124;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 44, 4444, 44444444, 444744444, 447777744};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 959598368;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {444, 444444, 444444, 4444744, 4744744, 474744774, 474774774};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 960567225;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 74, 44474, 444474, 444474, 4444474, 477444474, 477744777};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 991749387;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 744, 74744, 4474747, 44474777, 47474777, 447474777, 447774777};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 904890851;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 444, 4444, 444444, 4444444, 4444477, 447774777, 447777777};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 935766290;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {444, 744744, 747774, 44747774, 444747777, 444777777};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 926239572;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47, 47, 47, 744477, 447747477, 477747477};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 918744469;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4444, 4444, 744474, 44747774, 47747774, 47747774, 777747777};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 907001919;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 444, 4444744, 4444744, 4444744, 4444744, 444444744, 444777747};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 741380025;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 744444, 44747444, 44777444, 47777444, 47777747, 77777747, 477777747};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 740856025;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4744, 4444744, 44447744, 44447744, 44477744, 47477747, 77777777, 477777777};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 738138369;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 474744, 44774744, 44777774, 44777774, 47777774, 77777774, 477777777};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 735466469;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 444, 7477444, 47477474, 47477774, 77477774, 77777774, 477777777};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 734726629;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44474, 7444474, 47447474, 47447474, 77447474, 77447474, 477447777};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 731643649;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 7444, 44747444, 44777744, 44777744, 44777744, 74777744, 477777777};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 726508549;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 444, 4444, 744444, 44744444, 47744444, 77744774, 77747774, 477777777};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 699603829;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 74, 444474, 444474, 74444474, 74744774, 74747774, 474777777};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 693953619;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 7444, 4447444, 44447744, 44747744, 44747744, 77777744, 477777747};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 676711969;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 44, 74, 4444474, 4447474, 44447474, 74447474, 74447474, 474477477};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 663488634;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 44444, 444444, 4444447, 44444447, 44444447, 44444447, 47444477, 477777477};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 659694889;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 444, 4444, 444444, 44444444, 44474444, 44774444, 47774444, 477777777};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 444399969;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4444, 7744474, 47774474, 77774474, 77774774, 77774774, 77774774, 77777777};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 444399959;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 744, 7744744, 47774744, 77774744, 77774744, 77774744, 77777744, 77777747};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 444399949;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7444, 44447444, 44447444, 44447444, 77747444, 77747474, 77777474, 77777777};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 444399946;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7444, 44447444, 44447444, 44447444, 77747444, 77747474, 77777474, 77777774};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 444399943;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7447, 44447447, 44447447, 44447447, 77747447, 77747447, 77777477, 77777777};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 822222221;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44444444, 777777777};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 777777777;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {777777777};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 747474747;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {747474747};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 444444444;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {444444444};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 956843912;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 444477, 4444477, 474477477, 477477477};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 716346658;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 447744, 44447774, 44447774, 74447774, 74777774, 477777774};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 999996199;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 44, 4474, 4474, 44474, 44447474, 477747474, 477747777};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 999999994;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44444444, 44444444, 44444444, 44444444, 44444444, 777777774};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 267777788;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44444447, 74444447, 74444447, 74444447};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 6078040;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 44744, 477744, 777774, 4777774};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 432338566;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {447, 4447, 44444447, 77444447, 77444447, 77444777, 77777777, 77777777};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 444444446;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44444444, 44444447, 44444447, 77777777, 77777777, 77777777, 77777777};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 188888887;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4444444, 44444444, 44444444, 47777774, 47777777};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 85840;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 444, 444, 7474, 77474};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 987897888;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 447444, 44447444, 47447444, 447777774, 447777774};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 987564321;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 444444, 44447444, 47447474, 447447474, 447777477};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 146664;
    TheLuckySum* pObj = new TheLuckySum();
    clock_t start = clock();
    vector<int> result = pObj->sum(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4444, 4444, 4444, 44444, 44444, 44444};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=12175&pm=8572
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
 
int thenumber;
 
VI impossible(1,-1);
VI notdoneyet(1,-2);
 
VI cache[12][50];
 
VI calc(int done, int p) {
  VI &res = cache[done][p];
  if(res!=notdoneyet) return res;
  res = impossible;
  int number = thenumber;
  REP(i,done) number /= 10;
  if(number<p) { return res; }
  if(number==p) { res.clear(); return res; }
  FOR(n4,0,20) FOR(n7,0,20) {
    int sm = n4*4 + n7*7 + p;
    if(sm>number || sm%10 != number%10) continue;
    int p2 = sm / 10;
    VI v = calc(done+1, p2);
    if(v==impossible) continue;
    int extras = n4+n7-size(v);
    if(extras<0) continue;
    reverse(v.begin(),v.end());
    REP(i,extras) v.push_back(0);
    reverse(v.begin(),v.end());
    REP(i,size(v)) {
      if(i<n4) v[i] = v[i]*10+4;
      else v[i] = v[i]*10+7;
    }
    if(res == impossible || size(res)>size(v) || size(res)==size(v) && res<v)
      res = v;
  }
  return res;
}
 
struct TheLuckySum {
vector <int> sum(int n) {
  REP(i,12) REP(j,50) cache[i][j]=notdoneyet;
  thenumber = n;
  VI res = calc(0,0);
  if(res==impossible) res.clear();
  return res;
}
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/