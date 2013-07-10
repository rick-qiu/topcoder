/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2920
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

class HexagonIntersections {
public:
    int count(int x0, int y0, int x1, int y1);
};

int HexagonIntersections::count(int x0, int y0, int x1, int y1) {
    int ret;
    return ret;
}


int test0() {
    int x0 = 1;
    int y0 = -2;
    int x1 = 3;
    int y1 = 1;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int x0 = 0;
    int y0 = 0;
    int x1 = 1;
    int y1 = 0;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
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
    int x0 = 0;
    int y0 = 0;
    int x1 = 1;
    int y1 = 1;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int x0 = 0;
    int y0 = 0;
    int x1 = 0;
    int y1 = 1;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
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
    int x0 = 0;
    int y0 = 0;
    int x1 = -1;
    int y1 = 0;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int x0 = 0;
    int y0 = 0;
    int x1 = -1;
    int y1 = -1;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int x0 = 0;
    int y0 = 0;
    int x1 = 0;
    int y1 = -1;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
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
    int x0 = 11;
    int y0 = 10;
    int x1 = 10;
    int y1 = 10;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int x0 = 11;
    int y0 = 11;
    int x1 = 10;
    int y1 = 10;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int x0 = 10;
    int y0 = 11;
    int x1 = 10;
    int y1 = 10;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int x0 = 9;
    int y0 = 10;
    int x1 = 10;
    int y1 = 10;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int x0 = 9;
    int y0 = 9;
    int x1 = 10;
    int y1 = 10;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
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
    int x0 = 10;
    int y0 = 9;
    int x1 = 10;
    int y1 = 10;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int x0 = 4;
    int y0 = 2;
    int x1 = 0;
    int y1 = 0;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int x0 = 2;
    int y0 = 4;
    int x1 = 0;
    int y1 = 0;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int x0 = -2;
    int y0 = 2;
    int x1 = 0;
    int y1 = 0;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int x0 = -4;
    int y0 = -2;
    int x1 = 0;
    int y1 = 0;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int x0 = -2;
    int y0 = -4;
    int x1 = 0;
    int y1 = 0;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int x0 = 2;
    int y0 = -2;
    int x1 = 0;
    int y1 = 0;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int x0 = 0;
    int y0 = 0;
    int x1 = 4;
    int y1 = -1;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
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
    int x0 = 0;
    int y0 = 0;
    int x1 = 10;
    int y1 = 2;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int x0 = 500;
    int y0 = 500;
    int x1 = 505;
    int y1 = 504;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int x0 = 3000;
    int y0 = -2000;
    int x1 = 3012;
    int y1 = -1985;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
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
    int x0 = 0;
    int y0 = 0;
    int x1 = 1;
    int y1 = 5;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int x0 = 0;
    int y0 = 0;
    int x1 = -4;
    int y1 = 16;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int x0 = 4;
    int y0 = 5;
    int x1 = -1;
    int y1 = 1;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int x0 = 20;
    int y0 = 0;
    int x1 = 0;
    int y1 = -25;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int x0 = -10000;
    int y0 = -10000;
    int x1 = 10000;
    int y1 = 10000;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 20001;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int x0 = -10000;
    int y0 = -10000;
    int x1 = 10000;
    int y1 = 9999;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 26666;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int x0 = -10000;
    int y0 = -10000;
    int x1 = 9999;
    int y1 = 9998;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 26666;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int x0 = -10000;
    int y0 = 10000;
    int x1 = 10000;
    int y1 = -10000;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 20001;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int x0 = -9999;
    int y0 = 10000;
    int x1 = 10000;
    int y1 = -10000;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 40000;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int x0 = -9999;
    int y0 = 9998;
    int x1 = 10000;
    int y1 = -10000;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 39998;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int x0 = 9284;
    int y0 = 3473;
    int x1 = 2374;
    int y1 = 8372;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 12480;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int x0 = -2375;
    int y0 = 9374;
    int x1 = 283;
    int y1 = 5478;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 6967;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int x0 = -10000;
    int y0 = 51;
    int x1 = 10000;
    int y1 = 51;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 20001;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int x0 = -10000;
    int y0 = -51;
    int x1 = 10000;
    int y1 = -52;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 26668;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int x0 = -2004;
    int y0 = -1002;
    int x1 = -2000;
    int y1 = -1000;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int x0 = 54;
    int y0 = 93;
    int x1 = 64;
    int y1 = 95;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int x0 = 0;
    int y0 = 0;
    int x1 = 19;
    int y1 = 20;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int x0 = 0;
    int y0 = 0;
    int x1 = 19;
    int y1 = -20;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int x0 = 9999;
    int y0 = 3456;
    int x1 = -9999;
    int y1 = -9999;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 22294;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int x0 = 0;
    int y0 = 0;
    int x1 = 1;
    int y1 = 10000;
    HexagonIntersections* pObj = new HexagonIntersections();
    clock_t start = clock();
    int result = pObj->count(x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    int expected = 13334;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10225719&rd=5852&pm=2920
********************************************************************************
//common header
#ifdef WIN32
#  pragma warning(disable:4786)
#  define for if (0); else for
#endif
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
 
//64 bit integer definition
#ifdef WIN32
#define in_routine(type,spec) \
istream& operator>>(istream& s,type &d){char b[30];s>>b;sscanf(b,spec,&d);return s;}
#define out_routine(type,spec) \
ostream& operator<<(ostream& s,type d){char b[30];sprintf(b,spec,d);s<<b;return s;}
typedef signed __int64 i64; in_routine(i64,"%I64d") out_routine(i64,"%I64d")
typedef unsigned __int64 u64; in_routine(u64,"%I64u") out_routine(u64,"%I64u")
#else
typedef signed long long i64;
typedef unsigned long long u64;
#endif
 
//common routines
#ifdef WIN32
#define min(a,b) _cpp_min(a,b)
#define max(a,b) _cpp_max(a,b)
#endif
#define abs(a) ((a)>0?(a):-(a))
#define s2d(s,d) {istringstream(s)>>d;}
#define d2s(d,s) {ostringstream t;t<<d;s=t.str();}
int gcd(int a,int b){for(int c;b;c=a,a=b,b=c%b);return a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
 
//remove routine
template <class T>
void remove(vector<T>& v,const T&e){
  v.resize(remove(v.begin(),v.end(),e)-v.begin());
}
template <class T>
vector<T> remove_copy(vector<T>& v,const T&e){
  vector<T> result;
  remove_copy(v.begin(),v.end(),back_inserter(result),e);
  return result;
}
 
//output routine
ostream& operator<<(ostream& s,string d){
  s<<'\"'<<d.c_str()<<'\"';
  return s;
}
template <class T>
ostream& operator<<(ostream& s,vector<T> d){
  s<<"{";
  for (typename vector<T>::iterator i=d.begin();i!=d.end();i++)
    s<<(i!=d.begin()?",":"")<<*i;
  s<<"}";
  return s;
}
 
//parsing routine
template <class T>
vector<basic_string<T> > parse(const basic_string<T> &s,const basic_string<T> &delim){
  vector<basic_string<T> > ret(0);
  for (int b,e=0;;ret.push_back(s.substr(b,e-b)))
    if ((b=s.find_first_not_of(delim,e))==(e=s.find_first_of(delim,b)))
      return ret;
}
vector<int> intparse(const string &s,const string &delim=" \t\n"){
  vector<string> tmp=parse(s,delim);
  vector<int> ret(0);
  int t;
  for (vector<string>::iterator i=tmp.begin();i!=tmp.end();i++)
    sscanf(i->c_str(),"%d",&t),ret.push_back(t);
  return ret;
}
 
//name mapper
class mapper{
public:
  map<string,int> m;
  vector<string> v;
  void reset(){
    v.clear();
    m.clear();
  }
  int size(){
    return v.size();
  }
  int get(const string str){
    if (m.find(str)==m.end()){
      m[str]=v.size();
      v.push_back(str);
    }
    return m[str];
  }
  string get(int i){
    return v[i];
  }
  vector<int> get(const vector<string>& strs){
    vector<int> ret;
    ret.reserve(strs.size()+2);
    for(int i=0;i<strs.size();i++)
      ret.push_back(get(strs[i]));
    return ret;
  }
  vector<string> get(const vector<int>& is){
    vector<string> ret;
    ret.reserve(is.size()+2);
    for(int i=0;i<is.size();i++)
      ret.push_back(get(is[i]));
    return ret;
  }
};
 
const double SQRT3 = sqrt(3.0);
const double eps = 1e-6;
 
struct point{double x,y;};
 
double xmult(point p1,point p2,point p0){
  return (p1.x-p0.x)*(p2.y-p0.y)-(p2.x-p0.x)*(p1.y-p0.y);
}
 
int opposite_side(point p1,point p2,point l1,point l2){
  double a = xmult(l1,p1,l2);
  double b = xmult(l1,p2,l2);
  return (a < -eps && b > eps) || (a > eps && b < -eps);
}
 
class HexagonIntersections{
public:
  point pos(int x, int y) {
    point p;
    p.x = x * 1.5;
    p.y = (y - x * 0.5) * SQRT3;
    return p;
  }
  double cut(point a, point b, double x) {
    return a.y + (b.y - a.y) / (b.x - a.x) * (x - a.x);
  }
  bool cross(point a, point b, point c) {
    point p[6];
    for (int i = 0; i < 6; ++i) p[i] = c;
    p[0].x -= 1;
    p[1].x -= .5;
    p[1].y += SQRT3 / 2;
    p[2].x += .5;
    p[2].y += SQRT3 / 2;
    p[3].x += 1;
    p[4].x += .5;
    p[4].y -= SQRT3 / 2;
    p[5].x -= .5;
    p[5].y -= SQRT3 / 2;
    for (int i = 0; i < 6; ++i) if (opposite_side(p[i], p[(i + 1) % 6], a, b)) return true;
    for (int i = 0; i < 6; ++i) if (opposite_side(p[i], p[(i + 2) % 6], a, b)) return true;
    for (int i = 0; i < 6; ++i) if (opposite_side(p[i], p[(i + 3) % 6], a, b)) return true;
    return false;
  }
  int count(int x0,int y0,int x1,int y1){
    if (x0 == x1) return abs(y0 - y1) + 1;
    if (x0 > x1) {
      swap(x0, x1);
      swap(y0, y1);
    }
    point from = pos(x0, y0);
    point to = pos(x1, y1);
    int ret = 0;
    for (int x = x0; x <= x1; ++x) {
      double z0 = cut(from, to, 1.5 * x - 1) / SQRT3 + x * 0.5;
      double z1 = cut(from, to, 1.5 * x + 1) / SQRT3 + x * 0.5;
      int a, b;
      if (from.y < to.y) {
        a = (int) floor(z0);
        if (x == x0) a = y0;
        b = (int) ceil(z1);
        if (x == x1) b = y1;
      } else {
        a = (int) floor(z1);
        if (x == x1) a = y1;
        b = (int) ceil(z0);
        if (x == x0) b = y0;
      }
      int cc = 0;
      for (int i = a; i <= b; ++i) {
        if (cross(from, to, pos(x, i))) {
          ++ret;
        }
      }
    }
    return ret;
  }
};

********************************************************************************
*******************************************************************************/