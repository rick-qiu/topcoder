/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12176
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

class HatRack {
public:
    long countWays(vector<int> knob1, vector<int> knob2);
};

long HatRack::countWays(vector<int> knob1, vector<int> knob2) {
    long ret;
    return ret;
}


int test0() {
    vector<int> knob1 = {1};
    vector<int> knob2 = {2};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> knob1 = {1, 1};
    vector<int> knob2 = {2, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> knob1 = {1, 1, 1, 1};
    vector<int> knob2 = {2, 3, 4, 5};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> knob1 = {6, 6, 6, 4, 1};
    vector<int> knob2 = {1, 2, 4, 5, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> knob1 = {1, 1, 2, 2, 11, 11, 8, 8, 3, 3, 4, 4, 5};
    vector<int> knob2 = {2, 3, 11, 8, 12, 13, 9, 10, 4, 5, 7, 6, 14};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> knob1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> knob2 = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> knob1 = {2};
    vector<int> knob2 = {1};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> knob1 = {3, 1};
    vector<int> knob2 = {2, 2};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> knob1 = {2, 1, 3};
    vector<int> knob2 = {4, 4, 2};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> knob1 = {1, 5, 3, 2};
    vector<int> knob2 = {4, 4, 1, 1};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> knob1 = {1, 4, 2, 3, 5};
    vector<int> knob2 = {5, 3, 5, 6, 6};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> knob1 = {6, 2, 5, 1, 3, 7};
    vector<int> knob2 = {5, 7, 4, 5, 7, 4};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> knob1 = {8, 6, 5, 4, 7, 2, 1};
    vector<int> knob2 = {1, 3, 6, 6, 5, 1, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> knob1 = {3, 9, 4, 7, 6, 8, 5, 2};
    vector<int> knob2 = {7, 1, 5, 9, 5, 9, 1, 7};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> knob1 = {8, 3, 6, 5, 1, 9, 7, 2, 4};
    vector<int> knob2 = {1, 1, 10, 7, 10, 4, 6, 4, 6};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> knob1 = {11, 4, 8, 6, 7, 2, 1, 9, 10, 3};
    vector<int> knob2 = {1, 11, 11, 9, 2, 5, 5, 1, 9, 2};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> knob1 = {6, 9, 7, 8, 12, 4, 1, 10, 3, 2, 11};
    vector<int> knob2 = {3, 1, 10, 3, 2, 5, 5, 4, 4, 1, 10};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> knob1 = {9, 10, 6, 1, 11, 2, 4, 12, 5, 8, 3, 13};
    vector<int> knob2 = {12, 13, 7, 13, 12, 5, 3, 6, 7, 3, 5, 6};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> knob1 = {13, 4, 10, 8, 7, 11, 5, 9, 3, 6, 2, 12, 1};
    vector<int> knob2 = {8, 10, 1, 6, 6, 1, 10, 7, 8, 14, 11, 7, 14};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> knob1 = {5, 9, 3, 11, 13, 1, 8, 7, 10, 14, 15, 12, 4, 6};
    vector<int> knob2 = {3, 3, 2, 15, 10, 2, 9, 15, 1, 9, 1, 10, 5, 5};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 128;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> knob1 = {6, 5, 3, 15, 10, 4, 1, 7, 11, 12, 8, 14, 2, 13, 9};
    vector<int> knob2 = {8, 1, 16, 9, 16, 2, 3, 2, 7, 8, 10, 9, 10, 1, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> knob1 = {16, 2, 9, 5, 15, 17, 3, 12, 10, 4, 14, 11, 8, 1, 13, 7};
    vector<int> knob2 = {17, 3, 10, 17, 10, 11, 6, 4, 3, 6, 2, 4, 12, 2, 11, 12};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> knob1 = {3, 9, 12, 4, 1, 17, 18, 15, 6, 5, 11, 13, 14, 10, 7, 16, 2};
    vector<int> knob2 = {5, 10, 8, 12, 16, 7, 7, 3, 16, 8, 14, 10, 4, 4, 12, 5, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> knob1 = {3, 11, 5, 6, 4, 9, 14, 16, 12, 15, 13, 2, 18, 7, 1, 8, 17, 19};
    vector<int> knob2 = {18, 9, 1, 15, 3, 10, 3, 11, 17, 19, 15, 11, 19, 1, 9, 17, 18, 10};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 128;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> knob1 = {11, 20, 15, 13, 12, 1, 18, 5, 3, 2, 7, 8, 16, 19, 14, 4, 17, 9, 6};
    vector<int> knob2 = {9, 9, 2, 16, 4, 2, 5, 14, 4, 16, 13, 7, 10, 5, 10, 13, 1, 14, 7};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> knob1 = {5, 1, 2, 11, 19, 12, 18, 17, 9, 4, 13, 15, 20, 7, 21, 14, 3, 10, 6, 8};
    vector<int> knob2 = {16, 5, 10, 15, 13, 20, 11, 14, 13, 21, 20, 16, 5, 11, 15, 1, 21, 1, 10, 14};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 128;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> knob1 = {20, 4, 11, 8, 1, 10, 21, 6, 2, 22, 16, 13, 9, 3, 18, 14, 15, 19, 7, 12, 5};
    vector<int> knob2 = {19, 9, 17, 6, 2, 18, 20, 19, 5, 14, 20, 2, 3, 11, 5, 3, 18, 17, 14, 6, 11};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 128;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> knob1 = {3, 12, 1, 7, 10, 11, 14, 19, 9, 6, 2, 23, 18, 20, 17, 8, 5, 16, 21, 15, 4, 13};
    vector<int> knob2 = {20, 16, 6, 17, 8, 7, 22, 8, 16, 21, 6, 7, 14, 14, 5, 17, 22, 21, 5, 18, 20, 18};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> knob1 = {16, 2, 13, 21, 6, 11, 10, 9, 14, 3, 23, 1, 20, 15, 19, 17, 7, 18, 12, 24, 8, 4, 22};
    vector<int> knob2 = {5, 15, 22, 23, 5, 2, 22, 12, 3, 6, 18, 3, 17, 16, 23, 18, 8, 16, 6, 17, 12, 2, 15};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> knob1 = {14, 22, 25, 12, 11, 9, 2, 17, 4, 7, 8, 5, 15, 10, 24, 20, 1, 21, 18, 3, 13, 23, 16, 6};
    vector<int> knob2 = {25, 12, 19, 19, 6, 12, 17, 14, 17, 23, 11, 11, 14, 9, 3, 22, 15, 15, 3, 6, 23, 22, 9, 25};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 512;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> knob1 = {16, 18, 11, 10, 3, 25, 23, 20, 21, 14, 13, 6, 8, 19, 24, 12, 4, 5, 26, 7, 15, 9, 1, 22, 2};
    vector<int> knob2 = {25, 11, 6, 12, 8, 17, 20, 16, 1, 17, 24, 25, 16, 24, 6, 14, 20, 11, 1, 8, 10, 14, 12, 9, 9};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 512;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> knob1 = {7, 11, 3, 8, 1, 19, 17, 5, 10, 21, 13, 16, 6, 4, 24, 23, 12, 14, 15, 22, 9, 20, 2, 18, 26, 27};
    vector<int> knob2 = {8, 23, 4, 25, 22, 2, 15, 4, 12, 12, 5, 2, 15, 26, 5, 7, 26, 3, 22, 8, 1, 23, 7, 1, 25, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2048;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> knob1 = {21, 8, 24, 23, 7, 12, 6, 14, 11, 10, 16, 9, 1, 25, 15, 20, 28, 4, 22, 27, 3, 17, 19, 26, 2, 5, 13};
    vector<int> knob2 = {14, 9, 26, 15, 11, 23, 22, 18, 15, 11, 4, 27, 4, 26, 27, 24, 3, 21, 9, 18, 21, 25, 3, 14, 24, 23, 25};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> knob1 = {23, 4, 22, 17, 9, 29, 2, 8, 14, 7, 18, 12, 21, 19, 1, 11, 26, 13, 3, 16, 20, 25, 28, 27, 5, 24, 10, 6};
    vector<int> knob2 = {25, 26, 9, 28, 15, 28, 4, 27, 19, 3, 6, 15, 14, 12, 4, 6, 12, 3, 27, 25, 10, 22, 26, 9, 10, 14, 22, 19};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2048;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> knob1 = {16, 5, 17, 24, 4, 15, 29, 14, 18, 3, 21, 22, 25, 26, 8, 6, 9, 27, 13, 1, 10, 11, 12, 19, 28, 30, 20, 23, 2};
    vector<int> knob2 = {6, 9, 8, 25, 19, 11, 8, 25, 27, 28, 1, 1, 7, 30, 22, 21, 24, 24, 30, 7, 19, 14, 11, 14, 21, 22, 9, 28, 6};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2048;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> knob1 = {24, 26, 12, 5, 29, 31, 15, 27, 11, 17, 22, 28, 14, 4, 25, 16, 10, 18, 1, 23, 6, 30, 13, 20, 9, 21, 7, 8, 2, 3};
    vector<int> knob2 = {6, 12, 27, 19, 6, 29, 7, 5, 21, 21, 23, 8, 12, 30, 4, 24, 15, 24, 23, 27, 2, 5, 29, 15, 4, 7, 2, 30, 19, 8};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 32768;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> knob1 = {19, 15, 1, 2, 22, 23, 21, 3, 27, 20, 24, 30, 14, 4, 29, 25, 6, 18, 28, 5, 17, 10, 8, 26, 32, 16, 31, 13, 9, 12, 7};
    vector<int> knob2 = {20, 4, 5, 5, 29, 19, 15, 12, 1, 30, 32, 11, 28, 8, 4, 10, 32, 28, 16, 8, 10, 16, 11, 2, 20, 30, 2, 1, 19, 29, 15};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2048;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> knob1 = {19, 9, 26, 2, 11, 14, 17, 23, 18, 1, 20, 29, 13, 33, 24, 16, 22, 15, 27, 30, 28, 25, 8, 3, 21, 32, 7, 10, 6, 12, 5, 31};
    vector<int> knob2 = {4, 32, 32, 30, 25, 21, 27, 15, 4, 25, 29, 14, 18, 14, 18, 28, 8, 13, 24, 24, 8, 21, 19, 28, 19, 13, 15, 27, 29, 22, 22, 30};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 4096;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> knob1 = {3, 33, 15, 27, 5, 13, 2, 18, 11, 22, 12, 9, 29, 21, 34, 16, 23, 24, 31, 19, 10, 17, 6, 7, 28, 20, 14, 26, 32, 8, 25, 4, 30};
    vector<int> knob2 = {18, 12, 26, 33, 6, 2, 5, 1, 12, 3, 18, 11, 33, 17, 31, 22, 27, 29, 32, 25, 27, 3, 1, 26, 2, 11, 25, 32, 6, 31, 5, 22, 17};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 4096;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> knob1 = {3, 15, 33, 31, 14, 11, 5, 12, 7, 19, 6, 35, 26, 21, 34, 8, 24, 25, 16, 32, 2, 27, 10, 4, 20, 28, 22, 17, 13, 9, 23, 18, 29, 1};
    vector<int> knob2 = {18, 1, 30, 4, 7, 9, 14, 18, 21, 33, 21, 32, 14, 30, 8, 33, 34, 17, 32, 27, 1, 19, 17, 7, 29, 29, 9, 8, 4, 19, 34, 6, 6, 27};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 16384;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> knob1 = {13, 1, 24, 19, 36, 35, 9, 34, 8, 2, 11, 21, 23, 26, 28, 12, 33, 22, 32, 17, 5, 14, 27, 7, 15, 18, 20, 10, 4, 31, 29, 16, 6, 25, 30};
    vector<int> knob2 = {6, 3, 13, 35, 6, 3, 16, 32, 2, 35, 14, 14, 36, 1, 2, 8, 28, 30, 30, 36, 13, 26, 25, 16, 31, 1, 31, 8, 28, 26, 25, 19, 18, 19, 18};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 8192;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> knob1 = {29, 7, 19, 5, 20, 25, 1, 23, 12, 8, 21, 34, 9, 30, 33, 26, 11, 31, 37, 36, 24, 4, 10, 17, 22, 18, 13, 35, 16, 2, 15, 28, 27, 14, 3, 6};
    vector<int> knob2 = {12, 27, 26, 17, 19, 30, 35, 22, 6, 3, 19, 1, 33, 12, 1, 15, 29, 33, 6, 27, 22, 2, 30, 37, 37, 8, 8, 15, 17, 3, 32, 29, 26, 2, 35, 32};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 16384;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> knob1 = {23, 21, 9, 36, 30, 10, 16, 1, 2, 28, 14, 19, 37, 12, 13, 6, 15, 7, 4, 35, 33, 17, 34, 29, 8, 26, 5, 25, 31, 22, 27, 3, 38, 24, 32, 20, 11};
    vector<int> knob2 = {24, 32, 22, 27, 9, 28, 38, 11, 10, 37, 6, 29, 18, 18, 9, 25, 28, 17, 32, 15, 10, 25, 11, 1, 17, 6, 24, 12, 38, 37, 34, 15, 22, 1, 34, 29, 12};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 16384;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> knob1 = {11, 26, 31, 5, 29, 28, 22, 10, 1, 7, 18, 33, 14, 3, 2, 34, 30, 27, 16, 37, 24, 36, 8, 15, 39, 35, 13, 21, 20, 12, 38, 6, 32, 25, 17, 19, 23, 4};
    vector<int> knob2 = {9, 28, 5, 14, 38, 9, 12, 4, 39, 4, 31, 2, 11, 8, 16, 2, 38, 21, 28, 21, 14, 19, 26, 8, 24, 19, 23, 24, 31, 26, 32, 23, 11, 12, 39, 5, 32, 16};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 131072;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> knob1 = {37, 4, 28, 13, 3, 2, 16, 32, 19, 31, 33, 36, 35, 38, 39, 27, 12, 25, 5, 40, 11, 34, 24, 17, 8, 9, 30, 6, 20, 15, 26, 1, 14, 23, 29, 10, 18, 22, 7};
    vector<int> knob2 = {1, 19, 29, 21, 35, 19, 18, 11, 15, 39, 14, 39, 13, 31, 21, 9, 31, 38, 29, 6, 15, 3, 34, 1, 33, 33, 38, 36, 11, 35, 12, 3, 13, 12, 36, 18, 14, 6, 34};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 32768;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> knob1 = {8, 36, 18, 14, 34, 39, 12, 4, 28, 25, 11, 2, 10, 41, 15, 40, 31, 26, 17, 9, 21, 38, 29, 3, 16, 30, 19, 35, 1, 37, 7, 5, 23, 33, 24, 20, 13, 22, 6, 27};
    vector<int> knob2 = {16, 19, 26, 18, 5, 8, 9, 36, 40, 11, 32, 6, 40, 14, 41, 25, 39, 32, 6, 11, 14, 29, 25, 19, 26, 39, 16, 7, 5, 7, 8, 18, 12, 12, 3, 36, 29, 3, 9, 41};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 65536;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> knob1 = {15, 36, 42, 12, 30, 25, 31, 37, 14, 4, 26, 6, 5, 34, 3, 17, 11, 1, 40, 22, 2, 41, 28, 38, 19, 18, 8, 35, 32, 27, 33, 20, 10, 39, 9, 16, 29, 24, 23, 13, 21};
    vector<int> knob2 = {21, 11, 29, 13, 40, 22, 35, 22, 4, 7, 41, 1, 6, 28, 10, 15, 40, 21, 15, 13, 30, 1, 14, 17, 12, 6, 26, 14, 38, 35, 28, 26, 41, 30, 12, 11, 17, 29, 38, 4, 7};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 65536;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> knob1 = {1, 14, 42, 11, 21, 24, 3, 39, 32, 35, 9, 30, 18, 8, 34, 33, 5, 23, 12, 37, 31, 26, 7, 36, 15, 19, 10, 25, 16, 13, 27, 38, 22, 29, 43, 40, 2, 4, 6, 41, 17, 20};
    vector<int> knob2 = {17, 7, 28, 26, 20, 20, 4, 42, 35, 12, 26, 35, 23, 21, 21, 23, 42, 5, 17, 13, 39, 37, 5, 1, 31, 22, 24, 29, 7, 6, 22, 1, 12, 37, 24, 4, 29, 39, 28, 31, 6, 13};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 262144;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> knob1 = {44, 16, 42, 13, 27, 38, 10, 40, 41, 12, 8, 11, 34, 32, 7, 21, 3, 18, 23, 2, 1, 25, 6, 5, 30, 43, 24, 19, 17, 14, 31, 35, 9, 4, 33, 28, 29, 20, 22, 36, 15, 39, 26};
    vector<int> knob2 = {19, 28, 43, 11, 19, 24, 18, 30, 37, 20, 4, 37, 16, 16, 43, 24, 25, 27, 14, 44, 4, 27, 44, 21, 39, 22, 13, 11, 20, 22, 38, 21, 18, 39, 38, 41, 14, 28, 13, 30, 2, 41, 25};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 131072;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> knob1 = {40, 20, 16, 6, 37, 41, 15, 45, 13, 21, 18, 1, 17, 3, 34, 28, 36, 43, 35, 24, 12, 29, 19, 25, 9, 8, 30, 23, 11, 31, 10, 26, 42, 44, 7, 2, 4, 14, 32, 5, 39, 22, 27, 33};
    vector<int> knob2 = {22, 13, 3, 28, 10, 8, 8, 24, 36, 4, 20, 26, 24, 27, 29, 39, 38, 31, 10, 14, 35, 13, 4, 31, 23, 39, 28, 38, 29, 14, 23, 37, 33, 33, 20, 26, 35, 9, 22, 3, 36, 37, 9, 27};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 262144;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> knob1 = {30, 26, 1, 35, 17, 18, 33, 41, 20, 19, 25, 27, 15, 14, 13, 32, 16, 6, 8, 21, 46, 9, 4, 11, 22, 23, 29, 10, 24, 7, 38, 39, 36, 31, 45, 43, 42, 2, 34, 3, 44, 40, 5, 12, 28};
    vector<int> knob2 = {45, 9, 24, 17, 22, 21, 31, 4, 37, 4, 15, 10, 45, 16, 30, 37, 24, 1, 33, 22, 32, 5, 10, 8, 20, 1, 15, 46, 31, 33, 30, 16, 27, 32, 20, 21, 7, 8, 27, 7, 9, 5, 46, 40, 17};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 262144;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> knob1 = {35, 11, 47, 36, 4, 18, 43, 22, 2, 27, 14, 30, 12, 7, 41, 40, 45, 6, 25, 33, 5, 17, 29, 24, 37, 3, 19, 26, 39, 16, 44, 31, 46, 21, 13, 32, 23, 15, 38, 8, 28, 9, 20, 10, 42, 1};
    vector<int> knob2 = {24, 10, 46, 17, 21, 34, 15, 18, 38, 46, 43, 29, 40, 21, 8, 5, 24, 36, 29, 13, 37, 22, 15, 2, 18, 8, 5, 27, 19, 22, 43, 19, 38, 17, 2, 27, 36, 37, 34, 16, 47, 10, 13, 16, 47, 40};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 4194304;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> knob1 = {27, 39, 38, 20, 37, 1, 42, 5, 32, 25, 46, 43, 23, 15, 2, 24, 14, 7, 35, 36, 8, 31, 4, 13, 22, 26, 3, 34, 12, 6, 40, 17, 29, 30, 28, 18, 9, 11, 10, 45, 19, 16, 44, 48, 21, 41, 33};
    vector<int> knob2 = {24, 11, 28, 43, 21, 3, 26, 42, 48, 39, 47, 46, 30, 20, 33, 3, 18, 37, 10, 17, 30, 28, 48, 24, 1, 41, 46, 10, 33, 20, 37, 29, 47, 11, 36, 21, 39, 41, 43, 1, 42, 6, 18, 26, 17, 29, 36};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 524288;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> knob1 = {15, 45, 24, 32, 29, 30, 27, 25, 21, 8, 16, 22, 31, 13, 4, 41, 12, 36, 35, 3, 44, 14, 20, 17, 28, 2, 46, 40, 43, 10, 5, 39, 9, 1, 33, 19, 37, 42, 47, 26, 23, 18, 48, 6, 7, 38, 49, 11};
    vector<int> knob2 = {32, 4, 10, 25, 42, 31, 30, 40, 16, 47, 17, 14, 34, 32, 31, 38, 47, 27, 34, 45, 16, 20, 18, 40, 46, 41, 38, 35, 1, 20, 11, 41, 14, 30, 19, 1, 10, 25, 4, 42, 11, 35, 45, 27, 46, 18, 19, 17};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> knob1 = {21, 45, 9, 43, 37, 26, 46, 34, 39, 22, 29, 25, 48, 3, 40, 36, 13, 4, 16, 11, 7, 23, 32, 20, 2, 44, 33, 24, 12, 35, 19, 27, 1, 42, 47, 38, 31, 50, 30, 14, 5, 49, 8, 41, 6, 18, 10, 28, 17};
    vector<int> knob2 = {1, 14, 11, 12, 25, 21, 12, 2, 46, 45, 45, 14, 35, 49, 15, 35, 38, 43, 46, 8, 40, 15, 23, 28, 8, 25, 28, 34, 32, 17, 10, 11, 42, 23, 50, 7, 38, 7, 50, 32, 10, 17, 40, 49, 21, 43, 1, 2, 42};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> knob1 = {51, 49, 19, 25, 32, 9, 21, 31, 16, 34, 15, 14, 44, 43, 1, 48, 2, 35, 42, 12, 22, 29, 45, 4, 28, 3, 33, 24, 8, 50, 47, 7, 20, 6, 18, 39, 46, 38, 26, 40, 17, 5, 37, 27, 23, 13, 10, 41, 30, 11};
    vector<int> knob2 = {20, 35, 23, 17, 36, 46, 7, 24, 8, 13, 3, 34, 23, 46, 51, 25, 35, 21, 30, 43, 38, 30, 8, 21, 9, 22, 48, 51, 22, 24, 34, 32, 17, 48, 9, 1, 38, 32, 3, 20, 36, 40, 4, 1, 25, 7, 4, 40, 13, 43};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 4194304;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> knob1 = {5, 7, 1, 5, 2, 8, 6};
    vector<int> knob2 = {8, 8, 4, 3, 5, 4, 4};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> knob1 = {1, 3, 4};
    vector<int> knob2 = {3, 2, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> knob1 = {7, 5, 5, 7, 4, 5, 6, 2, 2};
    vector<int> knob2 = {3, 2, 3, 8, 1, 1, 1, 10, 9};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> knob1 = {34, 46, 42, 29, 13, 51, 8, 30, 33, 49, 1, 26, 16, 44, 45, 26, 22, 6, 20, 18, 33, 2, 48, 31, 46, 18, 32, 5, 16, 13, 38, 27, 38, 1, 4, 26, 51, 25, 28, 46, 4, 29, 5, 23, 11, 3, 9, 22, 29, 29};
    vector<int> knob2 = {7, 10, 12, 14, 15, 17, 19, 8, 21, 24, 30, 34, 35, 36, 37, 39, 40, 41, 6, 20, 42, 33, 2, 43, 31, 44, 18, 32, 45, 16, 13, 47, 27, 38, 1, 48, 26, 49, 25, 28, 46, 4, 50, 5, 23, 11, 3, 9, 22, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> knob1 = {40, 20, 2, 13, 14, 43, 44, 14, 51, 41, 12, 23, 3, 37, 47, 31, 18, 15, 18, 4, 45, 32, 40, 37, 7, 40, 31, 35, 38, 24, 2, 23, 26, 16, 26, 27, 19, 4, 32, 34, 18, 34, 6, 39, 33, 29, 19, 35, 46, 46};
    vector<int> knob2 = {1, 5, 8, 9, 10, 11, 13, 17, 14, 20, 21, 12, 22, 3, 25, 28, 30, 36, 15, 41, 42, 43, 44, 45, 37, 7, 40, 31, 47, 38, 24, 2, 23, 48, 16, 26, 27, 49, 4, 32, 50, 18, 34, 6, 39, 33, 29, 19, 35, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> knob1 = {4, 9, 25, 43, 14, 20, 42, 32, 13, 34, 29, 22, 5, 16, 20, 9, 21, 17, 49, 26, 43, 29, 3, 36, 1, 17, 3, 43, 24, 21, 36, 39, 44, 44, 9, 17, 38, 17, 40, 14, 5, 25, 15, 19, 41, 48, 26, 47, 42, 42};
    vector<int> knob2 = {2, 4, 6, 7, 8, 10, 11, 12, 18, 13, 23, 27, 22, 28, 16, 20, 30, 31, 32, 33, 34, 35, 29, 37, 45, 1, 46, 3, 43, 24, 21, 36, 39, 49, 44, 9, 50, 38, 17, 40, 14, 5, 25, 15, 19, 41, 48, 26, 47, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> knob1 = {35, 21, 16, 6, 42, 23, 22, 10, 30, 26, 51, 11, 29, 24, 30, 48, 51, 37, 10, 13, 7, 40, 18, 8, 17, 16, 21, 48, 10, 51, 10, 17, 46, 20, 4, 37, 16, 6, 13, 19, 28, 39, 26, 8, 45, 38, 22, 44, 5, 5};
    vector<int> knob2 = {1, 2, 3, 9, 12, 14, 15, 23, 25, 27, 31, 32, 11, 29, 24, 30, 33, 34, 35, 36, 41, 7, 40, 18, 42, 43, 47, 21, 48, 49, 50, 10, 17, 46, 20, 4, 37, 16, 6, 13, 19, 28, 39, 26, 8, 45, 38, 22, 44, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> knob1 = {11, 5, 30, 9, 25, 13, 37, 18, 40, 13, 2, 3, 41, 4, 18, 12, 28, 17, 36, 8, 45, 50, 26, 3, 14, 38, 12, 34, 30, 31, 44, 51, 16, 31, 7, 40, 7, 36, 43, 19, 30, 44, 31, 34, 21, 48, 47, 1, 23, 23};
    vector<int> knob2 = {6, 10, 5, 11, 9, 15, 20, 22, 24, 25, 13, 2, 27, 29, 4, 18, 32, 28, 17, 33, 8, 35, 37, 26, 3, 14, 38, 12, 39, 41, 42, 45, 46, 16, 49, 50, 40, 7, 36, 43, 19, 30, 44, 31, 34, 21, 48, 47, 1, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> knob1 = {28, 42, 22, 48, 21, 6, 19, 42, 49, 25, 27, 37, 51, 38, 29, 35, 32, 3, 26, 39, 20, 45, 40, 19, 10, 5, 48, 51, 16, 18, 47, 29, 11, 24, 4, 33, 28, 36, 47, 17, 41, 31, 34, 18, 27, 46, 32, 35, 50, 50};
    vector<int> knob2 = {1, 2, 7, 8, 9, 12, 6, 13, 14, 15, 21, 22, 23, 25, 30, 37, 38, 42, 3, 26, 39, 20, 43, 40, 19, 10, 5, 44, 45, 16, 48, 49, 29, 11, 24, 4, 33, 28, 36, 47, 17, 41, 31, 34, 18, 27, 46, 32, 35, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> knob1 = {38, 40, 44, 34, 28, 49, 7, 9, 10, 25, 39, 47, 37, 24, 26, 2, 38, 10, 36, 48, 6, 2, 1, 39, 45, 21, 3, 43, 33, 8, 6, 21, 28, 35, 50, 36, 41, 29, 43, 42, 18, 41, 25, 6, 47, 46, 30, 24, 38, 38};
    vector<int> knob2 = {4, 5, 11, 12, 13, 14, 15, 7, 9, 16, 17, 19, 20, 22, 23, 26, 27, 31, 10, 32, 34, 37, 2, 1, 39, 40, 44, 3, 45, 33, 8, 48, 21, 28, 35, 49, 36, 50, 29, 43, 42, 18, 41, 25, 6, 47, 46, 30, 24, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> knob1 = {21, 31, 21, 19, 13, 31, 2, 19, 49, 3, 19, 35, 35, 23, 29, 36, 5, 48, 36, 21, 24, 19, 40, 27, 28, 23, 21, 39, 12, 27, 27, 8, 37, 15, 46, 29, 24, 48, 30, 12, 22, 35, 24, 2, 1, 7, 26, 29, 3, 3};
    vector<int> knob2 = {4, 6, 9, 10, 11, 13, 14, 16, 17, 18, 20, 25, 31, 32, 33, 34, 38, 5, 41, 36, 42, 43, 19, 40, 44, 28, 23, 21, 39, 45, 47, 27, 8, 37, 15, 46, 49, 50, 48, 30, 12, 22, 35, 24, 2, 1, 7, 26, 29, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> knob1 = {2, 24, 21, 33, 40, 49, 13, 19, 24, 22, 22, 30, 25, 36, 5, 15, 1, 40, 10, 39, 43, 25, 21, 9, 5, 50, 1, 8, 18, 15, 5, 14, 28, 10, 5, 21, 32, 24, 43, 36, 14, 46, 7, 32, 14, 16, 12, 44, 29, 29};
    vector<int> knob2 = {3, 2, 4, 6, 11, 17, 20, 13, 19, 23, 26, 22, 27, 30, 31, 33, 34, 35, 37, 38, 39, 40, 25, 41, 9, 42, 45, 1, 8, 18, 15, 47, 48, 28, 10, 5, 21, 49, 24, 43, 36, 50, 46, 7, 32, 14, 16, 12, 44, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> knob1 = {6, 29, 7, 5, 28, 26, 12, 14, 48, 26, 26, 37, 44, 23, 1, 29, 26, 1, 51, 40, 49, 51, 46, 6, 5, 7, 27, 47, 51, 4, 1, 32, 22, 31, 36, 42, 50, 48, 9, 9, 25, 30, 12, 30, 11, 5, 12, 4, 41, 41};
    vector<int> knob2 = {2, 3, 8, 10, 13, 15, 16, 17, 14, 18, 19, 20, 21, 24, 23, 28, 29, 26, 33, 34, 35, 37, 38, 39, 6, 40, 7, 27, 43, 44, 45, 1, 32, 22, 31, 36, 42, 46, 47, 48, 9, 25, 49, 50, 30, 11, 5, 12, 4, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> knob1 = {23, 12, 13, 43, 24, 36, 32, 22, 40, 50, 20, 23, 28, 5, 24, 29, 43, 1, 2, 35, 19, 5, 17, 13, 14, 4, 15, 38, 47, 42, 6, 36, 48, 30, 25, 11, 10, 46, 42, 15, 1, 21, 30, 22, 43, 1, 43, 45, 28, 28};
    vector<int> knob2 = {3, 7, 8, 9, 12, 16, 18, 26, 27, 31, 32, 20, 23, 33, 34, 24, 29, 37, 39, 2, 35, 19, 5, 17, 13, 14, 4, 40, 38, 41, 44, 6, 36, 47, 48, 25, 11, 10, 46, 42, 15, 49, 21, 30, 22, 50, 1, 43, 45, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> knob1 = {39, 22, 20, 14, 45, 23, 33, 30, 7, 45, 47, 36, 13, 22, 47, 10, 18, 38, 34, 24, 8, 31, 6, 1, 36, 33, 4, 27, 26, 9, 37, 19, 26, 27, 18, 47, 41, 22, 39, 45, 9, 46, 7, 43, 23, 11, 15, 9, 12, 12};
    vector<int> knob2 = {2, 3, 5, 16, 14, 17, 20, 21, 25, 28, 29, 30, 32, 13, 35, 40, 10, 42, 38, 34, 24, 8, 31, 6, 1, 36, 33, 4, 44, 48, 49, 37, 19, 26, 27, 18, 47, 41, 22, 39, 45, 50, 46, 7, 43, 23, 11, 15, 9, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> knob1 = {42, 27, 27, 12, 12, 43, 9, 43, 18, 18, 42, 34, 48, 51, 50, 49, 46, 5, 22, 10, 31, 13, 19, 51, 32, 47, 16, 42, 7, 2, 27, 1, 51, 17, 14, 19, 12, 22, 12, 7, 1, 44, 11, 30, 16, 7, 4, 12, 40, 40};
    vector<int> knob2 = {3, 6, 8, 15, 20, 21, 23, 9, 24, 25, 18, 26, 28, 29, 33, 34, 35, 36, 5, 37, 10, 31, 13, 38, 39, 32, 41, 43, 42, 45, 2, 27, 46, 47, 17, 14, 19, 48, 22, 49, 50, 1, 44, 11, 30, 16, 7, 4, 12, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> knob1 = {30, 15, 31, 12, 32, 47, 9, 18, 10, 42, 31, 32, 18, 3, 29, 9, 25, 19, 47, 24, 38, 37, 18, 19, 44, 17, 17, 6, 13, 33, 28, 46, 21, 43, 48, 8, 32, 7, 46, 5, 3, 20, 28, 23, 8, 41, 7, 20, 13, 13};
    vector<int> knob2 = {1, 2, 4, 11, 12, 14, 15, 16, 22, 10, 26, 27, 30, 31, 34, 29, 9, 25, 35, 36, 24, 38, 37, 18, 19, 39, 40, 17, 6, 42, 33, 44, 45, 21, 43, 47, 48, 32, 49, 46, 5, 3, 50, 28, 23, 8, 41, 7, 20, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> knob1 = {19, 14, 27, 35, 32, 22, 46, 24, 48, 10, 51, 32, 22, 4, 25, 27, 17, 6, 42, 6, 32, 13, 22, 30, 47, 32, 23, 9, 46, 42, 23, 47, 23, 1, 14, 25, 16, 11, 15, 11, 17, 7, 39, 12, 34, 51, 35, 49, 49, 49};
    vector<int> knob2 = {2, 3, 5, 8, 18, 19, 20, 21, 24, 26, 10, 28, 29, 31, 4, 33, 27, 36, 37, 38, 6, 40, 13, 22, 30, 41, 32, 43, 9, 44, 42, 45, 46, 23, 1, 14, 25, 16, 47, 15, 11, 17, 7, 39, 12, 34, 48, 35, 50, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> knob1 = {38, 24, 46, 29, 31, 31, 49, 11, 8, 31, 10, 10, 15, 47, 13, 49, 16, 37, 21, 37, 27, 11, 42, 46, 25, 6, 42, 5, 51, 3, 46, 14, 11, 35, 5, 27, 16, 49, 47, 11, 12, 16, 34, 33, 44, 16, 13, 29, 31, 31};
    vector<int> knob2 = {1, 2, 4, 7, 9, 17, 18, 19, 20, 8, 22, 23, 10, 15, 24, 26, 28, 30, 32, 21, 36, 37, 38, 39, 40, 25, 6, 41, 42, 43, 3, 45, 14, 46, 35, 5, 27, 48, 49, 47, 11, 12, 50, 34, 33, 44, 16, 13, 29, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> knob1 = {7, 26, 41, 24, 19, 9, 50, 48, 28, 50, 12, 40, 18, 3, 46, 48, 1, 27, 24, 31, 29, 17, 20, 12, 45, 22, 19, 32, 24, 51, 28, 22, 21, 40, 7, 50, 32, 33, 44, 39, 22, 28, 37, 51, 37, 13, 18, 47, 1, 51};
    vector<int> knob2 = {2, 4, 5, 6, 8, 10, 9, 11, 14, 15, 16, 23, 25, 26, 3, 30, 34, 35, 27, 36, 31, 29, 17, 20, 12, 38, 41, 19, 42, 24, 43, 45, 46, 21, 40, 7, 48, 32, 33, 44, 39, 22, 28, 49, 50, 37, 13, 18, 47, 1};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> knob1 = {24, 6, 44, 2, 7, 27, 35, 22, 42, 29, 3, 17, 48, 10, 33, 28, 28, 48, 35, 34, 27, 15, 13, 28, 21, 13, 18, 45, 10, 9, 24, 23, 33, 22, 50, 39, 24, 32, 15, 41, 44, 5, 35, 43, 16, 36, 43, 35, 1, 51};
    vector<int> knob2 = {4, 8, 6, 11, 2, 7, 12, 14, 19, 20, 25, 3, 17, 26, 29, 30, 31, 37, 38, 40, 34, 27, 42, 46, 28, 21, 13, 18, 45, 10, 9, 47, 23, 33, 22, 48, 39, 24, 32, 15, 41, 44, 5, 49, 50, 16, 36, 43, 35, 1};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> knob1 = {10, 47, 32, 42, 43, 23, 35, 11, 21, 50, 40, 29, 23, 16, 40, 23, 26, 51, 9, 1, 5, 22, 48, 50, 45, 8, 6, 44, 7, 46, 1, 7, 2, 1, 9, 17, 45, 6, 27, 38, 51, 2, 18, 19, 14, 42, 43, 23, 28, 28};
    vector<int> knob2 = {3, 4, 10, 12, 13, 15, 20, 24, 11, 21, 25, 30, 29, 31, 16, 32, 33, 26, 34, 35, 36, 5, 22, 37, 39, 40, 8, 41, 44, 47, 46, 48, 7, 49, 1, 9, 17, 45, 6, 27, 38, 50, 2, 18, 19, 14, 42, 43, 23, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> knob1 = {12, 24, 33, 15, 29, 17, 32, 48, 20, 48, 39, 34, 3, 15, 38, 28, 48, 38, 41, 34, 48, 44, 11, 24, 34, 33, 26, 41, 26, 45, 4, 8, 11, 21, 21, 7, 11, 44, 22, 20, 10, 23, 41, 9, 44, 17, 46, 29, 51, 50};
    vector<int> knob2 = {1, 2, 5, 6, 12, 13, 14, 16, 18, 19, 25, 27, 30, 3, 15, 31, 28, 32, 35, 36, 37, 38, 39, 40, 24, 34, 33, 42, 43, 26, 45, 4, 8, 47, 48, 21, 7, 11, 49, 22, 20, 10, 23, 41, 9, 44, 17, 46, 29, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> knob1 = {9, 1, 24, 7, 36, 21, 30, 23, 12, 6, 11, 37, 34, 2, 10, 26, 27, 14, 31, 38, 35, 22, 3, 13, 28, 4, 29, 17, 39, 8, 32, 25, 5, 33, 15, 16, 19, 18};
    vector<int> knob2 = {20, 9, 9, 24, 20, 1, 7, 36, 24, 21, 20, 23, 7, 30, 36, 21, 26, 10, 30, 37, 31, 27, 34, 22, 27, 11, 3, 3, 6, 11, 6, 23, 34, 39, 28, 29, 5, 25};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> knob1 = {33, 41, 46, 15, 2, 6, 11, 25, 35, 13, 37, 43, 38, 9, 5, 27, 29, 3, 45, 8, 32, 34, 24, 14, 16, 22, 23, 10, 26, 17, 12, 21, 18, 39, 4, 28, 31, 44, 40, 30, 20, 1, 19, 42, 36};
    vector<int> knob2 = {7, 7, 33, 7, 33, 41, 46, 11, 11, 35, 6, 15, 13, 15, 41, 43, 13, 46, 25, 37, 5, 29, 27, 27, 8, 32, 32, 34, 10, 45, 26, 12, 24, 17, 45, 22, 29, 5, 39, 2, 12, 17, 31, 39, 37};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> knob1 = {1, 2, 16, 6, 9, 15, 5, 8, 7, 17, 19, 10, 18, 4, 13, 12, 11, 14};
    vector<int> knob2 = {3, 1, 2, 3, 3, 6, 15, 5, 8, 7, 16, 5, 8, 15, 4, 19, 16, 4};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> knob1 = {23, 17, 21, 22, 25, 6, 10, 12, 3, 16, 14, 9, 4, 15, 7, 24, 20, 1, 11, 18, 19, 8, 2, 5};
    vector<int> knob2 = {13, 13, 17, 21, 23, 21, 6, 17, 23, 12, 25, 22, 13, 6, 9, 3, 15, 25, 24, 9, 22, 19, 15, 16};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> knob1 = {7, 5, 6, 8, 4, 11, 3, 10, 9, 2};
    vector<int> knob2 = {1, 7, 5, 5, 1, 7, 4, 11, 8, 10};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> knob1 = {32, 35, 37, 21, 24, 31, 1, 4, 8, 10, 5, 34, 6, 28, 20, 18, 33, 26, 11, 29, 19, 2, 27, 39, 22, 25, 16, 14, 23, 9, 38, 3, 36, 30, 17, 7, 12, 40, 13};
    vector<int> knob2 = {15, 15, 35, 32, 15, 35, 21, 1, 31, 31, 4, 21, 34, 10, 8, 32, 8, 6, 10, 37, 18, 6, 24, 20, 24, 37, 11, 18, 16, 20, 14, 14, 2, 5, 29, 17, 38, 23, 9};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> knob1 = {5, 8, 2, 1, 7, 4, 6};
    vector<int> knob2 = {3, 5, 3, 5, 2, 7, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> knob1 = {4, 5, 2, 1};
    vector<int> knob2 = {3, 3, 5, 5};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> knob1 = {8, 10, 26, 22, 17, 30, 3, 24, 32, 27, 20, 23, 25, 11, 7, 19, 15, 18, 2, 21, 28, 29, 9, 1, 5, 14, 6, 4, 12, 16, 13};
    vector<int> knob2 = {31, 8, 31, 10, 31, 26, 30, 10, 22, 17, 8, 26, 27, 27, 30, 17, 19, 20, 15, 23, 32, 20, 11, 28, 21, 32, 23, 1, 24, 3, 24};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> knob1 = {2, 3};
    vector<int> knob2 = {1, 2};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> knob1 = {17, 16, 9, 47, 32, 5, 7, 28, 46, 40, 3, 34, 14, 33, 26, 43, 1, 44, 25, 13, 15, 45, 23, 21, 19, 27, 29, 51, 22, 11, 10, 20, 4, 12, 18, 48, 49, 2, 31, 8, 50, 30, 42, 24, 38, 37, 36, 35, 39, 41};
    vector<int> knob2 = {6, 17, 16, 16, 6, 9, 32, 17, 6, 28, 32, 28, 3, 47, 47, 14, 7, 33, 3, 1, 9, 33, 45, 23, 25, 13, 45, 26, 14, 34, 7, 11, 20, 51, 19, 23, 11, 44, 19, 18, 12, 51, 26, 42, 48, 44, 50, 37, 36, 2};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> knob1 = {20, 19, 6, 17, 18, 3, 8, 4, 5, 2, 1, 7, 10, 16, 15, 11, 13, 9, 12};
    vector<int> knob2 = {14, 14, 14, 6, 19, 19, 17, 3, 17, 20, 18, 3, 8, 2, 7, 10, 8, 11, 13};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> knob1 = {5, 4, 6, 7, 3, 1};
    vector<int> knob2 = {2, 2, 4, 4, 5, 6};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> knob1 = {31, 28, 4, 3, 26, 6, 21, 19, 23, 12, 17, 46, 45, 35, 1, 42, 30, 29, 13, 9, 5, 25, 34, 38, 43, 22, 7, 14, 39, 20, 40, 41, 36, 32, 24, 8, 18, 15, 37, 33, 16, 27, 2, 10, 44};
    vector<int> knob2 = {11, 11, 11, 28, 28, 4, 3, 6, 31, 26, 31, 12, 12, 3, 21, 23, 17, 6, 45, 35, 42, 26, 23, 5, 46, 29, 34, 19, 4, 25, 29, 42, 25, 43, 19, 46, 7, 13, 1, 32, 37, 40, 20, 5, 40};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> knob1 = {16, 21, 9, 1, 22, 18, 15, 20, 8, 5, 7, 4, 23, 12, 19, 2, 14, 6, 13, 3, 11, 17};
    vector<int> knob2 = {10, 16, 16, 10, 10, 21, 9, 18, 15, 15, 9, 8, 1, 8, 23, 12, 22, 22, 12, 2, 19, 21};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> knob1 = {3, 14, 17, 7, 12, 11, 24, 23, 1, 20, 8, 16, 2, 19, 9, 15, 22, 18, 10, 13, 21, 5, 4};
    vector<int> knob2 = {6, 6, 6, 3, 14, 12, 11, 11, 3, 17, 24, 7, 24, 8, 1, 7, 9, 20, 16, 10, 15, 17, 21};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> knob1 = {3, 25, 12, 10, 27, 14, 24, 6, 16, 23, 19, 8, 4, 29, 7, 28, 11, 5, 17, 15, 22, 18, 21, 20, 9, 26, 2, 1};
    vector<int> knob2 = {13, 3, 3, 12, 25, 10, 27, 24, 27, 12, 10, 25, 23, 14, 23, 8, 7, 29, 29, 5, 6, 14, 28, 8, 20, 15, 15, 4};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> knob1 = {9, 3, 5, 21, 12, 11, 1, 26, 24, 14, 15, 13, 8, 16, 7, 6, 19, 17, 27, 2, 20, 4, 18, 22, 23, 25};
    vector<int> knob2 = {10, 10, 3, 3, 10, 12, 9, 5, 12, 21, 21, 26, 13, 9, 26, 15, 1, 14, 24, 5, 19, 8, 6, 24, 20, 20};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> knob1 = {8, 16, 22, 13, 28, 1, 19, 29, 24, 25, 31, 11, 32, 35, 6, 5, 15, 27, 34, 4, 14, 33, 20, 21, 30, 10, 3, 2, 18, 7, 23, 12, 17, 9};
    vector<int> knob2 = {26, 26, 8, 8, 26, 28, 16, 22, 28, 29, 25, 31, 29, 19, 24, 32, 16, 6, 15, 32, 25, 1, 34, 4, 24, 14, 19, 15, 10, 27, 4, 7, 5, 6};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> knob1 = {8, 13, 18, 12, 2, 16, 9, 3, 5, 17, 7, 10, 4, 6, 19, 1, 15, 11};
    vector<int> knob2 = {14, 14, 14, 18, 12, 12, 13, 16, 2, 5, 17, 16, 9, 5, 3, 3, 13, 4};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> knob1 = {18, 39, 44, 19, 8, 42, 43, 40, 15, 16, 49, 23, 12, 28, 38, 21, 29, 9, 36, 10, 27, 1, 6, 31, 35, 25, 17, 13, 11, 24, 41, 37, 34, 48, 47, 20, 45, 30, 26, 32, 7, 5, 4, 33, 14, 46, 2, 22};
    vector<int> knob2 = {3, 3, 3, 39, 19, 8, 18, 44, 18, 8, 15, 39, 49, 49, 23, 15, 12, 40, 23, 29, 38, 19, 16, 12, 44, 16, 9, 21, 38, 1, 6, 25, 42, 24, 34, 21, 1, 47, 41, 42, 20, 9, 10, 11, 34, 48, 48, 13};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> knob1 = {21, 22, 24, 16, 12, 20, 9, 5, 1, 11, 23, 19, 3, 25, 13, 14, 2, 6, 17, 8, 18, 15, 4, 7};
    vector<int> knob2 = {10, 10, 10, 21, 16, 24, 21, 22, 5, 20, 11, 1, 22, 19, 12, 25, 19, 13, 2, 17, 1, 5, 11, 4};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> knob1 = {10, 7, 13, 23, 19, 1, 4, 2, 11, 21, 25, 9, 5, 14, 17, 3, 24, 6, 16, 8, 12, 18, 15, 22};
    vector<int> knob2 = {20, 20, 7, 20, 10, 19, 7, 23, 4, 13, 2, 25, 11, 23, 14, 19, 21, 4, 13, 9, 17, 10, 14, 9};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> knob1 = {9, 6, 4, 7, 25, 10, 27, 13, 15, 3, 24, 29, 12, 23, 21, 19, 18, 8, 22, 2, 16, 1, 20, 28, 14, 5, 11, 26, 17};
    vector<int> knob2 = {30, 30, 30, 6, 7, 25, 10, 25, 7, 4, 6, 15, 10, 4, 3, 9, 3, 27, 21, 8, 23, 16, 18, 16, 8, 23, 20, 9, 19};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> knob1 = {15, 8, 21, 4, 22, 5, 20, 7, 16, 18, 13, 1, 6, 14, 9, 2, 10, 19, 17, 12, 11};
    vector<int> knob2 = {3, 15, 15, 3, 4, 8, 21, 8, 20, 3, 4, 22, 18, 21, 16, 18, 5, 6, 5, 9, 19};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> knob1 = {2, 6, 24, 7, 8, 28, 14, 19, 27, 4, 12, 10, 15, 9, 25, 18, 13, 26, 1, 22, 5, 16, 17, 23, 3, 21, 11};
    vector<int> knob2 = {20, 20, 2, 6, 20, 7, 28, 2, 14, 14, 27, 28, 27, 7, 9, 4, 8, 13, 10, 8, 24, 1, 18, 5, 9, 12, 1};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> knob1 = {9, 7, 11, 5, 6, 4, 1, 8, 10, 3};
    vector<int> knob2 = {2, 9, 7, 11, 7, 9, 2, 6, 8, 10};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> knob1 = {1};
    vector<int> knob2 = {2};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> knob1 = {5, 3, 1, 10, 4, 9, 7, 6, 2};
    vector<int> knob2 = {8, 5, 8, 1, 10, 5, 3, 10, 7};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> knob1 = {10, 3, 7, 8, 4, 9, 1, 6, 11, 5};
    vector<int> knob2 = {2, 2, 10, 3, 10, 8, 2, 8, 7, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> knob1 = {14, 11, 4, 18, 7, 10, 2, 3, 8, 5, 6, 16, 15, 1, 9, 17, 13};
    vector<int> knob2 = {12, 14, 14, 11, 18, 12, 11, 10, 18, 2, 5, 8, 3, 4, 2, 1, 9};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> knob1 = {2, 1, 5, 3, 6};
    vector<int> knob2 = {4, 4, 4, 2, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> knob1 = {15, 43, 3, 5, 8, 21, 27, 4, 29, 36, 41, 33, 17, 45, 47, 19, 32, 13, 25, 26, 39, 34, 6, 31, 38, 22, 44, 12, 46, 18, 30, 28, 14, 10, 40, 1, 11, 35, 16, 37, 20, 42, 24, 7, 23, 2};
    vector<int> knob2 = {9, 15, 43, 3, 9, 15, 3, 43, 27, 27, 5, 36, 5, 33, 4, 8, 41, 8, 32, 13, 45, 47, 34, 26, 47, 38, 25, 21, 22, 12, 39, 18, 4, 41, 9, 33, 29, 31, 46, 35, 6, 31, 11, 38, 25, 16};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> knob1 = {1, 7, 5, 2, 8, 6, 4, 3};
    vector<int> knob2 = {9, 1, 9, 1, 7, 5, 5, 7};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> knob1 = {9, 4, 8, 6, 18, 15, 1, 11, 17, 5, 13, 19, 7, 12, 16, 14, 3, 2};
    vector<int> knob2 = {10, 9, 9, 10, 4, 4, 8, 8, 11, 18, 15, 6, 17, 1, 6, 10, 7, 12};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> knob1 = {10, 6, 16, 13, 21, 18, 8, 24, 7, 15, 14, 22, 5, 20, 12, 25, 3, 4, 23, 9, 2, 11, 17, 19};
    vector<int> knob2 = {1, 1, 6, 6, 10, 16, 10, 16, 8, 18, 15, 8, 1, 13, 5, 20, 7, 12, 15, 13, 7, 14, 5, 21};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> knob1 = {13, 1, 11, 4, 7, 3, 9, 14, 2, 16, 10, 15, 8, 5, 12};
    vector<int> knob2 = {6, 13, 6, 13, 1, 11, 7, 9, 4, 9, 1, 10, 14, 4, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> knob1 = {3, 1, 2};
    vector<int> knob2 = {4, 4, 1};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> knob1 = {8, 29, 30, 3, 9, 20, 25, 17, 12, 6, 11, 7, 35, 33, 22, 34, 19, 4, 21, 18, 14, 27, 31, 32, 24, 1, 13, 23, 5, 10, 15, 16, 26, 28};
    vector<int> knob2 = {2, 8, 8, 2, 3, 2, 20, 25, 30, 3, 25, 11, 6, 9, 17, 33, 29, 12, 4, 20, 19, 19, 17, 6, 33, 30, 31, 12, 22, 21, 22, 11, 10, 5};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> knob1 = {11, 42, 2, 43, 21, 14, 32, 39, 25, 31, 34, 19, 8, 38, 9, 27, 6, 33, 26, 13, 37, 10, 36, 12, 1, 7, 23, 35, 41, 24, 18, 5, 29, 4, 16, 44, 17, 3, 22, 30, 28, 40, 20};
    vector<int> knob2 = {15, 15, 15, 11, 11, 42, 21, 32, 39, 2, 31, 39, 21, 43, 42, 8, 9, 8, 14, 33, 31, 6, 25, 27, 26, 2, 38, 26, 43, 38, 6, 14, 25, 13, 9, 33, 18, 44, 35, 37, 18, 23, 10};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> knob1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> knob2 = {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> knob1 = {2, 4, 1};
    vector<int> knob2 = {3, 2, 2};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> knob1 = {3, 4, 1, 5};
    vector<int> knob2 = {2, 2, 3, 4};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> knob1 = {7, 4, 3, 6, 2, 5};
    vector<int> knob2 = {1, 1, 7, 4, 4, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> knob1 = {7, 9, 6, 8, 1, 4, 2, 5};
    vector<int> knob2 = {3, 3, 7, 7, 9, 9, 6, 8};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> knob1 = {6, 5, 11, 7, 2, 3, 10, 9, 4, 8};
    vector<int> knob2 = {1, 1, 6, 6, 5, 11, 11, 7, 7, 2};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> knob1 = {6, 9, 3, 5, 1, 2, 11, 8, 7, 13, 12, 10};
    vector<int> knob2 = {4, 4, 6, 6, 9, 9, 3, 3, 5, 1, 1, 2};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> knob1 = {2, 8, 14, 9, 10, 12, 4, 6, 13, 11, 1, 15, 5, 3};
    vector<int> knob2 = {7, 7, 2, 2, 8, 8, 14, 9, 9, 10, 10, 12, 12, 4};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> knob1 = {3, 6, 7, 8, 14, 13, 16, 4, 11, 9, 15, 12, 5, 2, 10};
    vector<int> knob2 = {1, 1, 3, 3, 6, 6, 7, 7, 8, 14, 14, 13, 13, 16, 16};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> knob1 = {10, 2, 16, 14, 7, 9, 5, 11, 13, 6, 3, 17, 15, 12, 8, 4};
    vector<int> knob2 = {1, 1, 10, 10, 2, 2, 16, 16, 14, 14, 7, 7, 9, 5, 5, 11};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> knob1 = {18, 2, 3, 8, 1, 4, 10, 9, 14, 12, 17, 13, 15, 11, 7, 16, 5};
    vector<int> knob2 = {6, 6, 18, 18, 2, 2, 3, 3, 8, 1, 1, 4, 4, 10, 10, 9, 9};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> knob1 = {2, 8, 18, 1, 16, 5, 15, 4, 17, 19, 10, 3, 14, 6, 11, 7, 13, 9};
    vector<int> knob2 = {12, 12, 2, 2, 8, 8, 18, 18, 1, 1, 16, 5, 5, 15, 15, 4, 4, 17};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> knob1 = {10, 19, 8, 5, 17, 9, 16, 2, 11, 20, 7, 12, 1, 4, 13, 6, 3, 14, 15};
    vector<int> knob2 = {18, 18, 10, 10, 19, 19, 8, 8, 5, 5, 17, 17, 9, 16, 16, 2, 2, 11, 11};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> knob1 = {6, 9, 18, 13, 7, 10, 8, 14, 15, 21, 19, 17, 2, 12, 4, 3, 16, 20, 11, 5};
    vector<int> knob2 = {1, 1, 6, 6, 9, 9, 18, 18, 13, 13, 7, 7, 10, 10, 8, 8, 14, 15, 15, 21};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> knob1 = {8, 19, 14, 5, 22, 11, 24, 9, 23, 6, 4, 13, 2, 1, 16, 15, 20, 10, 12, 18, 3, 17, 21};
    vector<int> knob2 = {7, 7, 8, 8, 19, 19, 14, 14, 5, 5, 22, 22, 11, 11, 24, 24, 9, 9, 23, 6, 6, 4, 4};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> knob1 = {25, 21, 14, 17, 5, 4, 6, 18, 8, 23, 24, 15, 9, 19, 2, 1, 7, 13, 20, 22, 10, 16, 3, 12};
    vector<int> knob2 = {11, 11, 25, 25, 21, 21, 14, 14, 17, 17, 5, 5, 4, 6, 6, 18, 18, 8, 8, 23, 23, 24, 24, 15};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> knob1 = {11, 20, 25, 26, 21, 3, 2, 5, 23, 7, 10, 13, 24, 15, 18, 17, 16, 22, 19, 12, 6, 4, 1, 9, 14};
    vector<int> knob2 = {8, 8, 11, 11, 20, 20, 25, 25, 26, 26, 21, 21, 3, 2, 2, 5, 5, 23, 23, 7, 7, 10, 10, 13, 13};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> knob1 = {11, 10, 25, 24, 26, 27, 15, 16, 7, 6, 12, 9, 5, 1, 21, 19, 4, 13, 18, 3, 20, 8, 22, 23, 14, 17};
    vector<int> knob2 = {2, 2, 11, 11, 10, 10, 25, 25, 24, 24, 26, 26, 27, 27, 15, 15, 16, 16, 7, 6, 6, 12, 12, 9, 9, 5};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> knob1 = {3, 24, 15, 21, 12, 18, 28, 27, 17, 2, 25, 6, 22, 26, 9, 1, 20, 5, 7, 8, 23, 4, 19, 13, 11, 10, 16};
    vector<int> knob2 = {14, 14, 3, 3, 24, 24, 15, 15, 21, 21, 12, 12, 18, 28, 28, 27, 27, 17, 17, 2, 2, 25, 25, 6, 6, 22, 22};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> knob1 = {24, 7, 2, 18, 1, 15, 20, 29, 6, 9, 12, 23, 10, 16, 22, 4, 28, 25, 5, 3, 14, 13, 21, 17, 27, 11, 19, 26};
    vector<int> knob2 = {8, 8, 24, 24, 7, 7, 2, 2, 18, 18, 1, 1, 15, 15, 20, 20, 29, 29, 6, 6, 9, 12, 12, 23, 23, 10, 10, 16};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> knob1 = {25, 28, 31, 8, 11, 6, 12, 10, 13, 9, 3, 24, 26, 21, 16, 5, 1, 7, 30, 18, 29, 19, 27, 15, 22, 14, 4, 20, 2, 23};
    vector<int> knob2 = {17, 17, 25, 25, 28, 28, 31, 31, 8, 8, 11, 11, 6, 6, 12, 12, 10, 10, 13, 13, 9, 9, 3, 3, 24, 24, 26, 26, 21, 16};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> knob1 = {2, 28, 5, 27, 11, 18, 14, 22, 29, 7, 8, 20, 24, 23, 30, 25, 21, 4, 3, 12, 9, 19, 26, 6, 32, 17, 16, 10, 15, 31, 13};
    vector<int> knob2 = {1, 1, 2, 2, 28, 28, 5, 5, 27, 27, 11, 11, 18, 18, 14, 14, 22, 22, 29, 29, 7, 7, 8, 20, 20, 24, 24, 23, 23, 30, 30};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> knob1 = {27, 15, 21, 30, 3, 7, 23, 32, 9, 10, 5, 29, 1, 24, 25, 13, 16, 17, 6, 22, 2, 18, 14, 26, 12, 33, 31, 28, 11, 8, 19, 4};
    vector<int> knob2 = {20, 20, 27, 27, 15, 15, 21, 21, 30, 30, 3, 3, 7, 7, 23, 23, 32, 32, 9, 9, 10, 10, 5, 5, 29, 29, 1, 1, 24, 24, 25, 13};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> knob1 = {15, 2, 26, 12, 5, 9, 14, 13, 4, 11, 18, 6, 28, 21, 23, 30, 19, 22, 8, 34, 7, 29, 20, 1, 27, 3, 24, 33, 17, 16, 31, 32, 10};
    vector<int> knob2 = {25, 25, 15, 15, 2, 2, 26, 26, 12, 12, 5, 5, 9, 9, 14, 14, 13, 13, 4, 11, 11, 18, 18, 6, 6, 28, 28, 21, 21, 23, 23, 30, 30};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> knob1 = {25, 2, 23, 32, 13, 18, 19, 31, 34, 7, 20, 16, 27, 4, 17, 30, 12, 28, 11, 5, 8, 3, 35, 10, 15, 22, 6, 21, 9, 33, 24, 29, 26, 14};
    vector<int> knob2 = {1, 1, 25, 25, 2, 2, 23, 23, 32, 32, 13, 13, 18, 18, 19, 19, 31, 31, 34, 34, 7, 20, 20, 16, 16, 27, 27, 4, 4, 17, 17, 30, 30, 12};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> knob1 = {19, 4, 5, 14, 29, 27, 16, 30, 32, 15, 10, 8, 28, 23, 11, 13, 35, 12, 3, 21, 9, 34, 26, 18, 2, 24, 17, 31, 25, 6, 7, 1, 33, 20, 22};
    vector<int> knob2 = {36, 36, 19, 19, 4, 4, 5, 5, 14, 14, 29, 29, 27, 27, 16, 16, 30, 30, 32, 32, 15, 15, 10, 10, 8, 8, 28, 23, 23, 11, 11, 13, 13, 35, 35};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> knob1 = {11, 22, 34, 1, 7, 21, 36, 13, 5, 10, 30, 35, 37, 24, 14, 28, 27, 32, 29, 17, 6, 18, 26, 15, 25, 9, 3, 33, 2, 20, 16, 23, 12, 19, 4, 31};
    vector<int> knob2 = {8, 8, 11, 11, 22, 22, 34, 34, 1, 1, 7, 7, 21, 21, 36, 36, 13, 13, 5, 10, 10, 30, 30, 35, 35, 37, 37, 24, 24, 14, 14, 28, 28, 27, 27, 32};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> knob1 = {5, 12, 9, 17, 21, 4, 15, 11, 6, 3, 29, 37, 23, 27, 1, 20, 14, 2, 24, 36, 30, 32, 28, 13, 34, 8, 35, 31, 10, 19, 18, 33, 38, 16, 25, 7, 39, 26};
    vector<int> knob2 = {22, 22, 5, 5, 12, 12, 9, 9, 17, 17, 21, 21, 4, 4, 15, 15, 11, 11, 6, 6, 3, 3, 29, 29, 37, 37, 23, 27, 27, 1, 1, 20, 20, 14, 14, 2, 2, 24};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> knob1 = {2, 35, 28, 33, 16, 12, 29, 21, 32, 37, 6, 34, 39, 30, 22, 11, 8, 4, 23, 38, 13, 18, 25, 40, 1, 14, 36, 17, 26, 19, 5, 27, 31, 9, 20, 24, 15, 10, 7};
    vector<int> knob2 = {3, 3, 2, 2, 35, 35, 28, 28, 33, 33, 16, 16, 12, 12, 29, 29, 21, 21, 32, 32, 37, 6, 6, 34, 34, 39, 39, 30, 30, 22, 22, 11, 11, 8, 8, 4, 4, 23, 23};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> knob1 = {11, 12, 1, 8, 9, 27, 38, 24, 25, 31, 14, 29, 35, 7, 19, 28, 34, 10, 21, 30, 15, 36, 33, 32, 5, 39, 20, 3, 6, 22, 2, 18, 13, 23, 26, 16, 4, 41, 37, 40};
    vector<int> knob2 = {17, 17, 11, 11, 12, 12, 1, 1, 8, 8, 9, 9, 27, 27, 38, 38, 24, 24, 25, 25, 31, 31, 14, 14, 29, 29, 35, 35, 7, 19, 19, 28, 28, 34, 34, 10, 10, 21, 21, 30};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> knob1 = {6, 34, 33, 17, 4, 19, 40, 36, 29, 3, 14, 32, 15, 24, 10, 30, 22, 16, 35, 8, 42, 39, 28, 26, 2, 38, 9, 11, 5, 7, 37, 18, 41, 12, 27, 21, 1, 13, 31, 23, 20};
    vector<int> knob2 = {25, 25, 6, 6, 34, 34, 33, 33, 17, 17, 4, 4, 19, 19, 40, 40, 36, 36, 29, 29, 3, 3, 14, 14, 32, 32, 15, 15, 24, 10, 10, 30, 30, 22, 22, 16, 16, 35, 35, 8, 8};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> knob1 = {43, 1, 14, 27, 4, 35, 30, 10, 16, 36, 6, 20, 29, 5, 31, 15, 38, 12, 24, 33, 25, 22, 9, 3, 8, 19, 26, 34, 11, 40, 18, 28, 32, 13, 21, 7, 23, 41, 42, 17, 37, 39};
    vector<int> knob2 = {2, 2, 43, 43, 1, 1, 14, 14, 27, 27, 4, 4, 35, 35, 30, 30, 10, 10, 16, 16, 36, 36, 6, 6, 20, 20, 29, 29, 5, 5, 31, 31, 15, 15, 38, 38, 12, 12, 24, 33, 33, 25};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> knob1 = {20, 28, 24, 10, 17, 11, 34, 22, 12, 36, 38, 31, 29, 6, 42, 19, 2, 5, 40, 41, 13, 1, 37, 39, 23, 14, 9, 30, 15, 25, 16, 32, 4, 27, 3, 21, 33, 26, 35, 8, 44, 43, 7};
    vector<int> knob2 = {18, 18, 20, 20, 28, 28, 24, 24, 10, 10, 17, 17, 11, 11, 34, 34, 22, 22, 12, 12, 36, 36, 38, 38, 31, 31, 29, 29, 6, 6, 42, 42, 19, 19, 2, 2, 5, 5, 40, 40, 41, 13, 13};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> knob1 = {9, 42, 26, 6, 16, 44, 14, 18, 13, 8, 38, 30, 23, 15, 35, 10, 12, 29, 20, 40, 3, 43, 45, 25, 34, 28, 17, 7, 31, 27, 11, 33, 41, 21, 4, 22, 19, 24, 5, 39, 32, 1, 36, 2};
    vector<int> knob2 = {37, 37, 9, 9, 42, 42, 26, 26, 6, 6, 16, 16, 44, 44, 14, 14, 18, 18, 13, 13, 8, 8, 38, 38, 30, 30, 23, 23, 15, 15, 35, 10, 10, 12, 12, 29, 29, 20, 20, 40, 40, 3, 3, 43};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> knob1 = {20, 46, 15, 36, 25, 32, 45, 37, 22, 1, 8, 24, 19, 23, 11, 44, 17, 4, 9, 42, 41, 5, 12, 26, 43, 18, 34, 13, 39, 28, 30, 21, 7, 10, 27, 3, 14, 35, 29, 33, 40, 6, 16, 38, 31};
    vector<int> knob2 = {2, 2, 20, 20, 46, 46, 15, 15, 36, 36, 25, 25, 32, 32, 45, 45, 37, 37, 22, 22, 1, 1, 8, 8, 24, 24, 19, 23, 23, 11, 11, 44, 44, 17, 17, 4, 4, 9, 9, 42, 42, 41, 41, 5, 5};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> knob1 = {44, 8, 22, 29, 1, 18, 38, 36, 11, 33, 31, 7, 10, 15, 25, 39, 2, 21, 13, 6, 35, 43, 16, 14, 20, 45, 30, 23, 47, 5, 32, 42, 28, 4, 9, 34, 3, 46, 37, 40, 41, 24, 26, 17, 19, 12};
    vector<int> knob2 = {27, 27, 44, 44, 8, 8, 22, 22, 29, 29, 1, 1, 18, 18, 38, 38, 36, 36, 11, 11, 33, 33, 31, 31, 7, 7, 10, 10, 15, 15, 25, 25, 39, 39, 2, 2, 21, 21, 13, 6, 6, 35, 35, 43, 43, 16};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> knob1 = {46, 24, 15, 1, 20, 26, 31, 23, 37, 13, 7, 4, 16, 9, 8, 35, 38, 22, 2, 47, 41, 25, 3, 32, 44, 48, 10, 27, 42, 34, 29, 45, 11, 19, 21, 28, 12, 30, 14, 17, 33, 40, 39, 18, 36, 43, 5};
    vector<int> knob2 = {6, 6, 46, 46, 24, 24, 15, 15, 1, 1, 20, 20, 26, 26, 31, 31, 23, 23, 37, 37, 13, 13, 7, 7, 4, 4, 16, 16, 9, 9, 8, 8, 35, 35, 38, 38, 22, 22, 2, 2, 47, 47, 41, 41, 25, 3, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> knob1 = {38, 39, 4, 32, 24, 37, 26, 1, 10, 19, 40, 14, 27, 20, 9, 18, 2, 46, 33, 23, 41, 6, 48, 31, 28, 12, 36, 45, 17, 22, 47, 13, 25, 29, 3, 15, 11, 5, 49, 43, 35, 34, 8, 30, 16, 7, 21, 44};
    vector<int> knob2 = {42, 42, 38, 38, 39, 39, 4, 4, 32, 32, 24, 24, 37, 37, 26, 26, 1, 1, 10, 10, 19, 19, 40, 40, 14, 14, 27, 27, 20, 20, 9, 9, 18, 18, 2, 2, 46, 33, 33, 23, 23, 41, 41, 6, 6, 48, 48, 31};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> knob1 = {8, 2, 3, 18, 17, 34, 6, 46, 14, 9, 49, 22, 28, 45, 12, 23, 25, 33, 20, 50, 37, 1, 47, 36, 42, 40, 32, 27, 38, 24, 31, 41, 30, 19, 16, 44, 5, 48, 21, 29, 7, 35, 39, 4, 11, 43, 15, 26, 10};
    vector<int> knob2 = {13, 13, 8, 8, 2, 2, 3, 3, 18, 18, 17, 17, 34, 34, 6, 6, 46, 46, 14, 14, 9, 9, 49, 49, 22, 22, 28, 28, 45, 45, 12, 23, 23, 25, 25, 33, 33, 20, 20, 50, 50, 37, 37, 1, 1, 47, 47, 36, 36};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> knob1 = {50, 23, 42, 31, 51, 47, 43, 39, 2, 48, 24, 41, 27, 16, 15, 11, 4, 28, 17, 32, 25, 45, 49, 37, 5, 44, 7, 8, 46, 12, 38, 9, 40, 30, 6, 22, 33, 35, 13, 21, 18, 26, 3, 14, 20, 1, 34, 19, 29, 36};
    vector<int> knob2 = {10, 10, 50, 50, 23, 23, 42, 42, 31, 31, 51, 51, 47, 47, 43, 43, 39, 39, 2, 2, 48, 48, 24, 24, 41, 41, 27, 27, 16, 15, 15, 11, 11, 4, 4, 28, 28, 17, 17, 32, 32, 25, 25, 45, 45, 49, 49, 37, 37, 5};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> knob1 = {3, 2, 2, 1, 7, 1};
    vector<int> knob2 = {2, 5, 6, 4, 5, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> knob1 = {3, 2, 2, 1, 7, 1, 8, 1};
    vector<int> knob2 = {2, 5, 6, 4, 5, 3, 1, 9};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> knob1 = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 11, 11, 12};
    vector<int> knob2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> knob1 = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25};
    vector<int> knob2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> knob1 = {1, 1, 2, 2};
    vector<int> knob2 = {2, 3, 4, 5};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> knob1 = {1, 1, 2, 3};
    vector<int> knob2 = {2, 3, 4, 5};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> knob1 = {1, 2, 3};
    vector<int> knob2 = {2, 3, 4};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> knob1 = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6};
    vector<int> knob2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> knob1 = {1, 1};
    vector<int> knob2 = {2, 3};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> knob1 = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    vector<int> knob2 = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> knob1 = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25};
    vector<int> knob2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 4194304;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> knob1 = {1, 1, 2, 2, 3, 3, 4, 4, 6, 6};
    vector<int> knob2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> knob1 = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    vector<int> knob2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> knob1 = {1, 3};
    vector<int> knob2 = {2, 1};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> knob1 = {1, 2, 3, 4};
    vector<int> knob2 = {2, 3, 4, 5};
    HatRack* pObj = new HatRack();
    clock_t start = clock();
    long result = pObj->countWays(knob1, knob2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22877779&rd=15181&pm=12176
********************************************************************************
#include <map>
#include <set>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <vector>
#include <bitset>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
#define li        long long int
#define rep(i,to) for(li i=0;i<((li)(to));++i)
#define pb        push_back
#define sz(v)     ((li)(v).size())
#define bit(n)    (1ll<<(li)(n))
#define all(vec)  (vec).begin(),(vec).end()
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define MP        make_pair
#define F         first
#define S         second
 
 
 
 
class HatRack {
public:
  #define MAX 55
  li N[MAX];
  li n;
  vector<li> E[MAX];
  li dp[MAX][MAX][MAX];
  
  li recur(li pos, li num, li pr = MAX - 1)
  {
    li &res = dp[pos][num][pr];
    if(res != -1) return res;
    
    vector<li> V;
    rep(i, sz(E[num]))if(E[num][i] != pr) V.pb(E[num][i]);
    if(sz(V) != N[pos]){
      res = 0;
    }else{
      res = 0;
      sort(all(V));
      do{
        li t = 1;
        rep(i, sz(V)) t = t * recur(pos * 2 + i, V[i], num);
        res += t;
      }while(next_permutation(all(V)));
    }
//    cout << pos << " " << num << " " << pr << " = " << res << endl;
    
    return res;
  }
    
    
  
  long long countWays(vector <int> knob1, vector <int> knob2){
    n = sz(knob1) + 1;
    rep(i, n - 1){
      li a = knob1[i];
      li b = knob2[i];
      E[a - 1].pb(b - 1);
      E[b - 1].pb(a - 1);
    }
    memset(dp, -1, sizeof(dp));
    memset(N, 0, sizeof(N));
    li rem = n - 1;
    for(li i = 1; i < MAX; i++){
      li t = min(2ll, rem);
      N[i] = t;
      rem -= t;
    }
    cout << "A" << endl;
    
    li res = 0;
    rep(i, n) res += recur(1, i);
    return res;
  }
  
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/