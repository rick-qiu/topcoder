/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12477
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

class PolygonTraversal {
public:
    long count(int N, vector<int> points);
};

long PolygonTraversal::count(int N, vector<int> points) {
    long ret;
    return ret;
}


int test0() {
    int N = 5;
    vector<int> points = {1, 3, 5};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 18;
    vector<int> points = {1, 7, 18};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 4374612736;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 56;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 38;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 52;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 400;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 116;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 86;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 56;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 146;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 6100;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1140;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 326;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 796;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 70168;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1576;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 14;
    vector<int> points = {6, 14, 13, 1};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 76864;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 14;
    vector<int> points = {8, 6, 2, 12, 13};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 50644;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 14;
    vector<int> points = {2, 1, 14, 5, 6, 7, 10};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 276;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 14;
    vector<int> points = {2, 5, 10};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 426528;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 14;
    vector<int> points = {14, 5, 10};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1246144;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 15;
    vector<int> points = {2, 15, 1, 7, 9};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 95220;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 15;
    vector<int> points = {8, 1, 4, 15, 11};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 313496;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 15;
    vector<int> points = {15, 14, 5, 6};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 297584;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 15;
    vector<int> points = {11, 15, 13};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 2155258;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 15;
    vector<int> points = {10, 8, 9, 3, 1, 15, 2, 4, 7, 12};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 16;
    vector<int> points = {5, 6, 8, 15, 1};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1921728;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 16;
    vector<int> points = {1, 3, 2, 9, 10};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 550700;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 16;
    vector<int> points = {1, 2, 3, 4, 5, 10, 11, 12, 13, 14};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 44;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 17;
    vector<int> points = {17, 5};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 17;
    vector<int> points = {16, 17, 5};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 17;
    vector<int> points = {16, 17, 2, 5};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 2235898;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 17;
    vector<int> points = {17, 16, 2, 8, 1};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 13669792;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 17;
    vector<int> points = {2, 10, 15};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 2016736816;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 17;
    vector<int> points = {9, 3, 14};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1737906896;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 17;
    vector<int> points = {10, 3, 14};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1915488320;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 17;
    vector<int> points = {2, 9, 14};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 2035755456;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 17;
    vector<int> points = {5, 17, 10, 3, 4};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 27419344;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 17;
    vector<int> points = {5, 17, 10, 3, 4, 9, 13, 15};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 82656;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 17;
    vector<int> points = {2, 5, 17, 10, 3, 4, 9, 13, 15, 1};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1488;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 17;
    vector<int> points = {2, 5, 17, 10, 3, 4, 9, 13, 15, 1, 14};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 168;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 18;
    vector<int> points = {1, 9, 14};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 27345704640;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 18;
    vector<int> points = {2, 9, 14};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 25330052000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 18;
    vector<int> points = {17, 9, 2};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 21968748592;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 18;
    vector<int> points = {1, 3};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 18;
    vector<int> points = {1, 18, 6};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 18;
    vector<int> points = {18, 9, 1};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 13109552944;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 18;
    vector<int> points = {2, 5, 7};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 480485858;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 18;
    vector<int> points = {6, 4, 16};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1345290076;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 18;
    vector<int> points = {17, 13, 15, 1};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 49084416;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 18;
    vector<int> points = {17, 3, 15, 2};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 543620160;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 18;
    vector<int> points = {17, 3, 16, 2};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 237438720;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 18;
    vector<int> points = {1, 3, 5, 7, 9};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 18423198;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 18;
    vector<int> points = {1, 4, 8, 12, 16};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 682820640;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 18;
    vector<int> points = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 18;
    vector<int> points = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 18};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 18;
    vector<int> points = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 17, 18};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 18;
    vector<int> points = {18, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 16};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 18;
    vector<int> points = {18, 2, 3, 4, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 16};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 18;
    vector<int> points = {18, 2, 6, 3, 7, 8, 9, 11, 12, 13, 14, 17, 16};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 18;
    vector<int> points = {18, 2, 6, 3, 7, 8, 9, 10, 11, 12, 13, 14, 17};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 18;
    vector<int> points = {18, 10, 11, 12, 13, 14, 17};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 235892;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 18;
    vector<int> points = {1, 6, 12, 18};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 3314809360;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 13;
    vector<int> points = {1, 7, 11};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 154108;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 18;
    vector<int> points = {16, 8, 10};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 17164729212;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 6;
    vector<int> points = {1, 4, 2};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 18;
    vector<int> points = {1, 7, 14};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 20313615104;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 18;
    vector<int> points = {1, 16, 10};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 4339392736;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 18;
    vector<int> points = {3, 8, 12};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 10228234072;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 18;
    vector<int> points = {1, 4, 9};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 3207961952;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 18;
    vector<int> points = {3, 7, 9};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1615250194;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 6;
    vector<int> points = {5, 2, 6};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 18;
    vector<int> points = {1, 2};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 18;
    vector<int> points = {18, 11, 1};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 7548898656;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 18;
    vector<int> points = {5, 11, 18};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 20313615104;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 18;
    vector<int> points = {18, 2, 8};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1345290076;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 18;
    vector<int> points = {1, 3, 4, 5, 7, 8, 9, 13, 14, 18};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 5048;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 18;
    vector<int> points = {1, 7};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 18;
    vector<int> points = {1, 5, 9};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 5195712492;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 18;
    vector<int> points = {1, 7, 18};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 4374612736;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 18;
    vector<int> points = {18, 15, 11, 6};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 2571110656;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 7;
    vector<int> points = {3, 5, 1};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 5;
    vector<int> points = {4, 3, 1, 5};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 18;
    vector<int> points = {1, 10, 5};
    PolygonTraversal* pObj = new PolygonTraversal();
    clock_t start = clock();
    long result = pObj->count(N, points);
    clock_t end = clock();
    delete pObj;
    long expected = 25451110512;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22740438&rd=15494&pm=12477
********************************************************************************
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <map>
#include <set>
#include <memory.h>
#include <cstring>
#include <sstream>
using namespace std;
 
#define forn(i, n) for (int i=0; i < (int)(n); i++)
typedef long long ll;
 
vector<int> pp;
ll f[1<<18][18];
int full, n;
 
ll getf(int mask, int last) {
  if (mask == full) {
    if ((last+1) % n == pp[0] || (last-1+n) % n == pp[0]) return 0;
    return 1;
  }
  if (f[mask][last] != -1) return f[mask][last];
  ll& res = f[mask][last];
  res = 0;
 
  forn(j, n)
    if ((mask & (1 << j)) == 0) {
      int mi = min(j, last);
      int ma = max(j, last);
      bool ok1 = false, ok2 = false;
      for (int i = 0; i < n && !(ok1 && ok2); i++)
        if (i != mi && i != ma)
          if (mask & (1 << i))
            if (mi < i && i < ma) ok1 = true;
            else ok2 = true;
      if (ok1 && ok2) res += getf(mask | (1 << j), j);
    }
 
  return res;
}
 
class PolygonTraversal {
public:
    long long ans;
    long long count(int N, vector <int> points) {
      forn(i, points.size()) points[i]--;
      n = N;
      pp = points;
 
      int mask = 0;
      forn(i, pp.size()) {
        mask |= 1 << pp[i];
      }
      full = 1 << N;
      full--; 
      memset(f, 0xff, sizeof(f));
        return getf(mask, pp[pp.size() - 1]);
    }
};
 
// Roman Udovichenko, 2013.
 
 
// Powered by FileEdit
 
// Powered by moj 4.17+ [C++ mod by Romka]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/