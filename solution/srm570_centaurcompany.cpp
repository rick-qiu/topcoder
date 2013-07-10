/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12428
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

class CentaurCompany {
public:
    double getvalue(vector<int> a, vector<int> b);
};

double CentaurCompany::getvalue(vector<int> a, vector<int> b) {
    double ret;
    return ret;
}


int test0() {
    vector<int> a = {1};
    vector<int> b = {2};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> a = {1, 1, 1};
    vector<int> b = {2, 3, 4};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.125;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> a = {1, 2, 3, 2, 2};
    vector<int> b = {2, 3, 4, 5, 6};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.375;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> b = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.41796875;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> b = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 15.500000001076842;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> a = {2};
    vector<int> b = {1};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> a = {1, 1};
    vector<int> b = {2, 3};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {1, 1, 4};
    vector<int> b = {3, 2, 1};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.125;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {1, 4, 1, 5};
    vector<int> b = {4, 3, 2, 4};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.125;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> a = {6, 2, 2, 5, 4};
    vector<int> b = {5, 1, 5, 3, 2};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> a = {3, 7, 5, 3, 3, 5};
    vector<int> b = {2, 1, 7, 4, 7, 6};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3125;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> a = {6, 8, 6, 8, 7, 1, 8};
    vector<int> b = {8, 3, 4, 2, 8, 3, 5};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7265625;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> a = {1, 5, 1, 3, 1, 2, 2, 9};
    vector<int> b = {8, 2, 5, 1, 6, 7, 4, 3};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.66015625;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> a = {10, 7, 2, 5, 6, 2, 4, 9, 7};
    vector<int> b = {8, 10, 10, 4, 1, 6, 2, 2, 3};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.646484375;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> a = {1, 1, 1, 10, 6, 2, 7, 3, 4, 11};
    vector<int> b = {5, 8, 9, 5, 3, 8, 1, 5, 5, 5};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.078125;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> a = {5, 11, 8, 5, 9, 2, 6, 10, 11, 6, 11};
    vector<int> b = {12, 1, 6, 11, 12, 3, 7, 1, 6, 4, 3};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9169921875;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> a = {6, 6, 12, 4, 10, 8, 1, 3, 7, 9, 13, 6};
    vector<int> b = {1, 8, 2, 6, 4, 5, 11, 10, 8, 10, 10, 12};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.101318359375;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> a = {9, 10, 3, 11, 9, 6, 4, 3, 5, 12, 5, 3, 12};
    vector<int> b = {2, 2, 1, 2, 7, 2, 6, 6, 10, 14, 13, 8, 2};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1785888671875;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {5, 7, 6, 1, 12, 2, 6, 5, 7, 6, 1, 1, 9, 10};
    vector<int> b = {8, 14, 2, 2, 3, 15, 13, 12, 2, 11, 4, 12, 1, 1};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4061279296875;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> a = {10, 3, 15, 15, 10, 4, 13, 11, 4, 16, 14, 14, 8, 2, 14};
    vector<int> b = {4, 8, 8, 1, 6, 5, 3, 10, 8, 9, 7, 9, 12, 9, 11};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.26507568359375;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {16, 6, 6, 10, 9, 3, 1, 8, 4, 14, 2, 2, 13, 7, 15, 4};
    vector<int> b = {13, 1, 5, 3, 2, 11, 17, 2, 1, 3, 1, 12, 1, 14, 13, 3};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6319732666015625;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {12, 11, 14, 17, 6, 6, 5, 8, 17, 8, 18, 2, 2, 1, 15, 11, 10};
    vector<int> b = {7, 18, 15, 16, 7, 10, 4, 5, 2, 10, 14, 1, 18, 13, 9, 3, 18};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.21539306640625;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {11, 15, 13, 6, 1, 19, 15, 15, 7, 6, 12, 17, 16, 5, 15, 17, 12, 17};
    vector<int> b = {12, 18, 14, 1, 9, 3, 10, 14, 2, 12, 8, 12, 19, 17, 2, 2, 19, 4};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.784912109375;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {1, 8, 5, 12, 19, 11, 14, 13, 5, 17, 2, 8, 18, 2, 18, 19, 16, 13, 8};
    vector<int> b = {13, 13, 1, 4, 9, 12, 13, 18, 7, 19, 5, 11, 10, 20, 16, 6, 15, 3, 6};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6330623626708984;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> a = {12, 2, 17, 12, 18, 19, 13, 16, 3, 2, 12, 5, 7, 12, 5, 14, 19, 11, 13, 9};
    vector<int> b = {11, 14, 15, 1, 7, 8, 20, 12, 6, 8, 18, 6, 10, 4, 12, 1, 21, 17, 12, 11};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.009258270263672;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {12, 20, 20, 3, 16, 21, 6, 9, 14, 22, 2, 7, 1, 2, 4, 4, 14, 8, 15, 5, 21};
    vector<int> b = {18, 11, 16, 4, 4, 4, 18, 10, 13, 17, 21, 16, 18, 19, 9, 22, 16, 2, 21, 4, 6};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0896859169006348;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {2, 8, 16, 16, 1, 7, 15, 23, 13, 13, 12, 18, 9, 3, 18, 5, 1, 8, 7, 3, 3, 2};
    vector<int> b = {15, 21, 19, 1, 2, 10, 22, 4, 6, 16, 17, 20, 3, 23, 8, 2, 12, 9, 14, 11, 14, 14};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7677412033081055;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {6, 5, 12, 1, 9, 14, 19, 22, 12, 17, 19, 17, 21, 13, 23, 2, 23, 11, 9, 5, 17, 11, 8};
    vector<int> b = {17, 18, 20, 19, 17, 23, 15, 7, 23, 11, 11, 18, 24, 12, 3, 23, 16, 23, 4, 10, 21, 22, 2};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3211158514022827;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> a = {7, 5, 20, 15, 21, 5, 10, 6, 13, 9, 14, 19, 17, 15, 5, 5, 3, 11, 15, 1, 3, 5, 13, 3};
    vector<int> b = {18, 25, 22, 2, 23, 7, 8, 5, 24, 24, 22, 3, 2, 21, 22, 4, 12, 7, 8, 6, 21, 15, 7, 16};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.349271595478058;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {18, 13, 18, 8, 4, 12, 20, 5, 21, 9, 26, 3, 19, 2, 2, 15, 24, 16, 19, 1, 8, 21, 8, 18, 5};
    vector<int> b = {1, 25, 3, 14, 5, 26, 16, 11, 6, 26, 4, 17, 7, 26, 10, 16, 8, 18, 23, 23, 22, 8, 18, 4, 25};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.258626252412796;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {7, 22, 11, 1, 27, 16, 23, 5, 17, 21, 9, 24, 20, 2, 3, 10, 14, 27, 5, 3, 25, 26, 7, 11, 8, 24};
    vector<int> b = {20, 5, 17, 17, 23, 3, 25, 21, 20, 19, 21, 22, 19, 10, 15, 14, 18, 20, 14, 17, 13, 24, 12, 6, 20, 4};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1443023681640625;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {9, 5, 19, 22, 16, 28, 17, 2, 6, 12, 25, 8, 9, 14, 15, 19, 8, 17, 26, 20, 22, 26, 27, 12, 20, 17, 13};
    vector<int> b = {15, 27, 7, 24, 17, 2, 11, 11, 11, 1, 2, 21, 19, 6, 6, 23, 4, 10, 9, 6, 18, 18, 17, 3, 4, 12, 18};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2372300401329994;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {11, 20, 18, 7, 11, 10, 22, 10, 27, 6, 19, 24, 14, 28, 19, 20, 27, 10, 28, 28, 17, 29, 26, 25, 7, 20, 4, 19};
    vector<int> b = {24, 2, 8, 5, 20, 27, 19, 11, 21, 26, 9, 13, 12, 6, 14, 16, 14, 8, 23, 11, 16, 13, 1, 27, 10, 15, 29, 3};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.345605120062828;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> a = {29, 16, 12, 20, 15, 15, 24, 28, 23, 24, 13, 10, 15, 6, 15, 11, 11, 18, 2, 11, 4, 25, 12, 24, 16, 2, 14, 17, 18};
    vector<int> b = {24, 30, 10, 3, 22, 13, 11, 26, 21, 7, 27, 16, 14, 4, 17, 14, 5, 11, 12, 8, 3, 27, 6, 9, 15, 19, 23, 28, 1};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.445721225813031;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {24, 31, 11, 16, 8, 19, 3, 1, 15, 2, 31, 9, 19, 16, 17, 30, 11, 5, 22, 3, 28, 16, 10, 17, 18, 29, 14, 5, 8, 9};
    vector<int> b = {21, 1, 27, 9, 6, 11, 28, 4, 11, 18, 22, 23, 21, 12, 25, 20, 28, 14, 15, 29, 13, 7, 15, 12, 9, 26, 20, 15, 21, 14};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2745766155421734;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {11, 6, 25, 24, 10, 18, 5, 10, 23, 22, 13, 31, 28, 10, 16, 28, 1, 3, 25, 19, 12, 29, 22, 27, 10, 22, 18, 2, 24, 30, 16};
    vector<int> b = {24, 9, 7, 21, 22, 16, 28, 32, 7, 24, 15, 22, 16, 14, 9, 20, 10, 9, 10, 3, 18, 14, 15, 18, 4, 8, 17, 18, 26, 24, 25};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 3.120025954209268;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {30, 6, 25, 17, 21, 10, 22, 8, 4, 25, 22, 14, 22, 31, 10, 5, 30, 18, 4, 33, 15, 33, 28, 17, 2, 31, 12, 12, 33, 14, 30, 21};
    vector<int> b = {7, 24, 23, 1, 4, 20, 2, 10, 3, 10, 15, 32, 29, 19, 9, 19, 15, 26, 30, 16, 33, 18, 17, 14, 11, 13, 15, 10, 31, 31, 27, 6};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7142070105765015;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {6, 1, 5, 26, 13, 27, 17, 31, 30, 17, 7, 11, 4, 33, 25, 18, 12, 32, 12, 11, 18, 25, 20, 21, 27, 27, 24, 9, 29, 12, 12, 10, 24};
    vector<int> b = {8, 9, 9, 10, 1, 34, 19, 20, 16, 22, 34, 12, 2, 12, 2, 8, 20, 8, 9, 3, 19, 8, 30, 20, 28, 15, 15, 14, 19, 25, 15, 9, 23};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8793265767162666;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {34, 24, 28, 24, 20, 30, 5, 31, 30, 30, 14, 16, 30, 3, 8, 1, 22, 23, 3, 26, 13, 10, 34, 31, 8, 35, 1, 28, 12, 22, 2, 9, 25, 25};
    vector<int> b = {8, 11, 4, 26, 3, 21, 8, 34, 12, 15, 12, 31, 5, 12, 29, 7, 17, 2, 33, 21, 30, 3, 6, 32, 27, 5, 13, 29, 19, 20, 34, 20, 18, 3};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.861948890320491;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {24, 13, 35, 30, 13, 6, 28, 19, 11, 11, 13, 12, 7, 36, 11, 11, 13, 14, 8, 14, 15, 28, 34, 11, 25, 11, 31, 22, 21, 15, 25, 9, 32, 25, 12};
    vector<int> b = {6, 15, 11, 24, 2, 18, 13, 1, 33, 4, 27, 5, 25, 20, 8, 24, 16, 26, 23, 12, 19, 3, 15, 22, 9, 25, 12, 17, 2, 29, 31, 10, 30, 15, 20};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 3.363306969840778;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {30, 26, 36, 25, 29, 10, 15, 35, 36, 5, 20, 6, 16, 18, 23, 19, 15, 13, 35, 25, 33, 15, 5, 2, 24, 26, 29, 12, 7, 33, 30, 30, 9, 10, 21};
    vector<int> b = {29, 31, 6, 35, 14, 15, 1, 32, 26, 34, 26, 22, 2, 3, 17, 30, 29, 10, 4, 21, 27, 3, 28, 23, 2, 2, 25, 33, 15, 30, 23, 34, 14, 8, 11};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9625992805231363;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {23, 18, 5, 4, 8, 16, 25, 17, 31, 12, 24, 13, 22, 27, 36, 11, 8, 30, 31, 13, 3, 33, 9, 29, 3, 28, 16, 26, 24, 24, 2, 2, 32, 20, 10};
    vector<int> b = {19, 3, 10, 28, 16, 15, 16, 28, 36, 8, 35, 21, 21, 18, 6, 20, 19, 20, 14, 3, 34, 9, 35, 2, 26, 36, 28, 7, 3, 19, 13, 1, 8, 26, 25};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.820357299351599;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {36, 7, 26, 8, 7, 11, 10, 11, 8, 12, 2, 21, 13, 10, 6, 11, 3, 19, 12, 5, 11, 33, 16, 13, 22, 34, 11, 18, 29, 30, 30, 22, 31, 25, 27};
    vector<int> b = {27, 36, 23, 15, 26, 4, 13, 31, 7, 27, 30, 32, 35, 36, 30, 9, 12, 10, 1, 36, 17, 9, 10, 31, 14, 2, 28, 12, 23, 24, 31, 27, 20, 28, 32};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9668708746612538;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {1, 29, 34, 17, 13, 22, 18, 5, 35, 14, 10, 33, 23, 27, 13, 14, 32, 32, 18, 15, 33, 2, 9, 35, 8, 21, 12, 22, 33, 1, 24, 17, 7, 29, 23};
    vector<int> b = {31, 3, 8, 32, 31, 11, 8, 34, 36, 29, 2, 2, 28, 10, 30, 31, 31, 4, 36, 13, 25, 26, 32, 19, 33, 7, 21, 14, 7, 23, 7, 16, 20, 6, 33};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7784599020669702;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {27, 26, 9, 18, 29, 7, 20, 8, 3, 31, 17, 28, 13, 1, 10, 25, 26, 26, 32, 2, 21, 18, 31, 6, 32, 28, 17, 16, 33, 9, 14, 33, 24, 20, 33};
    vector<int> b = {17, 33, 12, 14, 14, 11, 8, 33, 22, 26, 35, 14, 30, 11, 32, 26, 9, 14, 23, 13, 4, 11, 15, 25, 35, 19, 34, 30, 36, 30, 32, 3, 25, 5, 4};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.946867458493216;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {31, 28, 26, 34, 18, 9, 3, 32, 16, 5, 8, 23, 26, 19, 36, 14, 29, 20, 4, 27, 13, 1, 22, 20, 3, 33, 20, 10, 25, 30, 6, 2, 11, 24, 12};
    vector<int> b = {15, 7, 20, 17, 3, 4, 35, 28, 31, 20, 29, 35, 14, 24, 31, 31, 27, 25, 20, 26, 26, 31, 15, 21, 26, 13, 17, 4, 32, 20, 13, 35, 33, 3, 16};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2242215727455914;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {25, 22, 11, 8, 32, 21, 10, 13, 3, 7, 2, 29, 26, 36, 26, 23, 11, 5, 20, 28, 29, 33, 28, 14, 14, 32, 1, 10, 10, 29, 20, 11, 25, 25, 1};
    vector<int> b = {19, 2, 14, 14, 16, 15, 15, 19, 30, 25, 34, 24, 12, 27, 17, 15, 34, 31, 25, 18, 31, 30, 6, 12, 4, 3, 27, 30, 35, 11, 18, 10, 27, 30, 9};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.773805324686691;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {7, 34, 29, 13, 7, 29, 7, 1, 16, 19, 7, 22, 30, 34, 11, 7, 34, 33, 36, 1, 29, 7, 31, 19, 17, 29, 19, 10, 15, 2, 10, 9, 16, 29, 18};
    vector<int> b = {17, 22, 26, 10, 14, 12, 23, 22, 32, 10, 22, 25, 23, 27, 10, 29, 24, 10, 20, 18, 19, 16, 1, 21, 8, 35, 36, 6, 29, 7, 28, 26, 4, 3, 5};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7409877743630204;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {34, 6, 18, 5, 35, 1, 16, 10, 26, 14, 3, 1, 22, 35, 7, 6, 7, 27, 35, 17, 30, 23, 24, 31, 2, 20, 18, 6, 17, 8, 17, 30, 15, 29, 6};
    vector<int> b = {25, 36, 13, 18, 32, 28, 8, 31, 27, 7, 31, 34, 6, 1, 24, 12, 21, 18, 17, 7, 16, 9, 19, 36, 17, 17, 8, 9, 4, 7, 33, 11, 17, 30, 7};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4246289428847376;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> a = {23, 25, 34, 5, 7, 10, 8, 2, 21, 26, 35, 27, 14, 14, 17, 28, 5, 3, 30, 1, 32, 20, 3, 36, 9, 6, 26, 35, 30, 21, 18, 1, 13, 6, 2};
    vector<int> b = {25, 13, 10, 16, 20, 36, 25, 29, 5, 10, 18, 25, 9, 11, 18, 21, 3, 19, 35, 26, 14, 1, 24, 33, 22, 26, 31, 25, 12, 32, 11, 15, 4, 18, 18};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.834601258073235;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> a = {27, 16, 29, 31, 36, 25, 21, 30, 22, 28, 11, 23, 32, 14, 23, 36, 18, 20, 9, 28, 2, 30, 27, 12, 4, 34, 33, 13, 13, 21, 7, 6, 25, 3, 10};
    vector<int> b = {6, 15, 19, 1, 8, 18, 24, 10, 15, 9, 35, 4, 26, 19, 14, 5, 24, 5, 2, 1, 17, 35, 33, 32, 8, 12, 3, 20, 22, 7, 16, 26, 34, 17, 29};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.941243119246792;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> a = {6, 6, 6, 6, 6, 7, 4, 14, 18, 23, 6, 6, 6, 5, 10, 32, 35, 33, 27, 9, 13, 6, 28, 11, 6, 6, 6, 8, 19, 26, 1, 6, 31, 17};
    vector<int> b = {34, 25, 20, 22, 24, 6, 6, 6, 6, 6, 15, 3, 16, 6, 6, 6, 6, 6, 6, 6, 6, 2, 6, 6, 30, 21, 12, 6, 6, 6, 6, 29, 6, 6};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 15.000000002095476;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> a = {10, 7, 2, 5, 6, 2, 4, 9, 7};
    vector<int> b = {8, 10, 10, 4, 1, 6, 2, 2, 3};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.646484375;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};
    vector<int> b = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
    CentaurCompany* pObj = new CentaurCompany();
    clock_t start = clock();
    double result = pObj->getvalue(a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.941243119246792;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23017200&rd=15490&pm=12428
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cmath> 
using namespace std; 
 
const int N = 50; 
 
double f[60][60][60][2]; 
int n; 
vector<int>adj[60]; 
 
class CentaurCompany { 
public: 
  void gao(int x,int y) { 
      double g[60][60][2]; 
    f[x][0][0][0]=1; 
        f[x][1][1][1]=1; 
    for (int i = 0; i < adj[x].size(); ++i) 
            if(adj[x][i]!=y) { 
                gao(adj[x][i],x); memset(g, 0, sizeof(g)); 
                for (int j = 0; j < n + 1; ++j) 
                    for (int k = 0; k < n + 1; ++k) 
                        if(f[adj[x][i]][j][k][0]||f[adj[x][i]][j][k][1]) { 
                            for(int l=0;l+j<=n;l++) 
                                for(int m=0;m+k<=n;m++){ 
                                    g[l+j][m+k][0]+=f[x][l][m][0]*f[adj[x][i]][j][k][0]; 
                                    g[l+j][m+k][0]+=f[x][l][m][0]*f[adj[x][i]][j][k][1]; 
                                    g[l+j][m+k][1]+=f[x][l][m][1]*f[adj[x][i]][j][k][0]; 
                                    g[l+j][m+k-1][1]+=f[x][l][m][1]*f[adj[x][i]][j][k][1]; 
                                } 
                } 
                memcpy(f[x], g, sizeof(f[x])); 
            } 
  } 
 
  double getvalue(vector <int> A, vector <int> B) { 
      double res = 0; 
    n = A.size() + 1; 
    memset(f, 0, sizeof(f)); 
    for (int i = 1; i <= n; ++i) 
            adj[i].clear(); 
    for(int i = 0; i<n-1 ; i++) { 
      adj[A[i]].push_back(B[i]); 
      adj[B[i]].push_back(A[i]); 
    } 
    gao(1, 0); 
    for (int i = 0; i < n; ++i) 
            for (int j = 0; j < i + 1; ++j) 
                res+=(f[1][i][j][0]+f[1][i][j][1])*max((j-1)*2-i,0); 
    for (int i = 0; i <= n - 2; ++i) res /= 2; 
    return res; 
  } 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/