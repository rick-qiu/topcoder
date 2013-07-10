/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11911
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

class EllysThreeRivers {
public:
    double getMin(int length, int walk, vector<int> width, vector<int> swim);
};

double EllysThreeRivers::getMin(int length, int walk, vector<int> width, vector<int> swim) {
    double ret;
    return ret;
}


int test0() {
    int length = 10;
    int walk = 8;
    vector<int> width = {5, 2, 3};
    vector<int> swim = {5, 2, 7};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2063518370413364;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int length = 1000;
    int walk = 100;
    vector<int> width = {91, 911, 85};
    vector<int> swim = {28, 97, 19};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 21.549321613601297;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int length = 666;
    int walk = 4;
    vector<int> width = {777, 888, 999};
    vector<int> swim = {11, 12, 13};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 228.26633673141083;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int length = 6;
    int walk = 100;
    vector<int> width = {2, 3, 4};
    vector<int> swim = {77, 88, 99};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12049782476139667;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int length = 873;
    int walk = 54;
    vector<int> width = {444, 588, 263};
    vector<int> swim = {67, 97, 26};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 26.365540023205206;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int length = 10;
    int walk = 3;
    vector<int> width = {5, 2, 3};
    vector<int> swim = {5, 2, 7};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 3.206358804145409;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int length = 42;
    int walk = 99;
    vector<int> width = {1, 1, 1};
    vector<int> swim = {1, 1, 1};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4240893747308077;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int length = 1000;
    int walk = 100;
    vector<int> width = {1, 1, 1};
    vector<int> swim = {1, 1, 1};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 12.999849996249809;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int length = 1;
    int walk = 1;
    vector<int> width = {1, 1, 1};
    vector<int> swim = {100, 1, 1};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 2.014092488547563;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int length = 1000;
    int walk = 1;
    vector<int> width = {1000, 1000, 1000};
    vector<int> swim = {100, 1, 1};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 2014.092488547563;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int length = 1;
    int walk = 1;
    vector<int> width = {1, 1, 1};
    vector<int> swim = {1, 100, 1};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 2.014092488547563;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int length = 1000;
    int walk = 1;
    vector<int> width = {1000, 1000, 1000};
    vector<int> swim = {1, 100, 1};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 2014.0924885475633;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int length = 1;
    int walk = 1;
    vector<int> width = {1, 1, 1};
    vector<int> swim = {1, 1, 100};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 2.014092488547563;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int length = 1000;
    int walk = 1;
    vector<int> width = {1000, 1000, 1000};
    vector<int> swim = {1, 1, 100};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 2014.0924885475633;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int length = 1;
    int walk = 1;
    vector<int> width = {1, 1, 1};
    vector<int> swim = {100, 100, 1};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 1.02235071540691;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int length = 1000;
    int walk = 1;
    vector<int> width = {1000, 1000, 1000};
    vector<int> swim = {100, 100, 1};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 1022.3507154069101;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int length = 1;
    int walk = 1;
    vector<int> width = {1, 1, 1};
    vector<int> swim = {100, 1, 100};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 1.02235071540691;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int length = 1000;
    int walk = 1;
    vector<int> width = {1000, 1000, 1000};
    vector<int> swim = {100, 1, 100};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 1022.3507154069101;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int length = 1;
    int walk = 1;
    vector<int> width = {1, 1, 1};
    vector<int> swim = {1, 100, 100};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0223507154069102;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int length = 1000;
    int walk = 1;
    vector<int> width = {1000, 1000, 1000};
    vector<int> swim = {1, 100, 100};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 1022.3507154069101;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int length = 1;
    int walk = 1;
    vector<int> width = {1, 1, 1};
    vector<int> swim = {100, 100, 100};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03162277660168379;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int length = 1000;
    int walk = 1;
    vector<int> width = {1000, 1000, 1000};
    vector<int> swim = {100, 100, 100};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 31.62277660168379;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int length = 1000;
    int walk = 2;
    vector<int> width = {1, 1, 1};
    vector<int> swim = {1, 1, 1};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 502.59807621135326;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int length = 1;
    int walk = 100;
    vector<int> width = {1, 1, 1};
    vector<int> swim = {100, 100, 100};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03162277660168379;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int length = 1000;
    int walk = 1;
    vector<int> width = {1000, 1000, 1000};
    vector<int> swim = {1, 1, 1};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 3162.277660168379;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int length = 989;
    int walk = 1;
    vector<int> width = {999, 2, 998};
    vector<int> swim = {24, 1, 98};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 57.39415929575806;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int length = 969;
    int walk = 1;
    vector<int> width = {713, 999, 68};
    vector<int> swim = {99, 97, 99};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 20.7079155100707;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int length = 997;
    int walk = 1;
    vector<int> width = {2, 1, 1000};
    vector<int> swim = {98, 1, 99};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 15.278151634263711;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int length = 709;
    int walk = 81;
    vector<int> width = {319, 795, 697};
    vector<int> swim = {95, 73, 44};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 32.106959944330384;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int length = 812;
    int walk = 55;
    vector<int> width = {477, 837, 590};
    vector<int> swim = {26, 93, 88};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 36.24002021182467;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int length = 692;
    int walk = 70;
    vector<int> width = {383, 153, 862};
    vector<int> swim = {12, 83, 75};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 47.9315091426996;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int length = 770;
    int walk = 71;
    vector<int> width = {57, 153, 325};
    vector<int> swim = {97, 68, 79};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 12.015184548144735;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int length = 424;
    int walk = 60;
    vector<int> width = {163, 275, 979};
    vector<int> swim = {31, 86, 4};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 255.48147597689908;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int length = 115;
    int walk = 2;
    vector<int> width = {787, 933, 48};
    vector<int> swim = {50, 46, 5};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 45.70266338154858;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int length = 655;
    int walk = 69;
    vector<int> width = {90, 240, 992};
    vector<int> swim = {1, 7, 44};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 151.16660851530833;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int length = 430;
    int walk = 83;
    vector<int> width = {992, 88, 120};
    vector<int> swim = {39, 47, 37};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 32.44783787996134;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int length = 2;
    int walk = 12;
    vector<int> width = {478, 728, 533};
    vector<int> swim = {23, 13, 85};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 83.05322734314836;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int length = 351;
    int walk = 8;
    vector<int> width = {812, 974, 778};
    vector<int> swim = {89, 40, 2};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 423.0124734394166;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int length = 283;
    int walk = 41;
    vector<int> width = {73, 994, 807};
    vector<int> swim = {50, 41, 32};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 51.48946675617956;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int length = 6;
    int walk = 92;
    vector<int> width = {677, 10, 503};
    vector<int> swim = {8, 29, 7};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 156.82892122287066;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int length = 982;
    int walk = 15;
    vector<int> width = {729, 128, 907};
    vector<int> swim = {48, 98, 80};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 31.522247049508906;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int length = 848;
    int walk = 55;
    vector<int> width = {215, 244, 956};
    vector<int> swim = {34, 27, 1};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 984.1038328477277;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int length = 29;
    int walk = 2;
    vector<int> width = {726, 104, 658};
    vector<int> swim = {11, 78, 85};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 75.08034631941547;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int length = 838;
    int walk = 95;
    vector<int> width = {466, 941, 356};
    vector<int> swim = {85, 39, 46};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 40.84960192326622;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int length = 174;
    int walk = 89;
    vector<int> width = {762, 702, 126};
    vector<int> swim = {2, 28, 41};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 409.71354053673;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int length = 644;
    int walk = 9;
    vector<int> width = {48, 560, 124};
    vector<int> swim = {51, 15, 6};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 68.88188261221158;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int length = 214;
    int walk = 41;
    vector<int> width = {961, 279, 306};
    vector<int> swim = {25, 15, 39};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 65.45313672794364;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int length = 211;
    int walk = 95;
    vector<int> width = {970, 10, 87};
    vector<int> swim = {52, 33, 55};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 20.93552939515498;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int length = 67;
    int walk = 38;
    vector<int> width = {899, 552, 559};
    vector<int> swim = {98, 87, 29};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 34.808887106462585;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int length = 330;
    int walk = 26;
    vector<int> width = {796, 972, 98};
    vector<int> swim = {37, 98, 53};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 33.69514341197416;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int length = 973;
    int walk = 1;
    vector<int> width = {855, 279, 205};
    vector<int> swim = {41, 74, 32};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 37.517105353602425;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int length = 593;
    int walk = 43;
    vector<int> width = {311, 735, 145};
    vector<int> swim = {94, 57, 24};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 24.424179011925297;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int length = 310;
    int walk = 31;
    vector<int> width = {113, 937, 888};
    vector<int> swim = {23, 2, 21};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 517.7394187366211;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int length = 87;
    int walk = 18;
    vector<int> width = {839, 328, 747};
    vector<int> swim = {64, 7, 14};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 113.3805319183649;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int length = 628;
    int walk = 73;
    vector<int> width = {46, 765, 389};
    vector<int> swim = {35, 25, 94};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 38.99598774222261;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int length = 407;
    int walk = 68;
    vector<int> width = {692, 662, 114};
    vector<int> swim = {29, 65, 32};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 38.81645919705065;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int length = 67;
    int walk = 48;
    vector<int> width = {781, 456, 187};
    vector<int> swim = {28, 69, 77};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 36.96323250634985;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int length = 989;
    int walk = 33;
    vector<int> width = {614, 233, 894};
    vector<int> swim = {1, 17, 43};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 658.0423724301088;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int length = 294;
    int walk = 4;
    vector<int> width = {602, 858, 310};
    vector<int> swim = {79, 25, 9};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 76.97596638669066;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int length = 557;
    int walk = 12;
    vector<int> width = {116, 836, 932};
    vector<int> swim = {59, 17, 22};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 97.07663104364889;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int length = 761;
    int walk = 39;
    vector<int> width = {327, 471, 664};
    vector<int> swim = {56, 52, 50};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 31.75724168700356;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int length = 999;
    int walk = 46;
    vector<int> width = {181, 517, 10};
    vector<int> swim = {67, 10, 42};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 66.48183264749993;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int length = 136;
    int walk = 75;
    vector<int> width = {754, 73, 59};
    vector<int> swim = {43, 16, 30};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 24.323918002565193;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int length = 45;
    int walk = 28;
    vector<int> width = {786, 523, 677};
    vector<int> swim = {29, 51, 82};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 45.62409045159258;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int length = 843;
    int walk = 20;
    vector<int> width = {510, 821, 324};
    vector<int> swim = {86, 38, 9};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 67.55406014205694;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int length = 854;
    int walk = 85;
    vector<int> width = {266, 872, 549};
    vector<int> swim = {14, 24, 61};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 69.9108380055342;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int length = 557;
    int walk = 87;
    vector<int> width = {780, 532, 345};
    vector<int> swim = {80, 48, 20};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 39.654756741789996;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int length = 447;
    int walk = 98;
    vector<int> width = {831, 776, 673};
    vector<int> swim = {81, 6, 40};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 157.4034961575639;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int length = 321;
    int walk = 44;
    vector<int> width = {849, 181, 829};
    vector<int> swim = {35, 47, 70};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 40.48115784296614;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int length = 319;
    int walk = 60;
    vector<int> width = {256, 570, 606};
    vector<int> swim = {60, 84, 40};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 26.774690457728852;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int length = 552;
    int walk = 81;
    vector<int> width = {949, 215, 233};
    vector<int> swim = {88, 46, 11};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 38.14455919341227;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int length = 947;
    int walk = 8;
    vector<int> width = {199, 838, 813};
    vector<int> swim = {96, 80, 87};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 24.583049189630813;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int length = 88;
    int walk = 19;
    vector<int> width = {761, 540, 47};
    vector<int> swim = {75, 22, 82};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 35.318378376304636;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int length = 114;
    int walk = 9;
    vector<int> width = {349, 94, 877};
    vector<int> swim = {43, 58, 50};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 27.37782062653215;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int length = 638;
    int walk = 99;
    vector<int> width = {122, 12, 619};
    vector<int> swim = {35, 8, 72};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 17.11633956822566;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int length = 491;
    int walk = 67;
    vector<int> width = {43, 665, 453};
    vector<int> swim = {29, 51, 43};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 27.169025630459775;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int length = 126;
    int walk = 53;
    vector<int> width = {685, 558, 34};
    vector<int> swim = {7, 56, 61};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 108.58549824021065;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int length = 53;
    int walk = 6;
    vector<int> width = {908, 460, 302};
    vector<int> swim = {96, 86, 68};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 19.257881810598185;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int length = 537;
    int walk = 74;
    vector<int> width = {250, 518, 310};
    vector<int> swim = {31, 43, 31};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 33.53098194495919;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int length = 102;
    int walk = 89;
    vector<int> width = {921, 907, 271};
    vector<int> swim = {28, 96, 20};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 55.93469727895131;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int length = 199;
    int walk = 96;
    vector<int> width = {805, 106, 577};
    vector<int> swim = {20, 59, 17};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 76.59765877394904;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int length = 167;
    int walk = 92;
    vector<int> width = {356, 304, 874};
    vector<int> swim = {9, 42, 36};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 71.36418177355154;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int length = 966;
    int walk = 99;
    vector<int> width = {809, 62, 553};
    vector<int> swim = {77, 26, 41};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 31.128434370498113;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int length = 303;
    int walk = 64;
    vector<int> width = {40, 346, 406};
    vector<int> swim = {27, 19, 21};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 41.730025470435145;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int length = 83;
    int walk = 60;
    vector<int> width = {527, 914, 581};
    vector<int> swim = {51, 60, 29};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 45.63607787572167;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int length = 734;
    int walk = 9;
    vector<int> width = {263, 697, 373};
    vector<int> swim = {37, 89, 31};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 29.877137586542624;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int length = 664;
    int walk = 92;
    vector<int> width = {711, 649, 758};
    vector<int> swim = {23, 93, 66};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 51.0493659167597;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int length = 251;
    int walk = 80;
    vector<int> width = {293, 416, 1000};
    vector<int> swim = {13, 8, 21};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 123.26913569830492;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int length = 494;
    int walk = 46;
    vector<int> width = {661, 308, 488};
    vector<int> swim = {7, 90, 18};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 127.45692621793788;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int length = 593;
    int walk = 51;
    vector<int> width = {716, 732, 169};
    vector<int> swim = {51, 38, 32};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 41.018447555490496;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int length = 995;
    int walk = 45;
    vector<int> width = {934, 711, 369};
    vector<int> swim = {21, 34, 4};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 167.64403179133967;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int length = 911;
    int walk = 85;
    vector<int> width = {256, 875, 457};
    vector<int> swim = {26, 66, 37};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 40.08971926083948;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int length = 702;
    int walk = 46;
    vector<int> width = {84, 60, 666};
    vector<int> swim = {63, 29, 5};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 145.84958532668242;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int length = 150;
    int walk = 66;
    vector<int> width = {125, 94, 866};
    vector<int> swim = {50, 71, 23};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 41.81541544551314;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int length = 161;
    int walk = 20;
    vector<int> width = {944, 85, 829};
    vector<int> swim = {83, 44, 13};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 77.21348467778316;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int length = 728;
    int walk = 35;
    vector<int> width = {335, 603, 829};
    vector<int> swim = {40, 62, 76};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 31.235343404112808;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int length = 632;
    int walk = 21;
    vector<int> width = {831, 943, 327};
    vector<int> swim = {4, 12, 59};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 296.8753293921628;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int length = 677;
    int walk = 5;
    vector<int> width = {793, 437, 511};
    vector<int> swim = {91, 14, 11};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 88.84845402789122;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int length = 425;
    int walk = 32;
    vector<int> width = {183, 541, 440};
    vector<int> swim = {66, 51, 42};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 25.35718130871519;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int length = 840;
    int walk = 36;
    vector<int> width = {474, 806, 762};
    vector<int> swim = {5, 36, 34};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 145.40920036869377;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int length = 6;
    int walk = 100;
    vector<int> width = {2, 3, 4};
    vector<int> swim = {77, 88, 99};
    EllysThreeRivers* pObj = new EllysThreeRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, swim);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12049782476139667;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23009324&rd=14735&pm=11911
