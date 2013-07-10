/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2906
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

class SensorGrid {
public:
    vector<int> largestRectangle(int width, int height, vector<int> x, vector<int> y);
};

vector<int> SensorGrid::largestRectangle(int width, int height, vector<int> x, vector<int> y) {
    vector<int> ret;
    return ret;
}


int test0() {
    int width = 4;
    int height = 5;
    vector<int> x = {1};
    vector<int> y = {2};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 2, 5};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int width = 2;
    int height = 2;
    vector<int> x = {0};
    vector<int> y = {0};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 1, 2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int width = 8;
    int height = 4;
    vector<int> x = {0, 3, 6};
    vector<int> y = {2, 3, 1};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 5, 3};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int width = 40;
    int height = 59;
    vector<int> x = {0, 2, 4, 6, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
    vector<int> y = {57, 54, 51, 48, 45, 42, 39, 36, 33, 30, 27, 24, 21, 18, 15, 12, 9, 6, 3, 0};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 21, 30};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {20000};
    vector<int> y = {15000};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 15001, 40000, 24999};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int width = 9;
    int height = 7;
    vector<int> x = {1, 5, 1, 5, 3, 7, 3, 7};
    vector<int> y = {0, 0, 2, 2, 4, 4, 6, 6};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 3, 4};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int width = 6;
    int height = 5;
    vector<int> x = {5, 4};
    vector<int> y = {2, 4};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 5, 4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int width = 17;
    int height = 16;
    vector<int> x = {1, 3, 5, 7, 11, 13, 15, 1, 3, 5, 7, 11, 13, 15, 1, 3, 5, 7, 11, 13, 15, 1, 3, 5, 7, 11, 13, 15, 1, 3, 5, 7, 11, 13, 15, 1, 3, 5, 7, 11, 13, 15, 1, 3, 5, 7, 11, 13, 15};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 5, 5, 5, 5, 5, 5, 5, 7, 7, 7, 7, 7, 7, 7, 10, 10, 10, 10, 10, 10, 10, 12, 12, 12, 12, 12, 12, 12, 14, 14, 14, 14, 14, 14, 14};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 0, 3, 16};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int width = 39999;
    int height = 39999;
    vector<int> x = {19999};
    vector<int> y = {19999};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 39999, 19999};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {20000};
    vector<int> y = {19999};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 20000, 40000};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int width = 40000;
    int height = 39999;
    vector<int> x = {19999};
    vector<int> y = {19999};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20000, 0, 20000, 39999};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {33333, 7500, 19999, 18750, 11111, 20000, 30000, 9999, 7000, 30000, 15001, 23001, 50, 29850, 15501};
    vector<int> y = {16777, 29999, 10000, 4999, 33334, 20000, 30001, 20000, 12999, 15000, 24999, 16999, 75, 7599, 20222};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15002, 20223, 14998, 19777};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int width = 10;
    int height = 10;
    vector<int> x = {4, 4, 2, 3, 6};
    vector<int> y = {1, 2, 9, 0, 2};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 10, 6};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int width = 11;
    int height = 12;
    vector<int> x = {5, 4, 2, 4, 6, 9, 7, 3, 3, 8, 6, 6, 0};
    vector<int> y = {2, 2, 11, 0, 2, 3, 11, 6, 11, 1, 1, 11, 6};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 7, 7};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int width = 15;
    int height = 16;
    vector<int> x = {7, 6, 3, 5, 9, 12, 10, 5, 5, 2, 11, 9, 8, 0, 7, 11, 6, 6, 6, 0, 13, 0, 11, 12, 9};
    vector<int> y = {2, 3, 15, 1, 3, 5, 15, 8, 15, 15, 2, 1, 15, 8, 12, 6, 6, 0, 4, 0, 14, 3, 1, 13, 6};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 4, 15};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int width = 17;
    int height = 18;
    vector<int> x = {8, 7, 4, 6, 10, 14, 12, 5, 5, 3, 13, 10, 9, 0, 8, 10, 13, 7, 7, 7, 0, 15, 0, 12, 13, 10, 7, 5, 15, 4, 8, 13, 13, 12, 14, 16, 10, 13, 0, 16, 2, 4, 1, 15, 0, 11, 2, 11, 10, 13};
    vector<int> y = {3, 3, 17, 1, 4, 5, 17, 9, 17, 17, 2, 1, 17, 9, 14, 2, 7, 7, 0, 5, 0, 16, 3, 1, 15, 7, 13, 1, 15, 16, 0, 11, 9, 8, 13, 14, 15, 12, 17, 6, 5, 3, 12, 3, 7, 2, 16, 17, 0, 4};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 10, 11, 3};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int width = 100;
    int height = 100;
    vector<int> x = {49, 41, 25, 36, 62, 86, 70, 34, 34, 19, 78, 60, 54, 2, 47, 62, 76, 43, 42, 41, 2, 89, 2, 73, 82, 86, 64, 46, 31, 91, 26, 51, 76, 77, 81, 71, 83, 97, 64, 81, 3, 97, 16, 28, 8, 90, 2, 65, 15, 64};
    vector<int> y = {18, 20, 96, 8, 24, 31, 95, 51, 99, 99, 15, 10, 95, 55, 79, 11, 39, 41, 0, 28, 3, 92, 20, 9, 86, 32, 41, 76, 6, 84, 93, 0, 66, 53, 64, 47, 72, 83, 84, 71, 99, 37, 31, 18, 70, 21, 40, 14, 91, 12};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 52, 67, 24};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int width = 100;
    int height = 100;
    vector<int> x = {18, 81, 16, 53, 74, 81, 34, 95, 83, 61, 88, 80, 41, 96, 70, 49, 21, 43, 4, 36, 53, 93, 33, 44, 95, 71, 98, 3, 84, 55, 33, 67, 9, 72, 5, 67, 27, 22, 37, 69, 80, 27, 32, 74, 69, 19, 22, 52, 0, 33};
    vector<int> y = {79, 32, 75, 82, 53, 53, 85, 30, 70, 95, 94, 57, 96, 96, 78, 43, 88, 31, 31, 23, 5, 25, 77, 74, 96, 49, 43, 64, 73, 6, 51, 33, 40, 74, 44, 36, 40, 77, 35, 94, 32, 82, 74, 45, 57, 89, 59, 40, 25, 18};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37, 7, 56, 24};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int width = 7;
    int height = 7;
    vector<int> x = {3, 2, 1, 2, 4, 6, 4, 2, 2, 5, 4, 3, 0, 3, 5, 3, 3, 0, 6, 0, 5, 5, 4, 6, 5, 5, 5, 4, 0, 1, 0, 6, 0, 2, 2, 0, 3, 4, 6, 1, 1, 3, 1, 6, 1, 1, 4, 2};
    vector<int> y = {1, 1, 6, 0, 1, 2, 6, 3, 6, 1, 0, 6, 3, 5, 2, 2, 0, 0, 6, 1, 0, 6, 2, 5, 4, 3, 5, 5, 6, 2, 4, 1, 2, 2, 5, 5, 4, 3, 4, 1, 0, 3, 4, 0, 3, 5, 4, 4};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 3, 1, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int width = 8;
    int height = 8;
    vector<int> x = {3, 2, 2, 4, 6, 5, 2, 1, 6, 4, 4, 0, 3, 6, 3, 3, 3, 0, 7, 0, 5, 6, 5, 7, 6, 6, 5, 0, 7, 1, 2, 0, 7, 0, 5, 2, 2, 0, 5, 3, 6, 5, 1, 4, 2, 1, 7, 1, 1, 4};
    vector<int> y = {1, 7, 0, 1, 2, 7, 4, 7, 1, 0, 7, 4, 6, 3, 3, 0, 2, 0, 7, 1, 0, 6, 3, 6, 5, 4, 6, 7, 3, 2, 1, 5, 1, 3, 1, 3, 6, 6, 5, 5, 0, 4, 1, 4, 2, 5, 0, 3, 6, 5};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int width = 17;
    int height = 3;
    vector<int> x = {8, 7, 4, 6, 10, 14, 12, 5, 5, 3, 13, 9, 0, 8, 13, 7, 0, 15, 12, 13, 10, 7, 5, 12, 14, 16, 10, 0, 16, 2, 4, 1, 15, 11, 2, 11, 9, 1, 6, 11, 1, 3, 14, 9, 8, 16, 4, 2, 6, 3};
    vector<int> y = {0, 0, 2, 0, 0, 0, 2, 1, 2, 2, 0, 2, 1, 2, 1, 1, 0, 2, 0, 2, 1, 2, 0, 1, 2, 2, 2, 2, 1, 0, 0, 2, 0, 0, 2, 2, 0, 0, 2, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int width = 3;
    int height = 17;
    vector<int> x = {1, 0, 1, 1, 2, 2, 1, 1, 2, 0, 1, 2, 1, 1, 0, 2, 0, 2, 2, 1, 0, 0, 2, 2, 2, 2, 1, 0, 0, 2, 0, 1, 0, 2, 0, 2, 0, 1, 0, 0, 1, 2, 1, 0, 2, 1, 2, 0, 1, 1};
    vector<int> y = {3, 16, 1, 4, 5, 16, 8, 16, 2, 9, 13, 6, 7, 0, 0, 15, 3, 1, 14, 6, 1, 15, 11, 9, 8, 12, 14, 5, 12, 3, 6, 2, 8, 4, 7, 7, 14, 11, 11, 2, 9, 13, 15, 13, 0, 12, 10, 4, 10, 5};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10, 1, 1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int width = 40000;
    int height = 1;
    vector<int> x = {19928, 16635, 10257, 14547, 24906, 34598, 28377, 13871, 13648, 7839, 31575, 24029, 21960, 965, 19199, 24926, 30736, 17391, 17182, 16677, 983, 35724, 1130, 29561, 32940, 34545, 25821, 18524, 12722, 36778, 10432, 20692, 30741, 30935, 32737, 28627, 33243, 38958, 25755, 32538, 1589, 38955, 6716, 11448, 3495, 36070, 26299, 6289, 25795, 12331};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3496, 0, 2793, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int width = 1;
    int height = 40000;
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {7210, 8084, 38567, 3292, 9848, 12588, 38189, 20666, 39863, 39809, 6233, 4168, 38375, 22157, 31949, 4499, 15939, 16602, 24, 11370, 1303, 36982, 8204, 3972, 34430, 12992, 16463, 30737, 2456, 33649, 37207, 229, 26646, 21467, 25998, 19141, 29101, 33331, 33609, 28703, 39872, 15017, 12717, 7404, 28285, 8545, 16379, 5803, 36734, 5016};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 22158, 1, 3840};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int width = 40000;
    int height = 10;
    vector<int> x = {16255, 9878, 3684, 20492, 123, 9767, 29685, 11837, 11066, 6245, 35206, 23054, 24138, 4031, 16448, 4924, 10079, 24200, 23823, 34271, 36899, 9630, 16604, 17973, 25562, 8849, 13991, 11534, 3189, 29460, 31895, 10652, 18047, 18458, 18704, 28543, 17643, 39125, 3485, 32212, 24568, 32837, 26524, 37682, 34305, 18986, 14783, 37165, 5042, 37369};
    vector<int> y = {0, 1, 0, 5, 2, 8, 6, 5, 5, 3, 5, 6, 2, 5, 6, 1, 1, 9, 8, 1, 8, 2, 3, 0, 5, 9, 0, 9, 7, 8, 6, 6, 2, 2, 0, 8, 2, 5, 0, 6, 3, 2, 4, 6, 2, 2, 0, 4, 4, 8};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11838, 1, 4610, 9};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int width = 10;
    int height = 40000;
    vector<int> x = {2, 9, 0, 0, 8, 1, 1, 8, 0, 2, 0, 0, 9, 1, 5, 8, 4, 6, 6, 7, 8, 1, 7, 1, 2, 1, 5, 1, 1, 0, 8, 6, 5, 4, 8, 2, 9, 7, 3, 8, 9, 2, 7, 3, 3, 6, 5, 3, 3, 8};
    vector<int> y = {28913, 23391, 10783, 7202, 35244, 2892, 19448, 37649, 7732, 14426, 26028, 34207, 25257, 39203, 10277, 39512, 3027, 36920, 19593, 26947, 16964, 18688, 12264, 1741, 12350, 26656, 32264, 31347, 15406, 18093, 25080, 6967, 35881, 191, 14064, 12171, 9378, 11565, 38108, 9927, 20093, 17395, 3967, 35951, 27768, 37406, 30359, 4143, 37107, 19332};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 10278, 3, 17490};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {19928};
    vector<int> y = {7210};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7211, 40000, 32789};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {35584, 8029};
    vector<int> y = {33464, 39253};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 35584, 39253};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {30416, 37567, 1321};
    vector<int> y = {21647, 17874, 5337};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1322, 0, 29094, 40000};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {19928, 16635, 10257, 14547, 24906, 34598, 28377, 13871, 13648, 7839, 31575, 24029, 21960, 965, 19199, 24926, 30736, 17391, 17182, 16677, 983, 35724, 1130, 29561, 32940, 34545, 25821, 18524, 12722, 36778, 10432, 20692, 30741, 30935, 32737, 28627, 33243, 38958, 25755, 32538, 1589, 38955, 6716, 11448, 3495, 36070, 965, 26299, 6289};
    vector<int> y = {7210, 8084, 38567, 3292, 9848, 12588, 38189, 20666, 39863, 39809, 6233, 4168, 38375, 22157, 31949, 4499, 15939, 16602, 24, 11370, 1303, 36982, 8204, 3972, 34430, 12992, 16463, 30737, 2456, 33649, 37207, 229, 26646, 21467, 25998, 19141, 29101, 33331, 33609, 28703, 39872, 15017, 12717, 7404, 28285, 8545, 16379, 5803, 36734};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3496, 20667, 27245, 10070};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {20080, 16642, 376, 39202, 5570, 23212, 21695, 7674, 18158, 31714, 1752, 32232, 6080, 10572, 9317, 20776, 18518, 32251, 9353, 10401, 8128, 17141, 33607, 4851, 37656, 25843, 37607, 16519, 14081, 11035, 13388, 11466, 34546, 6217, 11193, 10172, 5379, 21052, 3617, 37247, 28886, 31606, 2078, 20099, 22088, 38712, 28218, 29542, 17477, 18788};
    vector<int> y = {38014, 15116, 22615, 36403, 24327, 15600, 12394, 8074, 1524, 28219, 10255, 38034, 36759, 22567, 3628, 29756, 15292, 23349, 2804, 25017, 6746, 20179, 36053, 11875, 35634, 4079, 16297, 1922, 14812, 8438, 28808, 18680, 29935, 20690, 39443, 33100, 3672, 687, 24183, 37461, 20306, 32716, 33341, 5603, 14572, 10359, 7531, 5231, 2944, 6822};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20777, 20307, 10829, 19693};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {14912, 6180, 39903, 19018, 633, 19419, 37696, 29936, 7743, 35353, 8401, 10686, 20643, 11507, 14012, 11612, 25438, 33401, 13000, 6991, 4018, 12499, 7465, 31547, 22240, 22557, 6695, 11517, 15637, 25546, 16458, 28726, 36903, 4469, 27262, 30405, 26484, 12756, 15064, 37966, 931, 8573, 4300, 34729, 3200, 7244, 35852, 5596, 24968, 16134};
    vector<int> y = {26198, 33737, 31254, 21269, 9174, 24385, 4552, 23144, 27156, 30517, 14293, 5339, 12009, 39794, 29187, 21463, 10670, 21087, 26673, 4695, 31710, 27094, 33352, 13564, 26182, 33650, 6969, 37018, 1379, 33496, 29430, 633, 15611, 10774, 10339, 9921, 2721, 32207, 21862, 22050, 27008, 1937, 18237, 13878, 32373, 39184, 37059, 32080, 23917, 31404};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4301, 14294, 32602, 6793};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {9744, 35718, 39431, 38834, 35697, 15625, 13698, 12199, 37327, 38991, 15051, 29140, 35207, 12441, 18708, 2448, 32358, 34551, 16648, 3581, 39908, 7858, 21323, 18244, 6825, 19271, 15783, 6515, 17194, 57, 19528, 5985, 39260, 2720, 3332, 10637, 7590, 4460, 26511, 38685, 12977, 25540, 6522, 9360, 24312, 15776, 3486, 21650, 32459, 13480};
    vector<int> y = {14382, 12358, 39892, 6136, 34021, 33169, 36710, 38215, 12788, 32816, 18331, 12643, 27260, 17022, 14745, 13170, 6047, 18825, 10541, 24373, 16674, 34009, 30650, 15253, 16729, 23220, 37641, 32114, 27947, 18553, 30051, 22585, 1287, 857, 21236, 26742, 1770, 23727, 19541, 6639, 33710, 11157, 3132, 22154, 10174, 28010, 26588, 18928, 4890, 15985};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21324, 19542, 13883, 20458};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {4576, 25256, 38958, 18650, 30761, 11832, 29699, 34461, 26912, 2630, 21700, 7594, 9770, 13376, 23403, 33284, 39278, 35701, 20295, 171, 35798, 3216, 35180, 4941, 31410, 15984, 24871, 1513, 18750, 14567, 22599, 23244, 1616, 971, 19402, 30870, 28695, 36164, 37959, 39404, 25022, 2507, 8744, 23991, 5424, 24308, 11119, 37703, 39950, 10825};
    vector<int> y = {2565, 30978, 8531, 31003, 18868, 1954, 28868, 13286, 38420, 35115, 22369, 19948, 2510, 34249, 303, 4877, 1425, 16564, 34410, 4051, 1638, 924, 27948, 16942, 7277, 12791, 28313, 27209, 14514, 3611, 30673, 4537, 26963, 30940, 32132, 3564, 819, 15248, 17220, 31228, 412, 20377, 28028, 30429, 27974, 16835, 16116, 5776, 25863, 567};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4538, 31410, 8253};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {1, 39999};
    vector<int> y = {1, 39999};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 39998, 39999};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int width = 3;
    int height = 3;
    vector<int> x = {0, 1};
    vector<int> y = {0, 1};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 1, 3};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int width = 25;
    int height = 1;
    vector<int> x = {1, 10, 21};
    vector<int> y = {0, 0, 0};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 0, 10, 1};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int width = 10000;
    int height = 10000;
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> y = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 0, 9974, 10000};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {0, 1000, 20000, 30000};
    vector<int> y = {0, 1000, 20000, 30000};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1001, 0, 38999, 20000};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {1, 3, 5, 7, 11, 13, 15, 1, 3, 5, 7, 11, 13, 15, 1, 3, 5, 7, 11, 13, 15, 1, 3, 5, 7, 11, 13, 15, 1, 3, 5, 7, 11, 13, 15, 1, 3, 5, 7, 11, 13, 15, 1, 3, 5, 7, 11, 13, 15};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 5, 5, 5, 5, 5, 5, 5, 7, 7, 7, 7, 7, 7, 7, 10, 10, 10, 10, 10, 10, 10, 12, 12, 12, 12, 12, 12, 12, 14, 14, 14, 14, 14, 14, 14};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 15, 40000, 39985};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 31000, 32000, 33000, 34000, 35000, 36000, 37000, 38000, 39000, 39400, 39410, 39420, 39430, 39440, 39450, 39460, 39470, 39480, 39490, 39500};
    vector<int> y = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 31000, 32000, 33000, 34000, 35000, 36000, 37000, 38000, 39000, 39400, 39410, 39420, 39430, 39440, 39450, 39460, 39470, 39480, 39490, 39500};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19001, 0, 20999, 20000};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {5, 10, 15, 20000};
    vector<int> y = {5, 10, 15, 20000};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20001, 0, 19999, 40000};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 0, 39990, 40000};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {9383, 10886, 12777, 36915, 27793, 38335, 5386, 492, 36649, 1421, 2362, 10027, 8690, 59, 17763, 33926, 20540, 23426, 9172, 15736, 5211, 35368, 22567, 36429, 25782, 21530, 2862, 25123, 14067, 23135, 33929, 19802, 34022, 3058, 13069, 18167, 1393, 18456, 15011, 38042, 16229, 17373, 4421, 24919, 13784, 18537, 15198, 34324, 38315, 24370};
    vector<int> y = {6413, 3526, 16091, 28980, 39956, 1873, 6862, 39170, 26996, 17281, 22305, 20925, 37084, 16327, 20336, 6505, 30846, 21729, 21313, 5857, 16124, 33895, 19582, 20545, 18814, 33367, 35434, 30364, 24043, 33750, 11087, 26808, 37276, 27178, 15788, 33584, 25403, 22651, 32754, 12399, 39932, 15060, 29676, 33368, 27739, 10012, 36226, 18586, 28094, 17539};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25783, 0, 8143, 39956};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int width = 7;
    int height = 3;
    vector<int> x = {2, 4, 5};
    vector<int> y = {0, 0, 2};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5, 2};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int width = 5;
    int height = 5;
    vector<int> x = {0, 1, 2, 3, 4};
    vector<int> y = {1, 1, 1, 1, 1};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 3};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int width = 2000;
    int height = 1;
    vector<int> x = {700, 1200, 100, 600, 1300, 1800};
    vector<int> y = {0, 0, 0, 0, 0, 0};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101, 0, 499, 1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {0, 800, 1600, 2400, 3200, 4000, 4800, 5600, 6400, 7200, 8000, 8800, 9600, 10400, 11200, 12000, 12800, 13600, 14400, 15200, 16000, 16800, 17600, 18400, 19200, 20000, 20800, 21600, 22400, 23200, 24000, 24800, 25600, 26400, 27200, 28000, 28800, 29600, 30400, 31200, 32000, 32800, 33600, 34400, 35200, 36000, 36800, 37600, 38400, 39200};
    vector<int> y = {0, 800, 1600, 2400, 3200, 4000, 4800, 5600, 6400, 7200, 8000, 8800, 9600, 10400, 11200, 12000, 12800, 13600, 14400, 15200, 16000, 16800, 17600, 18400, 19200, 20000, 20800, 21600, 22400, 23200, 24000, 24800, 25600, 26400, 27200, 28000, 28800, 29600, 30400, 31200, 32000, 32800, 33600, 34400, 35200, 36000, 36800, 37600, 38400, 39200};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19201, 0, 20799, 20000};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int width = 40000;
    int height = 40000;
    vector<int> x = {1000, 2000, 3001, 4003, 5006, 6010, 7015, 8021, 9028, 10036, 11045, 12055, 13066, 14078, 15088, 16096, 17193, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 31000, 32000, 33000, 34000, 35000, 36000, 37000, 38000, 39000, 39999, 10, 39980};
    vector<int> y = {1000, 2000, 3001, 4003, 5006, 6010, 7015, 8021, 9028, 10036, 11045, 12055, 13066, 14078, 15088, 16096, 17193, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 31000, 32000, 33000, 34000, 35000, 36000, 37000, 38000, 39000, 39999, 39980, 10};
    SensorGrid* pObj = new SensorGrid();
    clock_t start = clock();
    vector<int> result = pObj->largestRectangle(width, height, x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20001, 11, 19999, 20989};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=304031&rd=5852&pm=2906
