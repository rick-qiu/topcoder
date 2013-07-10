/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3936
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

class DiskCut {
public:
    double minCost(int area, vector<int> percent);
};

double DiskCut::minCost(int area, vector<int> percent) {
    double ret;
    return ret;
}


int test0() {
    int area = 4;
    vector<int> percent = {25, 25, 25, 25};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
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
    int area = 5;
    vector<int> percent = {20, 20, 20, 20, 20};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 17.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int area = 2;
    vector<int> percent = {50, 50};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int area = 1;
    vector<int> percent = {10, 40, 30, 20};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int area = 1;
    vector<int> percent = {11, 11, 11, 11, 11, 11, 11, 11, 12};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 4.22;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int area = 1;
    vector<int> percent = {12, 12, 12, 12, 12, 12, 12, 16};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
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
    int area = 10;
    vector<int> percent = {20, 20, 30, 30};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int area = 10;
    vector<int> percent = {40, 10, 20, 10, 20};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 32.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int area = 100;
    vector<int> percent = {33, 33, 34};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 266.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int area = 1000;
    vector<int> percent = {2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 15, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 30, 1};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 5480.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int area = 100;
    vector<int> percent = {90, 3, 4, 2, 1};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 219.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int area = 100;
    vector<int> percent = {90, 4, 3, 2, 1};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 219.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int area = 1000;
    vector<int> percent = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 6720.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int area = 100;
    vector<int> percent = {33, 33, 34};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 266.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int area = 68;
    vector<int> percent = {9, 13, 34, 35, 9};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 213.52;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int area = 52;
    vector<int> percent = {19, 30, 14, 19, 18};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 172.64;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int area = 476;
    vector<int> percent = {6, 21, 11, 24, 38};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1508.92;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int area = 433;
    vector<int> percent = {5, 8, 13, 12, 62};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1195.08;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int area = 893;
    vector<int> percent = {5, 26, 12, 35, 22};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2830.81;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int area = 387;
    vector<int> percent = {11, 35, 13, 7, 34};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1215.18;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int area = 241;
    vector<int> percent = {4, 36, 20, 27, 13};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 763.97;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int area = 96;
    vector<int> percent = {28, 18, 11, 27, 16};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 313.92;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int area = 284;
    vector<int> percent = {35, 22, 35, 7, 1};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 860.52;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int area = 47;
    vector<int> percent = {12, 23, 18, 17, 30};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 154.63;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int area = 792;
    vector<int> percent = {8, 30, 7, 28, 27};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2494.8;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int area = 628;
    vector<int> percent = {9, 5, 32, 11, 18, 25};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2128.92;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int area = 729;
    vector<int> percent = {20, 14, 38, 10, 18};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2361.96;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int area = 38;
    vector<int> percent = {30, 21, 14, 10, 9, 16};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 132.62;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int area = 54;
    vector<int> percent = {18, 23, 28, 12, 19};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 178.2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int area = 421;
    vector<int> percent = {23, 26, 6, 10, 5, 11, 19};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1524.02;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int area = 295;
    vector<int> percent = {13, 1, 8, 30, 48};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 834.85;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int area = 872;
    vector<int> percent = {5, 16, 11, 18, 24, 26};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 3034.56;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int area = 801;
    vector<int> percent = {9, 22, 19, 21, 4, 14, 11};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2963.7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int area = 289;
    vector<int> percent = {19, 28, 19, 12, 22};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 956.59;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int area = 238;
    vector<int> percent = {9, 13, 7, 30, 6, 35};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 797.3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int area = 845;
    vector<int> percent = {19, 2, 19, 12, 11, 16, 4, 17};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 3253.25;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int area = 253;
    vector<int> percent = {18, 7, 41, 2, 32};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 746.35;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int area = 241;
    vector<int> percent = {7, 8, 4, 23, 22, 2, 23, 9, 2};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 906.16;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int area = 123;
    vector<int> percent = {27, 31, 14, 4, 24};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 391.14;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int area = 995;
    vector<int> percent = {3, 24, 2, 13, 3, 1, 21, 12, 5, 16};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 3840.7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int area = 890;
    vector<int> percent = {16, 4, 12, 16, 16, 11, 10, 4, 11};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 3631.2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int area = 551;
    vector<int> percent = {8, 3, 20, 4, 16, 13, 18, 16, 2};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2165.43;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int area = 778;
    vector<int> percent = {4, 15, 14, 3, 6, 4, 12, 12, 2, 20, 8};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 3267.6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int area = 389;
    vector<int> percent = {17, 11, 8, 11, 19, 7, 12, 3, 7, 5};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1629.91;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int area = 334;
    vector<int> percent = {10, 13, 3, 9, 11, 12, 6, 10, 6, 3, 12, 5};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1496.32;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int area = 969;
    vector<int> percent = {6, 20, 17, 15, 10, 20, 6, 6};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 3759.72;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int area = 932;
    vector<int> percent = {13, 17, 9, 9, 9, 13, 4, 15, 11};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 3849.16;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int area = 491;
    vector<int> percent = {31, 21, 1, 7, 30, 2, 8};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1625.21;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int area = 121;
    vector<int> percent = {15, 17, 17, 6, 3, 12, 11, 11, 8};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 494.89;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int area = 1000;
    vector<int> percent = {2, 7, 6, 2, 10, 13, 13, 5, 12, 12, 4, 3, 11};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 4490.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int area = 646;
    vector<int> percent = {9, 4, 9, 1, 15, 10, 12, 7, 8, 4, 7, 14};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2874.7;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int area = 606;
    vector<int> percent = {20, 11, 14, 6, 2, 2, 11, 14, 1, 8, 11};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2533.08;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int area = 477;
    vector<int> percent = {16, 3, 2, 12, 1, 21, 22, 10, 9, 4};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1884.15;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int area = 680;
    vector<int> percent = {4, 8, 9, 4, 6, 2, 7, 6, 7, 4, 10, 6, 1, 9, 3, 2, 8, 4};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 3427.2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int area = 789;
    vector<int> percent = {7, 4, 5, 9, 10, 8, 6, 2, 9, 5, 4, 3, 6, 4, 4, 6, 7, 1};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 3992.34;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int area = 178;
    vector<int> percent = {4, 4, 14, 26, 25, 27};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 587.4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int area = 461;
    vector<int> percent = {17, 50, 3, 3, 4, 16, 7};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1456.76;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int area = 205;
    vector<int> percent = {9, 3, 2, 15, 21, 1, 6, 2, 7, 1, 12, 21};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 838.45;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int area = 288;
    vector<int> percent = {3, 4, 8, 8, 2, 3, 10, 4, 3, 7, 8, 6, 5, 5, 8, 2, 8, 6};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1460.16;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int area = 199;
    vector<int> percent = {10, 10, 11, 11, 12, 7, 13, 10, 12, 4};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 857.69;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int area = 607;
    vector<int> percent = {14, 5, 10, 16, 2, 4, 12, 14, 1, 1, 9, 1, 11};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2628.31;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int area = 370;
    vector<int> percent = {18, 27, 13, 23, 1, 18};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1280.2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int area = 147;
    vector<int> percent = {7, 3, 3, 6, 3, 9, 6, 6, 8, 2, 3, 7, 6, 5, 7, 8, 7, 4};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 748.23;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int area = 195;
    vector<int> percent = {9, 4, 3, 6, 5, 6, 7, 7, 2, 7, 3, 6, 4, 4, 6, 4, 5, 2, 2, 4, 4};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1035.45;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int area = 515;
    vector<int> percent = {17, 12, 2, 11, 9, 2, 11, 10, 17, 9};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2147.55;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int area = 923;
    vector<int> percent = {40, 6, 4, 8, 31, 11};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2925.91;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int area = 158;
    vector<int> percent = {1, 3, 3, 7, 3, 1, 6, 6, 6, 1, 3, 2, 6, 5, 6, 4, 3, 2, 6, 6, 3, 7, 3, 7};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 854.78;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int area = 885;
    vector<int> percent = {5, 6, 3, 5, 2, 1, 8, 4, 5, 4, 7, 2, 3, 3, 1, 8, 4, 1, 7, 8, 4, 3, 1, 5};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 4779.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int area = 882;
    vector<int> percent = {4, 2, 5, 7, 5, 10, 8, 10, 2, 3, 6, 8, 1, 4, 8, 6, 11};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 4348.26;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int area = 826;
    vector<int> percent = {3, 4, 4, 4, 2, 3, 4, 3, 7, 4, 5, 4, 5, 2, 2, 3, 1, 1, 2, 2, 3, 6, 2, 6, 2, 5, 4, 5, 2};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 4749.5;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int area = 854;
    vector<int> percent = {8, 9, 7, 8, 5, 5, 5, 2, 6, 1, 8, 7, 4, 1, 1, 6, 8, 9};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 4278.54;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int area = 976;
    vector<int> percent = {3, 5, 4, 3, 3, 1, 5, 3, 4, 1, 4, 2, 4, 3, 3, 3, 1, 4, 5, 3, 4, 3, 5, 2, 5, 2, 4, 2, 4, 5};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 5690.08;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int area = 485;
    vector<int> percent = {1, 6, 5, 5, 2, 5, 2, 2, 2, 4, 2, 4, 6, 3, 3, 5, 5, 1, 3, 5, 3, 4, 3, 4, 3, 4, 3, 5};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2774.2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int area = 870;
    vector<int> percent = {1, 3, 4, 4, 3, 6, 4, 1, 2, 6, 2, 5, 6, 2, 3, 2, 6, 1, 4, 4, 2, 5, 3, 2, 1, 2, 5, 3, 5, 3};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 5011.2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int area = 197;
    vector<int> percent = {6, 19, 6, 8, 5, 1, 3, 17, 21, 7, 7};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 819.52;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int area = 990;
    vector<int> percent = {4, 4, 1, 6, 1, 2, 6, 2, 6, 8, 8, 3, 4, 6, 4, 4, 3, 5, 4, 4, 3, 6, 5, 1};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 5395.5;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int area = 271;
    vector<int> percent = {2, 6, 6, 5, 4, 4, 2, 3, 4, 5, 5, 4, 4, 2, 5, 2, 5, 4, 4, 2, 1, 4, 2, 2, 6, 3, 4};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1539.28;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int area = 498;
    vector<int> percent = {4, 3, 3, 4, 4, 3, 5, 5, 3, 3, 2, 6, 3, 5, 5, 3, 3, 5, 3, 4, 3, 2, 1, 4, 5, 2, 2, 5};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2868.48;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int area = 217;
    vector<int> percent = {2, 4, 2, 3, 4, 4, 3, 2, 4, 3, 3, 3, 5, 3, 3, 2, 4, 2, 5, 3, 7, 5, 4, 1, 5, 5, 6, 2, 1};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 1249.92;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int area = 567;
    vector<int> percent = {10, 6, 13, 13, 13, 10, 3, 4, 5, 2, 8, 6, 7};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2579.85;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int area = 739;
    vector<int> percent = {2, 12, 8, 1, 11, 12, 9, 3, 9, 1, 7, 3, 5, 10, 7};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 3451.13;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int area = 751;
    vector<int> percent = {8, 4, 2, 2, 8, 1, 6, 8, 4, 6, 5, 7, 7, 5, 7, 4, 2, 2, 2, 2, 1, 7};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 3965.28;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int area = 554;
    vector<int> percent = {7, 1, 2, 4, 7, 2, 4, 6, 3, 8, 7, 4, 6, 5, 1, 4, 2, 1, 8, 4, 7, 7};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2930.66;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int area = 368;
    vector<int> percent = {3, 3, 1, 2, 3, 3, 1, 2, 2, 1, 1, 2, 6, 1, 4, 3, 4, 5, 5, 3, 2, 4, 4, 3, 2, 3, 3, 2, 4, 3, 1, 2, 6, 2, 1, 3};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2219.04;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int area = 100;
    vector<int> percent = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 7, 7, 8, 8};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 562.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int area = 1000;
    vector<int> percent = {3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 2, 2};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 6560.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int area = 1;
    vector<int> percent = {10, 40, 20, 30};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int area = 100;
    vector<int> percent = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 507.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int area = 1;
    vector<int> percent = {10, 40, 30, 20};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int area = 15;
    vector<int> percent = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 100.8;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int area = 1000;
    vector<int> percent = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 51};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 4790.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int area = 40;
    vector<int> percent = {5, 5, 5, 5, 7, 5, 8, 60};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 124.8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int area = 1;
    vector<int> percent = {5, 5, 6, 6, 39, 39};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 3.05;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int area = 1000;
    vector<int> percent = {3, 5, 7, 9, 6, 30, 40};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 3280.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int area = 39;
    vector<int> percent = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 51};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 186.81;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int area = 1;
    vector<int> percent = {1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 4.74;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int area = 1;
    vector<int> percent = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 5, 5, 6, 6};
    DiskCut* pObj = new DiskCut();
    clock_t start = clock();
    double result = pObj->minCost(area, percent);
    clock_t end = clock();
    delete pObj;
    double expected = 6.3;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=263396&rd=6532&pm=3936
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;
 
class DiskCut {
  public:
  double minCost(int a, vector <int> b) {
    sort( b.begin(), b.end() );
    multiset< int > q;
    for( int i = 0; i < ( int )b.size(); i++ ) q.insert( b[i] );
    double cost = a;
    while( q.size() > 1 )
    {
      int x = *q.begin(); q.erase( q.begin() );
      int y = *q.begin(); q.erase( q.begin() );
      q.insert( x + y );
      cost += ( x + y ) * a / 100.0;
    }
    return cost;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/