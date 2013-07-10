/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1692
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

class Yahtzee {
public:
    int maxPoints(vector<int> toss);
};

int Yahtzee::maxPoints(vector<int> toss) {
    int ret;
    return ret;
}


int test0() {
    vector<int> toss = {2, 2, 3, 5, 4};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> toss = {6, 4, 1, 1, 3};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> toss = {5, 3, 5, 3, 3};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> toss = {2, 3, 2, 2, 3};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> toss = {1, 1, 1, 1, 1};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> toss = {3, 4, 4, 3, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> toss = {6, 4, 3, 6, 1};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> toss = {1, 5, 1, 3, 2};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> toss = {4, 6, 4, 6, 1};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> toss = {6, 1, 1, 6, 3};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> toss = {2, 6, 3, 3, 5};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> toss = {2, 4, 1, 1, 2};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> toss = {4, 6, 5, 1, 4};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> toss = {3, 3, 3, 5, 3};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> toss = {4, 4, 1, 1, 5};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> toss = {4, 4, 2, 2, 4};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> toss = {3, 1, 1, 2, 4};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> toss = {1, 4, 3, 4, 5};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> toss = {1, 5, 6, 3, 5};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> toss = {3, 5, 6, 5, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> toss = {6, 4, 4, 6, 4};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> toss = {2, 6, 3, 1, 4};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> toss = {3, 3, 4, 4, 2};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> toss = {3, 6, 3, 5, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> toss = {6, 1, 2, 5, 1};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> toss = {2, 2, 5, 6, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> toss = {5, 5, 5, 5, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> toss = {2, 2, 2, 2, 2};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> toss = {6, 6, 6, 6, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> toss = {5, 2, 2, 2, 2};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
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
    vector<int> toss = {6, 2, 2, 2, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> toss = {2, 2, 2, 3, 3};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> toss = {5, 3, 5, 3, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> toss = {1, 3, 3, 3, 5};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> toss = {5, 5, 5, 4, 5};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> toss = {5, 3, 2, 4, 3};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
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
    vector<int> toss = {1, 1, 1, 1, 1};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> toss = {5, 5, 5, 5, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> toss = {2, 2, 2, 2, 2};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> toss = {6, 6, 6, 6, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> toss = {5, 2, 2, 2, 2};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
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
    vector<int> toss = {6, 2, 2, 2, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> toss = {2, 2, 2, 3, 3};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> toss = {5, 3, 5, 3, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> toss = {1, 3, 3, 3, 5};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
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
    vector<int> toss = {5, 5, 5, 4, 5};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> toss = {5, 3, 2, 4, 3};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
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
    vector<int> toss = {1, 1, 1, 1, 1};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> toss = {5, 5, 5, 5, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> toss = {2, 2, 2, 2, 2};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> toss = {6, 6, 6, 6, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> toss = {5, 2, 2, 2, 2};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> toss = {6, 2, 2, 2, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
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
    vector<int> toss = {2, 2, 2, 3, 3};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> toss = {5, 3, 5, 3, 6};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> toss = {1, 3, 3, 3, 5};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> toss = {5, 5, 5, 4, 5};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
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
    vector<int> toss = {5, 3, 2, 4, 3};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> toss = {1, 1, 1, 1, 1};
    Yahtzee* pObj = new Yahtzee();
    clock_t start = clock();
    int result = pObj->maxPoints(toss);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=305695&rd=4535&pm=1692
********************************************************************************
/* 
*/ 
 
#line 50 "Yahtzee.cpp" 
 
#define MAXINT 1294967296 
#define MAXSIZE 16198653 
 
#include <iostream> 
#include <sstream> 
#include <fstream> 
#include <vector>  // max vector <int> size = 16198653 
#include <string> 
#include <algorithm>  // has find() func for vectors! 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <cmath> 
#include <cctype> 
#include <cstdio> 
#include <cstdlib> 
#include <iomanip> 
 
using namespace std; 
 
template <class IT> 
void print(vector <IT> v, int n)  // make n = -1 to print the elements side by side 
{   
  for (int i = 0; i < v.size(); i++) { 
    cout << v[i]; 
    if (i < v.size() - 1 && n != -1)       
      cout << char(n); 
  } 
  cout << endl << flush; 
} 
 
int gcd(int a, int b) 
{ 
  int temp = a % b; 
  if (temp == 0) 
    return b; 
  return gcd(b, temp); 
} 
 
int lcm(int a, int b) 
{ 
  return a * b / gcd(a, b); 
} 
 
string toString(int n) 
{ 
  ostringstream out; 
  out << n; 
  return out.str();    
}  
 
string toString(double n) 
{ 
  ostringstream out; 
  out << n; 
  return out.str();    
} 
 
vector <string> toString(vector <int> &v) 
{ 
  int size = v.size(); 
  vector <string> sol(size); 
  for (int i = 0; i < size; i++) 
    sol[i] = toString(v[i]); 
  return sol; 
}  
 
vector <string> toString(vector <double> &v) 
{ 
  int size = v.size(); 
  vector <string> sol(size); 
  for (int i = 0; i < size; i++) 
    sol[i] = toString(v[i]); 
  return sol; 
}  
 
int toInt(char ch) 
{ 
  return int(ch - '0'); 
} 
 
int toInt(const string &s) 
{ 
  istringstream i(s); 
  int x; 
  i >> x; 
  return x;    
}  
 
vector <int> toInt(const vector <string> &v) 
{ 
  int size = v.size(); 
  vector <int> sol(size); 
  for (int i = 0; i < size; i++) 
    sol[i] = toInt(v[i]); 
  return sol; 
}  
 
char toChar(int n) 
{ 
  return char(char(n) + char('0')); 
} 
 
char toChar(const string &s) 
{ 
  return s[0]; 
} 
 
double toDouble(const string &s) 
{ 
  istringstream i(s); 
  double x; 
  i >> x; 
  return x; 
}  
 
vector <double> toDouble(const vector <string> &v) 
{ 
  int size = v.size(); 
  vector <double> sol(size); 
  for (int i = 0; i < size; i++) 
    sol[i] = toDouble(v[i]); 
  return sol; 
}  
 
class StrTok {     
  public: 
    StrTok(const string &s, const string &del = " ", int it = 0) {str = s; delim = del; iter = it;} 
    StrTok(const string &s, char del, int it = 0) {str = s; delim = del; iter = it;} 
    StrTok(const StrTok &st) {*this = st;} 
    string nextToken(); 
    bool hasMoreTokens() {return (iter < str.size());} 
    int numTokens(); 
    vector <string> separate(); 
    string &getStr() {return str;} 
    void setStr(const string &s) {str = s;} 
    string &getDelim() {return delim;} 
    void setDelim(const string &del) {delim = del;} 
    void setDelim(char del) {delim = del;} 
    int getIter() {return iter;} 
    void setIter(int it) {iter = it;}     
    StrTok &operator=(const StrTok &st) {str = st.str; delim = st.delim; iter = st.iter; return *this;}     
    bool operator==(const StrTok &st) {return (str == st.str && delim == st.delim && iter == st.iter);} 
    bool operator!=(const StrTok &st) {return (!(*this == st));} 
  private: 
    string str; 
    int iter; 
    string delim; 
    bool isDelim(); 
}; 
 
string StrTok::nextToken() 
{ 
  string tok; 
  while (iter < str.size() && !isDelim()) { 
    tok += str[iter]; 
    iter++; 
  } 
  iter += delim.size(); 
  return tok; 
} 
 
int StrTok::numTokens() 
{ 
  int it = iter; 
  vector <string> toks = separate(); 
  iter = it; 
  return toks.size(); 
} 
 
vector <string> StrTok::separate() 
{ 
  vector <string> toks; 
  while (hasMoreTokens()) 
    toks.push_back(nextToken()); 
  return toks; 
} 
 
bool StrTok::isDelim() 
{   
  for (int i = 0, it = iter; i < delim.size(); i++, it++) { 
    if (it >= str.size() || str[it] != delim[i]) 
      return false; 
  } 
  return true; 
} 
 
class Yahtzee { 
  public: 
  int maxPoints(vector <int> toss) { 
    int best = 0, i, j, s; 
    for (i = 1; i <= 6; i++) { 
      s = 0; 
      for (j = 0; j < 5; j++) { 
        if (toss[j] == i) 
          s += i; 
      } 
      if (s > best) 
        best = s; 
    } 
    return best; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/