/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2260
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

class TVTower {
public:
    double minRadius(vector<int> x, vector<int> y);
};

double TVTower::minRadius(vector<int> x, vector<int> y) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {1, 0, -1, 0};
    vector<int> y = {0, 1, 0, -1};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {3};
    vector<int> y = {299};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
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
    vector<int> x = {1000, 1000, 1000, 1000, 999};
    vector<int> y = {500, 1000, -300, -989, -300};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 994.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {5, 3, -4, 2};
    vector<int> y = {0, 4, 3, 2};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 4.743416490252569;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {5, -3, -4};
    vector<int> y = {0, 4, -3};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {52, -28, -38};
    vector<int> y = {7, 47, -23};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {-1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000};
    vector<int> y = {-1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
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
    vector<int> x = {-1000, -1000, 100, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000};
    vector<int> y = {-1000, 500, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 930.0537618869137;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {1, 11};
    vector<int> y = {1, 9};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.4031242374328485;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {1, 0, 11};
    vector<int> y = {1, 2, 9};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.519202405202649;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {1, 0, 11};
    vector<int> y = {1, 3, 9};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.4031242374328485;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {9, 3, -12, -17};
    vector<int> y = {3, -12, -17, 9};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 15.857491600939305;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {-976, 435, 812, -666, 234, 845, 123, -123};
    vector<int> y = {772, -976, 435, 812, -666, 234, 845, 123};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1126.3615357770154;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {-1000, 0, 1000, 921};
    vector<int> y = {1000, 0, -1000, 543};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1414.213562373095;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {3, 121, 5, 92};
    vector<int> y = {7, 243, 11, 185};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 131.9280106724876;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {0, 7, 0};
    vector<int> y = {0, 5, 10};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.285714285714286;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {0, 0, -5, 5};
    vector<int> y = {-3, 7, 0, 0};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.285714285714286;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {0, 500, 1000};
    vector<int> y = {0, 866, 0};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 577.3418013856813;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {0, -5, 5, 1};
    vector<int> y = {5, -5, -5, 1};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.25;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {-1000, 0, 1000, -500, 500, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900};
    vector<int> y = {-1000, 732, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1154.6836027713628;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {0, 3, 6};
    vector<int> y = {0, 10, 0};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.45;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {0, 3, 6};
    vector<int> y = {0, 4, 0};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.125;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {-5, 1, 2, 3, 4};
    vector<int> y = {10, 5, 3, 5, 7};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {690, 633, -649, -975, 409, -678, 624, -976, -460, -102, -983, 120, 202, 75, 826, -339, -709, 620, 204, -666, 718, -299, 290, 383, 634, 235, 571, -651, -984, -99, 448, 263, -466, 356, -155, 500, 678, -531, 81, -783, -76, 98, -106, -875, 730, -723, -656, -980, 454, 548};
    vector<int> y = {913, 171, 807, 202, -446, 440, 994, 682, 789, 567, -418, 236, -170, 116, -851, 232, -828, 827, 258, 253, 602, 740, 908, -505, 865, 638, -671, 766, 215, 784, -129, -316, -46, -323, 886, 65, 674, 880, -254, 462, 446, 329, -746, 833, -999, -597, -378, -826, 788, 880};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1227.4930366680005;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {0, 1, -1};
    vector<int> y = {6, 0, 0};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0833333333333335;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {0, 10, -1};
    vector<int> y = {10, 0, -1};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 7.188918942063233;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {0, 0, 7, -3};
    vector<int> y = {5, 5, 0, 0};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.015974481593781;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {0, 0, 8};
    vector<int> y = {5, -5, 0};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5625;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {1, 0, -1};
    vector<int> y = {0, 2, 0};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.25;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {-1000, 0, 1000};
    vector<int> y = {-866, 866, -866};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1154.6836027713628;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {0, 0, 7, 3};
    vector<int> y = {5, -5, 0, 0};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.285714285714286;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {0, 1000, 500};
    vector<int> y = {0, 0, 866};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 577.3418013856813;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {0, 2, 1};
    vector<int> y = {0, 0, 2};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.25;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {0, 5, 10};
    vector<int> y = {0, 10, 0};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.25;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {0, 4, 2};
    vector<int> y = {0, 0, 3};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.166666666666667;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {1, 2};
    vector<int> y = {1, 2};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7071067811865476;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {0, 6, 3};
    vector<int> y = {0, 0, 4};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.125;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {0, 10, 5};
    vector<int> y = {0, 0, 8};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5625;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {0, 0, 0};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {0, 5, 10};
    vector<int> y = {0, 8, 0};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5625;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {-10, 10, 0};
    vector<int> y = {10, 10, -15};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 14.5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {1, 0};
    vector<int> y = {1, 0};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7071067811865476;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {4, 4, 0, 0};
    vector<int> y = {4, 0, 0, 4};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8284271247461903;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {-500, 500, 0, 0};
    vector<int> y = {500, 500, -366, 640};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 577.3418013856814;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {0, 1};
    vector<int> y = {0, 1};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7071067811865476;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {933, 743, 262, 529, 700, 508, 752, 256, 256, 119, 711, 351, 843, 705, 108, 393, 330, 366, 169, 932, 917, 847, 972, 868, 980, 223, 549, 592, 164, 169, 551, 427, 190, 624, 635, 920, 944, 310, 862, 484, 363, 301, 710, 236, 876, 431, 929, 397, 675, 491};
    vector<int> y = {190, 344, 134, 425, 629, 30, 727, 126, 743, 334, 104, 760, 749, 620, 256, 932, 572, 613, 490, 509, 119, 405, 695, 49, 327, 719, 497, 824, 596, 649, 356, 184, 93, 245, 7, 306, 509, 754, 352, 665, 783, 738, 801, 690, 330, 337, 195, 656, 963, 11};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 517.1671916738641;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {0, 0, 15, 15};
    vector<int> y = {0, 20, 8, 12};
    TVTower* pObj = new TVTower();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 10.885311203635842;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=262056&rd=4735&pm=2260
********************************************************************************
#include <stdio.h>
#include <vector>
#include <map>
#include <algorithm>
#include <string.h>
#include <ctype.h>
#include <string>
#include <math.h>
 
using namespace std;
 
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<VI> VII;
 
#define DFLOAT 1E-6
 
struct TPoint
{
    double x, y;
};
 
struct TPoly {
    int N;
TPoint * points;
  void NewPoly(int n) { points = new TPoint[n];N=n; }
  ~TPoly() { delete[] points; }
};
 
int GetCenter(TPoint * targ, TPoint a, TPoint b, TPoint c)
{ double A = b.x-a.x, B = b.y-a.y, C = c.x-a.x, D = c.y-a.y;
double E = A*(a.x + b.x) + B*(a.y+b.y);
  double F = C*(a.x + c.x) + D*(a.y+c.y); 
  double G = 2*(A*(c.y - b.y) - B*(c.x - b.x));
  if(G == 0)
    return 0;
  targ->x = (D*E - B*F) / G;
  targ->y = (A*F - C*E) / G;
  return 1;
}
 
void computePermutation(int * array, int N)
{
  int t, index;
  for(int i=0;i<N;i++)
    array[i] = i;
  for(int i=N-1;i>0;i--)
  {
    index = random() % (i+1);
    t = array[index];
    array[index] = array[i];
    array[i] = t;
  }
}
 
int puntInCirkel(TPoint p, TPoint center, double size)
{
    return hypot(p.x - center.x, p.y - center.y) - size < DFLOAT;
}
double randomizedCircle(TPoly * p, TPoint * center)
{
  int N = p->N;
 
  int * order = new int[N];
  computePermutation(order, N);
 
  double circlesize = 0;
  center->x = 0; center->y = 0;
 
  TPoint points[3];
 
  for(int i=0;i<N;i++)
  {
    if(!puntInCirkel(p->points[ order[i] ], *center, circlesize))
    {
      // bereken cirkel opnieuw, met dit punt op de border
      points[0] = p->points[ order[i] ];
      *center = points[0];circlesize = 0;
 
      for(int j=0;j<i;j++)
        if(!puntInCirkel(p->points[ order[j] ], *center, circlesize))
        {
          // bereken cirkel opnieuw, met dit punt ook op de border.
          points[1] = p->points[ order[j] ];
          center->x = (points[0].x + points[1].x) / 2;
          center->y = (points[0].y + points[1].y) / 2;
          circlesize = hypot(points[0].x-points[1].x, points[0].y-points[1].y) / 2;
 
          for(int k=0;k<j;k++)
            if(!puntInCirkel(p->points[ order[k] ], *center, circlesize))
            {
              GetCenter(center, points[0], points[1], p->points[ order[k] ]);
              circlesize = hypot(points[0].x - center->x, points[0].y-center->y);
            }
        }
    }
  }
 
  delete[] order;
  return circlesize;
}
 
class TVTower {
 
  public:
  double minRadius(vector <int> x, vector <int> y) {
 
      TPoly p;
      TPoint dummy;
      p.NewPoly(x.size());
      for(int i =0;i<x.size();i++)
      {
    p.points[i].x = x[i];
    p.points[i].y = y[i];
      }
      return randomizedCircle(&p, &dummy);
  }
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/