/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7703
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

class RaceOrdering {
public:
    int countOrders(int n, vector<int> first, vector<int> second);
};

int RaceOrdering::countOrders(int n, vector<int> first, vector<int> second) {
    int ret;
    return ret;
}


int test0() {
    int n = 3;
    vector<int> first = {1};
    vector<int> second = {2};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 4;
    vector<int> first = {0, 0};
    vector<int> second = {1, 2};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 10;
    vector<int> first = {1, 2, 3};
    vector<int> second = {2, 3, 1};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
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
    int n = 30;
    vector<int> first = {};
    vector<int> second = {};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 90317;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 2;
    vector<int> first = {0};
    vector<int> second = {1};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 3;
    vector<int> first = {0, 1};
    vector<int> second = {1, 2};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 2;
    vector<int> first = {0, 1};
    vector<int> second = {1, 0};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
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
    int n = 3;
    vector<int> first = {0, 1, 0};
    vector<int> second = {1, 2, 2};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 30;
    vector<int> first = {};
    vector<int> second = {};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 90317;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 30;
    vector<int> first = {0};
    vector<int> second = {9};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 545160;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 1;
    vector<int> first = {};
    vector<int> second = {};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 10;
    vector<int> first = {0, 1, 3, 4, 6, 7, 0, 3, 1, 4, 2, 5};
    vector<int> second = {1, 2, 4, 5, 7, 8, 3, 6, 4, 7, 5, 8};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 420;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 30;
    vector<int> first = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28};
    vector<int> second = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 439976;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 16;
    vector<int> first = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<int> second = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 30;
    vector<int> first = {29, 25, 21, 17, 13, 9, 5, 28, 24, 20, 16, 12, 8, 4, 1};
    vector<int> second = {27, 23, 19, 15, 11, 7, 3, 26, 22, 18, 14, 10, 6, 2, 0};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 439976;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 15;
    vector<int> first = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<int> second = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
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
    int n = 15;
    vector<int> first = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 9};
    vector<int> second = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 4};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 8;
    vector<int> first = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2};
    vector<int> second = {3, 4, 5, 6, 7, 3, 4, 5, 6, 7, 4, 5, 6, 7};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 768;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 17;
    vector<int> first = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7};
    vector<int> second = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 2};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 20144;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 17;
    vector<int> first = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7};
    vector<int> second = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
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
    int n = 27;
    vector<int> first = {0, 0, 3, 3, 6, 6, 9, 9, 12, 12, 15, 15, 18, 18, 20};
    vector<int> second = {1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 17, 19, 20, 24};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 390723;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 30;
    vector<int> first = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> second = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 68145;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 30;
    vector<int> first = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> second = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 68145;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 30;
    vector<int> first = {1, 2, 3, 4, 5, 6, 7, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> second = {0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 0};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 681812;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 6;
    vector<int> first = {0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4};
    vector<int> second = {1, 2, 3, 4, 5, 2, 3, 4, 5, 3, 4, 5, 4, 5, 5};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 15;
    vector<int> first = {0, 9, 2, 1, 0, 2, 1, 9};
    vector<int> second = {1, 4, 5, 6, 1, 5, 6, 4};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 268542;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 30;
    vector<int> first = {22, 4, 17, 1, 27, 24, 10, 10, 4, 20, 10, 22, 0, 0, 17};
    vector<int> second = {1, 24, 3, 15, 20, 18, 20, 5, 15, 1, 24, 0, 5, 4, 15};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 779866;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 29;
    vector<int> first = {17, 24, 13, 13, 13, 27, 18, 24, 21, 27, 17, 11, 27, 24, 18};
    vector<int> second = {7, 18, 18, 10, 11, 10, 10, 27, 23, 10, 10, 23, 23, 10, 11};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 487245;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 10;
    vector<int> first = {5, 9, 5, 2, 8, 2, 9, 9, 2, 9, 8, 5, 9, 2, 5};
    vector<int> second = {3, 2, 3, 3, 5, 3, 5, 5, 5, 2, 3, 3, 5, 3, 3};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 90720;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 30;
    vector<int> first = {24, 10, 11, 14, 9, 7, 17, 10, 11, 2, 11, 14, 11, 5, 4};
    vector<int> second = {22, 12, 0, 18, 0, 18, 8, 28, 28, 0, 26, 24, 8, 18, 12};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 110128;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 28;
    vector<int> first = {20, 8, 24, 10, 21, 2, 10, 17, 24, 24, 8, 15, 24, 17};
    vector<int> second = {7, 2, 0, 20, 16, 16, 24, 24, 25, 16, 14, 16, 2, 13};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 175276;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 30;
    vector<int> first = {0, 4, 15, 15, 10, 26, 7, 29, 28, 17, 9, 7, 8, 8, 4};
    vector<int> second = {5, 0, 27, 21, 0, 17, 24, 9, 29, 12, 5, 12, 24, 13, 7};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 65712;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 30;
    vector<int> first = {0, 4, 15, 15, 10, 26, 7, 29, 28, 17, 9, 7, 8, 8, 4};
    vector<int> second = {5, 0, 27, 21, 0, 17, 24, 9, 29, 12, 5, 12, 24, 13, 7};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 65712;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 30;
    vector<int> first = {0, 0, 1, 25, 2, 3, 0, 0, 2, 5, 6, 7, 7, 9, 10};
    vector<int> second = {1, 1, 25, 4, 3, 4, 3, 2, 25, 6, 9, 6, 8, 10, 11};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 71776;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 30;
    vector<int> first = {0, 0, 3, 3, 6, 6, 9, 9, 12, 12, 15, 15, 18, 18, 21};
    vector<int> second = {1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 17, 19, 20, 22};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 644970;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 30;
    vector<int> first = {1, 2, 3, 3, 4, 5, 1, 3, 12, 14, 16, 12, 18, 18, 22};
    vector<int> second = {2, 3, 4, 5, 6, 6, 6, 5, 13, 15, 17, 17, 19, 6, 1};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 701220;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 30;
    vector<int> first = {20, 7, 1, 6, 15, 6, 29, 4, 10, 19, 20, 17, 10, 0, 28};
    vector<int> second = {6, 17, 4, 14, 16, 19, 7, 17, 6, 17, 4, 14, 4, 19, 7};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 611149;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 30;
    vector<int> first = {0, 20, 20, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<int> second = {20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 15, 16, 17, 18, 19};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 959986;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 30;
    vector<int> first = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 20, 24, 19, 28};
    vector<int> second = {1, 3, 5, 7, 9, 11, 13, 15, 19, 19, 21, 23, 25, 27, 29};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 946647;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 30;
    vector<int> first = {1, 2, 3, 5, 6, 6, 6, 18, 19, 20, 20, 20, 20, 24, 25};
    vector<int> second = {5, 5, 5, 6, 7, 9, 19, 19, 23, 1, 21, 23, 24, 25, 26};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 953931;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 30;
    vector<int> first = {1, 1, 2, 2, 3, 3, 5, 5, 4, 4, 6, 6, 7, 7, 9};
    vector<int> second = {2, 3, 4, 5, 4, 6, 7, 8, 8, 9, 9, 10, 11, 12, 12};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 818649;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 30;
    vector<int> first = {11, 2, 7, 15, 22, 3, 1, 20, 3, 17, 2, 17, 19, 2, 3};
    vector<int> second = {1, 5, 3, 3, 23, 29, 13, 25, 5, 1, 6, 3, 1, 3, 1};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 132019;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 30;
    vector<int> first = {3, 4, 5, 6, 7, 8, 9, 10, 20, 20, 20, 20, 27, 27, 28};
    vector<int> second = {20, 20, 20, 20, 27, 20, 20, 20, 11, 12, 13, 14, 15, 20, 29};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 717966;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 30;
    vector<int> first = {0, 0};
    vector<int> second = {1, 1};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 545160;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 27;
    vector<int> first = {1, 1, 3, 4, 5, 7, 7, 9, 10, 6, 13};
    vector<int> second = {2, 5, 2, 3, 3, 6, 8, 8, 9, 10, 14};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 829866;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 30;
    vector<int> first = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28};
    vector<int> second = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 439976;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 30;
    vector<int> first = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<int> second = {15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 439976;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 12;
    vector<int> first = {0, 0, 0, 3, 3, 8, 9, 5, 6, 10};
    vector<int> second = {1, 2, 3, 2, 4, 5, 5, 7, 7, 11};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 64445;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 30;
    vector<int> first = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> second = {8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 88202;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 30;
    vector<int> first = {0, 0, 4, 4, 8, 8, 12, 12, 16, 16, 20, 20, 24, 24};
    vector<int> second = {1, 2, 5, 6, 9, 10, 13, 14, 17, 18, 21, 22, 25, 26};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 289937;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 30;
    vector<int> first = {11, 12, 13, 14, 15, 16, 17, 21, 22, 23, 24, 25, 26, 27, 28};
    vector<int> second = {10, 10, 10, 10, 10, 10, 10, 20, 20, 20, 20, 20, 20, 20, 20};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 681812;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 30;
    vector<int> first = {0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15};
    vector<int> second = {1, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 36344;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 30;
    vector<int> first = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> second = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 68145;
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
    vector<int> first = {0, 1};
    vector<int> second = {2, 2};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 30;
    vector<int> first = {1, 4, 6, 2, 9, 12, 10};
    vector<int> second = {8, 2, 29, 7, 6, 11, 6};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 170453;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 30;
    vector<int> first = {0, 1, 2, 3, 4, 5, 20, 20, 24, 25};
    vector<int> second = {1, 6, 8, 9, 11, 11, 21, 23, 26, 26};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 853537;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 30;
    vector<int> first = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    vector<int> second = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 439976;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 24;
    vector<int> first = {1, 1, 4, 5, 7, 8, 9};
    vector<int> second = {2, 3, 1, 1, 8, 9, 10};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 581259;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 9;
    vector<int> first = {0, 1, 2, 3, 3, 4, 4, 4};
    vector<int> second = {2, 2, 3, 4, 4, 5, 5, 5};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1008;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 30;
    vector<int> first = {0, 0, 0, 1, 1, 2, 5, 5, 10, 12, 14, 16, 18, 20, 22};
    vector<int> second = {1, 1, 2, 3, 4, 4, 1, 3, 11, 13, 15, 17, 19, 21, 23};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 343893;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 30;
    vector<int> first = {1, 2, 3, 4, 5, 6, 7, 8, 0, 0, 0, 0, 0, 0, 0};
    vector<int> second = {0, 0, 0, 0, 0, 0, 0, 0, 11, 12, 13, 14, 15, 16, 17};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 102575;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 30;
    vector<int> first = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 6, 7, 8, 9, 25};
    vector<int> second = {1, 2, 3, 4, 5, 6, 7, 3, 5, 7, 10, 10, 10, 10, 26};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 734408;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 2;
    vector<int> first = {1};
    vector<int> second = {0};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 30;
    vector<int> first = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> second = {16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 0};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 439976;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 30;
    vector<int> first = {5, 4, 4, 1, 0, 3, 2, 8};
    vector<int> second = {4, 6, 0, 0, 2, 2, 7, 7};
    RaceOrdering* pObj = new RaceOrdering();
    clock_t start = clock();
    int result = pObj->countOrders(n, first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 321131;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7442498&rd=10787&pm=7703
********************************************************************************
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <deque>
#include <cctype>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <numeric>
using namespace std;
 
typedef long long LL;
 
typedef vector <int > VI;
#define REP(i,n) for (int i=0; i<n; ++i)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define FOR(i,p,k) for (int i=p; i<=k; ++i)
#define PB push_back
#define ALL(x) x.begin(),x.end()
#define SIZE(x) (int)x.size()
 
const int N=55;
int kraw[N][N];
VI graf[N];
const int MOD=1000003;
VI spojna;
int vis[N];
 
void dfs(int x){
  vis[x]=1; spojna.PB(x);
  FOREACH(it,graf[x]) if (!vis[*it]) dfs(*it);
}
 
const int K=21;
int t[1<<K];
int krawedzie[K];
 
int licz(){
  int n=SIZE(spojna);
  int ile=1<<n;
  REP(mask,ile) t[mask]=0;
  t[0]=1;
  REP(mask,ile) if (t[mask]){
    REP(i,n) if (!((1<<i)&mask)){
      int ok=1;
      REP(j,n) if (((1<<j)&mask) && kraw[spojna[i]][spojna[j]]){
        ok=0; break;
      }
      int nmask=(mask|(1<<i));
      if (ok) t[nmask]=(t[nmask]+t[mask])%MOD;
    }
  }
  return t[ile-1];
}
 
int nk[N][N];
 
    class RaceOrdering
        { 
        public: 
        int countOrders(int n, vector <int> first, vector <int> second){ 
          REP(i,N) nk[i][0]=1;
          FOR(i,1,N) FOR(j,1,N) nk[i][j]=nk[i-1][j-1]+nk[i-1][j];
          REP(i,SIZE(first)){
            int a=first[i],b=second[i];
            kraw[a][b]=1;
            graf[a].PB(b);
            graf[b].PB(a);
          }
          REP(k,n) REP(i,n) REP(j,n) kraw[i][j]|=(kraw[i][k]&kraw[k][j]);
          int res=1;
          VI rozm;
          REP(i,n) if (!vis[i]){
            spojna.clear();
            dfs(i);
            rozm.PB(SIZE(spojna));
            res=((LL)res*(LL)licz())%MOD;
          }
          int suma=n;
          FOREACH(it,rozm){
            res=((LL)res*nk[suma][*it])%MOD;
            suma-=*it;
          }
          return res;
        } 
        
 
         }; 
 
    
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/