/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6678
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

class BiggestRectangleHard {
public:
    int findArea(vector<int> lengths);
};

int BiggestRectangleHard::findArea(vector<int> lengths) {
    int ret;
    return ret;
}


int test0() {
    vector<int> lengths = {1, 3, 3, 4, 5, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> lengths = {9, 9, 5, 6, 2, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> lengths = {3, 4, 7, 8, 10, 2, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> lengths = {9, 2, 7, 9, 4, 9, 7, 10, 3};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 224;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> lengths = {9, 9, 10, 7, 7, 8, 7, 5, 8, 6, 9, 7, 7, 10, 9, 6};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 961;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> lengths = {2, 6, 9, 4, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> lengths = {6, 1, 5, 10, 3, 9, 8, 5};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> lengths = {6, 2, 10, 2, 9, 1, 5, 5, 4, 9, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> lengths = {8, 8, 10, 5, 5, 10, 1, 7, 2, 2, 7, 3};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 289;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> lengths = {3, 1, 3, 2, 7, 8, 9, 4, 5, 2, 1, 2, 1, 5};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> lengths = {8, 3, 7, 7, 7, 2, 2, 10, 8, 2, 2, 4, 3, 1};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> lengths = {7, 6, 9, 6, 7, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> lengths = {2, 6, 4, 10, 2, 8, 1, 8, 2, 1, 4, 8, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> lengths = {10, 2, 3, 8};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> lengths = {10, 3, 9, 2, 9, 1, 2, 6, 5, 9, 5, 10, 10, 8, 5, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> lengths = {8, 1, 7, 6, 7, 7, 9, 10, 9, 5, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 380;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> lengths = {1, 9, 8, 3, 7, 1, 8, 3, 4, 4, 10, 5, 9, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> lengths = {6, 5, 4, 6, 8};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> lengths = {9, 8, 8, 5, 6, 2, 8, 5, 5, 10, 6};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 323;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> lengths = {3, 9, 3, 3, 3, 10, 1};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> lengths = {8, 10, 5, 4, 2, 3, 5, 7, 3, 1, 3, 7, 1};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> lengths = {7, 4, 9, 6, 1};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> lengths = {1, 1, 8, 5, 2, 3, 7, 5, 6, 3, 6, 6, 6, 1, 1, 6};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> lengths = {9, 4, 7, 4, 3};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> lengths = {4, 10, 2, 4, 8, 6, 10, 4, 8};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> lengths = {5, 6, 8, 5, 10, 10, 8, 9, 9, 9, 6, 7, 7, 10, 5, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 841;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> lengths = {7, 5, 8, 6, 8, 6, 8, 6, 9, 6, 6, 7, 10, 10, 7, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 870;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> lengths = {6, 9, 7, 6, 7, 10, 8, 7, 6, 7, 8, 6, 7, 7, 10, 8};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 784;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> lengths = {5, 5, 7, 8, 10, 6, 9, 9, 8, 10, 7, 8, 8, 8, 7, 8};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 870;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> lengths = {7, 6, 9, 10, 8, 10, 10, 6, 8, 6, 6, 9, 5, 10, 8, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> lengths = {9, 8, 9, 9, 9, 8, 9, 9, 7, 6, 9, 10, 9, 9, 7, 5};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1089;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> lengths = {6, 7, 10, 7, 8, 6, 7, 7, 10, 5, 8, 10, 6, 8, 10, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 961;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> lengths = {6, 7, 5, 10, 7, 10, 10, 9, 6, 5, 5, 7, 9, 8, 7, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 870;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> lengths = {5, 8, 6, 8, 9, 8, 6, 7, 8, 8, 7, 6, 8, 6, 6, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 841;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> lengths = {9, 9, 10, 6, 10, 9, 6, 9, 6, 7, 7, 8, 7, 8, 10, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 960;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> lengths = {5, 10, 8, 6, 9, 7, 8, 8, 6, 7, 7, 7, 10, 8, 5, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 870;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> lengths = {5, 10, 9, 7, 9, 8, 9, 5, 5, 5, 6, 5, 6, 8, 5, 8};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 756;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> lengths = {6, 10, 6, 5, 10, 5, 10, 5, 10, 8, 6, 6, 6, 5, 6, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 729;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> lengths = {10, 9, 10, 9, 10, 10, 9, 10, 6, 10, 5, 10, 6, 7, 10, 6};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1080;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> lengths = {9, 6, 6, 9, 9, 7, 8, 8, 10, 8, 8, 8, 7, 10, 10, 5};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> lengths = {6, 6, 6, 7, 6, 9, 5, 10, 7, 5, 8, 8, 10, 8, 5, 8};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 812;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> lengths = {8, 7, 6, 10, 7, 10, 10, 8, 7, 5, 6, 7, 6, 8, 6, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> lengths = {10, 6, 5, 6, 5, 9, 8, 10, 8, 8, 6, 9, 6, 9, 10, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> lengths = {5, 10, 6, 8, 10, 6, 9, 10, 9, 5, 10, 5, 7, 7, 9, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 992;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> lengths = {6, 7, 8, 7, 10, 5, 8, 8, 7, 5, 5, 8, 5, 6, 8, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 756;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> lengths = {8, 10, 8, 8, 10, 10, 8, 8, 9, 7, 7, 7, 7, 7, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 810;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> lengths = {7, 7, 8, 9, 7, 7, 10, 8, 8, 9, 8, 8, 7, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 700;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> lengths = {10, 7, 7, 9, 8, 10, 10, 9, 10, 9, 10, 9, 10, 8};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 990;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> lengths = {8, 8, 8, 10, 8, 7, 8, 9, 8, 8, 9, 10, 8, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 864;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> lengths = {9, 7, 8, 9, 7, 10, 9, 8, 10, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 437;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> lengths = {9, 9, 7, 9, 7, 8, 8, 8, 7, 7, 10, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> lengths = {9, 8, 10, 9, 10, 7, 8, 10, 9, 10, 10, 10, 9, 7, 8, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1120;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> lengths = {10, 7, 7, 10, 8, 7, 9, 9, 7, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> lengths = {7, 7, 9, 8, 8, 8, 8, 8, 8, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 391;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> lengths = {10, 7, 9, 10, 7, 7, 9, 10, 10, 8, 8, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 650;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> lengths = {7, 8, 7, 7, 8, 9, 9, 8, 10, 8, 8, 9, 7, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 780;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> lengths = {7, 7, 10, 9, 9, 8, 9, 10, 9, 7, 7, 10, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 784;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> lengths = {8, 9, 8, 9, 10, 10, 7, 7, 10, 10, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> lengths = {7, 7, 7, 9, 9, 8, 9, 8, 10, 10, 7, 9, 7, 8};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 728;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> lengths = {7, 7, 10, 8, 7, 7, 10, 10, 8, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 255;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> lengths = {7, 9, 10, 10, 9, 9, 10, 8, 7, 10, 10, 7, 9, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 928;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> lengths = {7, 8, 8, 10, 10, 9, 10, 8, 9, 9, 10, 9, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 810;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> lengths = {10, 8, 7, 9, 10, 9, 9, 7, 9, 7, 9, 9, 8, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 896;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> lengths = {8, 10, 8, 9, 7, 10, 9, 10, 9, 8, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 475;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> lengths = {10, 7, 7, 10, 9, 10, 8, 8, 10, 10, 7, 7, 8, 9, 8, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1020;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> lengths = {9, 8, 10, 9, 10, 9, 8, 10, 9, 10, 10, 10, 9, 9, 8, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1050;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> lengths = {9, 9, 10, 9, 10, 9, 8, 10, 9, 10, 10, 10, 9, 9, 8, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1369;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> lengths = {9, 8, 10, 8, 8, 10, 8, 8, 9, 8, 10, 9, 9, 8, 10, 8};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> lengths = {8, 10, 10, 9, 8, 8, 9, 8, 9, 8, 10, 9, 10, 10, 9, 8};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1080;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> lengths = {10, 9, 8, 9, 9, 10, 10, 8, 8, 9, 10, 8, 8, 8, 8, 8};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> lengths = {10, 10, 9, 9, 9, 9, 9, 9, 9, 9, 10, 9, 10, 9, 10, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1406;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> lengths = {9, 9, 9, 9, 9, 10, 10, 9, 9, 9, 10, 10, 9, 10, 9, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1044;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> lengths = {10, 10, 9, 9, 9, 9, 9, 10, 9, 9, 9, 10, 10, 10, 9, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1406;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> lengths = {10, 10, 10, 10, 9, 10, 9, 10, 10, 9, 10, 9, 9, 9, 6, 2};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1218;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> lengths = {9, 10, 9, 10, 9, 9, 9, 10, 9, 9, 9, 9, 9, 9, 5, 5};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1044;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> lengths = {10, 9, 9, 9, 9, 10, 9, 10, 10, 9, 10, 10, 9, 10, 3, 3};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1140;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> lengths = {10, 10, 9, 10, 10, 9, 10, 9, 10, 10, 9, 10, 9, 10, 6, 2};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1110;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> lengths = {9, 9, 10, 9, 9, 9, 9, 10, 9, 9, 9, 9, 9, 10, 10, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1044;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> lengths = {10, 10, 9, 10, 10, 10, 10, 10, 9, 9, 10, 10, 10, 9, 8, 2};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1170;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> lengths = {10, 10, 10, 10, 10, 9, 10, 9, 10, 10, 10, 9, 9, 10, 8, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1140;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> lengths = {10, 10, 9, 9, 9, 9, 10, 10, 9, 10, 10, 10, 10, 9, 8, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1110;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> lengths = {10, 10, 9, 10, 10, 10, 9, 10, 9, 9, 10, 10, 9, 10, 6, 5};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1330;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> lengths = {10, 9, 10, 10, 9, 9, 9, 10, 9, 10, 10, 10, 10, 9, 7, 4};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1160;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> lengths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1600;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> lengths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1200;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> lengths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 7, 8, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1480;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> lengths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 4, 7, 8, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1360;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> lengths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 7, 7, 8, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1110;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> lengths = {10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 9, 3, 8, 8};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1204;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> lengths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 6, 8, 9};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> lengths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 8, 7, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1170;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> lengths = {2, 6, 4, 10, 2, 8, 1, 8, 2, 1, 4, 8, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> lengths = {1, 3, 3, 4, 5, 7};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> lengths = {1, 9, 9, 9, 9, 10, 10, 10, 10, 9, 1, 1, 1, 1, 1};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 420;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> lengths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    BiggestRectangleHard* pObj = new BiggestRectangleHard();
    clock_t start = clock();
    int result = pObj->findArea(lengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1600;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7442498&rd=9998&pm=6678
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
 
 
typedef vector <int > VI;
#define REP(i,n) for (int i=0; i<n; ++i)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define FOR(i,p,k) for (int i=p; i<=k; ++i)
#define PB push_back
#define ALL(x) x.begin(),x.end()
#define SIZE(x) (int)x.size()
 
const int N=17;
int suma[1<<N];
int t[1<<N]; //da sie
    class BiggestRectangleHard
        { 
        public: 
        int findArea(vector <int> v){ 
          sort(ALL(v));
          int n=SIZE(v);
          int ile=1<<n;
          int res=0;
          REP(mask,ile){
            suma[mask]=0;
            REP(i,n) if ((1<<i)&mask) suma[mask]+=v[i];
            int zbior=mask;
            t[mask]=0; 
            do{
              zbior&=mask;
              if (suma[zbior]*2==suma[mask]){
                t[mask]=1;
                break;
              }
            } while (--zbior>=0);
          }
          REP(mask,ile) if (t[mask]){
            int vv=suma[mask]/2;
            int pelny=(ile-1)^mask;
            int zbior=pelny;
            do{
              zbior&=pelny;
              if (t[zbior]){
                res=max(res,suma[zbior]/2*vv);
              }
            } while (--zbior>=0);
          }
          return res==0?-1:res;
        } 
        
 
         }; 
 
    
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/