********************************************************************************
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef vector<vector<vector<int> > > viii;
typedef vector<bool> vb;
typedef vector<vb> vbb;
typedef vector<double> vd;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<vs> vss;
 
typedef pair<int,int> pii;
typedef pair<int,bool> pib;
typedef pair<int,pii> piii;
typedef pair<int,pib> piib;
typedef pair<int,piii> piiii;
typedef pair<int,piib> piiib;
typedef pair<int,piiii> piiiii;
typedef pair<int,piiib> piiiib;
#define prr(a,b) make_pair((a),(b))
#define prrr(a,b,c) make_pair((a),make_pair((b),(c)))
#define prrrr(a,b,c,d) make_pair((a),make_pair((b),make_pair((c),(d))))
#define prrrrr(a,b,c,d,e) make_pair((a),make_pair((b),make_pair((c),make_pair((d),(e)))))
#define pss(a,b) make_pair((a),(b))
 
#define fo(x,y) for((x)=0; (x)<(y); (x)++)
#define fi(n) for(int i=0; i<n; i++)
#define fj(n) for(int j=0; j<n; j++)
#define fk(n) for(int k=0; k<n; k++)
#define fl(n) for(int l=0; l<n; l++)
#define fir(a,b) for(int i=(a); i<=(b); i++)
#define fjr(a,b) for(int j=(a); j<=(b); j++)
#define fkr(a,b) for(int k=(a); k<=(b); k++)
#define pb push_back
#define sz size()
 
