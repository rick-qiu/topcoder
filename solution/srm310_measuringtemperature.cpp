/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6553
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

class MeasuringTemperature {
public:
    double averageTemperature(vector<int> measuredValues);
};

double MeasuringTemperature::averageTemperature(vector<int> measuredValues) {
    double ret;
    return ret;
}


int test0() {
    vector<int> measuredValues = {9, 11, 12, 13, 15};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> measuredValues = {0, 0, 0, 2, 997, -1, 0};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> measuredValues = {0, 0, 0, 2, -4, -1, 0};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> measuredValues = {0, 0, 0, 2, -3, -1, 0};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -0.2857142857142857;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> measuredValues = {1, 2, 3, 100, 100, 1, 2};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 29.857142857142858;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> measuredValues = {1, 2, 3, 4, 5, 6, 7, 10};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> measuredValues = {-35, -34, -34, -34, -35, 72, -34, 52, -36, -35, -36, 52, -36, -35, 981, -33};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -34.75;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> measuredValues = {-273, -273, -274, -273};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -273.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> measuredValues = {10, 20, 30, 40};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> measuredValues = {0, 0};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
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
    vector<int> measuredValues = {10, 12};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> measuredValues = {10, 13};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> measuredValues = {12, 10};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> measuredValues = {13, 10};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> measuredValues = {-10, -12};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -11.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> measuredValues = {-10, -13};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> measuredValues = {-12, -10};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -11.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> measuredValues = {-13, -10};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> measuredValues = {0, 0, -500, 0, -500, 1};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> measuredValues = {1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> measuredValues = {1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, -1000, 1000, 1000};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> measuredValues = {10, 10, 13};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> measuredValues = {10, 13, 10};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> measuredValues = {13, 10, 10};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> measuredValues = {10, 13, 16, 10};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> measuredValues = {10, 13, 16, 20, 10};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> measuredValues = {10, -274, -275, -274, 10};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> measuredValues = {-13, 12, -14, 11, -15, 10, -16, 9, -17, 8, -18, 7, 6, -19, 5, -400, -400, 4, -390, -300, -270, 3, -12, 3, 2};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> measuredValues = {47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> measuredValues = {47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, -47, 47, 47};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 1.88;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> measuredValues = {10, -274, 11, 12, -275, -286, 13};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> measuredValues = {-3, -4, -3, -5, -3, -2, -3};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -3.2857142857142856;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> measuredValues = {-3, -3, -4, -3, -3, -2, -3, -3, -4, -3, -3, -3, -4, -3, -3, -2, -3, -3, -4, -3, -3, -2, -3, -3, -4, -3, -3, -2, -3, -3, -4, -3, -3, -2, -3, -3, -4, -3, -3, -2, -3, -2, -3, -3, -4, -3, -3, -2, -1, 0};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -2.9;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> measuredValues = {-274, -273};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -273.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> measuredValues = {-274, 273};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> measuredValues = {10, 13, 12};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 11.666666666666666;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> measuredValues = {1, 1, 4};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> measuredValues = {-273, -273};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -273.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> measuredValues = {2, 10};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> measuredValues = {10, 20, 30, 40};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> measuredValues = {0, 0, 0, 2, 997, -1, 0};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> measuredValues = {-274, -275, -276};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> measuredValues = {-273, -273, -274, -273, -500, -700, 700};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -273.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> measuredValues = {2, -2, -2, -2, -2, 1};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> measuredValues = {-310, 0, 1, 1};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> measuredValues = {-273, -273, -274, -273};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -273.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> measuredValues = {1, 2};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> measuredValues = {0, 0};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> measuredValues = {0, 100};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> measuredValues = {-272, -274};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -272.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> measuredValues = {-35, -34, -34, -34, -35, 72, -34, 52, -36, -35, -36, 52, -36, -35, 981, -33};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -34.75;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> measuredValues = {1, 5, 10};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> measuredValues = {10, 20, 21, 40, 41};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 30.5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> measuredValues = {10, 0, 9};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 9.5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> measuredValues = {1, 100};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> measuredValues = {1, 7};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> measuredValues = {1, 2, 3, 4, 5, 6, 7, 10};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> measuredValues = {9, 19};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> measuredValues = {0, 4, 2, 6, 1};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> measuredValues = {1, 6, 1};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> measuredValues = {10, 0};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -300.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> measuredValues = {1, 2, 3, 100, 100, 1, 2};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 29.857142857142858;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> measuredValues = {1, 1, 3, 1, 1};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> measuredValues = {3, 1, 4, 1, 3};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> measuredValues = {0, 0, 0, 2, -3, -1, 0, -273, -272};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = -60.77777777777778;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> measuredValues = {50, 10, 11, 12, 13, 14, 70};
    MeasuringTemperature* pObj = new MeasuringTemperature();
    clock_t start = clock();
    double result = pObj->averageTemperature(measuredValues);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15700786&rd=9990&pm=6553
********************************************************************************
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <algorithm> 
#include <string> 
#include <vector> 
#include <iostream> 
 
using namespace std; 
 
class MeasuringTemperature 
{  
  public:  
  double averageTemperature(vector <int> v)  
  {  
    double sum=0,n=0; 
    for (int i=0;i<v.size();i++) 
      if (v[i] >= -273) 
      if ((i>0 && abs(v[i-1]-v[i]) <= 2) 
        ||(i>1 && abs(v[i-2]-v[i]) <= 2) 
        ||(i<v.size()-1 && abs(v[i+1]-v[i]) <= 2) 
        ||(i<v.size()-2 && abs(v[i+2]-v[i]) <= 2)) {sum+= v[i]; n++;} 
 
 
    if (n == 0) return -300; 
    else return sum / n; 
  } 
   
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/