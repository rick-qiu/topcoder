/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3556
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

class Barbecue {
public:
    int eliminate(int n, vector<int> voter, vector<int> excluded);
};

int Barbecue::eliminate(int n, vector<int> voter, vector<int> excluded) {
    int ret;
    return ret;
}


int test0() {
    int n = 3;
    vector<int> voter = {0, 1, 2, 2};
    vector<int> excluded = {2, 2, 0, 1};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
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
    int n = 3;
    vector<int> voter = {0, 2, 2};
    vector<int> excluded = {2, 0, 1};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
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
    vector<int> voter = {0, 1};
    vector<int> excluded = {1, 0};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 20;
    vector<int> voter = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 19, 19, 19};
    vector<int> excluded = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 1, 2, 3};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
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
    int n = 5;
    vector<int> voter = {4, 3, 1, 0};
    vector<int> excluded = {2, 2, 3, 3};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 20;
    vector<int> voter = {8, 5};
    vector<int> excluded = {5, 8};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
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
    int n = 13;
    vector<int> voter = {};
    vector<int> excluded = {};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 2;
    vector<int> voter = {1};
    vector<int> excluded = {0};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 10;
    vector<int> voter = {4, 5, 6, 7, 8, 9, 0, 1, 2};
    vector<int> excluded = {5, 6, 7, 8, 9, 0, 1, 2, 3};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
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
    int n = 7;
    vector<int> voter = {1, 2, 3, 4, 5, 6, 0, 2, 3, 4, 5, 6, 0, 1, 3, 4, 5, 6, 0, 1, 2, 4, 5, 6, 0, 1, 2, 3, 5, 6, 0, 1, 2, 3, 4, 6, 0, 1, 2, 3, 4, 5};
    vector<int> excluded = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
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
    int n = 20;
    vector<int> voter = {9, 3, 3, 13, 5, 10, 6, 7, 4, 3, 13, 7, 8, 11, 0, 6, 6, 5, 12, 8, 0, 11, 9, 5, 5, 3, 5, 6, 6, 1, 0, 2, 7, 4, 4, 3, 7, 4, 11, 13, 4, 13, 4, 9, 3, 12, 0, 0, 10, 11};
    vector<int> excluded = {3, 1, 12, 0, 6, 3, 3, 2, 7, 10, 9, 4, 10, 12, 1, 9, 11, 4, 6, 13, 7, 5, 8, 12, 9, 8, 7, 7, 10, 8, 5, 7, 5, 0, 5, 5, 8, 6, 1, 4, 3, 2, 12, 12, 9, 5, 11, 8, 7, 13};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 20;
    vector<int> voter = {3, 13, 5, 6, 9, 2, 4, 7, 8, 11, 12, 2};
    vector<int> excluded = {2, 11, 15, 7, 19, 12, 14, 17, 18, 13, 2, 1};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
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
    int n = 4;
    vector<int> voter = {0, 3, 3, 2, 3, 1, 1};
    vector<int> excluded = {1, 1, 2, 3, 0, 2, 3};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 2;
    vector<int> voter = {};
    vector<int> excluded = {};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 20;
    vector<int> voter = {5, 6, 7, 8, 11, 12, 13, 14};
    vector<int> excluded = {9, 9, 9, 9, 8, 8, 8, 8};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
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
    int n = 20;
    vector<int> voter = {1, 5, 3, 1, 3, 5, 7, 3, 5, 1, 3, 5, 5, 7, 5, 3, 1, 3, 5, 3, 7, 5, 1, 7, 3, 3, 5, 3, 7, 7, 1, 3};
    vector<int> excluded = {4, 6, 2, 7, 8, 9, 1, 5, 0, 0, 1, 2, 1, 6, 3, 0, 8, 9, 8, 6, 4, 4, 3, 9, 12, 10, 7, 15, 17, 0, 9, 17};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 20;
    vector<int> voter = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 0, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 19};
    vector<int> excluded = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 3;
    vector<int> voter = {2};
    vector<int> excluded = {1};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
    vector<int> voter = {1, 2};
    vector<int> excluded = {2, 1};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 3;
    vector<int> voter = {1, 1};
    vector<int> excluded = {0, 2};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 3;
    vector<int> voter = {1, 2};
    vector<int> excluded = {2, 0};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 3;
    vector<int> voter = {1, 0};
    vector<int> excluded = {2, 2};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
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
    vector<int> voter = {2, 1, 0};
    vector<int> excluded = {0, 2, 1};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 3;
    vector<int> voter = {1, 1, 0};
    vector<int> excluded = {2, 0, 2};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 3;
    vector<int> voter = {0, 0, 1, 2};
    vector<int> excluded = {1, 2, 0, 0};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 3;
    vector<int> voter = {0, 2, 2, 0};
    vector<int> excluded = {1, 0, 1, 2};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 3;
    vector<int> voter = {0, 0, 1, 2};
    vector<int> excluded = {1, 2, 2, 1};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 3;
    vector<int> voter = {2, 2, 1, 0};
    vector<int> excluded = {0, 1, 0, 1};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 3;
    vector<int> voter = {0, 0, 1, 2, 2};
    vector<int> excluded = {1, 2, 0, 0, 1};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 3;
    vector<int> voter = {0, 0, 1, 1, 2, 2};
    vector<int> excluded = {1, 2, 0, 2, 1, 0};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 10;
    vector<int> voter = {1, 1, 1, 1, 1, 1, 1};
    vector<int> excluded = {2, 3, 4, 7, 5, 6, 9};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 17;
    vector<int> voter = {1, 1, 11, 5, 16, 10, 6, 9, 12, 3, 11, 11, 4, 12, 10, 11, 13, 13, 8, 14, 11, 5, 4, 12, 14, 1, 7, 4, 5, 0, 1, 6, 0, 8, 6, 8, 9, 1, 3, 11, 16, 1, 14, 0, 2, 15, 3, 7, 15, 8};
    vector<int> excluded = {15, 5, 0, 11, 2, 1, 13, 5, 10, 14, 3, 13, 5, 2, 8, 7, 8, 3, 5, 9, 1, 1, 13, 7, 15, 12, 8, 12, 7, 12, 16, 8, 1, 2, 3, 16, 11, 11, 1, 14, 9, 14, 7, 10, 1, 14, 9, 6, 4, 9};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 16;
    vector<int> voter = {4, 3, 14, 1, 14, 9, 1, 1, 7, 9, 2, 5, 10, 5, 12, 0, 4, 2, 2, 0, 0, 7, 14, 10, 6, 5, 12, 4, 9, 1, 14, 5, 14, 8, 13, 5, 5, 7, 15, 4, 13, 14, 11, 9, 3, 1, 0, 13, 12, 8};
    vector<int> excluded = {3, 10, 10, 10, 5, 4, 3, 9, 11, 11, 7, 2, 3, 13, 4, 3, 0, 9, 14, 6, 2, 9, 15, 2, 5, 7, 2, 2, 1, 5, 7, 0, 3, 1, 0, 1, 11, 15, 8, 9, 12, 11, 5, 14, 7, 15, 14, 10, 9, 7};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
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
    int n = 20;
    vector<int> voter = {11, 19, 10, 13, 13, 7, 4, 3, 10, 16, 3, 19, 13, 5, 9, 2, 11, 1, 10, 6, 8, 15, 13, 11, 7, 11, 17, 3, 6, 12, 2, 3, 9, 14, 6, 7, 1, 15, 15, 16, 4, 18, 8, 1, 1, 4, 10, 10, 18, 17};
    vector<int> excluded = {19, 7, 8, 3, 0, 5, 9, 1, 15, 10, 16, 11, 9, 13, 18, 15, 14, 10, 9, 2, 14, 18, 10, 8, 2, 15, 8, 8, 13, 6, 19, 0, 13, 18, 5, 15, 12, 9, 11, 12, 15, 14, 10, 4, 19, 8, 5, 0, 3, 2};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 14;
    vector<int> voter = {3, 1, 12, 0, 6, 3, 3, 2, 7, 10, 9, 4, 10, 12, 1, 9, 11, 4, 6, 13, 7, 5, 8, 12, 9, 8, 7, 7, 10, 8, 5, 7, 5, 0, 5, 5, 8, 6, 1, 4, 3, 2, 12, 12, 9, 5, 11, 8, 7, 13};
    vector<int> excluded = {9, 3, 3, 13, 5, 10, 6, 7, 4, 3, 13, 7, 8, 11, 0, 6, 6, 5, 12, 8, 0, 11, 9, 5, 5, 3, 5, 6, 6, 1, 0, 2, 7, 4, 4, 3, 7, 4, 11, 13, 4, 13, 4, 9, 3, 12, 0, 0, 10, 11};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 19;
    vector<int> voter = {2, 10, 11, 3, 9, 7, 6, 12, 16, 6, 3, 11, 9, 1, 16, 6, 1, 8, 9, 0, 8, 1, 0, 3, 10, 14, 5, 8, 11, 7, 0, 14, 15, 13, 8, 15, 1, 14, 3, 17, 12, 15, 1, 7, 11, 12, 7, 3, 6, 13};
    vector<int> excluded = {12, 17, 13, 10, 8, 1, 13, 4, 6, 5, 14, 12, 11, 3, 1, 10, 12, 17, 10, 13, 12, 6, 2, 18, 15, 13, 3, 6, 14, 15, 18, 3, 10, 14, 16, 7, 0, 5, 5, 7, 5, 13, 2, 5, 1, 15, 0, 13, 0, 3};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 15;
    vector<int> voter = {1, 6, 8, 11, 0, 0, 0, 3, 12, 4, 1, 6, 12, 7, 4, 11, 6, 11, 5, 7, 2, 3, 5, 3, 12, 13, 0, 6, 8, 1, 3, 2, 10, 3, 6, 10, 4, 7, 9, 13, 11, 0, 2, 12, 10, 3, 4, 3, 7, 10};
    vector<int> excluded = {0, 1, 4, 9, 12, 7, 8, 6, 8, 6, 13, 0, 7, 1, 3, 2, 2, 1, 4, 11, 6, 8, 3, 0, 5, 4, 3, 9, 2, 3, 13, 5, 1, 12, 11, 7, 9, 9, 3, 9, 13, 13, 10, 6, 11, 9, 10, 10, 12, 13};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
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
    int n = 11;
    vector<int> voter = {3, 6, 5, 10, 7, 10, 5, 2, 9, 0, 4, 3, 9, 1, 4, 1, 8, 2, 0, 6, 5, 8, 4, 1, 10, 0, 2, 1, 6, 10, 8, 9, 9, 4, 4, 7, 7, 8, 5, 5, 9, 8, 7, 6, 9, 6, 1, 3, 2, 9};
    vector<int> excluded = {10, 0, 4, 5, 5, 9, 10, 7, 4, 5, 7, 2, 3, 0, 3, 2, 10, 4, 1, 2, 0, 2, 0, 6, 4, 3, 1, 4, 7, 8, 9, 2, 6, 6, 2, 6, 0, 3, 2, 6, 1, 0, 9, 9, 0, 1, 9, 8, 5, 8};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 8;
    vector<int> voter = {4, 5, 3, 0, 4, 1, 4, 7, 1, 2, 3, 5, 3, 6, 5, 5, 7, 0, 7, 7, 4, 5, 6, 6, 4, 6, 0, 1, 3, 2, 4, 3, 0, 1, 6, 3, 1, 2, 2, 4, 5, 1, 2, 0, 2, 6, 7, 0, 2, 7};
    vector<int> excluded = {2, 3, 0, 5, 5, 3, 6, 0, 0, 4, 1, 1, 7, 7, 6, 0, 5, 3, 6, 4, 1, 7, 4, 3, 0, 0, 4, 7, 5, 6, 7, 2, 2, 2, 5, 4, 4, 5, 0, 3, 4, 6, 1, 1, 3, 1, 2, 7, 7, 1};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 8;
    vector<int> voter = {3, 2, 4, 1, 4, 2, 1, 1, 5, 2, 6, 0, 3, 2, 3, 7, 0, 0, 0, 6, 0, 1, 7, 4, 5, 7, 4, 5, 0, 6, 6, 5, 0, 1, 3, 2, 4, 5, 6, 7, 6, 7, 1, 7, 4, 3, 6, 1, 5, 7};
    vector<int> excluded = {1, 1, 3, 6, 1, 3, 5, 0, 1, 6, 2, 4, 4, 4, 7, 2, 2, 1, 5, 1, 7, 2, 4, 0, 0, 5, 2, 4, 3, 0, 4, 2, 6, 7, 6, 0, 7, 6, 3, 6, 5, 1, 4, 0, 5, 0, 7, 3, 3, 3};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 8;
    vector<int> voter = {1, 1, 3, 2, 2, 3, 7, 3, 3, 5, 4, 0, 5, 0, 1, 4, 6, 5, 4, 2, 2, 1, 7, 4, 3, 6, 0, 5, 1, 6, 7, 6, 3, 0, 7, 0, 5, 4, 1, 0, 4, 2, 1, 7, 2, 0, 3, 2, 7, 6};
    vector<int> excluded = {6, 3, 0, 0, 6, 5, 6, 4, 2, 3, 6, 2, 0, 3, 4, 0, 5, 1, 1, 5, 3, 0, 1, 3, 6, 4, 6, 7, 2, 1, 5, 2, 7, 5, 3, 4, 6, 7, 5, 7, 2, 7, 7, 2, 1, 1, 1, 4, 0, 7};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 18;
    vector<int> voter = {3, 3, 1, 14, 15, 4, 6, 5, 15, 5, 9, 9};
    vector<int> excluded = {1, 11, 11, 10, 14, 2, 2, 8, 10, 3, 6, 10};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 4;
    vector<int> voter = {2, 0, 2, 0, 0, 3, 1};
    vector<int> excluded = {1, 2, 3, 1, 3, 0, 2};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 4;
    vector<int> voter = {1, 0, 1, 2, 1, 2, 2};
    vector<int> excluded = {2, 2, 0, 3, 3, 1, 0};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 4;
    vector<int> voter = {0, 3, 0, 2, 3, 3, 1};
    vector<int> excluded = {2, 2, 3, 3, 0, 1, 3};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 5;
    vector<int> voter = {1, 3, 0, 1, 1, 0, 2};
    vector<int> excluded = {0, 1, 3, 3, 2, 2, 3};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 4;
    vector<int> voter = {3, 2, 1, 2, 0};
    vector<int> excluded = {2, 0, 2, 3, 3};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 4;
    vector<int> voter = {0, 1, 3, 1, 2};
    vector<int> excluded = {3, 2, 2, 3, 0};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 4;
    vector<int> voter = {3, 0, 3, 0, 0};
    vector<int> excluded = {2, 2, 1, 1, 3};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
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
    int n = 5;
    vector<int> voter = {2, 3, 1, 3, 1, 4, 2, 0, 1, 0};
    vector<int> excluded = {1, 4, 3, 2, 4, 0, 3, 2, 0, 4};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 5;
    vector<int> voter = {4, 4, 4, 2, 1, 1, 3, 2, 0, 0};
    vector<int> excluded = {3, 0, 1, 4, 2, 3, 2, 3, 2, 3};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 5;
    vector<int> voter = {};
    vector<int> excluded = {};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 5;
    vector<int> voter = {4, 3, 1, 0};
    vector<int> excluded = {2, 2, 3, 3};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 3;
    vector<int> voter = {1, 2};
    vector<int> excluded = {2, 1};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 3;
    vector<int> voter = {0, 2, 2};
    vector<int> excluded = {2, 0, 1};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 7;
    vector<int> voter = {1, 2, 3, 4, 5, 6, 0, 2, 3, 4, 5, 6, 0, 1, 3, 4, 5, 6, 0, 1, 2, 4, 5, 6, 0, 1, 2, 3, 5, 6, 0, 1, 2, 3, 4, 6, 0, 1, 2, 3, 4, 5};
    vector<int> excluded = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 20;
    vector<int> voter = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 19, 19, 19};
    vector<int> excluded = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 1, 2, 3};
    Barbecue* pObj = new Barbecue();
    clock_t start = clock();
    int result = pObj->eliminate(n, voter, excluded);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=158244&rd=6538&pm=3556
********************************************************************************
#include <algorithm>
#include <iostream>
#include <map>
#include <stack>
#include <string>
#include <vector>
 
using namespace std;
 
class Barbecue
{
public:
 
int eliminate(int n, vector<int> v, vector<int> e)
{
  vector<int> tv;
  vector<int> va;
  int i;
  int r;
 
  for(i=0;i<n;i++) {
    tv.push_back(0);
    va.push_back(0);
  }
 
  for(i=0;i<v.size();i++) {
    tv[ v[i] ]++;
    va[ e[i] ]++;
  }
 
  r=0;
  for(i=1;i<va.size();i++) {
    if(va[i] == va[r])
      if( tv[i] > tv[r] ) r=i;
    if(va[i] > va[r]) r=i;
  }
 
  return r;
}
 
};

********************************************************************************
*******************************************************************************/