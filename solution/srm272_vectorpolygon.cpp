/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5885
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

class VectorPolygon {
public:
    double maxArea(vector<int> dx, vector<int> dy);
};

double VectorPolygon::maxArea(vector<int> dx, vector<int> dy) {
    double ret;
    return ret;
}


int test0() {
    vector<int> dx = {2, 3, -5};
    vector<int> dy = {2, -4, 2};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> dx = {2, -3, -5};
    vector<int> dy = {2, 4, 2};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> dx = {0, 0, 1, -1};
    vector<int> dy = {1, -1, 0, 0};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> dx = {25, 50, 75, 100, -25, -50, -75, -100};
    vector<int> dy = {100, 75, 50, 25, -100, -75, -50, -25};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 31250.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> dx = {100};
    vector<int> dy = {-100};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> dx = {1, -1, 0};
    vector<int> dy = {0, 1, -1};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> dx = {1, -1};
    vector<int> dy = {-1, 1};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
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
    vector<int> dx = {1, 1, -1, -1};
    vector<int> dy = {0, 0, 1, -1};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> dx = {0, 1, -1, 2, -2};
    vector<int> dy = {2, -1, -1, -1, -1};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> dx = {0, 1, -1, 2, -2};
    vector<int> dy = {2, -1, -1, 1, 1};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> dx = {100, 100, -100, -100};
    vector<int> dy = {100, -100, 100, -100};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 20000.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> dx = {0, 100, 100, 100, 0, -100, -100, -100};
    vector<int> dy = {100, 100, 0, -100, -100, -100, 0, 100};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 70000.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> dx = {0, 70, 100, 70, 0, -70, -100, -70};
    vector<int> dy = {100, 70, 0, -70, -100, -70, 0, 70};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 47800.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> dx = {10, 10, 10, 10, 10, 10, 10, -70};
    vector<int> dy = {0, 1, 2, 3, 4, 5, 6, -21};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 280.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> dx = {99, -49, -50};
    vector<int> dy = {100, -50, -50};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> dx = {100, 100, -100, -100, 0, 0, 0, 0};
    vector<int> dy = {0, 0, 0, 0, 100, 100, -100, -100};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 40000.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> dx = {10, -10, 0, 0, -5, -5};
    vector<int> dy = {0, 0, -10, 10, 21, -21};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 205.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> dx = {16, 58, -74};
    vector<int> dy = {94, 6, -100};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 2678.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> dx = {7, -7};
    vector<int> dy = {-5, 5};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> dx = {20, 6, 23, -49};
    vector<int> dy = {-78, 57, 86, -65};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 2958.5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> dx = {60, -1, -16, -43};
    vector<int> dy = {-12, 9, -66, 69};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 2235.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> dx = {14, -14};
    vector<int> dy = {84, -84};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> dx = {62, -62};
    vector<int> dy = {96, -96};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> dx = {-51, -63, 30, -29, 35, 78};
    vector<int> dy = {97, -49, 66, -65, -63, 14};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 15872.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> dx = {81, -96, 12, 32, 68, -97};
    vector<int> dy = {-90, 49, -52, -26, 22, 97};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 11995.5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> dx = {95, 20, -14, -4, -97};
    vector<int> dy = {-95, 30, 47, -37, 55};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 6527.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> dx = {53, 58, -74, -37};
    vector<int> dy = {-90, 99, -47, 38};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 7509.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> dx = {62, -62, -63, 63, -88, 24, -24, 88};
    vector<int> dy = {-12, 12, 85, -85, -94, -100, 100, 94};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 46028.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> dx = {6, 39, 87, -87, 58, -6, -58, -39};
    vector<int> dy = {-51, 87, 9, -9, -78, 51, 78, -87};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 32106.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> dx = {-32, 89, -16, -89, 32, 37, 16, -37};
    vector<int> dy = {43, -99, 71, 99, -43, -25, -71, 25};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 11434.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> dx = {62, -62, 48, 36, -48, -4, -36, 4};
    vector<int> dy = {-48, 48, 34, -36, -34, 70, 36, -70};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 17888.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> dx = {-43, -50, 50, -8, -21, 8, 43, 21};
    vector<int> dy = {5, -42, 42, 60, 77, -60, -5, -77};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 16514.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> dx = {-70, -60, 70, 60, -67, 67, -17, 17};
    vector<int> dy = {88, 26, -88, -26, -36, 36, -62, 62};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 29318.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> dx = {-81, 80, -80, 81, -71, -28, 71, 28};
    vector<int> dy = {-71, -64, 64, 71, 28, 68, -28, -68};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 35665.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> dx = {-27, 21, 27, -22, -21, 22, -71, 71};
    vector<int> dy = {-76, 12, 76, -27, -12, 27, -21, 21};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 9213.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> dx = {-95, 22, 49, -20, 95, 20, -49, -22};
    vector<int> dy = {3, -17, -5, -91, -3, 91, 5, 17};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 18206.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> dx = {74, -28, 28, -31, -62, -74, 31, 62};
    vector<int> dy = {27, -88, 88, 24, 36, -27, -24, -36};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 22943.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> dx = {53, -5, 43, -48, -53, -43, 48, 5};
    vector<int> dy = {-89, 35, -19, 54, 89, 19, -54, -35};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 9870.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> dx = {48, 98, 25, 73, -98, -73, -25, -48};
    vector<int> dy = {-64, -8, 28, -36, 8, 36, -28, 64};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 20608.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> dx = {-22, 38, 82, -38, -82, -60, 60, 22};
    vector<int> dy = {75, 85, -65, -85, 65, -10, 10, -75};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 33040.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> dx = {5, 1, -5, -7, 6, 7, -1, -6};
    vector<int> dy = {51, -43, -51, 35, 8, -35, 43, -8};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 1862.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> dx = {65, 61, 63, -61, -65, -2, 2, -63};
    vector<int> dy = {7, -47, -20, 47, -7, -27, 27, 20};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 12187.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> dx = {73, -7, -40, 40, 33, 7, -33, -73};
    vector<int> dy = {71, 53, -9, 9, 62, -53, -62, -71};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 15281.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> dx = {30, 80, -50, 50, -80, 20, -30, -20};
    vector<int> dy = {-7, -19, 12, -12, 19, -5, 7, 5};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 70.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> dx = {-80, 6, 37, -43, -37, -6, 43, 80};
    vector<int> dy = {8, -16, 4, 12, -4, 16, -12, -8};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 4312.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> dx = {-79, 96, -96, -17, -62, 17, 62, 79};
    vector<int> dy = {-21, 14, -14, 7, -28, -7, 28, 21};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 6370.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> dx = {56, -81, -25, 81, -31, 25, -56, 31};
    vector<int> dy = {-41, 44, 3, -44, 38, -3, 41, -38};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 5999.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> dx = {7, -7, -24, -35, 24, 35, 5, -5};
    vector<int> dy = {-93, 93, 15, -34, -15, 34, 1, -1};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 7667.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> dx = {-80, 80, 4, -28, -4, -57, 57, 28};
    vector<int> dy = {48, -48, -72, -93, 72, -24, 24, 93};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 30225.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> dx = {-63, -49, -84, 84, 49, 26, -26, 63};
    vector<int> dy = {77, -13, 72, -72, 13, 86, -86, -77};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 31536.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> dx = {19, 81, -1, 1, -19, -81, 25, -25};
    vector<int> dy = {-24, -78, -47, 47, 24, 78, 81, -81};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 17008.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> dx = {54, -91, -48, 48, 91, 16, -16, -54};
    vector<int> dy = {80, -99, -85, 85, 99, -31, 31, -80};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 15874.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> dx = {62, -59, 46, -62, 59, -46, -49, 49};
    vector<int> dy = {60, -90, 44, -60, 90, -44, -85, 85};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 8305.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> dx = {-36, -33, -26, 26, 61, 36, -61, 33};
    vector<int> dy = {-35, 25, 19, -19, -80, 35, 80, -25};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 10723.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> dx = {-98, -2, 89, -52, -89, 98, 52, 2};
    vector<int> dy = {-42, -28, 79, -82, -79, 42, 82, 28};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 19332.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> dx = {11, 79, -11, -29, 95, -95, -79, 29};
    vector<int> dy = {36, -91, -36, -10, -23, 23, 91, 10};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 20326.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> dx = {-61, 27, -83, -97, 83, -27, 61, 97};
    vector<int> dy = {-100, -96, -64, -67, 64, 96, 100, 67};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 40029.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> dx = {-42, -42, -67};
    vector<int> dy = {-93, -59, -73};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> dx = {-1, -56, 20, -72, 100, -1, -85};
    vector<int> dy = {-94, -52, -48, -64, -35, -28, 95};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> dx = {-63, -65, 79, 25};
    vector<int> dy = {-45, -88, 90, 96};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> dx = {50, 13, 83, 49};
    vector<int> dy = {-12, -34, -14, 14};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> dx = {23, 53, -21, 38, 62, 65, -31, 60};
    vector<int> dy = {22, 84, 40, 7, -68, -9, -77, 43};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> dx = {47, 33};
    vector<int> dy = {8, -14};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> dx = {0, 39, -23};
    vector<int> dy = {-82, -79, -2};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> dx = {-76, -90, -70, 57, -83, -44, -21};
    vector<int> dy = {73, 98, -63, -24, -34, -74, -73};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> dx = {91, -98, -8};
    vector<int> dy = {-14, 21, -41};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> dx = {-68, -52, 71, -24, -37, 7};
    vector<int> dy = {18, 39, -26, -59, -2, -20};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> dx = {0, 1, 1, -2};
    vector<int> dy = {2, -1, -1, 0};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> dx = {1, 0, 0, 0, 0, 0, 0, -1};
    vector<int> dy = {0, 1, 1, 1, -1, -1, -1, 0};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> dx = {0, 1, 1, 1, -1, -1, -1, 0};
    vector<int> dy = {1, 0, 0, 0, 0, 0, 0, -1};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> dx = {2, 3, -5};
    vector<int> dy = {2, -4, 2};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> dx = {25, 50, 75, 100, -25, -50, -75, -100};
    vector<int> dy = {100, 75, 50, 25, -100, -75, -50, -25};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 31250.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> dx = {0, 30, 0, -30, 10, -6, 3, -7};
    vector<int> dy = {10, 0, -10, 0, 0, -5, -5, 0};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 407.5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> dx = {1, -1, 2, -1, 1, -2};
    vector<int> dy = {1, 1, 0, -1, -1, 0};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> dx = {0, 1, 1, -2};
    vector<int> dy = {2, -1, -1, 0};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> dx = {0, 2, -2, -1, 1};
    vector<int> dy = {2, 0, 0, -1, -1};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> dx = {1, 1, -2, 0, 50};
    vector<int> dy = {1, 1, 0, -2, 50};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> dx = {0, 0, 1, -1, 1};
    vector<int> dy = {1, -1, 0, 0, 1};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> dx = {1, -1, 5, -5, 2};
    vector<int> dy = {5, -5, 1, -1, 2};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 24.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> dx = {20, 20, 0, -20, -20, -60, 40, 20};
    vector<int> dy = {40, 20, 20, 20, 0, -20, -20, -40};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 5000.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> dx = {1, 2, 2, -1, 2, -2, -1, 1};
    vector<int> dy = {1, -1, 2, 1, -1, 1, -2, -1};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> dx = {1, -1, 1, -1, 0};
    vector<int> dy = {1, -1, -1, 0, 1};
    VectorPolygon* pObj = new VectorPolygon();
    clock_t start = clock();
    double result = pObj->maxArea(dx, dy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15306175&rd=8069&pm=5885
********************************************************************************
#line 5 "VectorPolygon.cpp"
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <set>
#include <stack>
#include <deque>
#include <map>
#include <queue>
using namespace std;
 
#define ABS(a) ((a)<0?-(a):a)
 
 
class VectorPolygon {
  public:
 
  int get_size(int x1,int y1,int x2,int y2){
    return ABS(x1*y2-x2*y1);
  }
  
  struct cmp{
    bool operator()(const pair<int,int> a,const pair<int,int> b)const{
      return atan2((double)a.first,(double)a.second)<atan2((double)b.first,(double)b.second);
    }
  };
 
  
  
  double maxArea(vector <int> dx, vector <int> dy) {
    vector<int> perm;
    for(unsigned int i=0;i<dx.size();i++){
      perm.push_back(i+1);
    }
    double max=0;
    for(int i=0;i<45000;i++){
      for(unsigned int i=3;i<=dx.size();i++){
        int x=0,y=0;
        for(unsigned int j=0;j<i;j++){
          x+=dx[perm[j]-1];
          y+=dy[perm[j]-1];
        }
        if(x==0&&y==0){
          vector<pair<int,int> > f;
          for(unsigned int j=0;j<i;j++){
            f.push_back(pair<int,int>(dx[perm[j]-1],dy[perm[j]-1]));
          }
          sort(f.begin(),f.end(),cmp());
          int size=0;
          x=f[0].first;y=f[0].second;
          for(unsigned int i=1;i<f.size();i++){
            size+=get_size(x,y,f[i].first,f[i].second);
            x+=f[i].first;
            y+=f[i].second;
          }
          if(size>max)max=size;
          
        }
      }
      next_permutation(perm.begin(),perm.end());
    }
    return ( max )/2;
        
  }
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/