class SensorGrid {
  //CODE BEGINS HERE
 
  public:
  vector <int> largestRectangle(int width, int height, vector <int> x, vector <int> y) {
    int besty=INT_MAX; int bestx=INT_MAX; int bestw=-1; int besth=-1; int bestarea=-1;
    x.pb(-1); x.pb(width);
    y.pb(-1); y.pb(height);
    fi(y.sz) {
      int top = y[i] + 1;
      fj(y.sz) {
        int bottom = y[j] - 1;
        fk(x.sz) {
          int left = x[k] + 1;
          fl(x.sz) {
            int right = x[l] - 1;
            if(left>right || top>bottom) continue;
            bool bad=false;
            for(int m = 0; m < x.sz; m++) {
              if(x[m] >= left && x[m] <= right && y[m]>=top && y[m]<=bottom) bad=true;
            }
            if(bad);
              else {
                int w = right-left+1; int h=bottom-top+1;
                int area=w*h;
                if(area>bestarea) {
                  besty = top; bestx=left; bestw=w; besth=h; bestarea=area;
                } else if(area == bestarea) {
                  if(top < besty) {
                    besty = top; bestx=left; bestw=w; besth=h; bestarea=area;
                  }
                  else if(top == besty) {
                    if(left < bestx) {
                      besty = top; bestx=left; bestw=w; besth=h; bestarea=area;
                    }
                    else if(left==bestx){
                      if(w > bestw){
                        besty = top; bestx=left; bestw=w; besth=h; bestarea=area;
                      }
                    }
                  }
                }
              }
              
            }
          }
        }
      
    }
    vi ans(4);
    ans[0] = bestx; ans[1]=besty; ans[2]=bestw; ans[3]=besth;
            return ans;
  }
 
