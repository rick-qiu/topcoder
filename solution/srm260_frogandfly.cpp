/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4750
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

class FrogAndFly {
public:
    double visibility(int hwall, int dfrog, int dfly, int ylow, int yhigh, vector<int> xwindow, vector<int> ywindow);
};

double FrogAndFly::visibility(int hwall, int dfrog, int dfly, int ylow, int yhigh, vector<int> xwindow, vector<int> ywindow) {
    double ret;
    return ret;
}


int test0() {
    int hwall = 10;
    int dfrog = 10;
    int dfly = 10;
    int ylow = 5;
    int yhigh = 15;
    vector<int> xwindow = {5, 5, 15, 15};
    vector<int> ywindow = {5, 15, 15, 5};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int hwall = 14;
    int dfrog = 10;
    int dfly = 10;
    int ylow = 5;
    int yhigh = 15;
    vector<int> xwindow = {5, 5, 15, 15};
    vector<int> ywindow = {5, 15, 15, 5};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int hwall = 10;
    int dfrog = 5;
    int dfly = 10;
    int ylow = 5;
    int yhigh = 15;
    vector<int> xwindow = {10, 20, 15};
    vector<int> ywindow = {5, 5, 15};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4166666666666665;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int hwall = 0;
    int dfrog = 1;
    int dfly = 20;
    int ylow = 10;
    int yhigh = 100;
    vector<int> xwindow = {0, 10, 20, 30, 15};
    vector<int> ywindow = {20, 10, 10, 20, 40};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int hwall = 100;
    int dfrog = 30;
    int dfly = 10;
    int ylow = 20;
    int yhigh = 40;
    vector<int> xwindow = {10, 20, 30, 20};
    vector<int> ywindow = {20, 10, 20, 30};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
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
    int hwall = 100;
    int dfrog = 23;
    int dfly = 45;
    int ylow = 0;
    int yhigh = 100;
    vector<int> xwindow = {10, 20, 20, 10};
    vector<int> ywindow = {5, 10, 100, 100};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
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
    int hwall = 50;
    int dfrog = 20;
    int dfly = 40;
    int ylow = 40;
    int yhigh = 60;
    vector<int> xwindow = {0, 0, 100, 100};
    vector<int> ywindow = {0, 30, 30, 0};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
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
    int hwall = 10;
    int dfrog = 50;
    int dfly = 10;
    int ylow = 60;
    int yhigh = 100;
    vector<int> xwindow = {0, 10, 30, 40, 20};
    vector<int> ywindow = {0, 30, 50, 30, 0};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
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
    int hwall = 40;
    int dfrog = 20;
    int dfly = 30;
    int ylow = 10;
    int yhigh = 50;
    vector<int> xwindow = {0, 0, 10, 25, 75, 90, 100, 100, 90, 75, 25, 10};
    vector<int> ywindow = {75, 25, 10, 0, 0, 10, 25, 75, 90, 100, 100, 90};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4448559670781891;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int hwall = 50;
    int dfrog = 100;
    int dfly = 100;
    int ylow = 0;
    int yhigh = 100;
    vector<int> xwindow = {20, 30, 40};
    vector<int> ywindow = {10, 90, 50};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int hwall = 50;
    int dfrog = 100;
    int dfly = 100;
    int ylow = 40;
    int yhigh = 60;
    vector<int> xwindow = {20, 30, 40};
    vector<int> ywindow = {10, 90, 50};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int hwall = 30;
    int dfrog = 1;
    int dfly = 100;
    int ylow = 0;
    int yhigh = 100;
    vector<int> xwindow = {1, 1, 2, 2};
    vector<int> ywindow = {1, 2, 2, 1};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6971499999999875;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int hwall = 50;
    int dfrog = 100;
    int dfly = 1;
    int ylow = 0;
    int yhigh = 100;
    vector<int> xwindow = {10, 30, 20};
    vector<int> ywindow = {45, 45, 55};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25083333333333335;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int hwall = 50;
    int dfrog = 10;
    int dfly = 10;
    int ylow = 43;
    int yhigh = 87;
    vector<int> xwindow = {50, 58, 65, 71, 76, 80, 83, 85, 86, 87, 88, 89, 90, 91, 92, 93, 93, 92, 91, 90, 89, 88, 87, 86, 85, 83, 80, 76, 71, 65, 58, 50, 49, 41, 34, 28, 23, 19, 16, 14, 13, 12, 11, 10, 9, 8, 7, 6, 6, 7};
    vector<int> ywindow = {6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 19, 23, 28, 34, 41, 49, 50, 58, 65, 71, 76, 80, 83, 85, 86, 87, 88, 89, 90, 91, 92, 93, 93, 92, 91, 90, 89, 88, 87, 86, 85, 83, 80, 76, 71, 65, 58, 50, 49, 41};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7312884765428392;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int hwall = 53;
    int dfrog = 65;
    int dfly = 85;
    int ylow = 50;
    int yhigh = 87;
    vector<int> xwindow = {1, 3, 35, 64, 79, 96, 98, 98, 88, 45, 1};
    vector<int> ywindow = {41, 0, 0, 2, 5, 27, 54, 76, 96, 99, 98};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6920380290710596;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int hwall = 27;
    int dfrog = 25;
    int dfly = 80;
    int ylow = 13;
    int yhigh = 34;
    vector<int> xwindow = {0, 5, 11, 26, 72, 81, 90, 97, 99, 99, 98, 92, 47, 4};
    vector<int> ywindow = {88, 29, 5, 4, 1, 1, 13, 23, 48, 67, 87, 100, 100, 99};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6546875875058483;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int hwall = 84;
    int dfrog = 87;
    int dfly = 61;
    int ylow = 12;
    int yhigh = 70;
    vector<int> xwindow = {0, 3, 66, 93, 100, 100, 92, 80, 51, 29, 9, 2};
    vector<int> ywindow = {55, 2, 7, 12, 53, 70, 88, 97, 99, 100, 81, 62};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0019548653190851763;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int hwall = 73;
    int dfrog = 12;
    int dfly = 7;
    int ylow = 56;
    int yhigh = 88;
    vector<int> xwindow = {0, 99, 100, 100, 94, 21, 9};
    vector<int> ywindow = {1, 4, 81, 98, 100, 100, 99};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.261934327475873;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int hwall = 76;
    int dfrog = 26;
    int dfly = 84;
    int ylow = 4;
    int yhigh = 25;
    vector<int> xwindow = {0, 2, 12, 34, 45, 83, 93, 99, 100, 95, 89, 35};
    vector<int> ywindow = {98, 41, 7, 3, 2, 1, 1, 35, 67, 93, 100, 100};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
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
    int hwall = 37;
    int dfrog = 1;
    int dfly = 53;
    int ylow = 33;
    int yhigh = 43;
    vector<int> xwindow = {0, 1, 2, 7, 18, 94, 96, 100, 85, 75, 1};
    vector<int> ywindow = {97, 50, 11, 3, 0, 4, 18, 84, 95, 100, 99};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6259195009356726;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int hwall = 40;
    int dfrog = 6;
    int dfly = 55;
    int ylow = 0;
    int yhigh = 47;
    vector<int> xwindow = {3, 4, 8, 57, 86, 100, 100, 95, 85, 70, 60, 20, 13};
    vector<int> ywindow = {80, 6, 3, 0, 0, 7, 68, 87, 99, 100, 100, 96, 95};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16938127855339807;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int hwall = 13;
    int dfrog = 3;
    int dfly = 3;
    int ylow = 78;
    int yhigh = 89;
    vector<int> xwindow = {0, 3, 7, 32, 46, 90, 99, 100, 100, 98, 65, 35, 7};
    vector<int> ywindow = {27, 9, 6, 1, 1, 2, 35, 55, 71, 91, 97, 100, 94};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int hwall = 2;
    int dfrog = 98;
    int dfly = 66;
    int ylow = 17;
    int yhigh = 64;
    vector<int> xwindow = {0, 2, 6, 57, 87, 95, 99, 98, 90, 51, 30, 15, 6, 1};
    vector<int> ywindow = {44, 5, 3, 1, 1, 10, 30, 82, 98, 100, 100, 99, 98, 87};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int hwall = 5;
    int dfrog = 86;
    int dfly = 54;
    int ylow = 16;
    int yhigh = 99;
    vector<int> xwindow = {1, 3, 9, 27, 50, 80, 98, 100, 87, 55, 30, 6};
    vector<int> ywindow = {85, 24, 7, 3, 0, 2, 10, 58, 96, 100, 99, 97};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999998;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int hwall = 34;
    int dfrog = 8;
    int dfly = 71;
    int ylow = 45;
    int yhigh = 94;
    vector<int> xwindow = {1, 2, 85, 92, 100, 100, 97, 38, 9, 1};
    vector<int> ywindow = {25, 2, 5, 7, 11, 48, 98, 94, 91, 85};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int hwall = 85;
    int dfrog = 100;
    int dfly = 61;
    int ylow = 46;
    int yhigh = 47;
    vector<int> xwindow = {0, 1, 2, 16, 89, 99, 100, 79, 65, 1, 0};
    vector<int> ywindow = {57, 15, 5, 0, 0, 2, 84, 94, 100, 95, 80};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int hwall = 41;
    int dfrog = 44;
    int dfly = 40;
    int ylow = 1;
    int yhigh = 90;
    vector<int> xwindow = {1, 2, 36, 95, 100, 99, 81, 45, 6, 3, 2};
    vector<int> ywindow = {22, 6, 0, 2, 24, 91, 100, 100, 98, 83, 53};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6344289648789734;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int hwall = 40;
    int dfrog = 33;
    int dfly = 32;
    int ylow = 12;
    int yhigh = 60;
    vector<int> xwindow = {3, 6, 10, 45, 79, 96, 100, 98, 96, 37, 3};
    vector<int> ywindow = {63, 13, 0, 0, 3, 12, 42, 96, 99, 100, 94};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5759033833442064;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int hwall = 48;
    int dfrog = 37;
    int dfly = 16;
    int ylow = 44;
    int yhigh = 81;
    vector<int> xwindow = {0, 4, 28, 85, 93, 99, 99, 97, 89, 17, 0};
    vector<int> ywindow = {20, 8, 0, 0, 10, 37, 85, 91, 100, 100, 97};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5993962766833667;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int hwall = 51;
    int dfrog = 78;
    int dfly = 40;
    int ylow = 16;
    int yhigh = 96;
    vector<int> xwindow = {1, 13, 20, 81, 90, 96, 98, 90, 85, 29, 19, 7, 1};
    vector<int> ywindow = {12, 5, 3, 0, 1, 43, 89, 96, 99, 100, 100, 99, 50};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5257135440303358;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int hwall = 69;
    int dfrog = 11;
    int dfly = 5;
    int ylow = 20;
    int yhigh = 47;
    vector<int> xwindow = {1, 6, 15, 54, 93, 97, 100, 98, 78, 24, 4};
    vector<int> ywindow = {49, 5, 4, 0, 0, 9, 19, 93, 100, 96, 85};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11476783219457962;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int hwall = 9;
    int dfrog = 32;
    int dfly = 16;
    int ylow = 57;
    int yhigh = 95;
    vector<int> xwindow = {0, 4, 60, 93, 97, 100, 92, 55, 3, 1, 0};
    vector<int> ywindow = {14, 0, 3, 7, 16, 52, 97, 99, 100, 91, 81};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int hwall = 78;
    int dfrog = 61;
    int dfly = 62;
    int ylow = 1;
    int yhigh = 9;
    vector<int> xwindow = {0, 4, 9, 89, 98, 99, 98, 90, 66, 31, 6, 3};
    vector<int> ywindow = {16, 3, 3, 4, 5, 43, 59, 90, 100, 99, 94, 71};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int hwall = 53;
    int dfrog = 74;
    int dfly = 87;
    int ylow = 30;
    int yhigh = 45;
    vector<int> xwindow = {0, 1, 4, 10, 59, 91, 95, 100, 99, 98, 83, 73, 6};
    vector<int> ywindow = {94, 60, 31, 0, 2, 4, 27, 69, 85, 88, 97, 98, 96};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2788174537911814;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int hwall = 0;
    int dfrog = 40;
    int dfly = 19;
    int ylow = 6;
    int yhigh = 76;
    vector<int> xwindow = {2, 10, 20, 98, 100, 98, 48, 5, 4, 3};
    vector<int> ywindow = {12, 0, 0, 4, 23, 90, 100, 99, 81, 51};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int hwall = 11;
    int dfrog = 6;
    int dfly = 22;
    int ylow = 38;
    int yhigh = 94;
    vector<int> xwindow = {0, 78, 83, 99, 99, 80, 10, 4, 0};
    vector<int> ywindow = {4, 2, 4, 26, 82, 95, 96, 93, 45};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999999;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int hwall = 15;
    int dfrog = 40;
    int dfly = 71;
    int ylow = 7;
    int yhigh = 78;
    vector<int> xwindow = {0, 57, 100, 94, 14, 5, 1};
    vector<int> ywindow = {0, 0, 7, 100, 100, 97, 77};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.96771995663966;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int hwall = 87;
    int dfrog = 57;
    int dfly = 65;
    int ylow = 2;
    int yhigh = 65;
    vector<int> xwindow = {0, 1, 34, 98, 100, 100, 80, 27, 1, 0};
    vector<int> ywindow = {49, 2, 1, 7, 15, 31, 98, 93, 83, 82};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int hwall = 55;
    int dfrog = 32;
    int dfly = 9;
    int ylow = 33;
    int yhigh = 39;
    vector<int> xwindow = {0, 4, 23, 69, 96, 97, 84, 76, 13, 1, 0};
    vector<int> ywindow = {48, 10, 2, 0, 16, 78, 90, 97, 95, 83, 69};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3739715387351736;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int hwall = 53;
    int dfrog = 18;
    int dfly = 39;
    int ylow = 40;
    int yhigh = 67;
    vector<int> xwindow = {0, 3, 21, 97, 100, 100, 88, 7, 0};
    vector<int> ywindow = {46, 0, 0, 3, 70, 91, 98, 91, 90};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4616293016303041;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int hwall = 0;
    int dfrog = 24;
    int dfly = 58;
    int ylow = 39;
    int yhigh = 54;
    vector<int> xwindow = {0, 1, 10, 81, 95, 98, 100, 99, 93, 37, 11, 6, 5};
    vector<int> ywindow = {48, 10, 2, 0, 1, 6, 23, 70, 95, 98, 96, 91, 87};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int hwall = 59;
    int dfrog = 1;
    int dfly = 2;
    int ylow = 8;
    int yhigh = 67;
    vector<int> xwindow = {1, 2, 8, 94, 98, 98, 95, 83, 73, 15, 1};
    vector<int> ywindow = {38, 11, 0, 0, 10, 74, 83, 95, 99, 95, 94};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12271609628922586;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int hwall = 16;
    int dfrog = 92;
    int dfly = 5;
    int ylow = 13;
    int yhigh = 47;
    vector<int> xwindow = {0, 1, 15, 28, 75, 81, 100, 100, 85, 2};
    vector<int> ywindow = {28, 9, 4, 3, 2, 2, 7, 81, 100, 94};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8735652214379483;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int hwall = 90;
    int dfrog = 68;
    int dfly = 28;
    int ylow = 50;
    int yhigh = 63;
    vector<int> xwindow = {1, 2, 12, 24, 72, 76, 91, 99, 97, 93, 26};
    vector<int> ywindow = {91, 50, 10, 1, 1, 2, 9, 47, 95, 97, 100};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int hwall = 75;
    int dfrog = 12;
    int dfly = 37;
    int ylow = 7;
    int yhigh = 31;
    vector<int> xwindow = {0, 1, 83, 100, 99, 98, 92, 85, 1};
    vector<int> ywindow = {46, 0, 0, 50, 86, 94, 97, 98, 100};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int hwall = 74;
    int dfrog = 9;
    int dfly = 57;
    int ylow = 6;
    int yhigh = 22;
    vector<int> xwindow = {1, 6, 12, 37, 84, 98, 98, 60, 40, 6, 3, 1};
    vector<int> ywindow = {15, 8, 1, 2, 5, 11, 100, 99, 98, 95, 91, 59};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int hwall = 64;
    int dfrog = 58;
    int dfly = 86;
    int ylow = 87;
    int yhigh = 89;
    vector<int> xwindow = {0, 1, 9, 67, 93, 99, 98, 95, 93, 75, 16, 9};
    vector<int> ywindow = {90, 16, 7, 4, 5, 9, 36, 67, 86, 96, 100, 100};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7456110582621194;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int hwall = 3;
    int dfrog = 22;
    int dfly = 62;
    int ylow = 23;
    int yhigh = 73;
    vector<int> xwindow = {2, 10, 13, 34, 90, 100, 95, 33, 10, 4, 2};
    vector<int> ywindow = {10, 2, 1, 1, 2, 22, 100, 100, 97, 95, 20};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int hwall = 20;
    int dfrog = 43;
    int dfly = 82;
    int ylow = 19;
    int yhigh = 99;
    vector<int> xwindow = {0, 1, 4, 31, 85, 98, 99, 97, 78, 27, 3, 1, 0};
    vector<int> ywindow = {45, 15, 1, 0, 0, 5, 14, 89, 100, 95, 90, 76, 62};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9843522430679414;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int hwall = 45;
    int dfrog = 99;
    int dfly = 48;
    int ylow = 15;
    int yhigh = 57;
    vector<int> xwindow = {2, 8, 9, 67, 92, 100, 100, 99, 92, 14, 10, 2};
    vector<int> ywindow = {27, 3, 2, 0, 3, 9, 52, 92, 97, 100, 99, 35};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4967914799751301;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int hwall = 99;
    int dfrog = 84;
    int dfly = 63;
    int ylow = 8;
    int yhigh = 63;
    vector<int> xwindow = {1, 31, 61, 97, 100, 96, 25, 9, 3, 1};
    vector<int> ywindow = {6, 0, 0, 5, 86, 100, 100, 93, 82, 50};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int hwall = 50;
    int dfrog = 71;
    int dfly = 81;
    int ylow = 70;
    int yhigh = 73;
    vector<int> xwindow = {0, 3, 10, 76, 85, 90, 99, 100, 93, 85, 69, 9};
    vector<int> ywindow = {50, 29, 0, 1, 4, 12, 34, 46, 91, 96, 99, 100};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7679828504831434;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int hwall = 31;
    int dfrog = 20;
    int dfly = 94;
    int ylow = 23;
    int yhigh = 72;
    vector<int> xwindow = {0, 1, 6, 37, 63, 75, 86, 98, 100, 97, 12};
    vector<int> ywindow = {95, 33, 3, 1, 0, 0, 1, 12, 51, 99, 100};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9018835101930563;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int hwall = 80;
    int dfrog = 5;
    int dfly = 48;
    int ylow = 32;
    int yhigh = 51;
    vector<int> xwindow = {0, 21, 85, 99, 100, 99, 80, 36, 18, 0};
    vector<int> ywindow = {13, 4, 0, 11, 69, 82, 96, 100, 100, 98};
    FrogAndFly* pObj = new FrogAndFly();
    clock_t start = clock();
    double result = pObj->visibility(hwall, dfrog, dfly, ylow, yhigh, xwindow, ywindow);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=7994&pm=4750
********************************************************************************
#include <algorithm> 
#include <cmath> 
#include <cstring> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
class FrogAndFly {  
   public:  
   double visibility(int hwall, int dfrog, int dfly, int ylow, int yhigh, vector <int> xwindow, vector <int> ywindow) {  
      int n = xwindow.size(); 
      xwindow.push_back( xwindow[0] ); 
      ywindow.push_back( ywindow[0] ); 
      double miny = 10000, maxy = -10000; 
      for( int i = 0; i < n; ++i ) miny <?= ywindow[i]; 
      for( int i = 0; i < n; ++i ) maxy >?= ywindow[i]; 
      double P = 0; 
      for( int i = 0; i < n; ++i ) P += xwindow[i]*ywindow[i+1] - ywindow[i]*xwindow[i+1]; 
      P = fabs( P ) / 2; 
 
      int iterations = 30000000 / n; 
 
      double dy = (maxy-miny)/iterations; 
      double ret = 0; 
      for( int i = 0; i < iterations; ++i ) {   
         double y = miny + i*dy + dy/2; 
         double x1 = 10000, x2 = -10000; 
         for( int i = 0; i < n; ++i ) { 
            if( (ywindow[i] < y) ^ (ywindow[i+1] < y) ) { 
               double x = xwindow[i] + (xwindow[i+1]-xwindow[i]) * (double)(y-ywindow[i])/(double)(ywindow[i+1]-ywindow[i]); 
               x1 <?= x; 
               x2 >?= x; 
            } 
         } 
         if( x1 > x2 ) continue; 
         double fy = 0; 
         double y2 = hwall+(hwall-y)*dfrog/dfly; 
         if( y2 < ylow ) fy = 1; 
         else if( y2 > yhigh ) fy = 0; 
         else fy = (yhigh-y2)/(yhigh-ylow); 
         ret += dy*(x2-x1) / P * fy; 
      } 
      return ret; 
   }  
    
 
 
    
 
    
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/