/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7761
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

class BeautifulHexagonalTilings {
public:
    int howMany(vector<int> s, int a, int b);
};

int BeautifulHexagonalTilings::howMany(vector<int> s, int a, int b) {
    int ret;
    return ret;
}


int test0() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 6;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
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
    vector<int> s = {6, 6, 6, 6, 6, 6};
    int a = 6;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
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
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> s = {4, 4, 3, 5, 3, 4};
    int a = 4;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 213;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> s = {6, 6, 6, 6, 6, 6};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 7926;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> s = {5, 6, 6, 5, 6, 6};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 5526;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 0;
    int b = 0;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> s = {4, 2, 5, 2, 4, 3};
    int a = 0;
    int b = 0;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
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
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 1;
    int b = 0;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> s = {2, 2, 3, 2, 2, 3};
    int a = 1;
    int b = 0;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> s = {5, 2, 4, 4, 3, 3};
    int a = 0;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 2;
    int b = 0;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> s = {2, 3, 2, 3, 2, 3};
    int a = 2;
    int b = 0;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> s = {4, 4, 2, 6, 2, 4};
    int a = 0;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
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
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 3;
    int b = 0;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> s = {6, 2, 5, 3, 5, 2};
    int a = 3;
    int b = 0;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> s = {3, 5, 2, 5, 3, 4};
    int a = 3;
    int b = 0;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 0;
    int b = 4;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> s = {6, 6, 6, 6, 6, 6};
    int a = 0;
    int b = 4;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 552;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> s = {3, 3, 3, 4, 2, 4};
    int a = 0;
    int b = 4;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 5;
    int b = 0;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> s = {2, 3, 4, 2, 3, 4};
    int a = 0;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> s = {4, 5, 5, 3, 6, 4};
    int a = 5;
    int b = 0;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 0;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
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
    vector<int> s = {3, 6, 5, 3, 6, 5};
    int a = 0;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
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
    vector<int> s = {4, 5, 4, 4, 5, 4};
    int a = 6;
    int b = 0;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
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
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 1;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> s = {2, 2, 3, 2, 2, 3};
    int a = 1;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> s = {3, 5, 6, 3, 5, 6};
    int a = 1;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
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
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 2;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> s = {3, 2, 5, 3, 2, 5};
    int a = 2;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> s = {6, 2, 4, 5, 3, 3};
    int a = 2;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 3;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> s = {5, 5, 6, 5, 5, 6};
    int a = 3;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 432;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> s = {5, 2, 3, 4, 3, 2};
    int a = 3;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 248;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 1;
    int b = 4;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> s = {5, 3, 2, 6, 2, 3};
    int a = 1;
    int b = 4;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 443;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> s = {5, 4, 5, 3, 6, 3};
    int a = 4;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 172;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 5;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> s = {6, 3, 2, 6, 3, 2};
    int a = 5;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> s = {6, 3, 6, 4, 5, 4};
    int a = 1;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 6;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> s = {3, 4, 3, 2, 5, 2};
    int a = 1;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> s = {3, 4, 5, 3, 4, 5};
    int a = 6;
    int b = 1;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> s = {6, 4, 3, 6, 4, 3};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1592;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> s = {2, 6, 5, 3, 5, 6};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2214;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 2;
    int b = 3;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> s = {3, 6, 5, 3, 6, 5};
    int a = 2;
    int b = 3;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 637;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> s = {3, 6, 5, 3, 6, 5};
    int a = 3;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 637;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 2;
    int b = 4;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
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
    vector<int> s = {4, 5, 3, 6, 3, 5};
    int a = 2;
    int b = 4;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> s = {3, 5, 4, 5, 3, 6};
    int a = 2;
    int b = 4;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 2;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> s = {5, 3, 2, 5, 3, 2};
    int a = 2;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> s = {6, 5, 6, 5, 6, 5};
    int a = 5;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
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
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 6;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> s = {6, 4, 6, 4, 6, 4};
    int a = 6;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> s = {2, 5, 3, 5, 2, 6};
    int a = 2;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 3;
    int b = 3;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> s = {5, 2, 2, 5, 2, 2};
    int a = 3;
    int b = 3;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 672;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> s = {5, 2, 4, 3, 4, 2};
    int a = 3;
    int b = 3;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 3;
    int b = 4;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> s = {2, 2, 6, 2, 2, 6};
    int a = 3;
    int b = 4;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 717;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> s = {2, 4, 3, 4, 2, 5};
    int a = 4;
    int b = 3;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 3;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> s = {3, 2, 2, 3, 2, 2};
    int a = 3;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> s = {3, 5, 2, 5, 3, 4};
    int a = 3;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 6;
    int b = 3;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> s = {6, 6, 3, 6, 6, 3};
    int a = 3;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> s = {6, 5, 6, 6, 5, 6};
    int a = 3;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 4;
    int b = 4;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> s = {3, 3, 2, 4, 2, 3};
    int a = 4;
    int b = 4;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> s = {5, 5, 5, 6, 4, 6};
    int a = 4;
    int b = 4;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 4;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> s = {2, 3, 3, 2, 3, 3};
    int a = 4;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> s = {6, 2, 4, 6, 2, 4};
    int a = 4;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 4;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> s = {3, 3, 4, 4, 2, 5};
    int a = 4;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> s = {3, 5, 5, 3, 5, 5};
    int a = 4;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 5;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> s = {3, 5, 2, 3, 5, 2};
    int a = 5;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> s = {3, 2, 4, 2, 3, 3};
    int a = 5;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 6;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> s = {2, 6, 3, 5, 3, 6};
    int a = 6;
    int b = 5;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> s = {2, 5, 3, 3, 4, 4};
    int a = 5;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 6;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> s = {4, 4, 6, 3, 5, 5};
    int a = 6;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> s = {5, 4, 6, 3, 6, 4};
    int a = 6;
    int b = 6;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> s = {6, 5, 5, 6, 5, 5};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3638;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> s = {4, 4, 5, 3, 5, 4};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 898;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> s = {3, 5, 3, 5, 3, 5};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 770;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> s = {6, 6, 5, 6, 6, 5};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 5526;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> s = {6, 5, 5, 5, 6, 4};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3046;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> s = {5, 5, 4, 4, 6, 3};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1540;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> s = {3, 3, 5, 4, 2, 6};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 954;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> s = {6, 5, 5, 5, 6, 4};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3046;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> s = {4, 5, 5, 4, 5, 5};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1598;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> s = {3, 5, 4, 4, 4, 5};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 898;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> s = {6, 6, 6, 6, 6, 6};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 7926;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> s = {6, 6, 3, 6, 6, 3};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3862;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> s = {4, 5, 3, 5, 4, 4};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 898;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> s = {4, 6, 4, 4, 6, 4};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1938;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> s = {4, 5, 6, 4, 5, 6};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2724;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> s = {6, 5, 6, 5, 6, 5};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 4322;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> s = {4, 4, 4, 4, 4, 4};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 654;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> s = {4, 4, 4, 4, 4, 4};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 654;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> s = {5, 3, 3, 5, 3, 3};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 594;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> s = {5, 4, 3, 6, 3, 4};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1118;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> s = {2, 2, 2, 2, 2, 2};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> s = {5, 4, 2, 5, 4, 2};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 736;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> s = {6, 6, 6, 6, 6, 6};
    int a = 2;
    int b = 2;
    BeautifulHexagonalTilings* pObj = new BeautifulHexagonalTilings();
    clock_t start = clock();
    int result = pObj->howMany(s, a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 7926;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21468741&rd=10712&pm=7761
********************************************************************************
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <vector>
 
using namespace std;
 
typedef long long Long;
typedef double dbl;
typedef vector <int> vi;
typedef pair <int, int> pii;
 
#define fi first
#define mp make_pair
#define pb push_back
#define se second
 
int dx[6] = {1, 1, 0, -1, -1,  0};
int dy[6] = {0, 1, 1,  0, -1, -1};
 
char f[40][40];
int ans = 0, a, b;
char c[40][40], nb[40][40], nw[40][40];
 
void dfs( int x, int y )
{
  if (y > 20)
    ans++;
  else if (x > 20)
    dfs(0, y + 1);
  else if (f[x][y] == 0)
    dfs(x + 1, y);
  else
  {
    int f1 = f[x][y] == 1 || nw[x][y] <= b && nb[x][y] <= 6 - b;
    for (int i = 0; i < 6 && f1; i++)
      if (f[x + dx[i]][y + dy[i]] == 2 && (c[x + dx[i]][y + dy[i]] == 1 && nw[x + dx[i]][y + dy[i]] + 1 > b || c[x + dx[i]][y + dy[i]] == 2 && nw[x + dx[i]][y + dy[i]] + 1 > 6 - a))
        f1 = 0;
    if (f1)
    {
      for (int i = 0; i < 6; i++)
        nw[x + dx[i]][y + dy[i]]++;
      c[x][y] = 1;
      dfs(x + 1, y);
      for (int i = 0; i < 6; i++)
        nw[x + dx[i]][y + dy[i]]--;
      c[x][y] = 0;
    }
    int f2 = f[x][y] == 1 || nb[x][y] <= a && nw[x][y] <= 6 - a;
    for (int i = 0; i < 6 && f2; i++)
      if (f[x + dx[i]][y + dy[i]] == 2 && (c[x + dx[i]][y + dy[i]] == 2 && nb[x + dx[i]][y + dy[i]] + 1 > a || c[x + dx[i]][y + dy[i]] == 1 && nb[x + dx[i]][y + dy[i]] + 1 > 6 - b))
        f2 = 0;
    if (f2)
    {
      for (int i = 0; i < 6; i++)
        nb[x + dx[i]][y + dy[i]]++;
      c[x][y] = 2;
      dfs(x + 1, y);
      for (int i = 0; i < 6; i++)
        nb[x + dx[i]][y + dy[i]]--;
      c[x][y] = 0;
    }
  }
}
 
class BeautifulHexagonalTilings
{
  public:
    int howMany( vector <int> s, int __a, int __b )
    {
      int x = 1, y = 1;
      a = __a, b = __b;
      memset(f, 0, sizeof(f));
      f[x][y] = 1;
      for (int i = 0; i < 6; i++)
        for (int j = 1; j < s[i]; j++)
          x += dx[i], y += dy[i], f[x][y] = 1;
      for (int i = 0; i < 20; i++)
      {
        int g = 0;
        for (int j = 0; j < 20; j++)
          if (f[i][j] == 1)
            g++;
          else if (g == 1)
            f[i][j] = 2;
      }
      for (int i = 0; i < 20; i++)
      {
        for (int j = 0; j < 20; j++)
          printf("%d", f[i][j]);
        printf("\n");
      }
      memset(c, 0, sizeof(c));
      memset(nb, 0, sizeof(nb));
      memset(nw, 0, sizeof(nw));
      dfs(0, 0);
      return ans;
    }
};
 
// Code by Burunduk3 =)
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/