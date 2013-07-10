/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4481
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

class DivisibilityCriteria {
public:
    vector<int> multipliers(int N, int P);
};

vector<int> DivisibilityCriteria::multipliers(int N, int P) {
    vector<int> ret;
    return ret;
}


int test0() {
    int N = 6;
    int P = 7;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 6, 2, 3, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 7;
    int P = 11;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 10, 1, 10, 1, 10, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 5;
    int P = 13;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 12, 9, 10, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 2;
    int P = 2;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 16;
    int P = 97;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45, 53, 15, 50, 5, 49, 34, 81, 76, 27, 90, 9, 30, 3, 10, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 18;
    int P = 5;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 18;
    int P = 17;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1, 12, 8, 11, 13, 3, 2, 7, 16, 5, 9, 6, 4, 14, 15, 10, 1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 8;
    int P = 3;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 2;
    int P = 19;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 18;
    int P = 2;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 18;
    int P = 31;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 10, 1, 28, 9, 4, 19, 5, 16, 14, 20, 2, 25, 18, 8, 7, 10, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 18;
    int P = 59;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 48, 52, 17, 43, 22, 14, 25, 32, 15, 31, 9, 54, 29, 56, 41, 10, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 18;
    int P = 71;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 15, 37, 25, 38, 18, 16, 30, 3, 50, 5, 36, 32, 60, 6, 29, 10, 1};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 18;
    int P = 83;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {61, 31, 28, 36, 70, 7, 9, 59, 64, 23, 77, 16, 68, 40, 4, 17, 10, 1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 1;
    int P = 83;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 1;
    int P = 89;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 15;
    int P = 41;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37, 16, 18, 10, 1, 37, 16, 18, 10, 1, 37, 16, 18, 10, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 12;
    int P = 23;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 16, 20, 2, 14, 6, 19, 18, 11, 8, 10, 1};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 15;
    int P = 29;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 26, 20, 2, 6, 18, 25, 17, 22, 8, 24, 14, 13, 10, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 10;
    int P = 13;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 9, 10, 1, 4, 3, 12, 9, 10, 1};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 2;
    int P = 5;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 1;
    int P = 5;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 18;
    int P = 47;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 24, 40, 4, 38, 32, 22, 21, 35, 27, 45, 28, 31, 36, 13, 6, 10, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 18;
    int P = 53;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 46, 47, 10, 1, 16, 44, 15, 28, 24, 13, 49, 42, 36, 46, 47, 10, 1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 17;
    int P = 67;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39, 24, 56, 19, 22, 29, 23, 9, 21, 49, 25, 36, 17, 62, 33, 10, 1};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 2;
    int P = 79;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 18;
    int P = 2;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 18;
    int P = 3;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 18;
    int P = 5;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 18;
    int P = 7;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 6, 2, 3, 1, 5, 4, 6, 2, 3, 1, 5, 4, 6, 2, 3, 1};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 18;
    int P = 11;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 18;
    int P = 13;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 12, 9, 10, 1, 4, 3, 12, 9, 10, 1, 4, 3, 12, 9, 10, 1};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 18;
    int P = 17;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1, 12, 8, 11, 13, 3, 2, 7, 16, 5, 9, 6, 4, 14, 15, 10, 1};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 18;
    int P = 19;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8, 16, 13, 7, 14, 9, 18, 17, 15, 11, 3, 6, 12, 5, 10, 1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 18;
    int P = 23;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 4, 5, 12, 15, 13, 22, 16, 20, 2, 14, 6, 19, 18, 11, 8, 10, 1};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 18;
    int P = 29;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 16, 19, 28, 26, 20, 2, 6, 18, 25, 17, 22, 8, 24, 14, 13, 10, 1};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 18;
    int P = 31;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 10, 1, 28, 9, 4, 19, 5, 16, 14, 20, 2, 25, 18, 8, 7, 10, 1};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 18;
    int P = 37;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 10, 1, 26, 10, 1, 26, 10, 1, 26, 10, 1, 26, 10, 1, 26, 10, 1};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 18;
    int P = 41;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 10, 1, 37, 16, 18, 10, 1, 37, 16, 18, 10, 1, 37, 16, 18, 10, 1};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 18;
    int P = 43;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 31, 16, 36, 38, 21, 15, 23, 41, 17, 6, 35, 25, 24, 11, 14, 10, 1};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 18;
    int P = 47;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 24, 40, 4, 38, 32, 22, 21, 35, 27, 45, 28, 31, 36, 13, 6, 10, 1};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 18;
    int P = 53;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 46, 47, 10, 1, 16, 44, 15, 28, 24, 13, 49, 42, 36, 46, 47, 10, 1};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 18;
    int P = 59;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 48, 52, 17, 43, 22, 14, 25, 32, 15, 31, 9, 54, 29, 56, 41, 10, 1};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 18;
    int P = 61;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {59, 12, 50, 5, 31, 58, 18, 14, 38, 16, 26, 27, 21, 57, 24, 39, 10, 1};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 18;
    int P = 67;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {55, 39, 24, 56, 19, 22, 29, 23, 9, 21, 49, 25, 36, 17, 62, 33, 10, 1};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 18;
    int P = 71;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 15, 37, 25, 38, 18, 16, 30, 3, 50, 5, 36, 32, 60, 6, 29, 10, 1};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 18;
    int P = 73;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1, 22, 46, 63, 72, 51, 27, 10, 1, 22, 46, 63, 72, 51, 27, 10, 1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 18;
    int P = 79;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {46, 52, 21, 10, 1, 8, 64, 38, 67, 62, 22, 18, 65, 46, 52, 21, 10, 1};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 18;
    int P = 83;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {61, 31, 28, 36, 70, 7, 9, 59, 64, 23, 77, 16, 68, 40, 4, 17, 10, 1};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 18;
    int P = 89;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47, 67, 69, 87, 71, 16, 55, 50, 5, 45, 49, 85, 53, 32, 21, 11, 10, 1};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 18;
    int P = 97;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 62, 45, 53, 15, 50, 5, 49, 34, 81, 76, 27, 90, 9, 30, 3, 10, 1};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 18;
    int P = 97;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 62, 45, 53, 15, 50, 5, 49, 34, 81, 76, 27, 90, 9, 30, 3, 10, 1};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 6;
    int P = 7;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 6, 2, 3, 1};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 16;
    int P = 97;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45, 53, 15, 50, 5, 49, 34, 81, 76, 27, 90, 9, 30, 3, 10, 1};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 18;
    int P = 7;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 6, 2, 3, 1, 5, 4, 6, 2, 3, 1, 5, 4, 6, 2, 3, 1};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 18;
    int P = 11;
    DivisibilityCriteria* pObj = new DivisibilityCriteria();
    clock_t start = clock();
    vector<int> result = pObj->multipliers(N, P);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13396848&rd=6538&pm=4481
********************************************************************************
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;
 
class DivisibilityCriteria {
  public:
  vector <int> multipliers(int N, int P) {
    vector<int> ret,ret2;
    ret.push_back(1);
    int cislo=1;
    for (int i=1;i<N;i++) {
      cislo*=10;
      cislo%=P;
      ret.push_back(cislo);
    }
    for (int i=N-1;i>=0;i--) {
      ret2.push_back(ret[i]);  
    }
    return ret2;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/