  //NON-TEMPLATE CODE ENDS HERE
  map<pair<string, string>, vs> tokcache;
  vs tok(string s, string d){
    if(tokcache.count(pss(s,d))) return tokcache[pss(s,d)];
    vs ans;
    int laststart=0;
    fi(s.sz+1){
      bool isd=false;
      if(i==s.sz) isd=true;
      else fj(d.sz){
        if(s[i]==d[j]){
          isd=true; break;
        }
      }
      if(isd){
        if(laststart==i){
          laststart=i+1;
          continue;
        }
        ans.pb(s.substr(laststart,i-laststart));
        laststart=i+1;
      }
    }
    return tokcache[pss(s,d)]=ans;
  }
  vs tok(string s){
    return tok(s," ");
  }
 
  template<class T>
  void swap(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
  }
 
  ll lmod(ll a, ll b) {
    return a-a/b*b;
  }
  
  int gcd(int a, int b) {
    return (b) ? gcd(b,a%b) : a;
  }
 
  int lcm(int a, int b){
    return a/gcd(a,b)*b;
  }
 
  ll lgcd(ll a, ll b){
    return (b) ? gcd(b,lmod(a,b)) : a;
  }
 
  ll lcm(ll a, ll b){
    return a/lgcd(a,b)*b;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/