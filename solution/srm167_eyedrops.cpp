/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1750
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

class EyeDrops {
public:
    double closest(int sleepTime, int k);
};

double EyeDrops::closest(int sleepTime, int k) {
    double ret;
    return ret;
}


int test0() {
    int sleepTime = 8;
    int k = 2;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 720.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int sleepTime = 13;
    int k = 2;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 660.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int sleepTime = 9;
    int k = 3;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 450.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int sleepTime = 8;
    int k = 4;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 320.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int sleepTime = 23;
    int k = 1;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1440.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int sleepTime = 9;
    int k = 8;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 128.57142857142856;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int sleepTime = 0;
    int k = 50;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 28.799999999999997;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int sleepTime = 0;
    int k = 1;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1440.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int sleepTime = 6;
    int k = 7;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 180.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int sleepTime = 7;
    int k = 7;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 170.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int sleepTime = 8;
    int k = 8;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 137.14285714285714;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int sleepTime = 15;
    int k = 10;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 60.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int sleepTime = 10;
    int k = 20;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 44.21052631578947;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int sleepTime = 8;
    int k = 3;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 480.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int sleepTime = 0;
    int k = 49;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 29.387755102040817;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int sleepTime = 1;
    int k = 49;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 28.75;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int sleepTime = 2;
    int k = 49;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 27.5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int sleepTime = 3;
    int k = 49;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 26.25;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int sleepTime = 4;
    int k = 49;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int sleepTime = 5;
    int k = 49;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 23.75;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int sleepTime = 6;
    int k = 49;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 22.5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int sleepTime = 1;
    int k = 7;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 205.7142857142857;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int sleepTime = 8;
    int k = 2;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 720.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int sleepTime = 9;
    int k = 8;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 128.57142857142856;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int sleepTime = 23;
    int k = 1;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1440.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int sleepTime = 23;
    int k = 2;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 60.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int sleepTime = 20;
    int k = 2;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 240.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int sleepTime = 6;
    int k = 3;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 480.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int sleepTime = 1;
    int k = 5;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 288.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int sleepTime = 0;
    int k = 25;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 57.599999999999994;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int sleepTime = 1;
    int k = 3;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 480.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int sleepTime = 14;
    int k = 2;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 600.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int sleepTime = 1;
    int k = 2;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 720.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int sleepTime = 4;
    int k = 5;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 288.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int sleepTime = 22;
    int k = 4;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int sleepTime = 6;
    int k = 2;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 720.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int sleepTime = 15;
    int k = 2;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 540.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int sleepTime = 10;
    int k = 2;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 720.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int sleepTime = 11;
    int k = 2;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 720.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int sleepTime = 7;
    int k = 3;
    EyeDrops* pObj = new EyeDrops();
    clock_t start = clock();
    double result = pObj->closest(sleepTime, k);
    clock_t end = clock();
    delete pObj;
    double expected = 480.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7494608&rd=4640&pm=1750
********************************************************************************
//program framework generated with WishingBone's parser :)-
 
//common header
#ifdef WIN32
#  pragma warning(disable:4786)
#  define for if (0); else for
#endif
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <bitset>
#include <valarray>
#include <algorithm>
#include <functional>
#include <numeric>
#include <complex>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
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
#define s2d(s,d) istringstream(s)>>d
#define d2s(d,s) {ostringstream t;t<<d;s=t.str();}
int gcd(int a,int b){for(int c;b;c=a,a=b,b=c%b);return a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
template <class T>
void remove(vector<T>& v,const T&e){
  v.resize(remove(v.begin(),v.end(),e)-v.begin());
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
  for (vector<string>::iterator i=tmp.begin();i!=tmp.end();i++)
    {int t;s2d(*i,t);ret.push_back(t);}
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
  int get(string str){
    if (m.find(str)==m.end()){
      m[str]=v.size();
      v.push_back(str);
    }
    return m[str];
  }
  string get(int i){
    return v[i];
  }
};
 
 
 
class EyeDrops{
public:
  double closest(int sleepTime,int k){
    double x = 24.0 * 60 / k;
    if (x>= sleepTime * 60) {
      return x;
    } else {
      return (24.0 - sleepTime) / (k - 1) * 60;
    }
  }
};
 
 
 
 
#ifdef WIN32
void test0(){
  int sleepTime=8;
  int k=2;
  double closest= 720.0;
  EyeDrops _EyeDrops;
  double ret=_EyeDrops.closest(sleepTime,k);
  cout<<"--------------------test 0--------------------"<<endl;
  cout<<"sleepTime = "<<sleepTime<<endl;
  cout<<"k = "<<k<<endl;
  cout<<"expected to return "<<closest<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==closest)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test1(){
  int sleepTime=9;
  int k=3;
  double closest= 450.0;
  EyeDrops _EyeDrops;
  double ret=_EyeDrops.closest(sleepTime,k);
  cout<<"--------------------test 1--------------------"<<endl;
  cout<<"sleepTime = "<<sleepTime<<endl;
  cout<<"k = "<<k<<endl;
  cout<<"expected to return "<<closest<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==closest)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test2(){
  int sleepTime=23;
  int k=1;
  double closest= 1440.0;
  EyeDrops _EyeDrops;
  double ret=_EyeDrops.closest(sleepTime,k);
  cout<<"--------------------test 2--------------------"<<endl;
  cout<<"sleepTime = "<<sleepTime<<endl;
  cout<<"k = "<<k<<endl;
  cout<<"expected to return "<<closest<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==closest)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test3(){
  int sleepTime=9;
  int k=8;
  double closest= 128.57142857142856;
  EyeDrops _EyeDrops;
  double ret=_EyeDrops.closest(sleepTime,k);
  cout<<"--------------------test 3--------------------"<<endl;
  cout<<"sleepTime = "<<sleepTime<<endl;
  cout<<"k = "<<k<<endl;
  cout<<"expected to return "<<closest<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==closest)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
int main(){
  test0();
  test1();
  test2();
  test3();
  return 0;
}
#endif

********************************************************************************
*******************************************************************************/