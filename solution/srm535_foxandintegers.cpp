/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11575
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

class FoxAndIntegers {
public:
    vector<int> get(int AminusB, int BminusC, int AplusB, int BplusC);
};

vector<int> FoxAndIntegers::get(int AminusB, int BminusC, int AplusB, int BplusC) {
    vector<int> ret;
    return ret;
}


int test0() {
    int AminusB = 1;
    int BminusC = -2;
    int AplusB = 3;
    int BplusC = 4;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int AminusB = 0;
    int BminusC = 0;
    int AplusB = 5;
    int BplusC = 5;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int AminusB = 10;
    int BminusC = -23;
    int AplusB = -10;
    int BplusC = 3;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, -10, 13};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int AminusB = -27;
    int BminusC = 14;
    int AplusB = 13;
    int BplusC = 22;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int AminusB = 30;
    int BminusC = 30;
    int AplusB = 30;
    int BplusC = -30;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 0, -30};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int AminusB = 0;
    int BminusC = 0;
    int AplusB = 0;
    int BplusC = 0;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int AminusB = -1;
    int BminusC = 1;
    int AplusB = 1;
    int BplusC = 1;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int AminusB = -1;
    int BminusC = -1;
    int AplusB = -1;
    int BplusC = 1;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int AminusB = 0;
    int BminusC = -30;
    int AplusB = 0;
    int BplusC = 30;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 30};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int AminusB = -1;
    int BminusC = 2;
    int AplusB = 1;
    int BplusC = 0;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, -1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int AminusB = 0;
    int BminusC = 0;
    int AplusB = -2;
    int BplusC = -2;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int AminusB = 0;
    int BminusC = 0;
    int AplusB = 2;
    int BplusC = 2;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int AminusB = 2;
    int BminusC = -2;
    int AplusB = 0;
    int BplusC = 0;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, -1, 1};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int AminusB = -2;
    int BminusC = 2;
    int AplusB = 0;
    int BplusC = 0;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 1, -1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int AminusB = 0;
    int BminusC = 1;
    int AplusB = 2;
    int BplusC = 1;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int AminusB = -24;
    int BminusC = 13;
    int AplusB = -12;
    int BplusC = -1;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-18, 6, -7};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int AminusB = -21;
    int BminusC = 15;
    int AplusB = -23;
    int BplusC = -17;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-22, -1, -16};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int AminusB = 14;
    int BminusC = 6;
    int AplusB = 10;
    int BplusC = -10;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, -2, -8};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int AminusB = -1;
    int BminusC = -10;
    int AplusB = -11;
    int BplusC = 0;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-6, -5, 5};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int AminusB = -9;
    int BminusC = -6;
    int AplusB = -11;
    int BplusC = 4;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-10, -1, 5};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int AminusB = -21;
    int BminusC = 19;
    int AplusB = 21;
    int BplusC = 23;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 21, 2};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int AminusB = -6;
    int BminusC = -8;
    int AplusB = -12;
    int BplusC = 2;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-9, -3, 5};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int AminusB = 4;
    int BminusC = -24;
    int AplusB = -24;
    int BplusC = -4;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-10, -14, 10};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int AminusB = 0;
    int BminusC = 11;
    int AplusB = -18;
    int BplusC = -29;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-9, -9, -20};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int AminusB = 28;
    int BminusC = 24;
    int AplusB = 24;
    int BplusC = -28;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, -2, -26};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int AminusB = -24;
    int BminusC = -5;
    int AplusB = -4;
    int BplusC = 25;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-14, 10, 15};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int AminusB = -30;
    int BminusC = 14;
    int AplusB = -16;
    int BplusC = 0;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-23, 7, -7};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int AminusB = 5;
    int BminusC = 9;
    int AplusB = 5;
    int BplusC = -9;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 0, -9};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int AminusB = 19;
    int BminusC = 9;
    int AplusB = 7;
    int BplusC = -21;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, -6, -15};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int AminusB = -5;
    int BminusC = -30;
    int AplusB = -19;
    int BplusC = 16;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-12, -7, 23};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int AminusB = 13;
    int BminusC = 10;
    int AplusB = 13;
    int BplusC = -10;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 0, -10};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int AminusB = 25;
    int BminusC = 15;
    int AplusB = 23;
    int BplusC = -17;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, -1, -16};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int AminusB = -26;
    int BminusC = 26;
    int AplusB = 4;
    int BplusC = 4;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-11, 15, -11};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int AminusB = -7;
    int BminusC = -2;
    int AplusB = 15;
    int BplusC = 24;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 11, 13};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int AminusB = -27;
    int BminusC = -16;
    int AplusB = -17;
    int BplusC = 26;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-22, 5, 21};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int AminusB = -7;
    int BminusC = 12;
    int AplusB = -21;
    int BplusC = -26;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-14, -7, -19};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int AminusB = -24;
    int BminusC = 29;
    int AplusB = 28;
    int BplusC = 23;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 26, -3};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int AminusB = 30;
    int BminusC = -30;
    int AplusB = -16;
    int BplusC = -16;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, -23, 7};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int AminusB = -27;
    int BminusC = 23;
    int AplusB = -23;
    int BplusC = -19;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-25, 2, -21};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int AminusB = -14;
    int BminusC = 3;
    int AplusB = 18;
    int BplusC = 29;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 16, 13};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int AminusB = -21;
    int BminusC = -18;
    int AplusB = -15;
    int BplusC = 24;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-18, 3, 21};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int AminusB = 11;
    int BminusC = 0;
    int AplusB = -9;
    int BplusC = -20;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, -10, -10};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int AminusB = 26;
    int BminusC = -19;
    int AplusB = 30;
    int BplusC = 23;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 2, 21};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int AminusB = -18;
    int BminusC = 27;
    int AplusB = 8;
    int BplusC = -1;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-5, 13, -14};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int AminusB = -6;
    int BminusC = 24;
    int AplusB = 22;
    int BplusC = 4;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 14, -10};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int AminusB = -25;
    int BminusC = -30;
    int AplusB = -3;
    int BplusC = -16;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int AminusB = 19;
    int BminusC = 9;
    int AplusB = -15;
    int BplusC = 6;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int AminusB = -10;
    int BminusC = 10;
    int AplusB = 30;
    int BplusC = -11;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int AminusB = 10;
    int BminusC = 18;
    int AplusB = 5;
    int BplusC = -18;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int AminusB = 0;
    int BminusC = -7;
    int AplusB = 22;
    int BplusC = -7;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int AminusB = -27;
    int BminusC = 3;
    int AplusB = 2;
    int BplusC = -12;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int AminusB = -14;
    int BminusC = 27;
    int AplusB = 11;
    int BplusC = -24;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int AminusB = -24;
    int BminusC = 12;
    int AplusB = 9;
    int BplusC = 6;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int AminusB = 20;
    int BminusC = -3;
    int AplusB = 7;
    int BplusC = -22;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int AminusB = 3;
    int BminusC = 5;
    int AplusB = 18;
    int BplusC = -25;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int AminusB = -18;
    int BminusC = 5;
    int AplusB = 1;
    int BplusC = 14;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int AminusB = 29;
    int BminusC = 12;
    int AplusB = 26;
    int BplusC = -11;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int AminusB = -24;
    int BminusC = 27;
    int AplusB = 21;
    int BplusC = -22;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int AminusB = 12;
    int BminusC = 1;
    int AplusB = 1;
    int BplusC = 27;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int AminusB = -8;
    int BminusC = -30;
    int AplusB = -12;
    int BplusC = -27;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int AminusB = -17;
    int BminusC = 6;
    int AplusB = -5;
    int BplusC = 13;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int AminusB = 11;
    int BminusC = -30;
    int AplusB = -17;
    int BplusC = -8;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int AminusB = -12;
    int BminusC = 21;
    int AplusB = -23;
    int BplusC = -9;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int AminusB = 9;
    int BminusC = 18;
    int AplusB = -4;
    int BplusC = 11;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int AminusB = 29;
    int BminusC = 14;
    int AplusB = 14;
    int BplusC = -4;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int AminusB = 1;
    int BminusC = 1;
    int AplusB = 1;
    int BplusC = 1;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int AminusB = 0;
    int BminusC = 1;
    int AplusB = 0;
    int BplusC = 0;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int AminusB = 1;
    int BminusC = -4;
    int AplusB = 3;
    int BplusC = 4;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int AminusB = 0;
    int BminusC = 0;
    int AplusB = 1;
    int BplusC = 2;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int AminusB = 10;
    int BminusC = 23;
    int AplusB = 14;
    int BplusC = 11;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int AminusB = 10;
    int BminusC = 15;
    int AplusB = 6;
    int BplusC = 8;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int AminusB = 1;
    int BminusC = 9;
    int AplusB = 3;
    int BplusC = 10;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int AminusB = 0;
    int BminusC = -3;
    int AplusB = 4;
    int BplusC = 7;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 5};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int AminusB = -1;
    int BminusC = -1;
    int AplusB = 3;
    int BplusC = 7;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int AminusB = 4;
    int BminusC = 0;
    int AplusB = 6;
    int BplusC = 3;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int AminusB = 1;
    int BminusC = 0;
    int AplusB = 5;
    int BplusC = 5;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int AminusB = 1;
    int BminusC = 4;
    int AplusB = 3;
    int BplusC = 7;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int AminusB = 15;
    int BminusC = 14;
    int AplusB = 20;
    int BplusC = -8;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int AminusB = 2;
    int BminusC = 3;
    int AplusB = 4;
    int BplusC = 5;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int AminusB = 2;
    int BminusC = 2;
    int AplusB = 10;
    int BplusC = 8;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int AminusB = 5;
    int BminusC = 2;
    int AplusB = 5;
    int BplusC = 2;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int AminusB = 1;
    int BminusC = 2;
    int AplusB = 3;
    int BplusC = 4;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int AminusB = 30;
    int BminusC = 0;
    int AplusB = 30;
    int BplusC = 0;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 0, 0};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int AminusB = -2;
    int BminusC = -2;
    int AplusB = 6;
    int BplusC = 14;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int AminusB = -2;
    int BminusC = 2;
    int AplusB = 6;
    int BplusC = 8;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int AminusB = 2;
    int BminusC = 2;
    int AplusB = 8;
    int BplusC = 4;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 1};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int AminusB = 2;
    int BminusC = 1;
    int AplusB = 5;
    int BplusC = 1;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int AminusB = -1;
    int BminusC = 0;
    int AplusB = -1;
    int BplusC = 0;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 0, 0};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int AminusB = 4;
    int BminusC = 3;
    int AplusB = 10;
    int BplusC = 1;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int AminusB = 8;
    int BminusC = -1;
    int AplusB = 15;
    int BplusC = 7;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int AminusB = 30;
    int BminusC = -30;
    int AplusB = 30;
    int BplusC = -30;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int AminusB = 5;
    int BminusC = 15;
    int AplusB = 9;
    int BplusC = 3;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int AminusB = 0;
    int BminusC = 1;
    int AplusB = 0;
    int BplusC = 1;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int AminusB = 3;
    int BminusC = 1;
    int AplusB = 6;
    int BplusC = 2;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int AminusB = 5;
    int BminusC = 1;
    int AplusB = 8;
    int BplusC = 3;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int AminusB = 5;
    int BminusC = -2;
    int AplusB = 6;
    int BplusC = 2;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int AminusB = 5;
    int BminusC = 0;
    int AplusB = 2;
    int BplusC = -2;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int AminusB = 8;
    int BminusC = -6;
    int AplusB = 12;
    int BplusC = 9;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int AminusB = 4;
    int BminusC = -4;
    int AplusB = 7;
    int BplusC = 8;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int AminusB = 0;
    int BminusC = 0;
    int AplusB = 5;
    int BplusC = 4;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int AminusB = 9;
    int BminusC = 6;
    int AplusB = 26;
    int BplusC = 10;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int AminusB = 1;
    int BminusC = -2;
    int AplusB = 4;
    int BplusC = 4;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int AminusB = -3;
    int BminusC = -1;
    int AplusB = 1;
    int BplusC = 5;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 2, 3};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int AminusB = -1;
    int BminusC = 2;
    int AplusB = -7;
    int BplusC = -8;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-4, -3, -5};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int AminusB = 0;
    int BminusC = -1;
    int AplusB = 3;
    int BplusC = 5;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int AminusB = 5;
    int BminusC = -5;
    int AplusB = 6;
    int BplusC = 7;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int AminusB = 0;
    int BminusC = 0;
    int AplusB = 10;
    int BplusC = 0;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int AminusB = 4;
    int BminusC = 2;
    int AplusB = 6;
    int BplusC = 4;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int AminusB = 3;
    int BminusC = 3;
    int AplusB = 5;
    int BplusC = 1;
    FoxAndIntegers* pObj = new FoxAndIntegers();
    clock_t start = clock();
    vector<int> result = pObj->get(AminusB, BminusC, AplusB, BplusC);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23022624&rd=15037&pm=11575
********************************************************************************
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<sstream>
#include<stdlib.h>
#define PI acos(-1.0)
using namespace std;
typedef vector<int>  vi;
typedef vector<vector<int> >  vvi;
typedef long long LL;
typedef unsigned long long ULL;
 
 
class FoxAndIntegers{
public:
vector <int> get(int AminusB, int BminusC, int AplusB, int BplusC){
  vector<int> res;
  int a,b,c;
  a=(AminusB+AplusB)/2;
  if((AminusB+AplusB)%2==1)
    return res;
  b=AplusB-a;
  c=BplusC-b;
  if((b-c)!=BminusC)
    return res;
  res.push_back(a);
  res.push_back(b);
  res.push_back(c);
  return res;
  };
};

********************************************************************************
*******************************************************************************/