/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10735
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

class DrawingLines {
public:
    double countLineCrossings(int n, vector<int> startDot, vector<int> endDot);
};

double DrawingLines::countLineCrossings(int n, vector<int> startDot, vector<int> endDot) {
    double ret;
    return ret;
}


int test0() {
    int n = 3;
    vector<int> startDot = {2};
    vector<int> endDot = {3};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 5;
    vector<int> startDot = {1, 4};
    vector<int> endDot = {3, 1};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 4;
    vector<int> startDot = {4, 1};
    vector<int> endDot = {4, 1};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 8;
    vector<int> startDot = {1, 4, 3, 6, 7};
    vector<int> endDot = {1, 3, 2, 4, 5};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
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
    vector<int> startDot = {1};
    vector<int> endDot = {2};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 2;
    vector<int> startDot = {1};
    vector<int> endDot = {1};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
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
    int n = 2;
    vector<int> startDot = {2};
    vector<int> endDot = {1};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 6;
    vector<int> startDot = {2};
    vector<int> endDot = {4};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 7.8;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 100;
    vector<int> startDot = {3, 6, 84, 35, 66, 44, 13, 53, 85, 98, 4, 7};
    vector<int> endDot = {8, 5, 3, 100, 1, 55, 24, 64, 75, 87, 53, 23};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2357.772727272727;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 4;
    vector<int> startDot = {1, 2, 4};
    vector<int> endDot = {1, 2, 4};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 10000;
    vector<int> startDot = {4783, 9177, 2796, 8835, 1586, 4640, 2473, 638, 7421, 5155, 4923, 1637, 8779, 6409, 8522, 9062, 5331, 453, 6154, 536, 7749, 8644, 9015, 4444, 1769, 9707, 551, 334, 3173, 1052, 7340, 9730, 5398, 7519, 4721, 2489, 7715, 2827, 9866, 4188, 7646, 7596, 2790, 6573, 1732, 2556, 8302, 5754, 138, 7372};
    vector<int> endDot = {7451, 4790, 3658, 3838, 8454, 9727, 5566, 1750, 1586, 2417, 8838, 9851, 2854, 1893, 6245, 9973, 9534, 376, 1835, 9187, 1843, 4951, 4237, 8851, 3891, 1315, 7555, 2822, 7199, 9118, 3844, 4801, 9799, 4828, 4091, 8550, 1776, 6994, 9077, 7551, 3806, 9690, 3184, 2227, 2985, 3325, 9357, 9806, 9900, 9590};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.500702760673367E7;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 10000;
    vector<int> startDot = {1};
    vector<int> endDot = {10000};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.50024995E7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 10000;
    vector<int> startDot = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> endDot = {10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985, 9984, 9983, 9982, 9981, 9980, 9979, 9978, 9977, 9976, 9975, 9974, 9973, 9972, 9971, 9970, 9969, 9968, 9967, 9966, 9965, 9964, 9963, 9962, 9961, 9960, 9959, 9958, 9957, 9956, 9955, 9954, 9953, 9952, 9951};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.52468625E7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 51;
    vector<int> startDot = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> endDot = {51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1275.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 10;
    vector<int> startDot = {2};
    vector<int> endDot = {10};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 26.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 10000;
    vector<int> startDot = {1};
    vector<int> endDot = {10000};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.50024995E7;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 10000;
    vector<int> startDot = {10000};
    vector<int> endDot = {1};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.50024995E7;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 10000;
    vector<int> startDot = {1};
    vector<int> endDot = {1};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.49925005E7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 10000;
    vector<int> startDot = {10000};
    vector<int> endDot = {10000};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.49925005E7;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 10000;
    vector<int> startDot = {5000};
    vector<int> endDot = {5000};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4997499999949995E7;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 10000;
    vector<int> startDot = {4764};
    vector<int> endDot = {1378};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.499732863861386E7;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 10000;
    vector<int> startDot = {4388};
    vector<int> endDot = {6727};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.499771151740174E7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 10000;
    vector<int> startDot = {9444};
    vector<int> endDot = {4280};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4998140372387238E7;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 6;
    vector<int> startDot = {2, 3};
    vector<int> endDot = {3, 2};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 18;
    vector<int> startDot = {1, 4};
    vector<int> endDot = {8, 15};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 78.75;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 116;
    vector<int> startDot = {36, 40};
    vector<int> endDot = {81, 36};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 3336.657894736842;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 453;
    vector<int> startDot = {304, 263};
    vector<int> endDot = {233, 341};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 51168.92350332594;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 2806;
    vector<int> startDot = {726, 2629};
    vector<int> endDot = {1791, 721};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1968490.7738944364;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 10000;
    vector<int> startDot = {9467, 8680};
    vector<int> endDot = {503, 4373};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5001980324364875E7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 10;
    vector<int> startDot = {10, 2, 5, 3, 6, 1};
    vector<int> endDot = {6, 1, 3, 5, 2, 10};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 21.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 83;
    vector<int> startDot = {37, 1, 35, 82, 8, 10};
    vector<int> endDot = {37, 4, 1, 10, 29, 58};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1686.2337662337663;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 414;
    vector<int> startDot = {369, 306, 127, 3, 221, 192};
    vector<int> endDot = {315, 79, 400, 298, 193, 65};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 42877.063725490196;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 2836;
    vector<int> startDot = {826, 1516, 2833, 920, 1817, 1659};
    vector<int> endDot = {641, 1194, 452, 2736, 2121, 2124};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2010815.9212014135;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 10000;
    vector<int> startDot = {2096, 1495, 6372, 7365, 8852, 9404};
    vector<int> endDot = {1070, 8128, 7879, 1966, 6435, 2733};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4998946932459477E7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 16;
    vector<int> startDot = {13, 8, 9, 7, 14, 16, 1, 2, 4, 15, 3, 10, 5, 12};
    vector<int> endDot = {16, 3, 1, 11, 10, 9, 15, 14, 12, 8, 4, 13, 6, 2};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 67.5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 126;
    vector<int> startDot = {16, 45, 8, 18, 80, 85, 79, 57, 103, 34, 49, 29, 23, 97};
    vector<int> endDot = {119, 60, 122, 53, 71, 51, 65, 21, 66, 105, 93, 74, 49, 34};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 4059.482142857143;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 838;
    vector<int> startDot = {158, 607, 8, 469, 78, 350, 183, 12, 695, 68, 113, 239, 620, 417};
    vector<int> endDot = {403, 447, 731, 115, 437, 336, 573, 815, 485, 712, 10, 9, 789, 813};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 175698.59708737864;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 6756;
    vector<int> startDot = {1316, 6218, 3846, 1024, 2848, 1005, 1327, 1386, 932, 4183, 3494, 2248, 5475, 4572};
    vector<int> endDot = {497, 6674, 2167, 1337, 4308, 2718, 3506, 4880, 4784, 5012, 1059, 4799, 4863, 877};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1405201537970928E7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 10000;
    vector<int> startDot = {2814, 3229, 4699, 4819, 9014, 7037, 6404, 5978, 3262, 49, 5855, 2434, 4939, 3523};
    vector<int> endDot = {5260, 2529, 9395, 1182, 2368, 4358, 8113, 3667, 1244, 4066, 2468, 1210, 2317, 188};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4993422972261164E7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 45;
    vector<int> startDot = {31, 42, 13, 39, 32, 26, 35, 29, 27, 14, 4, 2, 41, 20, 45, 16, 36, 34, 3, 33, 38, 25, 12, 44, 15, 10, 5, 28, 9, 1, 18, 19, 8, 22, 7, 11, 21, 23, 17, 37, 24};
    vector<int> endDot = {26, 19, 7, 4, 3, 8, 12, 6, 33, 13, 29, 10, 23, 16, 41, 44, 35, 31, 2, 45, 40, 1, 22, 43, 32, 20, 30, 14, 21, 27, 38, 15, 17, 39, 34, 36, 9, 24, 25, 37, 28};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 451.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 150;
    vector<int> startDot = {135, 13, 21, 78, 24, 25, 5, 114, 133, 97, 117, 149, 33, 144, 35, 14, 72, 100, 132, 140, 16, 124, 3, 49, 54, 68, 34, 103, 51, 107, 47, 98, 110, 11, 61, 56, 39, 137, 65, 27, 125};
    vector<int> endDot = {105, 120, 55, 47, 69, 98, 24, 13, 8, 102, 144, 54, 18, 101, 141, 22, 135, 97, 42, 60, 31, 80, 11, 59, 40, 111, 114, 45, 150, 110, 76, 147, 10, 93, 17, 89, 29, 58, 148, 129, 15};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 5596.532110091744;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 1752;
    vector<int> startDot = {1703, 1313, 253, 1118, 603, 921, 374, 175, 1613, 926, 1407, 1174, 1022, 770, 1142, 851, 123, 1230, 1424, 1709, 220, 1115, 182, 626, 843, 1620, 1027, 115, 661, 520, 1097, 608, 568, 1293, 1327, 347, 675, 63, 1602, 831, 106};
    vector<int> endDot = {536, 1713, 611, 433, 1055, 1417, 829, 1539, 668, 1168, 835, 16, 268, 1528, 72, 1392, 83, 258, 424, 1579, 567, 696, 80, 252, 749, 938, 801, 761, 1279, 1497, 1255, 19, 386, 369, 535, 1220, 992, 61, 38, 1403, 1341};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 767110.1879018118;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 10000;
    vector<int> startDot = {8260, 1953, 780, 9665, 3026, 249, 8299, 8988, 4057, 6505, 8226, 8801, 6107, 2087, 935, 1045, 1128, 904, 8367, 275, 1803, 4630, 4522, 8072, 3150, 3901, 8307, 7049, 2481, 8914, 6457, 4546, 4812, 6326, 9967, 8578, 3454, 444, 1420, 8604, 7769};
    vector<int> endDot = {8175, 4007, 6671, 4696, 7834, 2075, 7195, 8547, 9254, 6525, 2663, 5615, 8262, 9563, 9171, 4432, 1625, 8515, 3735, 973, 9321, 1507, 1553, 483, 1190, 4895, 1928, 7903, 1231, 5633, 6161, 7289, 1273, 3956, 6261, 277, 8182, 3167, 8907, 8913, 7103};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4996377631238077E7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 56;
    vector<int> startDot = {29, 30, 7, 50, 34, 38, 23, 22, 54, 44, 27, 43, 45, 32, 47, 4, 16, 5, 46, 26, 55, 31, 42, 56, 49, 2, 15, 33, 53, 21, 52, 20, 48, 8, 3, 28, 51, 24, 18, 14, 37, 25, 36, 39, 19, 6, 10, 17, 13, 9};
    vector<int> endDot = {13, 53, 54, 55, 33, 44, 26, 22, 27, 24, 52, 39, 37, 14, 6, 41, 1, 56, 19, 5, 51, 50, 18, 30, 38, 7, 16, 8, 9, 49, 23, 29, 36, 25, 21, 34, 3, 20, 32, 2, 48, 12, 31, 45, 4, 11, 35, 40, 47, 46};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 761.166666666667;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 110;
    vector<int> startDot = {14, 35, 6, 76, 52, 38, 69, 51, 36, 32, 91, 79, 86, 50, 104, 94, 33, 39, 105, 57, 54, 21, 62, 25, 23, 109, 2, 100, 108, 22, 12, 15, 95, 28, 18, 27, 74, 73, 102, 16, 49, 65, 40, 59, 88, 68, 31, 107, 48, 43};
    vector<int> endDot = {104, 27, 57, 94, 10, 77, 91, 88, 82, 102, 96, 100, 108, 46, 23, 3, 85, 48, 80, 29, 62, 39, 51, 64, 7, 81, 47, 14, 21, 60, 69, 54, 70, 22, 15, 37, 43, 9, 76, 75, 44, 103, 28, 110, 71, 72, 99, 66, 73, 89};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2968.3999999999996;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 182;
    vector<int> startDot = {132, 87, 55, 154, 68, 45, 143, 15, 109, 172, 50, 93, 133, 21, 69, 155, 32, 111, 157, 152, 82, 171, 49, 178, 141, 74, 33, 80, 92, 12, 39, 113, 112, 144, 162, 98, 88, 85, 42, 106, 63, 53, 136, 115, 145, 105, 77, 9, 64, 123};
    vector<int> endDot = {53, 110, 99, 40, 160, 33, 138, 122, 98, 102, 128, 155, 166, 120, 97, 78, 35, 47, 90, 158, 103, 77, 153, 3, 131, 151, 139, 142, 130, 133, 12, 108, 161, 58, 132, 68, 88, 86, 73, 55, 152, 149, 115, 125, 6, 164, 42, 114, 59, 20};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 8399.984848484852;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 593;
    vector<int> startDot = {337, 327, 265, 415, 585, 352, 261, 367, 281, 216, 93, 130, 496, 194, 349, 58, 553, 236, 3, 502, 112, 237, 548, 134, 381, 314, 26, 350, 267, 202, 465, 306, 110, 132, 173, 477, 504, 95, 183, 204, 354, 97, 543, 163, 192, 84, 60, 464, 279, 168};
    vector<int> endDot = {147, 376, 420, 1, 438, 323, 460, 529, 410, 492, 300, 180, 42, 561, 13, 253, 274, 103, 58, 53, 132, 419, 526, 15, 534, 21, 185, 508, 291, 379, 266, 74, 144, 550, 427, 228, 565, 541, 455, 66, 304, 195, 324, 514, 417, 431, 356, 493, 351, 196};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 87507.70994475139;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 2469;
    vector<int> startDot = {1518, 1272, 2084, 1163, 16, 2463, 739, 2393, 229, 1030, 1494, 1603, 262, 2371, 821, 103, 2397, 941, 2091, 1807, 2418, 61, 483, 847, 102, 2362, 1613, 1067, 214, 1419, 327, 2219, 1757, 1849, 64, 1249, 2168, 601, 373, 2345, 2357, 746, 634, 1264, 1702, 2141, 376, 2354, 165, 935};
    vector<int> endDot = {606, 795, 2389, 392, 2469, 2431, 1775, 175, 1870, 2035, 1973, 977, 111, 2002, 2199, 1140, 1674, 564, 2224, 2235, 1500, 913, 250, 2450, 471, 422, 1928, 385, 451, 1394, 284, 1283, 557, 379, 1164, 955, 516, 632, 1933, 363, 280, 2296, 1898, 1008, 575, 910, 1065, 1536, 1350, 1284};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1522930.3582058703;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 10000;
    vector<int> startDot = {3489, 4009, 1833, 1237, 8602, 6688, 9979, 729, 3337, 2606, 380, 2909, 5626, 1379, 6486, 1259, 5370, 2236, 7719, 7448, 6162, 5817, 6273, 8841, 4203, 4499, 8267, 6680, 2087, 3340, 9404, 6496, 4657, 3596, 4774, 1333, 2784, 799, 6465, 3505, 8190, 968, 1270, 9770, 7724, 733, 3314, 5921, 6439, 2187};
    vector<int> endDot = {3912, 2098, 2955, 3810, 9554, 9227, 1556, 5190, 4372, 7019, 957, 5579, 9487, 1084, 4451, 5612, 4924, 6743, 3258, 3559, 1228, 5760, 9563, 4531, 5617, 109, 812, 947, 6432, 2725, 1680, 6798, 5270, 9101, 3703, 9873, 4049, 6856, 2418, 5434, 8012, 5065, 721, 2029, 5991, 2900, 3871, 6662, 4013, 7633};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.499973915045226E7;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 4;
    vector<int> startDot = {2, 3};
    vector<int> endDot = {4, 1};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 12;
    vector<int> startDot = {6, 12};
    vector<int> endDot = {7, 3};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 36.5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 76;
    vector<int> startDot = {59, 63};
    vector<int> endDot = {45, 4};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1444.1486486486488;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 560;
    vector<int> startDot = {281, 169};
    vector<int> endDot = {326, 247};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 78246.37096774194;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 593;
    vector<int> startDot = {495, 568};
    vector<int> endDot = {474, 389};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 87561.26311336717;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 2506;
    vector<int> startDot = {1327, 2144};
    vector<int> endDot = {611, 2137};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1568792.2539936102;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 4044;
    vector<int> startDot = {1808, 810};
    vector<int> endDot = {650, 1395};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 4086950.928995547;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 10000;
    vector<int> startDot = {3501, 4266};
    vector<int> endDot = {7095, 258};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4997431193338666E7;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 10;
    vector<int> startDot = {9, 10, 3, 5, 7};
    vector<int> endDot = {1, 7, 6, 4, 10};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 23.200000000000003;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 114;
    vector<int> startDot = {80, 110, 104, 85, 19};
    vector<int> endDot = {68, 7, 70, 94, 46};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 3226.8715596330276;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 973;
    vector<int> startDot = {329, 439, 185, 139, 202};
    vector<int> endDot = {768, 466, 137, 645, 905};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 236670.40495867768;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 6732;
    vector<int> startDot = {1468, 3360, 585, 1508, 138};
    vector<int> endDot = {3539, 2131, 4640, 4286, 2967};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1329544879366731E7;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 10000;
    vector<int> startDot = {7687, 1042, 3544, 3617, 6612};
    vector<int> endDot = {8031, 9769, 3777, 7974, 9307};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.499872593291646E7;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 15;
    vector<int> startDot = {10, 14, 4, 15, 12, 13, 2, 9, 1, 8, 3, 7, 11, 6};
    vector<int> endDot = {2, 8, 10, 6, 13, 15, 11, 3, 4, 5, 12, 14, 9, 7};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 79;
    vector<int> startDot = {14, 16, 49, 74, 77, 63, 33, 79, 29, 54, 5, 71, 19, 45};
    vector<int> endDot = {5, 2, 25, 3, 71, 7, 27, 9, 21, 75, 11, 4, 54, 74};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1540.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 266;
    vector<int> startDot = {116, 112, 181, 44, 29, 127, 110, 86, 47, 33, 87, 204, 236, 124};
    vector<int> endDot = {53, 137, 197, 6, 104, 64, 228, 142, 135, 227, 245, 105, 65, 63};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 17668.015873015873;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 2413;
    vector<int> startDot = {1690, 999, 1818, 2326, 1413, 404, 481, 468, 566, 382, 1918, 1030, 310, 1351};
    vector<int> endDot = {1736, 1811, 1280, 1753, 775, 1812, 82, 84, 671, 2170, 628, 1525, 1033, 2330};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1453998.469153814;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 9682;
    vector<int> startDot = {9152, 7917, 8546, 7842, 2646, 9257, 9640, 8976, 4425, 3941, 1490, 2404, 9647, 4502};
    vector<int> endDot = {7299, 8553, 1560, 9608, 8903, 6585, 1167, 4954, 9485, 8835, 5923, 4771, 1747, 3824};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3436517472279686E7;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 10000;
    vector<int> startDot = {8892, 7228, 8112, 8322, 4603, 793, 2322, 6761, 9724, 3625, 4532, 2694, 4825, 4544};
    vector<int> endDot = {6661, 7183, 4118, 3887, 4488, 7017, 6002, 7889, 2143, 2099, 8672, 8674, 3048, 8408};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.500188415351492E7;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 40;
    vector<int> startDot = {9, 34, 7, 14, 12, 37, 25, 13, 40, 36, 5, 28, 22, 2, 31, 26, 27, 32, 18, 24, 17, 33, 16, 23, 8, 20, 29, 6, 19, 38, 1, 30, 10, 21, 4, 15, 35, 3, 39};
    vector<int> endDot = {30, 6, 40, 26, 17, 19, 1, 3, 27, 36, 4, 8, 7, 15, 16, 10, 12, 5, 39, 13, 34, 29, 11, 37, 21, 22, 23, 20, 35, 28, 2, 14, 18, 38, 24, 9, 32, 33, 31};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 371.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 45;
    vector<int> startDot = {43, 37, 2, 14, 1, 24, 45, 8, 27, 36, 4, 25, 19, 28, 10, 9, 26, 13, 38, 16, 32, 34, 3, 22, 42, 31, 29, 23, 5, 44, 18, 41, 35, 7, 11, 6, 33, 15, 30};
    vector<int> endDot = {41, 45, 1, 43, 17, 4, 38, 29, 40, 39, 35, 34, 23, 20, 2, 31, 10, 8, 13, 42, 26, 14, 11, 22, 33, 15, 9, 12, 19, 44, 5, 24, 25, 28, 18, 16, 37, 32, 21};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 388.16666666666674;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 248;
    vector<int> startDot = {125, 207, 158, 60, 216, 229, 139, 185, 163, 161, 205, 156, 182, 12, 219, 23, 174, 91, 198, 9, 63, 178, 135, 51, 112, 152, 193, 61, 39, 145, 17, 32, 118, 150, 67, 31, 18, 226, 208};
    vector<int> endDot = {205, 30, 112, 167, 105, 71, 27, 162, 145, 43, 7, 41, 3, 222, 132, 171, 2, 216, 139, 182, 72, 130, 90, 93, 81, 170, 67, 135, 156, 224, 115, 14, 44, 215, 126, 83, 248, 108, 231};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 15755.712918660287;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 257;
    vector<int> startDot = {156, 171, 228, 112, 245, 168, 231, 81, 10, 28, 19, 223, 114, 139, 17, 250, 11, 196, 71, 193, 67, 206, 169, 124, 222, 132, 40, 165, 227, 59, 24, 203, 229, 76, 42, 235, 147, 239, 230};
    vector<int> endDot = {15, 246, 153, 41, 83, 30, 180, 6, 102, 79, 242, 124, 177, 40, 122, 39, 247, 51, 23, 65, 184, 9, 78, 69, 128, 213, 56, 103, 49, 196, 208, 37, 135, 87, 167, 68, 77, 120, 250};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 16918.463302752294;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 1046;
    vector<int> startDot = {663, 836, 252, 556, 872, 954, 380, 307, 112, 587, 1024, 50, 862, 631, 64, 664, 892, 177, 882, 219, 379, 399, 284, 545, 182, 214, 279, 301, 213, 975, 367, 375, 884, 1017, 416, 90, 554, 574, 204};
    vector<int> endDot = {477, 326, 849, 182, 1036, 1, 736, 124, 38, 772, 221, 924, 762, 840, 939, 73, 552, 1034, 927, 479, 258, 485, 1028, 745, 271, 516, 901, 55, 917, 980, 716, 542, 978, 887, 426, 188, 36, 943, 287};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 272831.57745779544;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 4984;
    vector<int> startDot = {4246, 1332, 2557, 877, 4270, 4922, 78, 4034, 4776, 4642, 1136, 2546, 3590, 2874, 4514, 183, 4658, 3740, 184, 4197, 4263, 2294, 2840, 1902, 544, 3809, 354, 2022, 3436, 3767, 2116, 3483, 4645, 386, 4381, 559, 3565, 3713, 653};
    vector<int> endDot = {1249, 2586, 4395, 4859, 328, 4298, 779, 636, 2965, 3024, 549, 4957, 4489, 3236, 4206, 1311, 1673, 1591, 1027, 1793, 854, 3344, 4053, 4174, 3448, 100, 3640, 3971, 3597, 2907, 347, 2396, 2655, 2842, 2840, 4517, 680, 1929, 3678};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 6212458.761172902;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 5526;
    vector<int> startDot = {1597, 4571, 4712, 4741, 5393, 2820, 3892, 2091, 4300, 1481, 993, 2754, 1166, 3812, 3579, 1879, 1633, 4310, 4344, 3781, 2772, 2126, 3477, 5367, 1746, 1030, 6, 2399, 1931, 3103, 1206, 843, 2090, 3870, 1852, 2470, 5092, 3878, 570};
    vector<int> endDot = {2301, 2444, 5177, 725, 4900, 2229, 1991, 5443, 4641, 4614, 2479, 297, 2779, 3121, 5227, 3914, 1121, 4724, 4887, 5134, 3286, 564, 1442, 4607, 4687, 3275, 3684, 2133, 437, 4205, 863, 1420, 1795, 2381, 2601, 5404, 5272, 457, 5160};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 7624724.77136869;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 10000;
    vector<int> startDot = {8146, 630, 9551, 3410, 9684, 2070, 5745, 9133, 7569, 5257, 6947, 435, 394, 7724, 4523, 5592, 3315, 5829, 3191, 5704, 9323, 7650, 7258, 8458, 1879, 5285, 9253, 3982, 6146, 4081, 7660, 2040, 3827, 7464, 7542, 6406, 4632, 3300, 7462};
    vector<int> endDot = {8429, 1363, 5536, 2166, 4944, 6450, 2711, 1218, 3137, 2363, 1376, 3225, 8931, 2603, 3781, 7314, 6797, 8482, 2281, 3126, 5524, 7144, 316, 7658, 6754, 8241, 3011, 7202, 1267, 8287, 1269, 3129, 1685, 4943, 7860, 5008, 5025, 6573, 9313};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5000158684067864E7;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 43;
    vector<int> startDot = {3, 4, 7, 17, 18, 35, 29, 9, 31, 43, 24, 28, 33, 21, 11, 2, 36, 27, 37, 42, 15, 38, 12, 26, 16, 40, 6, 8, 20, 34, 14, 5, 32, 1, 22, 23, 13, 39, 30, 10};
    vector<int> endDot = {37, 13, 19, 20, 41, 43, 12, 33, 30, 9, 16, 32, 42, 8, 6, 36, 24, 22, 38, 40, 10, 11, 23, 18, 15, 25, 35, 5, 29, 7, 31, 34, 1, 21, 39, 2, 27, 4, 17, 28};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 490.83333333333337;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 106;
    vector<int> startDot = {39, 34, 29, 69, 12, 51, 52, 50, 3, 79, 30, 22, 25, 4, 68, 35, 15, 80, 5, 91, 90, 93, 60, 46, 1, 6, 72, 88, 38, 44, 63, 32, 16, 99, 86, 28, 11, 67, 78, 42};
    vector<int> endDot = {15, 73, 76, 65, 77, 37, 88, 61, 91, 53, 81, 86, 102, 90, 4, 48, 62, 1, 28, 60, 72, 2, 50, 6, 24, 39, 97, 98, 30, 96, 57, 84, 94, 10, 7, 35, 83, 27, 69, 3};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2995.5;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 695;
    vector<int> startDot = {464, 577, 91, 352, 662, 100, 451, 183, 383, 391, 68, 611, 600, 333, 366, 213, 465, 661, 542, 658, 445, 228, 431, 583, 582, 70, 408, 347, 168, 248, 564, 268, 257, 621, 651, 115, 686, 32, 345, 639};
    vector<int> endDot = {574, 514, 589, 145, 633, 124, 557, 499, 79, 667, 599, 663, 414, 453, 287, 99, 409, 511, 532, 207, 540, 669, 571, 519, 329, 564, 451, 671, 677, 393, 254, 513, 58, 544, 434, 162, 454, 322, 85, 687};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 119309.56412213741;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 3574;
    vector<int> startDot = {2335, 3384, 3173, 2059, 2933, 3182, 860, 2896, 303, 487, 2418, 3062, 496, 228, 1664, 3001, 2222, 1399, 3303, 1048, 1419, 2348, 390, 1160, 242, 1089, 3350, 2426, 1368, 791, 2265, 1673, 1652, 2587, 1924, 3510, 1911, 96, 3387, 3261};
    vector<int> endDot = {2141, 1722, 322, 3213, 540, 1384, 2032, 241, 701, 2763, 1934, 2302, 2814, 3092, 805, 2496, 1633, 1114, 1465, 177, 192, 1284, 2089, 2745, 3568, 379, 464, 1219, 884, 551, 271, 479, 2590, 2288, 657, 2633, 988, 2445, 1723, 3331};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 3196501.694680249;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 10000;
    vector<int> startDot = {9430, 77, 1596, 4883, 9012, 8362, 8378, 7133, 8375, 7219, 814, 256, 8639, 9138, 2086, 1218, 8998, 9374, 6683, 9121, 4339, 9325, 1414, 1944, 5130, 6883, 8829, 9448, 5548, 7818, 8721, 4874, 6717, 8323, 9554, 9162, 4365, 6159, 5909, 3628};
    vector<int> endDot = {9798, 8869, 2142, 2157, 3293, 7078, 1744, 7026, 3540, 487, 879, 8322, 473, 7040, 2300, 4530, 5896, 618, 364, 7278, 6756, 8260, 540, 492, 9332, 1271, 7759, 1564, 8531, 5139, 9750, 8803, 7183, 2923, 6721, 132, 6767, 3434, 7666, 7845};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4995315999598395E7;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 50;
    vector<int> startDot = {10, 43, 14, 45, 16, 30, 47, 26, 6, 37, 1, 11, 36, 27, 48, 9, 44, 4, 23, 35, 42, 38, 15, 18, 19, 21, 7, 5, 49, 40, 22, 34, 39, 31, 41, 24, 12, 28, 33, 20, 50, 32, 25, 46, 13, 8, 2, 3, 29};
    vector<int> endDot = {46, 27, 21, 18, 7, 25, 40, 28, 3, 10, 23, 26, 45, 20, 9, 16, 37, 17, 31, 38, 42, 41, 35, 2, 6, 15, 13, 30, 50, 24, 44, 19, 47, 4, 22, 33, 12, 32, 1, 29, 39, 36, 5, 14, 34, 49, 43, 8, 11};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 550.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 315;
    vector<int> startDot = {259, 12, 190, 156, 118, 290, 31, 8, 28, 119, 3, 286, 296, 228, 280, 58, 181, 26, 179, 195, 213, 129, 243, 160, 38, 63, 93, 270, 255, 192, 310, 175, 246, 82, 264, 236, 210, 282, 311, 206, 61, 125, 248, 307, 100, 313, 113, 148, 66};
    vector<int> endDot = {264, 48, 25, 302, 65, 98, 190, 219, 143, 29, 168, 139, 229, 283, 199, 101, 225, 40, 126, 270, 27, 295, 19, 315, 31, 56, 88, 169, 42, 247, 127, 93, 180, 24, 34, 307, 114, 174, 210, 78, 289, 305, 3, 23, 109, 208, 278, 245, 106};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 24585.251879699248;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 3315;
    vector<int> startDot = {2293, 2543, 332, 1711, 520, 2032, 3050, 2759, 2389, 1168, 846, 1910, 886, 3080, 1360, 2377, 2130, 692, 858, 1538, 2448, 2386, 3164, 592, 2826, 2296, 1671, 248, 2996, 2133, 2818, 2803, 1262, 1010, 1188, 2684, 537, 435, 3168, 101, 1712, 236, 1021, 3194, 1088, 397, 1359, 2349, 1911};
    vector<int> endDot = {1172, 483, 336, 2762, 1734, 2101, 2528, 2017, 2215, 1404, 2035, 2330, 1374, 1018, 1059, 2024, 2325, 2173, 3004, 689, 1757, 592, 2913, 1242, 3285, 2206, 1493, 1824, 1106, 1635, 2891, 763, 1901, 907, 902, 808, 632, 2971, 2542, 1205, 2870, 2106, 2685, 2246, 2899, 91, 2843, 807, 1598};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2742916.2434170237;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 10000;
    vector<int> startDot = {9388, 8508, 8717, 4434, 6812, 8597, 6898, 5792, 725, 3462, 3176, 771, 4150, 676, 5526, 7882, 1987, 4435, 7401, 832, 7114, 3325, 6652, 4886, 6531, 9753, 6644, 2567, 2774, 2015, 4391, 3399, 7951, 8241, 2713, 7574, 2832, 3246, 1039, 2192, 4959, 2496, 1662, 8801, 744, 3652, 8333, 9812, 4514};
    vector<int> endDot = {1993, 7700, 5472, 3300, 5345, 5384, 3068, 9870, 4259, 9424, 3209, 3376, 7185, 7707, 1089, 6123, 8673, 7115, 6412, 5568, 2249, 7482, 6437, 5372, 7332, 9570, 672, 8475, 6502, 3176, 6176, 5794, 5627, 164, 7564, 5139, 7988, 2747, 960, 5212, 9122, 4255, 6468, 5755, 9966, 3828, 2446, 1627, 8879};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.501084976730982E7;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 54;
    vector<int> startDot = {50, 23, 42, 6, 12, 51, 14, 5, 36, 38, 49, 18, 30, 54, 39, 47, 19, 31, 45, 11, 41, 33, 8, 25, 10, 4, 48, 20, 44, 37, 15, 24, 22, 32, 13, 2, 40, 17, 29, 21, 52, 46, 7, 43, 28, 34, 35, 26, 27, 1};
    vector<int> endDot = {29, 23, 12, 10, 33, 36, 27, 20, 4, 17, 21, 45, 14, 6, 52, 37, 31, 8, 50, 28, 49, 15, 18, 9, 5, 13, 53, 3, 54, 2, 7, 48, 16, 51, 11, 25, 26, 40, 43, 30, 19, 35, 41, 1, 42, 34, 46, 44, 24, 39};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 659.5;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 253;
    vector<int> startDot = {93, 175, 226, 99, 29, 121, 84, 4, 247, 155, 17, 75, 156, 248, 217, 45, 52, 200, 244, 126, 172, 159, 194, 83, 183, 72, 39, 20, 53, 103, 124, 37, 181, 28, 131, 42, 51, 97, 202, 130, 13, 192, 1, 63, 182, 211, 117, 91, 238, 120};
    vector<int> endDot = {80, 203, 148, 5, 2, 107, 15, 171, 187, 177, 229, 176, 65, 206, 83, 226, 62, 181, 220, 232, 234, 21, 192, 109, 239, 91, 67, 155, 58, 59, 32, 180, 128, 201, 182, 44, 50, 172, 74, 7, 22, 87, 145, 202, 250, 165, 68, 163, 140, 45};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 15419.593596059112;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 717;
    vector<int> startDot = {47, 272, 448, 397, 579, 94, 499, 546, 377, 319, 646, 584, 470, 76, 629, 520, 633, 222, 696, 37, 153, 531, 670, 541, 7, 575, 72, 115, 370, 3, 220, 661, 317, 81, 433, 375, 119, 293, 170, 669, 225, 637, 295, 276, 430, 328, 145, 269, 372, 446};
    vector<int> endDot = {655, 162, 16, 468, 605, 444, 366, 239, 616, 594, 26, 130, 12, 698, 412, 284, 662, 611, 126, 360, 527, 55, 349, 120, 584, 706, 341, 176, 535, 426, 685, 269, 241, 540, 29, 710, 71, 678, 536, 501, 355, 8, 249, 255, 518, 437, 111, 259, 60, 143};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 130095.96026986509;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 9445;
    vector<int> startDot = {5513, 4173, 1708, 2658, 7012, 6271, 7580, 5275, 6037, 5562, 4557, 5816, 8915, 4158, 7517, 4823, 6733, 7825, 3420, 3302, 5315, 1567, 7015, 859, 7661, 87, 8312, 1405, 6219, 1976, 7336, 2453, 931, 880, 4207, 6264, 8544, 5789, 208, 3789, 3445, 7300, 2764, 604, 7396, 4066, 4600, 9118, 3301, 1843};
    vector<int> endDot = {836, 6171, 5200, 7674, 1842, 3239, 2902, 3223, 7573, 4553, 2267, 6068, 8689, 3369, 7031, 7793, 4062, 1408, 2431, 2173, 5738, 7635, 8971, 1660, 6663, 468, 4795, 500, 1854, 6966, 5064, 3754, 1941, 7132, 9106, 2015, 8929, 352, 1823, 84, 341, 1716, 4791, 6135, 4523, 5074, 8953, 281, 1171, 5234};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.229075586029803E7;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 10000;
    vector<int> startDot = {3716, 582, 8825, 597, 4260, 6113, 5674, 3679, 9022, 3608, 6457, 7436, 2021, 5676, 201, 4715, 3483, 5508, 5145, 4613, 5541, 3722, 9512, 3165, 4534, 7636, 2807, 3924, 7154, 4670, 4891, 6710, 26, 2841, 8393, 3163, 6932, 5201, 1361, 7995, 8139, 5099, 403, 8524, 3311, 2913, 2866, 9913, 9996, 5803};
    vector<int> endDot = {8060, 5533, 9664, 5365, 2078, 5679, 1782, 8359, 1151, 2838, 3369, 175, 4398, 4616, 5217, 740, 9006, 1555, 9031, 9660, 7946, 8220, 7585, 8438, 5767, 3672, 5503, 5140, 1636, 3413, 1904, 6756, 8526, 8750, 1380, 8013, 4155, 8745, 4024, 8603, 723, 9071, 3514, 8679, 7185, 3729, 9373, 9975, 5392, 6119};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5005437646934673E7;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 8;
    vector<int> startDot = {1, 8};
    vector<int> endDot = {1, 5};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 10.5;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 42;
    vector<int> startDot = {14, 17};
    vector<int> endDot = {3, 8};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 420.2;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 298;
    vector<int> startDot = {50, 60};
    vector<int> endDot = {270, 4};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 22119.094594594593;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 3525;
    vector<int> startDot = {2297, 1156};
    vector<int> endDot = {580, 3413};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 3106451.577490775;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 10000;
    vector<int> startDot = {7725, 980};
    vector<int> endDot = {176, 3194};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.499867602230446E7;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 10;
    vector<int> startDot = {5, 9, 8, 1};
    vector<int> endDot = {4, 3, 9, 7};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 23.833333333333336;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 39;
    vector<int> startDot = {28, 20, 24, 2};
    vector<int> endDot = {5, 21, 12, 26};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 384.24285714285713;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 363;
    vector<int> startDot = {37, 125, 262, 136};
    vector<int> endDot = {23, 315, 88, 162};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 32802.55849582173;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 712;
    vector<int> startDot = {253, 132, 589, 599};
    vector<int> endDot = {477, 594, 65, 108};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 127102.47457627118;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 5538;
    vector<int> startDot = {682, 3486, 1961, 5363};
    vector<int> endDot = {3995, 1290, 15, 3554};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 7665743.639862667;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 10000;
    vector<int> startDot = {4417, 4973, 822, 8022};
    vector<int> endDot = {8103, 5204, 9656, 3806};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5002476348539416E7;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 7;
    vector<int> startDot = {1, 4, 5, 2, 7, 6};
    vector<int> endDot = {5, 4, 7, 1, 2, 3};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 80;
    vector<int> startDot = {63, 29, 16, 49, 65, 26};
    vector<int> endDot = {14, 34, 66, 35, 36, 74};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1623.8513513513512;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 259;
    vector<int> startDot = {29, 77, 241, 252, 168, 69};
    vector<int> endDot = {207, 16, 196, 10, 74, 213};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 16829.715415019764;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 1758;
    vector<int> startDot = {708, 1545, 835, 479, 926, 1075};
    vector<int> endDot = {387, 78, 333, 1594, 1745, 870};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 772966.7089041095;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 10000;
    vector<int> startDot = {7158, 8663, 4492, 4612, 9614, 3126};
    vector<int> endDot = {8483, 1102, 1567, 9164, 8343, 8574};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4997082095157094E7;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 24;
    vector<int> startDot = {21, 8, 6, 1, 10, 16, 20, 5, 18, 24, 22, 15, 13, 2, 12, 14, 17, 3};
    vector<int> endDot = {16, 1, 21, 24, 19, 3, 11, 2, 8, 7, 9, 10, 13, 6, 22, 17, 5, 18};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 160.16666666666669;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 304;
    vector<int> startDot = {28, 2, 52, 203, 161, 58, 11, 4, 118, 272, 74, 295, 219, 111, 61, 172, 249, 115};
    vector<int> endDot = {117, 126, 78, 215, 203, 97, 267, 90, 275, 173, 221, 199, 56, 107, 67, 202, 287, 87};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 22789.98951048951;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 2101;
    vector<int> startDot = {1931, 487, 693, 1779, 2043, 222, 978, 1026, 1296, 1227, 934, 1116, 1132, 600, 1437, 147, 1767, 1155};
    vector<int> endDot = {1289, 296, 11, 1341, 134, 589, 1861, 1796, 1506, 1535, 176, 1906, 173, 1659, 1110, 1461, 1434, 748};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1102535.5470475275;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 10000;
    vector<int> startDot = {7214, 720, 5673, 7705, 8212, 6774, 505, 5585, 1440, 9601, 2595, 5089, 4408, 5505, 8371, 8887, 4762, 4336};
    vector<int> endDot = {3675, 2776, 7322, 3082, 3637, 1211, 7203, 6014, 2700, 6707, 4843, 803, 5155, 8670, 6495, 8066, 5235, 892};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.499350201492687E7;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 36;
    vector<int> startDot = {15, 11, 28, 32, 24, 31, 14, 21, 7, 35, 20, 30, 5, 19, 33, 27, 10, 17, 18, 16, 12, 36, 23, 1, 9, 6, 3, 26, 4, 8, 13, 25};
    vector<int> endDot = {17, 10, 6, 16, 4, 12, 36, 26, 28, 18, 35, 24, 7, 11, 34, 3, 23, 30, 20, 22, 25, 19, 33, 31, 21, 15, 13, 5, 8, 27, 32, 1};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 337.0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 242;
    vector<int> startDot = {200, 18, 218, 14, 156, 207, 132, 185, 232, 151, 8, 86, 30, 141, 13, 77, 7, 195, 199, 39, 168, 15, 80, 124, 68, 162, 117, 169, 43, 48, 26, 206};
    vector<int> endDot = {11, 208, 82, 33, 157, 68, 64, 20, 152, 174, 233, 54, 119, 221, 128, 14, 95, 229, 207, 8, 117, 63, 9, 241, 7, 100, 191, 135, 222, 70, 96, 37};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 14465.833333333332;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 1020;
    vector<int> startDot = {285, 941, 774, 355, 92, 621, 909, 944, 611, 888, 350, 472, 922, 907, 521, 461, 488, 962, 91, 688, 458, 852, 535, 19, 730, 929, 1017, 973, 398, 1015, 380, 205};
    vector<int> endDot = {901, 802, 138, 939, 460, 54, 289, 941, 617, 496, 779, 404, 219, 309, 86, 1016, 601, 847, 702, 429, 304, 93, 684, 285, 353, 11, 1013, 790, 395, 474, 132, 74};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 259787.27935222673;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 3669;
    vector<int> startDot = {388, 3126, 1966, 3043, 1839, 750, 2042, 1454, 2921, 3533, 1053, 1515, 1217, 1186, 1455, 3600, 2195, 2255, 3527, 3597, 2433, 1018, 28, 3474, 1460, 2892, 278, 2069, 2782, 2590, 2278, 1926};
    vector<int> endDot = {1072, 1968, 3036, 1491, 2014, 3298, 1120, 2901, 1175, 2229, 25, 3361, 994, 431, 3099, 2786, 2857, 461, 75, 2324, 383, 3328, 1038, 870, 657, 1658, 229, 242, 1524, 335, 802, 309};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 3365465.3742095134;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 10000;
    vector<int> startDot = {448, 8387, 3051, 1521, 6940, 8404, 6481, 1765, 2044, 778, 6392, 7885, 1865, 5874, 4394, 5702, 2292, 8194, 794, 8545, 2627, 7688, 8843, 5154, 8930, 6388, 9744, 4673, 9235, 6224, 9730, 9713};
    vector<int> endDot = {6519, 8580, 3781, 5880, 268, 1049, 3494, 6775, 9815, 3552, 6098, 136, 5312, 9409, 5804, 3521, 2658, 810, 7116, 6076, 7264, 7879, 8587, 4008, 9460, 2282, 4208, 4302, 4223, 3092, 9630, 6850};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4998757505617976E7;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 52;
    vector<int> startDot = {20, 45, 23, 43, 5, 22, 26, 40, 11, 52, 10, 42, 6, 38, 32, 50, 44, 51, 18, 16, 36, 13, 49, 48, 31, 41, 14, 34, 37, 33, 7, 21, 17, 8, 30, 28, 27, 2, 15, 1, 25, 29, 9, 47, 46, 39, 35, 19, 24, 4};
    vector<int> endDot = {32, 36, 45, 4, 37, 14, 18, 24, 15, 40, 48, 27, 44, 46, 9, 22, 3, 41, 43, 25, 8, 38, 47, 51, 52, 39, 19, 50, 21, 30, 20, 49, 33, 17, 1, 13, 28, 34, 31, 2, 10, 23, 16, 7, 5, 12, 35, 29, 42, 11};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 639.5;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 111;
    vector<int> startDot = {67, 23, 55, 78, 58, 61, 11, 41, 83, 7, 104, 12, 92, 70, 22, 44, 110, 87, 59, 36, 29, 103, 65, 17, 39, 66, 28, 32, 2, 14, 24, 1, 85, 56, 69, 107, 54, 53, 63, 102, 51, 97, 8, 99, 50, 82, 4, 79, 13, 98};
    vector<int> endDot = {49, 15, 14, 110, 1, 84, 8, 10, 45, 11, 12, 95, 96, 63, 17, 7, 70, 42, 32, 58, 94, 93, 88, 75, 5, 72, 107, 59, 106, 87, 90, 51, 83, 29, 37, 98, 25, 81, 39, 21, 22, 108, 89, 43, 69, 82, 6, 85, 103, 19};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2985.0819672131142;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int n = 1089;
    vector<int> startDot = {684, 475, 1062, 648, 349, 642, 242, 26, 773, 851, 839, 128, 22, 81, 926, 925, 327, 752, 617, 820, 255, 1, 553, 982, 24, 572, 830, 761, 418, 849, 900, 99, 613, 1013, 973, 435, 79, 166, 537, 862, 464, 860, 105, 894, 603, 370, 264, 97, 367, 440};
    vector<int> endDot = {9, 544, 976, 83, 1056, 861, 1065, 513, 1035, 675, 1002, 1073, 1007, 139, 479, 485, 685, 930, 557, 285, 433, 851, 824, 312, 852, 95, 536, 550, 116, 219, 813, 34, 1009, 554, 732, 1061, 1018, 972, 987, 242, 950, 633, 665, 52, 319, 982, 885, 403, 792, 555};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 298260.11501443695;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int n = 3467;
    vector<int> startDot = {537, 1968, 1937, 2147, 2394, 105, 505, 1223, 366, 2404, 720, 118, 3325, 1113, 2217, 2867, 2357, 1291, 245, 1139, 2698, 343, 3335, 933, 2920, 2780, 612, 306, 1889, 1135, 586, 842, 1810, 744, 1065, 1543, 2194, 1579, 1502, 185, 193, 615, 1620, 1542, 799, 1920, 917, 1611, 1193, 87};
    vector<int> endDot = {231, 1408, 3168, 2099, 3400, 2684, 276, 524, 2711, 3242, 3312, 3036, 1279, 2514, 1023, 1237, 1665, 3416, 1381, 1958, 1294, 2587, 2657, 2033, 1688, 3308, 948, 2088, 2023, 3208, 1394, 2333, 81, 3286, 1492, 753, 1965, 3363, 1611, 165, 1997, 2731, 684, 3249, 955, 3030, 991, 832, 3285, 1318};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 3004737.0193151888;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int n = 10000;
    vector<int> startDot = {9718, 320, 8972, 8589, 9688, 634, 1367, 7602, 1123, 868, 5821, 6500, 7845, 3014, 967, 705, 9000, 7475, 9359, 2299, 9290, 3513, 730, 6442, 4031, 3550, 9883, 4644, 7001, 6995, 8740, 4818, 9746, 4275, 7143, 7753, 3458, 6077, 8425, 7054, 6337, 1370, 8091, 7369, 4743, 5035, 3229, 5426, 4351, 2304};
    vector<int> endDot = {4186, 5508, 9600, 7133, 4445, 3290, 885, 7362, 1337, 1478, 6625, 4151, 6728, 2565, 5768, 2128, 6670, 639, 5131, 3177, 9457, 4212, 713, 252, 3749, 9699, 1621, 1098, 1537, 6928, 5400, 7810, 7314, 9064, 8851, 2026, 6166, 7171, 7353, 4891, 116, 2573, 7462, 127, 1048, 9254, 507, 6155, 8115, 2770};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4971076251356784E7;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int n = 10000;
    vector<int> startDot = {2987, 3837, 1089, 5928, 6389, 756, 198, 7384, 9627, 8689, 3735, 8224, 4482, 6482, 7307, 6097, 312, 6825, 2468, 4771, 5383, 4433, 5197, 1551, 1431, 2805, 8529, 9079, 9392, 569, 1732, 2923, 1775, 9073, 900, 5160, 6062, 7669, 2034, 9878, 6073, 8704, 2859, 1440, 2467, 4859, 9623, 9551, 8554, 8619};
    vector<int> endDot = {2987, 3837, 1089, 5928, 6389, 756, 198, 7384, 9627, 8689, 3735, 8224, 4482, 6482, 7307, 6097, 312, 6825, 2468, 4771, 5383, 4433, 5197, 1551, 1431, 2805, 8529, 9079, 9392, 569, 1732, 2923, 1775, 9073, 900, 5160, 6062, 7669, 2034, 9878, 6073, 8704, 2859, 1440, 2467, 4859, 9623, 9551, 8554, 8619};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4904894409748744E7;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int n = 10000;
    vector<int> startDot = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> endDot = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.47481375E7;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int n = 10000;
    vector<int> startDot = {10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985, 9984, 9983, 9982, 9981, 9980, 9979, 9978, 9977, 9976, 9975, 9974, 9973, 9972, 9971, 9970, 9969, 9968, 9967, 9966, 9965, 9964, 9963, 9962, 9961, 9960, 9959, 9958, 9957, 9956, 9955, 9954, 9953, 9952, 9951};
    vector<int> endDot = {10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985, 9984, 9983, 9982, 9981, 9980, 9979, 9978, 9977, 9976, 9975, 9974, 9973, 9972, 9971, 9970, 9969, 9968, 9967, 9966, 9965, 9964, 9963, 9962, 9961, 9960, 9959, 9958, 9957, 9956, 9955, 9954, 9953, 9952, 9951};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.47481375E7;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int n = 10000;
    vector<int> startDot = {10000, 1, 9999, 2, 9998, 3, 9997, 4, 9996, 5, 9995, 6, 9994, 7, 9993, 8, 9992, 9, 9991, 10, 9990, 11, 9989, 12, 9988, 13, 9987, 14, 9986, 15, 9985, 16, 9984, 17, 9983, 18, 9982, 19, 9981, 20, 9980, 21, 9979, 22, 9978, 23, 9977, 24, 9976, 25};
    vector<int> endDot = {10000, 1, 9999, 2, 9998, 3, 9997, 4, 9996, 5, 9995, 6, 9994, 7, 9993, 8, 9992, 9, 9991, 10, 9990, 11, 9989, 12, 9988, 13, 9987, 14, 9986, 15, 9985, 16, 9984, 17, 9983, 18, 9982, 19, 9981, 20, 9980, 21, 9979, 22, 9978, 23, 9977, 24, 9976, 25};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.47481375E7;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int n = 10000;
    vector<int> startDot = {19, 9997, 9993, 23, 9979, 14, 9978, 24, 9991, 5, 9986, 9987, 9982, 1, 9, 20, 9992, 10, 9981, 9984, 22, 9999, 6, 9995, 9983, 17, 13, 9976, 12, 25, 18, 10000, 9998, 9985, 9988, 11, 9977, 2, 3, 9980, 9989, 9996, 7, 15, 9994, 9990, 21, 8, 4, 16};
    vector<int> endDot = {9986, 25, 9993, 9988, 19, 7, 1, 11, 9992, 14, 17, 10, 13, 8, 9997, 9989, 24, 9995, 9981, 5, 9, 23, 16, 18, 9983, 6, 10000, 9990, 9999, 21, 9987, 9998, 9991, 4, 2, 3, 9976, 9984, 12, 9982, 9978, 20, 9977, 9994, 9985, 22, 15, 9996, 9979, 9980};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.50273535E7;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int n = 10000;
    vector<int> startDot = {16, 22, 3, 12, 9992, 9990, 9987, 1, 9978, 9981, 4, 9998, 9976, 9996, 9991, 9997, 9994, 2, 9, 9989, 9982, 9983, 17, 9999, 19, 7, 10, 13, 9993, 25, 6, 9988, 8, 14, 10000, 9995, 9985, 5, 24, 23, 9980, 11, 20, 21, 9979, 9977, 9986, 18, 9984, 15};
    vector<int> endDot = {9997, 15, 9976, 9991, 9985, 9980, 9984, 9998, 8, 9978, 25, 9993, 9996, 7, 2, 6, 9992, 22, 20, 17, 9994, 9977, 24, 21, 4, 3, 12, 10, 9983, 9987, 9999, 9, 9979, 19, 10000, 9986, 14, 9989, 9981, 18, 9982, 16, 23, 13, 1, 9988, 9995, 11, 5, 9990};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.49477475E7;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int n = 3;
    vector<int> startDot = {1, 3};
    vector<int> endDot = {3, 1};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int n = 9262;
    vector<int> startDot = {1100, 6231, 6897, 5696, 9142, 6684, 1434, 7308, 3302, 3525, 775, 5235, 7287, 6384, 9055, 8981, 3705, 6620, 7135, 1657, 2546, 4886, 7723, 8244, 6277, 1121, 2609, 5399, 4157, 2336, 8544, 8914, 2929, 9056, 4536, 6433, 3870, 4495, 3121, 6107, 2469, 690, 5950, 3085, 6940, 3111, 8693, 3773, 7395, 7522};
    vector<int> endDot = {3827, 2120, 697, 7941, 6348, 8081, 466, 9101, 8403, 9005, 3894, 8262, 6115, 5013, 3415, 6819, 9177, 761, 3955, 3854, 8548, 7041, 138, 4528, 1337, 7190, 6007, 4620, 4969, 4937, 6370, 2954, 560, 8537, 3576, 2172, 1785, 8970, 3355, 8999, 439, 2640, 8761, 74, 5966, 182, 2672, 3788, 6498, 8294};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1430123836734693E7;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int n = 53;
    vector<int> startDot = {41, 39, 34, 7, 47, 12, 21, 46, 38, 30, 28, 52, 45, 29, 6, 32, 18, 26, 2, 10, 16, 23, 19, 14, 48, 49, 11, 17, 4, 9, 20, 13, 25, 22, 15, 36, 43, 40, 5, 42, 33, 27, 3, 44, 53, 24, 1, 50};
    vector<int> endDot = {1, 44, 51, 21, 10, 8, 27, 46, 12, 7, 48, 37, 43, 28, 4, 36, 19, 2, 45, 52, 30, 32, 6, 26, 50, 25, 16, 22, 29, 23, 38, 40, 34, 39, 18, 33, 24, 41, 42, 11, 17, 31, 35, 14, 47, 13, 20, 53};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 639.0000000000013;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int n = 3006;
    vector<int> startDot = {2713, 2831, 1160, 593, 1784, 339, 2668, 494, 756, 341, 1930, 2807, 2743, 1988, 118, 1693, 2288, 2376, 2028, 765, 2064, 228, 2861, 1715, 2353, 2303, 1559, 2559, 1643, 727, 2508, 1720, 679, 2382, 1730, 2514, 8, 2405, 1553, 728, 831, 19, 72, 2270, 2486, 2366, 2608};
    vector<int> endDot = {1396, 2868, 302, 1715, 701, 2277, 2455, 2681, 203, 293, 770, 1459, 1751, 2949, 832, 1340, 1549, 2547, 375, 1787, 2526, 2540, 2182, 622, 2936, 2996, 1401, 300, 125, 2891, 1023, 2603, 188, 2120, 1878, 157, 2452, 364, 104, 2350, 2056, 173, 396, 2400, 1165, 2403, 690};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2254956.81091585;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int n = 9894;
    vector<int> startDot = {220, 5148, 752, 5017, 3488, 8233, 8154, 1726, 6551, 4569, 8676, 2963, 292, 8833, 5203, 3101, 4508, 3058, 349, 3084, 5494, 5309, 5695, 8856, 3901, 6195, 6980, 8159, 7251, 4236, 7205, 2845, 3991, 8619, 5829, 7754, 3177, 8314, 4168, 3226, 9569, 7154, 3545, 8321, 4823, 3618, 8907, 8867, 7848, 4353};
    vector<int> endDot = {6447, 7539, 8453, 3334, 7582, 4572, 3482, 1425, 5522, 337, 2480, 5110, 3935, 279, 9411, 2225, 8485, 6532, 3416, 8104, 989, 7600, 1087, 4644, 9065, 2493, 1847, 1448, 7312, 7811, 5642, 5178, 956, 3049, 7023, 5008, 6221, 8808, 162, 5595, 9744, 4763, 4623, 5823, 4497, 7423, 7232, 4318, 3531, 759};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4475169825477447E7;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int n = 10000;
    vector<int> startDot = {42, 8468, 6335, 6501, 9170, 5725, 1479, 9359, 6963, 4465, 5706, 8146, 3282, 6828, 9962, 492, 2996, 1943, 4828, 5437, 2392, 4605, 3903, 154, 293, 2383, 7422, 8717, 9719, 9896, 5448, 1727, 4772, 1539, 1870, 9913, 5668, 6300, 7036, 9895, 8704, 3812, 1323, 334, 7674, 4665, 5142, 7712, 8254, 6869};
    vector<int> endDot = {5548, 7645, 2663, 2758, 38, 2860, 8724, 9742, 7530, 779, 2317, 3036, 2191, 1843, 289, 107, 9041, 8943, 9265, 2649, 7447, 3806, 5891, 6730, 4371, 5351, 5007, 1102, 4394, 3549, 9630, 2624, 4085, 9955, 8757, 1841, 4967, 7377, 3932, 6309, 6945, 2440, 4627, 1324, 5538, 1539, 6119, 2083, 2930, 6542};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5014441808341708E7;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int n = 9877;
    vector<int> startDot = {5232, 3094, 1919, 3554, 3241, 1991, 7048, 9570, 7080, 7448, 4088, 7182, 1830, 1222, 2024, 829, 2466, 9854, 3247, 5033, 778, 152, 6818, 7398, 5423, 3947, 5391, 4962, 7144, 4885, 8323, 4118, 934, 5532, 7276, 2221, 2906, 3629, 3852, 2331, 9630, 1697, 4887, 2522, 96, 7568, 30, 4422, 5673, 1825};
    vector<int> endDot = {466, 3056, 7453, 6884, 7266, 612, 8438, 2945, 1840, 2469, 3460, 3974, 1541, 1321, 8388, 7155, 3234, 4167, 7327, 2364, 5609, 7184, 6048, 6779, 3113, 8651, 3027, 5221, 4259, 3342, 8740, 1154, 1042, 3098, 1892, 4171, 1733, 8752, 361, 8627, 5665, 2290, 1382, 8009, 4319, 3783, 1725, 6842, 7594, 4715};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4382888550167903E7;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int n = 10000;
    vector<int> startDot = {3297, 7608, 6492, 846, 7835, 8001, 7400, 1430, 9996, 6307, 738, 5297, 1799, 379, 2274, 5599, 8673, 5353, 3481, 8606, 1492, 3588, 4579, 7035, 9830, 9381, 2041, 5044, 8819, 645, 9584, 3574, 298, 7382, 1152, 852, 7373, 4092, 9432, 1798, 7072, 4632, 8712, 8724, 9358, 4893, 2144, 1391, 964, 3876};
    vector<int> endDot = {3574, 8257, 5090, 323, 6393, 3707, 2728, 7480, 2332, 7379, 4531, 9875, 5008, 19, 3471, 5485, 8492, 7641, 3189, 9789, 769, 1422, 2430, 6095, 4235, 6192, 764, 1483, 7533, 7786, 9079, 9264, 5588, 676, 8396, 698, 8206, 8453, 4521, 9142, 6805, 8979, 6637, 833, 9388, 2009, 398, 2455, 11, 1704};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4966053685728643E7;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int n = 999;
    vector<int> startDot = {596, 89, 380, 638, 858, 937, 492, 52, 338, 662, 6, 575, 719, 110, 180, 312, 258, 315, 873, 202, 680, 443, 384, 323, 795, 673, 730, 27, 868, 560, 895, 931, 100, 527, 195, 282, 237, 772, 157, 810, 32, 375, 661, 285, 330, 102, 921, 591, 30, 794};
    vector<int> endDot = {216, 153, 51, 916, 95, 294, 528, 418, 819, 143, 533, 979, 334, 647, 302, 28, 338, 340, 479, 960, 496, 424, 827, 279, 656, 77, 923, 275, 882, 692, 210, 666, 762, 354, 694, 631, 678, 155, 900, 755, 486, 221, 793, 561, 166, 769, 213, 457, 540, 618};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 249781.60800842993;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int n = 10000;
    vector<int> startDot = {1, 4, 3, 6, 7};
    vector<int> endDot = {1, 3, 2, 4, 5};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.49725135E7;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int n = 10000;
    vector<int> startDot = {8468, 6501, 5725, 9359, 4465, 8146, 6828, 492, 1943, 5437, 4605, 154, 2383, 8717, 9896, 1727, 1539, 9913, 6300, 9895, 3812, 334, 4665, 7712, 6869, 7645, 2758, 2860, 9742, 779, 3036, 1843, 107, 8943, 2649, 3806, 6730, 5351, 1102, 3549, 2624, 9955, 1841, 7377, 6309, 2440, 1324, 2083, 6542, 1116};
    vector<int> endDot = {6335, 9170, 1479, 6963, 5706, 3282, 9962, 2996, 4828, 2392, 3903, 293, 7422, 9719, 5448, 4772, 1870, 5668, 7036, 8704, 1323, 7674, 5142, 8254, 5548, 2663, 38, 8724, 7530, 2317, 2191, 289, 9041, 9265, 7447, 5891, 4371, 5007, 4394, 9630, 4085, 8757, 4967, 3932, 6945, 4627, 5538, 2930, 4834, 4640};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.496648624030151E7;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int n = 10000;
    vector<int> startDot = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    vector<int> endDot = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.475057937437186E7;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int n = 10000;
    vector<int> startDot = {42, 8468, 6335, 6501, 9170, 5725, 1479, 9359, 6963, 4465, 5706, 8146, 3282, 6828, 9962, 492, 2996, 1943, 4828, 5437, 2392, 4605, 3903, 154, 293, 2383, 7422, 8717, 9719, 9896, 5448, 1727, 4772, 1539, 1870, 9913, 5668, 6300, 7036, 9895, 8704, 3812, 1323, 334, 7674, 4665, 5142, 7712, 8254, 6869};
    vector<int> endDot = {4947, 7507, 3031, 6414, 9169, 901, 2592, 8763, 1656, 7411, 6360, 7625, 538, 1549, 6484, 7596, 4042, 3603, 4351, 292, 837, 9375, 1021, 4597, 4022, 7349, 3200, 9669, 4485, 8282, 4735, 54, 2000, 6419, 7939, 6901, 3789, 8128, 468, 3729, 4894, 4649, 2484, 7808, 2422, 4311, 6618, 2814, 9515, 4310};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.497992479849246E7;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int n = 10000;
    vector<int> startDot = {4999, 1, 300, 200};
    vector<int> endDot = {5001, 5000, 200, 300};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4988471368547417E7;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int n = 10000;
    vector<int> startDot = {2};
    vector<int> endDot = {3};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.499250349959996E7;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int n = 9873;
    vector<int> startDot = {3, 13, 17};
    vector<int> endDot = {9, 7, 19};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.435181443839919E7;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int n = 9999;
    vector<int> startDot = {2, 100, 300, 500, 700, 1000, 1200, 1400, 1600, 1800, 2000, 2100, 2400, 2600, 2800, 3000, 3200, 4000, 5000, 6000, 7000, 8000, 9000, 9900, 9990, 9999};
    vector<int> endDot = {2, 100, 300, 500, 700, 1000, 1200, 1400, 1600, 1800, 2000, 2100, 2400, 2600, 2111, 3000, 3200, 4000, 5000, 6000, 7000, 6444, 9000, 9900, 9990, 9999};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4928649046124537E7;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int n = 10000;
    vector<int> startDot = {15, 154, 45, 684, 1144, 12, 354, 742, 9528, 125, 3336, 1024, 54};
    vector<int> endDot = {123, 2, 157, 55, 369, 7852, 100, 23, 8, 1005, 10000, 1365, 452};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.496405455467107E7;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int n = 3;
    vector<int> startDot = {2};
    vector<int> endDot = {2};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int n = 101;
    vector<int> startDot = {65, 28, 93, 85};
    vector<int> endDot = {38, 59, 83, 2};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2539.40206185567;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int n = 10000;
    vector<int> startDot = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 5687, 6879, 9999, 10000, 9998};
    vector<int> endDot = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 25, 23, 22, 24, 30, 31, 33, 36, 39, 32, 34, 38, 555, 444, 333, 222, 111, 10000, 9999, 9998, 8988, 9997, 9996, 77, 78, 79, 70, 789, 7895};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.484213720030151E7;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int n = 10000;
    vector<int> startDot = {50, 3, 5, 29, 3948, 394, 34, 4};
    vector<int> endDot = {3948, 394, 34, 4, 50, 3, 5, 29};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.496632624739792E7;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int n = 10000;
    vector<int> startDot = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409};
    vector<int> endDot = {50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4820917903614458E7;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int n = 2130;
    vector<int> startDot = {1, 4, 78};
    vector<int> endDot = {3, 1, 123};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 1130691.0373765868;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int n = 10000;
    vector<int> startDot = {23, 57, 79};
    vector<int> endDot = {109, 53, 73};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.498288488176453E7;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int n = 10000;
    vector<int> startDot = {7945, 8165, 6191, 2170, 6981, 4109, 7364, 6918, 1877, 9311, 9701, 492, 8485, 9930, 398, 6394, 5509, 8331, 9863, 9848, 7744, 1, 6263, 8120, 6552, 1530, 676, 5934, 7593, 2869, 6170, 4921, 8352, 6224, 8706, 432, 9753, 7933, 7237, 2625, 428, 8550, 4711, 3302, 9712, 7367, 7257, 7973, 2844, 636};
    vector<int> endDot = {4914, 8747, 6996, 815, 7679, 8439, 7189, 9239, 8019, 6572, 5563, 9428, 4659, 1135, 3212, 3548, 409, 3989, 4511, 1751, 94, 9141, 4831, 6213, 3332, 7107, 4848, 4180, 3626, 7086, 4894, 969, 598, 565, 5558, 4727, 8522, 2481, 9188, 8488, 152, 9002, 3198, 9914, 43, 2274, 8504, 2721, 2012, 932};
    DrawingLines* pObj = new DrawingLines();
    clock_t start = clock();
    double result = pObj->countLineCrossings(n, startDot, endDot);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5006954189447235E7;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22663117&rd=14153&pm=10735
********************************************************************************
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
 
const int MAXN = 10005;
 
int line [MAXN], psum [MAXN];
bool end [MAXN];
 
struct DrawingLines
{
    double countLineCrossings (int n, vector <int> startDot, vector <int> endDot)
    {
        memset (line, -1, sizeof (line));
 
        for (int i = 0; i < (int) startDot.size (); i++)
            line [startDot [i] - 1] = endDot [i] - 1;
 
        memset (end, false, sizeof (end));
 
        for (int i = 0; i < (int) endDot.size (); i++)
            end [endDot [i] - 1] = true;
 
        psum [0] = 0;
 
        for (int i = 0; i < n; i++)
            psum [i + 1] = psum [i] + (end [i] ? 0 : 1);
 
        double total = 0.25 * (n - startDot.size ()) * (n - startDot.size () - 1);
 
        for (int i = 0; i < (int) startDot.size (); i++)
            for (int j = i + 1; j < (int) startDot.size (); j++)
                if ((startDot [i] < startDot [j]) ^ (endDot [i] < endDot [j]))
                    total++;
 
        for (int i = 0; i < n; i++)
            if (line [i] == -1)
                for (int j = 0; j < (int) startDot.size (); j++)
                {
                    int s = startDot [j] - 1, e = endDot [j] - 1;
 
                    if (i > s)
                        total += (double) psum [e] / psum [n];
                    else
                        total += 1.0 - (double) psum [e] / psum [n];
                }
 
        return total;
    }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/