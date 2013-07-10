/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5879
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

class AimToTen {
public:
    int need(vector<int> marks);
};

int AimToTen::need(vector<int> marks) {
    int ret;
    return ret;
}


int test0() {
    vector<int> marks = {9, 10, 10, 9};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> marks = {8, 9};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> marks = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 950;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> marks = {9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> marks = {1, 5, 1, 8, 10, 10, 1};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> marks = {10};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> marks = {9};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> marks = {10, 10, 10, 10};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
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
    vector<int> marks = {3, 3, 10, 1, 6, 4, 5, 8, 3, 10, 7, 1, 4, 8, 2, 2, 4, 6, 7, 10, 7, 9, 6, 3, 5, 0, 10, 2, 10, 5, 2, 3, 4, 1, 3, 8, 9, 2};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 336;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> marks = {3, 9, 7, 3, 10, 3, 5, 5, 7, 0, 1, 9, 5, 4, 3, 1, 8, 4, 3, 3, 6, 4, 7, 3, 1, 10, 8, 7, 0, 3, 6};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 293;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> marks = {10, 6, 5, 9, 7, 6, 10, 4, 2, 3, 5, 7, 0, 9, 2, 9, 3, 10, 0, 7, 3, 9, 3, 1, 3, 7, 6, 6, 3, 9, 8, 10, 5, 4, 10, 3, 6, 0, 7, 10, 2, 8, 5, 3, 2, 10, 3, 6, 9};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 381;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> marks = {5, 10, 2, 6, 9, 4, 10, 5, 2, 5, 7, 10, 0, 3, 8, 9};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 114;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> marks = {6, 4, 9, 3, 1, 10, 9, 7, 10, 0, 2, 4, 6, 10, 8, 0, 3, 6, 6, 1, 8, 7, 9, 0, 4, 0, 4, 7, 5, 3, 0, 2, 0, 9, 0, 6, 3, 7, 1, 1, 0, 9, 3, 3, 9};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 445;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> marks = {9, 8, 3, 0, 8, 8, 7, 2, 9, 8, 3, 1, 6, 2, 0, 6, 1, 4, 1, 2, 5, 4, 7, 4, 10, 5, 2};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 263;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> marks = {9, 0, 4, 1, 7, 4, 3, 3, 0, 8, 3, 10, 7, 0, 6, 10, 4, 0, 0, 9, 3, 7, 6};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 229;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> marks = {1, 7, 2, 0, 7, 0, 4, 7, 4, 7, 6, 8, 1, 3, 2, 0, 5, 0, 4, 1, 4, 10, 6, 6, 0, 9, 2, 2, 9, 7, 4, 7, 0, 2};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 372;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> marks = {1, 8, 7, 7, 2, 4};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> marks = {7, 10, 10, 2, 3, 4, 9, 6, 5, 10, 3, 1, 2, 5, 4, 5, 4, 7};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> marks = {7, 7, 10, 10, 4, 6, 4, 6, 0, 6, 7, 4, 6, 6, 9};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> marks = {10, 4, 8, 0, 8, 9, 2, 4, 9, 2, 9, 5, 6, 10, 10};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> marks = {3, 8, 7, 7, 5, 8, 2, 4};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> marks = {4, 2, 9, 4, 0, 1, 5, 3, 4, 2, 10, 7, 5, 1, 7, 10, 9, 9, 3, 0, 5, 10, 4, 1, 3, 8, 2, 5, 3, 7};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 284;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> marks = {1, 1, 3, 2, 5, 4, 4, 8, 0, 7, 4, 3, 8, 0, 10, 0};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 184;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> marks = {6, 10, 7, 10, 2, 9, 7, 10, 0, 7, 2, 0, 7, 0, 0, 10, 4, 7, 10, 1, 10, 10, 5, 5, 5, 4, 10, 5, 0, 4, 8, 8, 9, 3, 6, 4, 4, 2, 1, 5, 0, 10, 4, 6, 0, 1};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 398;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> marks = {0};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> marks = {4, 2, 2, 2, 2};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> marks = {6, 7, 5, 4, 2, 5, 7, 5, 1, 6, 1, 7, 7, 3, 1, 0, 10, 6, 6, 6, 7, 5, 9, 8, 1, 8, 10, 6, 3, 9, 1, 10, 6, 7, 4, 7, 9, 2, 1, 5, 4, 7};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 350;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> marks = {1, 8, 8, 7, 1};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> marks = {0, 1, 4, 10, 9, 6, 10, 0, 7, 3, 2, 5, 2, 7, 10, 7, 0, 2, 3, 9, 10, 8, 2, 2, 6, 0, 4, 3, 3, 7, 6, 10, 2, 10, 5, 2, 3, 0, 6, 5, 5, 5, 5, 3, 3, 10};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 430;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> marks = {6, 7, 1, 10, 2, 9, 4, 10, 1, 7, 5, 4, 7};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> marks = {9, 9, 8, 9, 4, 6, 4, 2, 4, 4, 6, 2};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> marks = {7, 1, 7, 1, 0, 3, 6, 0, 1, 8, 10, 8, 2, 1, 7, 0, 10, 4, 3, 8, 1, 0, 2, 8, 1, 4, 3};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> marks = {7, 3, 3, 6, 8, 9, 10, 10, 4, 0, 10, 8, 5, 6, 1, 4, 1, 8, 4, 8, 6, 3, 5, 0, 9, 10, 7, 6, 8, 3, 3, 2, 3, 0, 3, 7, 0, 8, 0, 8, 9, 9};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 350;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> marks = {9, 6, 6, 5, 9, 0, 2, 0, 10, 0, 9, 6, 5, 1, 1, 7, 2, 0, 2, 3, 6, 3, 7, 9, 7, 9, 1, 10, 6, 7, 0, 10, 1, 10, 2, 6, 3, 0};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 362;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> marks = {10, 2, 10, 2, 8, 5, 4, 0, 0, 10, 5, 4, 6, 4, 7, 9, 9, 4, 1, 4, 2, 6, 4, 0, 1, 6, 2, 7, 10, 9, 5, 8, 8, 9, 9, 10, 0, 0, 6, 4, 7, 6, 6, 3, 7, 4, 4, 8, 7, 2};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 422;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> marks = {9, 2, 5, 4, 2, 10, 6, 5, 3, 5, 4, 4, 1, 1, 0, 4, 5, 0, 7, 0, 9, 0, 1, 6, 1, 2, 8, 2};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 320;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> marks = {5, 6, 4, 3, 9, 0, 2, 3, 7};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> marks = {5, 6, 3, 8, 2, 1, 1, 7};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> marks = {7, 0, 1, 8, 4, 3, 0, 1, 5, 2, 9, 2, 7, 1, 4, 5, 4, 9, 10, 0, 8, 8, 0, 4, 1, 6, 6, 7, 10, 0, 7, 6, 8, 2, 10, 0};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 354;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> marks = {3, 2, 5, 1, 8, 6, 0, 10, 1, 1, 4, 8, 8, 4, 4, 5, 1, 0, 9, 5, 10, 4, 1, 4, 2, 6, 1, 2, 5, 4, 8, 6, 7, 9, 0, 7, 2, 10, 7, 7, 9, 0, 9, 4};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 418;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> marks = {6, 2, 1, 5, 8, 9, 7, 0, 3, 4, 8, 4, 1, 3, 3, 2, 5, 1, 3, 9, 1, 0, 8, 2, 7, 7, 0};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 295;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> marks = {2, 9, 2, 7, 9, 2, 8, 4, 5, 10, 3, 9, 7, 8, 1, 3, 4, 5, 6, 8, 5, 9, 6, 9, 0, 8};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> marks = {6, 3, 1, 8, 4, 10, 4, 2, 0, 9, 5, 4, 0, 5, 3, 3, 6, 5, 10, 9, 2, 9, 0, 7, 0, 0};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 264;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> marks = {4, 4, 8, 6, 0, 1, 3, 4, 2, 4, 10, 2, 5, 4, 4, 2, 2, 1, 10, 2, 9, 6, 6, 1, 3, 3};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 282;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> marks = {3, 1, 8, 10, 1, 6, 1, 10, 8, 1, 5, 9, 5, 3, 4, 10, 2, 5, 7, 1, 3, 2, 5, 8, 9, 0, 3, 6, 10, 0};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 278;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> marks = {9, 8, 10, 3};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> marks = {4, 1, 10, 1, 2, 0};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> marks = {3, 7, 6};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> marks = {6, 1, 3, 6, 6, 5, 1, 3, 5, 3, 1, 9, 1, 7, 4, 8, 0, 6, 8, 8, 4, 9, 2, 2, 8, 3, 0, 9, 3, 10, 2, 1, 2, 10, 5, 7, 10, 3, 8};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> marks = {1};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> marks = {2, 0, 5, 8, 5};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> marks = {9, 10, 7, 1, 7, 6, 1, 2, 3, 1, 6, 4, 10, 7, 9, 9, 0, 1, 5, 2, 6, 4, 1, 2, 10, 6, 0, 2, 10, 4, 6, 4, 1, 3, 8, 8, 4, 1, 9, 6, 6, 8, 0, 10, 7, 7};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 408;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> marks = {4, 3, 7, 10, 0, 0, 2, 5, 7, 2, 5, 10};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> marks = {6, 0, 0, 2, 6, 7, 1, 1, 5, 5, 1, 1, 10, 3, 1, 4, 0, 1, 1, 9, 8, 10, 7, 7, 5, 3, 8, 0, 0, 8, 5, 7, 3, 7, 3, 8, 0, 2, 1, 1, 8, 2, 1, 0, 10, 8, 2};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 517;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> marks = {3, 8, 2, 6, 4, 9, 3, 7, 4, 2, 5, 3, 6, 2, 6, 6};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 152;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> marks = {0, 10, 10, 9, 1, 10, 6, 8, 2, 8, 5, 3, 2, 3, 2, 8, 10, 1, 8, 6, 10, 8, 1, 5, 3, 9, 0, 5};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 226;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> marks = {7, 7, 8, 8, 8, 7, 2, 6, 0, 8, 8, 1, 3, 10, 6, 4};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> marks = {3, 4, 2, 6, 3, 0, 8, 10, 7, 0, 2, 5, 9, 7, 1, 10, 2, 6, 5};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> marks = {6};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> marks = {10, 10, 10, 1};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> marks = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 2};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> marks = {10, 10, 10, 10, 4};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> marks = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 0, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 5};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> marks = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 6, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 1};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> marks = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 8};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> marks = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 0};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> marks = {10, 10, 10, 10, 10, 3, 10, 3, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 0, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> marks = {10, 0};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> marks = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 8, 4};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> marks = {10, 10, 10, 10, 8};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> marks = {0, 1, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 928;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> marks = {10, 10, 10, 10};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> marks = {10, 10, 10, 10, 10, 10, 10, 10, 10, 9};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> marks = {10};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> marks = {0};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> marks = {9, 10, 10};
    AimToTen* pObj = new AimToTen();
    clock_t start = clock();
    int result = pObj->need(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10263142&rd=8070&pm=5879
********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i,f,t) for(int i=f;i<=t;i++)
#define debln(a) cout<< #a <<" : " << a << endl;
using namespace std;
 
class AimToTen {
  public:
  int need(vector <int> marks) {
    double res = 0;
    FOR(i,marks.size()) res+=marks[i];
    int i = 0;
    int all = marks.size();
    while(res/all<9.5) { i++; res+=10; all++; }
    return i;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/