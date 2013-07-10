/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12478
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

class PolygonTraversal2 {
public:
    int count(int N, vector<int> points);
};

int PolygonTraversal2::count(int N, vector<int> points) {
    int ret;
    return ret;
}


int test0() {
    int N = 5;
    vector<int> points = {1, 3, 5};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
    vector<int> points = {2, 4, 7};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
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
    int N = 7;
    vector<int> points = {1, 2, 3, 4, 6, 5};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
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
    int N = 11;
    vector<int> points = {1, 5, 10};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1412;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 4;
    vector<int> points = {1, 3};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 4;
    vector<int> points = {1, 2, 3};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
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
    int N = 4;
    vector<int> points = {1, 2, 4};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
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
    int N = 5;
    vector<int> points = {1, 4};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
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
    int N = 5;
    vector<int> points = {1, 5, 3, 2};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 5;
    vector<int> points = {5, 2, 1};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
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
    int N = 5;
    vector<int> points = {4, 1, 5, 2};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
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
    int N = 6;
    vector<int> points = {2, 4, 6};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 6;
    vector<int> points = {6, 5, 2};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 6;
    vector<int> points = {6, 3, 1};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
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
    int N = 6;
    vector<int> points = {3, 4, 2, 6, 5};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 7;
    vector<int> points = {7, 1, 5, 3};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 7;
    vector<int> points = {2, 5, 1};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 7;
    vector<int> points = {1, 2, 6, 7, 3};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 7;
    vector<int> points = {1, 2, 4, 7, 6};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
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
    int N = 8;
    vector<int> points = {3, 5, 7, 1};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 8;
    vector<int> points = {1, 2, 4, 8};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 8;
    vector<int> points = {2, 4, 1, 7};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
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
    int N = 8;
    vector<int> points = {1, 7, 3};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 8;
    vector<int> points = {2, 5, 8, 1, 7, 3};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 9;
    vector<int> points = {1, 4, 7};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 9;
    vector<int> points = {4, 7, 2};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 9;
    vector<int> points = {1, 5, 9, 2, 6};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 10;
    vector<int> points = {1, 9, 4};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 10;
    vector<int> points = {1, 5, 8};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 10;
    vector<int> points = {1, 5, 8, 10};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 11;
    vector<int> points = {5, 6, 8, 1};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 11;
    vector<int> points = {1, 3, 11, 6};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 11;
    vector<int> points = {10, 3, 7, 1, 11};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 11;
    vector<int> points = {11, 10, 2, 3, 7, 1};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 12;
    vector<int> points = {6, 11, 12};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 6100;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 12;
    vector<int> points = {6, 11, 12, 1};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1140;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 12;
    vector<int> points = {6, 11, 12, 1, 3};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 326;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 12;
    vector<int> points = {5, 7, 1, 9, 10};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 796;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 12;
    vector<int> points = {10, 11, 12, 3, 8, 1, 5, 2};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 13;
    vector<int> points = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
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
    int N = 13;
    vector<int> points = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 10, 13};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
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
    int N = 13;
    vector<int> points = {1, 2, 13, 4, 5, 11, 7, 8, 9, 12};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 13;
    vector<int> points = {6, 2, 12};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 70168;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 13;
    vector<int> points = {4, 1};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 13;
    vector<int> points = {13, 1};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 13;
    vector<int> points = {13, 1, 5};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 13;
    vector<int> points = {8, 6, 1, 5, 13};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1576;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 13;
    vector<int> points = {1, 7, 11};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 154108;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 13;
    vector<int> points = {1, 6, 11};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 133032;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 13;
    vector<int> points = {7, 3, 12};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 101044;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 6;
    vector<int> points = {1, 4, 2};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 11;
    vector<int> points = {1, 5, 10};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1412;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 13;
    vector<int> points = {7, 8, 9, 1, 2, 3, 4, 5, 10, 11, 12, 6};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 11;
    vector<int> points = {1, 3};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 13;
    vector<int> points = {12, 3, 4, 5, 6, 7, 8};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 13;
    vector<int> points = {1, 5, 10};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 103784;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 13;
    vector<int> points = {3, 7, 10};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 70168;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 5;
    vector<int> points = {2, 4};
    PolygonTraversal2* pObj = new PolygonTraversal2();
    clock_t start = clock();
    int result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23141587&rd=15494&pm=12478
********************************************************************************
#line 5 "PolygonTraversal2.cpp" 
#include <string> 
#include <vector> 
#include <deque> 
using namespace std; 
int n; 
int visited[15]; 
int nvis = 0; 
int first; 
int intersect(int a, int b){ 
  if(a > b) swap(a, b); 
  int exists = 0; 
  for(int i = a+1; i < b; i++){ 
    if(visited[i] == 1){ 
      exists = 1; 
      break; 
    } 
  } 
  if(exists == 0) return 0; 
  exists = 0; 
  for(int i = 0; i < a; i++){ 
    if(visited[i] == 1){ 
      exists = 1; 
      break; 
    } 
  } 
  for(int i = b+1; i < n; i++){ 
    if(visited[i] == 1){ 
      exists = 1; 
      break; 
    } 
  } 
  if(exists == 0) return 0; 
  return 1; 
} 
int ans = 0; 
void search(int cur){ 
  if(nvis == n){ 
    if(intersect(cur, first)){ 
      ans++; 
    } 
  } 
  for(int i = 0; i < n; i++){ 
    if(i != cur && visited[i] == 0 && intersect(cur, i)){ 
      visited[i] = 1; 
      nvis++; 
      search(i); 
      visited[i] = 0; 
      nvis--; 
    } 
  } 
} 
class PolygonTraversal2 { 
   
public: 
  int count(int N, vector <int> points) { 
    n = N; 
    int M = points.size(); 
    for(int i = 0; i < 15; i++){ 
      visited[i] = 0; 
    } 
    for(int i = 0; i < M; i++){ 
      points[i]--; 
      visited[points[i]] = 1; 
      nvis++; 
    } 
    first = points[0]; 
    search(points[M-1]); 
    return ans; 
  } 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/