********************************************************************************
#line 7 "EllysThreeRivers.cpp"   
#include <cstring>   
#include <cstdio>   
#include <cmath>   
#include <algorithm>   
#include <iostream>   
#include <sstream>   
#include <vector>   
#include <string>   
#include <map>   
#include <set>   
#include <queue>   
using namespace std;   
   
#define PB push_back   
#define MP make_pair   
   
 
typedef long long int64;   
double eps = 1e-15; 
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;} 
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;} 
template<class T> inline T sqr(T x){return x*x;} 
#define zero(a) memset(a, 0, sizeof(a)) 
 
 
class EllysThreeRivers   
{   
 
  public:   
  double L, W; 
  double w[4],sw[4]; 
    double getMin(int length, int walk, vector <int> width, vector <int> swim)   
    {   
      L = length, W = walk; 
      for(int i=0; i<3; i++) 
        w[i] = width[i], sw[i] = swim[i]; 
      double nowx = L/2, nowy = L/2, nowz=L/2; 
      double nowl = L; 
      double ok[5]; 
      double tans = 1e9, tx = -1, ty = -1, tz = -1, tt; 
      double x,y,z, dx = nowl/10; 
      for(int k=0; k<100; k++) 
      { 
        tans = 1e9, tx = -1, ty = -1, tz = -1, tt; 
        dx = nowl/10; 
        for(x = nowx - 5*dx; x<nowx + 5*dx; x+=dx){ 
          if(x<0)continue; 
          for(y = nowy - 5*dx; y<nowy + 5*dx; y+=dx){ 
            if(y<0)continue; 
            if(x+y+eps>L)continue; 
            for(z = nowz - 5*dx; z<nowz + 5*dx; z+=dx) 
            { 
              if(z<0)continue; 
              if(x+y+z+eps>L)continue; 
              ok[0] = x, ok[1] = y, ok[2] = z; 
              tt = get(ok); 
              //cout<<tt<<endl; 
              if(tans>tt){ 
              //  cout<<"NOW"; 
                tans = tt; 
                tx = x, ty = y, tz = z; 
              } 
            } 
          } 
        } 
        nowl *= 0.8; 
        nowx = tx, nowy = ty, nowz = tz; 
      } 
      return tans; 
    }   
    double get(double ll[]) 
    { 
      double ans = 0; 
      for(int i=0 ;i<3; i++) 
        ans += sqrt((double)sqr(ll[i]) + sqr(w[i]))/sw[i]; 
      ans += (L-ll[0]-ll[1]-ll[2]) / W; 
      return ans; 
    } 
 
};   
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/