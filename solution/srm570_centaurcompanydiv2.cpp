/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12426
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

class CentaurCompanyDiv2 {
public:
    long count(vector<int> a, vector<int> b);
};

long CentaurCompanyDiv2::count(vector<int> a, vector<int> b) {
    long ret;
    return ret;
}


int test0() {
    vector<int> a = {1};
    vector<int> b = {2};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> a = {2, 2};
    vector<int> b = {1, 3};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> b = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 56;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> b = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842675;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> a = {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51};
    vector<int> b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842675;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> b = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1327;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> a = {2};
    vector<int> b = {1};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {1, 1};
    vector<int> b = {2, 3};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {1, 1, 4};
    vector<int> b = {3, 2, 1};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> a = {1, 4, 1, 5};
    vector<int> b = {4, 3, 2, 4};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> a = {6, 2, 2, 5, 4};
    vector<int> b = {5, 1, 5, 3, 2};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 29;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> a = {3, 7, 5, 3, 3, 5};
    vector<int> b = {2, 1, 7, 4, 7, 6};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 41;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> a = {6, 8, 6, 8, 7, 1, 8};
    vector<int> b = {8, 3, 4, 2, 8, 3, 5};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 82;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> a = {1, 5, 1, 3, 1, 2, 2, 9};
    vector<int> b = {8, 2, 5, 1, 6, 7, 4, 3};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 89;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> a = {10, 7, 2, 5, 6, 2, 4, 9, 7};
    vector<int> b = {8, 10, 10, 4, 1, 6, 2, 2, 3};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 144;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> a = {1, 1, 1, 10, 6, 2, 7, 3, 4, 11};
    vector<int> b = {5, 8, 9, 5, 3, 8, 1, 5, 5, 5};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 336;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> a = {5, 11, 8, 5, 9, 2, 6, 10, 11, 6, 11};
    vector<int> b = {12, 1, 6, 11, 12, 3, 7, 1, 6, 4, 3};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 348;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> a = {6, 6, 12, 4, 10, 8, 1, 3, 7, 9, 13, 6};
    vector<int> b = {1, 8, 2, 6, 4, 5, 11, 10, 8, 10, 10, 12};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 483;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {9, 10, 3, 11, 9, 6, 4, 3, 5, 12, 5, 3, 12};
    vector<int> b = {2, 2, 1, 2, 7, 2, 6, 6, 10, 14, 13, 8, 2};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 823;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> a = {5, 7, 6, 1, 12, 2, 6, 5, 7, 6, 1, 1, 9, 10};
    vector<int> b = {8, 14, 2, 2, 3, 15, 13, 12, 2, 11, 4, 12, 1, 1};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1790;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {10, 3, 15, 15, 10, 4, 13, 11, 4, 16, 14, 14, 8, 2, 14};
    vector<int> b = {4, 8, 8, 1, 6, 5, 3, 10, 8, 9, 7, 9, 12, 9, 11};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1030;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {16, 6, 6, 10, 9, 3, 1, 8, 4, 14, 2, 2, 13, 7, 15, 4};
    vector<int> b = {13, 1, 5, 3, 2, 11, 17, 2, 1, 3, 1, 12, 1, 14, 13, 3};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3832;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {12, 11, 14, 17, 6, 6, 5, 8, 17, 8, 18, 2, 2, 1, 15, 11, 10};
    vector<int> b = {7, 18, 15, 16, 7, 10, 4, 5, 2, 10, 14, 1, 18, 13, 9, 3, 18};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2093;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {11, 15, 13, 6, 1, 19, 15, 15, 7, 6, 12, 17, 16, 5, 15, 17, 12, 17};
    vector<int> b = {12, 18, 14, 1, 9, 3, 10, 14, 2, 12, 8, 12, 19, 17, 2, 2, 19, 4};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 8889;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> a = {1, 8, 5, 12, 19, 11, 14, 13, 5, 17, 2, 8, 18, 2, 18, 19, 16, 13, 8};
    vector<int> b = {13, 13, 1, 4, 9, 12, 13, 18, 7, 19, 5, 11, 10, 20, 16, 6, 15, 3, 6};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 5671;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {12, 2, 17, 12, 18, 19, 13, 16, 3, 2, 12, 5, 7, 12, 5, 14, 19, 11, 13, 9};
    vector<int> b = {11, 14, 15, 1, 7, 8, 20, 12, 6, 8, 18, 6, 10, 4, 12, 1, 21, 17, 12, 11};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 9457;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {12, 20, 20, 3, 16, 21, 6, 9, 14, 22, 2, 7, 1, 2, 4, 4, 14, 8, 15, 5, 21};
    vector<int> b = {18, 11, 16, 4, 4, 4, 18, 10, 13, 17, 21, 16, 18, 19, 9, 22, 16, 2, 21, 4, 6};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 41836;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {2, 8, 16, 16, 1, 7, 15, 23, 13, 13, 12, 18, 9, 3, 18, 5, 1, 8, 7, 3, 3, 2};
    vector<int> b = {15, 21, 19, 1, 2, 10, 22, 4, 6, 16, 17, 20, 3, 23, 8, 2, 12, 9, 14, 11, 14, 14};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 19794;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> a = {6, 5, 12, 1, 9, 14, 19, 22, 12, 17, 19, 17, 21, 13, 23, 2, 23, 11, 9, 5, 17, 11, 8};
    vector<int> b = {17, 18, 20, 19, 17, 23, 15, 7, 23, 11, 11, 18, 24, 12, 3, 23, 16, 23, 4, 10, 21, 22, 2};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 132722;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {7, 5, 20, 15, 21, 5, 10, 6, 13, 9, 14, 19, 17, 15, 5, 5, 3, 11, 15, 1, 3, 5, 13, 3};
    vector<int> b = {18, 25, 22, 2, 23, 7, 8, 5, 24, 24, 22, 3, 2, 21, 22, 4, 12, 7, 8, 6, 21, 15, 7, 16};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 175683;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {18, 13, 18, 8, 4, 12, 20, 5, 21, 9, 26, 3, 19, 2, 2, 15, 24, 16, 19, 1, 8, 21, 8, 18, 5};
    vector<int> b = {1, 25, 3, 14, 5, 26, 16, 11, 6, 26, 4, 17, 7, 26, 10, 16, 8, 18, 23, 23, 22, 8, 18, 4, 25};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 172668;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {7, 22, 11, 1, 27, 16, 23, 5, 17, 21, 9, 24, 20, 2, 3, 10, 14, 27, 5, 3, 25, 26, 7, 11, 8, 24};
    vector<int> b = {20, 5, 17, 17, 23, 3, 25, 21, 20, 19, 21, 22, 19, 10, 15, 14, 18, 20, 14, 17, 13, 24, 12, 6, 20, 4};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 82132;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {9, 5, 19, 22, 16, 28, 17, 2, 6, 12, 25, 8, 9, 14, 15, 19, 8, 17, 26, 20, 22, 26, 27, 12, 20, 17, 13};
    vector<int> b = {15, 27, 7, 24, 17, 2, 11, 11, 11, 1, 2, 21, 19, 6, 6, 23, 4, 10, 9, 6, 18, 18, 17, 3, 4, 12, 18};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 129018;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> a = {11, 20, 18, 7, 11, 10, 22, 10, 27, 6, 19, 24, 14, 28, 19, 20, 27, 10, 28, 28, 17, 29, 26, 25, 7, 20, 4, 19};
    vector<int> b = {24, 2, 8, 5, 20, 27, 19, 11, 21, 26, 9, 13, 12, 6, 14, 16, 14, 8, 23, 11, 16, 13, 1, 27, 10, 15, 29, 3};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 406840;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {29, 16, 12, 20, 15, 15, 24, 28, 23, 24, 13, 10, 15, 6, 15, 11, 11, 18, 2, 11, 4, 25, 12, 24, 16, 2, 14, 17, 18};
    vector<int> b = {24, 30, 10, 3, 22, 13, 11, 26, 21, 7, 27, 16, 14, 4, 17, 14, 5, 11, 12, 8, 3, 27, 6, 9, 15, 19, 23, 28, 1};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 367907;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {24, 31, 11, 16, 8, 19, 3, 1, 15, 2, 31, 9, 19, 16, 17, 30, 11, 5, 22, 3, 28, 16, 10, 17, 18, 29, 14, 5, 8, 9};
    vector<int> b = {21, 1, 27, 9, 6, 11, 28, 4, 11, 18, 22, 23, 21, 12, 25, 20, 28, 14, 15, 29, 13, 7, 15, 12, 9, 26, 20, 15, 21, 14};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 242746;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {11, 6, 25, 24, 10, 18, 5, 10, 23, 22, 13, 31, 28, 10, 16, 28, 1, 3, 25, 19, 12, 29, 22, 27, 10, 22, 18, 2, 24, 30, 16};
    vector<int> b = {24, 9, 7, 21, 22, 16, 28, 32, 7, 24, 15, 22, 16, 14, 9, 20, 10, 9, 10, 3, 18, 14, 15, 18, 4, 8, 17, 18, 26, 24, 25};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 8804538;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {30, 6, 25, 17, 21, 10, 22, 8, 4, 25, 22, 14, 22, 31, 10, 5, 30, 18, 4, 33, 15, 33, 28, 17, 2, 31, 12, 12, 33, 14, 30, 21};
    vector<int> b = {7, 24, 23, 1, 4, 20, 2, 10, 3, 10, 15, 32, 29, 19, 9, 19, 15, 26, 30, 16, 33, 18, 17, 14, 11, 13, 15, 10, 31, 31, 27, 6};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2714414;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {6, 1, 5, 26, 13, 27, 17, 31, 30, 17, 7, 11, 4, 33, 25, 18, 12, 32, 12, 11, 18, 25, 20, 21, 27, 27, 24, 9, 29, 12, 12, 10, 24};
    vector<int> b = {8, 9, 9, 10, 1, 34, 19, 20, 16, 22, 34, 12, 2, 12, 2, 8, 20, 8, 9, 3, 19, 8, 30, 20, 28, 15, 15, 14, 19, 25, 15, 9, 23};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 6349453;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {34, 24, 28, 24, 20, 30, 5, 31, 30, 30, 14, 16, 30, 3, 8, 1, 22, 23, 3, 26, 13, 10, 34, 31, 8, 35, 1, 28, 12, 22, 2, 9, 25, 25};
    vector<int> b = {8, 11, 4, 26, 3, 21, 8, 34, 12, 15, 12, 31, 5, 12, 29, 7, 17, 2, 33, 21, 30, 3, 6, 32, 27, 5, 13, 29, 19, 20, 34, 20, 18, 3};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 6807613;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {24, 13, 35, 30, 13, 6, 28, 19, 11, 11, 13, 12, 7, 36, 11, 11, 13, 14, 8, 14, 15, 28, 34, 11, 25, 11, 31, 22, 21, 15, 25, 9, 32, 25, 12};
    vector<int> b = {6, 15, 11, 24, 2, 18, 13, 1, 33, 4, 27, 5, 25, 20, 8, 24, 16, 26, 23, 12, 19, 3, 15, 22, 9, 25, 12, 17, 2, 29, 31, 10, 30, 15, 20};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 38502686;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {29, 3, 10, 21, 17, 10, 15, 15, 36, 28, 23, 9, 31, 15, 26, 7, 27, 27, 20, 30, 23, 3, 13, 16, 2, 3, 18, 32, 29, 19, 9, 14, 10, 15, 4, 15};
    vector<int> b = {8, 20, 34, 5, 14, 6, 21, 30, 24, 24, 30, 21, 6, 25, 15, 24, 14, 1, 11, 3, 24, 33, 34, 11, 29, 10, 28, 3, 23, 27, 12, 10, 35, 22, 24, 37};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 45351732;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {38, 13, 10, 31, 36, 1, 6, 25, 22, 14, 26, 11, 3, 12, 16, 15, 30, 6, 29, 37, 28, 30, 13, 16, 8, 26, 21, 33, 18, 30, 27, 33, 11, 20, 8, 38, 7};
    vector<int> b = {34, 25, 6, 11, 13, 20, 16, 5, 7, 37, 17, 8, 37, 16, 20, 30, 26, 30, 16, 2, 30, 35, 19, 13, 2, 9, 26, 32, 17, 2, 13, 15, 23, 38, 4, 24, 15};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 64154825;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {28, 31, 11, 33, 21, 20, 4, 6, 30, 28, 35, 15, 33, 12, 33, 33, 23, 15, 14, 10, 28, 4, 26, 16, 27, 29, 9, 2, 38, 2, 1, 2, 22, 36, 37, 38, 25, 36};
    vector<int> b = {24, 33, 24, 29, 24, 2, 3, 32, 23, 32, 39, 5, 8, 4, 16, 17, 16, 7, 31, 23, 8, 22, 29, 39, 6, 34, 2, 15, 29, 18, 29, 8, 25, 13, 28, 19, 24, 24};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 67041622;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {39, 13, 5, 26, 39, 3, 14, 3, 35, 35, 37, 27, 22, 18, 7, 37, 7, 22, 21, 36, 38, 40, 26, 34, 30, 8, 13, 35, 3, 31, 28, 7, 24, 20, 6, 9, 17, 39, 22};
    vector<int> b = {8, 10, 36, 5, 16, 24, 31, 32, 15, 37, 7, 24, 28, 40, 31, 29, 3, 31, 12, 12, 25, 24, 34, 1, 17, 22, 12, 11, 4, 38, 19, 33, 23, 35, 40, 28, 28, 2, 5};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 49924987;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {10, 17, 40, 1, 40, 36, 40, 10, 34, 40, 4, 10, 28, 11, 25, 32, 8, 21, 2, 7, 4, 17, 27, 40, 8, 7, 14, 19, 20, 14, 24, 7, 2, 34, 3, 36, 5, 23, 23, 13};
    vector<int> b = {37, 33, 16, 29, 31, 32, 35, 32, 41, 18, 12, 21, 24, 7, 39, 38, 15, 24, 25, 1, 8, 13, 32, 17, 34, 40, 8, 41, 37, 32, 26, 30, 23, 9, 26, 16, 32, 6, 32, 22};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 57897579;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {21, 27, 31, 34, 14, 28, 6, 37, 27, 6, 9, 11, 22, 4, 27, 10, 35, 21, 30, 13, 23, 35, 29, 22, 36, 35, 42, 37, 7, 21, 26, 32, 17, 42, 26, 36, 38, 30, 14, 23, 24};
    vector<int> b = {16, 28, 2, 31, 6, 12, 27, 39, 1, 3, 6, 27, 19, 25, 32, 25, 40, 5, 26, 39, 40, 27, 14, 27, 42, 18, 20, 28, 1, 26, 8, 34, 30, 25, 35, 28, 26, 33, 41, 15, 36};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 282868056;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {25, 5, 29, 26, 8, 12, 10, 2, 21, 11, 8, 42, 28, 10, 23, 29, 36, 7, 2, 22, 38, 35, 13, 42, 18, 29, 28, 32, 19, 33, 11, 41, 32, 19, 26, 9, 32, 28, 6, 38, 6, 41};
    vector<int> b = {35, 19, 2, 24, 6, 35, 29, 15, 38, 15, 19, 16, 41, 40, 11, 35, 4, 28, 9, 2, 17, 43, 2, 17, 29, 34, 39, 3, 20, 29, 27, 30, 14, 1, 8, 31, 39, 15, 36, 22, 34, 37};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 170555975;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {16, 16, 37, 14, 14, 21, 33, 22, 24, 23, 34, 18, 9, 13, 5, 30, 12, 34, 29, 16, 40, 32, 43, 42, 23, 40, 39, 22, 13, 1, 6, 31, 19, 7, 11, 3, 34, 25, 23, 14, 7, 24, 20};
    vector<int> b = {38, 15, 40, 3, 41, 34, 4, 34, 34, 29, 44, 27, 43, 10, 44, 26, 39, 28, 7, 37, 2, 44, 42, 8, 42, 17, 34, 37, 29, 15, 14, 22, 18, 32, 29, 35, 18, 37, 36, 13, 4, 30, 24};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 292563133;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> a = {24, 3, 31, 11, 4, 24, 14, 8, 28, 27, 8, 2, 43, 21, 6, 45, 27, 27, 7, 44, 41, 15, 45, 41, 25, 30, 6, 40, 6, 11, 11, 35, 24, 34, 10, 37, 7, 30, 29, 1, 24, 34, 35, 19};
    vector<int> b = {13, 23, 13, 23, 35, 34, 13, 17, 8, 20, 32, 30, 2, 6, 26, 34, 11, 33, 14, 22, 11, 7, 22, 16, 10, 24, 30, 34, 38, 42, 34, 30, 12, 29, 29, 12, 5, 8, 36, 18, 1, 9, 39, 20};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2023834862;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> a = {11, 11, 37, 43, 36, 10, 31, 11, 29, 18, 7, 17, 30, 29, 19, 42, 36, 14, 15, 23, 3, 45, 3, 1, 32, 1, 36, 5, 21, 10, 16, 27, 36, 11, 45, 44, 8, 39, 41, 42, 11, 3, 39, 44, 13};
    vector<int> b = {37, 29, 33, 28, 26, 9, 46, 41, 40, 15, 11, 24, 2, 38, 4, 17, 35, 11, 25, 22, 36, 34, 31, 46, 44, 12, 17, 36, 29, 41, 46, 30, 11, 28, 5, 37, 3, 20, 15, 22, 6, 30, 17, 4, 37};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3247390452;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> a = {17, 22, 32, 39, 14, 7, 41, 28, 26, 40, 39, 35, 19, 8, 46, 10, 15, 41, 15, 28, 26, 23, 4, 47, 45, 33, 28, 30, 18, 46, 13, 45, 25, 12, 16, 30, 47, 19, 20, 2, 38, 19, 39, 19, 26, 5};
    vector<int> b = {4, 36, 41, 27, 34, 18, 45, 9, 34, 22, 40, 44, 26, 18, 22, 26, 38, 19, 25, 30, 42, 44, 43, 18, 21, 32, 11, 40, 29, 1, 17, 6, 23, 38, 9, 20, 15, 24, 31, 30, 4, 39, 37, 15, 3, 18};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1306690255;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> a = {16, 48, 43, 5, 22, 44, 21, 32, 16, 43, 5, 7, 31, 45, 41, 21, 9, 32, 28, 33, 42, 9, 9, 44, 39, 27, 39, 6, 6, 34, 5, 25, 22, 22, 23, 21, 30, 40, 46, 25, 38, 39, 1, 29, 1, 32, 19};
    vector<int> b = {5, 34, 37, 9, 28, 10, 18, 22, 20, 33, 19, 36, 14, 35, 7, 45, 14, 2, 4, 47, 37, 24, 26, 43, 25, 30, 41, 44, 14, 8, 13, 11, 3, 15, 21, 30, 19, 28, 22, 8, 43, 5, 5, 8, 12, 9, 17};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1624095678;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> a = {33, 35, 42, 23, 11, 19, 24, 39, 5, 49, 41, 34, 25, 26, 31, 29, 49, 25, 21, 33, 40, 18, 32, 27, 33, 12, 48, 32, 16, 8, 6, 17, 1, 38, 26, 13, 13, 20, 47, 22, 24, 43, 47, 8, 32, 22, 40, 36};
    vector<int> b = {3, 4, 36, 37, 40, 8, 2, 24, 35, 14, 44, 24, 34, 33, 48, 24, 34, 22, 30, 34, 10, 37, 36, 12, 4, 35, 22, 23, 44, 10, 27, 22, 46, 44, 10, 22, 9, 27, 15, 1, 44, 14, 46, 30, 28, 45, 7, 24};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1033510347;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> a = {19, 15, 14, 23, 27, 8, 46, 31, 3, 12, 21, 6, 33, 41, 10, 41, 29, 44, 5, 34, 35, 31, 22, 35, 38, 22, 7, 15, 41, 45, 24, 28, 34, 4, 20, 22, 43, 25, 30, 8, 5, 24, 14, 18, 37, 11, 13, 22, 35};
    vector<int> b = {33, 25, 18, 45, 35, 50, 45, 44, 30, 33, 4, 4, 34, 18, 23, 36, 33, 13, 47, 49, 26, 22, 8, 22, 47, 33, 36, 17, 37, 9, 2, 36, 32, 22, 3, 42, 35, 16, 9, 48, 23, 8, 35, 1, 40, 45, 39, 9, 16};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 5404328604;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> a = {35, 33, 5, 4, 10, 14, 45, 31, 25, 32, 11, 45, 46, 14, 28, 7, 6, 35, 5, 50, 17, 50, 30, 46, 29, 37, 30, 21, 22, 29, 23, 13, 30, 1, 21, 14, 4, 34, 9, 5, 36, 21, 39, 7, 16, 7, 51, 44, 33, 37};
    vector<int> b = {16, 40, 12, 42, 40, 31, 30, 24, 4, 51, 25, 26, 18, 37, 49, 31, 50, 30, 41, 3, 4, 4, 20, 51, 43, 15, 44, 28, 44, 14, 3, 15, 2, 48, 5, 19, 7, 36, 20, 7, 38, 27, 47, 33, 39, 36, 37, 36, 8, 48};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 9751544877;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> a = {7, 22, 30, 41, 39, 48, 9, 38, 4, 43, 35, 9, 1, 14, 39, 3, 23, 16, 10, 6, 32, 17, 12, 24, 18, 24, 28, 29, 29, 51, 2, 5, 22, 19, 42, 21, 20, 28, 45, 37, 51, 49, 39, 35, 35, 40, 25, 46, 12, 45};
    vector<int> b = {35, 31, 9, 47, 16, 25, 47, 24, 14, 44, 5, 21, 9, 45, 13, 43, 46, 27, 44, 12, 5, 47, 15, 50, 29, 27, 44, 21, 11, 22, 46, 23, 46, 33, 3, 12, 27, 25, 33, 9, 26, 31, 5, 28, 36, 29, 45, 8, 5, 34};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 4382134804;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> a = {37, 36, 30, 51, 10, 13, 35, 3, 29, 22, 48, 40, 43, 50, 29, 43, 17, 42, 9, 39, 46, 37, 40, 36, 12, 7, 13, 24, 1, 37, 12, 31, 41, 35, 49, 11, 50, 17, 16, 21, 45, 25, 48, 51, 48, 1, 26, 19, 2, 48};
    vector<int> b = {32, 26, 50, 4, 1, 48, 43, 47, 38, 29, 40, 44, 20, 33, 40, 23, 22, 2, 29, 6, 34, 18, 36, 50, 6, 4, 3, 46, 51, 34, 22, 6, 48, 13, 48, 49, 8, 5, 25, 3, 10, 1, 1, 14, 37, 19, 15, 28, 11, 27};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 8637218556;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> a = {19, 36, 45, 40, 30, 14, 27, 46, 2, 13, 4, 28, 43, 2, 5, 10, 16, 30, 27, 17, 24, 50, 1, 17, 37, 22, 5, 19, 8, 34, 37, 2, 30, 2, 25, 21, 17, 3, 27, 18, 23, 47, 36, 47, 15, 38, 16, 13, 51, 39};
    vector<int> b = {38, 5, 41, 49, 42, 32, 44, 5, 4, 1, 11, 45, 31, 47, 17, 22, 9, 14, 18, 21, 14, 41, 26, 22, 2, 12, 49, 29, 21, 40, 43, 27, 1, 21, 48, 25, 20, 41, 45, 6, 46, 19, 35, 1, 43, 7, 27, 33, 38, 22};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 10582000358;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> a = {51, 12, 33, 27, 19, 11, 39, 25, 40, 7, 22, 43, 2, 19, 46, 21, 24, 45, 11, 32, 7, 50, 13, 32, 8, 1, 4, 51, 6, 15, 30, 26, 32, 47, 51, 14, 21, 10, 34, 31, 16, 19, 20, 32, 8, 49, 19, 8, 41, 25};
    vector<int> b = {5, 24, 48, 6, 41, 47, 47, 28, 26, 29, 39, 46, 6, 50, 10, 48, 25, 16, 42, 18, 41, 38, 28, 3, 2, 25, 44, 19, 35, 32, 14, 37, 36, 32, 25, 7, 32, 4, 23, 41, 43, 49, 14, 34, 17, 10, 47, 47, 9, 40};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7618399589;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> a = {51, 12, 18, 10, 6, 51, 4, 8, 3, 13, 20, 45, 19, 28, 5, 11, 30, 23, 31, 50, 30, 3, 28, 47, 44, 14, 15, 37, 28, 43, 41, 10, 48, 15, 39, 39, 49, 17, 15, 12, 13, 16, 22, 16, 27, 33, 25, 36, 10, 24};
    vector<int> b = {38, 30, 3, 13, 28, 35, 6, 11, 25, 51, 12, 29, 31, 46, 40, 21, 3, 26, 11, 11, 1, 32, 5, 7, 25, 25, 30, 40, 29, 8, 50, 28, 14, 13, 37, 34, 30, 33, 31, 42, 7, 9, 31, 39, 23, 31, 26, 6, 2, 28};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 8351873539;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> a = {35, 42, 29, 12, 27, 26, 6, 39, 26, 19, 38, 46, 20, 47, 24, 21, 24, 12, 38, 47, 9, 6, 37, 29, 9, 17, 40, 9, 47, 49, 33, 16, 30, 29, 26, 3, 36, 41, 35, 4, 18, 28, 36, 19, 36, 7, 32, 10, 19, 47};
    vector<int> b = {24, 2, 33, 49, 36, 24, 32, 15, 38, 27, 29, 23, 38, 34, 43, 23, 51, 33, 45, 50, 34, 44, 21, 37, 22, 11, 38, 10, 29, 13, 17, 12, 38, 28, 14, 51, 31, 51, 6, 36, 26, 25, 1, 42, 39, 35, 5, 48, 28, 8};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 5587593633;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> a = {13, 28, 23, 39, 22, 28, 21, 2, 47, 39, 7, 44, 4, 4, 9, 41, 15, 13, 13, 6, 38, 3, 18, 14, 18, 4, 10, 39, 15, 25, 3, 49, 36, 26, 13, 11, 39, 30, 13, 5, 51, 2, 31, 45, 37, 27, 28, 12, 13, 23};
    vector<int> b = {24, 33, 16, 3, 4, 39, 43, 29, 1, 20, 51, 23, 40, 46, 34, 13, 17, 39, 48, 12, 49, 30, 21, 35, 51, 50, 13, 19, 34, 4, 34, 9, 12, 21, 1, 15, 42, 32, 8, 1, 3, 4, 23, 44, 51, 48, 2, 2, 14, 10};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 42138251037;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> a = {16, 30, 1, 23, 35, 13, 23, 48, 23, 44, 13, 31, 2, 13, 2, 17, 17, 45, 31, 5, 28, 32, 34, 15, 31, 43, 22, 25, 4, 25, 23, 41, 49, 19, 11, 32, 13, 14, 9, 26, 41, 8, 41, 7, 41, 12, 12, 11, 38, 37};
    vector<int> b = {31, 21, 50, 13, 17, 18, 10, 40, 21, 50, 12, 12, 24, 11, 27, 36, 6, 50, 46, 36, 50, 49, 13, 13, 47, 13, 39, 11, 26, 51, 42, 22, 12, 41, 28, 33, 40, 6, 22, 13, 28, 21, 3, 20, 36, 20, 27, 29, 25, 43};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 53228779547;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> a = {14, 32, 4, 13, 23, 29, 4, 12, 37, 25, 7, 22, 17, 29, 20, 14, 42, 12, 45, 33, 42, 24, 18, 28, 23, 11, 19, 4, 15, 25, 11, 31, 11, 16, 5, 44, 30, 1, 31, 36, 10, 31, 33, 39, 10, 48, 29, 29, 10, 34};
    vector<int> b = {41, 2, 1, 9, 20, 31, 25, 17, 29, 6, 25, 21, 47, 9, 40, 43, 8, 29, 12, 9, 19, 11, 29, 12, 9, 46, 41, 32, 45, 27, 35, 22, 50, 51, 37, 49, 45, 12, 44, 8, 41, 11, 3, 22, 29, 45, 38, 51, 26, 8};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 16246658063;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> a = {21, 12, 40, 48, 2, 7, 2, 7, 37, 33, 17, 1, 41, 29, 42, 45, 33, 46, 5, 48, 21, 39, 35, 9, 14, 13, 21, 29, 8, 28, 11, 21, 35, 32, 16, 32, 33, 37, 31, 51, 47, 46, 11, 50, 41, 49, 29, 6, 23, 15};
    vector<int> b = {10, 16, 20, 19, 47, 6, 36, 28, 3, 31, 29, 21, 18, 4, 7, 46, 25, 49, 48, 50, 7, 13, 26, 50, 23, 48, 30, 46, 22, 12, 38, 29, 33, 2, 43, 22, 27, 33, 19, 13, 48, 31, 46, 24, 7, 34, 44, 40, 47, 31};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 14478703472;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> a = {16, 46, 40, 49, 44, 32, 29, 1, 45, 20, 50, 25, 36, 15, 4, 37, 1, 10, 34, 35, 40, 2, 45, 50, 13, 6, 42, 17, 24, 22, 14, 48, 49, 17, 25, 12, 32, 26, 39, 14, 30, 4, 11, 27, 51, 41, 23, 47, 33, 5};
    vector<int> b = {38, 41, 36, 3, 33, 13, 3, 31, 6, 27, 28, 39, 37, 5, 22, 9, 21, 7, 8, 34, 26, 30, 29, 38, 19, 42, 43, 24, 47, 16, 20, 8, 35, 31, 12, 7, 28, 19, 18, 23, 21, 10, 18, 46, 2, 11, 44, 43, 51, 9};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1327;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> a = {10, 10, 10, 13, 10, 42, 9, 50, 10, 36, 5, 10, 10, 49, 28, 10, 47, 10, 10, 29, 10, 10, 21, 10, 10, 48, 10, 24, 33, 10, 39, 10, 10, 45, 40, 11, 44, 51, 30, 10, 10, 32, 46, 10, 41, 37, 22, 10, 10, 16};
    vector<int> b = {4, 19, 14, 10, 2, 10, 10, 10, 20, 10, 10, 1, 23, 10, 10, 43, 10, 15, 31, 10, 8, 25, 10, 17, 38, 10, 27, 10, 10, 18, 10, 6, 26, 10, 10, 10, 10, 10, 10, 34, 12, 10, 10, 7, 10, 10, 10, 35, 3, 10};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842675;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> b = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 56;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> a = {1};
    vector<int> b = {2};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> b = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842675;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> a = {10, 7, 2, 5, 6, 2, 4, 9, 7};
    vector<int> b = {8, 10, 10, 4, 1, 6, 2, 2, 3};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 144;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 32, 14, 15, 16};
    vector<int> b = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};
    CentaurCompanyDiv2* pObj = new CentaurCompanyDiv2();
    clock_t start = clock();
    long result = pObj->count(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 356241767399479;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22694460&rd=15490&pm=12426
********************************************************************************
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
typedef long long int lint;
const int MAX = 64;
 
int n, vis[MAX];
vector <int> ar[MAX];
lint curr;
 
class CentaurCompanyDiv2 {
public:
  long long count(vector <int>, vector <int>);
};
 
lint dfs(int u){
  lint ans = 1;
  vis[u] = 1;
  for(int i=0;i<(int)ar[u].size();i++){
    int v = ar[u][i];
    if(!vis[v]) ans *= (dfs(v)+1);
  }
  if(u != 1) curr += ans;
  return ans;
}
 
long long CentaurCompanyDiv2::count(vector <int> a, vector <int> b) {
  n = (int)a.size() +1;
  for(int i=1;i<=n;i++){
    ar[i].clear();
    vis[i] = 0;
  }
  for(int i=0;i<n-1;i++){
    ar[a[i]].push_back(b[i]);
    ar[b[i]].push_back(a[i]);
  }
  
  curr = 0;
  lint res = dfs(1);
  return res + curr + 1;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/